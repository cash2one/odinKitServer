--�������ез�Ŀ�겢ʹ��ʿ������20(���ܵ���0)��
Effect_2209 = {}
Effect_2209.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

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

			local curMorle = GetMemberAttribInt(v, 1);
			if(value > curMorle) then
				value = curMorle
			end
			ChangeMemberAttribInt(v, 1, -value);
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
