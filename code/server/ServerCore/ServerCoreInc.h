#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����

#ifdef _WIN32
// Windows ͷ�ļ�:
#include <windows.h>
#include <Mmsystem.h>
#endif

// import
#include "SharedInc.h"
#include "PacketDefine.h"

#include "CommDef.h"
#include "NetServer.h"
#include "NetClient.h"
#ifdef _WIN32
#include "MainServer.h"
#include "ServerMgr.h"
#include "CommandMgr.h"
#include "LuaEngine.h"
#include "DBResult.h"
#endif
