_veh = objNull;
_vehCar = nearestObject [vehicle player, "Car"];
_vehTank = nearestObject [vehicle player, "Tank"];
_vehBoat = nearestObject [vehicle player, "Ship"];

if((count crew _vehCar > 0)||(count crew _vehBoat > 0))exitwith{hint 'You can not pick up a vehicle while someone is inside it';};

if((_vehCar in life_vehicles)||(_vehBoat in life_vehicles)) then 
{


if ((vehicle player distance _vehCar) > (vehicle player distance _vehTank)) then
{
  _veh = _vehTank;
} else
{
  _veh = _vehCar;
};

if ((vehicle player distance _veh) > (vehicle player distance _vehBoat)) then
{
  _veh = _vehBoat;
};

if ((_veh in CUP_vehBlacklist) || (typeOf _veh in CUP_vehBlacklist)) exitWith
{
  cutText ["This vehicle cannot be lifted", "PLAIN"];
};

_id = _this select 2;
_vehPos = getPos _veh;
_veh setPos [_vehPos select 0, _vehPos select 1, (_vehPos select 2) + 1];
_veh attachTo [vehicle player, [0, 0, -5]];

vehicle player setVariable ["CUP_attached", [1, _veh], true];
}
else
{hint 'You can not lift a vehicle that you do not have the keys for';};