--Ⱥ��������˺�Ϊ�����˺�+�չ�ħ���˺�
Effect_2122 = {}
Effect_2122.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	
	--��ȡħ�����˺�
	local magicDamage = GetMemberAttribInt(attackerIdx , 19);
	--�����˺� ���� ����һ��ħ�����˺�
	ChangeMemberAttribInt(attackerIdx, 21, magicDamage);

	--ѭ����������
	local hits = 0;
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end
		end
	end

	ChangeMemberAttribInt(attackerIdx, 21, -magicDamage);

	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
