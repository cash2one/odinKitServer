--�ı�һЩ�����̵ĸ�������
Effect_1043 = {}
Effect_1043.OnEffect = function(role, attr, value)
	
	ChangePercent(role, attr, value);
end

Effect_1043.UnEffect = function(role, attr, value)
	
	ChangePercent(role, attr, -value);
end
