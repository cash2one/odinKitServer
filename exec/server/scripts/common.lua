--���幫������������

Vocation_Berserker = 1	--սʿ
Vocation_Mage = 2				--��ʦ
Vocation_Robbers = 3		--����


--���͸����������
FORMAT_TILE_XY = 3
FORMAT_TILE_MAX = FORMAT_TILE_XY * FORMAT_TILE_XY

--�������ֵ
PLAYER_ACTION_MAX = 150

--Role Attribute
Role_Attrib_PhysiDamagePercent = 68
Role_Attrib_PhysiDefensePercent = 69
Role_Attrib_MagicDamagePercent = 70
Role_Attrib_MagicDefensePercent = 71
Role_Attrib_StuntDamagePercent = 72
Role_Attrib_StuntDefensePercent = 73
Role_Attrib_Vocation = 81
Role_Attrib_Level = 85
Role_Attrib_Stamina = 90
Role_Attrib_GoldCoin = 91
Role_Attrib_SilverCoin = 92
Role_Attrib_ExpAddition = 125
Role_Attrib_MeritAddition = 126
Role_Attrib_SilverAddition = 127
Role_Attrib_StateExpAddition = 128
Role_Attrib_Vip = 158
Role_Attrib_BuyStamina = 501
Role_Attrib_BossInspireFree = 502
Role_Attrib_AdvancedTrain = 504
Role_Attrib_SignInFree = 505
Role_Attrib_SkillResetFree = 506
Role_Attrib_LogoutTime = 1004

EARENA_DATA_ARENASCORE 		= 0
EARENA_DATA_CHALLENGENUM 	= 1
EARENA_DATA_BUYCHALLENGENUM = 2
EARENA_DATA_CHANGENUM 		= 3
EARENA_DATA_CURSTAGE		= 4
EARENA_DATA_LASTREFRESHTIME	= 5
EARENA_DATA_KNIGHTID		= 6


--���ú�����
CommonFuncs = {}

--��ȡһ��Ŀ��
CommonFuncs.GetColumnTargets = function(tarIdx)
	
	local targetRole = {};
	--��һ��һ���ǵ���ʱѡ�е�Ŀ��
	table.insert(targetRole, tarIdx);

	local posx = tarIdx / FORMAT_TILE_XY;
	local posy = tarIdx % FORMAT_TILE_XY;
	
	--��������һ��
	for i=0, 2 do
		local idx = posx * FORMAT_TILE_XY + i;
		if IsFighter(idx) and not IsFighterDead(idx) and idx ~= tarIdx then
			table.insert(targetRole, idx);
		end
	end
	
	return targetRole;
end

--��ȡһ��Ŀ��
CommonFuncs.GetRowTargets = function(tarIdx)

	local targetRole = {};
	--��һ��һ���ǵ���ʱѡ�е�Ŀ��
	table.insert(targetRole, tarIdx);
	
	local posx = tarIdx / FORMAT_TILE_XY;
	local posy = tarIdx % FORMAT_TILE_XY;
	
	local min = 0;
	local max = 2;
	if( posx > max ) then
		min = 3;	max = 5;
	end
	
	--��������һ��
	for i=min, max do
		local idx = i * FORMAT_TILE_XY + posy;
		if IsFighter(idx) and not IsFighterDead(idx) and idx ~= tarIdx then
			table.insert(targetRole, idx);
		end
	end
	
	return targetRole;
end

--��ȡ���н���(ʮ��)Ŀ��
CommonFuncs.GetCrossTargets = function(tarIdx)

	local targetRole = {};
	
	local posx = tarIdx / FORMAT_TILE_XY;
	local posy = tarIdx % FORMAT_TILE_XY;
	
	local min = 0;
	local max = 2;
	if( posx > max ) then
		min = 3;	max = 5;
	end
	
	--�����������Ŀ��
	table.insert(targetRole, tarIdx);
	
	--��Ŀ��Ϊ���ĵ�ʮ�ֵ�λ
	for x=min, max do
		local idx = x * FORMAT_TILE_XY + posy;
		if tarIdx ~= idx then
			if IsFighter(idx) and not IsFighterDead(idx) then
				table.insert(targetRole, idx);
			end
		end
	end
	
	for y=0, 2 do
		local idx = posx * FORMAT_TILE_XY + y;
		if tarIdx ~= idx then
			if IsFighter(idx) and not IsFighterDead(idx) then
				table.insert(targetRole, idx);
			end
		end
	end
	
	return targetRole;
end

