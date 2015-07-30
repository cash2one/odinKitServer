#include "server.h"
#include "random.h"
#include "console.h"
#include "LuaEngine.h"
#ifdef __linux__
#include "udsvr.h"
#include "SignalHandler.h"
#endif
#include "MessageTypeDefine.pb.h"
#include "MessageServer.pb.h"

static const char* svrname[CBaseServer::Linker_Server_End] = { "Null", "CentralServer", "DataServer", "WorldServer", "LoginServer", "GameServer", "GateServer", "BIServer", "PaymentServer" };

CBaseServer::CBaseServer(int type)
{
	m_self.m_type = type;
	m_ServerState = EStateRunning;
}

CBaseServer::~CBaseServer()
{
}

bool CBaseServer::run()
{
	if (!onStartup()) {
		return false;
	}

	DWORD time = 0;
	while (true)
	{
#if !defined(_DEBUG) && defined(WIN32)
		__try
		{
#endif
			if (this->getServerState() == EStateStopping) {
				break;
			}

			onLogic();

			if (timeGetTime() - time > 1000)
			{
				time = timeGetTime();

				onPrint();
			}

#if !defined(_DEBUG) && defined(WIN32)
		}
		__except (HandleException(GetExceptionInformation(), "BaseServers"))
		{
			// We don't actually do anything inside the handler. All of the
			// work is done by HandleException()
		}
#endif

#ifdef _WIN32
		Sleep(1);
#else
#if defined(__linux__) && defined(DEBUG)
		usleep(1000);
#endif
#endif
	}

	onShutdown();

	return true;
}

bool CBaseServer::onStartup()
{
#ifdef _WIN
#ifndef _DEBUG
	//���ÿ���̨���ڵĹرհ�ť
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);
    DrawMenuBar(GetConsoleWindow());
#endif
	
	ConsoleSetSize(300, 100);

	//���ÿ���̨����
	SetConsoleTitle(svrname[m_self.m_type]);

	//����ϵͳʱ�Ӽ��1ms
	timeBeginPeriod(1);
#endif

#ifdef __linux__
	startupSigThread();
#endif

	//�����������
	RandomSeed(time(NULL));

	//�������ܼ�����
	SetVProfCurrentProfile(new CVProfile);
	VProfCurrentProfile().Start();

	//������־ϵͳ
#ifdef DEBUG
	Log.Startup(svrname[m_self.m_type], LOG_LEVEL_DEBUG);
#else
	Log.Startup(svrname[m_self.m_type], LOG_LEVEL_DEBUG);
#endif

	//��ʼ��lua����
	if (!LuaEngine.Init()) {
		Log.Error("[CBaseServer] init lua engine failed");
		return false;
	}

	return true;
}

void CBaseServer::onLogic()
{
	VProfCurrentProfile().Pause();
	VProfCurrentProfile().Server_OutputReport();
	VProfCurrentProfile().Resume();
	VProfCurrentProfile().MarkFrame();

	loop_message();
	loop_linkers();
}

void CBaseServer::onPrint(char* output)
{
	printf("Connected Servers:\n");

	FOR_EACH_LL(m_linkerList, index)
	{
		CLinker* pObj = m_linkerList[index];
		if (pObj)
		{
			printf("%d %s:%d\n", pObj->m_nID, pObj->m_szIP, pObj->m_nPort);
		}
	}
}

bool CBaseServer::onMessage(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	switch (pack->Type())
	{
	case Message::MSG_SERVER_NET_CLOSE:		_HandlePacket_NetClose(pack);		break;
	case Message::MSG_SERVER_NET_ACCEPT:	_HandlePacket_NetAccept(pack);		break;
	case Message::MSG_SERVER_REGISTER:		_HandlePacket_RegistServer(pack);	break;
	case Message::MSG_SERVER_SYNCSERVER:	_HandlePacket_ConnectServer(pack);	break;
	case Message::MSG_SERVER_SYNCGATELOAD:	_HandlePacket_SyncGateLoad(pack);	break;
	case Message::MSG_SERVER_NET_CONNECT:	_HandlePacket_RegistAsyncReturn(pack); break;
	default:	return false;
	}

	return true;
}

void CBaseServer::onShutdown()
{
	Log.Notice("End ..");;
	Log.Shutdown();

#ifdef __linux__
	sleep(5);
#else
	Sleep(5000);
#endif
}

void CBaseServer::initSelf(int world, int type, int id, int port, const char* szip, int extport, const char* extip, const char* udPath)
{
	m_self.m_worldID = world;
	m_self.m_type = type;
	m_self.m_nID = id;
	m_self.m_nPort = port;
	strncpy(m_self.m_szIP, szip, 32);
	if( extip ) {
		m_self.m_extPort = extport;
		strncpy(m_self.m_extIP, extip, 32);
	}

#ifdef __linux__
	if( udPath )
		udsvr.StartUp(udPath);
#endif
}

CPlugin* CBaseServer::createPlugin(int plugin)
{
	switch (plugin) {
		case Plugin_Net4Server:	m_plugins[Plugin_Net4Server] = NEW CNetwork; break;
		case Plugin_Net4Client:	m_plugins[Plugin_Net4Client] = NEW CNetwork; break;
		case Plugin_Mongodb:	m_plugins[Plugin_Mongodb] = NEW CMongoDB; break;
		case Plugin_HttpServe:	m_plugins[Plugin_HttpServe] = NEW CHttpServe; break;
		default: return NULL;
	}
	m_plugins[plugin]->setServer(this);

	return m_plugins[plugin];
}

void CBaseServer::sigHandle(int sig)
{
#ifdef __linux__
	if (sig == SIGUSR1) {
		if (getServerState() == EStateRunning)
			setServerState(EStateStopping);
	} else if (sig == SIGUSR2){
		if (getServerState() == EStateRunning)
			setServerState(EStateReloadScript);
	} else if (sig == SIGRTMIN){
		if (getServerState() == EStateRunning)
			setServerState(EStateReloadData);
	}
#endif
}

void CBaseServer::SignalThread(void *param)
{
#ifdef __linux__
	CBaseServer* pthis = (CBaseServer*)param;

	int sig;
	sigset_t waitset;

	sigemptyset(&waitset);
	sigaddset(&waitset, SIGUSR1);
	sigaddset(&waitset, SIGUSR2);
	sigaddset(&waitset, SIGRTMIN);

	while (true) {
		int ret = sigwait(&waitset, &sig);
		if (ret < 0) {
			Log.Error("sigwait() failed errno=%d", errno);
			continue;
		}
		Log.Notice("receive signal %d", sig);
		pthis->sigHandle(sig);
	}
#endif
}

bool CBaseServer::startupSigThread()
{
#ifdef __linux__
	sigset_t bset, oset;

	sigemptyset(&bset);
	sigaddset(&bset, SIGUSR1);
	sigaddset(&bset, SIGUSR2);
	sigaddset(&bset, SIGRTMIN);
	if (pthread_sigmask(SIG_BLOCK, &bset, &oset) != 0)
		Log.Error("Set pthread mask failed");
	ThreadLib::Create(SignalThread, this);
#endif
	return false;
}

CLinker* CBaseServer::createLinker(int type, int id, int port, const char* szip, int extport, const char* extip, int world, bool host, SOCKET sock)
{
	CLinker* linker = NEW CLinker;
	if (!linker)
		return NULL;

	linker->m_type = type;
	linker->m_nID = id;
	linker->m_nPort = port;
	linker->m_worldID = world;
	linker->m_bHost = host;
	linker->m_Socket = sock;
	strncpy(linker->m_szIP, szip, 32);
	if (extip)
	{
		linker->m_extPort = extport;
		strncpy(linker->m_extIP, extip, 32);
	}

	if (!connectLinker(linker))
	{
		delete linker;
		return NULL;
	}

	addLinker(linker);

	return linker;
}

bool CBaseServer::addLinker(CLinker* linker)
{
	m_linkerList.AddToTail(linker);

	m_linkerLock.LOCK();
	m_linkerMap.Insert(linker->m_Socket, linker);
	m_linkerLock.UNLOCK();

	Log.Notice("[CBaseServer] Create Server %s:%d World:%d ID:%d Sock:%d", linker->m_szIP, linker->m_nPort, linker->m_worldID, linker->m_nID, linker->m_Socket);

	return true;
}

bool CBaseServer::connectLinker(CLinker* linker)
{
	if (INVALID_SOCKET == linker->m_Socket && !regist(linker)) {
		return false;
	}

	linker->m_bBreak = false;

	return true;
}

void CBaseServer::breakLinker(SOCKET s)
{
	CLinker* pObj = NULL;
	m_linkerLock.LOCK();
	int idx = m_linkerMap.Find(s);
	if (m_linkerMap.IsValidIndex(idx))
	{
		pObj = m_linkerMap.Element(idx);
		m_linkerMap.RemoveAt(idx);
	}
	m_linkerLock.UNLOCK();

	if (pObj)
	{
		pObj->m_bBreak = true;
		pObj->m_LostTime = timeGetTime();
	}
}

CLinker* CBaseServer::getLinker(SOCKET s)
{
	CLinker* p = NULL;
	m_linkerLock.LOCK();
	p = m_linkerMap.GetElement(s);
	m_linkerLock.UNLOCK();
	return p;
}

CLinker* CBaseServer::getServerById(int id)
{
	CLinker* p = NULL;
	FOR_EACH_LL(m_linkerList, index)
	{
		p = m_linkerList[index];
		if (p && p->m_nID == id)
			break;
	}
	return p;
}

bool CBaseServer::loop_message()
{
	VPROF("loop_message");

	int count = 0;
	PACKET_COMMAND* pack = NULL;

	while ((pack = getHeadPacket()) && count++ <= 10000)
	{
		onMessage(pack);

		g_PacketPool.Free(pack);
	}
}

bool CBaseServer::loop_linkers()
{
	VPROF("loop_linkers");

	int tmp;
	for (int index = m_linkerList.Head(); m_linkerList.IsValidIndex(tmp = index);)
	{
		index = m_linkerList.Next(index);

		CLinker* pObj = m_linkerList[tmp];
		if (!pObj)
		{
			m_linkerList.Remove(tmp);
			continue;
		}

		if (pObj->m_type > 0 && pObj->m_type < Linker_Server_End)
		{
			if (pObj->m_bBreak)
			{
				if (!pObj->m_bHost)
				{
					deleteServer(pObj);
					m_linkerList.Remove(tmp);
				}
				else if (!pObj->m_bWaiting)
				{
					long curtime = timeGetTime();
					if (curtime - pObj->m_LostTime < 30000)
					{
						registAsync(pObj);
					}
					else
					{
						deleteServer(pObj);
						m_linkerList.Remove(tmp);
					}
				}
			}
		}
	}

	return true;
}

bool CBaseServer::_HandlePacket_NetAccept(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	Message::NetControl msg;
	PROTOBUF_CMD_PARSER(pack, msg);

	CLinker* linker = NEW CLinker;
	if (linker) {
		linker->m_Socket = msg.sock();
		addLinker(linker);
	}

	return true;
}

bool CBaseServer::_HandlePacket_NetClose(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	Message::NetControl msg;
	PROTOBUF_CMD_PARSER(pack, msg);

	CLinker* linker = getLinker(msg.sock());

	return true;
}

bool CBaseServer::_HandlePacket_RegistServer(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	Message::RegistServer msg;
	PROTOBUF_CMD_PARSER(pack, msg);

	CLinker* linker = getLinker(pack->GetNetID());
	if (linker) {
		linker->m_type = msg.type();
		linker->m_nID = msg.id();
		linker->m_nPort = msg.port();
		linker->m_worldID = msg.world();
		linker->m_bHost = false;
		linker->m_Socket = pack->GetNetID();
		strncpy(linker->m_szIP, msg.ip().c_str(), 32);
		linker->m_extPort = msg.extport();
		strncpy(linker->m_extIP, msg.extip().c_str(), 32);
		connectLinker(linker);
	}

	return true;
}

bool CBaseServer::_HandlePacket_ConnectServer(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	Message::SyncServer msg;
	PROTOBUF_CMD_PARSER(pack, msg);

	CLinker* linker = NEW CLinker;
	if (linker) {
		linker->m_type = msg.type();
		linker->m_nID = msg.id();
		linker->m_nPort = msg.port();
		linker->m_worldID = msg.world();
		linker->m_bHost = true;
		strncpy(linker->m_szIP, msg.ip().c_str(), 32);
		linker->m_extPort = msg.extport();
		strncpy(linker->m_extIP, msg.extip().c_str(), 32);
		connectLinker(linker);
		addLinker(linker);
	}

	return true;
}

bool CBaseServer::_HandlePacket_SyncGateLoad(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	Message::SyncGateLoad msg;
	PROTOBUF_CMD_PARSER(pack, msg);

	setGateLoadStatus(pack->GetNetID(), msg.count());

	return true;
}

bool CBaseServer::_HandlePacket_RegistAsyncReturn(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	Message::NetControl msg;
	PROTOBUF_CMD_PARSER(pack, msg);

	registAsyncReturn(msg.sock(), msg.error());

	return true;
}

void CBaseServer::deleteServer(CLinker* pObj)
{
	Log.Notice("[CBaseServer] Delete Server %s:%d World:%d ID:%d Sock:%d", pObj->m_szIP, pObj->m_nPort, pObj->m_worldID, pObj->m_nID, pObj->m_Socket);

	delete pObj;
	pObj = NULL;
}

void CBaseServer::setGateLoadStatus(SOCKET sock, int num)
{
	CLinker* pServer = getLinker(sock);
	if (pServer)
		pServer->m_UserCount = num;
}

CLinker* CBaseServer::getLowerGate(int world)
{
	CLinker* pLowerGate = NULL;

	FOR_EACH_LL(m_linkerList, index)
	{
		CLinker* pServer = m_linkerList[index];
		if (!pServer || pServer->m_bBreak || pServer->m_type != Linker_Server_GateWay || pServer->m_worldID != world)
			continue;

		if (!pLowerGate || pLowerGate->m_UserCount > pServer->m_UserCount)
		{
			pLowerGate = pServer;
		}
	}

	if (pLowerGate)
		pLowerGate->m_UserCount++;

	return pLowerGate;
}

CLinker* CBaseServer::getLowerGame()
{
	CLinker* pLowerGame = NULL;

	FOR_EACH_LL(m_linkerList, index)
	{
		CLinker* pServer = m_linkerList[index];
		if (!pServer || pServer->m_bBreak || pServer->m_type != Linker_Server_Game)
			continue;

		if (!pLowerGame || pLowerGame->m_UserCount > pServer->m_UserCount)
		{
			pLowerGame = pServer;
		}
	}

	if (pLowerGame)
		pLowerGame->m_UserCount++;

	return pLowerGame;
}

bool CBaseServer::regist(CLinker* pObj)
{
	if (!pObj || !pObj->m_bBreak)
		return false;

	pObj->m_Socket = GETSERVERNET(this)->connect(pObj->m_szIP, pObj->m_nPort);
	if (pObj->m_Socket == INVALID_SOCKET)
	{
		Log.Error("[CBaseServer] Connect Server(%s:%d) Failed", pObj->m_szIP, pObj->m_nPort);
		return false;
	}

	Log.Notice("[CBaseServer] Connect Server(%s:%d) success, socket=%d", pObj->m_szIP, pObj->m_nPort, pObj->m_Socket);

	Message::RegistServer msg;
	msg.set_id(m_self.m_nID);
	msg.set_type(m_self.m_type);
	msg.set_port(m_self.m_nPort);
	msg.set_ip(m_self.m_szIP);
	msg.set_extport(m_self.m_extPort);
	msg.set_extip(m_self.m_extIP);
	msg.set_world(m_self.m_worldID);

	PACKET_COMMAND pack;
	PROTOBUF_CMD_PACKAGE(pack, msg, Message::MSG_SERVER_REGISTER);
	GETSERVERNET(this)->sendMsg(pObj->m_Socket, &pack);

	//pObj->m_bBreak = false;`

	return true;
}

bool CBaseServer::registAsync(CLinker* pObj)
{
	if (!pObj || !pObj->m_bBreak)
		return false;

	SOCKET sock = GETSERVERNET(this)->connectAsync(pObj->m_szIP, pObj->m_nPort);
	if (sock == INVALID_SOCKET)
	{
		Log.Error("[CBaseServer] Async Connect Server(%s:%d) Failed", pObj->m_szIP, pObj->m_nPort);
		return FALSE;
	}

	m_linkerLock.LOCK();
	m_linkerMap.Insert(sock, pObj);
	m_linkerLock.UNLOCK();

	pObj->m_Socket = sock;
	pObj->m_bWaiting = true;

	Log.Notice("[CBaseServer] Async Connecting Server(%s:%d), socket=%d", pObj->m_szIP, pObj->m_nPort, sock);

	return true;
}

bool CBaseServer::registAsyncReturn(SOCKET sock, int error)
{
	m_linkerLock.LOCK();
	CLinker* pObj = m_linkerMap.GetElement(sock);
	m_linkerLock.UNLOCK();

	if (!pObj || !pObj->m_bBreak)
		return false;

	if (error == 0)
	{
		Message::RegistServer msg;
		msg.set_id(m_self.m_nID);
		msg.set_type(m_self.m_type);
		msg.set_port(m_self.m_nPort);
		msg.set_ip(m_self.m_szIP);
		msg.set_world(m_self.m_worldID);

		PACKET_COMMAND pack;
		PROTOBUF_CMD_PACKAGE(pack, msg, Message::MSG_SERVER_REGISTER);
		GETSERVERNET(this)->sendMsg(pObj->m_Socket, &pack);

		pObj->m_bBreak = false;
		pObj->m_bWaiting = false;

		Log.Notice("[CBaseServer] Async Connect Server(%s:%d) success, socket=%d", pObj->m_szIP, pObj->m_nPort, pObj->m_Socket);
	}
	else
	{
		m_linkerLock.LOCK();
		m_linkerMap.Remove(sock);
		m_linkerLock.UNLOCK();

		pObj->m_bWaiting = false;

		Log.Notice("[CBaseServer] Async Connect Server(%s:%d) failed, socket=%d", pObj->m_szIP, pObj->m_nPort, pObj->m_Socket);
	}

	return true;
}
