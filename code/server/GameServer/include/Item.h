#pragma once
#include "IBaseObj.h"
#include "ItemTemplate.h"


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

	inline	bool	IsEquipable()	{return g_IsItemEquipment(m_Type);}		//�Ƿ��װ��
	inline	bool	IsUseble()		{return g_IsItemFunction(m_Type);}		//�Ƿ��ʹ��
	inline	bool	IsStackable()	{return GetFieldInt(Item_Attrib_StackMax) > 1;}	//�Ƿ�ɶѵ�

	void	SendClientMsg(PACKET_COMMAND* pack);
	void	SendDataMsg(PACKET_COMMAND* pack);

	void	SyncFieldToData(const char* field = NULL);
	void	SyncFieldIntToClient(int i, CPlayer* toPlayer = NULL);
	void	SyncFieldI64ToClient(int i, CPlayer* toPlayer = NULL);

	void	SyncFieldInt(int i, bool client = false, bool data = false, CPlayer* toPlayer = NULL);
	void	SyncFieldI64(int i, bool client = false, bool data = false, CPlayer* toPlayer = NULL);

	char*	GetName() { return m_name; }
	const CEffect &GetUseEffect() { return m_EffectUse; }

protected:
	int*	_FindFieldInt(int i);
	int64*	_FindFieldI64(int i);

	void	_SetXmlFieldInt(int i, int value);
	void	_SetXmlFieldI64(int i, int64 value);

	int		_GetXmlFieldInt(int i);
	int64	_GetXmlFieldI64(int i);

private:
	ItemID		m_ItemID;				//��Ʒʵ��ID
	PersonID	m_ParentID;				//ӵ����ID
	char		m_name[OBJ_NAME_LEN];	//����
	int			m_Type;					//����
	int			m_Career;				//ְҵ����
	int			m_Sex;					//�Ա�����
	int			m_MinLevel;				//��͵ȼ�����
	int			m_Quatily;				//Ʒ��
	int			m_StackMax;				//���ѵ�����
	int			m_SellPrice;			//���ۼ۸�
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

	int 		m_Current_level;		//��ǰװ��ǿ���ȼ�, ��ʼ0
	int 		m_MaxLevel_intensify;   //װ��ǿ������
	int			m_NextGradeTemplateId;  //װ������,��һ�ȼ�ģ��id
	int			m_UpGradeCharge;       // װ������������

	int 		m_IntensifyJadePoints;
	int 		m_IntensifyJadeBasePoints;	
	int 		m_LayCharge;
public:	
	//int 		m_Intensify_points[CHARGE];		//�ӵ�ǰǿ���ȼ�ǿ������һ���������
	//int 		m_Charge[CHARGE];				//������
	
	int			m_Souls[ITEM_KONG];//����Ƕ�꾧���� �б�ģ��id
//�꾧
	SoulCrystal m_crystal[ITEM_ARRTU];

	UpGradeNeeds m_UpGrade[ARR_LENS];	//������Ҫ
private: 
	int			m_SoulType;				//��������, ��1�� ��2�� ��3�� -1
	int			m_SoulPoints;				//�������

};
