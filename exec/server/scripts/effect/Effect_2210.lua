--�������ез�Ŀ�겢����20%����ʹ���Ĭһ�غ�(�޷�ʹ�ü���)��
Effect_2210 = {}
Effect_2210.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

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

			local ranNum = RandomInt(1, 100);
			if(ranNum <= 20) then
				AddCommbatBuff(v, value, false);
			end
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
