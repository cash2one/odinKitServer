--ս��������Ŀ��ѣ��״̬
Effect_1016 = {}
Effect_1016.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetMemberDizzy(tarIdx, true);		
end

Effect_1016.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetMemberDizzy(tarIdx, false);
end
