#pragma once
#include "commdata.h"
#include "ObjMgr.h"
#include "Player.h"
#include "Packet.h"
#include "utllinkedlist.h"
#include "utlmap.h"


class CPlayerMgr : public CObjMgr< CPlayer, PersonID >, public Singleton< CPlayerMgr >
{
public:
	enum EReqPlayer {
		EReqPlayer_Observe = 1,	//�۲�
		EReqPlayer_Arena,		//������
		EReqPlayer_Battle_Attack, //ս��
		EReqPlayer_Battle_Defend, //ս��
		EReqPlayer_City_Helper,	//��������
	};

	struct Loading {
		PersonID reqID;
		PersonID tarID;
		int		 module;

		Loading(PersonID reqID, PersonID tarID, int module)
			: reqID(reqID)
			, tarID(tarID)
			, module(module)
		{ }
	};

public:
	CPlayerMgr()	{ m_FactId = 0; SetDefLessFunc(m_LoadMap);}
	~CPlayerMgr()	{};

	CPlayer* Create(int templateid, PersonID playerid = INVALID_VALUE);
	void	Delete(PersonID id);

	bool	OnMsg(PACKET_COMMAND* pack);
	void	OnLogic();

	void	LoadPlayerRequest(CPlayer* reqPlayer, PersonID tarID, int module);

	void	eventPlayerLoadover(PersonID tarID);
	void	eventPlayerLoadObserve(PersonID reqID, PersonID tarID, int module);

	void	SyncObservePlayer(CPlayer* player, CPlayer* toPlayer);

	inline void SetLoadFactID(PersonID fact) {m_FactId = fact;}

protected:
	bool	_HandlePacket_SyncAttrInt(PACKET_COMMAND* pack);
	bool	_HandlePacket_SyncAttrI64(PACKET_COMMAND* pack);
	bool	_HandlePacket_SyncAttrName(PACKET_COMMAND* pack);
	bool	_HandlePacket_PlayerLoadOver(PACKET_COMMAND* pack);
	bool	_HandlePacket_OfflinePlayerData(PACKET_COMMAND* pack);
	bool	_HandlePacket_ObservePlayer(PACKET_COMMAND* pack);

	void	_HandleLoadRequest(CPlayer* reqPlayer, PersonID tarID, int module);
	void	_HandleLoadCache(PersonID reqID, PersonID tarID, int module);

protected:
	PersonID	m_FactId;

	CUtlLinkedList<Loading*>		m_LoadList;
	CUtlMap<PersonID, PersonID>		m_LoadMap;
	ClxHList<PersonID, CPlayer*>	m_DataList;

};

#define PlayerMgr CPlayerMgr::getSingleton()
