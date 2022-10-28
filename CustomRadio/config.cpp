class CfgPatches //Mod by S4MT3K // Wanted to create a new one, to EXACTLY get the functions That I want. You got a problem with it? Well, cry me a river :D
{
	class AOE_Custom_Radio_Base
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class AOE_Custom_Radio : Inventory_Base
	{
		scope = 2;
		displayName = "Modified Radio";
		descriptionShort = "Able To play Casettes With The AOE Copy Protection";
		model = "\dz\gear\radio\unitra_wilga.p3d";
		animClass = "Knife";
		weight = 1700;
		itemSize[] = { 2,3 };
		fragility = 0.0099999998;
		absorbency = 0.5;
		attachments[] =
		{
			"BatteryD",
			"AOE_BaseCassette"
		};
		oldpower = 0;
		repairableWithKits[] = { 5,7 };
		repairCosts[] = { 30,25 };
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.02; //0.02;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{

						{
							1.00000000,

							{
								"DZ\gear\radio\data\unitra_wilga.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\gear\radio\data\unitra_wilga.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\gear\radio\data\unitra_wilga_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\gear\radio\data\unitra_wilga_damage.rvmat"
							}
						},

						{
							0.00000000,

							{
								"DZ\gear\radio\data\unitra_wilga_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};
	};
	class AOE_BaseCassette : Inventory_Base
	{
		inventorySlot = "AOE_BaseCassette";
	};
};

class CfgSlots
{
	class AOE_Universal_CasetteSlot
	{
		name = "AOE_BaseCassette";
		displayName = "Attached Cassette";
		ghostIcon = "default";
	};
};