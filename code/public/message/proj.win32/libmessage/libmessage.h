// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LIBMESSAGE_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// LIBMESSAGE_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef LIBMESSAGE_EXPORTS
#define LIBMESSAGE_API __declspec(dllexport)
#else
#define LIBMESSAGE_API __declspec(dllimport)
#endif

// �����Ǵ� libmessage.dll ������
class LIBMESSAGE_API Clibmessage {
public:
	Clibmessage(void);
	// TODO:  �ڴ�������ķ�����
};

extern LIBMESSAGE_API int nlibmessage;

LIBMESSAGE_API int fnlibmessage(void);
