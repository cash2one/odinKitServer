--Ⱥ��������������������������Ϊ15%�����Ĺ̶��˺�
Effect_2123 = {}
Effect_2123.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	
	local hits = 0;
	local extraHp = GetMemberAttribInt(attackerIdx , 16) * 0.15;
	--ѭ����������
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;

				ChangeMemberAttribInt(v, 2, -extraHp);
			end
		end
	end

	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
