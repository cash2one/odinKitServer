--�ܵ����˺�=��ɵ��˺�*0.3����С�ڵ�ǰ�Լ�������50%
Effect_2005 = {}
Effect_2005.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local damage = CombatOnAttack(attackerIdx, skill, tarIdx, 0);
	local hp = GetMemberAttribInt(attackerIdx, 2);

	damage = damage * 0.3;
	hp = hp / 2;
	if(damage > hp) then
		damage = hp;
	end

	GainMemberHp(attackerIdx, -damage);
	
	if(damage > 0) then
		AddTargetTeamAnger(attackerIdx);
	end
end
