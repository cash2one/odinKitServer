--�ı�ս���е���������
Effect_1001 = {}
Effect_1001.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	ChangeMemberAttribInt(attackerIdx, attr, value)

end

Effect_1001.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	ChangeMemberAttribInt(attackerIdx, attr, -value)

end

