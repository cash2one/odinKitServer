#ifndef SHARED_IOEPOLL_H
#define SHARED_IOEPOLL_H

#include "NetHeader.h"
#include "SocketNet.h"
#include "Socker.h"
#include "stlmap.h"
#include "Lock.h"
#include <string>
#include "NetObservable.h"
#include "ThreadLib.h"

class CNet;
class CIOEpoll : public CSocketNet
{
public:
	CIOEpoll(CNet * net);
	virtual ~CIOEpoll();

	bool	Startup(int port, int connectmax, int sendbuffsize, int recvbuffsize);
	void	Terminate();

	int		Send(SOCKET sock, char * data, int size);
	bool	Recv(SOCKET sock, char * data, int size);
	bool	Shutdown(SOCKET sock);

	SOCKET	Connect(const char * ip, int port);
	SOCKET	ConnectAsync(const char * ip, int port);

protected:
	bool	_CreateListenSocket(int port);
	void	_AcceptAllConnections();
	void	_Shutdown(SOCKET s);
	bool	_CloseSocket(SOCKET sock);

	void		_FreeSocker(SOCKET sock);
	CSocker *	_GetFreeSocker(SOCKET sock=INVALID_SOCKET);

	bool		_AddSocker(CSocker * s);
	CSocker *	_RemoveSocker(SOCKET s);
	CSocker *	_GetSocker(SOCKET s, const char *file , int len );

	static void ConnThread(void * param);	//���������ӷ�ʽ�Ĵ����߳�
	static void RecvThread(void * param);
	static void SendThread(void * param);
	static void	CloseThread(void * param);

private:
	int _send(CSocker *pSocker, int epoll_fd);
	int _recv(CSocker* pSocker, int epoll_fd);

private:
	int _epoll_create() const ;
	void _epoll_ctl(int epollFd, int op, int fd, uint32_t event) const;

	void  _dPrintSocket(const char* file = __FILE__, int  line = __LINE__);

protected:
	CNet *		m_pNet;
	int			m_ConnectMax;		//�����������
	int			m_ListenPort;		//�����˿�
	CSocker		m_ListenSocker;		//����socket
	int			m_SockerSendBuffsize;	//Socker���ͻ����С
	int			m_SockerRecvBuffsize;	//Socker���ջ����С

	CSocker *	m_Sockers;

	ThreadLib::ThreadID m_ConnThreadID;
	ThreadLib::ThreadID m_SendThreadID;
	ThreadLib::ThreadID m_RecvThreadID;

	Eventer		m_ConnEvent;
	Eventer		m_SendEvent;
	Eventer		m_CloseEvent;

	int			read_fd;
	int			write_fd;

	Mutex		m_SocketsLock;
	CStlMap<SOCKET, CSocker*>	m_Sockets;
};

#endif	//SHARED_IOEPOLL_H
