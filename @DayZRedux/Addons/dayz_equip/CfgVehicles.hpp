// Generated by unRap v1.06 by Kegetys

class CfgVehicles {
	class NonStrategic;	// External class reference
	
	class BuiltItems : NonStrategic {};
	
	class TrapItems : NonStrategic {};
	
	class Wire_cat1 : BuiltItems {
		scope = public;
		animated = false;
		vehicleClass = "Fortifications";
		icon = "\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
		accuracy = 0.3;	// accuracy needed to recognize type of this target
		mapSize = 5.5;
		displayName = "Wire (CAT1)";
		model = "\dayz_equip\models\wire_cat1.p3d";
		destrType = "DestructTent";
		armor = 100;
		GhostPreview = "Fort_RazorWirePreview";
	};
	
	class Wire_cat2 : Wire_cat1 {
		displayName = "Wire (CAT2)";
		model = "\dayz_equip\models\wire_cat2.p3d";
	};
	
	class Hedgehog_DZ : BuiltItems {
		scope = public;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc\jezek_kov";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Hedgehog (Steel)";
		vehicleClass = "Fortifications";
	};
	
	class Sandbag1_DZ : BuiltItems {
		scope = public;
		destrType = "DestructNo";
		cost = 100;
		model = "\ca\misc2\BagFenceLong.p3d";
		icon = "\Ca\misc3\data\Icons\icon_fortBagFenceLong_ca.paa";
		mapSize = 2;
		armor = 400;
		displayName = "Bag Fence";
		vehicleClass = "Fortifications";
	};
	
	class BearTrap_DZ : TrapItems {
		scope = public;
		destrType = "DestructNo";
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap.p3d";
		
		class Eventhandlers {
			init = "_this execFSM '\z\addons\dayz_code\system\trap_monitor.fsm';";
		};
		
		class AnimationSources {
			class LeftShutter {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
			
			class RightShutter {
				source = "user";
				animPeriod = 0.1;
				initPhase = 1;
			};
		};
		
		class UserActions {
			class OpenTrap {
				position = "";
				displayName = "Reset Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 1";
				statement = "this animate ['LeftShutter', 0];this animate ['RightShutter', 0];";
			};
			
			class CloseTrap {
				position = "";
				displayName = "Activate Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 0";
				statement = "this animate ['LeftShutter', 1];this animate ['RightShutter', 1];";
			};
			
			class CollectTrap {
				position = "";
				displayName = "Take Trap";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase 'LeftShutter' == 1";
				statement = "[0,0,0,['cfgMagazines','TrapBear',this]] call object_pickup;";
			};
		};
	};

	class Strategic;
	class ReammoBox : Strategic {
		animated = false;
		scope = private;
		icon = "\Ca\weapons\Data\map_ico\icomap_ammo_CA.paa";
		model = "\ca\weapons\dummyweapon.p3d";
		displayName = $STR_DN_AMMO_CRATES;
		accuracy = 0.2;	// accuracy needed to recognize type of this target
		typicalCargo[] = {};
		vehicleClass = "Ammo";
		destrType = "DestructBuilding";
		
		class DestructionEffects {
			class Light1 {
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			
			class Sound {
				simulation = "sound";
				type = "Fire";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			
			class Fire1 {
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			
			class Fire2 {
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			
			class Smoke1 {
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.2;
			};
			
			class Smoke2 {
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.4;
			};
			
			class Smoke3 {
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.125;
				interval = 1;
				lifeTime = 3.5;
			};
			
			class HouseDestr {
				simulation = "destroy";
				type = "DelayedDestructionAmmo";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportMaxBackpacks = 1;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;

		/*
		class eventHandlers {
			init = "(_this select 0) execVM '\z\addons\dayz_code\init\object_gearAction.sqf';";
		};
		*/
	};
	
	class WeaponHolderBase : ReammoBox {
		scope = private;
		accuracy = 1000;	// accuracy needed to recognize type of this target
		vehicleClass = "Survival";
		displayName = "Weapon";
		memoryPointSupply = "collect";
		supplyRadius = 3;
		transportMaxWeapons = 0;
		transportMaxMagazines = 0;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
	};
	
	class WeaponHolder_Colt1911 : WeaponHolderBase {
		scope = public;
		displayName = $STR_WPN_HOLDR_1;
		model = "\dayz_equip\proxy\Colt1911.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','Colt1911'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemHatchet : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_41;
		model = "\dayz_equip\models\hatchet.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemHatchet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};

	class WeaponHolder_MeleeHatchet : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_41;
		model = "\dayz_equip\models\hatchet.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','MeleeHatchet'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemCrowbar : WeaponHolderBase {
		scope = public;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};

	class WeaponHolder_MeleeCrowbar : WeaponHolderBase {
		scope = public;
		displayName = "Crowbar";
		model = "\dayz_equip\models\crowbar.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','MeleeCrowbar'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_huntingrifle : WeaponHolderBase {
		scope = public;
		displayName = $STR_WPN_HOLDR_2;
		model = "\dayz_equip\proxy\huntingrifle.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','huntingrifle'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_M4A1 : WeaponHolderBase {
		scope = public;
		displayName = $STR_WPN_HOLDR_3;
		model = "\dayz_equip\proxy\M4A1.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','M4A1'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemTent : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\proxy\tentbag.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemTent'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};

	class WeaponHolder_ItemStorageBox : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_49;
		model = "\ca\weapons\AmmoBoxes\RUBasicAmmo.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemStorageBox'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};

	class WeaponHolder_ItemFlashlight : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_5;
		model = "\dayz_equip\proxy\flashlight.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemFlashlight'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemFlashlightRed : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_6;
		model = "\dayz_equip\proxy\flashlight_mil.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemFlashlightRed'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemWaterbottle : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_12;
		model = "\dayz_equip\proxy\waterbottle.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemWaterbottleUnfilled'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemGenerator : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_31;
		model = "\dayz_equip\models\generator.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemGenerator'] execVM '\z\addons\dayz_code\init\object_generator.sqf';";
		};
	};
	
	class WeaponHolder_ItemToolbox : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_2;
		model = "\dayz_equip\proxy\toolbox.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgWeapons','ItemToolbox'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_PartFueltank : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_8;
		model = "\dayz_equip\proxy\fueltank.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartFueltank'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_PartWheel : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_9;
		model = "\dayz_equip\proxy\wheel.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartWheel'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_PartGeneric : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_10;
		model = "\dayz_equip\proxy\genericparts.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartGeneric'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_PartVRotor : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_32;
		model = "\dayz_equip\proxy\vrotor.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartVRotor'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_PartEngine : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_11;
		model = "\dayz_equip\proxy\engine.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartEngine'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_PartGlass : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_30;
		model = "\dayz_equip\proxy\carglass.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','PartGlass'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemJerrycan : WeaponHolderBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_19;
		model = "\dayz_equip\proxy\jerrycan.p3d";
		
		class eventHandlers {
			init = "[(_this select 0),'cfgMagazines','ItemJerrycan'] execVM '\z\addons\dayz_code\init\object_pickupAction.sqf';";
		};
	};
	
	class WeaponHolder_ItemJerrycanSide : WeaponHolder_ItemJerrycan {
		model = "\dayz_equip\proxy\jerrycan_side.p3d";
	};
	class Land_A_tent;	// External class reference
	class ACamp;	// External class reference
	
	class Land_Cont_RX : Land_A_tent {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
	};

	class Land_Cont2_RX : ACamp {
		vehicleClass = "Survival";
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		transportMaxBackpacks = 5;
	};
	
	class TKBasicAmmunitionBox_EP1; // External class reference
	class Land_Mag_RX : TKBasicAmmunitionBox_EP1 {
		class TransportWeapons {};
		class transportmagazines {};

		transportMaxMagazines = 20;
		transportMaxWeapons = 4;
		transportMaxBackpacks = 0;
	};

	class CardboardBawx : ReammoBox {
		accuracy = 1000;	// accuracy needed to recognize type of this target
		vehicleClass = "Survival";
	};
	
	class FoodBawx0 : CardboardBawx {
		scope = public;
		displayName = $STR_DAYZ_OBJ_1;
		model = "\dayz_equip\models\cardboard_box.p3d";
		
		class TransportWeapons {
			class _xx_ItemMatchbox {
				weapon = "ItemMatchbox";
				count = 3;
			};
			
			class _xx_ItemFlashlight {
				weapon = "ItemFlashlight";
				count = 3;
			};
			
			class _xx_ItemKnife {
				weapon = "ItemKnife";
				count = 3;
			};
		};
		
		class transportmagazines {
			class _xx_FoodCanBakedBeans {
				magazine = "FoodCanBakedBeans";
				count = 6;
			};
			
			class _xx_FoodCanSardines {
				magazine = "FoodCanSardines";
				count = 6;
			};
			
			class _xx_FoodCanFrankBeans {
				magazine = "FoodCanFrankBeans";
				count = 6;
			};
			
			class _xx_FoodCanPasta {
				magazine = "FoodCanPasta";
				count = 6;
			};
		};
	};
	
	class FoodBawx1 : FoodBawx0 {};
	
	class FoodBawx2 : FoodBawx0 {};
	
	class MedBawx0 : CardboardBawx {
		scope = public;
		displayName = $STR_DAYZ_OBJ_2;
		model = "\dayz_equip\models\cardboard_box_med.p3d";
		
		class transportmagazines {
			class _xx_ItemBandage {
				magazine = "ItemBandage";
				count = 4;
			};
			
			class _xx_ItemEpinephrine {
				magazine = "ItemEpinephrine";
				count = 2;
			};
			
			class _xx_ItemMorphine {
				magazine = "ItemMorphine";
				count = 2;
			};
			
			class _xx_ItemBloodbag {
				magazine = "ItemBloodbag";
				count = 1;
			};
			
			class _xx_ItemPainkiller {
				magazine = "ItemPainkiller";
				count = 2;
			};
		};
	};
	
	class AmmoBawxSmall : ReammoBox {
		scope = public;
		vehicleClass = "Survival";
		displayName = "Ammo Small";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
	};
	class Land_Fire;	// External class reference
	
	class Land_Fire_DZ : Land_Fire {
		transportMaxMagazines = 8;
		transportMaxWeapons = 1;
		transportMaxBackpacks = 1;
		
		class TransportMagazines {
			class _xx_PartWoodPile {
				magazine = "PartWoodPile";
				count = "1";
			};
		};
		
		class Eventhandlers {
			init = "_this call eh_localCleanup;";
		};
	};
	
	class AmmoBawxMedium : ReammoBox {
		scope = public;
		vehicleClass = "Survival";
		displayName = "Ammo Medium";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxBig.p3d";
	};
	
	class AmmoBawxBig : ReammoBox {
		scope = public;
		vehicleClass = "Survival";
		displayName = "Ammo Medium";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBox.p3d";
	};
	
	/*
	class AmmoBoxSmall_556 : AmmoBoxSmall {
		displayName = "Ammo 5.56";
		
		class transportmagazines {
			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 20;
			};
			
			class _xx_30Rnd_556x45_StanagSD {
				magazine = "30Rnd_556x45_StanagSD";
				count = 10;
			};
		};
	};
	
	class AmmoBoxSmall_762 : AmmoBoxSmall {
		displayName = "Ammo 7.62";
		
		class transportmagazines {
			class _xx_20Rnd_762x51_DMR {
				magazine = "20Rnd_762x51_DMR";
				count = 10;
			};
			
			class _xx_5Rnd_762x51_M24 {
				magazine = "5Rnd_762x51_M24";
				count = 10;
			};
			
			class _xx_10Rnd_762x54_SVD {
				magazine = "10Rnd_762x54_SVD";
				count = 10;
			};
		};
	};
	*/

	class AmmoBawxSmall_762_556_545 : AmmoBawxSmall {
		displayName = "Ammo Box";
		
		class transportmagazines {
			class _xx_30Rnd_762x39_AK47 {
				magazine = "30Rnd_762x39_AK47";
				count = 3;
			};

			class _xx_30Rnd_556x45_Stanag {
				magazine = "30Rnd_556x45_Stanag";
				count = 3;
			};
			
			class _xx_30Rnd_545x39_AK {
				magazine = "30Rnd_545x39_AK";
				count = 3;
			};
		};
	};
};
