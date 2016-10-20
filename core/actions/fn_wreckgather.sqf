private["_wreck","_loot","_left","_weight"];
if (life_action_inUse) exitWith {};
_wreck=cursorObject;
_loot=getVariable "loot";
_left=getVariable "left";
_weight=[_loot] call life_fnc_itemWeight;
if(_left=0) exitWith {hint "Nix mehr da!";};
if(life_carryWeight > (life_maxWeight-_weight))exitWith {hint "So viel kannst du nicht tragen!";};
life_action_inUse=true;
_left=_left-1;
_wreck setVariable [left,_left,true];					//nimmt 1 aus dem wrack
[true,_loot,1] call life_fnc_handleInv;
hint "Du durchsuchst die Kisten!";
for "_i" from 0 to 4 do
{
	player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	sleep 0.5;
};
hint "Du hast etwas gefunden!";
life_action_inUse=false;