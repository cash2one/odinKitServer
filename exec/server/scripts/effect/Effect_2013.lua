--�������� �����󲻼���ʿ�������Գ���������������
Effect_2013 = {}
Effect_2013.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, 0);
	
	if(damage > 0) then
		AddTargetTeamAnger(attackerIdx);
	end

	SetBitFlag(attackerIdx, 138, 1);
	SetCheckAttr(attackerIdx, 1);
end

