--Change��ս���еı���int����
Effect_1009 = {}
Effect_1009.OnEffect = function(role, attr, value)

	ChangeRoleFieldInt(role, attr, value)
	
end

Effect_1009.UnEffect = function(role, attr, value)

	ChangeRoleFieldInt(role, attr, -value)
	
end
