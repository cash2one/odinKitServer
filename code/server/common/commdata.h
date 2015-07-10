#ifndef COMMON_COMMDATA_H
#define COMMON_COMMDATA_H

#include "platform.h"
#include "gamedef.h"

typedef int64	UserID;							// ��Ϸ�ڲ��ʺ�ID
typedef int64	OpUserID;						// ��Ӫƽ̨�˺�ID
typedef int64	GuestID;						// �ο��˺�ID
typedef int64	PersonID;						// ��ҽ�ɫ��ID	-1 Ϊ��Чֵ
typedef int64	ItemID;							// ����ID
typedef int64	TMV;							// ʱ������
typedef int		SkillID;						// ����ID
typedef int		EffectID;						// Ч��ID
typedef int		BuffID;							// buffer
typedef int		EventID;						// event


//��Чֵ����
#define INVALID_TIME				0xFFFFFFFFFFFFFFFFULL			// ��Ч��ʱ��
#define INVALID_VALUE				-1								// ��Ч��ֵ
#define INVALID_VALUE64				(int64)0xFFFFFFFFFFFFFFFFULL			//
#define INVALID_UINT64				0xFFFFFFFFFFFFFFFFULL			//
#define INVALID_PID					0xFFFFFFFFFFFFFFFFULL			// ��Ч��PID
#define INVALID_UID					0xFFFFFFFFFFFFFFFFULL			// ��Ч��UID

#define DEVICE_STRING_LEN			128
#define	OBJ_NAME_LEN				64

#define	FORMAT_TILE_XY		3
#define FORMAT_TILE_MAX		(FORMAT_TILE_XY * FORMAT_TILE_XY)	//���͸���

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Obj��ˮ�����ɹ���

//worldId���Ϊ��λ��1-999
enum OBJID_KEY
{
	GUEST_KEY = 1,
	PLAYER_KEY,
	ITEM_KEY,
	HERO_KEY,
};
//ID���򣺷���ţ�3λ������Obj���ͣ�player, guest����2λ������Obj����������7λ����չObj���ͣ�item, hero����2λ����չObj����������5λ��
#define OBJ_BIT		100					//2bit
#define EXTOBJ_BIT	100000				//5bit
#define BASEOBJ_BIT	100000000000000		//14bit

inline PersonID g_MakeInitGuestID(int worldId)		{ return (worldId * OBJ_BIT + GUEST_KEY) * BASEOBJ_BIT; }
inline PersonID g_MakeInitPlayerID(int worldId)		{ return (worldId * OBJ_BIT + PLAYER_KEY) * BASEOBJ_BIT; }
inline PersonID	g_MakeInitHeroID(PersonID player)	{ return player + HERO_KEY * EXTOBJ_BIT; }
inline ItemID	g_MakeInitItemID(PersonID player)	{ return player + ITEM_KEY * EXTOBJ_BIT; }

inline PersonID g_MakePlayerID(PersonID player)		{ return player + 1 * OBJ_BIT * EXTOBJ_BIT; }

inline bool	g_IsPlayerId(PersonID id)	{ return (PLAYER_KEY == id / BASEOBJ_BIT % OBJ_BIT); }
inline bool	g_IsHeroId(PersonID id)		{ return (HERO_KEY == id / EXTOBJ_BIT % OBJ_BIT); }

//�ο��˺�����Ӫƽ̨�˺�����Ϸ�ڲ��˺�ID��ת��
inline UserID MakeUserIdFromOpUser( OpUserID id )	{ return 1000000000000000000 + id; }
inline UserID MakeUserIdFromGuest( GuestID id )		{ return 2000000000000000000 + id; }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//player���߱������
enum Online_Flag
{
	Online_Flag_Null = 0,
	Online_Flag_Load,		//������
	Online_Flag_On,			//����
	Online_Flag_Off,		//����
};

//ʹ�����ݿ�Ķ���
enum DBCache_Type
{
	DBCache_Gamedb	= 0,
	DBCache_Eventdb,
	DBCache_Numdb,

};

enum Attrib_Param
{
	Attrib_Value,
	Attrib_Addons,
	Attrib_Percent,

	Attrib_Size,
};

enum EArenaPlayerAttr
{
	EARENA_ATTR_NAME,
	EARENA_ATTR_PID,
	EARENA_ATTR_TEMPID,
	EARENA_ATTR_STATE,
	EARENA_ATTR_STAGE,
	EARENA_ATTR_FIGHTER,
	EARENA_ATTR_SCORE,
	EARENA_ATTR_RANK,
	EARENA_ATTR_LEVEL,
	EARENA_ATTR_ISREWARD,
};


// task
#define TASK_CONDITION_MAX 			3
#define TASK_MAX	50


#define GET_FIGHTER( id, fighter )			\
	{										\
		if( g_IsHeroId(id) )				\
			fighter = HeroMgr.GetObj(id);	\
		else if( g_IsPlayerId(id) )			\
			fighter = PlayerMgr.GetObj(id);	\
	}										\

#endif	//COMMON_COMMDATA_H
