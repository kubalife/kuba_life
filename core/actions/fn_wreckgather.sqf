/*
	File: fn_wreckgather.sqf
	Author: Paini
*/
private["_wreck","_loot","_left","_weight","_found","_empty","_cntloot","_fndloot","_search"];
if (life_action_inUse) exitWith {};
_wreck=cursorObject;
_found=false;
_empty=false;
_count= _wreck getVariable "lcount";
if (isNil "_count") exitWith {hint "Was ist das?";};
_ind=0;
while{!_found && !_empty}do{
	if(_ind==_count)then {_empty=true;} else {
		_search=format["left%1",_ind];
		_cntloot=_wreck getVariable _search;
		if(_cntloot>0)then {_found=true;}else{_ind=_ind+1;}; 
	};
};
if(_found)then{
	_fndloot=_wreck getVariable (format["loot%1",_ind]);
	_weight=[_fndloot] call life_fnc_itemWeight;
	if(life_carryWeight > (life_maxWeight-_weight))then {
	hint "So viel kannst du nicht tragen";
	}else {		
		_wreck setVariable [_search,(_cntloot-1),true];
		[true,_fndloot,1] call life_fnc_handleInv;
		hint format["Ich hab %1 gefunden",_fndloot];
		for "_i" from 0 to 4 do
		{
			player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
			waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
			sleep 0.5;
		};
	};
};
life_action_inUse=false;
