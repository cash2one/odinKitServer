--���壬��Ѫ(��������˺���50%)������������񵲸���20%������2�غ�
Effect_2105 = {}
Effect_2105.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	local hits = 0;
	local damage = CombatOnAttack(attackerIdx , skill , tarIdx, hits);
	if(damage > 0) then
		hits = hits + 1;
		--��Ѫ
		GainMemberHp(attackerIdx, damage / 2);
	end
	
	AddCommbatBuff(attackerIdx , value , true);
	ProcMemberBuff(attackerIdx , value , true);

	if( hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
