/*
 * �������������ݹ�������д����������
 *
 *				songjun 2012.12.28
 */

#ifndef SHARED_LOCK_H
#define SHARED_LOCK_H

#ifdef _WIN
#include <windows.h>
#else
#ifdef __linux__
#include <pthread.h>
#include <sys/time.h>
#endif
#endif
#include "Atomic.h"

//������
class Mutex
{
public:
	Mutex()
	{
#ifdef _WIN
		InitializeCriticalSection(&mtx);
#else
		pthread_mutex_init(&mtx, NULL);
#endif
	}

	~Mutex()
	{
#ifdef _WIN
		DeleteCriticalSection(&mtx);
#else
		pthread_mutex_destroy(&mtx);
#endif
	}

	inline void LOCK()
	{
#ifdef _WIN
		EnterCriticalSection(&mtx);
#else
		pthread_mutex_lock(&mtx);
#endif
	}

	inline void UNLOCK()
	{
#ifdef _WIN
		LeaveCriticalSection(&mtx);
#else
		pthread_mutex_unlock(&mtx);
#endif
	}

private:
#ifdef _WIN
	CRITICAL_SECTION mtx;
#else
	pthread_mutex_t mtx;
#endif

};

/////////////////////////////////////////////////////////////////////
//
#ifdef _WIN
class Eventer
{
public:
	Eventer::Eventer()
	{
		m_Event = CreateEvent(NULL,FALSE,FALSE,NULL);
	}
	Eventer::~Eventer()
	{
		CloseHandle(m_Event);
	}

	inline bool Event(){return SetEvent(m_Event);}
	inline int Wait(){return WaitForSingleObject(m_Event,INFINITE);}
	inline int Wait(int millisecond){return WaitForSingleObject(m_Event,millisecond);}

protected:
	HANDLE m_Event;
};
#else
#ifndef WAIT_OBJECT_0
#define WAIT_OBJECT_0 0
#endif

#ifndef WAIT_TIMEOUT
#define WAIT_TIMEOUT  ((int)258)
#endif

class Eventer
{
public:
	Eventer()
	{
		pthread_cond_init(&cond, NULL);
		pthread_mutex_init(&mtx, NULL);
	}

	virtual ~Eventer()
	{

	}

	inline bool Event()
	{
		return pthread_cond_broadcast(&cond) == 0;
	}

	/*
	 * on WIN32, this function returns WAIT_OBJECT_0 (0)
	 */
	inline int Wait()
	{
		pthread_mutex_lock(&mtx);
		pthread_cond_wait(&cond, &mtx);
		pthread_mutex_unlock(&mtx);
		return WAIT_OBJECT_0;
	}

	/*
	 * its return value must be exactly the same as the WIN32 version of this function
	 */
	inline int Wait(int millisecond)
	{
		struct timespec abstime;
		struct timeval now;
		gettimeofday(&now, NULL);
		int nsec = millisecond % 1000;
		int sec = millisecond/1000;

		nsec = nsec * 1000 * 1000 + now.tv_usec *1000;
		sec += now.tv_sec;

		while (nsec > 1000*1000*1000) {
			sec++;
			nsec -= 1000*1000*1000;
		}
		abstime.tv_sec = sec;
		abstime.tv_nsec = nsec;

		int result = 0;
		pthread_mutex_lock(&mtx);
		result = pthread_cond_timedwait(&cond, &mtx, &abstime);
		pthread_mutex_unlock(&mtx);
		if (!result) {
			return WAIT_OBJECT_0;
		}else {
			return WAIT_TIMEOUT;
		}
	}

protected:
	pthread_cond_t cond;
	pthread_mutex_t mtx;
};
#endif

/////////////////////////////////////////////////////////////////////
//
class Counter
{
public :
	Counter()
	{
		m_Index = 0;
	}
	~Counter()
	{
	}
	
	inline Counter& operator++(int)
	{
		g_lockedIncrement(&m_Index);
		return (*this);
	}
	inline Counter& operator--(int)
	{
		g_lockedDecrement(&m_Index);
		return(*this);
	}
	int Get()
	{
		return m_Index;
	}

protected:
	long m_Index;
};

#endif	//SHARED_LOCK_H
