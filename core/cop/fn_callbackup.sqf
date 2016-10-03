private["_backupTime","_msg"];
if(!life_callBackup) exitWith {hint "Du kannst nicht schon wieder Verstärkung rufen!"};
_backupTime = 120;
_msg = mapGridPosition player;
[objNull,_msg,player,9] remoteExecCall ["TON_fnc_handleMessages",2];
[player,_backupTime] remoteExec ["life_fnc_backupCall",west];
life_callBackup = false;
[] spawn
{
	uiSleep 320;
	life_callBackup = true;
};
hint format ["Verstärkung wurde gerufen, %1!",name player];
