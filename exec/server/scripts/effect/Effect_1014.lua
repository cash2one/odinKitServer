--��������buffЧ���������˺�����x%
Effect_1014 = {}
Effect_1014.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--102���﹥���˰ٷֱ�
	ChangeMemberAttribInt(attackerIdx, 102, value);
	ChangeMemberAttribInt(attackerIdx, 105, value);
	ChangeMemberAttribInt(attackerIdx, 108, value);
	
end

Effect_1014.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--102���﹥���˰ٷֱ�
	ChangeMemberAttribInt(attackerIdx, 102, -value);
	ChangeMemberAttribInt(attackerIdx, 105, -value);
	ChangeMemberAttribInt(attackerIdx, 108, -value);

end
