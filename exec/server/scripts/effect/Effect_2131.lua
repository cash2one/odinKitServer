--���壬65%ʹĿ����ҹ����伺��Ŀ��(���޼���Ŀ�����������)������1�غ�
Effect_2131 = {}
Effect_2131.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local hits = 0;
	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, hits);
	if (damage > 0) then
		hits = hits + 1;
	end
	
	local x = RandomInt(1, 100);
	if x <= 65 then
		if GetCombatFlag(4) == 0 then
			AddCommbatBuff(tarIdx, value, false);
		end
	
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
