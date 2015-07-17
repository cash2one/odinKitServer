--�������� ����������ʿ���ĵз�Ŀ�꣬��ʹ��ʿ������x
Effect_2009 = {}
Effect_2009.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	local tarRoles = Effect_2009.GetMoraleMembers(tarIdx);

	local hits = 0;
	for k, v in pairs(tarRoles) do
		if (v >= 0) then
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
				ChangeMemberAttribInt(v, 1, -value);
			end
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end

Effect_2009.GetMoraleMembers = function(tarIdx)
	
	local tableMembers = {};

	--��һ��һ���ǵ���ʱѡ�е�Ŀ��
	table.insert(tableMembers, tarIdx);

	local minidx, maxidx;
	if(tarIdx >= 0 and tarIdx < 9) then
		minidx = 0;
		maxidx = 8;
	elseif(tarIdx >= 9 and tarIdx < 18) then
		minidx = 9;
		maxidx = 17;
	end

	for i = minidx, maxidx do
		if(IsFighter(i) and i ~= tarIdx and not IsFighterDead(i) and GetMemberAttribInt(i, 1) > 0) then
			table.insert(tableMembers, i);			
		end
	end

	return tableMembers;
end
