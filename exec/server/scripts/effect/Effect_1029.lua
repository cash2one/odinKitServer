--����ʹ��Ч�� ��ս���а��ٷֱ�ͬʱ�ı���Ѫ���ֵ�͵�ǰ��Ѫֵ + x%
Effect_1029 = {}
Effect_1029.OnEffect = function(role, attr, value)

	local ival = GetRoleFieldInt(role, 2);
	local iaddval = value * ival / 100;

	ChangeRoleFieldInt(role, 2, iaddval);
	ChangeRoleFieldInt(role, 16, iaddval);
end

Effect_1029.UnEffect = function(role, attr, value)

	local ival = GetRoleFieldInt(role, 2);
	local iaddval = value * ival / (100 + value);

	ChangeRoleFieldInt(role, 2, -iaddval);
	ChangeRoleFieldInt(role, 16, -iaddval);
end

