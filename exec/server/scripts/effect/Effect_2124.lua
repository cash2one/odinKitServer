--Ⱥ�����ͷ�ʱʹ�������������ܵ�Ŀ�걻���
Effect_2124 = {}
Effect_2124.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	local targets = { GetTargetTeamAllMember(attackerIdx, tarIdx) };
	local hits = 0;
	for k, v in pairs(targets) do
	    if(v >= 0) then
		local damage = CombatOnAttack(attackerIdx, skill, v, hits);
		if damage > 0 then
			hits = hits + 1;
			--�ж�����
			--InterruptChant(attackerIdx , v);
		end
	    end
	end
	--����ŭ��
	if hits > 0 then
		AddTargetTeamAnger(attackerIdx);
	end
end
