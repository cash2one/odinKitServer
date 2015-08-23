#pragma once
#include "commdata.h"
#include "Singleton.h"
#include "ObjMgr.h"

struct SoulCrystal	//�꾧
{
	int	soulEffectID;			//Ч��ID
	int	soulEffectValue;		//Ч��ֵ
	int	soulEffectProbability;	//Ч������
	int	soulEffectAttr;			//��������
	int soulInspirType;//��������Ҫ�Ļ�������
	int	soulInspirGradeCounts;//��������Ҫ�Ļ���ȼ���
	bool isSpir;	//�Ƿ񼤻Ĭ����falseδ��� true����
};

struct UpGradeNeeds//װ������  ��Ҫ
{
	int templateId;
	int nums;
};


class CItemTemplate
{
public:
	int	GetFieldInt(int i);

public:
	int		m_Id;			//���
	//char	m_Name[OBJ_NAME_LEN];	//����
	int		m_Type;			//����
	int		m_Career;		//ְҵ
	int		m_Sex;			//�Ա�
	int		m_MinLevel;		//���ʹ�õȼ�
	int		m_Quatily;		//Ʒ��
	int		m_StackMax;		//�ѵ�����
	int		m_SellPrice;	//���ۼ۸�
	//CEffect	m_EffectUse;	//ʹ��Ч��
	//CEffect	m_EffectEquip[EQUIP_EFFECT_MAX];	//װ��Ч��

	
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

	int 		m_Intensify;			//��ǰװ��ǿ���ȼ�, ��ʼ0
	int 		m_MaxLevel_intensify;	//װ��ǿ������
	//int 		m_Intensify_points[Intensify_Points_ENDS];		//�ӵ�ǰǿ���ȼ�ǿ������һ���������

	int 		m_SoulType;				//����, ��1�� ��2�� ��3�� -1
	int 		m_SoulPoints; 			//�������

	//int 		m_charge[CHARGE];		//������


	//�꾧
	SoulCrystal  m_crystal[ITEM_ARRTU];


	UpGradeNeeds m_UpGrade[ARR_LENS];//������Ҫ
	int			m_NextGradeTemplateId;  //��һ�ȼ�ģ��id
	int			m_UpGradeCharge;       // ����������

	int 		m_IntensifyJadePoints;
	int 		m_IntensifyJadeBasePoints;	
	int 		m_LayCharge;  //��Ƕ������
};

class CItemTemplateMgr : public CObjMgr< CItemTemplate, int >, public Singleton< CItemTemplateMgr >
{
public:
	CItemTemplateMgr();
	~CItemTemplateMgr();

	bool	LoadCSVData(const char* csvfile);

protected:
	
};

#define ItemTemplateMgr CItemTemplateMgr::getSingleton()
