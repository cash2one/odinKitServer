--�ı�ս���е���������+���������Զ�������*n%
Effect_1005 = {}
Effect_1005.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local num = GetMaleNumInTeam(attackerIdx);
	if( num > 0 ) then
		ChangeMemberAttribInt(attackerIdx, attr, num * value);
	end
	
end

Effect_1005.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local num = GetMaleNumInTeam(attackerIdx);
	if( num > 0 ) then
		ChangeMemberAttribInt(attackerIdx, attr, -num * value);
	end
	
end
