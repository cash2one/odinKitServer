// RobotPlus.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "LuaEngine.h"
#include "memorypool.h"
#include "RobotNet.h"
#include "RobotUnit.h"
#include "RobotObj.h"
#include "RobotMgr.h"
#include "PacketParser.h"


createFileSingleton(CLog);
createFileSingleton(CLuaEngine);
createFileSingleton(CRobotNet);
createFileSingleton(CRobotMgr);
createFileSingleton(CTestUnitMgr);

char g_szServerVersion[32];
char g_szServerIp[32];
int g_nServerPort;

int main()
{
	//��ʼ��lua����
	if( !LuaEngine.Init() )
	{
		printf("��ʼ��lua����ʧ�ܣ�\n");
		return FALSE;
	}

	//�������ò���
	if( !LuaEngine.LoadLuaFile("config.lua") )
	{
		printf("�������ò���ʧ��\n");
		return FALSE;
	}
	int world = LuaEngine.GetLuaVariableNumber( "world", "robot" );
	const char* szver  = LuaEngine.GetLuaVariableString( "version", "robot" );
	sprintf(g_szServerVersion, "%s", szver);
	const char* szip = LuaEngine.GetLuaVariableString( "serverip", "robot" );
	sprintf(g_szServerIp, "%s", szip);
	g_nServerPort = LuaEngine.GetLuaVariableNumber( "serverport", "robot" );
	int nRobotNum = LuaEngine.GetLuaVariableNumber( "num", "robot" );
	const char* szNameSt  = LuaEngine.GetLuaVariableString( "nameset", "robot" );
	int nameindex = LuaEngine.GetLuaVariableNumber( "nameindex", "robot" );
	const char* szPwd  = LuaEngine.GetLuaVariableString( "password", "robot" );
	int actionTime = LuaEngine.GetLuaVariableNumber( "actiontime", "robot" );
	int actionType = LuaEngine.GetLuaVariableNumber( "actiontype", "robot");

	if (!RobotNet.startup(CNet::NET_IO_SELECT, 20001, nRobotNum * 2 + 1, 10240, 10240, 10000))
	{
		printf("��������ʧ�ܣ�\n");
		return FALSE;
	}

	//Log.Startup("Robot", LOG_LEVEL_DEBUG);

	//����ai�ű�
	if( !TestUnitMgr.LoadLuaEngine() )
	{
		return FALSE;
	}

	int index = 0;
	while(1)
	{
		if( index < nRobotNum )
		{
			char name[32] = {0};
			sprintf(name, "%s%d", szNameSt, nameindex + index);

			//����������
			CRobotObj* robot = new CRobotObj(++index, name, szPwd, actionTime, world);
			if( !robot )
				return FALSE;

			RobotMgr.m_RobotList.AddToTail( robot );

			RobotNet.sendHttpRequest(robot);
			//robot->Check(g_szServerIp, g_nServerPort, g_szServerVersion);

			sleep(10);
		}

		FOR_EACH_LL(RobotMgr.m_RobotList, index)
		{
			CRobotObj *robot = RobotMgr.m_RobotList[index];
			robot->Heart();
			//robot->DoActiveBehavior(actionType);
			//robot->DoNonScriptBehavior(); // �ǽű����� wenc 
		}

		//while (RobotMgr.m_RobotList.

		PACKET_COMMAND* pack = NULL;
		while( pack = RobotNet.getHeadPacket() )
		{
			PacketParser( pack );

			SAFE_DELETE( pack );
		}

		sleep(1);
	}

	return 0;
}

