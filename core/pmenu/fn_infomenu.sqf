private ["_start"];
_start = [_this,0,0,[0]] call BIS_fnc_param;

//InfoMenus
if(_start isEqualTo 0) exitWith {
disableSerialization;
createDialog "infoMenu";
switch(playerSide) do {case west:{ctrlShow[2011,false];ctrlShow[2016,false];};case independent:{ctrlShow[2011,false];ctrlShow[2016,false];};};

_InfoMenus = ((findDisplay 41500) displayCtrl 2300);
lbClear _InfoMenus;

_InfoMenus lbAdd "General";lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0.694,0.141,1]];
_InfoMenus lbAdd "Informationnen"; lbSetValue [2300, (lbSize _InfoMenus)-1, 1];
_InfoMenus lbAdd "Serverregeln"; lbSetValue [2300, (lbSize _InfoMenus)-1, 2];
_InfoMenus lbAdd "Steuerung"; lbSetValue [2300, (lbSize _InfoMenus)-1, 3];
_InfoMenus lbAdd "Listenpreise"; lbSetValue [2300, (lbSize _InfoMenus)-1, 4];
_InfoMenus lbAdd "Anfänertipps"; lbSetValue [2300, (lbSize _InfoMenus)-1, 5];
_InfoMenus lbAdd "Changelog"; lbSetValue [2300, (lbSize _InfoMenus)-1, 6];lbSetColor[2300,(lbSize _InfoMenus)-1,[1,0,0.082,1]];
_InfoMenus lbAdd "Housing"; lbSetValue [2300, (lbSize _InfoMenus)-1, 7];
_InfoMenus lbAdd "Crafting"; lbSetValue [2300, (lbSize _InfoMenus)-1, 8];
_InfoMenus lbAdd "Kuba WiKi"; lbSetValue [2300, (lbSize _InfoMenus)-1, 9];


_InfoMenus lbSetCurSel 1;
};

//Infos
if(_start isEqualTo 1) exitWith {
private ["_index","_infoText"];
_index = ((findDisplay 41500) displayCtrl 2300) lbValue (lbCurSel 2300);
((findDisplay 41500) displayCtrl 2301) ctrlSetText lbText [2300, lbCurSel 2300];

if(_index isEqualTo 0) exitWith {};


_infoText = call {
//Server
if(_index isEqualTo 1) exitWith {
"Tanoa Life Server<br/>
<t align='center'><t size='1.7px' align='center' color='#FF0000'>Willkommen in Kuba!</t><br/>
<br/>
Wenn dies dein erster Besuch bei uns ist, schau dich ein wenig hier im Infoboard um :)<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Restart-Zeiten: 00:00, 06:00, 12:00, 18:00</t><br/>
";
};

//Regeln
if(_index isEqualTo 2) exitWith {"Die Regeln sind im Forum zu finden<br/><a color='#0099ff' href='http://s634676499.online.de/wbb4/index.php?thread/2-serverregeln/'>zu den Regeln</a>"};

//Steuerung
if(_index isEqualTo 3) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'>ACE Steuerung</t><br/>
<br/>
Wir verwenden auf unserem Server ACE, hier ein paar wichtige Infos.<br/>
<br/>
Ohrenstöpsel sind nur über ACE verfügbar, diese gibt es beim General Store zu kaufen.<br/>
Anlegen könnt ihr sie mit Selbstinteratkion->Ausrüstung->Ohrenstöpsel<br/>
Spieler fesseln geht nur über ACE, dazu auf die Hand der zu fesselnden Person zeigen.<br/>
<br/>
<t size='1.2px' align='left' color='#FF0000'>ACE Medical</t><br/>
<br/>
Um euch einen besseren Überblick beim Bandagieren zu verschaffen,<br/>
solltet ihr am besten das Medical Menu benutzen.<br/>
Um es zu aktivieren, geht unter ESC->Ace Options->Benutze Sanitätsmenü auswählen -><br/>
aktivieren.<br/><br/>
Um euch die Interaktion zu erleichtern, und damit ihr nicht immer auf die aktion<br/>
zielen müsst die ihr ausführen wollt, könnt ihr das ganze auch vereinfachen<br/><br/>
Geht unter Ace Optionen->Wählt Interaktionsmenü im Reiter; <br/>
-> Zeige Mauszeiger bei Selbstinteraktion -> Ja<br/>
-> Zeige Mauszeiger bei Interaktionen -> Ja<br/><br/>
<br/>
<t size='1.2px' align='left' color='#FF0000'>Life Steuerung</t><br/>
<br/>
<t color='#0099ff'>Z</t> Spieler Menü<br/>
<t color='#0099ff'>U</t> Häuser/Fahrzeuge auf/zuschließen<br/>
<t color='#0099ff'>T</t> Fahzeug/Hausinventar<br/>
<t color='#0099ff'>TAB</t> Begrüßung<br/>
<t color='#0099ff'>Windows Key/Alt Gr</t> Interaktionsmenü<br/>
<t color='#0099ff'>Shift+G</t> Player ausknocken (mit Waffe)<br/>
<t color='#0099ff'>Windows Taste</t> ACE Interatkions Menü<br/>
<t color='#0099ff'>Strg + Windows</t> ACE Selbstinteraktionsmenü<br/>
<t color='#0099ff'>Strg+Shift+#</t> Mittelfinger zeigen<br/>
<br/>
<t size='1.2px' align='left' color='#FF0000'>Cop</t><br/>
<br/>
<t color='#0099ff'>Shift+R</t> Person fesseln (NUR IM JAIL!)<br/>
";

};

//Lizensen
if(_index isEqualTo 4) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'>Lizenzen</t><br/>
<br/>
<t color='#0099ff'>Führerschein</t><t align='right' >100$--</t><br/>
<t color='#0099ff'>Tauscherschein</t><t align='right' >500$--</t><br/>
<t color='#0099ff'>Bootsführerschein</t><t align='right' >15.00$--</t><br/>
<t color='#0099ff'>LKW-Führerschein</t><t align='right' >5.000$--</t><br/>
<t color='#0099ff'>Pilotenschein</t><t align='right' >5.500$--</t><br/>
<t color='#0099ff'>Waffenschein</t><t align='right' >20.000$--</t><br/>
<t color='#0099ff'>Eigentumslizenz</t><t align='right' >150.000$--</t><br/>
<br/>
<t color='#0099ff'>Holzverarbeitung</t><t align='right' >4.000$--</t><br/>
<t color='#0099ff'>Zuckerverarbeitung</t><t align='right' >8.000$--</t><br/>
<t color='#0099ff'>Tabakverarbeitung</t><t align='right' >8.000$--</t><br/>
<t color='#0099ff'>Steinverarbeitung</t><t align='right' >10.000$--</t><br/>
<t color='#0099ff'>Stoffverarbeitung</t><t align='right' >10.000$--</t><br/>
<t color='#0099ff'>Salzverarbeitung</t><t align='right' >10.000$--</t><br/>
<t color='#0099ff'>Sandverarbeitung</t><t align='right' >10.000$--</t><br/>
<t color='#0099ff'>Gummiverarbeitung</t><t align='right' >12.000$--</t><br/>
<t color='#0099ff'>Eisenverarbeitung</t><t align='right' >18.000$--</t><br/>
<t color='#0099ff'>Kupferverarbeitung</t><t align='right' >18.000$--</t><br/>
<t color='#0099ff'>Stahlverarbeitung</t><t align='right' >20.000$--</t><br/>
<t color='#0099ff'>Ölverarbeitung</t><t align='right' >25.000$--</t><br/>
<t color='#0099ff'>Stahlplattenverarbeitung</t><t align='right' >28.000$--</t><br/>
<t color='#0099ff'>Diamantenverarbeitung</t><t align='right' >35.000$--</t><br/>
<t color='#0099ff'>Schwarzpulververarbeitung</t><t align='right' >38.000$--</t><br/>
<t color='#0099ff'>Sprengstoffverarbeitung</t><t align='right' >50.000$--</t><br/>
<br/>
<t color='#0099ff'>Kannabis Lizenz</t><t align='right' >18.000$--</t><br/>
<t color='#0099ff'>Heroin Lizenz</t><t align='right' >37.500$--</t><br/>
<t color='#0099ff'>Kokain Lizenz</t><t align='right' >50.000$--</t><br/>
<br/>
<t color='#0099ff'>Rebellenlizenz</t><t align='right' >145.000$-</t><br/>
<br/>
<t size='1.2px' align='left' color='#FF0000'>Rohstoffpreise</t><br/>
<br/>
Nur diese Ressourcen können verkauft werden! Alle anderen sind zum weiterverarbeiten!<br/>
<br/>
<t color='#FFFF00'>Name</t><t align='right' color='#FFFF00'>Einzelpreis</t><br/>
<t>Öl</t><t align='right' >62.5$--</t><br/>
<t>Kupfer</t><t align='right' >46$--</t><br/>
<t>Eisen</t><t align='right' >45.5$--</t><br/>
<t>Salz</t><t align='right' >38$--</t><br/>
<t>Glas</t><t align='right' >29$--</t><br/>
<t>Diamanten</t><t align='right' >65$--</t><br/>
<t>Zement</t><t align='right' >40.9$--</t><br/>
<t>Zigarren</t><t align='right' >37$--</t><br/>
<t>Zucker</t><t align='right' >36$--</t><br/>
";
};

if(_index isEqualTo 5) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'>Vom Tellerwäscher zum Millionär</t><br/>
<br/>
Du willst also das große Geld verdienen? Dann hab ich die richtigen Tipps für dich<br/>
Bei der Einwanderung erhälst du nur ein kleines Startgeld.<br/>
<br/>
Hol dir etwas Geld vom ATM und gehe zum Marktplatz, dort kannst du dich einkleiden<br/>
und etwas Essen und Trinken kaufen.
<br/>
Am wichtigsten ist in Kuba ein fahrbarer Untersatz, um schnell von A nach B zu kommen<br/>
Stop! Bevor du das machst brauchst du Papiere, also ein Führerschein.<br/>
Den gibt es beim Lizenzhändler um die Ecke, für'n 1000er bekommst du ihn auch so.<br/>
<br/>
Nun geh zum Gebrauchtwagenhändler, dort findest du immer einen fahrbaren Untersatz<br/>
Wähle ein Fahrzeug was in dein Budget passt und etwas Kofferraumgröße hat,<br/>
damit du Sachen transportieren kannst. Geschwindigkeit ist auch nicht verkehrt.<br/>
<br/>
Öffne deine Karte, dort solltest du etwas außerhalb der Stadt Plantagen sehen<br/>
Gehe dort hin und pflücke ein paar um diese am Markt zu verkaufen<br/>
";
};

if(_index isEqualTo 6) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'>Developement</t><br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #07.09.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> General Store in beiden Rebellen Außenposten<br/>
<t color='#FF8000'>Fixed</t> Fahrzeugspawn am Rebellenposten Süd geändert<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #05.09.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> General Store in beiden Rebellen Außenposten<br/>
<t color='#00FF00'>Added</t> Tankstellenwart in Vagala<br/>
<t color='#00FF00'>Added</t> Tankstellenwart in Nandai<br/>
<t color='#00FF00'>Added</t> Tankstellenwart in Lami<br/>
<t color='#00FF00'>Added</t> Tankstellenwart in Tuvanaka (Nicht überfallbar)<br/>
<t color='#00FF00'>Added</t> Tankstellenwart in Belfort (Nicht überfallbar)<br/>
<t color='#00FF00'>Added</t> SDAR zum Waffenshop mit UW Munition<br/>
<t color='#FF8000'>Changed</t> Fahrzeugspawn am Rebellenposten Süd geändert<br/>
<t color='#FF8000'>Changed</t> Flugspawn Airport Nord (Sollte nun dort ausparken)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #28.08.2016</t><br/>
<br/>
<t color='#FF8000'>Fixed</t> Tankstellen bringen nun nur noch 3.000 bis 10.000 $<br/>
<t color='#FF8000'>Changed</t> Message Menü überarbeitet<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #27.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> 2 Neue Autos zum Craften<br/>
<t color='#00FF00'>Added</t> 4 neue LKW's zum Craften<br/>
<t color='#00FF00'>Added</t> Clothing Laden zum ADC HQ<br/>
<t color='#FF8000'>Fixed</t> Einjailen geht nun auch ohne Handschellen im Jail!<br/>
<t color='#FF8000'>Changed</t> Typhoon nun ersetzt durch Typhoon GreenHex (Alte bleiben bestehen)<br/>
<t color='#FF8000'>Changed</t> Messer nun legal und verschwindet nicht mehr<br/>
<t color='#FF8000'>Changed</t> Abbauen von Illegalen Sachen nurnoch möglich mit Polizei anwesend<br/>
<t color='#FF8000'>Changed</t> Weed = 1 Cop, Heroin = 2 Cops, Kokain = 3 Cops<br/>
<t color='#FF8000'>Changed</t> Messer nun legal und verschwindet nicht mehr<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #23.08.2016</t><br/>
<br/>
<t color='#FF8000'>Fixed</t> Goldbarren -> Geldautomat-Timer<br/>
<t color='#FF8000'>Changed</t> Helligkeit in der Nacht angepasst und Dauer geändert<br/>
<t color='#FF8000'>Changed</t> Rucksäcke für Zivilisten nun unsichtbar<br/>
<t color='#FF8000'>Changed</t> Craftingmenü nun von überall aus anschaubar, Craften in Zone<br/>
<t color='#FF8000'>Changed</t> Intro angepasst<br/>
<t color='#FF8000'>Changed</t> Reichweite im Key-Menü und Item-Menü von 20m auf 4m geändert<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #21.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Medic Paychecks nach Rang<br/>
<t color='#00FF00'>Added</t> Police Duty Belt für die Fraktionen<br/>
<t color='#00FF00'>Added</t> Neue Polizeioutfits<br/>
<t color='#FF8000'>Fixed</t> Cop Helikoptershop: funktioniert nun mit der kaufbaren Lizenz<br/>
<t color='#FF8000'>Changed</t> Tag/Nacht Zyklus: 10x Tag, 16x so schnell in der Nacht (Realtime)<br/>
<t color='#FF8000'>Changed</t> Tote Personen nicht mehr Lootbar<br/>
<t color='#FF8000'>Changed</t> Cop Waffenläden komplett neu gestaltet<br/>
<t color='#FF8000'>Changed</t> Cop/Medicshops aufgeräumt<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #20.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Neues ADC HQ, welches jetzt größer ist<br/>
<t color='#00FF00'>Added</t> Banditenversteck, die vorstufe zum Rebellen<br/>
<t color='#FF8000'>Changed</t> Rebellenlizenz setzt eine Banditenlizenz vorraus!<br/>
<t color='#FF8000'>Fixed</t> Crafting: plank zu holz gemacht, da es nicht funktioniert!<br/>
<t color='#FF8000'>Fixed</t> Holzabbau sollte wieder funktionieren<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #17.08.2016</t><br/>
<br/>
<t color='#FF8000'>Changed</t> Holzverarbeiter gefixt, benötigt neue Lizenz<br/>
<t color='#FF8000'>Changed</t> Meldung bei den Drogenfeldern wenn Messer fehlt<br/>
<t color='#FF8000'>Changed</t> Meldung beim Holzfälllager wenn Holzaxt fehlt<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #16.08.2016</t><br/>
<br/>
<t color='#FF8000'>Changed</t> Neuer Server! :D<br/>
<t color='#FF8000'>Changed</t> Medicsachen ergänzt<br/>
<t color='#FF8000'>Changed</t> Absperrmenü reworked<br/>
<t color='#FF8000'>Changed</t> Drogenabbau benötigt nun ein Messer, kaufbar > Banditenlager, Gangversteck<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #14.08.2016</t><br/>
<br/>
<t color='#FF8000'>Changed</t> Preise und Lizenzkosten angepasst!<br/>
<t color='#FF8000'>Changed</t> Fische etwas weniger wert<br/>
<t color='#FF8000'>Changed</t> Rohes Fleisch bringt nun doppelt so viel im Verkauf<br/>
<t color='#FF8000'>Changed</t> Jail Bugfixes und kleinigkeiten hinzugefügt!<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #13.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Neues Gefängnis<br/>
<t color='#00FF00'>Added</t> Neue Helikopter für Medic und Civs<br/>
<t color='#00FF00'>Added</t> Neue Skins für die Medics<br/>
<t color='#00FF00'>Added</t> Neues Flugzeug, noch nicht beim Händler erhältlich<br/>
<t color='#00FF00'>Added</t> 2 neue Helikopter in Crafting Menü<br/>
<t color='#FF8000'>Changed</t> Merlin Preis auf 4.200.000<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #09.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> ADC HQ nun im Bau<br/>
<t color='#FF8000'>Fixed</t> Schwarzpulverlizenz nun kaufbar<br/>
<t color='#FF8000'>Fixed</t> Luxushändler gefixt<br/>
<t color='#FF8000'>Fixed</t> Fähre benötigt nun Fähr Lizenz<br/>
<t color='#FF8000'>Fixed</t> Diamantenmine verschoben<br/>
<t color='#FF8000'>Fixed</t> Fahrzeuge SOLLTEN nicht mehr verschwinden<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #07.08.2016</t><br/>
<br/>
<t color='#FF8000'>Fixed</t> TaskForceRadio Bug sollte behoben sein<br/>
<t color='#FF8000'>Fixed</t> Bäume bei der West-Bridge entfernt<br/>
<t color='#FF8000'>Fixed</t> Bankgelände bisschen geändert<br/>
<t color='#FF8000'>Fixed</t> Einige Shops in Georgetown geändert auf Schild<br/>
<t color='#FF8000'>Fixed</t> Bootspawn Bootshop Georgetown geändert<br/>
<t color='#FF8000'>Fixed</t> PAK und Nähset verbrauchen sich nicht mehr<br/>
<t color='#FF8000'>Fixed</t> Karte sollte nachts nun hell sein<br/>
<t color='#FF8000'>Fixed</t> Gewicht OldCoins geändert, verkaufbar am Golddealer<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #06.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Brücken vorrübergehend eingefügt<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #05.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Kuba Wiki Reiter im Infopanel<br/>
<t color='#00FF00'>Added</t> FADAK bei den Medics<br/>
<t color='#00FF00'>Added</t> Artophine nun kaufbar<br/>
<t color='#FF8000'>Fixed</t> Medic Garagenspawn nun auf der Straße<br/>
<t color='#FF8000'>Fixed</t> Medic Helishop gefixt und draußen hingestellt<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #04.08.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Garagen am Airfield Nord und Süd auf der Hauptinsel<br/>
<t color='#FF8000'>Fixed</t> Ausparkkosten von 5% auf 3% des kaufpreises gesenkt<br/>
<t color='#FF8000'>Fixed</t> LKW Preise geändert<br/>
<t color='#FF8000'>Fixed</t> Waffenpreise + Auswahl geändert<br/>
<t color='#FF8000'>Fixed</t> Bootspawn nochmals geändert<br/>
<t color='#FF8000'>Fixed</t> Fischmarkt nun wieder da<br/>
<t color='#FF8000'>Fixed</t> Fischpreise geändert<br/>
<t color='#FF0000'>Removed</t> Wolle + Stoff nicht mehr kaufbar<br/>
<t color='#FF0000'>Removed</t> A3L Jeeps da sie Servercrashs verursacht haben<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #02.08.2016</t><br/>
<br/>
<t color='#FF8000'>Fixed</t> Bootspawn Georgetown<br/>
<t color='#FF8000'>Fixed</t> Drogenplätze neu angelegt<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #31.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Silizium Mine<br/>
<t color='#FF8000'>Fixed</t> Infistar blockiert nicht mehr die 'Spiel' Optionen<br/>
<t color='#FF8000'>Fixed</t> Preisanpassungen<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #29.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Playermarker auf der Map mit Blickrichtung<br/>
<t color='#00FF00'>Added</t> Plastik + Plastikverarbeiter (Rohöl-Öl-Plastik)<br/>
<t color='#00FF00'>Added</t> Aluminium nun herstellbar im Hochofen(Kohle+Bauxit)<br/>
<t color='#00FF00'>Added</t> Luxuswagenshop am Harbour<br/>
<t color='#FF8000'>Fixed</t> DP Missionen nun alle am Boden<br/>
<t color='#FF8000'>Fixed</t> Verkaufspreis von Grapefruit und Orangen geändert (100$-85$)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #24.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Sounds + Benachrichtigung wenn Essen und Trinken unter 30<br/>
<t color='#00FF00'>Added</t> TaskForceRadio Man muss nun im Channel sein außer Havanna<br/>
<t color='#00FF00'>Added</t> Cops sehen keine illegalen Felder mehr<br/>
<t color='#00FF00'>Added</t> UH1C + HEMTT Transport zum Crafting! Yay!<br/>
<t color='#00FF00'>Added</t> Medical Assistance heilt nun ACE Schaden wenn unter 2 Medics<br/>
<t color='#FF8000'>Fixed</t> Sirene der Medics und Cops von Taste F auf 1<br/>
<t color='#FF8000'>Fixed</t> Stoffverarbeiter stehr nun wieder aufm Boden<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #23.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Neues Cop HQ<br/>
<t color='#00FF00'>Added</t> Housing und Crafting im Infopanel, bitte lesen !<br/>
<t color='#00FF00'>Added</t> Earplugs + Australian Police HQ+Gefängnis!<br/>
<t color='#00FF00'>Added</t> Marker von Cops/Medics/Gangs nurnoch sichtbar mit GPS<br/>
<t color='#FF8000'>Fixed</t> Tazerzeit hochgestellt von 15 auf 20 sekunden<br/>
<t color='#FF8000'>Fixed</t> Button im Shop geändert statt Zeitschriften nun Magazine<br/>
<t color='#FF8000'>Fixed</t> Rebellenaußenposten verschoben auf die südliche Insel<br/>
<t color='#FF8000'>Fixed</t> Einige Sachen zum Thema Housing.<br/>
<t color='#FF8000'>Fixed</t> Größe der Storagebox von 1500 auf 2500<br/>
<t color='#FF8000'>Fixed</t> Bug wo man die gelben Tankstellen nicht nutzen konnte<br/>
<t color='#FF0000'>Removed</t> Shift+R und Shift+B, alles nun über ACE3<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #22.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Tankskript: Mausrad an der Zapfsäule!<br/>
<t color='#00FF00'>Added</t> Apex Offroader in den Offroader-Shop eingefügt!<br/>
<t color='#00FF00'>Added</t> TViele neue Animationen in das Animations-Menü<br/>
<t color='#FF8000'>Fixed</t> Farbfilter überarbeitet, nun nicht mehr so schrill<br/>
<t color='#FF8000'>Fixed</t> Waffen gehen beim Kaufen nun wieder in die Hand.<br/>
<t color='#FF8000'>Fixed</t> Schlüsselmenü überarbeitet<br/>
<t color='#FF8000'>Fixed</t> Gewichte der Rohstoffe bearbeitet (Roh:2, Verarb.:1)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #21.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> X26 Tazer eingefügt bei den Polizisten<br/>
<t color='#00FF00'>Added</t> Funkgeräte eingefügt + Reichweite vergrößert<br/>
<t color='#FF8000'>Fixed</t> Rebellenlager verschoben auf die andere Insel<br/>
<t color='#FF8000'>Fixed</t> Bootsshop + Garage auf Rebelleninsel eingefügt<br/>
<t color='#FF8000'>Fixed</t> Autogarage Georgetown verschoben<br/>
<t color='#FF8000'>Fixed</t> Medic HQ Georgetown verbessert<br/>
<t color='#FF8000'>Fixed</t> Geschwindigkeit der Fähre erhöht(60km/h)<br/>
<t color='#FF0000'>Removed</t> HEMTT, Mack und A3L Dumtruck (kommt später)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #20.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> ACE 3.6.2 eingefügt<br/>
<t color='#00FF00'>Added</t> Airdrop eingefügt<br/>
<t color='#00FF00'>Added</t> Honda Civic zum Gebrauchtwagenhändler hinzugefügt<br/>
<t color='#00FF00'>Added</t> Neue Animatioen engefügt<br/>
<t color='#00FF00'>Added</t> Einige ATMs ergänzt<br/>
<t color='#00FF00'>Added</t> Bike Shop eingefügt in Georgetown + Racing Klamottenladen<br/>
<t color='#00FF00'>Added</t> Fähr-Shop eingefügt (LCM Autofähre)<br/>
<t color='#FF8000'>Fixed</t> Fischfang nurnoch in den Gebieten möglich<br/>
<t color='#FF8000'>Fixed</t> Aufbruchgeschwindigkeit bei der Bank verringert<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #19.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Wantedliste bei den Civs deaktiviert<br/>
<t color='#00FF00'>Added</t> Advanced towing für Indipendent (Autoclub) eingefügt<br/>
<t color='#00FF00'>Added</t> Admin Menü gefixed<br/>
<t color='#00FF00'>Added</t> Zuckerverarbeiter eingefügt<br/>
<t color='#00FF00'>Added</t> Rücksäcke, Magazine und Uniformen zum Crafting hinzugefügt<br/>
<t color='#00FF00'>Added</t> Schrottplatz (Chancen= 95% Schrott, 5% Eisen, 0.5% Geodreieck)<br/>
<t color='#00FF00'>Added</t> Papier zum Markt hinzugefügt<br/>
<t color='#00FF00'>Added</t> Sturmgewehbauplan nun craftbar, Fabrik, 20 Papier 2 Geodreiecke<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #18.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Zahlreiche Waffen zum Craften eingefügt (Crafting Zone)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #17.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Hunderte neue Kleidungsstücke (Zivi, Gang und Rebellenshop<br/>
<t color='#00FF00'>Added</t> Fahrzeugcrafting durch Bauteile erweitert<br/>
<t color='#00FF00'>Added</t> MrShounka Fahrzeuge gefixt (Modpack)<br/>
<t color='#00FF00'>Added</t> SMIL Westen gefixt (Modpack)<br/>
<t color='#00FF00'>Added</t> Bloodlust Mod eingefügt (Modpack)<br/>
<t color='#00FF00'>Added</t> Gesten auf Tasten 2-9 eingefügt<br/>
<t color='#FF8000'>Fixed</t> Leichen nun lootbar!<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #16.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> CBA3 v.3.0.0 eingefügt<br/>
<t color='#00FF00'>Added</t> Fahrzeugcrafting! Der erste Tempest rollt vom Band!<br/>
Zum Craften in die Crafting Zone gehen, dort findet ihr alle benötigten Infos und Materialien!
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #12.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> ACE3 v.3.6.1 eingefügt<br/>
<t color='#00FF00'>Added</t> CBA3 v.2.5.0 eingefügt<br/>
<t color='#FF8000'>Fixed</t> Modpack (RESYNC NÖTIG)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #10.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Liefermissionen eingefügt<br/>
<t color='#00FF00'>Added</t> Medic Shops und Klamotten eingefügt<br/>
<t color='#00FF00'>Added</t> Automatische Restarts: 00:00, 06:00, 12:00, 18:00<br/>
<t color='#00FF00'>Added</t> ACE Markers auf der Map korrigiert<br/>
<t color='#00FF00'>Added</t> Weitere Fähranleger<br/>
<t color='#00FF00'>Added</t> Polizei Trainingsgelände<br/>
<t color='#00FF00'>Added</t> Polizei Loadout am HQ (Komplette Ausrüstung<br/>
<t color='#FF8000'>Fixed</t> ACE3 Items nun kaufbar und im Inventar<br/>
<t color='#FF8000'>Fixed</t> Modpack (RESYNC NÖTIG)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #09.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Einige Häuser zum Housing<br/>
<t color='#00FF00'>Added</t> Statusbar am unteren Rand<br/>
<t color='#00FF00'>Added</t> 20% Chance beim Einbruch ins Haus<br/>
<t color='#FF8000'>Fixed</t> Modpack (RESYNC NÖTIG)<br/>
<br/>
<br/>
<t size='1.2px' align='left' color='#0099ff'>Changelog #04.07.2016</t><br/>
<br/>
<t color='#00FF00'>Added</t> Advanced Combat Enviroment<br/>
<t color='#00FF00'>Added</t> Task Force Radio<br/>
<t color='#00FF00'>Added</t> Grapefruitsaft + Orangensaft<br/>
<t color='#00FF00'>Added</t> Tabakplantage + Verarbeiter<br/>
<t color='#00FF00'>Added</t> Kohlemine<br/>
<t color='#00FF00'>Added</t> Hochofen zum Herstellen von Stahl (Eisenbarren + Kohle 1:1=2)<br/>
<t color='#FF8000'>Fixed</t> Bankraub + Tresor<br/>
<t color='#FF8000'>Fixed</t> Cops können nun Lizenzen ohne restrain checken<br/>
<t color='#FF8000'>Fixed</t> Housing<br/>
<t color='#FF8000'>Fixed</t> Garagen Hintergrundbild geändert<br/>
";
};

if(_index isEqualTo 7) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'>Housing</t><br/>
<br/>
<t size='1.05px' align='left' color='#0099ff'>Allgemeine Infos</t><br/>
<br/>
Auf Kuba ist es möglich viele Häuser zu kaufen um dort Sachen zu lagern.<br/>
Darunter zählen alle Häuser die begehbar sind und Türen besitzen.<br/>
Um ein Haus zu kaufen einfach auf das gewünschte Haus zugehen<br/>
und die Interaktionstaste drücken (WIN oder ALT GR).<br/>
<br/>
Danach sollte ein Infofenster kommen mit Haus kaufen.<br/>
Klickt man dort drauf wird der Preis und die Anzahl der Container gezeigt.<br/>
<br/>
Das Geld für den Kauf wird vom Bankkonto abgezogen!<br/>
Storageboxen gibt es nur zum Craften, oder man kauft sie von anderen! ;)<br/>
<br/>
<t size='1.05px' align='left' color='#0099ff'>Wichtig!</t><br/>
<br/>
Beim Benutzen einer Storagebox wird diese an den Körper attached,<br/>
damit ihr euren gewünschten Platz aussuchen könnt. Um diese nun am<br/>
gewünschten Ort zu platzieren, muss auf den Boden geguckt werden,<br/>
damit das Skript das Haus erkennt und es reibungslos funktioniert.<br/>
<br/>
Jede Storagebox hat ihr eigenes I und T Inventar!<br/>
Es wird immer das T Inventar von der Kiste geöffnet wo ihr am<br/>
nähsten dran steht!<br/>
<br/>
Ihr könnt platzierte Storageboxen auch wieder entfernen, bedenkt<br/>
aber das diese komplett gelöscht wird samt dem Inhalt!<br/>
Einfach die Box anvisieren und Interaktionstaste drücken,<br/>
dort sollte nun stehen Lagerbox entfernen oder Remove Contaier.<br/>
<br/>
Bedenkt Waffen immer vorher zu zerlegen und lagert die Einzelteile<br/>
in eure Kiste, da sonst Scopes, Schalldämpfer etc nach Restart weg sind<br/>
<br/>
Denkt immer daran euer Haus beim Verlassen abzuschließen,<br/>
auch euer Haus an sich! (interaktionmenü - > Haus abschließen)!<br/>
<br/>
Anzumerken ist auch das Bolzenschneider auch nur craftbar sind,<br/>
diese haben bei Häusern eine Erfolgschance von 20%!<br/>
";
};

if(_index isEqualTo 8) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'>Crafting</t><br/>
<br/>
<t size='1.05px' align='left' color='#0099ff'>Allgemeine Infos</t><br/>
<br/>
Auf unserem Server könnt/müsst ihr viele Sachen craften, da es gewisse<br/>
Sachen nicht am Markt nicht zum Kauf angeboten werden.<br/>
Es soll die Interaktion unter den Spielern steigern, natürlich soll<br/>
dadurch auch die Vielfalt ein wenig gesteigert werden damit euch<br/>
nicht nach 2 tagen langweilig wird ;)<br/>
<br/>
Crafting ist nur bei den 3 Fabriken möglich (Nord, Center, Süd)<br/>
Um zu craften müsst ihr in einer dieser Zones euer Handy rausholen<br/>
und auf Crafting drücken, nun sollte sich das Crafting Menü öffnen<br/>
<br/>
Bedenkt das ihr für Gewisse Waffen/Fahrzeuge erst andere Teile wieder<br/>
Reifen, Motor, Waffenlauf etc benötigt ;)
";
};

if(_index isEqualTo 9) exitWith {
"
<t size='1.2px' align='left' color='#FF0000'><u>Kuba WiKi</u></t><br/>
<br/>
<t color='#0099ff' align='left'><b>Benötigt nix!</b></t><br/><br/>
<t color='#0099ff' align='left'>Grapefruit Orangen Gummi</t><br/>
<t color='#0099ff' align='left'>Tabak Baumwolle Zuckerrohr</t><br/>
<t color='#0099ff' align='left'>Marijuana Kokain Heroin</t><br/>
<br/>
<t color='#0099ff' align='left'><b>Benötigt Spitzhacke!</b></t><br/><br/>
<t color='#0099ff' align='left'>Kupfer Eisen Salz</t><br/>
<t color='#0099ff' align='left'>Sand Diamanten Stein</t><br/>
<t color='#0099ff' align='left'>Öl Kohle Schrott</t><br/>
<t color='#0099ff' align='left'>Bauxit Schwefel Silizium</t><br/>
<br/>
<t color='#0099ff' align='left'><b>Benötigt eine Axt!</b></t><br/><br/>
<t color='#0099ff' align='left'>Holz</t><br/>
<br/>
<t color='#0099ff' align='left'><b>Herstellen</b></t><br/><br/>
<t color='#0099ff' align='left'>Aluminium = Hochofen + Bauxit + Kohle</t><br/>
<t color='#0099ff' align='left'>C4 = Sprengstoffverarbeitung C4 + Bauxit</t><br/>
<t color='#0099ff' align='left'>Schießpulver = Schwefel</t>
<t color='#0099ff' align='left'>Stahl = Hochofen + Eisenbarren + Kohle</t><br/>
<t color='#0099ff' align='left'>Stahlplatte = Stahlplattenverarbeitung + Stahl</t><br/>
<t color='#0099ff' align='left'>Plastik = Plastikverarbeiter + Öl</t><br/>
<t color='#0099ff' align='left'>Rum = Zuckerrohr + Wasserflasche</t><br/>
<br/>
";
}; 



};

//Add Infos
((findDisplay 41500) displayCtrl 2304) ctrlSetStructuredText parseText ("<t size='0.8'>" + _infoText);
};
[] spawn life_fnc_InfoMenu;
//ommsen