--����Ŀ�꼰�����һ��
Effect_2002 = {}
Effect_2002.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	--��ȡȫ������Ŀ��
	local targetRole = CommonFuncs.GetRowTargets(tarIdx);

	local hits = 0;
	--ѭ����ÿ��Ŀ������˺�����
	for k, v in pairs(targetRole) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
