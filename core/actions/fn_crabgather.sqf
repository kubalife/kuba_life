/*
	File: crabgather.sqf
	Author: Paini
*/
private ["_boje","_boat","_timeboje","_depthboje","_ownerboje","_rope1","_rope2","_pot","_timedif","_meter","_krabben","_krabbensorte","_meinebo"];
_boje=cursorObject;
_meinebo=_boje getVariable "_meins";
if (isNil "_meinebo") exitWith {hint "Die gehoert dir nicht!";};
if(typeOf _boje == "Land_BuoyBig_F" && (player distance2D _boje) < 15) then
{
	life_net_dropped = true;
	_boat = vehicle player;
	_timeboje=_boje getVariable "_timestamp";
	_depthboje=_boje getVariable "_waterdepth";
	_rope1 = (ropes _boje) select 0;
	_pot = (ropeAttachedObjects vehicle _boje) select 0;
	_timedif=servertime-_timeboje;
	_krabben=round (_timedif / 20);
	if(_krabben>20)then{_krabben=20}; //anzahl der krabben (cap ist auf 50 gesetzt)
	_krabben=_krabben + round(random(20));
	if(life_carryWeight < (life_maxWeight-_krabben-1))then {
		ropeDestroy _rope1;
		deleteVehicle _boje;
		waitUntil { isNull _boje };
		_rope2 = ropeCreate [_boat, [0,0,-5], _pot,[0,0,+0.6], (((getPosATL _boat) select 2)+5)];
		ropeUnwind [_rope2, 2, 5];
		while{!(ropeUnwound _rope2)}do
		{
			sleep 1;
			_meter= round(ropeLength _rope2);
			hint format ["Seillaenge:%1 Meter",_meter];			
		};
		ropeDestroy _rope2;
		deleteVehicle _pot;			
		_krabbensorte="mysticcrab";  //BI will das ich den mist deklariere ob wohl es schon deklariert ist -.- myticcrab existiert nicht :(
		if(_depthboje<25)then{_krabbensorte="blaukrabbe"};
		if(_depthboje>=25 && _depthboje<40)then{_krabbensorte="schneekrabbe"};
		if(_depthboje>=40 && _depthboje<55)then{_krabbensorte="koenigskrabbe"};
		if(_depthboje>=55)then{_krabbensorte="hummer"};
		[true,"krabbenkaefig",1] call life_fnc_handleInv;
		[true,_krabbensorte,_krabben] call life_fnc_handleInv;
		hint format ["<t color='#e32828' size='1.5'>Zeit: %1 Sekunden</t><br/><t color='#e32828' size='1.5'>Tiefe:%2 Meter</t><br/><t color='#e32828' size='1.5'>Krabben:%3</t><br/><t color='#e32828' size='1.5'>Krabbensorte:%4</t><br/>",_timedif,_depthboje,_krabben,_krabbensorte];	
		
	}else{
		hint "So viel kanst du nicht tragen!";
	};
	life_net_dropped = false;
};
