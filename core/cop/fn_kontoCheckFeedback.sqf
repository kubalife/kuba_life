/*

	File: fn_kontoCheckFeedback.sqf
	Author: Michael Moskau
	Server: Kuba-Life.de

	Description:
	Gibt Kontostand der Person aus.
*/

params["_bank","_nameT"];

hint parseText format ["<t align='center'><t size='1.5' color='#4C6EE5'>KubaPD_WantedSystems</t><br/><br/><t size='0.8' align='left'>>_Benutzer: %1</t><br/><t size='0.8' align='left'>>_Passwort: ********</t><br/><br/><br/><t size='1.2'>Ziel:</t><br/>%2<br/><br/><t size='1.2'>Bankguthaben:</t><br/>$%3<br/></t>",name player,_nameT,_bank];