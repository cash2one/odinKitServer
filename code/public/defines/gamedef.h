#ifndef ODIN_COMMDEF_H
#define ODIN_COMMDEF_H


#define DAY_SEC (24*60*60)

#define	EQUIP_EFFECT_MAX		5	//װ��Ч������
#define CHARGE					8  //������
#define ITEM_ARRTU					3   //�꾧��������
#define	ITEM_KONG					4	//װ������Ƕ�Ļ���ͻ꾧����
#define ARR_LENS  				6
#define LEVELS					5  //�ȼ�,  ǿ������ ʱ  �ȼ��ж�

#define ZERO_ONE 	10
#define ONE_TWO  	20
#define TWO_THREE  	30
#define THREE_FOUR  40
#define FOUR_FIVE  	50
#define FIVE_SIX  	60
#define SIX_SEVEN  	70
#define SEVEN_EIGHT 80

#define ARR_LEN		(6+1)
#define MATER_LENS	(ARR_LEN-1)
#define MATER_LEN	10

#define SUN			1
#define MOON	  	2
#define SUN_MOON	3
#define STAR		4
#define SUN_STAR  	5
#define MOON_STAR  	6
#define SUN_MOON_STAR	7

#define	 EXPRESS	0
#define  SHOP       1
#define  MALL       2
#define  CAIBEI     3
#define  ZHANGONG   4
#define	 SHENGWANG	5

//����
#define ITEMUNIT_INIT_PAGE	3		//��ʼҳ��
#define ITEMUNIT_BUG_PAGE	15		//�ɹ���ҳ��
#define ITEMUNIT_PER_PAGE	6		//ÿҳ������
#define ITEMUNIT_BAG_INIT	(ITEMUNIT_PER_PAGE * ITEMUNIT_INIT_PAGE)
#define ITEMUNIT_EXPAND_BASECOST	20	//��һ����չ�������Ľ��

enum Store_Group
{
	Group_Unknow = 0,
	Group_Equip ,			//װ����
	Group_Material,			//������
	Group_GiftBag,			//�����
	Group_Jade,				//��ʯ��
	Group_Crystal,			//�׾���
	Group_Mithril,		    //������
	Group_HotSell,			//������
	Group_Stone,			//�׾�ʯ
	Group_Berserker = 9,	//սʿ��
	Group_Mage,				//��ʦ��
	Group_Robber,			//������
	Group_Reserved,			//������
	Group_All,				//ȫ������
};


#define STAR_NUM	7	//�������ǵ������

#define ITEM_TEMPID_MIN		10000000	//��С����ģ��ID


//��ս
#define BATTLE_WP_LINE		7
#define BATTLE_WP_MAX	BATTLE_WP_LINE*BATTLE_WP_LINE

enum JadeType
{
	JADESUN = 1,	//��
	JADEMOON,		//��
	JADESTAR,		//��
};

enum MaterialType
{
	Material_Jade = 1,	//��ʯ
	Material_Crystal,	//�׾�
	Material_Mithril,	//����
};

enum CoinType
{
	SILVERCOIN = 1,	//����
	GOLDCOIN,		//���
	CAICOIN,		//�ʱ�
	ZHANGONGCOIN,   //ս��
	SHENGWANGCOIN,	//����
};

enum Role_Type
{
	Role_Type_Player = 1,			//���
	Role_Type_Hero,					//Ӣ��
	Role_Type_Monster,				//����
};

enum Role_Vocation
{
	Role_Vocation_Berserker = 1,	//սʿ
	Role_Vocation_Mage,				//��ʦ
	Role_Vocation_Robbers,			//����
	Role_Vocation_Tongyong,			//ͨ��
};

enum Role_Race
{
	Role_Race_People = 0,			//����
	Role_Race_Animal,				//����
	Role_Race_Fairy,				//����
	Role_Race_Machine,				//����
	Role_Race_Devil,				//ħ��
};

enum Role_Sex
{
	Role_Sex_None = 0,
	Role_Sex_Male,					//��
	Role_Sex_Female,				//Ů
};

enum Role_Body
{
	Role_Body_Common = 0,			//��ͨ����
	Role_Body_Large,				//������
	Role_Body_Huge,					//�޴�����
};

enum Damage_Position
{
	Damage_Position_Head = 1,		//ͷ���ǣ� 
	Damage_Position_Chest,			//���� ��β����
	Damage_Position_Arm,			//�� �����
	Damage_Position_Leg,			//��
};

enum Combat_Score					//ս������
{
	Combat_Score_Null = 0,			//��Ч
	Combat_Score_D,					//D
	Combat_Score_C,					//C
	Combat_Score_B,					//B
	Combat_Score_A,					//A
	Combat_Score_S,					//S
	Combat_Score_Max,					
};

enum Intensify_Points					//ǿ���ȼ�����, �������������
{
	Intensify_Points_A= 0,   //0_1�������				
	Intensify_Points_B,		 //1_2�������			
	Intensify_Points_C,		//2_3�������			
	Intensify_Points_D,		//3_4�������			
	Intensify_Points_E,		//4_5�������			
	Intensify_Points_F,		//5_6�������	

	Intensify_Points_G,		 //6_7�������			
	Intensify_Points_H,		//7_8�������			
	Intensify_Points_ENDS,		//����
};

enum HoleState{
    kTypeUnEmbeded = 0, //�ѿ�����δ��Ƕ
    kTypeEmbeded,		//����Ƕ	
    kTypeUnopen,		//δ����		
};

enum KONG_FLAG
{
	KongZero = 0, 			//��0����, ��ʶ�꾧��λ
	KongFirst, 				//��һ���ף� ��ʶ�����һ����λ
	KongSecond,				//�ڶ����ף� ��ʶ����ڶ�����λ
	KongThird,				//�������ף� ��ʶ�����������λ
};

enum HeroPosition		//Ӣ�۵�λ��
{
	Hero_Pos_Inns = 0,	//��ջ��
	Hero_Pos_Team,		//������
	//Hero_Pos_PK,		//������
};

enum Train_Type
{
	Train_Common = 0,	//��ͨѵ��
	Train_Advanced,		//�߼�ѵ��
	Train_Vip,			//����ϴ��
};

enum Reset_Skill_Type
{
	Reset_Skill_Gold = 0,	//��ҷ�ʽ��������
	Reset_Skill_Silver,		//���ҷ�ʽ��������
};

enum Notice_Type
{
	Notice_Error = 0,	//ϵͳ��ʾ
	Notice_Broadcast,	//�㲥��Ϣ
};

enum BattleCamp			//��ս��Ӫ
{
	BATTLE_CAMP_NULL = -1,	//����
	BATTLE_CAMP_A = 0,	//��ս��ӪA
	BATTLE_CAMP_B,		//��ս��ӪB
	BATTLE_CAMP,
};

enum WpType				//��ս·������
{
	WP_NORMAL = 0,		//��ͨ·��
	WP_BASE,			//��Ӫ
};

enum RewardType			//��������
{
	REWARD_BATTLE_WINNER	= 1,	//��ս��ʤ����
	REWARD_BATTLE_RANKING,			//��ս��������
	REWARD_ARENA_RANKING,			//����������
	REWARD_BOSS_RANKING		= 10,	//����boss��������	
	REWARD_BATTLE_WPNUM     = 20,	//��ս ռ��·���������
};

enum EOrderData
{
	EARENA_DATA_ARENASCORE,		// score
	EARENA_DATA_CHALLENGENUM,		// challenge number
	EARENA_DATA_BUYCHALLENGENUM, 	// bought challenge number
	EARENA_DATA_CHANGENUM, 		// change Opponent number
	EARENA_DATA_CURSTAGE,		// current stage
	EARENA_DATA_LASTREFRESHTIME,	// last refresh time
	EARENA_DATA_KNIGHTID,			// knight
};

enum EOrderType
{
	EORDER_ARENA,
	EORDER_END,
};

enum EChatType {
	ECHAT_PRIVATE, 
	ECHAT_WORLD,
	ECHAT_CAMP,
	ECHAT_KNIGHT,

	ECHAT_MAX,
};

enum City_Scene_Type
{
	Scene_Common = 1,		//��ͨ����
	Scene_Tavern_Battle,	//�ƹ�/��ս
	Scene_Elite,			//��Ӣ����
};

enum Challenge_Mode
{
	Mode_Attack = 1,		//����ģʽ
	Mode_Kill,				//��ɱģʽ
	Mode_Wipe,				//ɨ��ģʽ
};

enum Enum_ActivityType
{
    ActivityType_None = -1,     //δ֪
    ActivityType_LJDL = 0,      //�ۻ���½����
    ActivityType_CZ = 1,        //��ֵ
    ActivityType_DownLoad = 2,  //���ؽ���
    ActivityType_RechargeA = 3, //���ʳ�ֵһ�η���
    ActivityType_RechargeB = 4, //�״γ�ֵ��η���
    ActivityType_LJRecharge = 5,//�ۻ���ֵ
    ActivityType_MRcharge  =6,//ÿ�ճ�ֵ
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int Role_Inherit		= 1<<0;		// �̳�
const int Role_BeInherit	= 1<<1;		// ���̳�

inline bool g_isInHerit(int flag)		{return (flag & Role_Inherit) > 0;}
inline bool g_isBeInHerit(int flag)		{return (flag & Role_BeInherit) > 0;}

inline int g_setInherit(int& flag)		{return (flag |= Role_Inherit);}		
inline int g_setBeInherit(int& flag)	{return (flag |= Role_BeInherit);}	

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����Flag
const int Flag_OnEffect			= 1 << 0;
const int Flag_MoralCost		= 1 << 1;
const int Flag_HaveRevive		= 1 << 2;
const int Flag_ShareDamage		= 1 << 3;
const int Flag_Invincible		= 1 << 4;
const int Flag_FixStuntDamage	= 1 << 5;
const int Flag_FixedKill		= 1 << 6;
const int Flag_CanRevive		= 1 << 7;
const int Flag_Silent           = 1 << 8;

inline bool g_isOnEffect(int flag)			{ return (flag & Flag_OnEffect) > 0; }
inline bool g_isMoralCost(int flag)			{ return (flag & Flag_MoralCost) > 0; }
inline bool g_isHaveRevive(int flag)		{ return (flag & Flag_HaveRevive) > 0; }
inline bool g_isShareDamage(int flag)		{ return (flag & Flag_ShareDamage) > 0; }
inline bool g_isInvincible(int flag)		{ return (flag & Flag_Invincible) > 0; }
inline bool g_isFixStuntDamage(int flag)	{ return (flag & Flag_FixStuntDamage) > 0; }
inline bool g_isFixedKill(int flag)			{ return (flag & Flag_FixedKill) > 0; }
inline bool g_isCanRevive(int flag)			{ return (flag & Flag_CanRevive) > 0; }
inline bool g_isSilent(int flag)            { return (flag & Flag_Silent) > 0; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ս������
const int Attack_Kill		= 1<<0;		// ��ɱ
const int Attack_Bekill		= 1<<1;		// ����ɱ
const int Attack_Jouk		= 1<<2;		// ����
const int Attack_Crit		= 1<<3;		// ����
const int Attack_Parry		= 1<<4;		// ��
const int Attack_Counter	= 1<<5;		// ����
const int Attack_Floated	= 1<<6;		// ����
const int Attack_Destroy	= 1<<7;		// �ƻ� 7-10��4���ƻ�λ��
const int Attack_Destroy_All= (1<<7) + (1<<8) + (1<<9) + (1<<10);
const int Attack_Combo		= 1<<11;	//����
const int Attack_MyBuff		= 1<<12;	//���Լ���buff
const int Attack_TaBuff		= 1<<13;	//��Ŀ���buff
const int Attack_MyRevive	= 1<<14;	//�Լ�����
const int Attack_TaRevive	= 1<<15;	//Ŀ�긴��

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ս����غ���
inline void g_setKill(int& flag)	{flag |= Attack_Kill;}		//���û�ɱ
inline void g_setBekill(int& flag)	{flag |= Attack_Bekill;}	//���ñ���ɱ
inline void g_setJouk(int& flag)	{flag |= Attack_Jouk;}		//��������
inline void g_setCrit(int& flag)	{flag |= Attack_Crit;}		//���ñ���
inline void g_setParry(int& flag)	{flag |= Attack_Parry;}		//���ø�
inline void g_setCounter(int& flag)	{flag |= Attack_Counter;}	//���÷���
inline void	g_setFloated(int& flag)	{flag |= Attack_Floated;}	//���ø���
inline void	g_setCombo(int& flag)	{flag |= Attack_Combo;}		//��������
inline void	g_setMyBuff(int& flag)	{flag |= Attack_MyBuff;}	//���ø��Լ���buff
inline void	g_setTaBuff(int& flag)	{flag |= Attack_TaBuff;}	//���ø�Ŀ���buff
inline void g_setMyRevive(int& flag){flag |= Attack_MyRevive;}	//�����Լ�����
inline void g_setTaRevive(int& flag){flag |= Attack_TaRevive;}	//����Ŀ�긴��
inline void g_setDestroy(int& flag, int i)	{flag |= (Attack_Destroy<<i);}	//�����ƻ�

inline bool	g_isKill(int flag)		{return (flag & Attack_Kill) > 0;}		//�жϻ�ɱ
inline bool	g_isBekill(int flag)	{return (flag & Attack_Bekill) > 0;}	//�жϱ���ɱ
inline bool	g_isJouk(int flag)		{return (flag & Attack_Jouk) > 0;}		//�ж�����
inline bool	g_isCrit(int flag)		{return (flag & Attack_Crit) > 0;}		//�жϱ���
inline bool	g_isParry(int flag)		{return (flag & Attack_Parry) > 0;}		//�жϸ�
inline bool	g_isCounter(int flag)	{return (flag & Attack_Counter) > 0;}	//�жϷ���
inline bool	g_isFloated(int flag)	{return (flag & Attack_Floated) > 0;}	//�жϸ���
inline bool	g_isCombo(int flag)		{return (flag & Attack_Combo) > 0;}		//�ж�����
inline bool	g_isMyBuff(int flag)	{return (flag & Attack_MyBuff) > 0;}	//�жϸ��Լ���buff
inline bool	g_isTaBuff(int flag)	{return (flag & Attack_TaBuff) > 0;}	//�жϸ�Ŀ���buff
inline bool g_isMyRevive(int flag)	{return (flag & Attack_MyRevive) > 0;}	//�ж��Լ�����
inline bool g_isTaRevive(int flag)	{return (flag & Attack_TaRevive) > 0;}	//�ж�Ŀ�긴��
inline bool	g_isDestroy(int flag, int& i)									//�ж��ƻ�
{
	int bit = flag & Attack_Destroy_All;
	if( bit <= 0 )
		return false;
	i = 1;
	int t = Attack_Destroy;
	while( bit != t )
	{
		t = t<<1;
		i++;
	}
	return true;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//����ս����ز���
const int Skill_Stunt_Cost = 100;		//ʹ�þ�����ʿ��ֵ
const int Skill_Anger_Cost = 100;		//ʹ���սἼ��ŭ��ֵ
const int Combat_Place_Destory = 4;		//��λ�ƻ�λ������

#define FIGHT_ROUND_MAX		30			//ս�������غ���

//���ܹ�����Χ
enum SKILL_CAST_DISTANCE
{
	SKILL_CAST_CLOSE = 0,	//����
	SKILL_CAST_LONG,		//Զ��
};

//�����˺�����
enum SKILL_DAMAGE_TYPE
{
	SKILL_DAMAGE_PHYSICAL = 1,	//�����˺�
	SKILL_DAMAGE_MAGIC,			//ħ���˺�
	SKILL_DAMAGE_STUNT,			//�����˺�
};

struct CEffect
{
    int	effectID;			//Ч��ID
    int	effectValue;		//Ч��ֵ
    int	effectProbability;	//Ч������
    int	effectAttr;			//��������
    
    void operator=(const CEffect& eff) {
        effectID = eff.effectID;
        effectValue = eff.effectValue;
        effectProbability = eff.effectProbability;
        effectAttr = eff.effectAttr;
    }
};

enum Buff_Type
{
	Buff_Self_Single = 0,		//��������buff����Ч��
	Buff_Self_Repeated,			//��������buff�ظ�/����Ч��
	Buff_Target_Single,			//��������buff����Ч��
	Buff_Target_Repeated		//��������buff�ظ�/����Ч��
};

//��ս��ز���
const int g_Number_BattleBuyActionCost		= 5;	//������ս��������5���
const int g_ClearCDTimePerGold  = 3; //��ս���ٷ�����Ҫ1��������CD

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//obj���Զ���
enum Role_Attrib
{
	///////////////int����/////////////////////////
	Role_Attrib_Null = 0,

	Role_Attrib_ID,					//��ɫid
	Role_Attrib_UserID,				//�˺�ID
	Role_Attrib_Parent,				//ӵ����	
	Role_Attrib_CreateTime,			//��ɫ����ʱ��
	Role_Attrib_LoginTime,			//�ϴε�¼ʱ��
	Role_Attrib_LogoutTime,			//�ϴ�����ʱ��
	Role_Attrib_TemplateID,			//ģ��
	Role_Attrib_Name,				//����
	Role_Attrib_Vocation,			//ְҵ
	Role_Attrib_Type,				//����
	Role_Attrib_Sex,				//�Ա�
	Role_Attrib_Camp,				//��Ӫ
	Role_Attrib_Level,				//�ȼ�
	Role_Attrib_Vip,				//vip�ȼ�
	Role_Attrib_GoldCoin,			//���
	Role_Attrib_SilverCoin,			//����
	Role_Attrib_Fighting,			//ս����
	Role_Attrib_SceneID,			//����ID
	Role_Attrib_Position,			//��������
	Role_Attrib_Exp,				//��ǰ����
	Role_Attrib_Hp,					//��ǰ����ֵ

	//���ԣ���ǰֵ
	Role_Attrib_Strength,			//����
	Role_Attrib_Intellect,			//����
	Role_Attrib_Technique,			//����
	Role_Attrib_Agility,			//����
	Role_Attrib_Hit,				//����ֵ
	Role_Attrib_Jouk,				//����ֵ
	Role_Attrib_Crit,				//����ֵ
	Role_Attrib_Tenacity,			//����ֵ
	Role_Attrib_Parry,				//��ֵ
	Role_Attrib_Treat,				//������
	Role_Attrib_HpMax,				//����ֵ����
	Role_Attrib_PhysiDamage,		//������
	Role_Attrib_PhysiDefense,		//�������
	Role_Attrib_MagicDamage,		//ħ������
	Role_Attrib_MagicDefense,		//ħ������
	Role_Attrib_StuntDamage,		//��������
	Role_Attrib_StuntDefense,		//��������

	//���ԣ�����ֵ
	Role_Attrib_BaseStrength,		//��������
	Role_Attrib_BaseIntellect,		//��������
	Role_Attrib_BaseTechnique,		//��������
	Role_Attrib_BaseAgility,		//��������
	Role_Attrib_BaseHit,			//��������ֵ
	Role_Attrib_BaseJouk,			//��������ֵ
	Role_Attrib_BaseCrit,			//��������ֵ
	Role_Attrib_BaseTenacity,		//��������ֵ
	Role_Attrib_BaseParry,			//������ֵ
	Role_Attrib_BaseTreat,			//����������
	Role_Attrib_BaseHpMax,			//��������ֵ����
	Role_Attrib_BasePhysiDamage,	//����������
	Role_Attrib_BasePhysiDefense,	//�����������
	Role_Attrib_BaseMagicDamage,	//����ħ������
	Role_Attrib_BaseMagicDefense,	//����ħ������
	Role_Attrib_BaseStuntDamage,	//������������
	Role_Attrib_BaseStuntDefense,	//������������

	//���ԣ�����ֵ
	Role_Attrib_StrengthAddons,		//��������ֵ
	Role_Attrib_IntellectAddons,	//��������ֵ
	Role_Attrib_TechniqueAddons,	//���ɸ���ֵ
	Role_Attrib_AgilityAddons,		//���ݸ���ֵ
	Role_Attrib_HitAddons,			//����ֵ����ֵ
	Role_Attrib_JoukAddons,			//����ֵ����ֵ
	Role_Attrib_CritAddons,			//����ֵ����ֵ
	Role_Attrib_TenacityAddons,		//����ֵ����ֵ
	Role_Attrib_ParryAddons,		//��ֵ����ֵ
	Role_Attrib_TreatAddons,		//����������ֵ
	Role_Attrib_HpMaxAddons,		//����ֵ���޸���ֵ
	Role_Attrib_PhysiDamageAddons,	//����������ֵ
	Role_Attrib_PhysiDefenseAddons,	//�����������ֵ
	Role_Attrib_MagicDamageAddons,	//ħ����������ֵ
	Role_Attrib_MagicDefenseAddons,	//ħ����������ֵ
	Role_Attrib_StuntDamageAddons,	//������������ֵ
	Role_Attrib_StuntDefenseAddons,	//������������ֵ

	//���ԣ����Ӱٷֱ�
	Role_Attrib_StrengthPercent,		//�������Ӱٷֱ�
	Role_Attrib_IntellectPercent,		//�������Ӱٷֱ�
	Role_Attrib_TechniquePercent,		//���ɸ��Ӱٷֱ�
	Role_Attrib_AgilityPercent,			//���ݸ��Ӱٷֱ�
	Role_Attrib_HitPercent,				//����ֵ���Ӱٷֱ�
	Role_Attrib_JoukPercent,			//����ֵ���Ӱٷֱ�
	Role_Attrib_CritPercent,			//����ֵ���Ӱٷֱ�
	Role_Attrib_TenacityPercent,		//����ֵ���Ӱٷֱ�
	Role_Attrib_ParryPercent,			//��ֵ���Ӱٷֱ�
	Role_Attrib_TreatPercent,			//���������Ӱٷֱ�
	Role_Attrib_HpMaxPercent,			//����ֵ���޸��Ӱٷֱ�
	Role_Attrib_PhysiDamagePercent,		//���������Ӱٷֱ�
	Role_Attrib_PhysiDefensePercent,	//����������Ӱٷֱ�
	Role_Attrib_MagicDamagePercent,		//ħ���������Ӱٷֱ�
	Role_Attrib_MagicDefensePercent,	//ħ���������Ӱٷֱ�
	Role_Attrib_StuntDamagePercent,		//�����������Ӱٷֱ�
	Role_Attrib_StuntDefensePercent,	//�����������Ӱٷֱ�

	Role_Attrib_PhysiRealDamageIncr,		//��������ֵ
	Role_Attrib_PhysiRealDamageIncrPer,		//�������˰ٷֱ�
	Role_Attrib_PhysiRealDamageReducePer,	//������˰ٷֱ�

	Role_Attrib_MagicRealDamageIncr,		//ħ������ֵ
	Role_Attrib_MagicRealDamageIncrPer,		//ħ�����˰ٷֱ�
	Role_Attrib_MagicRealDamageReducePer,	//ħ�����˰ٷֱ�

	Role_Attrib_StuntRealDamageIncr,		//��������ֵ
	Role_Attrib_StuntRealDamageIncrPer,		//�������˰ٷֱ�
	Role_Attrib_StuntRealDamageReducePer,	//�������˰ٷֱ�

	//�ӳ�����
	Role_Attrib_ExpAddition,		//����ӳɰٷֱ�
	Role_Attrib_MeritAddition,		//ս���ӳɰٷֱ�
	Role_Attrib_SilverAddition,		//���Ҽӳɰٷֱ�
	Role_Attrib_StateExpAddition,	//λ�׾���ӳɰٷֱ�

	Role_Attrib_End,
};

//��Ʒ���Զ���
enum Item_Attrib
{
	Item_Attrib_Null = 0,
	Item_Attrib_ID,					//ʵ��ID
	Item_Attrib_Type,				//��Ʒ����
	Item_Attrib_Career,				//ְҵ����
	Item_Attrib_Sex,				//�Ա�����
	Item_Attrib_MinLevel,			//��͵ȼ�����
	Item_Attrib_Quatily,			//Ʒ��
	Item_Attrib_StackSize,			//�ѵ�����
	Item_Attrib_StackMax,			//���ѵ�����
	Item_Attrib_SellPrice,			//���ۼ۸�
	Item_Attrib_Parent,				//ӵ����ID
	Item_Attrib_Position,			//װ��λ��
	Item_Attrib_EquipID,			//Ӣ��id��role_id
	//��������
	Item_Attrib_Strength,			//����
	Item_Attrib_Intellect,			//����
	Item_Attrib_Technique,			//����
	Item_Attrib_Agility,			//����

	//��������
	Item_Attrib_Hit,				//����ֵ
	Item_Attrib_Jouk,				//����ֵ
	Item_Attrib_Crit,				//����ֵ
	Item_Attrib_Tenacity,			//����ֵ
	Item_Attrib_Parry,				//��ֵ
	Item_Attrib_Treat,				//������

	Item_Attrib_BaseHpMax,			//��������ֵ����
	Item_Attrib_BasePhysiDamage,	//����������
	Item_Attrib_BasePhysiDefense,	//�����������
	Item_Attrib_BaseMagicDamage,	//����ħ������
	Item_Attrib_BaseMagicDefense,	//����ħ������
	Item_Attrib_BaseStuntDamage,	//������������
	Item_Attrib_BaseStuntDefense,	//������������



	Item_Attrib_Intensify,			//��ǰװ��ǿ���ȼ�
	Item_Attrib_MaxLevelIntensify,	//װ��ǿ������
	Item_Attrib_IntensifyPoints,	//�ӵ�ǰǿ���ȼ�ǿ������һ�������������[9]

	Item_Attrib_SoulType,			//����, ��1�� ��2�� ��3�� -1
	Item_Attrib_SoulPoints, 		//�������
	Item_Attrib_CHARGE, 			//ǿ��������

	Item_Attrib_KongStoreZero,			// ��1  �洢
	Item_Attrib_KongStoreFirst, 		//��2   �洢
	Item_Attrib_KongStoreSecond, 		//��3   �洢
	Item_Attrib_KongStoreThird, 		//��4   �洢

	Item_Attrib_NextGradeTemplateId,//��һ�ȼ�ģ��id
	Item_Attrib_UpGradeCharge,  // װ������������
	Item_Attrib_IntensifyJadePoints,
	Item_Attrib_IntensifyJadeBasePoints,
	Item_Attrib_LayCharge,
    
    Item_Attrib_SceneId,
	Item_Attrib_TemplateID,
    Item_Attrib_Name,
    
    Item_Attrib_GroupId,
    Item_Attrib_SellType,
};

//װ��λ�ö���
enum Equip_Position
{
	Equip_Position_MainWeapon = 0,	//��������
	Equip_Position_AssiWeapon,		//��������
	Equip_Position_Chest,			//�·�
	Equip_Position_Hands,			//����
	Equip_Position_Feets,			//ѥ��
	Equip_Position_Necklace,		//����
	Equip_Position_Bracelet,		//����
	Equip_Position_Rings,			//��ָ

	Equip_Position_End,
};

enum Equip_Quality
{
	Quality_White = 1,
	Quality_Green,
	Quality_Blue,
	Quality_Purple,
	Quality_Orange,
};

enum TYPE_COLOR
{
    COLOR_White = 1,
    COLOR_Green,
    COLOR_Blue,
    COLOR_Purple,
    COLOR_Orange,
    COLOR_Red,
};

enum Friend_State
{
	FRIEND_STATE_ONLINE	= 1,
	FRIEND_STATE_OFFLINE,
};

enum EOpponentState
{
	EOPPONENT_NORMAL = 0,
	EOPPONENT_OVER
};

// ��������
enum ETaskReward {
	REWARD_NONE		= 0,		// ��
	REWARD_EXP,					// ����
	REWARD_PRESTIGE,			// ����
	REWARD_SILVER,				// ����
	REWARD_ITEM,				// ����
	REWARD_GOLD,				// gold
	REWARD_HERO,
};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//obj���Ͷ���
const int OBJTYPE_ITEM										= 200000000;	//��Ʒ
const int OBJTYPE_ITEM_EQUIPMENT							= 201000000;	  //װ��
const int OBJTYPE_ITEM_EQUIPMENT_WEAPON						= 201010000;	    //����
const int OBJTYPE_ITEM_EQUIPMENT_WEAPON_MAIN				= 201010100;	      //��������
const int OBJTYPE_ITEM_EQUIPMENT_WEAPON_ASSI				= 201010200;	      //��������
const int OBJTYPE_ITEM_EQUIPMENT_ARMOR						= 201020000;	    //����
const int OBJTYPE_ITEM_EQUIPMENT_ARMOR_CHEST				= 201020100;	      //�·�
const int OBJTYPE_ITEM_EQUIPMENT_ARMOR_HANDS				= 201020200;	      //����
const int OBJTYPE_ITEM_EQUIPMENT_ARMOR_FEETS				= 201020300;	      //ѥ��
const int OBJTYPE_ITEM_EQUIPMENT_JEWELRY					= 201030000;	    //��Ʒ
const int OBJTYPE_ITEM_EQUIPMENT_JEWELRY_NECKLACE			= 201030100;	      //����
const int OBJTYPE_ITEM_EQUIPMENT_JEWELRY_RINGS				= 201030200;	      //��ָ
const int OBJTYPE_ITEM_EQUIPMENT_JEWELRY_BRACELET			= 201030300;	      //����
const int OBJTYPE_ITEM_STUFF								= 202000000;	  //����
const int OBJTYPE_ITEM_HUNJING_WEI							= 202010000;	    //α�꾧
const int OBJTYPE_ITEM_STUFF_LEVEVUP						= 202030000;	    //װ����������
const int OBJTYPE_ITEM_STUFF_STAR							= 202040000;		//����ǿ������
const int OBJTYPE_ITEM_FUNCTION_RECUITCOMM					= 202050000;		//��ļӢ�۵�ͨ�õ��ߣ�ȫ����Ƭ��
const int OBJTYPE_ITEM_FUNCTION_RECUITHERO					= 202060000;		//��ļӢ�۵�Ӣ����Ƭ
const int OBJTYPE_ITEM_FUNCTION								= 203000000;	  //���ܵ���
const int OBJTYPE_ITEM_FUNCTION_BOX							= 203010000;		//����
const int OBJTYPE_ITEM_FUNCTION_DRUGS						= 203020000;		//ҩ��
const int OBJTYPE_ITEM_FUNCTION_SPEAKER						= 203030000;		//С����


const int OBJTYPE_ITEM_HUNJING								= 204000000;	    //�꾧
const int OBJTYPE_ITEM_HUNYU								= 205000000;	    //����
const int OBJTYPE_ITEM_MIYIN								= 206000000;	    //����

const int OBJTYPE_ITEM_FUNCTION_WIPE						= 207000000;		//ɨ������

#define GetLeftSingle(n)	(n/100000000)
#define GetLeftTwo(n)		(n/1000000)
#define GetLeftThree(n)		(n/10000)
#define GetLeftFour(n)		(n/100)	
#define GetLeftFive(n)		(n/1)


inline bool g_IsItem(int t)								{return GetLeftSingle(t) == GetLeftSingle(OBJTYPE_ITEM);}
inline bool g_IsItemEquipment(int t)					{return GetLeftTwo(t) == GetLeftTwo(OBJTYPE_ITEM_EQUIPMENT);}
inline bool g_IsItemEquipmentWeapon(int t)				{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_EQUIPMENT_WEAPON);}
inline bool g_IsItemEquipmentWeaponMain(int t)			{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_WEAPON_MAIN);}
inline bool g_IsItemEquipmentWeaponAssi(int t)			{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_WEAPON_ASSI);}
inline bool g_IsItemEquipmentArmor(int t)				{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_EQUIPMENT_ARMOR);}
inline bool g_IsItemEquipmentArmorChest(int t)			{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_ARMOR_CHEST);}
inline bool g_IsItemEquipmentArmorHands(int t)			{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_ARMOR_HANDS);}
inline bool g_IsItemEquipmentArmorFeets(int t)			{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_ARMOR_FEETS);}
inline bool g_IsItemEquipmentJewelry(int t)				{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_EQUIPMENT_JEWELRY);}
inline bool g_IsItemEquipmentJewelryNecklace(int t)		{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_JEWELRY_NECKLACE);}
inline bool g_IsItemEquipmentJewelryRings(int t)		{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_JEWELRY_RINGS);}
inline bool g_IsItemEquipmentJewelryBracelet(int t)		{return GetLeftFour(t) == GetLeftFour(OBJTYPE_ITEM_EQUIPMENT_JEWELRY_BRACELET);}
inline bool g_IsItemStuff(int t)						{return GetLeftTwo(t) == GetLeftTwo(OBJTYPE_ITEM_STUFF);}
inline bool g_IsItemStuffStarAct(int t)					{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_STUFF_STAR);}
inline bool g_IsItemFunctionRecuitcom(int t)			{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_FUNCTION_RECUITCOMM);}
inline bool g_IsItemFunctionRecuithero(int t)			{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_FUNCTION_RECUITHERO);}
inline bool g_IsItemFunctionWipe(int t)                 {return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_FUNCTION_WIPE);}
inline bool g_IsItemHunjing(int t)						{return GetLeftTwo(t) == GetLeftTwo(OBJTYPE_ITEM_HUNJING);}
inline bool g_IsItemHunyu(int t)						{return GetLeftTwo(t) == GetLeftTwo(OBJTYPE_ITEM_HUNYU);}
inline bool g_IsItemMiyin(int t)						{return GetLeftTwo(t) == GetLeftTwo(OBJTYPE_ITEM_MIYIN);}

inline bool g_IsItemWeihunjing(int t)					{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_HUNJING_WEI);}
inline bool g_IsItemStuffLevelUp(int t)					{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_STUFF_LEVEVUP);}
inline bool g_IsItemBox(int t)							{return GetLeftThree(t) == GetLeftThree(OBJTYPE_ITEM_FUNCTION_BOX);}

inline bool g_IsItemFunction(int t)						{return GetLeftTwo(t) == GetLeftTwo(OBJTYPE_ITEM_FUNCTION);}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif	//ODIN_COMMDEF_H
