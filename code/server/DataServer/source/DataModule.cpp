﻿#include "DataModule.h"
#include "gtime.h"
#include "MainServer.h"
#include "PacketDefine.h"
#include "MessageSyncObjField.pb.h"


void CDataModule::_setSaveType(CDataObj* obj, int type)
{
	if (obj->m_save != SAVE_INSERT || type != SAVE_UPDATE)
		obj->m_save = type;
}

CDataObj* CDataModule::create(std::string type, int64 id)
{
	CDataObj* obj = Create(id);
	if (!obj)
		return NULL;

	obj->m_id = id;
	obj->m_type = type;
	obj->m_save = SAVE_NONE;
	obj->m_online = true;
	obj->m_offtime = 0;

	Log.Debug("[CDataModule] Create: (%s, "INT64_FMT")", type.c_str(), id);

	return obj;
}

CDataObj* CDataModule::loadBson(std::string type, mongo::BSONObj& bson, int64 id)
{
	CDataObj* obj = create(type, id);
	if( !obj )
		return NULL;

	obj->fromBson(bson);

	Log.Debug("[CDataModule] loadDb: (%s, "INT64_FMT"): %s", type.c_str(), id, bson.toString().c_str());

	return obj;
}

CDataObj* CDataModule::loadDb(std::string type, std::string key, int64 id)
{
	mongo::Query query = QUERY(key<<id);
	mongo::auto_ptr<mongo::DBClientCursor> cursor;
	MainServer.GetMongoDBClient()->Select(cursor, type, query);

	if (cursor.get() && cursor->more()) {
	    mongo::BSONObj p = cursor->next();

		CDataObj* obj = create(type, id);
		if( !obj )
			return NULL;

		obj->fromBson(p);

		Log.Debug("[CDataModule] loadDb: (%s, "INT64_FMT"): %s", type.c_str(), id, p.toString().c_str());

		return obj;
	}

	return NULL;
}

bool CDataModule::loadDb(std::string type)
{
	mongo::Query query;
	mongo::auto_ptr<mongo::DBClientCursor> cursor;
	MainServer.GetMongoDBClient()->Select(cursor, type, query);

	while (cursor.get() && cursor->more()) {
	    mongo::BSONObj p = cursor->next();

		std::string idstr = type + "id";
		int64 id = MainServer.GetMongoDBClient()->GetFieldI64(p, idstr);

		CDataObj* obj = create(type, id);
		if( !obj )
			return false;

		obj->fromBson(p);

		Log.Debug("[CDataModule] loadDb: (%s, "INT64_FMT"): %s", type.c_str(), id, p.toString().c_str());
	}

	return true;
}

void CDataModule::saveDb(CDataObj* obj, std::string key)
{
	mongo::Query query = QUERY(key<<obj->getId());
	mongo::BSONObj objbson;
	obj->toBson(objbson);

	MainServer.GetMongoDBClient()->Execute(Opr_Insert, obj->m_type, query, objbson);

	Log.Debug("[CDataModule] saveDb: (%s, "INT64_FMT"): %s", obj->m_type.c_str(), obj->getId(), objbson.toString().c_str());
}

void CDataModule::updateDb(CDataObj* obj, std::string key)
{
	mongo::Query query = QUERY(key<<obj->getId());
	mongo::BSONObj objbson;
	obj->toBson(objbson);

	MainServer.GetMongoDBClient()->Execute(Opr_Update, obj->m_type, query, objbson);

	Log.Debug("[CDataModule] updateDb: (%s, "INT64_FMT"): %s", obj->m_type.c_str(), obj->getId(), objbson.toString().c_str());
}

void CDataModule::updateDb(int64 id, std::string key)
{
	CDataObj* obj = this->GetObj(id);
	if (obj)
		this->updateDb(obj, key);
}

void CDataModule::syncObj(CDataObj* obj, int sock)
{
	std::string json;
	obj->toJsonstring(json);

	Message::SyncObjField msg;
	msg.set_id(obj->m_id);
	msg.set_type(obj->m_type);
	msg.set_jsonstr(json);

	PACKET_COMMAND pack;
	PROTOBUF_CMD_PACKAGE(pack, msg, G2D_GAMEOBJ_SYNC);
	MainServer.SendMsgToServer(sock, &pack);
}

void CDataModule::syncObj(CDataObj* obj, std::string key, int sock)
{
	std::string json;
	obj->toJsonstring(json, key);

	Message::SyncObjField msg;
	msg.set_id(obj->m_id);
	msg.set_type(obj->m_type);
	msg.set_key(key);
	msg.set_jsonstr(json);

	PACKET_COMMAND pack;
	PROTOBUF_CMD_PACKAGE(pack, msg, G2D_GAMEOBJ_SYNC_OBJFIELD);
	MainServer.SendMsgToServer(sock, &pack);
}

void CDataModule::syncObjFinish(int sock, std::string type, int64 id)
{
	Message::SyncObjField msg;
	msg.set_id(id);
	msg.set_type(type);

	PACKET_COMMAND pack;
	PROTOBUF_CMD_PACKAGE(pack, msg, G2D_GAMEOBJ_SYNC_FINISH);
	MainServer.SendMsgToServer(sock, &pack);
}

void CDataModule::syncObjMap(CDataObj* obj, rapidjson::Value& json, std::string key, int64 mapkey, int sock)
{
	std::string jsonstr;
	CGameJsonObj::toJsonstring(json, jsonstr);

	Message::SyncObjField msg;
	msg.set_id(obj->m_id);
	msg.set_key(key);
	msg.set_mapkey(mapkey);
	msg.set_jsonstr(jsonstr);

	PACKET_COMMAND pack;
	PROTOBUF_CMD_PACKAGE(pack, msg, G2D_GAMEOBJ_SYNC_MAPFIELD);
	MainServer.SendMsgToServer(sock, &pack);
}

void CDataModule::syncObjSeparate(CDataObj* obj, int sock)
{
	CDataObj gameObj;
	gameObj.m_id = obj->m_id;
	gameObj.m_type = obj->m_type;

	for (rapidjson::Value::MemberIterator it = obj->m_members.MemberBegin(); it != obj->m_members.MemberEnd(); ++it) {
		rapidjson::Value& member = obj->getFieldObj(it->name.GetString());
		
		if (CGameJsonObj::isFieldI64(member)) {
			rapidjson::Value jsonValue;
			jsonValue.SetInt64(CGameJsonObj::getFieldI64(member));
			gameObj.m_members.AddMember(it->name.GetString(), jsonValue, gameObj.m_members.GetAllocator());
		}
		else if (CGameJsonObj::isFieldInt(member)) {
			rapidjson::Value jsonValue;
			jsonValue.SetInt(CGameJsonObj::getFieldInt(member));
			gameObj.m_members.AddMember(it->name.GetString(), jsonValue, gameObj.m_members.GetAllocator());
		}
		else if (CGameJsonObj::isFieldStr(member)) {
			rapidjson::Value jsonValue;
			jsonValue.SetString(CGameJsonObj::getFieldStr(member).c_str(), gameObj.m_members.GetAllocator());
			gameObj.m_members.AddMember(it->name.GetString(), jsonValue, gameObj.m_members.GetAllocator());
		}
	}
	this->syncObj(&gameObj, sock);

	for (rapidjson::Value::MemberIterator it = obj->m_members.MemberBegin(); it != obj->m_members.MemberEnd(); ++it) {
		rapidjson::Value& member = obj->getFieldObj(it->name.GetString());
		if (CGameJsonObj::isFieldVec(member)) {
			this->syncObj(obj, it->name.GetString(), sock);
		}
		else if (CGameJsonObj::isFieldObj(member)) {
			rapidjson::Value::MemberIterator child = member.MemberBegin();
			if (child != member.MemberEnd() && CGameJsonObj::isFieldObj(CGameJsonObj::getFieldVal(member, child->name.GetString()))) {
				do {
					rapidjson::Value& childjson = CGameJsonObj::getFieldVal(member, child->name.GetString());
					this->syncObjMap(obj, childjson, it->name.GetString(), atoll(child->name.GetString()), sock);
				} while (++child != member.MemberEnd());
			} else {
				this->syncObj(obj, it->name.GetString(), sock);
			}
		}
	}

	syncObjFinish(sock, obj->m_type, obj->m_id);
}

void CDataModule::syncObj(std::string type, int sock)
{
	int64 id = m_list.Head();
	while (CDataObj* obj = GetObj(id)) {
		id = m_list.Next(id);
	
		if (type == obj->m_type)
			syncObj(obj, sock);
	}

	syncObjFinish(sock, type);
}

bool CDataModule::onMessage(PACKET_COMMAND* pack)
{
	if (!pack)
		return false;

	switch(pack->Type()) {
		case G2D_GAMEOBJ_OBJFIELD_SET:
			{
				Message::SyncObjField msg;
				PROTOBUF_CMD_PARSER(pack, msg);

				CDataObj* obj = this->GetObj(msg.id());
				if (obj) {
					obj->fromJsonstringCompletely(msg.jsonstr(), msg.key());
					this->_setSaveType(obj, SAVE_UPDATE);
				}
			}
			break;
		case G2D_GAMEOBJ_MAPFIELD_SET:
			{
				Message::SyncObjField msg;
				PROTOBUF_CMD_PARSER(pack, msg);

				CDataObj* obj = this->GetObj(msg.id());
				if (obj) {
					obj->setFieldMap(msg.key(), msg.mapkey(), msg.jsonstr());
					this->_setSaveType(obj, SAVE_UPDATE);
				}
			}
			break;
		case G2D_GAMEOBJ_MAPFIELD_ADD:
			{
				Message::SyncObjField msg;
				PROTOBUF_CMD_PARSER(pack, msg);

				CDataObj* obj = this->GetObj(msg.id());
				if (obj) {
					if (!obj->HaveMember(msg.key())) {
						obj->addFieldObj(msg.key());
					}
					obj->addFieldMap(msg.key(), msg.mapkey(), msg.jsonstr());
					this->_setSaveType(obj, SAVE_UPDATE);
				}
			}
			break;
		case G2D_GAMEOBJ_MAPFIELD_DEL:
			{
				Message::SyncObjField msg;
				PROTOBUF_CMD_PARSER(pack, msg);

				CDataObj* obj = this->GetObj(msg.id());
				if (obj) {
					obj->delFieldMap(msg.key(), msg.mapkey());
					this->_setSaveType(obj, SAVE_UPDATE);
				}
			}
			break;
		case G2D_GAMEOBJ_CREATE:
			{
				Message::SyncObjField msg;
				PROTOBUF_CMD_PARSER(pack, msg);

				CDataObj* obj = create(msg.type().c_str(), msg.id());
				if (obj) {
					obj->fromJsonstringCompletely(msg.jsonstr());
					this->_setSaveType(obj, SAVE_INSERT);
				}
			}
			break;
		case G2D_GAMEOBJ_REMOVE:
			{
				Message::SyncObjField msg;
				PROTOBUF_CMD_PARSER(pack, msg);

				CDataObj* obj = this->GetObj(msg.id());
				if (obj) {
					obj->m_online = false;
					obj->m_offtime = GetTimeSec();
				}
			}
			break;
		default:	
			return false;
	}

	return true;
}

void CDataModule::onSave()
{
	uint64 t = GetTimeSec();
	int64 id = m_list.Head();
	while (CDataObj* obj = GetObj(id)) {
		id = m_list.Next(id);

		if (obj->m_save == SAVE_INSERT) {
			std::string key = obj->m_type + "id";
			saveDb(obj, key);
			obj->m_save = SAVE_NONE;
		}
		else if (obj->m_save == SAVE_UPDATE) {
			std::string key = obj->m_type + "id";
			updateDb(obj, key);
			obj->m_save = SAVE_NONE;
		}

		if (!obj->m_online && t - obj->m_offtime > 600) {
			Log.Debug("[CDataModule] Delete: %s "INT64_FMT, obj->m_type.c_str(), obj->m_id);
			Delete(obj->m_id);
		}
	}
}