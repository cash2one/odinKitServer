--Ⱥ������ÿ��Ŀ��20%����ʹ��ʿ�����㡣
Effect_2205 = {}
Effect_2205.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

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

			local ranVal = RandomInt(1, 100);
			if(ranVal <= value) then
				ChangeMemberAttribInt(v, 1, -GetMemberAttribInt(v, 1));
			end
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
