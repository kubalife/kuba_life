/*
	Script file made by: Maximum
	Idea based off: Liemans script - did way to much to achieve the same thing.
	Description: Lets a officer request backup VIA Y menu button

params [
	["_player",objNull,[objNull]],
	["_deleteTime",120,[0]]
];

if(isNull _player) exitWith {};
if(playerSide != west) exitWith {};
//hint format [localize "STR_Item_backup", _player getVariable["realname",name _player]];
_backupmsg = createMarkerLocal [("_backupmsg" + (_player getVariable["realname",name _player])), getPos _player];
_backupmsg setMarkerTypeLocal "mil_warning";
_backupmsg setMarkerColorLocal "colorRed";
_backupmsg setMarkerTextLocal format ["%1 Is Requesting backup here", _player getVariable["realname",name _player]];
[0,"AN OFFICER HAS REQUESTED BACKUP AT THEIR LOCATION MARKED ON THE MAP"] remoteExecCall ["hint",west];
uiSleep _deleteTime;
deleteMarkerLocal _backupmsg;
*/


private ["_player ","_backupmsg"];
_player = [_this,0,objnull,[objnull]] call bis_fnc_param;
if(isNull _player) exitWith {};
if(playerSide != west) exitWith {};
hint "Verstärkung wurde per Notsignal gerufen! Halte durch!";
_backupmsg = createMarkerLocal [("_backupmsg" + name _player), getPos _player];
_backupmsg setMarkerTypeLocal "mil_warning";
_backupmsg setMarkerColorLocal "colorRed";
_backupmsg setMarkerTextLocal format ["%1 hat den Panikknopf gedrückt!",name _player];
uiSleep 60;
deleteMarkerLocal _backupmsg;
