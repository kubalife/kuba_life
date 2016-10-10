#include "..\..\script_macros.hpp"
/*
	File: fn_masked.sqf
	Author: Larry aka. Tim
*/

if((player GVAR["masked",true])) then {
	hint "Dir wurde ein Sack über den Kopf gestülpt. Gute Nacht!";
	"colorCorrections" ppEffectEnable true;			
	"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 0.01],  [0, 0, 0, 0.0]]; 
	"colorCorrections" ppEffectCommit 0.3;

	removeHeadGear player;
	player addheadgear "mgsr_headbag";

} else {
	hint "Der Sack wurde entfernt. Augen auf Schlafmütze!";
	"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 1],  [0, 0, 0, 0.0]]; 
	"colorCorrections" ppEffectCommit 3;
	"colorCorrections" ppEffectEnable false;	

	removeHeadGear player;
};