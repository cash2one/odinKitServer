--���壬�ͷ�ʱ����15%�������ʣ�������ʱʹĿ����ҹ����伺��Ŀ�꣬����1�غ�
Effect_2111 = {}
Effect_2111.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	ChangeMemberAttribInt(attackerIdx, 63, 15);
	
	local hits = 0;
	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, hits);
	if (damage > 0) then
		hits = hits + 1;
	end

	ChangeMemberAttribInt(attackerIdx, 63, -15);
	
	--����?
	if GetCombatFlag(8) ~= 0 then
		--����һ��buffer����������
		AddCommbatBuff(tarIdx, value, false);
	end
	
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
