// #include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class AOE_FactionGear
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Gloves",
			"DZ_Characters_Masks",
			"DZ_Characters_Shoes",
			"DZ_Gear_Containers",
			"DZ_Characters_Headgear",
			"DZ_Gear_Tools",
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class PlateCarrierVest;
	class PlateCarrierHolster;
	class PlateCarrierPouches;
	class CoyoteBag_ColorBase;
	class BalaclavaMask_ColorBase;
	class JungleBoots_ColorBase;
	class TacticalGloves_ColorBase;
	class BallisticHelmet_ColorBase;
	class Mich2001Helmet;
	class TacticalShirt_ColorBase;
	class TShirt_ColorBase;
	class TrackSuitPants_ColorBase;
	class Jeans_ColorBase;
	class CargoPants_ColorBase;
	class ReflexVest;
	class Hacksaw;

	class ZOD_TShirt_Black: TShirt_ColorBase
	{
		displayName="ZOD T-Shirt Black";
		descriptionShort="This is the basic ZOD sweatshirt. It wont protect you from much, but it will do in a pinch. Fight For Freedom!";
		scope=2;
		visibilityModifier = 0.98000002;
		hiddenSelectionsTextures[]=
		{
			"AoEServerMods\Gear\data\ZOD_Tshirt_Black\Zod_TShirt_Black_co.paa",
			"AoEServerMods\Gear\data\ZOD_Tshirt_Black\Zod_TShirt_Black_co.paa",
			"AoEServerMods\Gear\data\ZOD_Tshirt_Black\Zod_TShirt_Black_co.paa"
		};
	};

	class FED_TShirt_Green : TShirt_ColorBase
	{
		displayName = "United Federation T-Shirt Green";
		descriptionShort = "This is the basic issue Federation workout hoodie. It wont protect you in battle, but it will get you there. For the Federation!";
		scope = 2;
		visibilityModifier = 0.89999998;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FED_Tshirt_Green\Fed_TShirt_Green_co.paa",
			"AoEServerMods\Gear\data\FED_Tshirt_Green\Fed_TShirt_Green_co.paa",
			"AoEServerMods\Gear\data\FED_Tshirt_Green\Fed_TShirt_Green_co.paa"
		};
	};

	class FM_TShirt_Tan : TShirt_ColorBase
	{
		displayName = "Freeman T-Shirt Tan";
		descriptionShort = "Well, you survived the apocalypse and all you got was this lousy T-shirt.";
		scope = 2;
		visibilityModifier = 0.89999998;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Tan_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Tan_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Tan_co.paa"
		};
	};

	class FM_TShirt_Red : TShirt_ColorBase
	{
		displayName = "Freeman T-Shirt Red";
		descriptionShort = "Well, you survived the apocalypse and all you got was this lousy T-shirt.";
		scope = 2;
		visibilityModifier = 0.89999998;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Red_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Red_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Red_co.paa"
		};
	};

	class FM_TShirt_Blue : TShirt_ColorBase
	{
		displayName = "Freeman T-Shirt Blue";
		descriptionShort = "Well, you survived the apocalypse and all you got was this lousy T-shirt.";
		scope = 2;
		visibilityModifier = 0.89999998;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Blue_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Blue_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Blue_co.paa"
		};
	};

	class FM_TShirt_Beige : TShirt_ColorBase
	{
		displayName = "Freeman T-Shirt Blue";
		descriptionShort = "Well, you survived the apocalypse and all you got was this lousy T-shirt.";
		scope = 2;
		visibilityModifier = 0.89999998;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Beige_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Beige_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Beige_co.paa"
		};
	};

	class FM_TShirt_Grey : TShirt_ColorBase
	{
		displayName = "Freeman T-Shirt Blue";
		descriptionShort = "Well, you survived the apocalypse and all you got was this lousy T-shirt.";
		scope = 2;
		visibilityModifier = 0.89999998;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Grey_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Grey_co.paa",
			"AoEServerMods\Gear\data\FM_Tshirts_Multicolor\Fm_Tshirt_Grey_co.paa"
		};
	};

	class ZOD_TracksuitPants_Black : TrackSuitPants_ColorBase
	{
		displayName = "ZOD Tracksuit Pants Black <3";
		descriptionShort = "Basic ZOD repurposed pants. Get where you're going one leg at a time. GO ZOD!";
		scope = 2;
		visibilityModifier = 0.85000002;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\ZOD_TracksuitPants_Black\Zod_TracksuitPants_Black_co.paa",
			"AoEServerMods\Gear\data\ZOD_TracksuitPants_Black\Zod_TracksuitPants_Black_co.paa",
			"AoEServerMods\Gear\data\ZOD_TracksuitPants_Black\Zod_TracksuitPants_Black_co.paa"
		};
	};

	class FED_TracksuitPants_Green : TrackSuitPants_ColorBase
	{
		displayName = "United Federation Tracksuit Pants Green";
		descriptionShort = "Standard issue Federation joggers. Used best on those long run backs. For the Federation!";
		scope = 2;
		visibilityModifier = 0.85000002;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FED_TracksuitPants_Green\Fed_TracksuitPants_Green_co.paa",
			"AoEServerMods\Gear\data\FED_TracksuitPants_Green\Fed_TracksuitPants_Green_co.paa",
			"AoEServerMods\Gear\data\FED_TracksuitPants_Green\Fed_TracksuitPants_Green_co.paa"
		};
	};

	class FM_Jeans_Brown : Jeans_ColorBase
	{
		displayName = "Freeman Brown Jeans";
		descriptionShort = "We're not saying all this running makes your butt look good, but you're a freshie for a reason.";
		scope = 2;
		visibilityModifier = 0.85000002;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\FM_Jeans_Brown\Fm_Jeans_Brown_male_co.paa",
			"AoEServerMods\Gear\data\FM_Jeans_Brown\Fm_Jeans_Brown_male_co.paa",
			"AoEServerMods\Gear\data\FM_Jeans_Brown\Fm_Jeans_Brown_female_co.paa"
		};
	};

		class Chap_Admin_Vest : ReflexVest
	{
		displayName = "Chap_Admin_Vest";
		descriptionShort = "NO DESCRIPTION GIVEN";
		scope = 2;
		visibilityModifier = 0.1;
		itemsCargoSize[]={10,500};
		hiddenSelections[] =
		{
			"camomale",
			"camofemale",
			"leftarm",
			"leftshoulder",
			"neck",
			"pelvis",
			"rightarm",
			"rightshoulder",
			"spine1",
			"spine2",
			"spine3"

		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\AdminVests\Chap_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Chap_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Chap_AdminVest_co.paa"
		};
	};
	class Whale_Admin_Vest : ReflexVest
	{
		displayName = "Whale_Admin_Vest";
		descriptionShort = "NO DESCRIPTION GIVEN";
		scope = 2;
		visibilityModifier = 0.1;
		itemsCargoSize[]={10,500};
		hiddenSelections[] =
		{
			"camomale",
			"camofemale",
			"leftarm",
			"leftshoulder",
			"neck",
			"pelvis",
			"rightarm",
			"rightshoulder",
			"spine1",
			"spine2",
			"spine3"

		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\AdminVests\Whale_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Whale_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Whale_AdminVest_co.paa"
		};
	};

	class Squaddie050_Admin_Vest : ReflexVest
	{
		displayName = "Master_Squaddie_050_Admin_Vest";
		descriptionShort = "NO DESCRIPTION GIVEN";
		scope = 2;
		visibilityModifier = 0.1;
		itemsCargoSize[]={10,500};
		hiddenSelections[] =
		{
			"camomale",
			"camofemale",
			"leftarm",
			"leftshoulder",
			"neck",
			"pelvis",
			"rightarm",
			"rightshoulder",
			"spine1",
			"spine2",
			"spine3"

		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\AdminVests\Squaddie050_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Squaddie050_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Squaddie050_AdminVest_co.paa"
		};
	};

	class Cardinal_Admin_Vest : ReflexVest
	{
		displayName = "Cardinal_Admin_Vest";
		descriptionShort = "NO DESCRIPTION GIVEN";
		scope = 2;
		visibilityModifier = 0.1;
		itemsCargoSize[]={10,500};
		hiddenSelections[] =
		{
			"camomale",
			"camofemale",
			"leftarm",
			"leftshoulder",
			"neck",
			"pelvis",
			"rightarm",
			"rightshoulder",
			"spine1",
			"spine2",
			"spine3"

		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\AdminVests\Cardinal_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Cardinal_AdminVest_co.paa",
			"AoEServerMods\Gear\data\AdminVests\Cardinal_AdminVest_co.paa"
		};
	};

	class HakkSaw : Hacksaw
	{
		scope = 2;
		displayName = "$STR_CfgVehicles_Hacksaw0";
		descriptionShort = "$STR_CfgVehicles_Hacksaw1";
		model = "\dz\gear\tools\hacksaw.p3d";
		action = "GestureMeleeBayonetStab";
		repairableWithKits[] = { 5,4 };
		repairCosts[] = { 30,25 };
		itemInfo[] =
		{
			"Knife"
		};
		rotationFlags = 17;
		RestrainUnlockType = 1;
		canSkinBodies = 1;
		weight = 800;
		itemSize[] = { 4,2 };
		fragility = 0.079999998;
		openItemSpillRange[] = { 10,40 };
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
				};
			};
		};
	};
	class LightBallisticVest_Viper : PlateCarrierVest
	{
		displayName = "Light Plate Carrier";
		descriptionShort = "Light Plate Carrier Viper Pattern";
		scope = 2;
		quickBarBonus = 10;

		hiddenSelections[] =
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.01;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
			};
		};
	};
	class HeavyBallisticVest_Viper : PlateCarrierVest
	{
		displayName = "Heavy Plate Carrier";
		descriptionShort = "Heavy Plate Carrier Viper Pattern";
		scope = 2;
		quickBarBonus = 10;
		attachments[] =
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"tripWireAttachment",
			"VestHolster",
			"VestPouch"
		};
		hiddenSelections[] =
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.125;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.125;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
			};
		};
	};
	class GunHolster_Viper : PlateCarrierHolster
	{
		scope = 2;
		displayName = "Viper Gun Holster";
		descriptionShort = "Gun Holster Viper Pattern.";
		visibilityModifier = 0.89999998;
		hiddenSelections[] =
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class AttachablePouches_Viper : PlateCarrierPouches
	{
		scope = 2;
		displayName = "Viper Pouches";
		descriptionShort = "Attachable Pouches Viper Pattern.";
		visibilityModifier = 0.89999998;
		hiddenSelections[] =
		{
			"camoGround",
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\BallisticVest\Ballisticvest_Viper_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class CoyoteBag_Viper : CoyoteBag_ColorBase
	{
		displayName = "Coyote Bag (Viper)";
		descriptionShort = "A military Coyote Backpack with Viper Camouflage";
		scope = 2;
		itemsCargoSize[] = { 10,14 };
		visibilityModifier = 0.69999999;
		attachments[] =
		{
			"shoulder",
			"Chemlight",
			"WalkieTalkie"
		};
		hiddenSelections[] =
		{
			"camomale",
			"camofemale",
			"zbytek"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\CoyoteBackPack\Viper_coyotebp_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\CoyoteBackPack\Viper_coyotebp_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\CoyoteBackPack\Viper_coyotebp_co.paa",
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class BalaclavaMask_Viper : BalaclavaMask_ColorBase
	{
		scope = 2;
		color = "black";
		visibilityModifier = 0.85000002;
		displayName = "Viper Balaclava Mask";
		descriptionShort = "Tactical Mask with the Viper Logo on the Side";
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\Balaclava_Mask\Balaclava_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Balaclava_Mask\Balaclava_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Balaclava_Mask\Balaclava_Viper_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class JungleBoots_Viper : JungleBoots_ColorBase
	{
		scope = 2;
		visibilityModifier = 0.80000001;
		displayName = "Viper Pattern JungleBoots";
		descriptionShort = "Tactical Jungle Boots for Intense Firefights (Viper Pattern)";
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\JungleBoots\JungleBoots_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\JungleBoots\JungleBoots_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\JungleBoots\JungleBoots_Viper_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	class TacticalGloves_Viper : TacticalGloves_ColorBase
	{
		scope = 2;
		visibilityModifier = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\Tactical_Gloves\TacticalGloves_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Tactical_Gloves\TacticalGloves_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Tactical_Gloves\TacticalGloves_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
		};
	};
	/*class BallisticHelmet_Viper : BallisticHelmet_ColorBase   //WAIT FOR AGENTS GO (Will be another one apparently)
	{
		scope = 2;
		displayName = "Viper Ballistic Helmet";
		descriptionShort = "A Ballistic Helmet with Viper Pattern";
		visibilityModifier = 1;
		hiddenSelections[] =
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\Ballistic_Helmet\BallisticHelmet_Viper.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Ballistic_Helmet\BallisticHelmet_Viper.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Ballistic_Helmet\BallisticHelmet_Viper.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.125;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.125;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
			};
		};
	};*/
	class Mich2001Helmet_Viper : Mich2001Helmet
	{
		scope = 2;
		displayName = "Mich2001 Tactical Helmet Viper Pattern";
		descriptionShort = "Mich2001 Viper Pattern Tactical Helmet used by the Viper-Squad";
		visibilityModifier = 1;
		hiddenSelections[] =
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\Ballistic_Helmet\mich2001_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Ballistic_Helmet\mich2001_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Ballistic_Helmet\mich2001_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.125;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.125;
					};
					class Blood
					{
						damage = 0.05;
					};
					class Shock
					{
						damage = 0.125;
					};
				};
			};
		};
	};
	class TacticalJacket_Viper : TacticalShirt_ColorBase
	{
		scope = 2;
		displayName = "Viper-Squad Tactical Jacket";
		descriptionShort = "A Tactical Jacket with the insignia of the Viper Squad.";
		visibilityModifier = 1;
		hiddenSelections[] =
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\Tactical_Jacket\TacticalJacket_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Tactical_Jacket\TacticalJacket_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\Tactical_Jacket\TacticalJacket_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.85000002;
					};
					class Blood
					{
						damage = 0.85000002;
					};
					class Shock
					{
						damage = 0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.85000002;
					};
					class Blood
					{
						damage = 0.85000002;
					};
					class Shock
					{
						damage = 0.85000002;
					};
				};
			};
		};
	};
	class CargoPants_Viper : CargoPants_ColorBase
	{
		scope = 2;
		displayName = "Viper Cargo Pants";
		descriptionShort = "A combat pants worn as part of the Viper Squad default Gear."
			itemsCargoSize[] = { 6,5 };
		visibilityModifier = 1;
		hiddenSelections[] =
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Gear\data\Viper_Squad\CargoPants\CargoPants_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\CargoPants\CargoPants_Viper_co.paa",
			"AoEServerMods\Gear\data\Viper_Squad\CargoPants\CargoPants_Viper_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100000;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.85000002;
					};
					class Blood
					{
						damage = 0.85000002;
					};
					class Shock
					{
						damage = 0.85000002;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.85000002;
					};
					class Blood
					{
						damage = 0.85000002;
					};
					class Shock
					{
						damage = 0.85000002;
					};
				};
			};
		};
	};
};