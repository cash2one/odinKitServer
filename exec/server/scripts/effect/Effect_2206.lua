--�������ез�Ŀ�겢����������һ�����ܣ��ڻ�������ǰ�����˺�������Ѫ��Ϊ������Ѫ����20%��
Effect_2206 = {}
Effect_2206.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	
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

	local addHp = GetMemberAttribInt(attackerIdx, 16) * value / 100;
	GainMemberHp(attackerIdx, addHp);
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
