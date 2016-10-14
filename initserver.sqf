/*if(!(_this select 0)) exitWith {};  [] call compile PreprocessFileLineNumbers "\life_server\Dataquery.sqf"; waitUntil {missionNamespace getVariable "life_DQ"};
 [] call compile PreprocessFileLineNumbers "\life_server\init.sqf"; */

if(!(_this select 0)) exitWith {}; //Not server
[] call compile preprocessFileLineNumbers "\life_server\init.sqf";

//Restart
//[] spawn life_fnc_restartEarthquake;