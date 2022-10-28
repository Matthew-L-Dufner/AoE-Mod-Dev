class CfgPatches //Mod by S4MT3K
{
	class AOE_Music_Brolo_Base
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
	class Cassette;
	class AOE_BaseCassette : Cassette {};

	class AOE_BroloAnthem_Cassette : AOE_BaseCassette // Song #1
	{
		scope = 2;
		displayName = "The Brolo Anthem";
		descriptionShort = "The Brolo Anthem--the only one you need!";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\BroloAnthem\cassette_BroloAnthem.paa"
		};
	};

	class AOE_DoubleWideLove_Cassette : AOE_BaseCassette // Song #2
	{
		scope = 2;
		displayName = "Double Wide Love";
		descriptionShort = "Rich Mansfield and Kendall Hart";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\DoubleWideLove\cassette_DoubleWideLove.paa"
		};
	};

	class AOE_BloodAndBones_Cassette : AOE_BaseCassette // Song #3
	{
		scope = 2;
		displayName = "Blood And Bones";
		descriptionShort = "Steven Tibbs feat. Micki Consiglio";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\BloodAndBones\cassette_BloodAndBones.paa"
		};
	};

	class AOE_NerdsDoItBetter_Cassette : AOE_BaseCassette // Song #4
	{
		scope = 2;
		displayName = "Nerds Do It Better";
		descriptionShort = "Steven Tibbs";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\NerdsDoItBetter\cassette_NerdsDoItBetter.paa"
		};
	};

	class AOE_NeverDrinkingAgain_Cassette : AOE_BaseCassette // Song #5
	{
		scope = 2;
		displayName = "Never Drinking Again";
		descriptionShort = "Steven Tibbs";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\NeverDrinkingAgain\cassette_NeverDrinkingAgain.paa"
		};
	};

	class AOE_PainIsGone_Cassette : AOE_BaseCassette // Song #6
	{
		scope = 2;
		displayName = "Pain Is Gone";
		descriptionShort = "Steven Tibbs";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\PainIsGone\cassette_PainIsGone.paa"
		};
	};

	class AOE_MovingAlong_Cassette : AOE_BaseCassette // Song #7
	{
		scope = 2;
		displayName = "Moving Along";
		descriptionShort = "Steven Tibbs";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\MovingAlong\cassette_MovingAlong.paa"
		};
	};

	class AOE_NerdStar_Cassette : AOE_BaseCassette // Song #8
	{
		scope = 2;
		displayName = "Nerd Star";
		descriptionShort = "Shane Moore and Steven Tibbs";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\NerdStar\cassette_NerdStar.paa"
		};
	};

	class AOE_ColdWorld_Cassette : AOE_BaseCassette // Song #9
	{
		scope = 2;
		displayName = "Cold World";
		descriptionShort = "Shane Moore and Steven Tibbs";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\ColdWorld\cassette_ColdWorld.paa"
		};
	};

	class AOE_LordOfLight_Cassette : AOE_BaseCassette // Song #10
	{
		scope = 2;
		displayName = "Lord Of Light - Lucifer the untold story soundtrack";
		descriptionShort = "Shane Moore and Former Shaman's Harvest hit artist, Joe Grizzly";
		model = "\dz\gear\tools\cassette.p3d";
		rotationFlags = 17;
		weight = 80;
		absorbency = 0.5;
		itemSize[] = { 2,1 };
		hiddenSelections[] =
		{
			"zbytek",
		};
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Cassettes\LordOfLight\cassette_LordOfLight.paa"
		};
	};
};

//--------------------------------------------------------
//---------------------SoundSets--------------------------
//--------------------------------------------------------
class CfgSoundSets
{
	class AOE_Mods_SoundSet_Base
	{
		sound3DProcessingType = "character3DProcessingType";
		volumeCurve = "characterAttenuationCurve";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};

	class BroloAnthem_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"BroloAnthem_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class DoubleWideLove_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"DoubleWideLove_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class BloodAndBones_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"BloodAndBones_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class NerdsDoItBetter_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"NerdsDoItBetter_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class NeverDrinkingAgain_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"NeverDrinkingAgain_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class PainIsGone_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"PainIsGone_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class MovingAlong_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"MovingAlong_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class NerdStar_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"NerdStar_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class ColdWorld_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"ColdWorld_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};

	class LordOfLight_SoundSet : AOE_Mods_SoundSet_Base
	{
		soundShaders[] =
		{
			"LordOfLight_SoundShader"
		};
		frequencyRandomizer = 0;
		volumeRandomizer = 0;
	};
};
//--------------------------------------------------------
//-------------------SoundShaders-------------------------
//--------------------------------------------------------
class CfgSoundShaders
{
	class AOE_Mods_SoundShader_Base
	{
		range = 20;
	};

	class BroloAnthem_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\BroloAnthem\BroloAnthem.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class DoubleWideLove_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\DoubleWideLove\DoubleWideLove.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class BloodAndBones_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\BloodAndBones\BloodAndBones.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class NerdsDoItBetter_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\NerdsDoItBetter\NerdsDoItBetter.ogg",
				1
			}
		};
		volume = 0.1;
	};

	class NeverDrinkingAgain_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\NeverDrinkingAgain\NeverDrinkingAgain.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class PainIsGone_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\PainIsGone\PainIsGone.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class MovingAlong_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\MovingAlong\MovingAlong.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class NerdStar_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\NerdStar\NerdStar.ogg",
				1
			}
		};
		volume = 0.3;
	};

	class ColdWorld_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\ColdWorld\ColdWorld.ogg",
				1
			}
		};
		volume = 0.1;
	};

	class LordOfLight_SoundShader : AOE_Mods_SoundShader_Base
	{
		samples[] =
		{
			{
				"AoEServerMods\Cassettes\LordOfLight\LordOfLight.ogg",
				1
			}
		};
		volume = 0.3;
	};
};