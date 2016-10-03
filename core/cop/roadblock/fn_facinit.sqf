#include <macro.h>
/*
 Author: Fuzz
 Description: Choix de des factions soit medic ou policier.
*/
if(playerSide == civilian) exitWith {hint "You must be EMS or Police to make roadblocks"};

if(playerSide == west) then
{
	[] spawn life_fnc_placeablesMenu;
};
