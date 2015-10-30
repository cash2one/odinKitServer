#include "DataServer.h"
#include "LuaEngine.h"
#include "PathFunc.h"
#ifdef __linux__
#include "linux_time.h"
#endif
#include "commdata.h"
#include "DataModule.h"
#include "LoadModule.h"
#include "utlsymbol.h"

createFileSingleton(CLog);
createFileSingleton(CLuaEngine);
createFileSingleton(CDataServer);
createFileSingleton(CDataModule);
createFileSingleton(CLoadModule);

extern CObjectMemoryPool<OperObj>	g_MongoOperPool;

CDataServer::CDataServer()
{
	setType(CBaseServer::Linker_Server_Data);
}

CDataServer::~CDataServer()
{
}

bool CDataServer::onStartup()
{
	CBaseServer::onStartup();

	//��ʼ����������
	char g_szExePath[512] = { 0 };
	GetExePath(g_szExePath, 512);
	char szConfile[256] = { 0 };
	sprintf(szConfile, "%ssconf.lua", g_szExePath);
	if (!LuaEngine.LoadLuaFile(szConfile))
	{
		Log.Error("[CDataServer] Load sconf.lua Error");
		return false;
	}

	//��ȡ��������
	const char* centralip = LuaEngine.GetLuaVariableString("CentralServer_ip", "Sconf");
	int centralid = LuaEngine.GetLuaVariableNumber("CentralServer_id", "Sconf");
	int centralport = LuaEngine.GetLuaVariableNumber("CentralServer_port", "Sconf");
	const char* myip = LuaEngine.GetLuaVariableString("DataServer_ip", "Sconf");
	int myid = LuaEngine.GetLuaVariableNumber("DataServer_id", "Sconf");
	int myport = LuaEngine.GetLuaVariableNumber("DataServer_port", "Sconf");
	const char* gamedbip = LuaEngine.GetLuaVariableString("db_game_ip", "Sconf");
	const char* gamedbname = LuaEngine.GetLuaVariableString("db_game_name", "Sconf");
	const char* gamedbport = LuaEngine.GetLuaVariableString("db_game_port", "Sconf");
	int worldID = LuaEngine.GetLuaVariableNumber("WorldID", "Sconf");
	int connmax = LuaEngine.GetLuaVariableNumber("connect_count_max", "DataServer");
	int packsize = LuaEngine.GetLuaVariableNumber("packet_pool_size", "DataServer");
	int recvsize = LuaEngine.GetLuaVariableNumber("recv_buff_size", "DataServer");
	int sendsize = LuaEngine.GetLuaVariableNumber("send_buff_size", "DataServer");
	int playercnt = LuaEngine.GetLuaVariableNumber("player_count_max", "DataServer");
	int dboperator = LuaEngine.GetLuaVariableNumber("db_operator_max", "DataServer");
	const char* udPath = LuaEngine.GetLuaVariableString("MonitorPath", "Key");

	DataModule.Initialize("DataObj", playercnt);

	if (!g_MongoOperPool.Init("MongoOper", dboperator))
		return false;

	//��ʼ��
	char mpath[1024] = { 0 };
	sprintf(mpath, "%s//FPS_%d.sock", udPath, myid);
	this->initSelf(worldID, CBaseServer::Linker_Server_Data, myid, myport, myip, 0, NULL, mpath);

	CMongoDB* db = (CMongoDB *)this->createPlugin(CBaseServer::Plugin_Mongodb);
	if (!db->startup(gamedbip, gamedbport, gamedbname)) {
		Log.Error("[CDataServer] create Plugin_Mongodb failed");
		return false;
	}

	CNetwork* servernet = (CNetwork *)this->createPlugin(CBaseServer::Plugin_Net4Server);
	if (!servernet->startup(CNet::NET_IO_SELECT, myport, connmax, sendsize, recvsize, packsize)) {
		Log.Error("[CDataServer] create Plugin_Net4Server failed");
		return false;
	}

	if (!this->createLinker(CBaseServer::Linker_Server_Central, centralid, centralport, centralip, 0, NULL, worldID, true)) {
		Log.Error("[CDataServer] create Central Server failed");
		return false;
	}

	char spath[1024] = { 0 };
	sprintf(spath, "%s//Server_%d.sock", udPath, myid);
	CMonitor* monitor = (CMonitor *)this->createPlugin(CBaseServer::Plugin_Monitor);
	if (!monitor->startup(spath)) {
		Log.Error("[CDataServer] create Plugin_Monitor failed");
		return false;
	}

	//g_LoadAllName();

	return true;
}

bool CDataServer::onMessage(PACKET_COMMAND* pack)
{
	VPROF("CDataServer::onMessage");

	if (!pack) {
		return false;
	}

	if (LoadModule.onMessage(pack))
		return true;

	if (DataModule.onMessage(pack))
		return true;

	if (CBaseServer::onMessage(pack))
		return true;

	Log.Debug("OnMsg no module %d", pack->Type());

	return false;
}

bool CDataServer::onLogic()
{
	CBaseServer::onLogic();

	LoadModule.onLogic();

	DataModule.onSave();

	return true;
}

void CDataServer::onPrint(char* output)
{
	char szMongoPool[10240] = { 0 };
	char szServer[10240] = { 0 };

	g_MongoOperPool.Output(szMongoPool, 10240);
	CBaseServer::onPrint(szServer);

	sprintf(output,
		" DataServer monitor: \n"
		" ======================================================\n"
		" memory pool used:\n"
		"  %s"
		" ======================================================\n"
		" %s",
		szMongoPool,
		szServer);
}

void CDataServer::onShutdown()
{
	DataModule.onSave();

	CBaseServer::onShutdown();
}
