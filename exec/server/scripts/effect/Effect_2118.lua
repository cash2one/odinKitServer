--����֮��   ���壬�������30%��������һ�������ѷ�Ӣ��
Effect_2118 = {}
Effect_2118.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡ����Ŀ��
	local hits = 0;
	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, hits);
	if (damage > 0) then
		hits = hits + 1;
	end
		
	MemberRevive(attackerIdx, 30);

	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end