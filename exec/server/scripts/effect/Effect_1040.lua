--ս���б�������/����x% ��ɵ��˺�(=1)/�ܵ����˺�(=2)/����(=3)/����(=4)
Effect_1040 = {}
Effect_1040.OnEffect = function(attackerIdx, skill, attr, value, tarIdx)

	if(value == 0) then
		return;
	end

	local attrib;
	local leap;
	if(attr == 1) then
		attrib = 101;
		leap = 3;
	elseif(attr == 2) then
		attrib = 102;
		leap = 3;
		value = -value;
	elseif(attr == 3) then
		attrib = 68;
		leap = 2;
	elseif(attr == 4) then
		attrib = 69;
		leap = 2;
	else
		return;
	end

	ChangeMemberAttribInt(attackerIdx, attrib, value);
	ChangeMemberAttribInt(attackerIdx, attrib + leap, value);
	ChangeMemberAttribInt(attackerIdx, attrib + leap + leap, value);
end

