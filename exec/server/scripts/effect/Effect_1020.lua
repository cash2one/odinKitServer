--ս���а��ٷֱȸı�Ŀ���Int����
Effect_1020 = {}
Effect_1020.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local ival = GetMemberAttribInt(tarIdx, attr);
	ival = value * ival / 100;
	ChangeMemberAttribInt(tarIdx, attr, ival);
	
end

Effect_1020.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local ival = GetMemberAttribInt(tarIdx, attr);
	ival = value * ival / (100 + value);
	ChangeMemberAttribInt(tarIdx, attr, -ival);
	
end
