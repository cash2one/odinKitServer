Server = {}

Server.Startup = function()

	--ȡ��ǰʱ��
	local secNow, minNow, hourNow, mdayNow, monNow, yearNow, wdayNow = GetNowTime();
	
	--����սʱ��
	if( wdayNow ~= 1 or hourNow >= 10 ) then
		BattleStartup();
	end

end