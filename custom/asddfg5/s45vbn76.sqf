private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone6","_zone7","_zone8","_zone1dis","_zone2dis","_zone3dis","_zone4dis","_zone5dis","_zone6dis","_zone7dis","_zone8dis","_dis"];

_zone1 = getMarkerPos "safezone_kav"; // MARKERS FOR SAFEZONE
_zone2 = getMarkerPos "safezone_ath";
_zone3 = getMarkerPos "safezone_sof";
_zone4 = getMarkerPos "safezone_reb1";
_zone5 = getMarkerPos "safezone_reb2";
_zone6 = getMarkerPos "safezone_GS";
_zone7 = getMarkerPos "safezone_AS";
_zone8 = getMarkerPos "safezone_pygros";

_zone1dis = 125;
_zone2dis = 70;
_zone3dis = 110;
_zone4dis = 140;
_zone5dis = 140;
_zone6dis = 125;
_zone7dis = 125;
_zone8dis = 150;

_dis = 350;
_inArea = false;

_enterText = "You are entering a safezone!";
_leaveText = "You are leaving a safezone!";

switch (playerSide) do
{
	case west:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis) || (_zone6 distance player < _zone6dis) || (_zone7 distance player < _zone7dis) || (_zone8 distance player < _zone8dis)) && (!_inArea)) then
				{
					_inArea = true;
					hint parseText format["<t color='#00ff00'><t size='2'><t align='center'>Safezone Warning<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) && (_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis) && (_zone8 distance player > _zone8dis)) && (_inArea)) then
				{
					_inArea = false;
					hint parseText format["<t color='#ffff00'><t size='2'><t align='center'>Safezone Warning<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
				};

			};
		};
	};

	case civilian:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis) || (_zone6 distance player < _zone6dis) || (_zone7 distance player < _zone7dis) || (_zone8 distance player < _zone8dis)) && (!_inArea)) then
				{
					_eh1 = player addEventHandler ["fired", {deleteVehicle (_this select 6);}];
					_inArea = true;
					hint parseText format["<t color='#00ff00'><t size='2'><t align='center'>Safezone Warning<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) &&(_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis) && (_zone8 distance player > _zone8dis)) && (_inArea)) then
				{
					player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText format["<t color='#ffff00'><t size='2'><t align='center'>Safezone Warning<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
				};

			};
		};
	};

	case independent:
	{
		while {true} do
		{
			if (alive player) then
			{
				if (((_zone1 distance player < _zone1dis) || (_zone2 distance player < _zone2dis) || (_zone3 distance player < _zone3dis) || (_zone4 distance player < _zone4dis) || (_zone5 distance player < _zone5dis) || (_zone6 distance player < _zone6dis) || (_zone7 distance player < _zone7dis) || (_zone8 distance player < _zone8dis)) && (!_inArea)) then
				{
					_inArea = true;
					hint parseText format["<t color='#00ff00'><t size='2'><t align='center'>Safezone Warning<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
					imAuto = false;
				};
				if (((_zone1 distance player > _zone1dis) && (_zone2 distance player > _zone2dis) && (_zone3 distance player > _zone3dis) && (_zone4 distance player > _zone4dis) &&(_zone5 distance player > _zone5dis) && (_zone6 distance player > _zone6dis) && (_zone7 distance player > _zone7dis) && (_zone8 distance player > _zone8dis)) && (_inArea)) then
				{
					_inArea = false;
					hint parseText format["<t color='#ffff00'><t size='2'><t align='center'>Safezone Warning<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
					imAuto = true;
				};

			};
		};
	};
	sleep 3;
};
