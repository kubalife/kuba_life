_veh = vehicle player getVariable "CUP_attached" select 1;
_id = _this select 2;

detach _veh;
_veh setVelocity velocity vehicle player;

vehicle player setVariable ["CUP_attached", [0, objNull], true];