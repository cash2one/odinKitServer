--��ͨ����ʱ��x%���ʱ��Ⱥ��(ȫ��/ʮ�ֹ�/�й�/�й�)
Effect_1035 = {}
Effect_1035.OnEffect = function(role, attr, value)

	ChangePercent(role, attr, value);
	
end

Effect_1035.UnEffect = function(role, attr, value)

	ChangePercent(role, attr, -value);
	
end
