class CfgPatches //Mod by S4MT3K
{
	class AOE_Books
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
	class ItemBook;

	class Book_AWalkInTheAbyss : ItemBook
	{
		scope = 2;
		title = "A Walk In The Abyss";
		author = "Shane Moore, Paul Genesse, Patrick M. Tracy, Patrick S. Tomlinson";
		//file = ".html";
		displayName = "Abyss Book";
		descriptionShort = "ORCS! GREYSHALKS! AND GIANTS! Prepare yourselves, intrepid reader, for three complete novelettes set in the Abyss Walker world of author Shane Moore.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\AWalkInTheAbyss\data\AWalkInTheAbyss_Book.paa"
		};
	};

	class Book_Lucifer : ItemBook
	{
		scope = 2;
		title = "Lucifer - The Untold Story";
		author = "Shane Moore";
		//file = ".html";
		displayName = "Lucifer Book";
		descriptionShort = "It started with a dream, witnessing the moment Lucifer was in the throne room of God - and rebelled.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\Lucifer\data\Lucifer_Book.paa"
		};
	};

	class Book_OrcsAndGenerals : ItemBook
	{
		scope = 2;
		title = "Orcs And Generals";
		author = "Shane Moore";
		//file = ".html";
		displayName = "Orcs And Generals Book";
		descriptionShort = "Follow the adventures of Amerix and Vlargcar, from the Abyss Walker core series novel, Return of the Father, as they carve their names into legend.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\OrcsAndGenerals\data\OrcsAndGenerals_Book.paa"
		};
	};

	class Book_TheAOEAshFall : ItemBook
	{
		scope = 2;
		title = "Ash Fall";
		author = "Shane Moore, Ben Reeder";
		//file = ".html";
		displayName = "Ash Fall Book";
		descriptionShort = "It's been around five years since the fall of mankind. God had abandoned the earth and the Nephilims were loosed ...and they were coming to claim us all. But the Nephilims forgot one thing: Man has a talent for survival!";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\TheAOEAshFall\data\TheAOEAshFall_Book.paa"
		};
	};

	class Book_TheAOEDarkHarvest : ItemBook
	{
		scope = 2;
		title = "Dark Harvest";
		author = "Shane Moore, Edward Gehlert And Kendall R. Hart";
		//file = ".html";
		displayName = "Dark Harvest Book";
		descriptionShort = "Change sometimes comes swiftly and with no warning at all. Sean Tyler learns this painful lesson at the tender age of six when the world he knows comes to a violent and bloody end.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\TheAOEDarkHarvest\data\TheAOEDarkHarvest_Book.paa"
		};
	};

	class Book_TheAOEDesolation : ItemBook
	{
		scope = 2;
		title = "AOE Desolation";
		author = "Shane Moore, Edward Gehlert And Kendall R. Hart";
		//file = ".html";
		displayName = "Desolation Book";
		descriptionShort = "The rapture came and went... Hundreds of millions world wide awoke as ravenous flesh eating monsters. Society has broken down and a small pocket of freedom fighters has risen up to help save mankind.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\TheAOEDesolation\data\TheAOEDesolation_Book.paa"
		};
	};

	class Book_TheAOERapture : ItemBook
	{
		scope = 2;
		title = "Rapture";
		author = "Shane Moore, Edward Gehlert And Kendall R. Hart";
		//file = ".html";
		displayName = "Rapture Book";
		descriptionShort = "Nations rise against nations, there are wars and rumors of wars, fires, earthquakes, floods, and droughts. Incurable disease sweep across the lands and brothers take up against their fathers.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\TheAOERapture\data\TheAOERapture_Book.paa"
		};
	};

	class Book_TheAOEReapingSorrows : ItemBook
	{
		scope = 2;
		title = "Reaping Sorrows";
		author = "Shane Moore, Edward Gehlert And Kendall R. Hart";
		//file = ".html";
		displayName = "Reaping Sorrows Book";
		descriptionShort = "The Rapture marked salvation for untold millions of people worldwide. But for those like thirteen-year-old Sean Tyler and his friends it held a much darker meaning.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\TheAOEReapingSorrows\data\TheAOEReapingSorrows_Book.paa"
		};
	};

	class Book_TheAOEScourge : ItemBook
	{
		scope = 2;
		title = "Scourge";
		author = "Shane Moore, Edward Gehlert And Kendall R. Hart";
		//file = ".html";
		displayName = "Scourge Book";
		descriptionShort = "The world beheld the Rapture. The plague on humanity continues. 1.3 million American adults are now ravenous killers. 35 million infected children now hunger for flesh.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\TheAOEScourge\data\TheAOEScourge_Book.paa"
		};
	};

	class Book_WhiteWraith : ItemBook
	{
		scope = 2;
		title = "White Wraith";
		author = "Shane Moore";
		//file = ".html";
		displayName = "White Wraith Book";
		descriptionShort = "Living proof of his mother's infidelity and cursed with white fur at birth, young Blarik struggles to survive in a family that despises him.";
		rotationFlags = 1;
		hiddenSelectionsTextures[] =
		{
			"AoEServerMods\Books\WhiteWraith\data\WhiteWraith_Book.paa"
		};
	};
};