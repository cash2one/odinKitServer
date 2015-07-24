#ifdef _WIN32
#include "IOCP.h"
#include "Net.h"
#include "SocketOps.h"
#include "Log.h"

///////////////////////////////////////////////////////////////////////////////////////////////
//
CIOCP::CIOCP(CNet * net)
{
	m_pNet = net;
}

CIOCP::~CIOCP()
{
	Terminate();
}

bool CIOCP::Startup(int port, int connectmax, int sendbuffsize, int recvbuffsize)
{
	//���˿ںϷ���
	if( port < 1024 )
	{			
		Log.Error("[IOCP]�����ô���1024�Ķ˿�\n");
		return false;
	}

	//��ʼ��Winsock����
	if( !SocketOps::NetStartup() )
	{
		Log.Error("[IOCP]WSAStartup��ʼ��ʧ�ܣ�%d\n", SocketOps::GetLastError());
		return false;
	}

	//������ɶ˿ھ��
	m_hCompletionPort = CreateIoCompletionPort(INVALID_HANDLE_VALUE, NULL, 0, 0);	
	if( !m_hCompletionPort )
	{
		Log.Error("[IOCP]������ɶ˿�ʧ�ܣ�%d\n" , SocketOps::GetLastError());
		return  false;
	}

	m_ListenCount = 0;
	m_ConnectMax = connectmax;
	m_SockerSendBuffsize = sendbuffsize;
	m_SockerRecvBuffsize = recvbuffsize;

	//���������˿�
	if( !_CreateListenSocket(port) )
	{
		return false;
	}

	//���㹤���߳�����
	SYSTEM_INFO	systemInfo;
	GetSystemInfo( &systemInfo );
	int nProcessCount = systemInfo.dwNumberOfProcessors * 2 + 2;

	//���������߳�
	for( int i=0; i<nProcessCount; ++i )
	{
		ThreadLib::Create(WorkThread, this);
	}

	//���������߳�
	ThreadLib::Create(ListenThread, this);

	//����socket�ر��߳�
	ThreadLib::Create(CloseThread, this);

	Log.Notice("[IOCP]Net Startup by IOCP Model");

	return true;
}

void CIOCP::Terminate()
{
	if( m_hCompletionPort )
	{
		PostQueuedCompletionStatus(m_hCompletionPort, 0, (DWORD) NULL, NULL);			
		CloseHandle(m_hCompletionPort);
	}

	if( !SocketOps::NetClose() )
	{
		Log.Error("[IOCP]�ر�winsock����ʱ����:%d", SocketOps::GetLastError());
	}
}

SOCKET CIOCP::Connect(const char * ip, int port)
{
	CSocker * s = _GetFreeSocker();
	if( !s )
	{
		Log.Error("[IOCP]Create Socker Failed");
		return INVALID_SOCKET;
	}

	SocketOps::DisableBuffering(s->m_socket);

	sockaddr_in add;
	add.sin_family = AF_INET;
	add.sin_port = htons(port);
	add.sin_addr.s_addr = inet_addr(ip);

	if( connect(s->m_socket, (struct sockaddr*)&add, sizeof(sockaddr)) < 0 )
	{
		Log.Error("[IOCP]Socket Connect Error:(%d:%s) %d, socket=%d", errno, strerror(errno), SocketOps::GetLastError(), s->m_socket);
		_FreeSocker(s);
		return INVALID_SOCKET;
	}

	// ���÷�����ģʽ
	if( !SocketOps::Nonblocking(s->m_socket) )
	{
		Log.Error("[IOCP]Nonblocking Error:%d, socket=%d", SocketOps::GetLastError(), s->m_socket);
		_FreeSocker(s);
		return INVALID_SOCKET;
	}

	s->SetIP(ip);
	s->m_status = Key_Work;

	if( !_SetupReadEvent(s) )
	{
		Log.Error("[IOCP]_SetupReadEvent Error:%d, socket=%d", SocketOps::GetLastError(), s->m_socket);
		_FreeSocker(s);
		return INVALID_SOCKET;
	}

	Log.Notice("[IOCP]IOCP Connect Socket %d, %s %d", s->m_socket, s->m_szIP, port);

	return s->m_socket;
}

int	CIOCP::Send(SOCKET sock, char * data, int size)
{
	CSocker * s = _GetSocker(sock);
	if( !s )
	{
		Log.Error("[IOCP]��������ʱCSockerû���ҵ�, socket=%d", sock);
		return 0;
	}

	s->m_SendLock.LOCK();
	int leftsize = s->m_SendBuffer->GetReadSize();
	bool bwrite = s->m_SendBuffer->Write(data, size);
	s->m_SendLock.UNLOCK();
	if( bwrite )
	{
		//���д��ǰ������Ϊ�գ���Ͷ���¼�
		if( leftsize == 0 && !_SetupWriteEvent(s))
		{
			//Ͷ�ݳ����ͷ�socket��������0
			_HandleShutdown(s->m_socket);
			size = 0;
		}
	}

	return size;
}

bool CIOCP::Recv(SOCKET sock, char * data, int size)
{
	return m_pNet->recv(sock, data, size);
}

bool CIOCP::Shutdown(SOCKET sock)
{
	return _HandleShutdown(sock);
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
bool CIOCP::_CreateListenSocket(int port)
{
	if (!m_ListenSocker.InitBuffer(m_SockerSendBuffsize, m_SockerRecvBuffsize) || !m_ListenSocker.CreateSocket())
	{
		Log.Error("[IOCP]��������socketʧ��");
		return false;
	}

	if( !_BindIoCompletionPort(&m_ListenSocker) )
		return false;

	if( !SocketOps::ReuseAddr(m_ListenSocker.m_socket) )
	{
		Log.Error("[IOCP]SocketOps::ReuseAddr error:%d, socket=%d", SocketOps::GetLastError(), m_ListenSocker.m_socket);
		return false;
	}

	SOCKADDR_IN localAddr;
	ZeroMemory(&localAddr, sizeof(localAddr));	
	localAddr.sin_family = AF_INET;
	localAddr.sin_port = htons(port);
	localAddr.sin_addr.s_addr = htonl(INADDR_ANY);

	int ret = bind(m_ListenSocker.m_socket,(PSOCKADDR)&localAddr, sizeof(localAddr));
	if (ret == SOCKET_ERROR)
	{
		Log.Error("[IOCP]����socket��ʧ�ܣ�%d" , SocketOps::GetLastError());
		return false;
	}

	ret = listen(m_ListenSocker.m_socket, SOMAXCONN);
	if (ret == SOCKET_ERROR)
	{
		Log.Error("[IOCP]����socket����ʧ�ܣ�%d", SocketOps::GetLastError());
		return false;
	}

	return true;
}

bool CIOCP::_BindIoCompletionPort(CSocker * s)
{
	if( !CreateIoCompletionPort((HANDLE)s->m_socket, m_hCompletionPort, (ULONG)s, 0) )
	{
		Log.Error("[IOCP]������ɶ˿�ʧ��:%d socket=%d", SocketOps::GetLastError(), s->m_socket);
		return false;
	}
	return true;
}

void CIOCP::ListenThread(void * param)
{
	if( !param )
		return;

	CIOCP * pThis = (CIOCP *)param;

	//��ȡAcceptEx�����ĵ�ַ
	GUID functionID = WSAID_ACCEPTEX;
	DWORD dwBytes = 0;
	if (WSAIoctl(pThis->m_ListenSocker.m_socket,SIO_GET_EXTENSION_FUNCTION_POINTER,&functionID,sizeof(functionID),&pThis->m_pAcceptEx,sizeof(pThis->m_pAcceptEx),&dwBytes,0,0))
	{
		Log.Error("[IOCP]��ȡAcceptEx�����ĵ�ַ��%d", SocketOps::GetLastError());
		return;
	}

	//��ȡGetAcceptExSockaddrs�����ĵ�ַ
	GUID funcID = WSAID_GETACCEPTEXSOCKADDRS;
	DWORD dwByt = 0;
	if(WSAIoctl(pThis->m_ListenSocker.m_socket,SIO_GET_EXTENSION_FUNCTION_POINTER,&funcID,sizeof(GUID),&pThis->m_pGetAcceptExSockaddrs,sizeof(pThis->m_pGetAcceptExSockaddrs),&dwByt,0,0))
	{
		Log.Error("[IOCP]��ȡGetAcceptExSockaddrs�����ĵ�ַʧ�ܣ�%d", SocketOps::GetLastError());
		return;
	}

	while(true)
	{
		if( pThis->m_ListenCount >= pThis->m_ConnectMax/10 )
		{
			pThis->m_EvAcceptThread.Wait();
			continue;
		}

		CSocker* s = pThis->_GetFreeSocker();
		if( !s )
		{
			Sleep(1000);
			continue;
		}

		if( !pThis->_SetupAcceptEvent(s) )
		{
			pThis->_FreeSocker(s);
			Sleep(1000);
			continue;
		}
	}
	
	return;
}

void CIOCP::CloseThread(void * param)
{
	if( !param )
		return;

	CIOCP * pThis = (CIOCP *)param;

	while(true)
	{
		CSocker * s = pThis->_GetHeadCloseSocker();
		if( !s )
		{
			pThis->m_EvCloseThread.Wait();
			continue;
		}

		//��ʱʱ����Ϊ10s
		s->m_SendLock.LOCK();
		int size = s->m_SendBuffer->GetReadSize();
		s->m_SendLock.UNLOCK();
		if( size > 0 && timeGetTime() - s->m_timeout < 10 )
		{
			pThis->m_CloseSocketsLock.LOCK();
			pThis->m_CloseSockets.AddToTail(s);
			pThis->m_CloseSocketsLock.UNLOCK();
		}
		else
		{
			Log.Debug("[IOCP]Close socket %d", s->m_socket);

			pThis->m_pNet->close(s->m_socket);

			pThis->_FreeSocker(s);
		}
	}

	return;
}

void CIOCP::WorkThread(void * param)
{
	if( !param )
		return;

	CIOCP * pThis = (CIOCP *)param;

	DWORD len = 0;
	IOMessage * ov = NULL;
	CSocker * pSocker = NULL;
	LPOVERLAPPED ol_ptr = NULL;

	while(true)
	{
#ifndef _WIN64
		BOOL ret = GetQueuedCompletionStatus(pThis->m_hCompletionPort, &len, (LPDWORD)&pSocker, &ol_ptr, INFINITE);
#else
		BOOL ret = GetQueuedCompletionStatus(pThis->m_hCompletionPort, &len, (PULONG_PTR)&pSocker, &ol_ptr, INFINITE);
#endif

		if( !ol_ptr )
			continue;

		ov = CONTAINING_RECORD(ol_ptr, IOMessage, m_ol);

		bool result = false;
		if( ret )
		{
			switch(ov->m_event)
			{
			case SOCKET_IO_EVENT_ACCEPT:	result = pThis->_HandleAcceptComplete(ov->m_socket, len);	break;
			case SOCKET_IO_EVENT_READ:		result = pThis->_HandleReadComplete(pSocker, len);			break;
			case SOCKET_IO_EVENT_WRITE:		result = pThis->_HandleWriteComplete(pSocker, len);			break;
			default:	break;
			}

			/*if( ov->m_event < NUM_SOCKET_IO_EVENTS )
			{
				ophandlers[ov->m_event](pThis, pSocker, len);
			}*/
		}
		
		if( !result )
		{
			pThis->_HandleShutdown(ov->m_socket);
		}

		SAFE_DELETE(ov);
	}

	return;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
CSocker * CIOCP::_GetFreeSocker()
{
	CSocker * s = NEW CSocker;
	if( s )
	{
		if (!s->InitBuffer(m_SockerSendBuffsize, m_SockerRecvBuffsize) || !s->CreateSocket())
			goto err;

		if( !_BindIoCompletionPort(s) )
			goto err;

		m_WorkSocketsLock.LOCK();
		m_WorkSockets.Insert(s->m_socket, s);
		m_WorkSocketsLock.UNLOCK();
		
		return s;
	}

err:
	SAFE_DELETE(s);

	return NULL;
}

CSocker * CIOCP::_GetSocker(SOCKET sock)
{
	m_WorkSocketsLock.LOCK();
	CSocker * s = m_WorkSockets.Find(sock);
	m_WorkSocketsLock.UNLOCK();
	return s;
}

void CIOCP::_FreeSocker(CSocker * s)
{
	s->Release();

	SAFE_DELETE(s);
}

CSocker * CIOCP::_GetHeadCloseSocker()
{
	CSocker * s = NULL;
	m_CloseSocketsLock.LOCK();
	if( m_CloseSockets.Count() > 0 )
	{
		s = m_CloseSockets.Head();
		m_CloseSockets.RemoveFromHead();
	}
	m_CloseSocketsLock.UNLOCK();
	return s;
}

IOMessage * CIOCP::_GetFreeIOMessage(SOCKET sock, IOEvent ievent)
{
	IOMessage * io = NEW IOMessage;
	if( io )
	{
		io->m_event = ievent;
		io->m_socket = sock;
	}
	
	return io;
}

/////////////////////////////////////////////////////////////////////////////////////////////
//
bool CIOCP::_SetupAcceptEvent(CSocker * s)
{
	IOMessage* pMsg = _GetFreeIOMessage(s->m_socket, SOCKET_IO_EVENT_ACCEPT);
	if( !pMsg )
		return false;

	DWORD wRecvbyte = 0;
	const size_t sizeOfAddress = sizeof(SOCKADDR_IN) + 16;
	//int bufsize = s->m_RecvSize - 2 * sizeOfAddress;
	int bufsize = 0;	//����Ϊ�㣬����ʹaccept�������أ����ٵȴ�����

	BOOL ret = m_pAcceptEx(m_ListenSocker.m_socket,s->m_socket,s->m_RecvBuffer,bufsize,sizeOfAddress,sizeOfAddress,&wRecvbyte,&pMsg->m_ol);
	if( !ret )
	{
		int error = SocketOps::GetLastError();
		if( error != ERROR_IO_PENDING )
		{
			Log.Error("[IOCP]Break m_pAcceptEx error %d", error);	
			return false;
		}
	}

	g_lockedIncrement(&m_ListenCount);

	return true;
}

bool CIOCP::_SetupReadEvent(CSocker * s)
{
	IOMessage* pIOMsg = _GetFreeIOMessage(s->m_socket, SOCKET_IO_EVENT_READ);
	if(!pIOMsg)
		return false;

	ULONG wSize = 0;
	ULONG lpFlags = MSG_PARTIAL;
	WSABUF buf;
	buf.len = s->m_RecvSize;
	buf.buf = s->m_RecvBuffer;

	int ret = WSARecv(s->m_socket,&buf,1,&wSize,&lpFlags,&pIOMsg->m_ol,NULL);
	if( ret == SOCKET_ERROR )
	{
		int error = SocketOps::GetLastError();
		if( error != WSA_IO_PENDING )
		{
			Log.Error("[IOCP]Setup Read Event Error:%d,socket:%d", error, s->m_socket);
			return false;
		}
	}

	return true;
}

bool CIOCP::_SetupWriteEvent(CSocker * s)
{
	IOMessage*	pMsg = _GetFreeIOMessage(s->m_socket, SOCKET_IO_EVENT_WRITE);
	if(!pMsg)
		return false;

	WSABUF WSABuf;
	ULONG dwSendNumBytes = 0;
	ULONG ulFlags		 = MSG_PARTIAL;

	s->m_SendLock.LOCK();
	WSABuf.buf = s->m_SendBuffer->GetReadPtr(WSABuf.len);
	s->m_SendLock.UNLOCK();

	int ret = WSASend(s->m_socket, &WSABuf, 1, &dwSendNumBytes, ulFlags, &pMsg->m_ol, NULL);
	if( ret == SOCKET_ERROR ) 
	{	
		int error = SocketOps::GetLastError();
		if( error != WSA_IO_PENDING /*&& dFlag != WSAENOBUFS*/ )
		{
			Log.Error("[IOCP]WsaSend error:%d, socket:%d", error, s->m_socket);			
			return false;		
		}
	}

	return true;
}

/*��socket�Ĺرղ����ŵ��ر��߳��д����Ա��ⷢ�����ݵĶ�ʧ����ʹ��Ͷ�ݲ����ķ�ʽ��
bool CIOCP::_SetupShutdownEvent(CSocker * s)
{
	IOMessage *	pMsg = _GetFreeIOMessage(s->m_socket, SOCKET_IO_EVENT_SHUTDOWN);			
	if( !pMsg )
		return false;

	if( !PostQueuedCompletionStatus(m_hCompletionPort, 0, (DWORD)s, &pMsg->m_ol) )
		return false;

	return true;
}*/

/////////////////////////////////////////////////////////////////////////////////////////////
//
bool CIOCP::_HandleAcceptComplete(SOCKET sock, int len)
{
	CSocker * s = _GetSocker(sock);
	if( !s )
		return false;

	int sizeOfLocalAddress, sizeOfRemoteAddress;
	sockaddr *pLocalAddress, *pRemoteAddress;

	const size_t sizeOfAddress = sizeof(SOCKADDR_IN) + 16;
	int bufsize = s->m_RecvSize - 2 * sizeOfAddress;

	m_pGetAcceptExSockaddrs(s->m_RecvBuffer,bufsize,sizeOfAddress,sizeOfAddress,&pLocalAddress,&sizeOfLocalAddress,&pRemoteAddress,&sizeOfRemoteAddress);

	sprintf(s->m_szIP, "%s", inet_ntoa(((sockaddr_in*)pRemoteAddress)->sin_addr));

	g_lockedDecrement(&m_ListenCount);
	m_EvAcceptThread.Event();

	//ʹ������shutdown���óɹ�
	if( !SocketOps::SetInherit(s->m_socket, m_ListenSocker.m_socket) )
	{
		Log.Error("[IOCP]SocketOps::SetInherit error:%d, socket=%d, listen=%d", SocketOps::GetLastError(), s->m_socket, m_ListenSocker.m_socket);
		return false;
	}

	SocketOps::DisableBuffering(s->m_socket);

	Log.Notice("[IOCP]Accept Socket %d, %s", s->m_socket, s->m_szIP);

	if( !m_pNet->accept(s->m_socket, s->m_szIP) )
	{
		_FreeSocker(s);
		return false;
	}

	if( len > 0 && !Recv(s->m_socket, s->m_RecvBuffer, len) )
	{
		_FreeSocker(s);
		return false;
	}

	return _SetupReadEvent(s);
}

bool CIOCP::_HandleReadComplete(CSocker * s, int len)
{
	if( len > 0 )
	{
		Log.Debug("[IOCP]Read:socket=%d recv size=%d", s->m_socket, len);

		Recv(s->m_socket, s->m_RecvBuffer, len); 

		return _SetupReadEvent(s);
	}
	else
	{
		return _HandleShutdown(s->m_socket);
	}
}

bool CIOCP::_HandleWriteComplete(CSocker * s, int len)
{
	Log.Debug("[IOCP]Write:socket=%d send size=%d", s->m_socket, len);

	s->m_SendLock.LOCK();
	int size = s->m_SendBuffer->Remove(len);
	s->m_SendLock.UNLOCK();
	if( size > 0 )
	{
		return _SetupWriteEvent(s);
	}

	return true;
}

bool CIOCP::_HandleShutdown(SOCKET sock)
{
	CSocker * s = _GetSocker(sock);
	if( !s )
		return false;

	s->m_timeout = timeGetTime();

	m_WorkSocketsLock.LOCK();
	m_WorkSockets.Remove(sock);
	m_WorkSocketsLock.UNLOCK();

	m_CloseSocketsLock.LOCK();
	m_CloseSockets.AddToTail(s);
	m_CloseSocketsLock.UNLOCK();

	m_EvCloseThread.Event();

	return true;
}
#endif
