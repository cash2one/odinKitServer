#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����
#include <windows.h>
#include <tchar.h>
#endif
#include "GateServer.h"

#ifdef _WIN32
int _tmain(int argc, _TCHAR* argv[])
#else 
int main(int argc, char* argv[])
#endif
{
	int id = 0, port = 0, extp = 0;
	if (argc == 4)
	{
		id = atoi(argv[1]);
		port = atoi(argv[2]);
		extp = atoi(argv[3]);
	}

	GateServer->run();

	return 0;
}