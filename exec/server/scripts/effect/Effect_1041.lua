--���Լ���Ч������������2����2�����ϼ���ӵ�иü��ܵ���ЧĿ��ʱ��ÿ��Ŀ���ܵ����˺����ָ������ѷ�Ŀ��
Effect_1041 = {}
Effect_1041.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	SetBitFlag(attackerIdx, 159, 1);
end

Effect_1041.UnEffect = function(attackerIdx, skill, attr, value, tarIdx)
	
	SetBitFlag(attackerIdx, 159, 0);
end
