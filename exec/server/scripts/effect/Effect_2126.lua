--�����Է�ȫ��Ŀ��,20%����ʹ����Ŀ��ѣ�γ���2�غ�
Effect_2126 = {}
Effect_2126.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};
	
	local hits = 0;
	for k, v in pairs(targets) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			
				local per = RandomInt(1, 100);
				if (per <= 20) then
					AddCommbatBuff(v, value, false);
				end
				
			end
		end
	end
	
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
