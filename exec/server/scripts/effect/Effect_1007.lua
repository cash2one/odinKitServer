--Set��ս���еı���int����
Effect_1007 = {}
Effect_1007.OnEffect = function(role, attr, value)

	SetRoleFieldInt(role, attr, value, false, false)
	
end

Effect_1007.UnEffect = function(role, attr, value)

	SetRoleFieldInt(role, attr, -value, false, false)
	
end
