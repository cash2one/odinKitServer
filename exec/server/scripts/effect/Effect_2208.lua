--�����з�Ŀ������һ�е�����Ŀ�겢�ظ�������˺���20%��������Ѫ��
Effect_2208 = {}
Effect_2208.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡһ��Ŀ��
	local targets = CommonFuncs.GetRowTargets(tarIdx);
	
	local totalDamage = 0;
	local hits = 0;
	--ѭ����ÿ��Ŀ������˺�����
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
				totalDamage = totalDamage + damage;
			end
		end
	end

	local addHp = totalDamage * value / 100;
	GainMemberHp(attackerIdx, addHp);
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
