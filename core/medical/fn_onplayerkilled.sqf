#include "..\..\script_macros.hpp"
/*
	File: fn_onPlayerKilled.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	When the player dies collect various information about that player
	and pull up the death dialog / camera functionality.
*/
params [
	["_unit",objNull,[objNull]],
	["_killer",objNull,[objNull]]
];
disableSerialization;

if(playerside == west) then
{
	life_panda_cop_gear = [uniform player,[uniformItems player],vest player,[vestItems player],backpack player,[backpackItems player],headgear player, goggles player, primaryWeapon player,[primaryWeaponItems player],secondaryWeapon player,[secondaryWeaponItems player]];
};

if((vehicle _unit) != _unit) then {
	UnAssignVehicle _unit;
	_unit action ["getOut", vehicle _unit];
	_unit setPosATL [(getPosATL _unit select 0) + 3, (getPosATL _unit select 1) + 1, 0];
};

//Set some vars
_unit SVAR ["Revive",true,true];
_unit SVAR ["name",profileName,true]; //Set my name so they can say my name.
_unit SVAR ["restrained",false,true];
_unit SVAR ["Escorting",false,true];
_unit SVAR ["masked",false,true];
_unit SVAR ["transporting",false,true];
_unit SVAR ["playerSurrender",false,true];
_unit SVAR ["steam64id",(getPlayerUID player),true]; //Set the UID.
_unit SVAR ["tf_unable_to_use_radio", false]; // Funkgerät freischalten

//Setup our camera view
life_deathCamera  = "CAMERA" camCreate (getPosATL _unit);
showCinemaBorder TRUE;
life_deathCamera cameraEffect ["Internal","Back"];
createDialog "DeathScreen";
life_deathCamera camSetTarget _unit;
life_deathCamera camSetRelPos [0,3.5,4.5];
life_deathCamera camSetFOV .5;
life_deathCamera camSetFocus [50,0];
life_deathCamera camCommit 0;

(findDisplay 7300) displaySetEventHandler ["KeyDown","if((_this select 1) == 1) then {true}"]; //Block the ESC menu

//Create a thread for something?
/*
_unit spawn {
	private["_maxTime","_RespawnBtn","_Timer"];
	disableSerialization;
	_RespawnBtn = ((findDisplay 7300) displayCtrl 7302);
	_Timer = ((findDisplay 7300) displayCtrl 7301);

        if (LIFE_SETTINGS(getNumber,"respawn_timer") < 5) then {
            _maxTime = time + 5;
        } else {
            _maxTime = time + LIFE_SETTINGS(getNumber,"respawn_timer");
        };
	_RespawnBtn ctrlEnable false;
	waitUntil {_Timer ctrlSetText format[localize "STR_Medic_Respawn",[(_maxTime - time),"MM:SS"] call BIS_fnc_secondsToString];
	round(_maxTime - time) <= 0 OR isNull _this};
	_RespawnBtn ctrlEnable true;
	_Timer ctrlSetText localize "STR_Medic_Respawn_2";
};
*/
_unit spawn
{
	private["_maxTime","_RespawnBtn","_Timer","_medics"];
	disableSerialization;
	_medics = (independent countSide playableUnits);
	_RespawnBtn = ((findDisplay 7300) displayCtrl 7302);
	_Timer = ((findDisplay 7300) displayCtrl 7301);
	if(_medics > 0) then { 			//-- Medic anwesend
		_maxTime = time + (life_respawn_timer * 60);
	} else { //-- Kein Medic anwesend
		_maxTime = time + (3 * 60);
	};
	_RespawnBtn ctrlEnable false;
	waitUntil {_Timer ctrlSetText format["Start your new life in: %1",[(_maxTime - time),"MM:SS"] call BIS_fnc_secondsToString];
	round(_maxTime - time) <= 0 || isNull _this || life_request_timer};
if (life_request_timer) then {
_maxTime = time + (life_respawn_timer * 340);
waitUntil {_Timer ctrlSetText format["Start your new life in: %1",[(_maxTime - time),"MM:SS"] call BIS_fnc_secondsToString];
round(_maxTime - time) <= 0 || isNull _this};
};
life_request_timer = false;
	_RespawnBtn ctrlEnable true;
	_Timer ctrlSetText "You can now start your new life";
};
[] spawn life_fnc_deathScreen;

if(life_nlrtimer_running) then
{
life_nlrtimer_stop = true;
waitUntil {!life_nlrtimer_running};
};
[] spawn life_fnc_newLifeRule;

//Create a thread to follow with some what precision view of the corpse.
[_unit] spawn {
	private["_unit"];
	_unit = _this select 0;
	waitUntil {if(speed _unit == 0) exitWith {true}; life_deathCamera camSetTarget _unit; life_deathCamera camSetRelPos [0,3.5,4.5]; life_deathCamera camCommit 0;};
};
/*
//Make the killer wanted
if(!isNull _killer && {_killer != _unit} && {side _killer != west} && {alive _killer}) then {
	if(vehicle _killer isKindOf "LandVehicle") then {

		if(life_HC_isActive) then {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187V"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
		} else {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187V"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		};

		//Get rid of this if you don't want automatic vehicle license removal.
		if(!local _killer) then {
			[2] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	} else {

		if(life_HC_isActive) then {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
		} else {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		};

		if(!local _killer) then {
			[3] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	};
};*/
//Make the killer wanted
if(!isNull _killer && {_killer != _unit} && {side _killer != west} && {alive _killer}) then {
	if(vehicle _killer isKindOf "LandVehicle") then {

		if(life_HC_isActive) then {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187V"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
		} else {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187V"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		};

		//Get rid of this if you don't want automatic vehicle license removal.
		if(!local _killer) then {
			[2] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	} else {

		if(life_HC_isActive) then {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
		} else {
			[getPlayerUID _killer,_killer GVAR ["realname",name _killer],"187"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
		};

		if(!local _killer) then {
			[3] remoteExecCall ["life_fnc_removeLicenses",_killer];
		};
	};
    [0,"STR_NHS_Killed",true,[profileName,_killer GVAR ["realname",name _killer]]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
} else {
    if(side _killer == west && playerSide != west) then {
            [0,"STR_NHS_Killed",true,[profileName,_killer GVAR ["realname",name _killer]]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
    } else {
            [0,"STR_NHS_Suicide",true,[profileName]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
    };
};


life_save_gear = [player] call life_fnc_fetchDeadGear;

_containers = nearestObjects[getPosATL player,["WeaponHolderSimulated"],5];
{deleteVehicle _x;} forEach _containers;

//Killed by cop stuff...
if(side _killer == west && playerSide != west) then {
	life_copRecieve = _killer;
	//Did I rob the federal reserve?
	if(!life_use_atm && {CASH > 0}) then {
		[format[localize "STR_Cop_RobberDead",[CASH] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
		CASH = 0;
	};
};

if(!isNull _killer && {_killer != _unit}) then {
	life_removeWanted = true;
};

_handle = [_unit] spawn life_fnc_dropItems;
waitUntil {scriptDone _handle};

life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
CASH = 0;
life_is_alive = false;

[] call life_fnc_hudUpdate; //Get our HUD updated.
[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_managesc",RSERV];

[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
[4] call SOCK_fnc_updatePartial;
[] call life_fnc_hudUpdate;
