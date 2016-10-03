#include "..\..\script_macros.hpp"
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);

//Handle the tazer first (Top-Priority).
if(!isNull _source) then {
	if(_source != _unit) then {\
		if (_unit getVariable["Revive",false]) exitWith {};
		_curWep = currentWeapon _source;
		if(_projectile in ["DDOPP_B_Taser"] && _curWep in ["DDOPP_X26","DDOPP_X26_b"]) then {
			if(side _source == west && playerSide == west OR playerSide == independent OR playerSide == civilian) then {
				private["_distance"];
				_distance = if(_projectile == "DDOPP_B_Taser") then {100} else {35};
				_damage = false;
				if(_unit distance _source < _distance) then {
					if(!life_istazed && !life_isknocked && !(_unit GVAR ["restrained",false])) then {
						if (vehicle player != player) then {
							if (typeOf (vehicle player) == "B_Quadbike_01_F") then {
								player action ["Eject",vehicle player];
								[_unit,_source] spawn life_fnc_tazed;
							};
						} else {
							[_unit,_source] spawn life_fnc_tazed;
						};
					};
				};
			};

			//Temp fix for super tasers on cops.
			if(side _source == west && (playerSide == west OR playerSide == independent)) then {
				_damage = false;
			};
		};
	};
};


if (safezone) then {
	if (isNull _source) exitWith {_damage = 0;};
	if (_projectile == "Bo_Mk82") exitWith {};
	if (_sourceCop || _sourceIsRebel) then {
		// Player should take damage since he/she was shot by a cop, therefore, nothing is done

	} else {

		if (isPlayer _source) then {
			//if (_sourceIsRebel) exitWith {_damage;};

			//diag_log format["Took damage from a non rebel player, cancelling.. (%1)",str(_source)];
			_damage = 0;
} else {
			//diag_log format["Took damage from something else than a player, cancelling.."];
			// Player took damage from something else than a player, not taking damage.
			_damage = 0;
		};

		if (_projectile == "") exitWith {_damage = 0;};
		/*
		if (alive _source && _source getVariable ["rebel",false]) exitWith {
			_damage;
		};
		*/
	};
};

if (_projectile in ["mini_Grenade"]) then
{
	// Player was flashbanged
	_damage = 0;
	[_projectile] spawn life_fnc_handleFlashbang;
};



if (vehicle _unit == _unit) then {
	if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" ) then	{
	}else{
		_isVehicle = vehicle _source;
		if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then	{
			_damage = 0.2;
		};
	};
};

if ((vehicle _unit) isKindOf "Car" && (isNull _source || _source == _unit)) then
{
	_damage = if (life_seatbelt) then { _damage / 2 } else { _damage};
};

[] spawn life_fnc_hudUpdate;
_damage;
