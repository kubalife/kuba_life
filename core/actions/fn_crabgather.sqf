private ["_boje","_boat","_timeboje","_depthboje","_ownerboje","_rope1","_rope2","_pot","_timedif","_meter","_krabben","_krabbensorte"];
_boje=cursorObject;
if(typeOf _boje == "Land_BuoyBig_F" && (player distance2D _boje) < 15) then
{
	life_net_dropped = true;
	_boat = vehicle player;
	_timeboje=_boje getVariable "_timestamp";
	_depthboje=_boje getVariable "_waterdepth";
	_ownerboje=_boje getVariable "_owner";
	_rope1 = (ropes _boje) select 0;
	_pot = (ropeAttachedObjects vehicle _boje) select 0;
	ropeDestroy _rope1;
	deleteVehicle _boje;
	waitUntil { isNull _boje };
	_rope2 = ropeCreate [_boat, [0,0,-5], _pot,[0,0,+0.6], (((getPosATL _boat) select 2)+5)];
	ropeUnwind [_rope2, 2, 5];
	_timedif=servertime-_timeboje;   //evtl servertime benutzen
	while{!(ropeUnwound _rope2)}do
	{
		sleep 1;
		_meter= round(ropeLength _rope2);
		hint format ["Seillaenge:%1 Meter",_meter];			
	};
	ropeDestroy _rope2;
	deleteVehicle _pot;			
	_krabben=round (_timedif / 10);
	if(_krabben>50)then{_krabben=50}; //anzahl der krabben (cap ist auf 50 gesetzt)
	_krabbensorte="mysticcrab";  //BI will das ich den mist deklariere ob wohl es schon deklariert ist -.- myticcrab existiert nicht :(
	if(_depthboje<20)then{_krabbensorte="blaukrabbe"};
	if(_depthboje>=20 && _depthboje<35)then{_krabbensorte="schneekrabbe"};
	if(_depthboje>=35 )then{_krabbensorte="koenigskrabbe"};
	[true,"krabbenkaefig",1] call life_fnc_handleInv;
	[true,_krabbensorte,_krabben] call life_fnc_handleInv;
	hint format ["Zeit:%1 Sekunden Tiefe:%2 Meter Owner:%3 Krabben:%4 Krabbensorte:%5",_timedif,_depthboje,_ownerboje,_krabben,_krabbensorte];	
	life_net_dropped = true;
}