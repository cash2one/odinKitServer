--Ⱥ���������������(��ѡ��Ŀ�꣬���ܹ���������Ŀ�꣬Ҳ������������ͬһĿ�꼴ʹ��һ��ʱ�Ѿ�����)
Effect_2137 = {}
Effect_2137.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};

	local hits = 0;
	local ran = 0;
	local damage = 0;
	--�����������
	for i = 1, 3 do
		ran = RandomInt(1, table.getn(targets));
		local defenderIdx = targets[ran];
		if(defenderIdx >= 0 and IsFighterDead(defenderIdx) == false) then
			damage = CombatOnAttack(attackerIdx, skill, defenderIdx, hits);
			if(damage > 0) then
				hits = hits + 1;
			end
		end
	end

	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
