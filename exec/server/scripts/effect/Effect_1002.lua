--�ı�ս���е�Ŀ������
Effect_1002 = {}
Effect_1002.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	ChangeMemberAttribInt(tarIdx, attr, value)

end

Effect_1002.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	ChangeMemberAttribInt(tarIdx, attr, -value)

end

