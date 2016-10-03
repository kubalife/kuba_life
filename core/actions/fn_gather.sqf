#include "..\..\script_macros.hpp"
/*
	File: fn_gather.sqf
	Author: Devilfloh

	Description:
	Main functionality for gathering.
*/
private["_maxGather","_resource","_amount","_maxGather","_requiredItem"];
if (life_action_inUse) exitWith {};
if((vehicle player) != player) exitWith {};
if((player GVAR "restrained")) exitWith {hint localize "STR_NOTF_isrestrained";};
if((player GVAR "playerSurrender")) exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_zone = "";
_requiredItem = "";
_zoneSize = (getNumber(missionConfigFile >> "CfgGather" >> "zoneSize"));
_exit = false;
_cops = (west countSide playableUnits);

_resourceCfg = missionConfigFile >> "CfgGather" >> "Resources";
for "_i" from 0 to count(_resourceCfg)-1 do {

	_curConfig = (_resourceCfg select _i);
	_resource = configName _curConfig;
	_maxGather = getNumber(_curConfig >> "amount");
	_resourceZones = getArray(_curConfig >> "zones");
	_requiredItem = getText(_curConfig >> "item");
	{
		if((player distance (getMarkerPos _x)) < _zoneSize) exitWith {_zone = _x;};
	} forEach _resourceZones;

	if(_zone != "") exitWith {};
};

if(_zone == "") exitWith {life_action_inUse = false;};
if(_zone == "weed_1" && _cops < 1) exitWith { hint "Es müssen mindestens 1 Polizist im Dienst sein um Gras zu ernten"};
if(_zone == "heroin_1" && _cops < 2) exitWith { hint "Es müssen mindestens 2 Polizist im Dienst sein um Heroin zu ernten"};
if(_zone == "cocaine_1" && _cops < 3) exitWith { hint "Es müssen mindestens 3 Polizist im Dienst sein um Kokain zu ernten"};

if (_requiredItem != "") then {
    _valItem = GVAR_MNS "life_inv_" + _requiredItem;

    if (_valItem < 1) exitWith {
		switch (_requiredItem) do {
			case "pickaxe": {
				titleText[(localize "STR_NOTF_Pickaxe"), "PLAIN"];
			};
			case "woodaxe": {
				titleText[(localize "STR_NOTF_woodaxe"), "PLAIN"];
			};
			case "knife": {
				titleText[(localize "STR_NOTF_knife"), "PLAIN"];
			};
		};
		life_action_inUse = false;
		_exit = true;
  };
};

if(_exit) exitWith {life_action_inUse = false;};

_amount = round(random(_maxGather)) + 1;
_diff = [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if(_diff == 0) exitWith {
	hint localize "STR_NOTF_InvFull";
	life_action_inUse = false;
};

switch (_requiredItem) do
{
	case "pickaxe": {player say3D "mining";};
	default {player say3D "harvest";};
};

for "_i" from 0 to 4 do
{
	player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 0.5;
};

if(([true,_resource,_diff] call life_fnc_handleInv)) then
{
	_itemName = M_CONFIG(getText,"VirtualItems",_resource,"displayName");
	titleText[format[localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
};

sleep 1;
life_action_inUse = false;

[] call life_fnc_hudUpdate;
