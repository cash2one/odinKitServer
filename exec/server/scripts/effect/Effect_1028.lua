--����ʹ��Ч�� ��ս����ͬʱ�ı���Ѫ���ֵ�͵�ǰ��Ѫֵ + x
Effect_1028 = {}
Effect_1028.OnEffect = function(role, attr, value)

	ChangeRoleFieldInt(role, 2, value);
	ChangeRoleFieldInt(role, 16, value);
end

Effect_1028.UnEffect = function(role, attr, value)

	ChangeRoleFieldInt(role, 2, -value);
	ChangeRoleFieldInt(role, 16, -value);
end
