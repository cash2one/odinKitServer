--���Լ���Ч���������Կ�����ɵ��˺�����/����x%
Effect_1025 = {}
Effect_1025.OnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 143, value);
	else
		ChangePercent(role, 147, -value);
	end
end

Effect_1025.UnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 143, -value);
	else
		ChangePercent(role, 147, value);
	end
end
