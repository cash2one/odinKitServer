--�����з�Ŀ������һ�е�����Ŀ�겢����������һ������2�غϲ��ܸ���Ч����Ч����
Effect_2207 = {}
Effect_2207.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡһ��Ŀ��
	local targets = CommonFuncs.GetColumnTargets(tarIdx);
	
	local hits = 0;
	--ѭ����ÿ��Ŀ������˺�����
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end
		end
	end

	AddCommbatBuff(attackerIdx, value, true);
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
