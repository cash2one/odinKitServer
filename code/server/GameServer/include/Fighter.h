#pragma once
#include "IBaseObj.h"
#include "utlmap.h"
#include "eventdef.h"
#include "ItemUnit.h"

#define FIGHTER_LEVEL_MAX	99
#define ROLE_SKILL_MAX		10

struct FlagBit
{
	unsigned int bitOnEffect		: 1;
	unsigned int bitMoralCost		: 1;
	unsigned int bitHaveRevive		: 1;
	unsigned int bitShareDamage		: 1;
	unsigned int bitInvincible		: 1;
	unsigned int bitFixStuntDamage	: 1;
	unsigned int bitFixedKill		: 1;
	unsigned int bitCanRevive		: 1;
	unsigned int bitSilent			: 1;
	//...
};

class CPlayer;
class CFighter : public IBaseObj
{
public:
	CFighter();
	virtual ~CFighter();

	void	Init();
	void	Release();

	inline	bool	IsBerserker()					{return Role_Vocation_Berserker == m_Vocation;}
	inline	bool	IsMage()						{return Role_Vocation_Mage == m_Vocation;}
	inline	bool	IsRobbers()						{return Role_Vocation_Robbers == m_Vocation;}

	inline	bool	IsMale()						{return Role_Sex_Male == m_Sex;}
	inline	bool	IsFemale()						{return Role_Sex_Female == m_Sex;}

	inline	bool	IsCommonBody()					{return Role_Body_Common == m_Body;}
	inline	bool	IsLargeBody()					{return Role_Body_Large == m_Body;}
	inline	bool	IsHugeBody()					{return Role_Body_Huge == m_Body;}

	inline	bool	CanAttack()						{return !IsDizzy();}

	inline	bool	IsDizzy()						{return m_Dizzy;}
	inline	void	SetDizzy(bool flag)				{m_Dizzy = flag;}

	inline	bool	IsConfusion()					{return m_Confusion;}
	inline	void	SetConfusion(bool flag)			{m_Confusion = flag;}

	inline	bool	IsDead()						{return m_Dead; /*return GetFieldInt(Role_Attrib_Hp) <= 0;*/}
	inline	void	Die()							{m_Dead = true;}
	inline  void	Revive()						{m_Dead = false;}

	virtual void	Copy(const CFighter& fighter);

	virtual void	GainExp(int64 value) { return; }
	virtual void	TeamGainExp(int64 value) { return; }
	virtual void	GainStateExp(int64 value) { return; }
	virtual bool	GainGold(int nGold, GOLD_REASON reason) { return true; }
	virtual bool	GainSilver(int nSilver, SILVER_REASON reason) { return true; }
	virtual void	GainApLimit(int value) { return; }
	virtual void	GainMerit(int value, MERIT_REASON reason) { return; }

	void			GainHp(int value);

	void	OnLevelup(int up = 1);

	void	InitBaseAttr(bool client = false);

	virtual CPlayer* GetPlayer()	{return NULL;}

	void	SyncBaseAttrInfo(CPlayer* toplayer) { return; }	//ͬ��ս����������

protected:
	virtual int*	_FindFieldInt(int i);
	virtual int64*	_FindFieldI64(int i);

	virtual void	_ChangeRelatedField(int i, bool client = false, bool data = false);

protected:
	int		m_Vocation;			//ְҵ
	int		m_Sex;				//�Ա�
	int		m_Level;			//�ȼ�
	int		m_SceneID;			//����ID
	int		m_Position;			//��������
	int		m_TeamPos;			//��������
	int		m_Hp;				//��ǰ����ֵ
	int		m_Morale;			//ʿ��
	int		m_Counter;			//������
	int		m_FloatProb;		//��ɸ��ռ���
	int		m_Sun;				//�������ԣ���
	int		m_Moon;				//�������ԣ���
	int		m_Stars;			//�������ԣ���
	SkillID	m_CommSkill;		//��ͨ��������
	SkillID	m_StuntSkill;		//ʹ�õľ���
	SkillID	m_FinalSkill;		//ʹ�õ��սἼ
	int		m_Fighting;			//ս����
	int		m_Body;				//����
	int		m_StarsID;			//����ID
	int		m_Quality;			//Ʒ��
	int		m_QualityProgress;	//Ʒ�ʽ���

	int		m_BaseStrength;		//��������
	int		m_BaseIntellect;	//��������
	int		m_BaseTechnique;	//��������
	int		m_BaseAgility;		//��������

	int		m_TrainStrength;	//ѵ���������ɳ�
	int		m_TrainIntellect;	//ѵ���������ɳ�
	int		m_TrainTechnique;	//ѵ���ļ��ɳɳ�
	int		m_TrainAgility;		//ѵ�������ݳɳ�

	int		m_Strength[Attrib_Size];	//����
	int		m_Intellect[Attrib_Size];	//����
	int		m_Technique[Attrib_Size];	//����
	int		m_Agility[Attrib_Size];		//����

	int		m_BaseHit;			//��������ֵ
	int		m_BaseJouk;			//��������ֵ
	int		m_BaseCrit;			//��������ֵ
	int		m_BaseTenacity;		//��������ֵ
	int		m_BaseParry;		//������ֵ
	int		m_BaseTreat;		//����������

	int		m_Hit[Attrib_Size];		//����ֵ
	int		m_Jouk[Attrib_Size];	//����ֵ
	int		m_Crit[Attrib_Size];	//����ֵ
	int		m_Tenacity[Attrib_Size];//����ֵ
	int		m_Parry[Attrib_Size];	//��ֵ
	int		m_Treat[Attrib_Size];	//������

	int		m_BaseHpMax;		//��������ֵ����
	int		m_BasePhysiDamage;	//����������
	int		m_BasePhysiDefense;	//�����������
	int		m_BaseMagicDamage;	//����ħ������
	int		m_BaseMagicDefense;	//����ħ������
	int		m_BaseStuntDamage;	//������������
	int		m_BaseStuntDefense;	//������������

	int		m_HpMax[Attrib_Size];			//����ֵ����
	int		m_PhysiDamage[Attrib_Size];		//������
	int		m_PhysiDefense[Attrib_Size];	//�������
	int		m_MagicDamage[Attrib_Size];		//ħ������
	int		m_MagicDefense[Attrib_Size];	//ħ������
	int		m_StuntDamage[Attrib_Size];		//��������
	int		m_StuntDefense[Attrib_Size];	//��������

	int		m_PhysiRealDamageIncr;		//��������ֵ
	int		m_PhysiRealDamageIncrPer;	//�������˰ٷֱ�
	int		m_PhysiRealDamageReducePer;	//������˰ٷֱ�
	int		m_MagicRealDamageIncr;		//ħ������ֵ
	int		m_MagicRealDamageIncrPer;	//ħ�����˰ٷֱ�
	int		m_MagicRealDamageReducePer;	//ħ�����˰ٷֱ�
	int		m_StuntRealDamageIncr;		//��������ֵ
	int		m_StuntRealDamageIncrPer;	//�������˰ٷֱ�
	int		m_StuntRealDamageReducePer;	//�������˰ٷֱ�

	int		m_MoraleRevert;		//ʿ���ظ�
	int		m_HpRevert;			//�����ظ�

	bool	m_Dizzy;			//ѣ��״̬
	bool	m_Confusion;		//����״̬

	int		m_Hotohori;			//����:��/��/��
	bool	m_Dead;				//������־

	int		m_InitStuntID;		//�����ľ�������

	//ս��ʱ�洢�������ܵ�����Ч��(�����̣�������)
	int		m_CombatAllPer;
	int		m_CombatCrossPer;
	int		m_CombatRowPer;
	int		m_CombatLinePer;
	int		m_HotohoriDamageIncPer;
	int		m_SunDamageIncPer;
	int		m_MoonDamageIncPer;
	int		m_StarDamageIncPer;
	int		m_HotohoriDamageRedPer;
	int		m_SunDamageRedPer;
	int		m_MoonDamageRedPer;
	int		m_StarDamageRedPer;
	int		m_BodyDamageIncPer;
	int		m_CommonDamageIncPer;
	int		m_LargeDamageIncPer;
	int		m_HugeDamageIncPer;
	int		m_BodyDamageRedPer;
	int		m_CommonDamageRedPer;
	int		m_LargeDamageRedPer;
	int		m_HugeDamageRedPer;
	int		m_ReducePlace;
	int		m_ReduceFloat;
	int		m_ReduceCounter;
	int		m_IncreaseCounter;

	FlagBit m_BitFlag;					//ս������Ҫ�ı�־
	int		m_iFlag;
	int		m_HpCombatInit;				//ս����ʼѪֵ

	int			m_MoraleAttack;				//�ָ�ʿ��ֵ
	int			m_MoraleBeAttack;
	int			m_MoraleRound;

public:
	bool	m_bHit;						//�Ƿ���е���

	SkillID				m_Skills[ROLE_SKILL_MAX];
	CUtlMap<int, int>	m_Buffs;	//ս����buff
	CUtlMap<int, int>	m_ExBuffs;  //��ս������ӵ�buff

public:
	CItemUnit	m_ItemUnit;

};

