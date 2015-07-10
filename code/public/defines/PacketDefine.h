#ifndef COMMON_PACKETDEFINE_H
#define COMMON_PACKETDEFINE_H

//��Ϣ���������ʽ
//����ǰ׺_����ǰ׺_��������
//����ǰ׺��
//CentralServer:C
//DataServer:D
//GameServer:G
//GateServer:A
//LoginServer:L
//Servers:S
//Payment: T
//Client:P
//����ǰ׺��
//����REQUEST
//Ӧ��RESPONSE
//֪ͨ��NOTIFY

enum PakcetDefineType
{
	//server�������Ϣ
	SERVER_MESSAGE_BEGIN = 0,

	S2C_REQUEST_REGISTER_SERVER = 1,//ע���������������ID�����ͣ��˿ڣ�ip
	C2S_NOTIFY_SYNC_SERVER,			//֪ͨ������ȥ����������������������ID�����ͣ��˿ڣ�ip
	A2L_NOTIFY_GATE_INIT,			//GateServerͬ����ʼ����Ϣ
	A2L_NOTIFY_SYNC_GATELOAD,		//GateServerͬ�������������������
	S2P_NOTIFY_SYNC_ERROR,			//���ʹ�����
	D2G_NOTIFY_WORLD_DATA,			//ͬ������Ϸ�����ʼ����
	N2S_NOTIFY_CONTROL_ACCEPT,		// net -> server :create socket
	N2S_NOTIFY_CONTROL_CLOSE,		// net -> server :close socket
	P2A_RESPONSE_USER_HEART,		//��������Ӧ
	D2G_REQUEST_WORLD_DATA,			//�������Ϸ�����ʼ����
	D2G_RESPONSE_WORLD_DATA,		//ͬ������Ϸ�����ʼ����
	L2P_NOTIFY_SW_CHECKER,			//����˳����Ϣ

	//��½��Ϣ
	L2A_REQUEST_USER_PRLOGIN = 100,	//�˺�Ԥ��½���˺�ID����½session��Կ
	A2D_REQUEST_USER_LOGIN,			//�˺ŵ�½���˺�ID���˺���
	A2G_NOTIFY_PLAYER_LOGOUT,		//��ɫ�ǳ�GameServer����ɫID
	D2G_REQUEST_LOGIN_GAMEWORLD,	//��ɫ��½GameServer����ɫID������ID������
	D2G_NOTIFY_PLAYER_ATTRINT,		//ͬ����ɫ����int
	D2G_NOTIFY_PLAYER_ATTRI64,		//ͬ����ɫ����int64
	D2G_NOTIFY_PLAYER_LOADOVER,		//��ɫ���ݼ�����ϣ���ɫID
	G2D_REQUEST_PLAYER_DATA,		//����������������ؽ�ɫ����
	L2P_NOTIFY_CONNECT_GATESVR,		//֪ͨ�ͻ����������أ��˺�ID��session��ip���˿�
	D2P_NOTIFY_PLAYER_COUNT,		//ͬ����ɫ�������˺�ID����ɫ����
	G2P_NOTIFY_PLAYER_ATTRIBUTE,	//ͬ����ɫ����
	D2G_NOTIFY_PLAYER_NAME,			//ͬ����ɫ����
	G2D_REQUEST_CHECK_NAME,			//�������
	G2D_RESPONSE_CHECK_NAME,		//�����������
	D2G_RESPONSE_PLAYER_DATA,		//�������߽�ɫ������Ӧ
	G2A_NOTIFY_USER_DISPLACE,		//����
	G2D_REQUEST_GAMEOBJ_DATA,		//�����������������obj����

	//����
	G2P_NOTIFY_TASK_ADDK = 200,		// ����ģ�飺֪ͨ�ͻ�������һ������
	G2P_RESPONSE_TASK_FINISH,		// ����ģ�飺�������Ӧ��
	G2P_RESPONSE_TASK_RESET,		// ����ģ�飺��������Ӧ��
	G2P_NOTIFY_TASK_LIST,
	D2G_NOTIFY_TASK_SYNC,			// sync to dataserver
	G2D_NOTIFY_TASK_ADD,			// add task 
	G2D_NOTIFY_TASK_DEL,			// to db del task
	G2D_NOTIFY_TASK_UPDATE,			// update task
	G2D_NOTIFY_FINISH_ADD,			// add finish
	G2D_NOTIFY_UNRECEIVE_ADD,		// add unreceive
	G2D_NOTIFY_UNRECEIVE_DEL,		// del unreceive
	G2P_NOTIFY_TASK_DEL,			// to client del task

	//ս��
	G2P_NOTIFY_COBBAT_START = 300,	// ս��ģ�飺ͬ��ս����ʼ��Ϣ
	G2P_NOTIFY_COMBAT_REPORT,		// ս��ģ�飺ͬ��ս����Ϣ
	G2P_NOTIFY_COMBAT_RESULT,		// ս��ģ�飺ͬ��ս�����
	G2P_NOTIFY_COMBAT_AWARD,		// ս��ģ�飺ͬ��ս������
	G2P_NOTIFY_FIGHT_AWARD,			// ս��ģ�飺ͬ����ɱģʽս������
	G2P_NOTIFY_WIPE_AWARD,			// ս��ģ�飺ͬ��ɨ������

	//����
	G2P_NOTIFY_ITEM_GAIN = 400,		// ����ģ�飺ͬ����õ���
	G2P_NOTIFY_ITEM_DELETE,			// ����ģ�飺ͬ�����ٵ���
	G2P_NOTIFY_ITEM_ATTRINT,		// ����ģ�飺ͬ����������
	G2P_NOTIFY_ITEM_ATTRI64,		// ����ģ�飺ͬ����������
	G2P_RESPONSE_ITEM_EQUIP,		// ����ģ�飺��װ��Ӧ
	G2P_RESPONSE_ITEM_UNEQUIP,		// ����ģ�飺жװ��Ӧ
	G2P_RESPONSE_ITEM_INTENSIFY_FLAG, 	//װ��ǿ����Ӧ��ʶ
	G2P_RESPONSE_ITEM_INLAYCRYSTAL_FLAG, 		//��Ƕ�꾧��Ӧ
	G2P_RESPONSE_ITEM_INLAYJADE_FLAG, 			//��Ƕ������Ӧ
	G2P_RESPONSE_ITEM_SLOTTING_FLAG, 			//�����Ӧ	
	G2P_RESPONSE_ITEM_UPGRADE_FLAG,				//װ��������Ӧ��ʶ		//��Ƕ�꾧��Ӧ
    G2P_RESPONSE_ITEM_INLAYJADEALLRESPONSE, 	//һ��ǿ��Ӧ��
	
	G2P_RESPONSE_ITEM_INTENSIFYJADE_FLAG,		//ǿ�� ���� ��Ӧ ��ʶ
	G2P_RESPONSE_ITEM_INTENSIFYCRYSTAL_FLAG,	//ǿ�� �꾧 ��Ӧ ��ʶ
	G2P_RESPONSE_ITEM_RECASTCRYSTAL_FLAG,		//�����꾧��Ӧ ��ʶ	

	G2P_RESPONSE_ITEM_COMMONRESPONSE,  //ͨ����Ӧ��װ��
	G2P_RESPONSE_SOUL_COMMONRESPONSE,  //ͨ����Ӧ����ʯ
	
	G2P_RESPONSE_LOAD_ITEMS,  //���� �̵� ����  ��Ӧ

	G2P_RESPONSE_NET_TEST	= 500,	// net test

	//����
	D2P_NOTIFY_CITY_INFO = 600,		// ����ģ�飺ͬ��������Ϣ
	G2P_NOTIFY_CITY_HELPER,			// ����ģ�飺ͬ��������Ϣ
	G2P_NOTIFY_CITY_PARAMS,			// ����ģ�飺ͬ����ز���
	D2G_NOTIFY_ZONE_INFO,			// ����ģ�飺ͬ��������Ϣ

	//Ӣ��
	D2P_NOTIFY_HERO_GAIN = 700,		// Ӣ��ģ�飺���Ӣ��
	D2P_NOTIFY_HERO_ATTRINT,		// Ӣ��ģ�飺ͬ��Ӣ����Ϣ
	D2P_NOTIFY_HERO_ATTRI64,		// Ӣ��ģ�飺ͬ��Ӣ����Ϣ
	D2P_RESPONSE_HERO_INHERIT,		// Ӣ��ģ�飺�̳н��

	//����
	D2P_NOTIFY_FORMAT_INFO = 800,	// ����ģ�飺����
	D2P_NOTIFY_FORMAT_DEBUT,		// ����ģ�飺������Ϣ
	G2P_RESPONSE_FORMAT_UP,			// ����ģ�飺�����ɹ�

	// for friend
	G2P_RESPONSE_FRIENDS_ADD	= 900,	// friends response: add friend
	G2P_RESPONSE_FRIENDS_DEL	= 901,	// friends response: del friend
	G2P_NOTIFY_FRIENDS_ADD		= 902,	// friends request: notify client friend
	G2P_NOTIFY_FRIENDS_STATE	= 903,	// friends notify: friend state(up|down)
	G2D_REQUEST_FRIENDS_DATA	= 904,	// friend request data 
	D2G_RESPONSE_FRIENDS_DATA	= 905,	// friend response data 
	G2P_RESPONSE_FRIENDS_LOAD	= 906,	// friend response load
	D2G_NOTIFY_FRIENDS_SYNC		= 907,	// friend sync data to client
	G2D_NOTIFY_FRIEND_ADD		= 908,	// friend add friend 
	G2D_NOTIFY_FRIEND_DEL		= 909,	// friend del friend 
	G2P_RESPONSE_FRIEND_SYNC	= 910,	// friend sync data to client
	G2P_NOTIFY_FRIENDS_ADD_REQUEST = 911, // friend add request
	G2D_NOTIFY_FRIENDS_ADD_REQUEST = 912, // friend add request
	G2D_NOTIFY_FRIENDS_DEL_REQUEST = 913, // friend del request

	// for chat 
	G2P_NOTIFY_CHAT_PRIVATE		= 1000,	// chat NOTIFY: private
	G2P_NOTIFY_CHAT_WORLD		= 1001,	// chat NOTIFY: world
	G2P_NOTIFY_CHAT_CAMP		= 1002,	// chat NOTIFY: camp
	G2P_NOTIFY_CHAT_KNIGHTS		= 1003,	// chat NOTIFY: Knights
	G2P_RESPONSE_CHAT_ERROR		= 1004,	// chat NOTIFY: Error 

	//train
	G2P_RESPONSE_TRAIN_DO = 1100,		//ѵ��
	G2P_RESPONSE_TRAIN_SAVED,			//ѵ���������

	//stars
	G2P_NOTIFY_STARS_INFO = 1200,		//����

	//skill
	G2P_NOTIFY_SKILL_SPECINFO = 1300,	//ͬ�����Լ���

	//reward
	G2P_NOTIFY_REWARD = 1400,			//����
	G2P_NOTIFY_DIRECT = 1401,			// direct reward

	// arena
	G2P_RESPONSE_ARENA_STAGE_DATA	 	= 1500,	// response arena stage data
	G2P_RESPONSE_ARENA_CHANGE_OPP 		= 1501,	// response change opponent
	//G2P_RESPONSE_ARENA_ORDER_DATA 	= 1502, 	// response arena order data
	G2P_RESPONSE_ARENA_ADD_CHALLENGE	 = 1503, // response add challenge times
	G2P_NOTIFY_ARENA_KNIGHT_APPEAR 		= 1504, //  notify appear a knight
	G2P_RESPONSE_ARENA_CHALLENGE  		= 1505, //  response challenge 
	G2D_REQUEST_ARENA_SAVE_DATA			= 1506, // save data
	D2G_NOTIFY_ARENA_SYNC_DATA			= 1507, // sync data
	G2D_REQUEST_ARENA_WAITING_ADD		= 1508, // add waiting player
	G2D_REQUEST_ARENA_WAITING_DEL		= 1509, // del waiting player
	G2D_REQUEST_ARENA_WAITING_DEL_ALL	= 1510, // del all waiting player
	G2D_REQUEST_ARENA_CURRENT_ADD		= 1511, // add current player
	G2D_REQUEST_ARENA_CURRENT_DEL		= 1512, // del current player
	G2D_REQUEST_ARENA_CURRENT_UPDATE	= 1513, // update current player
	G2D_REQUEST_ARENA_CURRENT_DEL_ALL	= 1514, // del all curent
	G2P_NOTIFY_ARENA_DATA				= 1515, // arena data 
	G2P_NOTIFY_ARENA_STAGE_REWARD 		= 1516, // arena stage reward 
	G2D_NOTIFY_ARENA_MODULE_REFRESH_CURRENT 	= 1517, // arena module notify refresh
	D2G_NOTIFY_ARENA_MODULE_SYNC_DATA			= 1518,	// arena module sync data
	G2P_RESPONSE_ARENA_CHALLENGE_KNIGHT = 1519, //  response challenge  knight
	G2P_NOTIFY_ARENA_REFRESH			= 1520, //  notify arena refresh 

	//ǩ��
	D2G_NOTIFY_SIGNIN_ATTR = 1600,  //ǩ������ͬ��
	G2P_RESPOND_COMPSIGNIN,			// ��ǩ			
	G2P_RESPOND_EXCHGSIGNIN,		// ǩ������һ���Ʒ

	// ��ս
	G2P_NOTIFY_BATTLE_WPINFO = 1700,	//ͬ����ս·����Ϣ
	G2D_NOTIFY_BATTLE_JOINER,			//ͬ����������Ϣ
	G2D_NOTIFY_BATTLE_WINNER,			//ͬ��ʤ������Ϣ
	G2D_NOTIFY_BATTLE_INIT,				//��ʼ����ս����
	G2P_NOTIFY_BATTLE_SINGLEREWARD,		//ͬ����������
	G2P_NOTIFY_BATTLE_DOUBLEWIN,		//ͬ����ʤ����

	// ����boss
	G2P_RESPONSE_BOSS_INSPIRE = 1800,	//����boss������
	G2P_RESPONSE_BOSS_COOLDOWN,			//����boss����ȴ
	G2P_NOTIFY_BOSS_INFO,				//����boss����ս����Ϣ
	G2P_NOTIFY_ATTACK_INFO,				//����boss������ս����Ϣ
	G2P_NOTIFY_REWARD_KILL,				//����boss����ɱ������Ϣ
	G2P_NOTIFY_REWARD_RANKING,			//����boss������������Ϣ

	// order
	G2D_REQUEST_ORDER_UPDATE_PLAYER = 1900, // update player data
	G2D_REQUEST_ORDER_INSERT_PLAYER	= 1901, // insert player
	G2D_REQUEST_ORDER_DELETE_PLAYER = 1902, // delete player
	G2D_REQUEST_ORDER_MOVE_FRONT	= 1903, // move player front
	G2D_REQUEST_ORDER_MOVE_BACK		= 1904, // move player back
	D2G_NOTIFY_ORDER_ARENA_PLAYER_DATA	= 1905,	// notify GameServer player data
	G2P_RESPONSE_ORDER_RANK		 = 1906, // order range
	G2P_RESPONSE_ORDER_DATA 	= 1907, 	// response order data

	// event
	G2B_NOTIFY_EVENT = 2000,			// ͬ����Ϸ�¼�

	// buff
	D2G_NOTIFY_BUFFER = 2100,			// ͬ�����ϵ�buff

	// ������¼�
	G2P_RESPONSE_ACTIVITY_LOGIN = 2200,	// �������ͻ���
	D2G_NOTIFY_ACTIVITY_LOGIN,			// ����ͬ��

	// ��ֵ��ػ
	G2P_RESPONSE_ACTIVITY_CHARGE = 2300,// ��������ҽ�Ʒ

	//Զ���
	D2G_NOTIFY_EXPEDITION_HERO	= 2400, // ͬ��Զ��Ӣ������
	D2G_NOTIFY_EXPEDITION_INFO,			// Զ����������
	G2P_RESPONSE_EXPEDITION_AWARD,		// Զ�������
	G2P_RESPONSE_EXPEDITION_AUTOAWARD,	// Զ���Զ���ս����

	//����
	G2P_RESPONSE_RANDHERO_GAINHERO = 2500,


	//Payment
	G2T_REQUEST_PAYMENT_VERIFY			= 2600, 
	T2G_RESPONSE_PAYMENT_VERIFY			= 2601, 
	G2P_RESPONSE_PAYMENT_VERIFY			= 2602, 
	G2D_REQUEST_PAYMENT_SAVE_TRANSACTION= 2603,
	D2G_RESPONSE_PAYMENT_SAVE_TRANSACTION= 2604,

	//Ů������
	G2P_RESPONSE_QUEENTEASE		= 2700,

	//ÿ���ֵ
	G2P_NOTIFY_DAYCHARGE	= 2800,

	//˳����ֵ
	S2S_NOTIFY_SWCHARGE	= 2900,

	// set fields value
	G2D_GAMEOBJ_CREATE = 10000,
	G2D_GAMEOBJ_REMOVE,
	G2D_GAMEOBJ_OBJFIELD_SET,
	G2D_GAMEOBJ_MAPFIELD_SET,
	G2D_GAMEOBJ_MAPFIELD_ADD,
	G2D_GAMEOBJ_MAPFIELD_DEL,
	G2D_GAMEOBJ_SYNC,
	G2D_GAMEOBJ_SYNC_OBJFIELD,
	G2D_GAMEOBJ_SYNC_MAPFIELD,
	G2D_GAMEOBJ_SYNC_FINISH,


	SERVER_MESSAGE_END = 29999,

	//client�������Ϣ
	CLIENT_MESSAGE_BEGIN = 30000,

	//��½
	P2L_REQUEST_USER_CHECK = 30001,	//�˺���֤���˺������˺�����(md5����)
	P2L_REQUEST_GUEST_CHECK,		//�ο���֤���豸ID
	P2A_REQUEST_USER_LOGIN,			//�˺ŵ�½���˺�ID��session��Կ
	P2A_REQUEST_USER_LOGOUT,		//�˺ŵ�½��null
	P2A_REQUEST_PLAYER_LOGIN,		//��ɫ��½
	P2D_REQUEST_PLAYER_CREATE,		//������ɫ���˺�ID����ɫ��
	P2D_REQUEST_PLAYER_DELETE,		//ɾ����ɫ����ɫID
	P2A_REQUEST_USER_HEART,			//������

	//����
	P2G_REQUEST_TASK_FINISH = 30100,// ����ģ�飺�����������
	P2G_REQUEST_TASK_RESET,			// ����ģ�飺������������

	//ս��
	P2G_REQUEST_ATTACK_MONSTER = 30200,	// ս��ģ�飺��������ս��
	P2G_REQUEST_CITY_PRIZE,				// ս��ģ�飺�����齱
	P2G_REQUEST_HELPER_INFO,			// ս��ģ�飺����������Ϣ
	P2G_REQUEST_HELPER_SELECT,			// ս��ģ�飺ѡ��������
	P2G_REQUEST_RESET_CHALGCOUNT,		// ս��ģ�飺������ս����
	P2G_REQUEST_BUY_ACTION,				// �����ж���
	P2G_REQUEST_CITY_GETBOX,			// ���������

	//����
	P2G_REQUEST_ITEM_USE = 30300,	// ����ģ�飺ʹ�õ�������
	P2G_REQUEST_ITEM_SELL,			// ����ģ�飺���۵�������
	P2G_REQUEST_ITEM_EQUIP,			// ����ģ�飺��װ����
	P2G_REQUEST_ITEM_UNEQUIP,		// ����ģ�飺жװ����
	P2G_REQUEST_ITEM_INTENSIFY,     //װ��ǿ������
	P2G_REQUEST_ITEM_INLAYCRYSTAL,	//��Ƕ�꾧����
	P2G_REQUEST_ITEM_INLAYJADE,		//��Ƕ��������
	G2P_RESPONSE_ITEM_INLAYJADEALL, 			//һ����Ƕ����
	P2G_REQUEST_ITEM_SLOTTING,		//�������
	P2G_REQUEST_ITEM_UPGRADE,		//װ����������	
	P2G_REQUEST_ITEM_INTENSIFYJADE,		//װ��ǿ�� ���� ����	
	P2G_REQUEST_ITEM_INTENSIFYCRYSTAL, //װ��ǿ�� �꾧 ����	
	P2G_REQUEST_ITEM_RECASTCRYSTAL, 	//�����꾧 ���� 
	P2G_REQUEST_ITEM_UNLOADAllSOUL,		//��ж��ʯ����
	P2G_REQUEST_ITEM_UNLOADSOUL,		//��ж��ʯ����
	P2G_REQUEST_ITEM_INTENSIFYMITHRIL,	//ǿ������
	P2G_REQUEST_ITEM_QUICKINTENSE,		//һ��ǿ��
	P2G_REQUEST_ITEM_QUICKINTENSEALL,		//һ��ǿ���ý�ɫ����װ��

	P2G_REQUEST_LOAD_ITEMS,  	//�̵�ϵͳ    ���ص�������
	P2G_REQUEST_BUY_ITEMS,		//�̵�ϵͳ    ������Ʒ����

	//Ӣ��
	P2G_REUQEST_HERO_RECRUIT = 30400,	// Ӣ��ģ�飺��ļ
	P2G_REUQEST_HERO_RECALL,			// Ӣ��ģ�飺�ٻ�
	P2G_REUQEST_HERO_LEAVE,				// Ӣ��ģ�飺���
	P2G_REUQEST_HERO_QUALITY,			// Ӣ��ģ�飺��Ʒ
	P2G_REUQEST_HERO_PROGRESS,			// Ӣ��ģ�飺��Ʒ����
	P2G_REUQEST_HERO_INHERIT,			// Ӣ��ģ�飺�̳�
	P2G_REUQEST_HERO_RAND,				// ���ƻ��Ӣ��

	//����
	P2G_REQUEST_FORMAT_LEVELUP = 30500,	// ����ģ�飺����
	P2G_REQUEST_FORMAT_DEBUT,			// ����ģ�飺����

	// for friends
	P2G_REQUEST_FRIENDS_ADD			= 30600,	// friends request: add friend
	P2G_REQUEST_FRIENDS_DEL			= 30601,	// friends request: del friend
	P2G_REQUEST_FRIENDS_LOAD		= 30602,	// friend request load
	P2G_REQUEST_FRIENDS_DEL_REQUEST = 30603, // friend request: del request

	// for chat
	P2G_REQUEST_CHAT_PRIVATE	= 30700,	// chat request: private
	P2G_REQUEST_CHAT_WORLD		= 30701,	// chat request: world
	P2G_REQUEST_CHAT_CAMP		= 30702,	// chat request: camp
	P2G_REQUEST_CHAT_KNIGHTS	= 30703,	// chat request: Knights

	// train
	P2G_REQUEST_TRAIN_DO = 30800,		// ѵ��ģ�飺ѵ��
	P2G_REQUEST_TRAIN_SAVE,				// ѵ��ģ�飺����
	P2G_REQUEST_TRAIN_UNSAVE,			// ѵ��ģ�飺ȡ��

	// stars
	P2G_REQUEST_STARS_ACTIVE = 30900,	// ����ģ�飺����
	P2G_REQUEST_STARS_UPLEVEL,			// ����ģ�飺����
	P2G_REQUEST_STARS_INLAY,			// ����ģ�飺��Ƕ
	P2G_REQUEST_STARS_UNLAY,			// ����ģ�飺����

	//skill
	P2G_REQUEST_SKILL_SELECT = 31000,	// ����ģ�飺ѡ�����
	P2G_REQUEST_SKILL_RESET,			// ����ģ�飺��������

	//�۲�
	P2G_REQUEST_OBSERVE_PLAYER = 31100,	// �۲�

	//reward
	P2G_REQUEST_REWARD_GET = 31200,		// ��ȡ����

	// arena
	P2G_REQUEST_ARENA_STAGE_DATA = 31300,	// request arena stage data
	P2G_REQUEST_ARENA_CHANGE_OPP = 31301,	// request change opponent
	P2G_REQUEST_ARENA_CHALLENGE	 = 31302,	// request challenge 
	//P2G_REQUEST_ARENA_ORDER_DATA = 31303, 	// request arena order data
	P2G_REQUEST_ARENA_ADD_CHALLENGE = 31304, // request add challenge times
	P2G_REQUEST_ARENA_CHALLENGE_KNIGHT = 31305, // challenge knight 

	// ����
	P2G_REQUEST_WORSHIPING = 31400,		 	// ����
	// ǩ��
	P2G_REQUEST_DOSIGNIN,					// ǩ��
	// ���䱳��
	P2G_REQUEST_BAG_EXPAND,					// ���䱳��

	// ��ս
	P2G_REQUEST_BATTLE_JOIN = 31500,	//����μӹ�ս
	P2G_REQUEST_BATTLE_MOVE,			//��ս�������ƶ�
	P2G_REQUEST_BATTLE_ATTACK,			//��ս�����󹥻�
	P2G_REQUEST_BATTLE_DEFEND,			//��ս���������
	P2G_REQUEST_BATTLE_WPINFO,			//�����ս��Ϣ
	P2G_REQUEST_BATTLE_BUY_ACTION,		//������ս������
	P2G_REQUEST_BATTLE_BUY_TIME,		//����ȡ��ս����ȴʱ��
	P2G_REQUEST_BATTLE_SINGLEREWARD_GET,//������ȡ��������
	P2G_REQUEST_BATTLE_SINGLEREWARD_DOUBLE,	//���󷭱���������
	P2G_REQUEST_BATTLE_DIALYREWARD_GET,	//������ȡÿ�ս��㽱��
	P2G_REQUEST_BATTLE_WINRANKING,		//������ʤ����

	// order
	P2G_REQUEST_DATA_RANK		= 31600, 	// request range
	P2G_REQUEST_ORDER_DATA = 31601, 	// request order data

	// ����boss
	P2G_REQUEST_BOSS_ATTACK = 31700,	//���󹥻�boss
	P2G_REQUEST_BOSS_INSPIRE,			//�������
	P2G_REQUEST_BOSS_COOLDOWN,			//���������ȴʱ��
	P2G_REQUEST_BOSS_JOIN,				//����μ�����boss

	// ������¼
	P2G_REQUEST_ACTIVITY_LOGIN = 31800, //������¼�����

	// ��ֵ��ػ
	P2G_REQUEST_ACTIVITY_CHARGE = 32900,//��ֵ��ػ����

	// Զ���
	P2G_REQUEST_ACTIVITY_EXPEDITION = 33000,
	P2G_REQUEST_EXPEDITION_SWITCHPOS,
	
	// Payment
	P2G_REQUEST_PAYMENT_VERIFY		= 33100,

	// Ů������
	P2G_REQUEST_QUEENTEASE		= 33200,

	// �����ؾ�
	P2G_REQUEST_CARNAGE		= 33300,

	//ÿ���ֵ
	P2G_REQUEST_DAYCHARGE	= 33400,

	// ����
	P2G_REQUEST_DEBUG		= 60000,	// ������Ϣ
	P2G_REQUEST_NET_TEST	= 60001,	// net test

	
	CLIENT_MESSAGE_END,				//���65535

};

#endif	//COMMON_PACKETDEFINE_H
