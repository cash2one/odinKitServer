--ս������������һЩ״̬��־(�Ƿ��ܵ�buff/debuff���Ƿ�����ʿ�����Ƿ��޵�״̬...)
Effect_1037 = {}
Effect_1037.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetBitFlag(attackerIdx, attr, 1);
	
end

Effect_1037.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	SetBitFlag(attackerIdx, attr, 0);
	
end

