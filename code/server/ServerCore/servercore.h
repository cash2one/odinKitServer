#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����

#ifdef _WIN32
// Windows ͷ�ļ�:
#include <windows.h>
#include <Mmsystem.h>
#endif

// import
#include "shared.h"
#include "PacketDefine.h"
#include "MainServer.h"
#include "LuaEngine.h"
