#pragma once
#include "Item.h"
#include "utlmap.h"
#include "utllinkedlist.h"
#include "eventdef.h"

class CFighter;
class PACKET_COMMAND;
class CItemUnit
{
public:
	CItemUnit();
	~CItemUnit();

	void	Initialize(CFighter* parent);
	void	Release();
	bool	OnMsg(PACKET_COMMAND* pack);

	//���߲����ӿ�
	bool	GainItem(CItem* item, ITEM_REASON reason);								//�����Ʒ
	bool	GainItem(int templateid, ITEM_REASON reason, int num = 1);				//�����Ʒ
	bool	DeleteItem(CItem* item, ITEM_REASON reason);							//������Ʒ
	bool	DeleteItem(int templateid, ITEM_REASON reason, int num = 1);			//������Ʒ
	bool	DeleteItemByType(int type, ITEM_REASON reason, int num = 1);			//������Ʒ
	bool	CostItem(CItem* item, int num = 1);										//������Ʒ
	bool	UseItem(CItem* item, int num = 1);										//ʹ����Ʒ
	bool	SellItem(CItem* item);													//������Ʒ
	bool	LoadItem(ItemID itemid, string jsonstr);								//���ص���

	//��װ/��װ
	bool	EquipItem(CItem* item, CFighter* role, bool flag);						//��װ
	bool	UnEquipItem(int idx, CFighter* role);									//жװ

	//ͬ����client
	void	SyncBagItemsInfo();														//ͬ�������еĵ���
	void	SyncEquipItemsInfo(CPlayer* toPlayer = NULL);							//ͬ��Ӣ�����ϵĵ���

	//ȡ�����е���
	int		GetItemCountByTemplate(int templateid);									//ͨ��ģ���ȡ��������
	int		GetItemCountByType(int type);											//ͨ�����ͻ�ȡ��������
	CItem*	GetItem(ItemID itemid);													//��ð����еĵ���
	CItem*	GetItemByTemplate(int templateid);										//ͨ��ģ���õ���
	CItem*	GetItemByType(int type);												//ͨ�����ͻ�õ���
	int		GetItemCountById(int templateId);										//����ģ��IDȡ�õ�������
	
	//����ID
	ItemID	MakeItemID();															//��������ʵ��ID

	//��������
	int CanSpareSeat(int itemTempId, int itemNum);									//�ж��Ƿ���ݵ���һ�������ĵ���
	inline int GetSpareSeat() {	return GetMaxCapacity() - m_ItemList.Count(); }		//��ȡ����ʣ��λ������

protected:
	bool	_AddItem(CItem* item, bool client = false, bool data = false);			//�������
	bool	_RemoveItem(CItem* item);												//�Ƴ�����
	bool	_StackItem(CItem* item);												//�ѵ�����

	bool	_Equip(CItem* item, bool client = false, bool data = false);
	bool	_UnEquip(int idx, ItemID &oldId, bool client = false, bool data = false);

	bool	_GetEquipPostion(CItem* item, int& idx);								//��ȡ��װ��λ��
	bool    _EquipItemAttrib(CItem* item, bool client = false, bool data = false);	//��װ������Լ���
	bool	_UnEquipItemAttrib(CItem* item, bool client = false, bool data = false);//жװ������Լ���

	inline void	_SetItemFactID(ItemID id) {m_FactID = id > m_FactID ? id : m_FactID;}

protected:
	bool	_HandlePacket_UseItem(PACKET_COMMAND* pack);
	bool	_HandlePacket_SellItem(PACKET_COMMAND* pack);
	bool	_HandlePacket_EquipItem(PACKET_COMMAND* pack);
	bool	_HandlePacket_UnequipItem(PACKET_COMMAND* pack);

private:
	void	SendResultFlag(int iflag, int i = 0, int64 l1 = 0, int64 l2 = 0);

	//���䱳��
	int		GetExpandBagCost(int expandCnt);	//���䱳�����Ľ��
	int		GetMaxCapacity();					//��ñ����������

protected:
	CFighter* m_parent;
	ItemID	m_FactID;
	CUtlMap<ItemID, CItem*>	m_ItemList;			//������Ʒ����
	CUtlLinkedList<ItemID>	m_StackList;		//�ѵ���Ʒ����
	CItem*	m_EquipList[Equip_Position_End];	//װ������Ʒ����

};
