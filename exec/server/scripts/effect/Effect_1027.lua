--���Լ���Ч���������Կ�����ɵ��˺�����/����x%
Effect_1027 = {}
Effect_1027.OnEffect = function(role, attr, value)
	
	if(value > 0) then
		ChangePercent(role, 145, value);
	else
		ChangePercent(role, 149, -value);
	end
end

Effect_1027.UnEffect = function(role, attr, value)
	
	if(value > 0) then
		ChangePercent(role, 145, -value);
	else
		ChangePercent(role, 149, value);
	end
end
