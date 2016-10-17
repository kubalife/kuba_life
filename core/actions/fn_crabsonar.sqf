private ["_boat","_depth"];
_boat = vehicle player;
_depth = ((getPosATL _boat) select 2)-((getPosASL _boat) select 2);
hint format ["Tiefe:%1 Meter",_depth];