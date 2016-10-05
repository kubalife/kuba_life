#include "..\..\script_macros.hpp"
/*
	File: fn_gagged.sqf
	Author: lowheartrate
	Assistance by: Panda
	
	Description:
	What happens to the player when gagged.
*/
private["_gagger"];
_gagger = param[0,ObjNull,[ObjNull]];
hint format["Du wurdest von %1 ruhig gestellt.", _gagger GVAR["realname",_gagger]];
titleText ["Da du ruhig gestellt wurdest kannst du nicht mehr sprechen!", "PLAIN"];
5 enableChannel false;
//Disable Group Chat
3 enableChannel false;
//Disable Vehicle Chat
4 enableChannel false;
//Disable Side Chat
7 enableChannel false;
player SVAR ["tf_voiceVolume", 0, true]; // Mute für Taskforce

waitUntil{!(player GVAR ["gagged",false]) OR !(player GVAR ["restrained",false])};
player SVAR ["tf_voiceVolume", 1, true]; // Entmuten
hint "Du wurdest befreit du kannst nun wieder sprechen!";
titleText ["Du wurdest berfreit!", "PLAIN"];
5 enableChannel true;
3 enableChannel true;
4 enableChannel true;
7 enableChannel true;