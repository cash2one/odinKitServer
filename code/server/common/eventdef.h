#pragma once
//////////////////////////////////////////////////////////////////////////
//
enum Event_ID
{
	Event_Invalid			= 0,			//��Ч�¼�

	//�����¼�
	Event_Player_Login		= 1,			//��ɫ��½����
	Event_Player_Logout,					//��ɫ�ǳ�����
	Event_Player_Levelup,					//��ɫ�������ȼ�
	Event_Player_Loadover,					//��ɫ��Ϣ�������
	Event_Player_LoadModule,				//��ɫ�����֪꣬ͨ���ģ��
	Event_Player_Create,					//��ɫ�������˺�ID
	Event_Player_Stateup,					//��ɫλ��������λ�׵ȼ�
	Event_Player_MeritObtain,				//��ɫ���ս����ս��ֵ��ԭֵ����ǰֵ��λ�׵ȼ�
	Event_Player_VipLevelUp,				//vip�ȼ�����
	Event_Player_FightingChange,			//����ս�����仯

	//�����¼�
	Event_Item_Gain			= 100,			//��õ���
	Event_Item_Delete,						//���ٵ���:����ID��ģ��ID������
	Event_Item_Obtain,						//���߲���:����ID��ģ��ID������������ID��ԭ��
	Event_Item_Consume,						//��������:����ID���û�ID������ID��ģ��ID��������ԭ��
	Event_Item_Intensify,					//װ��ǿ��:����ID����ɫID������ID��ģ��ID��Ʒ�ʣ�ǿ��Ŀ��ȼ����ɹ����
	Event_Item_Slotting,					//װ�����:��ɫID���û�ID������ID��ģ��ID��Ʒ�ʣ���λ
	Event_Item_Inlay,						//װ����Ƕ:��ɫID���û�ID������ID��ģ��ID��Ʒ�ʣ�����ģ��ID�����ϵȼ�
	Event_Item_UpGrade,						//װ������:��ɫID���û�ID������ID��ģ��ID��Ʒ�ʣ����ѽ�ң�Ŀ��ȼ�
	Event_Item_MatIntensify,				//����ǿ��:����ID���û�ID������ID��ģ��ID��Ʒ�ʣ�ǿ��Ŀ��ȼ����ɹ����
	Event_Item_RecastCrystal,				//�꾧����:����ID���û�ID������ID��ģ��ID��Ʒ�ʣ��꾧�ȼ�

	//ս���¼�
	Event_Combat_Dead		= 200,			//����
	Event_Combat_KillMonster,				//��ɱ����
	
	//����
	Event_City_Active		= 300,			//�����������ID
	Event_City_Combat,						//����ս��������ID��ս������
	Event_City_Finish,						//����ͨ�أ�����ID�����֣�����ģʽ

	//Ӣ��
	Event_Hero_LeaveTeam	= 400,			//Ӣ����ӣ�Ӣ��ID��Ӣ��ģ��
	Event_Hero_Recruit,						//Ӣ����ļ��Ӣ��ID��Ӣ��ģ�壬Ӣ��Ʒ��
	Event_Hero_Recall,						//Ӣ���ٻأ�Ӣ��ID��Ӣ��ģ��
	Event_Hero_Inherit,						//Ӣ�ۼ̳У�Ӣ��ID�����̳�Ӣ��ID
	Event_Hero_UpQuality,					//Ӣ������Ʒ�ʣ�Ӣ��ID��Ӣ��Ʒ��
	Event_Hero_Levelup,						//Ӣ��������Ӣ��ID���ȼ�

	// order 
	Event_Order_Change_Field = 500,
	Event_Order_Join		 = 501,

	//����
	Event_Stars_Active		= 600,			//�ǵ㼤��ǵ�λ�ã��������ң����Ĳ�����
	Event_Stars_Uplevel,					//�ǵ��������ǵ�λ�ã�������ĵȼ����������ң����Ĳ�����
	Event_Stars_Inlay,						//�ǵ���Ƕ����ɫID���ǵ�λ�ã���Ƕ����ģ�壬��������
	Event_Stars_Unlay,						//�ǵ������ǵ�λ�ã���Ƕ����ģ��
	Event_Skill_Reset,						//�������ԣ��ɼ��ܣ��¼���

	//money
	Event_Gold_Trade		= 700,			//��ȡ/���Ľ��:�û�ID��������ԭ�򣬽�ɫ��
	Event_Silver_Trade,						//��ȡ/��������:�û�ID��������ԭ�򣬽�ɫ��

	//�̳�
	Event_Store_Buy			= 800,			//�̳���־:�û�ID����Ʒģ��ID�����ۣ���Ʒ������Ǯ���࣬����Ǯ�ң���ɫ��

	//����
	Event_Format_Uplevel	= 900,			//��������������id��������ȼ�

	//����boss
	Event_Boss_Attack		= 1000,			//����boss��ս�������˺������˺���ս�����

	//����
	Event_Task_Receive		= 1100,			//�����������ID����ɫ�ȼ�
	Event_Task_Finish,						//�����������ID����ɫ�ȼ�

	//��ս
	Event_Battle_Fight		= 1200,			//����ս�����������·��ID���;ö�A���;ö�B

	//ѵ��
	Event_Train_Do			= 1300,			//ѵ�������ͣ����������������ɣ�����
	Event_Train_Save,						//���棺���������������ɣ�����
	Event_Train_UnSave,						//ȡ�������������������ɣ�����

	//����
	Event_Worship_Do		= 1400,			//��������ID��Ʒ��(0-�� 1-�� 2-�� 3-��)

	//ǩ��
	Event_SignIn_Do			= 1500,			//ǩ��������ID����ǰ����(1-31)

	// arena
	Event_Arena_Join		= 1600,			// join arena

	//����ÿ������
	Event_Daily_RandHero	= 1700,			//����N��
	Event_Daily_WipeOut,					//ɨ�����⸱��N��
	Event_Daily_FinishElite,				//ͨ��N������֮��
	Event_Daily_Expedition,					//ͨ��N��ʡ���ַ�
	Event_Daily_QueenTease,					//���N��Ů������
	Event_Daily_CompandCrystal,				//���N���׾��ϳ�

	//����֧������
	Event_Branch_ZoneBox		= 1800,			//��ȡ������
	Event_Branch_QualityItem,					//�����ɫ���N��MƷ�ʵ�װ��
};

//���߲���������ԭ��
enum ITEM_REASON
{
	Item_Reason_Null = -1,					
	Item_Reason_UnKonw = 0,					//δ֪ԭ��
	Item_Reason_Sell,						//���۵���
	Item_Reason_OpenBox,					//�򿪱����õ���
	Item_Reason_DebugComm,					//debug�����õ���
	Item_Reason_DoTask,						//�������õ���
	Item_Reason_CityCombat,					//��ս��õ���
	Item_Reason_DropItem,					//��ֵ������
	Item_Reason_UnLoadSoul,					//ж�ص����ϵĻ�ʯ
	Item_Reason_Exchange,					//ǩ������һ���Ʒ
	Item_Reason_StoreBuy,					//�̳ǹ������
	Item_Reason_Worship,					//�����õ���
	Item_Reason_RecastMat,					//����ʱ���Ĳ���
	Item_Reason_Recurit,					//��ļӢ��ʱ������Ƭ
	Item_Reason_Material,					//��������ʱ���Ĳ���
	Item_Reason_Inlay,						//��Ƕʱ���Ļ�ʯ
	Item_Reason_IntensifyMat,				//ǿ��ʱ���Ĳ���
	Item_Reason_UpFormat,					//�����������Ĳ���
	Item_Reason_ActiveStar,					//�����ǵ����Ĳ���
	Item_Reason_UpStar,						//�����ǵ����Ĳ���
	Item_Reason_FinishTask,					//����ռ�����ʱ���ĵ���
	Item_Reason_Use,						//ʹ�õ���
	Item_Reason_HeroQuality,				//Ӣ����Ʒ
	Item_Reason_UnloadSoul,					//ж�ػ�ʯ
	Item_Reason_ActLogin,					//��¼�����
	Item_Reason_RechargeActivity1,			//���γ�ֵ����A
	Item_Reason_RechargeActivity2,			//���γ�ֵ����B
	Item_Reason_RechargeActivity3,			//�ۻ���ֵ����
	Item_Reason_Init,						//��ɫ��ʼ��õ�װ��
	Item_Reason_StarInlay,					//��Ƕ�ǵ����Ĳ���
	Item_Reason_WipeMonster,				//ɨ����õ���
	Item_Reason_ConsumeEngage,				//ɨ��ʱ���Ĺ�Ӷ��
	Item_Reason_ZoneBoxAward,				//�����佱��
	Item_Reason_Expedition,					//Զ����õ���
	Item_Reason_DayChargeGift,				//ÿ�ճ�ֵ�����õ���

};

//��һ�ȡ/����ԭ��
enum GOLD_REASON
{
	Gold_Reason_Null = -1,					
	Gold_Reason_UnKonw = 0,					//δ֪ԭ��
	Gold_Reason_DebugComm,					//debug�����ȡ/����
	Gold_Reason_BuyAction,					//����battle����
	Gold_Reason_BuyTime,					//����battleʱ��
	Gold_Reason_WPNum,					    //��սռ��·��������
	Gold_Reason_NDouble,					//�������ĵĽ��
	Gold_Reason_BossInspire,				//boss inspire����
	Gold_Reason_BossCoolDown,				//boss ������ȴʱ������
	Gold_Reason_ArenaChgOpp,				//Arena change opp
	Gold_Reason_ArenaChallenge,				//������������ս����
	Gold_Reason_ArenaAddChalge,				//������������ս����
	Gold_Reason_CityGetPrize,				//��ȡ�齱����
	Gold_Reason_RecuritHero,				//��ļӢ������
	Gold_Reason_Intensify,					//ǿ����������
	Gold_Reason_Slotting,					//���ߴ������
	Gold_Reason_ExpandBag,					//��չ��������
	Gold_Reason_SignComplement,				//��ǩ����
	Gold_Reason_FlushExchage,				//ǩ������ˢ����Ʒ
	Gold_Reason_StoreBuy,					//�̳ǹ���
	Gold_Reason_HeroTrain,					//ѵ��Ӣ��
	Gold_Reason_Worship,					//��������
	Gold_Reason_LightOrange,				//����ʱֱ�ӵ�����ɫ��Ʒ
	Gold_Reason_SkillReset,					//��������
	Gold_Reason_CityResetCnt1,				//������ͨ������ɱģʽ��ս����
	Gold_Reason_CityResetCnt2,				//���þ�Ӣ��������ģʽ��ս����
	Gold_Reason_CityResetCnt3,				//���þ�Ӣ������ɱģʽ��ս����
	Gold_Reason_Recharge,					//��ֵ
	Gold_Reason_RechargeActivity1,			//���γ�ֵ����A
	Gold_Reason_RechargeActivity2,			//���γ�ֵ����B
	Gold_Reason_RechargeActivity3,			//�ۻ���ֵ����
	Gold_Reason_FinishTask,					//finish task
	Gold_Reason_BuyStamina,					//��������
	Gold_Reason_LoginActivity,				//������¼�����
	Gold_Reason_Expedition,					//Զ��
	Gold_Reason_RandHero,					//�������Ľ��
	Gold_Reason_QueenTease,					//Ů���������Ľ��
	Gold_Reason_EraseItem,					//���ĵ��߲������(һ��û�У�������Ǯ���Ӳ������ҵ�)
	Gold_Reason_CarnageReset,				//�����ؾ����ô������Ľ��
	Gold_Reason_GMSend,						//GM��̨����
	Gold_Reason_DayChargeGift,				//ÿ�ճ�ֵ�����ý��
	Gold_Reason_ResetGiftBag,				//����ÿ�ճ�ֵ������Ľ��
};

//���һ�ȡ/����ԭ��
enum SILVER_REASON
{
	Silver_Reason_Null = -1,					
	Silver_Reason_UnKonw = 0,				//δ֪ԭ��
	Silver_Reason_DebugComm,				//debug�����ȡ/����
	Silver_Reason_StoreBuy,					//�̳ǹ���
	Silver_Reason_ArenaRank,				//��������������
	Silver_Reason_BattleWin,				//��սʤ���߽���
	Silver_Reason_BattleSingle,				//��ս���ν���
	Silver_Reason_WPNum,					//��սռ��·��������
	Silver_Reason_DoubleSingle,				//BattleModule::_DoubleSingleReward
	Silver_Reason_JoinerReward,				//BossModule::_JoinerReward
	Silver_Reason_BossKill,					//BossModule::_KilldownReward
	Silver_Reason_Obtain,					//RewardSilver::obtain
	Silver_Reason_AttackMonster,			//�������
	Silver_Reason_RecuritHero,				//��ļӢ������
	Silver_Reason_ItemRecast,				//������������
	Silver_Reason_ItemUpGrade,				//������������
	Silver_Reason_ItemInlay,				//������Ƕ����
	Silver_Reason_ItemIntensify,			//����ǿ������
	Silver_Reason_SellItem,					//���۵�������
	Silver_Reason_ActiveStar,				//�����ǵ㻨��
	Silver_Reason_UpLeveStar,				//�����ǵ㻨��
	Silver_Reason_InlayStar,				//��Ƕ�ǵ㻨��
	Silver_Reason_UpFormation,				//�������ͻ���
	Silver_Reason_TrainHero,				//ѵ��Ӣ�ۻ���
	Silver_Reason_BattleDialy,				//��սÿ�ս���
	Silver_Reason_RechargeActivity1,		//���γ�ֵ����A
	Silver_Reason_RechargeActivity2,		//���γ�ֵ����B
	Silver_Reason_RechargeActivity3,		//�ۻ���ֵ����
	Silver_Reason_VipLevelup,				//vip����
	Silver_Reason_LoginActivity,			//������¼�����
	Silver_Reason_WipeMonster,				//ɨ���������
	Silver_Reason_SkillReset,				//��������
	Silver_Reason_Expedition,				//Զ�����
	Silver_Reason_QueenTease,				//Ů�����̻������
	Silver_Reason_EraseItem,				//���ĵ��߲�������(��Ǯ����)
	Silver_Reason_DayChargeGift,			//ÿ�ճ�ֵ����������

};

//ս������;��
enum MERIT_REASON
{
	Merit_Reason_Null = -1,
	Merit_Reason_BattleCombat = 0,			//ս������ս������
	Merit_Reason_BattleRanking,				//ս����������
	Merit_Reason_BattleWin,					//ս����ʤ����
	Merit_Reason_ArenaRanking,				//��������������
	Merit_Reason_VipLevelup,				//vip����
	Merit_Reason_Boss,						//����boss
	Merit_Reason_BoxAward,					//���佱�����ս��
	Merit_Reason_StoreBuy,					//�̳ǹ�������ս��
	Merit_Reason_EraseItem,					//���ĵ��߲�����ս��(һ��û�У�������Ǯ���Ӳ������ҵ�)
	Merit_Reason_DayChargeGift,				//ÿ�ճ�ֵ���ս��
};
