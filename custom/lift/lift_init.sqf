waitUntil {player == player}; //JIP compatibility and general safety

CUP_vehBlacklist = _this select 0;
CUP_heloBlacklist = _this select 1;

CUP_checkLift =
{
  _return = false;
  _velocity = velocity vehicle player;
  _speed = (sqrt ((_velocity select 0)^2 + (_velocity select 1)^2))*3.6;
  if ((vehicle player isKindOf "Helicopter") && (count (nearestObjects [vehicle player, ["Car", "Tank", "Ship"], 20]) > 0) && (_speed < 10) && (driver vehicle player == player) && !(vehicle player in CUP_heloBlacklist) && !(typeOf vehicle player in CUP_heloBlacklist)) then {_return = true};
  if !(isNil {vehicle player getVariable "CUP_attached"}) then
  {
    if (vehicle player getVariable "CUP_attached" select 0 == 1) then
    {
      _return = false;
    };
  };
  _return
};

CUP_checkDrop =
{
  _return = false;
  _attached = vehicle player getVariable "CUP_attached";
  if ((vehicle player isKindOf "Helicopter") && (driver vehicle player == player) && (_attached select 0 == 1)) then {_return = true;};
  _return
};

player addAction ["<t color='#C9C900'>Lift vehicle</t>", "Custom\lift\lift.sqf", nil, 10, true, true, "", "call CUP_checkLift"];
player addAction ["<t color='#C9C900'>Drop vehicle</t>", "Custom\lift\drop.sqf", nil, 10, true, true, "", "call CUP_checkDrop"];

player addEventHandler ["Respawn", {player addAction ["<t color='#C9C900'>Lift vehicle</t>", "Custom\lift\lift.sqf", nil, 10, true, true, "", "call CUP_checkLift"]; player addAction ["<t color='#C9C900'>Drop vehicle</t>", "Custom\lift\drop.sqf", nil, 10, true, true, "", "call CUP_checkDrop"];}];
