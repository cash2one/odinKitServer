#include "plugin_Mongodb.h"
#include "memorypool.h"
#include "Log.h"

CMongoDB::CMongoDB() : m_working(false), m_connect(false)
{
	bool auto_connect = true;
	double so_timeout = 3;

	mongoc_init();
}

CMongoDB::~CMongoDB()
{
	mongoc_client_destroy(m_conn);
    mongoc_cleanup();
}

bool CMongoDB::startup(std::string host, std::string port, std::string dbname)
{
	m_dbname = dbname;
	m_port = atoi(port.c_str());
	strncpy(m_host, host.c_str(), 32);

	std::string errmsg = "";
	char dbserver[64] = { 0 };
	sprintf(dbserver, "mongodb://%s:%d", m_host, m_port);
	if (m_conn = mongoc_client_new(dbserver)) {
		Log.Error("[MongonDB] Connect %s:%d db:%s Error:%s", m_host, m_port, m_dbname.c_str(), errmsg.c_str());
		return false;
	}

	m_connect = true;
	m_working = true;

	m_threadID = ThreadLib::Create(_execOperation, this);

	Log.Notice("[MongonDB] Connect %s:%d db:%s Success", m_host, m_port, m_dbname.c_str());

	return true;
}

bool CMongoDB::exit()
{
	m_working = false;
	ThreadLib::WaitForFinish(m_threadID);

	return true;
}

void CMongoDB::execute(int opr_type, std::string opr_collection, mongo::Query opr_condition, mongo::BSONObj opr_bson)
{
	//OperObj* oper = NEW OperObj;
	OperObj* oper = new OperObj;
	if (!oper) {
		return;
	}

	oper->opr_type = opr_type;
	oper->opr_collection = opr_collection;
	if (opr_type != Mongo_Insert) {
		oper->opr_condition = opr_condition;
	}
	if (opr_type != Mongo_Delete) {
		oper->opr_bson = opr_bson;
	}

	m_Locker.LOCK();
	m_ObjList.AddToTail(oper);
	m_Locker.UNLOCK();
}

bool CMongoDB::_reconnect()
{
	std::string errmsg = "";
	char dbserver[64] = { 0 };
	sprintf(dbserver, "mongodb://%s:%d", m_host, m_port);
	if (m_conn = mongoc_client_new(dbserver)) {
		Log.Error("[MongonDB] Connect %s:%d db:%s Error:%s", m_host, m_port, m_dbname.c_str(), errmsg.c_str());
		return false;
	}

	m_connect = true;

	Log.Notice("[MongonDB] Connect %s:%d db:%s Success", m_host, m_port, m_dbname.c_str());

	return true;
}

void CMongoDB::_insert(const std::string collection, MONGO_BSON* obj)
{
    mongoc_collection_t *_collection;
    bson_error_t _error;

	_collection = mongoc_client_get_collection (m_conn, m_dbname.c_str(), collection.c_str());

	if (!mongoc_collection_insert (_collection, MONGOC_INSERT_NONE, obj, NULL, &_error)) {
		Log.Error("[MongoDB] Insert Failed:%s:%s, %s", m_dbname.c_str(), collection.c_str(), bson_as_json(obj, NULL));
		Log.Error("[MongoDB] Exception: %s", _error.message);
    }

    mongoc_collection_destroy (_collection);
}

void CMongoDB::_delete(const std::string collection, MONGO_QUERY* query)
{
	mongoc_collection_t *_collection;
	bson_error_t _error;

	_collection = mongoc_client_get_collection (m_conn, m_dbname.c_str(), collection.c_str());

	if (!mongoc_collection_remove (_collection, MONGOC_REMOVE_SINGLE_REMOVE, query, NULL, &_error)) {
        Log.Error("[MongoDB] Delete Failed:%s:%s, %s", m_dbname.c_str(), collection.c_str(), bson_as_json(query, NULL));
		Log.Error("[MongoDB] Exception: %s", _error.message);
    }

	mongoc_collection_destroy (_collection);
}

void CMongoDB::_update(const std::string collection, MONGO_QUERY& query, MONGO_BSON& obj)
{
	mongoc_collection_t *_collection;
	bson_error_t _error;

	_collection = mongoc_client_get_collection (m_conn, m_dbname.c_str(), collection.c_str());

	if (!mongoc_collection_update (_collection, MONGOC_UPDATE_NONE, query, obj, NULL, &_error)) {
        Log.Error("[MongoDB] Update Failed:%s:%s, %s, %s", m_dbname.c_str(), collection.c_str(), bson_as_json(query, NULL), bson_as_json(obj, NULL));
		Log.Error("[MongoDB] Exception: %s", _error.message);
    }

	mongoc_collection_destroy (_collection);
}

void CMongoDB::select(MONGO_CURSOR& cursor, const std::string collection, MONGO_QUERY& query)
{
    mongoc_collection_t *_collection;
	bson_error_t _error;

	_collection = mongoc_client_get_collection (m_conn, m_dbname.c_str(), collection.c_str());
	cursor = mongoc_collection_find (_collection, MONGOC_QUERY_NONE, 0, 0, 0, query, NULL, NULL);
	
	mongoc_collection_destroy (_collection);
}

bool CMongoDB::getBsonFieldInt(mongo::BSONObj obj, const std::string field, int& value)
{
	try {
		value = obj[field.c_str()].Int();
		return true;
	}
	catch (mongo::DBException ex) {
		Log.Error("[MongoDB] Exception:%d, %s, %s", ex.getCode(), ex.what(), field.c_str());
		return false;
	}
}

bool CMongoDB::getBsonFieldI64(mongo::BSONObj obj, const std::string field, int64& value)
{
	try {
		value = obj[field.c_str()].Long();
		return true;
	}
	catch (mongo::DBException ex) {
		Log.Error("[MongoDB] Exception:%d, %s, %s", ex.getCode(), ex.what(), field.c_str());
		return false;
	}
}

bool CMongoDB::getBsonFieldBool(mongo::BSONObj obj, const std::string field, bool& value)
{
	try {
		value = obj[field.c_str()].Bool();
		return true;
	}
	catch (mongo::DBException ex) {
		Log.Error("[MongoDB] Exception:%d, %s, %s", ex.getCode(), ex.what(), field.c_str());
		return false;
	}
}

bool CMongoDB::getBsonFieldString(mongo::BSONObj obj, const std::string field, std::string& value)
{
	try
	{
		value = obj[field.c_str()].String();
		return true;
	}
	catch (mongo::DBException ex)
	{
		Log.Error("[MongoDB] Exception:%d, %s, %s", ex.getCode(), ex.what(), field.c_str());
		return false;
	}
}

bool CMongoDB::getBsonFieldArray(mongo::BSONObj obj, const std::string field, mongo::vector<mongo::BSONElement>& vec)
{
	try {
		vec = obj[field.c_str()].Array();
		return true;
	}
	catch (mongo::DBException ex) {
		Log.Error("[MongoDB] Exception:%d, %s, %s", ex.getCode(), ex.what(), field.c_str());
		return false;
	}
}

bool CMongoDB::getBsonFieldObj(mongo::BSONObj obj, const std::string field, mongo::BSONObj &bsonobj)
{
	try {
		bsonobj = obj[field.c_str()].Obj();
		return true;
	}
	catch (mongo::DBException ex) {
		Log.Error("[MongoDB] Exception:%d, %s, %s", ex.getCode(), ex.what(), field.c_str());
		return false;
	}
}

OperObj* CMongoDB::_getHeadOpr()
{
	OperObj* opr = NULL;

	m_Locker.LOCK();
	int index = m_ObjList.Head();
	if (m_ObjList.IsValidIndex(index)) {
		opr = m_ObjList.Element(index);
		m_ObjList.Remove(index);
	}
	m_Locker.UNLOCK();

	return opr;
}

void CMongoDB::_executeOpr(OperObj* opr)
{
	switch (opr->opr_type) {
		case Mongo_Update: _update(opr->opr_collection, opr->opr_condition, opr->opr_bson); break;
		case Mongo_Insert: _insert(opr->opr_collection, opr->opr_bson); break;
		//case Mongo_Query: _select(opr->opr_collection, opr->opr_condition); break;
		case Mongo_Delete: _delete(opr->opr_collection, opr->opr_condition); break;
		default: break;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CMongoDB::_execOperation(void* param)
{
#if (!defined(_DEBUG)) && defined(WIN32)
	__try
#endif	{
		CMongoDB* pThis = (CMongoDB*)param;

		while (pThis->_isWorking())
		{
			pThis->m_Eventer.Wait(1);

			if (!pThis->m_conn)
				return;

			if (!pThis->_isConnected())
			{
				Log.Error("[MongonDB] DataBase connection error");

				pThis->_reconnect();

				continue;
			}

			OperObj* opr = NULL;
			while (opr = pThis->_getHeadOpr())
			{
				pThis->_executeOpr(opr);

				SAFE_DELETE(opr);
			}
		}
	}
#if (!defined(_DEBUG)) && defined(WIN32)
	__except (HandleException(GetExceptionInformation(), "_ExecOperation"))
	{

	}
#endif
	return;
}
