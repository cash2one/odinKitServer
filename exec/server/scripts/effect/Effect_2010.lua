--�������� �Ը���100%�๥��һ�Σ� �ͷ�ʱ��20%����
Effect_2010 = {}
Effect_2010.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	ChangeMemberAttribInt(attackerIdx, 63, 20);

	local hits = 0;
	local damage1 = CombatOnAttack(attackerIdx, skill, tarIdx, hits);

	--����ŭ��
	if (damage1 > 0) then
		hits = hits + 1;

		AddTargetTeamAnger(attackerIdx);
	end

	local damage2 = 0;
	if(IsFighterDead(tarIdx) == false) then
		AddAction();
		damage2 = CombatOnAttack(attackerIdx, skill, tarIdx, hits);
	end

	--����ŭ��
	if (damage2 > 0) then
		AddTargetTeamAnger(attackerIdx);
	end

	ChangeMemberAttribInt(attackerIdx, 63, -20);
end

