private ["_boat","_depth","_nextboje","_nextships","_posboje","_pospot","_boje","_pot","_rope","_boatname"];

_boat = vehicle player;
_depth = ((getPosATL _boat) select 2)-((getPosASL _boat) select 2);
_nextboje=nearestObjects [_boat, ["Land_BuoyBig_F"],50];
_nextships=nearestObjects [_boat, ["Ship"],30];
if(surfaceIsWater position _boat && _depth > 5)then
{
	if((count _nextships)<2 && (count _nextboje)==0)then
	{
		if(([false,"krabbenkaefig",1] call life_fnc_handleInv))then{
			life_net_dropped = true;
			_posboje = _boat ModeltoWorld [8,0,0];
			_pospot	= _boat ModeltoWorld [11,0,0];
			_boje = createVehicle ["Land_BuoyBig_F", _posboje, [], 0, "CAN_COLLIDE"];
			_pot = createVehicle ["Land_WaterBarrel_F", [_pospot select 0, _pospot select 1,_depth +4 ] , [], 0, "CAN_COLLIDE"];
			waitUntil { !isNull _boje && !isNull _pot};
			_rope = ropeCreate [_boje, [0,0,-3.52], _pot,[0,0,+0.6], (_depth+15)];
			_boje setVariable ["_timestamp",servertime]; //evtl servertime benutzen
			_boje setVariable ["_waterdepth",_depth];
			_boje setVariable ["_meins",true];
			//_boje addAction ["Krabbenpot einholen",life_fnc_crabgather,nil,6,true,true,"",'vehicle player isKindOf "CUP_C_Fishing_Boat_Chernarus"&& life_carryWeight < (life_maxWeight-51)',30,false];
			life_net_dropped = false;
		}else{
			hint "Du hast keine Krabbenkaefige mehr";
		}
	}else
	{
		hint "Du bist zu nah an einer Boje oder einem anderen Schiff!";
	}
}else
{
	hint "Hier ist es nicht tief genug!";
}
