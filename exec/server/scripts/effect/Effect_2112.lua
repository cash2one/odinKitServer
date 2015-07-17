--�������ез�Ŀ���Ҷ�������൱����������ʧ����ֵ���˺���
Effect_2112 = {}
Effect_2112.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ʧ������ֵ
	local maxhp = GetMemberAttribInt(attackerIdx , 16);
	local hp =  GetMemberAttribInt(attackerIdx , 2);
	local _hp = maxhp - hp;

	local hits = 0;
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
				--������ɵ��˺�:�����Ѿ���ʧ������ֵ
				GainMemberHp(v, -_hp);
			end
		end
	end
	
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
