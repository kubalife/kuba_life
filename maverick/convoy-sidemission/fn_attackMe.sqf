scriptName "fn_attackMe";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: fn_attackMe.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "fn_attackMe.sqf"

_time = getNumber(missionConfigFile >> "Maverick_ConvoySidemission" >> "Config" >> "MakePlayersHostileFor");
hint format["ACHTUNG: Du hast den Konvoi angegriffen. Du bist jetzt feindlich für %1 Minuten.",_time / 60];
mav_convoy_attackme_scriptthread = _time spawn {
	while {rating player > -100000} do {
		player addRating -50000000000;
	};
	sleep _this;
	while {rating player < 1000000} do {
		player addRating 50000000000;
	};
	hint "Du bist nicht mehr feindlich gesinnt";
	mav_convoy_attackme_scriptthread = nil;
};

player addEventHandler ["Killed",{
	diag_log "Unit has died, not hostile to convoy anymore";
	if (!isNil "mav_convoy_attackme_scriptthread") then {
		terminate mav_convoy_attackme_scriptthread;
		mav_convoy_attackme_scriptthread = nil;
	};
}];