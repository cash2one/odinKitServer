--���Լ���Ч���������Կ�����ɵ��˺�����/����x%
Effect_1026 = {}
Effect_1026.OnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 144, value);
	else
		ChangePercent(role, 148, -value);
	end
end

Effect_1026.UnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 144, -value);
	else
		ChangePercent(role, 148, value);
	end
end
