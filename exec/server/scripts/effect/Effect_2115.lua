--Ⱥ�������У���ʹĿ�꽵��10%���з���������2�غ�
Effect_2115 = {}
Effect_2115.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡһ�е���
	local targets = CommonFuncs.GetRowTargets(tarIdx);
	
	local hits = 0;
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
				--����һ��buffer
				AddCommbatBuff(v, value, false);
			end
		end
	end
	
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
