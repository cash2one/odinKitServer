#pragma once
#include "shared.h"
#include "Fighter.h"
#include "GameServer.h"
#include "EventUnit.h"
#include "rapidjson/document.h"
#include "MessagePlayer.pb.h"

//class CFriendsUnit;
class CProp;
class CPlayer : public CFighter
{
public:
	CPlayer() {}
	virtual ~CPlayer() {}

	bool	OnCreate(int templateid);
	void	Init();
	void	Release();

	bool	OnMsg(PACKET_COMMAND* pack);

	virtual void	Copy(const CPlayer& player);

	inline CPlayer* GetPlayer() { return this; }
	inline	void	OnEvent(CEvent* ev)	{m_EventUnit.OnEvent(ev);}

	inline  void	SendClientMsg(PACKET_COMMAND* pack)	{ if (pack) { pack->SetTrans(GetID()); GETSERVERNET(&GameServer)->sendMsg(m_GateSocket, pack); }}
	inline	void	SendDataMsg(PACKET_COMMAND* pack){ if (pack) { pack->SetTrans(GetID()); GETSERVERNET(&GameServer)->sendMsg(GameServer.getServerSock(CBaseServer::Linker_Server_Data), pack); }}
	inline	void	SendObserveMsg(PACKET_COMMAND* pack, CPlayer* player) { if (pack && player) { pack->SetTrans(player->GetID()); GETSERVERNET(&GameServer)->sendMsg(player->m_GateSocket, pack); }}

	inline	void	SetGateSocket(SOCKET socket){ m_GateSocket = socket; }
	inline	SOCKET	GetGateSocket()				{ return m_GateSocket; }

	inline	void	SetOnline(int flag)		{m_OnlineFlag = (m_OnlineFlag == Online_Flag_On ? m_OnlineFlag : flag);}
	inline	int		GetOnline()				{return m_OnlineFlag;}

	inline	void	SetLoadTime(TMV time)	{m_LoadTime = time;}
	inline	TMV		GetLoadTime()			{return m_LoadTime;}

	void	DataInit();
	void	DataSync();

	void	Serialize(std::string& jsonstr);
	void	Deserialize(std::string jsonstr);

	void	SerializeFieldInt(int i, rapidjson::Value& json, rapidjson::Document& root);
	void	SerializeFieldI64(int i, rapidjson::Value& json, rapidjson::Document& root);

	std::string GetFieldName(int i);
	void	SyncFieldIntToData(int i);
	void	SyncFieldI64ToData(int i);
	void	SyncFieldIntToClient(int i, CPlayer* toPlayer = NULL);
	void	SyncFieldI64ToClient(int i, CPlayer* toPlayer = NULL);
	void	SyncAllAttrToClient(CPlayer* toPlayer = NULL);

protected:
	int*	_FindFieldInt(int i);
	int64*	_FindFieldI64(int i);

	void	_PackageMsgAttr32(Message::PlayerAttrSync& msg, int i);
	void	_PackageMsgAttr64(Message::PlayerAttrSync& msg, int i);

public:
	CEventUnit			m_EventUnit;

private:
	SOCKET		m_GateSocket;
	int			m_OnlineFlag;
	TMV			m_LoadTime;
	UserID		m_UserID;

	//��������
	int			m_Level;			//�ȼ�
	int			m_GoldCoin;			//���
	int			m_SilverCoin;		//����
	int			m_VipLevel;			//vip�ȼ�
	int64		m_Exp;				//����
	int64		m_ExpMax;			//�����

	//��½���
	TMV			m_CreateTime;		//��ɫ����ʱ��
	TMV			m_LoginTime;		//�ϴε�¼ʱ��
	TMV			m_LogoutTime;		//�ϴ�����ʱ��

	//ս�����
	int			m_Fighting;			//ս����
	int			m_Hp;				//��ǰ����ֵ
	int			m_BaseStrength;		//��������
	int			m_BaseIntellect;	//��������
	int			m_BaseTechnique;	//��������
	int			m_BaseAgility;		//��������
	int			m_BaseHpMax;		//��������ֵ����
	int			m_BasePhysiDamage;	//����������
	int			m_BasePhysiDefense;	//�����������
	int			m_BaseMagicDamage;	//����ħ������
	int			m_BaseMagicDefense;	//����ħ������
	int			m_BaseStuntDamage;	//������������
	int			m_BaseStuntDefense;	//������������
	int			m_BaseHit;			//��������ֵ
	int			m_BaseJouk;			//��������ֵ
	int			m_BaseCrit;			//��������ֵ
	int			m_BaseTenacity;		//��������ֵ
	int			m_BaseParry;		//������ֵ

};
