--�����;���Ч����������ʿ����Ϊx(���Գ���������������)����ɵ��˺�Ϊ�����˺�+��ͨ�˺�
Effect_1042 = {}
Effect_1042.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	local curMoral = GetMemberAttribInt(attackerIdx, 1);
	ChangeMemberAttribInt(attackerIdx, 1, value - curMoral);
	SetBitFlag(attackerIdx, 138, 1);
	SetBitFlag(attackerIdx, 161, 1);
end