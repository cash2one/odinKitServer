--ȫ�幥��������Ŀ�������
Effect_2125 = {}
Effect_2125.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	
	local hits = 0;
	--ѭ����������
	for k, v in pairs(targets) do
		if (v >= 0) then
			--��Ŀ��ķ�����Ϊ0�󣬽���ս������
			local x = GetMemberAttribInt(v , 18);
			local y = GetMemberAttribInt(v , 20);
			local z = GetMemberAttribInt(v , 22);

			--��Ŀ�������ħ����������������Ϊ0
			ChangeMemberAttribInt(v, 18, -x);
			ChangeMemberAttribInt(v, 20, -y);
			ChangeMemberAttribInt(v, 22, -z);

			--����ս��
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end

			--ս�������󣬵��˵ķ���ֵ�ع�
			ChangeMemberAttribInt(v, 18, x);
			ChangeMemberAttribInt(v, 20, y);
			ChangeMemberAttribInt(v, 22, z);
		end
	end

	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
