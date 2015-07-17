#include "MainServer.h"
#include "random.h"
#include "console.h"
#include "LuaEngine.h"
#ifdef __linux__
#include "udsvr.h"
#include "SignalHandler.h"
#endif

void SignalThread(void *param)
{
#ifdef __linux__
	int sig;
	sigset_t waitset, oldset;

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
		MainServer.sigHandle(sig);
	}
#endif
}

bool CMainServer::StartupSigThread()
{
#ifdef __linux__
	sigset_t bset, oset;

    sigemptyset(&bset);
    sigaddset(&bset, SIGUSR1);
    sigaddset(&bset, SIGUSR2);
    sigaddset(&bset, SIGRTMIN);
    if (pthread_sigmask(SIG_BLOCK, &bset, &oset) != 0)
    	Log.Error("Set pthread mask failed");
	ThreadLib::Create( SignalThread, this );
#endif
	return false;
}

CMainServer::CMainServer()
{
	m_ServerState = EStateRunning;
}

CMainServer::~CMainServer()
{
}

bool CMainServer::Startup(const char* title)
{
#ifdef _WIN
#ifndef _DEBUG
	//���ÿ���̨���ڵĹرհ�ť
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND);
    DrawMenuBar(GetConsoleWindow());
#endif
	
	ConsoleSetSize(300, 100);

	//���ÿ���̨����
	SetConsoleTitle(title);

	//����ϵͳʱ�Ӽ��1ms
	timeBeginPeriod(1);
#endif

#ifdef __linux__
	//unsigRegister();
	StartupSigThread();
#endif

	//�����������
	RandomSeed(time(NULL));

	//�������ܼ�����
	SetVProfCurrentProfile(new CVProfile);
	VProfCurrentProfile().Start();

	//������־ϵͳ
#ifdef DEBUG
	Log.Startup(title, LOG_LEVEL_DEBUG);
#else
	Log.Startup(title, LOG_LEVEL_DEBUG);
#endif

	//��ʼ��lua����
	if (!LuaEngine.Init()) {
		Log.Error("[CMainServer] init lua engine failed");
		return false;
	}

	return true;
}

void CMainServer::Init(int world, int type, int id, int port, const char* szip, int extport, const char* extip, const char* udPath)
{
	m_worldID = world;
	m_type = type;
	m_nID = id;
	m_nPort = port;
	strncpy(m_szIP, szip, 32);
	if( extip ) {
		m_extPort = extport;
		strncpy(m_extIP, extip, 32);
	}

#ifdef __linux__
	if( udPath )
		udsvr.StartUp(udPath);
#endif
}

CPlugin* CMainServer::createPlugin(int plugin)
{
	switch (plugin) {
		case Plugin_ServerMgr:	m_plugins[Plugin_ServerMgr] = NEW CServerMgr; break;
		case Plugin_Net4Server:	m_plugins[Plugin_Net4Server] = NEW CNetwork; break;
		case Plugin_Net4Client:	m_plugins[Plugin_Net4Client] = NEW CNetwork; break;
		case Plugin_Mongodb:	m_plugins[Plugin_Mongodb] = NEW CMongoDB; break;
		case Plugin_HttpServe:	m_plugins[Plugin_HttpServe] = NEW CHttpServe; break;
		default: return NULL;
	}
	return m_plugins[plugin];
}

void CMainServer::sigHandle(int sig)
{
#ifdef __linux__
	if (sig == SIGUSR1) {
		if (MainServer.getServerState() == EStateRunning)
			MainServer.setServerState(EStateStopping);
	} else if (sig == SIGUSR2){
		if (MainServer.getServerState() == EStateRunning)
			MainServer.setServerState(EStateReloadScript);
	} else if (sig == SIGRTMIN){
		if (MainServer.getServerState() == EStateRunning)
			MainServer.setServerState(EStateReloadData);
	}
#endif
}
