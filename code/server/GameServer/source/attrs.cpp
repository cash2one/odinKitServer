#include "attrs.h"
#include "attrs_defines.h"
#include "Log.h"

namespace attrs {

	bool init_all_attrs()
	{
		init_attrs(player_attrs, sizeof(player_attrs)/sizeof(CAttr), player_attr_type_table, player_attr_name_table);

		return true;
	}

	bool init_attrs(const CAttr _attr_array[], uint32 _array_len, CUtlMap<int, int>& _attr_type_table, CUtlMap<CUtlSymbol, int>& _attr_name_table)
	{
		SetDefLessFunc(_attr_type_table);
		SetDefLessFunc(_attr_name_table);

		for (uint32 i = 0; i < _array_len; i++)
		{
			int keyIndex = _attr_type_table.Find(_attr_array[i].attr_type);
			if (_attr_type_table.IsValidIndex(keyIndex))
			{
				Log.Error("[init_attrs] Init Attr Key Error:%d", _attr_array[i].attr_type);
				return false;
			}
			_attr_type_table.Insert(_attr_array[i].attr_type, i);

			CUtlSymbol symbol(_attr_array[i].attr_name.c_str());
			int nameIndex = _attr_name_table.Find(symbol);
			if (_attr_name_table.IsValidIndex(nameIndex))
			{
				Log.Error("[init_attrs] Init Attr Name Error:%s", _attr_array[i].attr_name.c_str());
				return false;
			}
			_attr_name_table.Insert(symbol, _attr_array[i].attr_type);
		}
		return true;
	}

	int get_attr_type(std::string name, CUtlMap<CUtlSymbol, int>& _attr_name_table)
	{
		CUtlSymbol symbol(name.c_str());
		int index = _attr_name_table.Find(symbol);
		if (!_attr_name_table.IsValidIndex(index)) {
			return 0;
		}
		return _attr_name_table[index];
	}

	std::string get_attr_name(int type, const CAttr _attr_array[], CUtlMap<int, int>& _attr_type_table)
	{
		int index = _attr_type_table.Find(type);
		if (!_attr_type_table.IsValidIndex(index)) {
			return "";
		}
		return _attr_array[_attr_type_table[index]].attr_name;
	}

}