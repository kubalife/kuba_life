#include "..\..\..\script_macros.hpp"
/*
	File: fn_wirdgesucht.sqf
	Author: ohhnice
	
	Description:
	Ein Polizeicomputer. Geschrieben von ohhnice 
*/

if (life_wanted) then
{
	life_wanted = false;
} else {
	life_wanted = true;
};
