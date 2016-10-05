StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
//[] execVM "Custom\asddfg5\s45vbn76.sqf";
//[] execVM "Custom\gas\gasmask.sqf";
//[] execVM "Custom\gas\teargasGL.sqf";
//[] execVM "Custom\lift\init.sqf";
[] execVM "effect.sqf";
//[] execVM "playerMarker.sqf";
[] execVM "custom\acd_TB\run.sqf";
disableRemoteSensors true;


//no fog please
[] spawn {
	while{true} do {
		sleep 20;
		300 setFog 0;
		sleep 600;
	};
};


StartProgress = true;

if(!isDedicated) exitWith{};
Tower2 setVariable ["TTP_terror", false, true];
