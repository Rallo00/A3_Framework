/* FUNCTIONS */
class CfgFunctions
{
	class FWK
	{
		tag = "FWK";
		class Framework
		{
			file = "RalloFramework\functions";
			//Actions
			class activateStealth {};			//[0 to 1] spawn FWK_fnc_activateStealth; (allUnits)
			class addVA {};						//[object] spawn FWK_fnc_addVA;
			class allowCustomSupports {};		//[] spawn FWK_fnc_allowCustomSupports;
			class bigExplosion {};				//[object] spawn FWK_fnc_bigExplosion;
			class centerScreenText {}; 			//["TEXT"] spawn FWK_fnc_centerScreenText;
			class craterArea {};				//["markerName", numOfCraters] spawn FWK_fnc_craterArea;
			class deleteVehicle {};				//[object] spawn FWK_fnc_deleteVehicle; (also deletes Crew inside)
			class eastWestTruce {};				//[0 or 1] spawn FWK_fnc_eastWestTruce;
			class ending {};					//[] spawn FWK_fnc_ending;
			class explosiveUAV {};				//[obj] spawn FWK_fnc_explosiveUAV;
			class getCurrentOwnership {};		//[position, distanceRange] call FWK_fnc_getCurrentOwnership;
			class getFactionAir {};				//[faction] call FWK_fnc_getFaction;
			class getFactionAntiAir {};			//[faction] call FWK_fnc_getFaction;
			class getFactionArtillery {};		//[faction] call FWK_fnc_getFaction;
			class getFactionBoat {};			//[faction] call FWK_fnc_getFaction;
			class getFactionGunship {};			//[faction] call FWK_fnc_getFaction;
			class getFactionHelo {};			//[faction] call FWK_fnc_getFaction;
			class getFactionHV {};				//[faction] call FWK_fnc_getFaction;
			class getFactionLV {};				//[faction] call FWK_fnc_getFaction;
			class getFactionInfantry {};		//[faction] call FWK_fnc_getFaction;
			class getFactionStatic {};			//[faction] call FWK_fnc_getFaction;
			class getFactionSupport {};			//[faction] call FWK_fnc_getFaction;
			class getRandomAO {};				//[] call FWK_fnc_getRandomAO;
			class getRandomAOLocation {};		//[AO, minDistanceRange, maxDistanceRange] [] call FWK_fnc_getRandomAOLocation;
			class getUnitsCount {};				//[position, distanceRange, side] spawn FWK_fnc_getUnitsCount;
			class halo {};						//[player] spawn FWK_fnc_halo;
			class isModActive {};				//["mod"] call FWK_fnc_isModActive;
			class isPlayerVanillaFaction {};	//[] call FWK_fnc_isPlayerVanillaFaction;
			class loadSettingsTFAR {};			//[] spawn FWK_fnc_loadSettingsTFAR;
			class localAmbientSounds {};		//[] spawn FWK_fnc_localAmbientSounds;
			class localPlayerInit {};			//[] spawn FWK_fnc_localPlayerInit;
			class mapCleanup {};				//[position, range] spawn FWK_fnc_mapCleanup;
			class minefield {};					//[position, int minMines, int maxMines] spawn FWK_fnc_minefield;
			class enemyQrfAir {};				//[destination] spawn FWK_fnc_enemyQrfAir;
			class enemyQrfLand {};				//[destination] spawn FWK_fnc_enemyQrfLand;
			class raiseAlarm {};				//[object, int totalNumbersOfAlarmSound] spawn FWK_fnc_raiseAlarm;
			class randomVehicleStatus {};		//[object, bool forceSomeFuelInVehicle, bool forceSomeAmmoInVehicle] spawn FWK_fnc_randomVehicleStatus;
			class randomWeather {};				//[] spawn FWK_fnc_randomWeather;
			class reinforcements {};			//[side, spawnPosition, int rangeSpawn, bool spawnVehicle] spawn FWK_fnc_reinfocements;
			class setDateTime {};				//[int] spawn FWK_fnc_setDateTime;
			class spawnEnemy {}; 				//[position, areaSize, criticalLevel] spawn FWK_fnc_spawnEnemy;
			class surrenderUnits {};			//[position, distanceRange, side] spawn FWK_fnc_surrenderUnits;
			class supportVehicleDrop {};		//[player] spawn FWK_fnc_supportVehicleDrop;
			class teleportToLeader {};			//[player] spawn FWK_fnc_teleportToLeader;
			class tfarRadioUnbug {};			//[this] spawn FWK_fnc_tfarRadioUnbug;
		};
	};
};