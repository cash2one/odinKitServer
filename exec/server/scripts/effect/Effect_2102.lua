--���壬���������ܵ��˺�50%����2�غ�
Effect_2102 = {}
Effect_2102.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local hits = 0;
	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, hits);
	if (damage > 0) then
		hits = hits + 1;
	end
	
	AddCommbatBuff(attackerIdx, value, true);
	ProcMemberBuff(attackerIdx, value, true);
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
