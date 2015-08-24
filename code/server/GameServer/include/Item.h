#pragma once
#include "IBaseObj.h"
#include "ItemTemplate.h"
#include "attrs.h"
#include "gamedef.h"
#include "MessageItem.pb.h"

class CPlayer;
class CItem : public IBaseObj
{
public:
	CItem() {}
	virtual ~CItem() {}

	void	Init();
	void	Release();
	bool	OnCreate(int templateid);

	bool	OnCost(int num=1);
	bool	OnUse();
	bool	OnStack(CItem* item);

	void	SedEffect(int index, CEffect eff);
	bool	GetEffect(int index, CEffect& eff);
	const CEffect &GetUseEffect() { return m_EffectUse; }

	inline	bool	IsEquipable()	{return g_IsItemEquipment(m_Type);}		//�Ƿ��װ��
	inline	bool	IsUseble()		{return g_IsItemFunction(m_Type);}		//�Ƿ��ʹ��
	inline	bool	IsStackable()	{return GetFieldInt(Item_Attrib_StackMax) > 1;}	//�Ƿ�ɶѵ�

	void	SendClientMsg(PACKET_COMMAND* pack);
	void	SendDataMsg(PACKET_COMMAND* pack);

	void	Serialize(std::string& jsonstr);
	void	Deserialize(string jsonstr);
	void	Deserialize(rapidjson::Value& json);

	inline string GetFieldName(int i) { return attrs::get_item_field_name(i); }
	inline int GetFieldType(string name) { return attrs::get_item_field_type(name); }

	void	SyncFieldIntToData(int i);
	void	SyncFieldI64ToData(int i);
	void	SyncFieldIntToClient(int i, CPlayer* toPlayer = NULL);
	void	SyncFieldI64ToClient(int i, CPlayer* toPlayer = NULL);
	void	SyncAllAttrToClient(CPlayer* toPlayer = NULL);

protected:
	int*	_FindFieldInt(int i);
	int64*	_FindFieldI64(int i);

	void	_PackageMsgAttr32(Message::ItemAttrSync& msg, int i);
	void	_PackageMsgAttr64(Message::ItemAttrSync& msg, int i);

private:
	PersonID	m_ParentID;				//ӵ����ID
	int			m_Type;					//����
	int			m_Career;				//ְҵ����
	int			m_Sex;					//�Ա�����
	int			m_MinLevel;				//��͵ȼ�����
	int			m_Quatily;				//Ʒ��
	int			m_StackMax;				//���ѵ�����
	int			m_SellPrice;			//���ۼ۸�
	int 		m_Intensify;			//��ǰװ��ǿ���ȼ�, ��ʼ0
	CEffect		m_EffectUse;			//ʹ��Ч��
	CEffect		m_EffectEquip[EQUIP_EFFECT_MAX];	//װ��Ч��

	int			m_StackSize;			//�ѵ�����
	int			m_Position;				//װ��λ��
	PersonID	m_RoleId;               //װ��Ӣ��id

	int 		m_Strength;             //����
	int 		m_Intellect;            //����
	int 		m_Technique;			//����
	int 		m_Agility;				//����

	int 		m_Hit;					//����ֵ
	int			m_Jouk;					//����ֵ
	int 		m_Crit;					//����ֵ
	int 		m_Tenacity;				//����ֵ
	int 		m_Parry;				//��ֵ
	int 		m_Treat;				//������

	int 		m_BaseHpMax;			//��������ֵ����
	int 		m_BasePhysiDamage;      //����������
	int 		m_BasePhysiDefense;		//�����������
	int 		m_BaseMagicDamage;		//����ħ������
	int 		m_BaseMagicDefense;		//����ħ������
	int			m_BaseStuntDamage;		//������������
	int			m_BaseStuntDefense;		//������������

};
