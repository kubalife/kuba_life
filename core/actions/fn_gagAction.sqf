#include "..\..\script_macros.hpp"
/*
        File: fn_gagAction.sqf
        Author: lowheartrate

        Description:
        Gags the target.
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {}; // Not Valid
if(life_inv_gagkit < 1) exitWith {hint "Du hast keinen Mundknebel!";};
if((player distance _unit > 3)) exitWith {hint "Die Person ist zu weit entfernt";};
if((_unit GVAR["gagged",true])) exitWith {hint "Die Person hat schon einen Mundknebel";};
if(side _unit == west) exitWith {hint "Du bist ein Polizist. Lass das!";};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

_unit SVAR["gagged",true,true];

//Make the unit (cursorTarget) call this script which will hint them they have been gagged, do the gagging etc.
//Player added to [] so that we can bring it over to the gagged script with _VARNAME = _this select 0;
//This will selec the player of this script which is the gagger and we can define it in the gagged script.
[[player],"life_fnc_gagged",_unit,false] spawn life_fnc_MP;

//Hint the player thats gagging the person that they have gagged the name of the unit.
hint format["Du hast %1 ruhig gestellt.", _unit GVAR["realname",_unit]];

//Remove the gagkit from the player
life_inv_gagkit = life_inv_gagkit - 1;