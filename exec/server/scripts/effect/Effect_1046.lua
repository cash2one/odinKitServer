--ʹ�Է��������ң������ѷ�Ŀ��
Effect_1046 = {}
Effect_1046.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetMemberConfusion(tarIdx, true);
	
end

Effect_1046.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetMemberConfusion(tarIdx, false);
	
end
