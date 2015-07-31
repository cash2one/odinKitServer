#pragma once
#include "shared.h"
#include "Fighter.h"
#include "GameServer.h"
#include "EventUnit.h"

//class CFriendsUnit;
class CProp;
class CPlayer : public CFighter
{
public:
	CPlayer() {}
	virtual ~CPlayer() {}

	void	Init();
	void	Release();

	bool	OnMsg(PACKET_COMMAND* pack);

	virtual void	Copy(const CPlayer& player);

	inline	void	OnEvent(CEvent* ev)	{m_EventUnit.OnEvent(ev);}

	inline	void	SetGateSocket(SOCKET socket)		{m_GateSocket = socket;}
	inline	SOCKET	GetGateSocket()						{return m_GateSocket;}

	inline  void	SendClientMsg(PACKET_COMMAND* pack)	{ if (pack) { pack->SetTrans(GetID()); GETSERVERNET(&GameServer)->sendMsg(m_GateSocket, pack); _SendFormat(pack); } }
	inline	void	SendDataMsg(PACKET_COMMAND* pack){ if (pack) { pack->SetTrans(GetID()); GETSERVERNET(&GameServer)->sendMsg(GameServer.getServerSock(CBaseServer::Linker_Server_Data), pack); } _SendFormat(pack); }
	inline	void	SendObserveMsg(PACKET_COMMAND* pack, CPlayer* player) { if (pack && player) { pack->SetTrans(player->GetID()); GETSERVERNET(&GameServer)->sendMsg(player->m_GateSocket, pack); } _SendFormat(pack); }

	void _SendFormat(PACKET_COMMAND *pack){Log.Debug("%s", pack->toFormat());}
	inline CPlayer* GetPlayer() {return this;}

	bool	OnCreate(int templateid);

	void	DataInit();
	void	DataSync();

	void	SyncAttribute(bool client = true, CPlayer* toPlayer = NULL);
	void 	SyncTask();

	void	GainAp(int value);
	bool	GainGold(int nGold, GOLD_REASON reason);
	bool	GainSilver(int nSilver, SILVER_REASON reason);

	bool	OnRecharge(int yuan, GOLD_REASON reason);

	int		GoldCoin();
	int		SilverCoin();

	inline void	SetOnline(int flag) {m_OnlineFlag = (m_OnlineFlag == Online_Flag_On ? m_OnlineFlag : flag);}
	inline int	GetOnline()	{return m_OnlineFlag;}

	inline void	SetLoadTime(TMV time) {m_LoadTime = time;}
	inline TMV	GetLoadTime() {return m_LoadTime;}

	void	SyncFieldToData(const char* field = NULL);
	void	SyncFieldIntToClient(int i, CPlayer* toPlayer = NULL);
	void	SyncFieldI64ToClient(int i, CPlayer* toPlayer = NULL);

protected:
	int*	_FindFieldInt(int i);
	int64*	_FindFieldI64(int i);

	void	_SetXmlFieldInt(int i, int value);
	void	_SetXmlFieldI64(int i, int64 value);

	int		_GetXmlFieldInt(int i);
	int64	_GetXmlFieldI64(int i);
public:
	CEventUnit			m_EventUnit;

private:
	SOCKET		m_GateSocket;
	int			m_OnlineFlag;
	TMV			m_LoadTime;

	int64		m_Exp;
	int64		m_ExpMax;
	int			m_GoldCoin;
	int			m_SilverCoin;
	int			m_ThirdCoin;
	int			m_Stamina;
	int			m_StaminaMax;
	int			m_Merit;
	int			m_Credit;
	UserID		m_UserID;
	TMV			m_LoginTime;
	TMV			m_LogoutTime;
	int			m_VipLevel;
	int64		m_RechargeSum;

	TMV			m_ChatPrivateTime;
	TMV			m_ChatWorldTime;
	TMV			m_ChatCampTime;
	TMV			m_ChatKnightsTime;
	int			m_KnightState;
	int64		m_StateExp;

	//��ս����
	int			m_BattleCamp;				//��Ӫ
	int			m_BattleWpID;				//·��
	int			m_BattleActions;			//ʣ��ս������
	int			m_BattleBuyActions;			//����ս������
	TMV			m_BattleActionTime;			//�ϴ�ս��ʱ��
	int			m_BattleActionCDTime;		//ս����ȴʱ��
	int			m_BattleRewardDialy;		//ÿ�ս��㽱��
	int			m_BattleRewardDialyWp;		//ÿ�ս��㽱��ռ��·����

	//��������
	int			m_WorshipCount;
	int			m_FreeCount;
	int 		m_StateGreen;
	int 		m_StateBlue;
	int 		m_StatePurple;
	int 		m_StateOrange;

	int			m_MaxBagCapacity;			//��ǰ����������� wenc 

	//�ӳ�����
	int			m_ExpAddition;
	int			m_MeritAddition;
	int			m_SilverAddition;
	int			m_StateExpAddition;

	int			m_BossInspire;				//����boss����ȼ�

	//��ֵ�
	int			m_SingleDoStateA;			//���γ�ֵ�A���״̬
	int			m_SingleGetStateA;			//���γ�ֵ�A��ȡ״̬
	int			m_SingleDoStateB;			//���γ�ֵ�B���״̬
	int			m_SingleGetStateB;			//���γ�ֵ�B��ȡ״̬
	int			m_MultiDoState;				//�ۻ���ֵ����״̬
	int			m_MultiGetState;			//�ۻ���ֵ���ȡ״̬
	TMV			m_FirstChargeTime;			//�״γ�ֵʱ��

	//vip���
	int			m_ExtBagPage;				//�������䱳��ҳ��
	int			m_BuyStamina;				//ÿ�չ����ж�������
	int			m_BossInspireFree;			//����boss��ѹ������
	int			m_AdvancedTrain;			//ÿ�ո߼�ѵ����Ѵ���
	int			m_SignInFree;				//ÿ����Ѳ�ǩ����
	int			m_SkillResetFree;			//ÿ�����ϴ���Դ���

	//����
	int64		m_LastTimePot;				//���һ����Ѷ���ʱ��
	int64		m_LeftTimeLen;				//����һ����Ѷ���ʱ��(������)
	int			m_RandHeroCount;			//���ƴ���

	//Ů������
	int64		m_LastTeaseTime;			//���һ����ѵ���ʱ��
	int64		m_LeftTeaseLen;				//����һ����ѵ���ʱ��(������)
	int			m_TeaseSilver;				//���յ��̻�õ�����
	int			m_TeaseCount;				//���ѽ�ҵ��̴���
	int			m_QueenMood;				//Ů������(������)

	//�����ؾ�
	int			m_CarnageSceneTop;			//��ͨ������߹ؿ�
	int			m_CarnageAchieveMax;		//��߼�¼
	int			m_CarnageResetCnt;			//���ô���
	int			m_CarnageChlgCnt;			//��ս����
};
