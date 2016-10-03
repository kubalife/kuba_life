#include "..\script_macros.hpp"
/*
File: fn_restartEarthquake.sqf
Author: nflug

Description:
Earthquake on Server restart.
*/

sleep 600; //Das wäre jetzt wenn der Server alle 6 Stunden neustartet das heißt hier musst du den Wert in Sekunden ändern bis dein Server restartet. Ambesten noch ein paar Sekunden/Minuten weniger als //deiner Restart Zeit sonst fängt das Erdbeben an und in dem Moment restartet der Server :P. Hier kannst dus umrechnen lassen: KLICK
[] spawn {[2] call bis_fnc_earthquake; sleep 5; [3] call bis_fnc_earthquake; sleep 8; [4] call bis_fnc_earthquake;};

[str("Verabschieded euch von euren Familien"),str("Die Insel wird in wenigen Sekunden unter gehen..."), str("Auf wiedersehen ;(!")] spawn BIS_fnc_infoText;
//Hier kannst du noch ein paar Player Sicht Effekte einbauen :D!