--�����Է�ȫ��Ŀ��,�����������,���12%
Effect_2101 = {}
Effect_2101.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--��ȡȫ������Ŀ��
	local targets = {GetTargetTeamAllMember(attackerIdx, tarIdx)};

	local hits = 0;
	local attDamage = GetMemberAttribInt(attackerIdx, 21);  --21��Role_Attrib_StuntDamage
	local attDefense = GetMemberAttribInt(attackerIdx, 22); --22��Role_Attrib_StuntDefense
	--ѭ����ÿ��Ŀ������˺�����
	for k, v in pairs(targets) do
		if (v >= 0) then
			local defDefense = GetMemberAttribInt(v, 22);
			local maxAddons = 12;
			if (defDefense > 0) then 
				maxAddons = 100 * (attDefense - defDefense) / defDefense;
				if (maxAddons > 12) then 
					maxAddons = 12;
				elseif (maxAddons < 0) then
					maxAddons = 0;
				end
			end
			
			local addition = attDamage * maxAddons / 100;
			ChangeMemberAttribInt(attackerIdx, 21, addition);
			
			local damage = CombatOnAttack(attackerIdx, skill, v, hits);
			if (damage > 0) then
				hits = hits + 1;
			end
			
			ChangeMemberAttribInt(attackerIdx, 21, -addition);
		end
	end
	
	--����ŭ��
	if (hits > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
	
end
