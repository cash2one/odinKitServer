#ifndef SHARED_IOCP_H
#define SHARED_IOCP_H

#ifdef WIN32

#include "NetHeader.h"
#include "SocketNet.h"
#include "Socker.h"
#include "Lock.h"
#include "stllist.h"
#include "stlmap.h"

enum IOEvent
{
	SOCKET_IO_EVENT_ACCEPT	= 0,
	SOCKET_IO_EVENT_READ,
	SOCKET_IO_EVENT_WRITE,
	SOCKET_IO_EVENT_SHUTDOWN,
	NUM_SOCKET_IO_EVENTS,
};

// Ͷ�ݲ����Ľṹ��
struct  IOMessage 
{
	OVERLAPPED	m_ol;
	IOEvent		m_event;
	SOCKET		m_socket;
	int			m_Ref;

	IOMessage()
	{
		m_Ref		= 0;
		m_event		= SOCKET_IO_EVENT_ACCEPT;
		m_socket	= INVALID_SOCKET;		
		memset(&m_ol,0,sizeof(OVERLAPPED));
	}
	~IOMessage()
	{
		m_Ref		= 0;
		m_event		= SOCKET_IO_EVENT_ACCEPT;	
		m_socket	= INVALID_SOCKET;		
		memset(&m_ol,0,sizeof(OVERLAPPED));
	}
};

/////////////////////////////////////////////////////////////////////////////////
//
class CNet;
class CIOCP : public CSocketNet
{
public:
	CIOCP(CNet * net);
	~CIOCP();

	bool	Startup(int port, int connectmax, int sendbuffsize, int recvbuffsize);
	void	Terminate();

	int		Send(SOCKET sock, char * data, int size);
	bool	Recv(SOCKET sock, char * data, int size);
	bool	Shutdown(SOCKET sock);

	SOCKET	Connect(const char * ip, int port);
	SOCKET	ConnectAsync(const char * ip, int port)	{return 0;}

protected:
	bool	_CreateListenSocket(int port);
	bool	_BindIoCompletionPort(CSocker * s);

	bool	_SetupAcceptEvent(CSocker * s);
	bool	_SetupWriteEvent(CSocker * s);
	bool	_SetupReadEvent(CSocker * s);
	//bool	_SetupShutdownEvent(CSocker * s);

	bool	_HandleAcceptComplete(SOCKET sock, int len);
	bool	_HandleReadComplete(CSocker * s, int len);
	bool	_HandleWriteComplete(CSocker * s, int len);
	bool	_HandleShutdown(SOCKET sock);

	CSocker *	_GetFreeSocker();
	CSocker *	_GetSocker(SOCKET sock);
	void		_FreeSocker(CSocker * s);
	IOMessage *	_GetFreeIOMessage(SOCKET sock, IOEvent ievent);
	CSocker *	_GetHeadCloseSocker();

	static void WorkThread(void * param);
	static void ListenThread(void * param);
	static void CloseThread(void * param);

private:
	CNet *		m_pNet;
	int			m_ConnectMax;		//�����������
	LONG		m_ListenCount;		//Ͷ�ݼ�������
	CSocker		m_ListenSocker;		//����socket
	HANDLE		m_hCompletionPort;	//��ɶ˿ھ��
	int			m_SockerSendBuffsize;	//Socker���ͻ����С
	int			m_SockerRecvBuffsize;	//Socker���ջ����С

	Eventer		m_EvAcceptThread;
	Eventer		m_EvCloseThread;

	Mutex		m_WorkSocketsLock;
	Mutex		m_CloseSocketsLock;
	CStlMap<SOCKET, CSocker*>	m_WorkSockets;
	CStlList<CSocker*>			m_CloseSockets;

	LPFN_ACCEPTEX				m_pAcceptEx;			//AcceptEx������ַ
	LPFN_GETACCEPTEXSOCKADDRS	m_pGetAcceptExSockaddrs;//GetAcceptExSockaddrs������ַ

};

/*typedef void(*OperationHandler)(CIOCP* net, CSocker * s, int len);

void HandleAcceptComplete(CIOCP* net, CSocker * s, int len);
void HandleReadComplete(CIOCP* net, CSocker * s, int len);
void HandleWriteComplete(CIOCP* net, CSocker * s, int len);
void HandleShutdownComplete(CIOCP* net, CSocker * s, int len);

static OperationHandler ophandlers[NUM_SOCKET_IO_EVENTS] = {
	&HandleAcceptComplete,
	&HandleReadComplete,
	&HandleWriteComplete,
	&HandleShutdownComplete };*/

#endif // for _WIN32
#endif	//SHARED_IOCP_H
