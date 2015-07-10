// ��ȡCSV��ʽ���ļ�

#ifndef SHARED_CSVPARSER_H
#define SHARED_CSVPARSER_H

#include <stdio.h>
#include "platform.h"
#include "utlvector.h"


class CCSVParser
{
public:
	CCSVParser();
	~CCSVParser();

public:
	// -��ȡ�ļ�
	bool Load(const char* lpName, const char* lpPathID=0);

	// -�ͷ���Դ
	void Release();

	inline int	Line()	{return m_nLine;}
	inline int	Column(){return m_nColumn;}

	inline bool GetAttribute(int nLine,int nColum,int &nData);
	inline bool GetAttribute(int nLine,int nColum,int64 &iData);
	inline bool GetAttribute(int nLine,int nColum,char* szData,int maxLen);

protected:
	bool	Parser(char* buff, int size);

protected:
	int		m_nLine;				// ��
	int		m_nColumn;				// ��
	char*	m_fileText;
	CUtlVector<char*>	m_ElementTable;	//����ڵ��Vector

};


inline bool CCSVParser::GetAttribute(int nLine,int nColum,int& nData)
{	
	int nIndex = (nLine*m_nColumn)+nColum+nLine;
	if(nIndex<m_ElementTable.Count())
	{			
		sscanf(m_ElementTable.Element(nIndex),"%d",&nData);		
		return true;
	} 
	return false;
}

inline bool CCSVParser::GetAttribute(int nLine,int nColum,int64 &iData)
{
	int nIndex = (nLine*m_nColumn)+nColum+nLine;
	if(nIndex<m_ElementTable.Count())
	{
		sscanf(m_ElementTable.Element(nIndex), INT64_FMT, &iData);
		return true;
	}
	return false;
}

inline bool CCSVParser::GetAttribute(int nLine,int nColum,char* szData,int maxLen)
{
	int nIndex = (nLine*m_nColumn)+nColum+nLine;
	if (nIndex<m_ElementTable.Count() && strlen(m_ElementTable.Element(nIndex)) < maxLen - 1)
	{
		sprintf(szData, "%s", m_ElementTable.Element(nIndex));
		return true;
	}
	return false;
}

#endif	//SHARED_CSVPARSER_H
