--���Լ���Ч�������Ŀ���Ǵ����ͣ��˺�����/����x%
Effect_1022 = {}
Effect_1022.OnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 152, value);
	else
		ChangePercent(role, 156, -value);
	end
end

Effect_1022.UnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 152, -value);
	else
		ChangePercent(role, 156, value);
	end
end
