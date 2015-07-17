//
//	CObjectMemroyPool:
//==========================================================================================================================
//	�޸�1��2011-04-22 13:23  by david
//		1.�����˶Զ��̵߳�֧�֣����Զ����߳�ͬʱAlloc�ڴ治�����bug������
//	ע�⣺
//		1.ɾ��ʱδ�����������ܴ���һ�������������ڻ�����ʲô���⣬���ϲ��ʹ��
//			�йء���Ҳ��û�������ף�������
//
//==========================================================================================================================
//	�޸�2��	2011-04-23	15:11   by David
//		1.�����˶Ե�������֧��
//		2.������һ��������������ĺ꣬�������ڴ�й©�����
//
//==========================================================================================================================
//	�޸�3��	2011-05-28	        by li9chuan
//		1.Free֧�ֶ��߳��ͷţ��ظ��ͷ�ͬһ���ڴ治�����
//
//		2.����windows atomicʹ��LONG���޸��ڴ��Ƿ�ʹ�õı��ΪLONG��                  #define USEFLAGLEN	sizeof(ULONG)
//			UNIX�¿��Զ�byte��������ֲ���ʹ��1byte��ʾ��
//
//		3.Alloc()������, ����_InterlockedCompareExchange( (volatile LONG *)&(m_pPool[index]), 1, 0 ) )�滻Ϊ�ֲ��Ĳ�����
//			��˳�����ʱ��Alloc()������Լ10%��Ч�ʣ�����Ƕ��̵߳��û���ߡ�
//			���ڻ�����Ԫ�ظ�������ʱ�����ж���߳�ͬʱ����if�����������ϴ�ʱ�ɿ��Ƿֲ���
//
//==========================================================================================================================
//	��д��	2011-09-27	        by li9chuan
//		1.DoubleStack������пռ䡣
//		2.֧���Զ�������
//		3.֧�������ڴ����ģʽ��
//			(a)OBJģʽ�������ڴ�أ�����Init��ʼ���� 
//			(b)MEMģʽ��һЩ�̶���С���ڴ�飬����InitMem��ʼ����
//		4.���ӶԳ��ж����Ԥ����ͺ���
//==========================================================================================================================

#ifndef SHARED_MEMORYPOOL_H
#define SHARED_MEMORYPOOL_H

#include "platform.h"
#include "Lock.h"
#include "Atomic.h"
#include "ThreadLibFunctions.h"
#include "Log.h"
#include "linux_type.h"
#include "vprof.h"
#include "utldoublestack.h"

void Print(int nLine,const char* psz,...);

#define USEFLAGLEN	sizeof(ULONG)
#define NAMELEN		( 256 * sizeof(char) )

template < class T >
class CObjectMemoryPool
{
public:
	CObjectMemoryPool();
	~CObjectMemoryPool();

	inline bool	Init( const char* szName, uint nCount, uint nGrow=2048 );
	inline bool	InitMem( const char* szName, uint nSize, uint nCount, uint nGrow );
	inline T*	Alloc();
	inline bool	Free( T *pMem );
	inline void	FreeAll();
	inline void Purge( void );
	inline void	Report(int& line);
	inline void	MemLog();
	inline void Output(char* output, int size);
	inline const char* GetName();

private:
	char			m_szName[NAMELEN];		//	�ڴ�صı�ʶ
	uint			m_size;
	uint			m_count;				//	�ڴ�ص�Obj����
	volatile LONG	m_used;					//	�ڴ�صĵ�ǰʹ����
	uint8*			m_pPool;				//
	void*			m_pPoolTail;

	inline bool     PublicInitialization(const char* szName,uint nCount,uint nGrow);	//

private:
	Mutex		m_growlock;
	uint		m_growSize;
	CObjectMemoryPool<T>*	m_growBlock;

private:
	enum _MODE
	{
		OBJ,
		MEM,
		UN_INIT
	};
	_MODE		m_mode;

	CDoubleStack<T> m_dstack;

	/*class _DoubleStack
	{
	private:
		struct	_Stack
		{
			inline bool	Init( uint nSize )
			{
				if(nSize == 0)
				{
					Log.Error("m_stack alloc failed, nSize=0");
					return false;			
				}

				m_lock.LOCK();
				if( m_stack )
				{
					m_stack = (T**)MemRealloc( m_stack, sizeof(T*)*nSize );
				}
				else
				{
					m_stack = (T**)MemAlloc( sizeof(T*)*nSize );
				}

				if(!m_stack)
				{
					Log.Error("m_stack alloc failed");
					m_lock.UNLOCK();
					return false;
				}
				memset( m_stack, 0, sizeof(T*)*nSize );
				m_top = 0;
				m_lock.UNLOCK();
				return true;
			}

			inline void	Push( T* mem )
			{
				m_lock.LOCK();
				if( m_stack )
				{
					m_stack[m_top++] = mem;
				}
				m_lock.UNLOCK();
			}

			inline T*	Pop( void )
			{
				T* res = NULL;
				m_lock.LOCK();
				if( m_stack && m_top > 0 )
				{
					res = m_stack[--m_top];	
				}
				m_lock.UNLOCK();
				return res;
			}

			_Stack()
			{
				m_stack	=	NULL;
				m_top	=	0;
			}

			~_Stack()
			{
				Purge();
			}

			inline void Purge()
			{
				m_lock.LOCK();
				m_top	=	0;
				MemFree(m_stack);
				m_stack = NULL;
				m_lock.UNLOCK();
			}

			inline void Clear()
			{
				m_lock.LOCK();
				m_top	=	0;
				m_lock.UNLOCK();
			}

			T**				m_stack;
			volatile uint	m_top;
			Mutex			m_lock;
		};

	public:
		_DoubleStack()
		{
			m_pStackFree = &m_stack1;
			m_pStackAlloc = &m_stack2;
		}

		inline bool	Init( uint nSize )
		{
			if ( m_stack1.Init( nSize ) )
			{
				if( m_stack2.Init( nSize ) )
				{
					return true;
				}
			}
			return false;
		}

		inline void	Push( T* mem )
		{
			m_pStackFree->Push( mem );
		}

		inline T*	Pop( void )
		{
			T* res = m_pStackAlloc->Pop();

			if( res == NULL )
			{
				m_lock.LOCK();
				res = m_pStackAlloc->Pop();
				if( res == NULL )
				{
					_Stack* pStack = m_pStackFree;
					g_lockedExchange((LONG*)&m_pStackFree,(LONG)m_pStackAlloc);
					g_lockedExchange((LONG*)&m_pStackAlloc,(LONG)pStack);

					res = m_pStackAlloc->Pop();
				}
				m_lock.UNLOCK();
			}
			return res;
		}

		inline void Clear()
		{
			m_stack1.Clear();
			m_stack2.Clear();
		}

	private:
		_Stack* m_pStackAlloc;
		_Stack* m_pStackFree;
		_Stack	m_stack1;
		_Stack	m_stack2;
		Mutex	m_lock;
	};

	_DoubleStack	m_dstack;*/
};

template < class T >
CObjectMemoryPool< T >::CObjectMemoryPool()
{
	memset( m_szName, 0, NAMELEN );
	m_pPool = NULL;
	m_pPoolTail = NULL;
	m_size	= 0;
	m_count	= 0;
	m_used	= 0;
	m_growSize	= 0;
	m_growBlock = NULL;
	m_mode		= UN_INIT;
}

template < class T >
CObjectMemoryPool< T >::~CObjectMemoryPool()
{
	Purge();
}

template < class T >
inline bool CObjectMemoryPool< T >::PublicInitialization(const char* szName,uint nCount,uint nGrow)
{
	/*m_szName[0] = '\0';
	strncat(m_szName,szName,NAMELEN-1);*/
	strncpy(m_szName, szName, NAMELEN-1);
	m_count	    = nCount;
	m_growSize  = nGrow;

	const unsigned long memsize = ( m_size + USEFLAGLEN ) * m_count;

	if( m_pPool )
	{
		FreeAll();
		m_pPool = (byte*)MemRealloc( m_pPool, memsize );
	}
	else
	{
		m_pPool = (byte*)MemAlloc( memsize );
	}

	if(!m_pPool)
	{
		Log.Error( "%s alloc failed", m_szName );
		return false;
	}

	memset( m_pPool, 0, memsize );
	m_pPoolTail = (void*)( m_pPool + memsize ) ;

	if ( !m_dstack.Init( m_count ) )
	{
		MemFree(m_pPool);
		m_pPool     = NULL;
		m_pPoolTail = NULL;
		Log.Error( "%s m_dstack.Init() failed", m_szName );
		return false;
	}

	for( uint i=0; i<m_count; i++ )
	{
		uint64 index = i * ( USEFLAGLEN + m_size );
		m_dstack.Push( (T*)(&m_pPool[index]+USEFLAGLEN) );
	}

	return true;
}

template < class T >
inline bool CObjectMemoryPool< T >::Init(const char* szName,uint nCount,uint nGrow)
{
	m_size	    = sizeof(T);
	if( !PublicInitialization(szName,nCount,nGrow) )	{	return	false;	}

	for( uint i=0; i<m_count; i++ )
	{
		uint64 index = i * ( USEFLAGLEN + sizeof(T) );
		T* pMem = (T*)(&m_pPool[index]+USEFLAGLEN);
		Construct( pMem );
		Destruct ( pMem );
	}

	m_mode		= OBJ;
	return true;
}

template < class T >
inline bool CObjectMemoryPool< T >::InitMem(const char* szName,uint nSize,uint nCount,uint nGrow)
{
	m_size	    = sizeof(T)*nSize;
	if( !PublicInitialization(szName,nCount,nGrow) )	{	return	false;	}
	m_mode		= MEM;
	return true;
}

template < class T >
inline T* CObjectMemoryPool< T >::Alloc()
{
	T* res = m_dstack.Pop();
	if( res != NULL )
	{
		g_lockedExchange((volatile LONG *)((byte*)res - USEFLAGLEN), 1);
		g_lockedIncrement(&m_used);
		if( m_mode == OBJ )
		{
			Construct( res );
		}
		return res;
	}

	if( m_growSize == 0 )
	{
		Log.Error("%s:set not auto increase, alloc failed", m_szName);
		return NULL;
	}

	m_growlock.LOCK();
	if( !m_growBlock )
	{
		Log.Error("%s:memory pool is full", m_szName);
		m_growBlock = new CObjectMemoryPool< T >;
		char szName[NAMELEN];
		sprintf( szName, "%s_%d", m_szName, m_growSize );

		bool bgrow = false;

		switch( m_mode )
		{
		case OBJ:
			bgrow = m_growBlock->Init( szName, m_growSize, m_growSize*2 );
			break;
		case MEM:
			bgrow = m_growBlock->InitMem( szName, m_size, m_growSize, m_growSize*2 );
			break;
		default:
			assert( false );
			return NULL;
		}

		if( bgrow )
		{
			Log.Error("Memory Increase:%s", szName);
		}
		else
		{
			Log.Error("Memory Increase Failed:%s!\n", szName);
			delete m_growBlock;
			m_growBlock		= NULL;
			m_growlock.UNLOCK();
			return NULL;
		}
	}
	m_growlock.UNLOCK();
	
	return m_growBlock->Alloc();
}

template < class T >
inline bool CObjectMemoryPool< T >::Free(T *pMem)
{
	if( (void*)pMem>=(void*)m_pPool && (void*)pMem<m_pPoolTail )
	{
		if( g_lockedCompareExchange( (volatile LONG *)((byte*)pMem - USEFLAGLEN), 0, 1 ) )
		{
			if( m_mode == OBJ )
			{
				Destruct( pMem );
			}
			m_dstack.Push(pMem);
			g_lockedDecrement(&m_used);
		}
		else
		{
			Log.Error("%s:memroy free again", m_szName);
			assert(0);
			return false;
		}
	}
	else if( m_growBlock )
	{
		m_growBlock->Free(pMem);
	}
	else
	{
//		Plat_BlockLog("%s:�ͷŵ��ڴ治���ڸ��ڴ��!!!\n", m_szName);
		return false;
	}
	return true;
}

template < class T >
inline void CObjectMemoryPool< T >::FreeAll()
{
	if( m_mode == UN_INIT )	{	return;	}
	m_growlock.LOCK();
	if( m_growBlock )  { m_growBlock->FreeAll(); }

	for( uint i=0; i<m_count; i++ )
	{
		uint64 index = (i) * ( USEFLAGLEN + m_size );
		T *pMem = (T*)(&m_pPool[index]+USEFLAGLEN);
		if( g_lockedCompareExchange( (volatile LONG *)((byte*)pMem - USEFLAGLEN), 0, 1 ) )
		{
			if( m_mode == OBJ )
			{
				Destruct( pMem );
			}
			m_dstack.Push(pMem);
			g_lockedDecrement(&m_used);
		}
	}

	if( m_used != 0 )
	{
		Log.Error( "%s:FreeAll() Error", m_szName );
		assert(0);
	}
	m_growlock.UNLOCK();
}

//fixed by david 
template < class T >
inline void CObjectMemoryPool< T >::Purge()
{
	if( m_mode == UN_INIT )	{	return;	}
	//FreeAll();				//	FreeAll������Ĳ�������ͬ����
	m_growlock.LOCK();
	if( m_growBlock )  
	{
		m_growBlock->~CObjectMemoryPool();  
		m_growBlock = NULL; 
	}
	//if( m_mode == OBJ )
	{
		//for( uint i=0; i<m_count; i++ )
		{
			//uint64 index = (i++) * ( USEFLAGLEN + sizeof(T) );
			//T* pMem = (T*)(&m_pPool[index]+USEFLAGLEN);
			//Construct ( pMem );
			//after_func( pMem );
			//Destruct  ( pMem );
		}
	}
	m_used		= 0;
	m_size		= 0;
	m_count		= 0;
	m_szName[0] = '\0';
	MemFree(m_pPool);
	m_pPool		= NULL;
	m_pPoolTail	= NULL;
	m_mode		= UN_INIT;
	m_growlock.UNLOCK();
}

template < class T >
inline const char* CObjectMemoryPool< T >::GetName()
{
	return m_szName;
}

template < class T >
inline void CObjectMemoryPool< T >::Report(int& line)
{
	::Print(line++,"%s	%10.3f K / %10.3f K	   <<%10.3f K \n",m_szName,(float)m_used * (float)m_size/1024.0, (float)m_count * (float)m_size/1024.0, (float)m_size/1024.0);
	if( m_growBlock )   { m_growBlock->Report(line); }
}

template < class T >
inline void CObjectMemoryPool< T >::MemLog()
{
	Log.Error("MemoryPool::%s	%d / %d << %10.3f K", m_szName, m_used, m_count, (float)m_size/1024.0);
	if( m_growBlock )   { m_growBlock->MemLog(); }
}

template < class T >
inline void CObjectMemoryPool< T >::Output(char* output, int size)
{
	char str[1024] = {0};
	sprintf(str, "MemoryPool::%s	%ld / %d << %10.3f K\n", m_szName, m_used, m_count, (float)m_size/1024.0);
	strcat(output, str);
	size -= strlen(str);

	if( m_growBlock )   { m_growBlock->Output(output, size); }
}

#endif	//SHARED_MEMORYPOOL_H
