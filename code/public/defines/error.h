#pragma once

enum Error_Define
{
	Error_Null = 0,

	Error_Login_ConnectTimeout =1,	//���ӳ�ʱ
	Error_Login_CheckFailed,		//�˺���֤ʧ��
	Error_Create_NameInvalid,		//���ַǷ�
	Error_Create_NameRepeat,		//����
	Error_User_Displace,			//����

	// ��������
	Error_ItemUpGra_Unknow = 100,	//δ֪����
	Error_ItemUpGra_NoItem,			//û�иõ���
	Error_ItemUpGra_OverRoleLevel,	//���ڽ�ɫ�ȼ�
	Error_ItemUpGra_LackMoney,		//Ǯ�Ҳ���
	Error_ItemUpGra_LackMaterial,	//���ϲ���
	Error_ItemUpGra_LackGold,		//Ԫ������
	Error_ItemUpGra_UnloadSoul,		//_unloadSouls fail
	Error_ItemUpGra_FailCreate,		//�����µ���ʧ��
	Error_ItemUpGra_Success,		//�����ɹ�
	Error_ItemUpGra_OverLevel,		//������װ���ȼ����ܴ���Ӣ�۵ȼ�
	Error_ItemUpGra_PackageFull,	//��������

	// ����ǿ��
	Error_ItemUp_Unknow = 200,		//δ֪����
	Error_ItemUp_NoItem,            //û�ҵ��õ���
	Error_ItemUp_OverMinLevel,      //������͵ȼ�����
	Error_ItemUp_OverRoleLevel,		//���ڽ�ɫ�ȼ�
	Error_ItemUp_LackMoney,			//ȱ��Ǯ��
	Error_ItemUp_LackPoint,			//ȱ�ٵ���
	Error_ItemUp_LackMaterial,		//���ϲ���
	Error_ItemUp_OutPresent,		//����ʧ��
	Error_ItemUp_Success,			//ǿ���ɹ�
    Error_ItemUpOnce_Success,       //һ��ǿ���ɹ�

	// �꾧ǿ��
	Error_CrystalUp_Unknow = 300,	//δ֪����
	Error_CrystalUp_NoCrystal,      //û�ҵ��û꾧
	Error_CrystalUp_NotCrystal,		//�õ��߲��ǻ꾧
	Error_CrystalUp_LackMaterial,	//���ϲ���
	Error_CrystalUp_MaxLevel,       //�꾧������
	Error_CrystalUp_LackMoney,		//ȱ��Ǯ��
	Error_CrystalUp_DifMinLevel,    //���Ϻͻ꾧��С���Ƶȼ���ͬ
	Error_CrystalUp_FailCreate,		//����ǿ����Ļ꾧ʧ��
	Error_CrystalUp_Success,		//ǿ���ɹ�

	// ����ǿ��
	Error_JadeUp_Unknow = 400,		//δ֪����
	Error_JadeUp_NoJade,			//û�ҵ��û���
	Error_JadeUp_NotJade,			//�õ��߲��ǻ���
	Error_JadeUp_LackMaterial,		//���ϲ���
	Error_JadeUp_MaxLevel,			//����������
	Error_JadeUp_LackMoney,			//ȱ��Ǯ��
	Error_JadeUp_FailCreate,		//����ǿ����Ļ���ʧ��
	Error_JadeUp_MatNotJade,		//���ϲ��ǻ���
	Error_JadeUp_LackPoint,			//��������
	Error_JadeUp_OutPresent,		//����ʧ��
	Error_JadeUp_Success,			//ǿ���ɹ�

	// �꾧����
	Error_CrystalRecast_Unknow = 500,//δ֪����
	Error_CrystalRecast_FadeCrystal,//��α�꾧
	Error_CrystalRecast_NotCrystal, //�в��ǻ꾧
	Error_CrystalRecast_DifLevel,	//���꾧�ȼ���ͬ
	Error_CrystalRecast_LackMoney,	//Ǯ�Ҳ���
	Error_CrystalRecast_NoCrystal,	//������û���������꾧
	Error_CrystalRecast_FailCreate,	//�����»꾧ʧ��
	Error_CrystalRecast_Success,	//�����ɹ�

	// ���
	Error_Slotting_Unknow = 600,	//δ֪����
	Error_Slotting_NotThird,		//���ǵ�������
	Error_Slotting_NoItem,			//û�ҵ�Ҫ��׵ĵ���
	Error_Slotting_NotEquipment,	//����װ��
	Error_Slotting_Slotted,			//�Ѿ������
	Error_Slotting_LackGold,		//Ԫ������
	Error_Slotting_Success,			//��׳ɹ�

	// ��Ƕ�꾧
	Error_InlayCrystal_Unknow = 700,//δ֪����
	Error_InlayCrystal_NoItem,		//û�ҵ��õ���
	Error_InlayCrystal_NotEquipment,//����װ��
	Error_InlayCrystal_NotCrystal,	//���ϲ��ǻ꾧
	Error_InlayCrystal_LackMoeny,	//Ǯ�Ҳ���
	Error_InlayCrystal_Unload,		//ж�����еĻ꾧ʧ��
	Error_InlayCrystal_FailInlay,	//��Ƕʧ��
	Error_InlayCrystal_Success,		//��Ƕ�ɹ�

	// ��Ƕ����
	Error_InlayJade_Unknow = 800,	//δ֪����
	Error_InlayJade_NoItem,			//û���ҵ��õ���
	Error_InlayJade_NotEquipment,	//����װ��
	Error_InlayJade_NotJade,		//���ϲ��ǻ���
	Error_InlayJade_NoSlotting,		//�˿�δ��
	Error_InlayJade_Unload,			//ж�����еĻ���ʧ��
	Error_InlayJade_LockMoney,		//Ǯ�Ҳ���
	Error_InlayJade_FailInlay,		//��Ƕʧ��
	Error_InlayJade_Success,		//��Ƕ�ɹ�
	Error_InlayItemAll_FailInlay,	//һ����Ƕʧ��
	Error_InlayItemAll_Success,		//һ����Ƕ�ɹ�

	// ��װ/жװ
	Error_Equipment_Success  = 900,	//��װ�ɹ�
	Error_UnEquipment_Success,		//жװ�ɹ�
	Error_Equipment_UnKnow,			//δ֪����
	Error_Equipment_NoItem,			//û�д�װ��
	Error_Equipment_HaveEquiped,	//��װ���Ѵ���
	Error_Equipment_MisMatchCareer, //ְҵ��ƥ��
	Error_Equipment_NoLocation,		//û�д���λ��
	Error_Equipment_UnEquip,		//ж����λ������װ��ʧ��
	Error_Equipment_RemoveFromBag,	//�Ӱ������Ƴ�ʧ��
	Error_Equipment_PutToBag,		//��λ������װ�����ʧ��
	Error_UnEquipment_WrongLocation,//װ��λ�ô���
	Error_UnEquipment_PutToBag,		//ж��װ�����ʧ��
	Error_UnEquipment_NoEquip,		//��λ����װ��
	Error_UnEquipment_FullBag,		//��������������������
	Error_Equipment_OverLevel,		//װ���ȼ����ڽ�ɫ�ȼ�

	// ����
	Error_Worship_Closed = 1000,	//����ϵͳ�ѹر�
	Error_Worship_Inition,			//���ͳ�ʼ���������������(���������ı�����)
	Error_Worship_Unknow,			//δ֪����
	Error_Worship_BagFull,			//��������������������
	Error_Worship_LowLevel,			//�ȼ�����
	Error_Worship_Unfinished,		//û�����ص����ֽ�ѧ����
	Error_Worship_NotLighted,		//�ü�Ʒû�е���
	Error_Worship_CountsUp,			//��Ѵ������þ�
	Error_Worship_LackGold,			//��Ҳ���
	Error_Worship_CreateFall,		//�����µ���ʧ��
	Error_Worship_ItemNotGet,		//����δ��ȡ���޷��������м���
	Error_Worship_FailPutBag,		//��ȡʧ��
	Error_Worship_HavePutBag,		//��������ȡ���޷��ظ���ȡ
	Error_Worship_HaveLighted,		//�����ѵ������޷��ظ�����
	Error_Worship_LightOrange,		//������ɫ��Ʒ�ɹ�
	Error_Worship_Success,			//����ɹ�
	Error_Worship_PutSuccess,		//��ȡ�ɹ�

	// ǩ��
	Error_SignIn_Closed = 1100,		//ǩ��ϵͳ�ѹر�
	Error_SignIn_OpenPanel,			//ÿ���¼ûǩ���������ǩ�����(���������ı�����)
	Error_SignIn_Inition,			//���ͳ�ʼ������(���������ı�����)
	Error_SignIn_Unknow,			//δ֪����
	Error_SignIn_HaveSigned,		//��������ǩ��
	Error_SignIn_LowLevel,			//�ȼ�����
	Error_SignIn_LackGold,		    //��Ҳ���
	Error_SignIn_Unfinished,		//δ�����ص����ֽ�ѧ����
	Error_SignIn_NoSignDay,			//û�пɲ�ǩ������
	Error_SignIn_CanSignIn,			//�����ڿ�ǩ�������貹ǩ
	Error_SignIn_LackBadage,		//���²��㣬���ܶһ�����Ʒ
	Error_SignIn_BagFull,			//��������������������
	Error_SignIn_ExchangeFall,		//�һ�ʧ��
	Error_SignIn_HaveExchged,		//����Ʒ�����Ѷһ���
	Error_SignIn_LowKniState,		//��ʿλ��ƫ�ͣ����ܶһ�����Ʒ
	Error_SignIn_Success,			//ǩ���ɹ�
	Error_SignIn_SharedSuccess,		//����ɹ�
	Error_SignIn_CompSuccess,		//��ǩ�ɹ�
	Error_SignIn_ExchgSuccess,		//�һ��ɹ�
	Error_SignIn_FlushSuccess,		//ˢ�³ɹ�

	// ���䱳��
	Error_ExpandBag_UnKnow = 1200,	//δ֪����
	Error_ExpandBag_LackGold,		//��Ҳ���
	Error_ExpandBag_ToMax,			//�������������
	Error_ExpandBag_Success,		//����ɹ�

	// �̳�
	Error_Store_Unknow = 1300,		//δ֪����
	Error_Store_LockMoney,			//Ǯ�Ҳ���
	Error_Store_Success,			//����ɹ�
	Error_Store_LackGold,			//��Ҳ���
	Error_Store_LackZhanGong,		//ս������
	Error_Store_UnenoughBag,		//�����ռ䲻��
	Error_Store_LackShengWang,		//��������

	// ��ս
	Error_Battle_Join = 1400,		//�����ɹ�
	Error_Battle_DefendResult,		//����ս��
	Error_Battle_DoubleReward,		//��������ʧ��
	Error_Battle_NotStart,			//��սδ����
	Error_Battle_WpNoDefend,		//�õ㲻�ܷ���
	Error_Battle_MoveFailed,		//�ƶ�ʧ��

	// Arena
	Error_Arena_NoChange = 1500,	// change player is none
	Error_Arena_BuyChallengeMax,	// buy challenge num is max
	Error_Arena_BuyChallengeSuccess,// add challenge success
	Error_Arena_ChallengeWin,		// challenge win
	Error_Arena_ChallengeLose,		// challenge lose 
	Error_Arena_NoEnoughPlayer,		// no enough player ,can't join arena
	Error_Arena_CurChallengeMax,	// current challenge is max times

	// ItemUnit Error
	Error_ItemUnit_UnKnow = 1600,	// δ֪����
	Error_ItemUnit_HaveNo,			// û�иõ���
	Error_ItemUnit_SellFail,		// ����ʧ��
	Error_ItemUnit_SellSuccess,		// ���۳ɹ�


	// chat
	Error_Chat_Is_Null			= 1700,
	Error_Chat_Limit_Level_Camp,
	Error_Chat_Limit_Time_Camp,
	Error_Chat_No_Knight,
	Error_Chat_Private_No_Target,
	Error_Chat_Limit_Level_World,
	Error_Chat_Limit_Level_Private,
	Error_Chat_Limit_Time_World,
	Error_Chat_Limit_Time_Private,
    Error_Chat_Limit_Not_In_Camp,


	// friend
	Error_Friend_Max			= 1800,
	Error_Friend_ADD_SUCCESS,
	Error_Friend_DEL_SUCCESS,

	// �򿪱���
	Error_Box_UnKnow = 1900,		// δ֪����
	Error_Box_UnEnoughBag,			// �����ռ䲻�㣬����������
	Error_Box_UseSuccess,			// ʹ�óɹ�
	Error_Box_UseFail,				// ʹ��ʧ��
	Error_Box_OverMerit,			// ս����������

	// ����boss
	Error_Boss_AttackCD = 2000,		// ս��cd

	// ��ж��ʯ
	Error_UnloadSoul_Unknow	= 2100,	//δ֪����
	Error_UnloadSoul_FullBag,		//��������������������
	Error_UnloadSoul_NoSoul,		//��λ��û�л�ʯ
	Error_UnloadSoul_Fail,			//��жʧ��
	Error_UnloadSoul_Success,		//��ж�ɹ�

	// ����
	Error_City_LackGold = 2200,		//��Ҳ���
	Error_City_ResetOverUp,			//���ô���������
	Error_City_ChalgLeft,			//��ս����δ�þ�����������
	Error_City_WipeElite,			//��Ӣ��������ɨ��
	Error_City_LowLevel,			//���ǵȼ����㣬�޷�ɨ��
	Error_City_LackEngage,			//��Ӷ���
	Error_City_OverEngage,			//�������ɨ����
	Error_City_BagUnenough,			//�����ռ䲻�㣬����������
	Error_City_BagFulling,			//ɨ�����̱���������ɨ���ж�(ʣ���Ӷ���ѷ���)
	Error_City_WipeFinish,			//ɨ�����
	Error_City_ZoneUnOpen,			//������δ����
	Error_City_HaveNoBox,			//�ñ��䲻����
	Error_City_LackStar,			//�Ǽ���������
	Error_City_HaveGot,				//�ñ�������ȡ��
	Error_City_GetSuccess,			//������ȡ�ɹ�

	// ����ǿ��
	Error_MithrilUp_Unknow = 2300,	//δ֪����
	Error_MithrilUp_NotMithril,		//�õ��߲�������
	Error_MithrilUp_LackMaterial,	//���ϲ���
	Error_MithrilUp_LackPoint,		//��������
	Error_MithrilUp_MaxLevel,		//����������
	Error_MithrilUp_LackMoney,		//Ǯ�Ҳ���
	Error_MithrilUp_MatNotMithril,	//�������ʹ���
	Error_MithrilUp_OutPresent,		//ǿ��ʧ��
	Error_MithrilUp_Success,		//ǿ���ɹ�

	// ������¼�
	Error_LoginAct_Unknow = 2400,	//δ֪����
	Error_LoginAct_Closed,			//�û�ѹر�
	Error_LoginAct_HaveGet,			//��������ȡ����
	Error_LoginAct_FullBag,			//�����������޷���ȡ����
	Error_LoginAct_Success,			//��ȡ�ɹ�

	// ��ӵ�ǿ��ģ��Ŀ���
	Error_IntenItem_Closed = 2500,	//����ǿ��ϵͳ�ѹر�
	Error_IntenJade_Closed,			//����ǿ��ϵͳ�ѹر�
	Error_IntenCrystal_Closed,		//�꾧ǿ��ϵͳ�ѹر�
	Error_IntenMithril_Closed,		//����ǿ��ϵͳ�ѹر�
	Error_InlayJade_Closed,			//��Ƕ����ϵͳ�ѹر�
	Error_InlayCrystal_Closed,		//��Ƕ�꾧ϵͳ�ѹر�
	Error_UpgradeItem_Closed,		//��������ϵͳ�ѹر�
	Error_SlottingItem_Closed,		//���ߴ��ϵͳ�ѹر�
	Error_RecastCrystal_Closed,		//�꾧����ϵͳ�ѹر�
	Error_UnloadSoul_Closed,		//ж�ػ�ʯϵͳ�ѹر�
	Error_UnloadAllSoul_Success,	//ж��ȫ����ʯ�ɹ�
	Error_UnloadAllSoul_Failed,		//ж��ȫ����ʯʧ��

	// ��ֵ��ػ
	Error_ChargeAct_Unknow = 2600,  //δ֪����
	Error_ChargeAct_Closed,			//�û�ѹر�
	Error_ChargeAct_GetSuccess,		//��ȡ�ɹ�
	Error_ChargeAct_UnenoughBag,	//�����ռ䲻�㣬����������
	Error_ChargeAct_UnOpened,		//�ûû����
	Error_ChargeAct_HaveGot,		//��������ȡ
	Error_ChargeAct_LowVip,			//Vip�ȼ�����
	Error_ChargeAct_Unreached,		//δ�ﵽ��ֵ��ȣ�������ȡ
    
    //
    Tip_Zhuangbei_shuxing = 2709,
    Tip_Zhuangbei_xiangqian = 2701,
    Tip_Zhuangbei_shengji =2702,
    Tip_Zhuangbei_qianghua =2708,

    Tip_Zhuangbei_xiangqiankong =2703,
    Tip_hecheng_yaoshiqianghua =2710,
    Tip_hecheng_miyinqianghua =2704,
    Tip_hecheng_yaojingqianghua =2705,
    Tip_hecheng_yaojingchongzhu =2706,
    
    Tip_role_xunlian =2711,
    Tip_role_tipin =2712,
    Tip_role_jueji =2713,
    Tip_role_texing =2714,
    Tip_Battle_juesha = 2715,
    
    //��Ʒ
	Error_UpQuality_Unknow = 2800,	//δ֪����
	Error_UpQuality_TopQuality,		//�Ѵﵽ���Ʒ��
	Error_UpQuality_LowProgress,	//С��Ʒ����û�ﵽ

	//Զ���
	Error_Expedition_Unknow = 2900,	//δ֪����
	Error_Expedition_Closed,		//Զ����ѹر�
	Error_Expedition_NonAuto,		//��ǰ�ǵ�һ���ؿ��������Զ�ս��
	Error_Expedition_Autoed,		//�������Զ���ս������������
	Error_Expedition_BagUnenough,	//�����ռ䲻�㣬����������
	Error_Expedition_FailMax,		//�ѳ�����ս��������
	Error_Expedition_LowLevel,		//���ǵȼ�δ�ﵽ���޷���ս

	//����
	Error_RandHero_Unknow = 3000,	//δ֪����
	Error_RandHero_Closed,			//����ϵͳ�ѹر�
	Error_RandHero_UnreachTime,		//��ȴʱ��δ�������ܶ���
	Error_RandHero_LackGold,		//��Ҳ��㣬���ܶ���

	//��ɫ
	Error_Role_ProgressSuccess = 3100,//С��Ʒ�ɹ�
	Error_Role_QualitySuccess,		  //����Ʒ�ɹ�
	Error_Role_TrainSuccess,		  //ѵ���ɹ�
	Error_Role_ResetSuccess,		  //�������Գɹ�
	Error_Role_InheritSuccess,		  //�̳гɹ�
	Error_Role_LeaveSuccess,		  //��ӳɹ�
	Error_Role_LevelUpSuccess,		  //�����ɹ�

	//�̳�
	Error_Inherit_Unknow = 3200,	  //δ֪����
	Error_Inherit_LowLevel,			  //���̳��ߵȼ�����
	Error_Inherit_OnlyOnce,			  //ÿ��Ӣ��ֻ�ܼ̳л򱻼̳�һ��
	Error_Inherit_DiffCarrer,		  //����Ӣ��ְҵ��ͬ
	Error_Inherit_Success,			  //�̳гɹ�

	//Ů������
	Error_QueenTease_Unknow = 3300,	  //δ֪����
	Error_QueenTease_Closed,		  //�û�ѹر�
	Error_QueenTease_TimeLeft,		  //δ����ȴʱ��
	Error_QueenTease_MaxCount,		  //���̴������þ�
	Error_QueenTease_LackGold,		  //��Ҳ��㣬�޷�����

	//�����ؾ�
	Error_Carnage_Unknow = 3400,	  //δ֪����
	Error_Carnage_Closed,			  //�û�ѹر�
	Error_Carnage_ChlgCntMax,		  //��ս�������þ�
	Error_Carnage_LackStamina,		  //��������
	Error_Carnage_SceneNotOpen,		  //��ǰ�ؾ�δ����
	Error_Carnage_ResetCntMax,		  //���ô������þ�
	Error_Carnage_LockGold,			  //��Ҳ��㣬�޷�����
	Error_Carnage_ChlgSuccess,		  //��ս�ɹ�
	Error_Carnage_ResetSuccess,		  //���óɹ�
	Error_Carnage_LeftChlgCnt,		  //��ս����δ���꣬�ɼ�����ս

	//ÿ�ճ�ֵ
	Error_DayCharge_Unknow = 3500,	  //δ֪����
	Error_DayCharge_Closed,			  //�û�ѹر�
	Error_DayCharge_LackGold,		  //��Ҳ��㣬�޷�����
	Error_DayCharge_HaveGot,		  //���������ȡ
	Error_DayCharge_Unreached,		  //δ�ﵽ��ֵ���
	Error_DayCharge_FullBag,		  //�����ռ䲻�㣬�޷���ȡ
	Error_DayCharge_GetSuccess,		  //��ȡ����ɹ�
	Error_DayCharge_ResetSuccess,	  //��������ɹ�
	Error_DayCHarge_ChargeSuccess,	  //��ֵ�ɹ�
	Error_DayCHarge_ChargeFailed,	  //��ֵʧ��
};

enum Boardcast_Define
{
    Boardcast_Null = 0,
    
    // ��ս
    Boardcast_Battle_Startup  = 1000,	//��ս��ʼ
    Boardcast_Battle_WpChangeHand,		//ռ��·��
    Boardcast_Battle_Draw,				//��սƽ��
    Boardcast_Battle_Settle,			//��ս����
	Boardcast_Battle_WpCapture,		//Χ��·��
    
    // ����boss
    BoardCast_Boss_Startup = 1100,		//����boss���ʼ
    BoardCast_Boss_End,					//����boss�������δ��ɱ��
	BoardCast_Boss_Settle,				//����boss����㣨�ѻ�ɱ��
	BoardCast_Boss_Killer,				//����boss��ɱ��
	BoardCast_Boss_Ready,				//����boss�׼��

};
