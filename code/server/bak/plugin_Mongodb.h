#ifndef _PLUGIN_MONGODB_H_
#define _PLUGIN_MONGODB_H_

#include "plugin.h"
#include <string>
#include "bson.h"
#include "bcon.h"
#include "mongoc.h"
#include "ThreadLib.h"
#include "Lock.h"
#include "utllinkedlist.h"

#define MONGO_BSON bson_t;
#define MONGO_QUERY bson_t;
#define MONGO_CURSOR mongoc_cursor_t ;

struct OperObj {
	int		        opr_type;
	mongo::Query	opr_condition;
	mongo::BSONObj	opr_bson;
	std::string		opr_collection;
};

class CMongoDB : public CPlugin
{
public:
	//�������ݿ�������� 
	enum Mongo_Opr_Type {		
		Mongo_Update = 1,	//�޸Ĳ���
		Mongo_Insert,		//�������
		Mongo_Query,		//��ѯ����
		Mongo_Delete,		//ɾ������
	};

public:
	CMongoDB();
	~CMongoDB();

	bool startup(std::string host, std::string port, std::string dbname);
	bool exit();
	void execute(int opr_type, std::string opr_collection, mongo::Query opr_condition, mongo::BSONObj opr_bson);
	void select(mongo::auto_ptr<mongo::DBClientCursor>& cursor, const std::string collection, mongo::Query condition);

	static bool getBsonFieldInt(mongo::BSONObj obj, const std::string field, int& value);
	static bool getBsonFieldI64(mongo::BSONObj obj, const std::string field, int64& value);
	static bool getBsonFieldBool(mongo::BSONObj obj, const std::string field, bool& value);
	static bool getBsonFieldString(mongo::BSONObj obj, const std::string field, std::string& value);
	static bool getBsonFieldArray(mongo::BSONObj obj, const std::string field, mongo::vector<mongo::BSONElement>& vec);
	static bool getBsonFieldObj(mongo::BSONObj obj, const std::string field, mongo::BSONObj &bsonobj);

protected:
	void _insert(const std::string collection, mongo::BSONObj obj);
	void _delete(const std::string collection, mongo::Query condition);
	void _update(const std::string collection, mongo::Query condition, mongo::BSONObj obj);

	bool _reconnect();
	void _disConnect();

	void _executeOpr(OperObj* opr);
	OperObj* _getHeadOpr();
	int	_handleError();

	inline bool	_isWorking() { return m_working; }
	inline bool	_isConnected() { return m_connect; }

	static void	_execOperation(void* param);

protected:
	ThreadLib::ThreadID m_threadID;
	bool m_working;
	bool m_connect;
	int  m_port;
	char m_host[32];
	std::string m_dbname;
	mongoc_client_t* m_conn;

	Eventer m_Eventer;
	Mutex	m_Locker;
	CUtlLinkedList<OperObj*> m_ObjList;
};

#endif //_PLUGIN_MONGODB_H_
