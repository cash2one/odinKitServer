--Ⱥ�����ͷ�ʱ��������20%��λ�ƻ�����
Effect_2136 = {}
Effect_2136.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	
	ChangeMemberAttribInt(attackerIdx, 139, 20);

	local hits = 0;
	--ѭ����������
	for k, v in pairs(targets) do
		if (v >= 0) then		
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end
		end
	end

	ChangeMemberAttribInt(attackerIdx, 139, -20);

	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end