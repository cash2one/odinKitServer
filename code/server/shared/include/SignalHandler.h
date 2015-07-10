#include <signal.h>
#include "Log.h"
#include "MainServer.h"
#include "errno.h"

/*
(1) SIGHUP�����û��˳�Shellʱ���ɸ�Shell���ķ����н��̶��˽��յ�����źţ�Ĭ�϶���Ϊ��ֹ���̡�
(2) SIGINT���û�����<Ctrl + C>��ϼ�ʱ���û���ʱ�����������е��ɸ��ն������ĳ��򷢳����źš�Ĭ�϶���Ϊ��ֹ���̡�
(3) SIGQUIT�����û�����<Ctrl + />��ϼ�ʱ�������źţ��û��ն������������е��ɸ��ն������ĳ��򷢳����źš�Ĭ�϶���Ϊ��ֹ���̲�����core�ļ���
(4) SIGILL ��CPU��⵽ĳ����ִ���˷Ƿ�ָ�Ĭ�϶���Ϊ��ֹ���̲�����core�ļ���
(5) SIGTRAP�����ź��ɶϵ�ָ�������trapָ�������Ĭ�϶���Ϊ��ֹ���̲�����core�ļ���
(6) SIGABRT������abort����ʱ�������źš�Ĭ�϶���Ϊ��ֹ���̲�����core�ļ���
(7) SIGBUS���Ƿ������ڴ��ַ�������ڴ��ַ���루alignment������Ĭ�϶���Ϊ��ֹ���̲�����core�ļ���
(8) SIGFPE���ڷ�����������������ʱ���������������������д��󣬻��������������Ϊ0�����е���������Ĭ�϶���Ϊ��ֹ���̲�����core�ļ���
(9) SIGKILL����������ֹ���̡����źŲ��ܱ����ԡ������������Ĭ�϶���Ϊ��ֹ���̡�����ϵͳ����Ա�ṩ��һ�ֿ���ɱ���κν��̵ķ�����
(10) SIGUSR1���û�������źţ�����������ڳ����ж��岢ʹ�ø��źš�Ĭ�϶���Ϊ��ֹ���̡�
(11) SIGSEGV��ָʾ���̽�������Ч���ڴ���ʡ�Ĭ�϶���Ϊ��ֹ���̲�ʹ�ø��źš�Ĭ�϶���Ϊ��ֹ���̡�
(12) SIGUSR2����������һ���û������źţ�����Ա�����ڳ����ж��岢ʹ�ø��źš�Ĭ�϶���Ϊ��ֹ���̡�
(13) SIGPIPE��Broken pipe����һ��û�ж��˵Ĺܵ�д���ݡ�Ĭ�϶���Ϊ��ֹ���̡�
(14) SIGALRM����ʱ����ʱ����ʱ��ʱ����ϵͳ����alarm���á�Ĭ�϶���Ϊ��ֹ���̡�
(15) SIGTERM���������(terminate)�źţ���SIGKILL��ͬ���ǣ����źſ��Ա������ʹ���ͨ������Ҫ����������˳���ִ��Shell����killʱ��ȱʡ��������źš�Ĭ�϶���Ϊ��ֹ���̡�
(16) SIGSTKFLT��
(17) SIGCHLD���ӳ������ʱ�������̻��յ�����źš�Ĭ�϶���Ϊ���Ը��źš�
(18) SIGCONT����һ����ͣ�Ľ��̼���ִ�С�
(19) SIGSTOP��ֹͣ(stopped)���̵�ִ�С�ע������SIGTERM�Լ�SIGINT�����𣺸ý��̻�δ������ֻ����ִͣ�С����źŲ��ܱ����ԡ������������Ĭ����Ϊ��ͣ���̡�
(20) SIGTSTP��ֹͣ���̵Ķ����������źſ��Ա�����ͺ��ԡ�����<Ctrl + Z>��ϼ�ʱ�������źš�Ĭ�϶���Ϊ��ͣ���̡�
(21) SIGTTIN������̨����Ҫ���û��ն˶�����ʱ�����ն��е����н��̻��յ�SIGTTIN�źš�Ĭ�϶���Ϊ��ͣ���̡�
(22) SIGTTOU�����ź�������SIGTIN���ں�̨����Ҫ���ն��������ʱ������Ĭ�϶���Ϊ��ͣ���̡�
(23) SIGURG���׽��֣�socket�����н�������ʱ����ǰ�������еĽ��̷������źţ������н������ݵ��Ĭ�϶���Ϊ���Ը��źš�
(24) SIGXCPU������ִ��ʱ�䳬���˷�����ý��̵�CPUʱ�䣬ϵͳ�������źŲ����͸��ý��̡�Ĭ�϶���Ϊ��ֹ���̡�
(25) SIGXFSZ�������ļ���󳤶ȵ����ơ�Ĭ�϶���Ϊyl��ֹ���̲�����core�ļ���
(26) SIGVTALRM������ʱ�ӳ�ʱʱ�������źš�������SIGALRM��������ֻ����ý���ռ���õ�CPUʱ�䡣Ĭ�϶���Ϊ��ֹ���̡�
(27) SIGPROF��������SIGVTALRM�������������ý���ռ�õ�CPUʱ�仹����ִ��ϵͳ���õ�ʱ�䡣Ĭ�϶���Ϊ��ֹ���̡�
(28) SIGWINCH�����ڴ�С�ı�ʱ������Ĭ�϶���Ϊ���Ը��źš�
(29) SIGIO�����ź������ָʾ����һ���첽IO�¼���Ĭ�϶���Ϊ���ԡ�
(30) SIGPWR���ػ���Ĭ�϶���Ϊ��ֹ���̡�
(31) SIGSYS��
(34) SIGRTMIN~SIGRTMAX��Linux��ʵʱ�źţ���û�й̶��ĺ���(����˵�������û�����ʹ��)��ע�⣬Linux�̻߳���ʹ����ǰ3��ʵʱ�źš����е�ʵʱ�źŵ�Ĭ�϶���������ֹ���̡�

 ���򲻿ɲ�����������Ե��ź��У�SIGKILL,SIGSTOP
 ���ָܻ���Ĭ�϶������ź��У�SIGILL,SIGTRAP
 Ĭ�ϻᵼ�½����������ź��У�SIGABRT��SIGBUS��SIGFPE��SIGILL��SIGIOT��SIGQUIT��SIGSEGV��SIGTRAP��SIGXCPU��SIGXFSZ
 Ĭ�ϻᵼ�½����˳����ź��У�SIGALRM��SIGHUP��SIGINT��SIGKILL��SIGPIPE��SIGPOLL��SIGPROF��SIGSYS��SIGTERM��SIGUSR1��SIGUSR2��SIGVTALRM
 Ĭ�ϻᵼ�½���ֹͣ���ź��У�SIGSTOP��SIGTSTP��SIGTTIN��SIGTTOU
 Ĭ�Ͻ��̺��Ե��ź��У�SIGCHLD��SIGPWR��SIGURG��SIGWINCH
 
 ��Shell������kill �Cl ����ʾLinux ϵͳ֧�ֵ�ȫ���ź� */


//���ɿ��źŴ���
void unsigHandler(int signo)
{
	//Log.Error("[Signal] Recv Singal:%d", signo);
}

//���ɿ��ź�ע��
void unsigRegister()
{
#ifdef __linux__
	struct sigaction actions;

	bzero(&actions, sizeof(actions));
	sigemptyset(&actions.sa_mask);
	actions.sa_handler = unsigHandler;

	for(int sig = SIGHUP; sig <= SIGRTMAX; ++sig)
	{
		if (sig == SIGSEGV || sig == SIGFPE || sig == SIGILL || sig == SIGBUS 
				|| sig == SIGUSR1 || sig == SIGUSR2 || sig == SIGRTMIN ) {
			continue;
		}
		sigaction(sig, &actions, NULL);
	}

	sigset_t bset, oset;

    sigemptyset(&bset);
    sigaddset(&bset, SIGUSR1);
    sigaddset(&bset, SIGUSR2);
    sigaddset(&bset, SIGRTMIN);
    if (pthread_sigmask(SIG_BLOCK, &bset, &oset) != 0)
    	Log.Error("Set pthread mask failed");
#endif
}

