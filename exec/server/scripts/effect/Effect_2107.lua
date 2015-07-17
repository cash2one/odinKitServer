--���壬�ͷ�ʱʹ�����ѷ�Ŀ����ʿ��������������20%���ܳ���2�غ�
Effect_2107 = {}
Effect_2107.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local hits = 0;
	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, hits);

	--���ö��������н�ɫ��ʿ��
	Effect_2107.AllMembersFullMorale(attackerIdx);

	if (damage > 0) then
		hits = hits + 1;
		--Ϊ�Լ�����buferr
		AddCommbatBuff(attackerIdx, attackerIdx, value);
		ProcMemberBuff(attackerIdx, attackerIdx, value);
	end
	
	if(hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end

Effect_2107.AllMembersFullMorale = function(attackerIdx)

	local minidx, maxidx;
	if(attackerIdx >= 0 and attackerIdx < 9) then
		minidx = 0;
		maxidx = 8;
	elseif(attackerIdx >= 9 and attackerIdx < 18) then
		minidx = 9;
		maxidx = 17;
	end

	for i = minidx, maxidx do
		if(IsFighter(i) and not IsFighterDead(i)) then
			ChangeMemberAttribInt(i, 1, 100 - GetMemberAttribInt(i, 1));
		end
	end
end

