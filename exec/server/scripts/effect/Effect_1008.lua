--Set��ս���еı���int64����
Effect_1008 = {}
Effect_1008.OnEffect = function(role, attr, value)

	SetRoleFieldI64(role, attr, value)
	
end

Effect_1008.UnEffect = function(role, attr, value)

	SetRoleFieldI64(role, attr, -value)
	
end