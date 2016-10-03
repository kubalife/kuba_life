/*
	File: fn_safezones.sqf
	Editor: Cris

	Description: kein Kravalla in Kavalla :)
*/
private ["_eh1","_inArea","_zone1","_zone2","_zone3","_zone4","_zone5","_zone6","_zone7","_zone8","_zone1dis","_zone2dis","_zone3dis","_zone4dis","_zone5dis","_zone6dis","_zone7dis","_zone8dis","_dis"];

_obj = _this select 0;

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

_ret = false;

if (((_zone1 distance _obj < _zone1dis) || (_zone2 distance _obj < _zone2dis) || (_zone3 distance _obj < _zone3dis) || (_zone4 distance _obj < _zone4dis) || (_zone5 distance _obj < _zone5dis) || (_zone6 distance _obj < _zone6dis) || (_zone7 distance _obj < _zone7dis) || (_zone8 distance _obj < _zone8dis))) then
{
	// Unit is within distance of one of the specified safezones, return true
	_ret = true;
};
if (((_zone1 distance _obj > _zone1dis) && (_zone2 distance _obj > _zone2dis) && (_zone3 distance _obj > _zone3dis) && (_zone4 distance _obj > _zone4dis) &&(_zone5 distance _obj > _zone5dis) || (_zone6 distance _obj > _zone6dis) || (_zone7 distance _obj > _zone7dis) || (_zone8 distance _obj > _zone8dis))) then
{
	// Unit is not within the specified distance to any safezone, return false
	_ret = false;
};


_ret;
