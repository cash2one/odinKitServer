--buffer ʹ����10%���з���������2�غ�
Effect_1044 = {}
Effect_1044.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	--���з���:�������������ħ�����������ܷ���
	ChangeMemberAttribInt(attackerIdx, 69, value);
	ChangeMemberAttribInt(attackerIdx, 71, value);
	ChangeMemberAttribInt(attackerIdx, 73, value);
	
end

Effect_1044.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	ChangeMemberAttribInt(attackerIdx, 69, -value);
	ChangeMemberAttribInt(attackerIdx, 71, -value);
	ChangeMemberAttribInt(attackerIdx, 73, -value);
	
end
