 /*
 File: fn_barrier.sqf
 Author: Warnerm14 / edit by Andi Ommsen / broken by Johann Krapotke
 Desc: Everytime this is ran, it will open the menu.
 */
 //Incase you run the menu again, this removes the old entrys so it doesnt double.
 player removeAction placeholzlang;
 player removeAction placeholzkurz;
 player removeAction placeconelight;
 player removeAction placetubeorange;
 player removeAction placetubeorangelight;
 player removeAction placeplasticred;
 player removeAction placeplasticorange;
 player removeAction placebargate;
 player removeAction placewarndreieck;
 player removeAction placelightdouble;
 player removeAction placelightsingle;
 player removeAction dropitem;
 player removeAction remove;
 player removeaction cancelBarrier;
 player removeAction headerBarrier;
 //The header so make the list stand out.
 headerBarrier = player addaction [("<t color=""#FF3300"">" + ("--- Menü ---") +"</t>"),""];
 //Platzieren nach oben verschoben
  dropitem = player addaction [("<t color=""#2EFE2E"">" + ("  Platzieren") +"</t>"),{ //The drop item entry.
 detach placeable; //Detaches the object from the player.
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]); //Makes it level with the ground.
 placeable = apple; //Clears the varible to prevent bugs.
 }];
 //entfernen nach oben verschoben
 remove = player addaction [("<t color=""#FF0000"">" + ("  Objekt Entfernen") +"</t>"),{ //The remove item entry.
 _holzlang = position player nearObjects ["plp_upm_WoodBarrierLongRed", 2]; //Detects concrete barriers within 2 meters.
 _holzkurz = position player nearObjects ["plp_upm_WoodBarrierShortRed", 1]; //Detects cones within 1 meters.
 _conelight = position player nearObjects ["RoadCone_L_F", 2]; //Detects bargates within 4 meters.
 _tubeorange = position player nearObjects ["plp_upm_PlasticTubeOrange", 2]; //Detects bargates within 4 meters
 _tubeorangelight = position player nearObjects ["plp_upm_PlasticTubeOrangeLightOn", 2]; //Detects bargates within 4 meters.
 _plasticred = position player nearObjects ["plp_upm_PlasticBarrierRed", 2]; //Detects bargates within 4 meters.
 _plasticorange = position player nearObjects ["plp_upm_PlasticBarrierOrange", 2]; //Detects bargates within 4 meters.
 _bargate = position player nearObjects ["Land_BarGate_F", 6]; //Detects bargates within 4 meters.
 _warndreieck = position player nearObjects ["plp_upm_WarningPyramidCaution", 1.5]; //Detects bargates within 4 meters.
 _lightdouble = position player nearObjects ["Land_PortableLight_double_F", 2]; //Detects lichterdoppelt within 4 meters.
 _lightsingle = position player nearObjects ["Land_PortableLight_single_F", 2]; //Detects lichtereinfach within 4 meters.
 _remove1 = (_holzlang select 0); //Selects holzlang
 deleteVehicle _remove1; //Deletes holzlang
 _remove2 = (_holzkurz select 0); //Selects holzkurz
 deleteVehicle _remove2; //Deletes holzkurz
 _remove3 = (_conelight select 0); //Selects conelight
 deleteVehicle _remove3; //Deletes conelight
 _remove4 = (_tubeorange select 0); //Selects tubeorange
 deleteVehicle _remove4; //Deletes tubeorange
 _remove5 = (_tubeorangelight select 0); //Selects tubeorangelight
 deleteVehicle _remove5; //Deletes tubeorangelight
 _remove6 = (_plasticred select 0); //Selects plasticred
 deleteVehicle _remove6; //Deletes plasticred
 _remove7 = (_plasticorange select 0); //Selects plasticorange
 deleteVehicle _remove7; //Deletes plasticorange
 _remove8 = (_bargate select 0); //Selects bargate
 deleteVehicle _remove8; //Deletes bargate
 _remove9 = (_warndreieck select 0); //Selects bargate
 deleteVehicle _remove9; //Deletes bargate
 _remove10 = (_lightdouble select 0); //Selects bargate
 deleteVehicle _remove10; //Deletes bargate
 _remove11 = (_lightsingle select 0); //Selects bargate
 deleteVehicle _remove11; //Deletes bargate
 barrier = apple;
 }];
 //Bargate Action
 placeholzlang = player addaction [("<t color=""#F4FA58"">" + ("  + Holz lang rot/weiß") +"</t>"),{ //Defines what you see on the menu.
 detach placeable; //If you try to place another item while holding an object it will drop the first item.
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]); //Makes it level with terrain.
 placeable = "plp_upm_WoodBarrierLongRed" createVehicle position player; //Spawns the object ontop of the player.
 placeable attachTo [player, [0, 2, 0.4]]; //Attaches to the player and allows them to move it around.
 //placeable allowdamage false; //Remove the // infront of placeable to make the bargate indestructable.
 }];
 placeholzkurz = player addaction [("<t color=""#F4FA58"">" + ("  + Holz kurz rot/weiß") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "plp_upm_WoodBarrierShortRed" createVehicle position player;
 placeable attachTo [player, [0, 3, 0.4]];
 }];
 placeconelight = player addaction [("<t color=""#F4FA58"">" + ("  + Hütchen mit Licht") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "RoadCone_L_F" createVehicle position player;
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 placetubeorange = player addaction [("<t color=""#F4FA58"">" + ("  + Tube Orange") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "plp_upm_PlasticTubeOrange" createVehicle position player;
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 placetubeorangelight = player addaction [("<t color=""#F4FA58"">" + ("  + Tube Orange mit Licht") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "plp_upm_PlasticTubeOrangeLightOn" createVehicle position player;
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 placeplasticred = player addaction [("<t color=""#F4FA58"">" + ("  + Plastik Barriere Rot") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "plp_upm_PlasticBarrierRed" createVehicle position player;
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 placeplasticorange = player addaction [("<t color=""#F4FA58"">" + ("  + Plastik Barriere Orange") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "plp_upm_PlasticBarrierOrange" createVehicle position player;
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 placebargate = player addaction [("<t color=""#F4FA58"">" + ("  + Schranke") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "Land_BarGate_F" createVehicle position player;
 placeable attachTo [player, [0, 5, 4]];
 }];
 placewarndreieck = player addaction [("<t color=""#F4FA58"">" + ("  + Warndreieck") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "plp_upm_WarningPyramidCaution" createVehicle position player;
 placeable attachTo [player, [0, 2, 0.4]];
 }];
 placelightdouble = player addaction [("<t color=""#F4FA58"">" + ("  + Scheinwerfer doppelt") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "Land_PortableLight_double_F" createVehicle position player;
 placeable attachTo [player, [0, 2, 1.06]];
 }];
 placelightsingle = player addaction [("<t color=""#F4FA58"">" + ("  + Scheinwerfer einfach") +"</t>"),{ //SAME AS THE TOP
 detach placeable;
 placeable setVectorUP (surfaceNormal [(getPosATL placeable) select 0,(getPosATL placeable) select 1]);
 placeable = "Land_PortableLight_single_F" createVehicle position player;
 placeable attachTo [player, [0, 2, 1.06]];
 }];
 // When ran this entry will remove all the barrier options from the action menu.
 cancelBarrier = player addaction [("<t color=""#FF8000"">" + ("---Menü schließen---") +"</t>"),{
 player removeAction placeholzlang;
 player removeAction placeholzkurz;
 player removeAction placeconelight;
 player removeAction placetubeorange;
 player removeAction placetubeorangelight;
 player removeAction placeplasticred;
 player removeAction placeplasticorange;
 player removeAction placebargate;
 player removeAction placewarndreieck;
 player removeAction placelightdouble;
 player removeAction placelightsingle;
 player removeAction dropitem;
 player removeAction remove;
 player removeaction cancelBarrier;
 player removeAction headerBarrier;
 placeable = apple;
 }];