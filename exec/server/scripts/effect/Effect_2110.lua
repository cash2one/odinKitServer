--Ⱥ��������ǰ����ֵԽ������˺�Խ�ߣ�����������������ǰ����/(2.5*��������)Ϊϵ�����˺�
Effect_2110 = {}
Effect_2110.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	local hits = 0;

	local factor = GetMemberAttribInt(2) / (GetMemberAttribInt(16) * 2.5);

	--ѭ����ÿ��Ŀ������˺�����
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end

			GainMemberHp(v, -factor * damage);
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end