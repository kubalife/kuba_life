/*
TTP
*/
if (Tower2 getVariable "TTP_terror") exitWith {Tower2 setVariable ["TTP_terror", false, true]; hint "You stopped the lockdown, now announce it please";};

if((call life_coplevel) < 5) exitWith {closeDialog 0; hint "You need to be a captain to use this function.";};


Tower2 setVariable ["TTP_terror", true, true];
["Kavala Lockdown Declared - Get into your homes or leave the city. Law enforcement will be patroling the city and arresting anyone who does not comply with these orders, civilians carrying a weapon unholstered may be shot."] remoteExecCall ["hint"];
hint "You have started the Lockdown in kavala, please announce this with a admin message within the next 60 seconds!";
_repeat = 2;
_length = 145;
for "_i" from 1 to _repeat do {
	// Check if the lockdown was cancelled
	if !(Tower2 getVariable "TTP_terror") exitWith {};

	[[Tower1,Tower2,Tower3,Tower4,Tower5,Tower6],"purge",[5000,5000,5000,5000,5000,5000]] remoteExecCall ["life_fnc_playSound", 0, false];
	sleep _length;
};
