--���Լ���Ч�������Ŀ������ͨ���ͣ��˺�����/����x%
Effect_1021 = {}
Effect_1021.OnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 151, value);
	else
		ChangePercent(role, 155, -value);
	end
end

Effect_1021.UnEffect = function(role, attr, value)

	if(value > 0) then
		ChangePercent(role, 151, -value);
	else
		ChangePercent(role, 155, value);
	end
end
