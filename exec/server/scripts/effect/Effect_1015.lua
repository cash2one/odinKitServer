--ս������������ѣ��״̬
Effect_1015 = {}
Effect_1015.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetMemberDizzy(attackerIdx, true);
end

Effect_1015.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetMemberDizzy(attackerIdx, false);
end
