/*
	File: fn_masked.sqf
	Author: Larry aka. Tim
*/

if((player getVariable "masked")) then {

	"colorCorrections" ppEffectEnable true;			
	"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 0.01],  [0, 0, 0, 0.0]]; 
	"colorCorrections" ppEffectCommit 0.3;

	removeHeadGear player;
	player addheadgear "mgsr_headbag";

} else {

	"colorCorrections" ppEffectAdjust [1, 1, -0.003, [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 1],  [0, 0, 0, 0.0]]; 
	"colorCorrections" ppEffectCommit 3;
	"colorCorrections" ppEffectEnable false;	

	removeHeadGear player;
};