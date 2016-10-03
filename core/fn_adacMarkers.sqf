/*
 File: fn_adacMarkers.sqf
 Author: Bryan "Tonic" Boardwine
 Edit: Raptor772000
 Description:
 Markiert eure Kollegen auf der Karte.
*/
private["_markers","_adacs"];
_markers = [];
_adacs = [];
sleep 0.5;
if(visibleMap) then {
 {if(side _x == east) then {_adacs pushBack _x;}} foreach playableUnits;
 //Create markers
 {
 if(_x != player) then {
 _marker = createMarkerLocal [format["%1 _marker",_x],visiblePosition _x];
 _marker setMarkerColorLocal "ColorYellow";
 _marker setMarkerTypeLocal "Mil_dot";
 _marker setMarkerTextLocal format["%1", _x getVariable["realname",name _x]];
 _markers pushBack [_marker,_x];
 };
 } foreach _adacs;
 while {visibleMap} do {
 {
 private["_marker","_unit"];
 _marker = _x select 0;
 _unit = _x select 1;
 if(!isNil "_unit" && !isNull _unit) then {
 _marker setMarkerPosLocal (visiblePosition _unit);
 };
 } foreach _markers;
 if(!visibleMap) exitWith {};
 sleep 0.02;
 };
 {deleteMarkerLocal (_x select 0);} foreach _markers;
 _markers = [];
 _adacs = [];
};