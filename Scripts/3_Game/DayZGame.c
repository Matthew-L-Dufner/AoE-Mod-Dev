modded class LoadingScreen //LoadingScreen by S4MT3K 
{
	void LoadingScreen(DayZGame game)
	{
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));
		m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);
		m_ImageBackground.LoadImageFile(0, GetRandomLoadingBackground());
		m_ImageBackground.LoadMaskTexture(""); 
		ProgressAsync.SetUserData(m_ImageBackground);
	}

	override void Show()
	{
		Widget lIcon = m_ImageBackground;
		Widget pText = m_ProgressLoading;
		m_ProgressText.SetText("");
		m_ProgressLoading.SetCurrent(0.0);
		m_ImageBackground.SetMaskProgress(0.0);

		if (!m_WidgetRoot.IsVisible())
		{
			if (m_DayZGame.GetUIManager().IsDialogVisible())
			{
				m_DayZGame.GetUIManager().HideDialog();
			}

			if (m_DayZGame.GetMissionState() == DayZGame.MISSION_STATE_MAINMENU)
			{
				m_ImageWidgetBackground.Show(true);
				m_TextWidgetStatus.Show(true);
			}
			else
			{
				m_ImageWidgetBackground.Show(true);
				m_TextWidgetStatus.Show(false);
			}

			m_WidgetRoot.Show(true);
			m_TextWidgetTitle.SetText("");
			m_TextWidgetStatus.SetText("");
		}

		ProgressAsync.SetProgressData(pText);
		ProgressAsync.SetUserData(lIcon);
	}

	//override void Show()
	//{
	//	DayZGame gm_Game = DayZGame.Cast(GetGame());

	//	if (GetGame() == NULL)
	//	{
	//		m_ImageWidgetBackground.LoadImageFile(0, GetRandomLoadingBackground());
	//	}

	//	else
	//	{
	//		m_WidgetRoot = gm_Game.GetLoadingWorkspace().CreateWidgets("AoEServerMods\\PreloadScript\\LoadingScreen.layout");
	//		//Print("m_WidgetRoot = " + m_WidgetRoot);
	//		//Print("GetGame() = " + GetGame());
	//		Class.CastTo(m_ImageWidgetBackground, m_WidgetRoot.FindAnyWidget("LoadingImage"));
	//		Class.CastTo(m_TextWidgetTitle, m_WidgetRoot.FindAnyWidget("TextiText")); //Has Just to be there to Avoid The Nasty TitleNullPointer (Can Cause The Game To Freezes if not Available)

	//		m_ImageWidgetBackground.LoadImageFile(0, GetRandomLoadingBackground());
	//	}

	//	m_TextWidgetTitle.SetText(".");
	//}

	string GetRandomLoadingBackground()
	{
		private int rand = Math.RandomIntInclusive(0, 17);
		const string images[] = 
		{
				"AoEServerMods/PreloadScript/EnochLoadingScreen.paa",
				"AoEServerMods/PreloadScript/AoeCommunity.paa",
				"AoEServerMods/PreloadScript/PeterMayHewCommandsIt.paa",
				"AoEServerMods/PreloadScript/JoinTheZod.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon1.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon2.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon3.paa",
				"AoEServerMods/PreloadScript/ViolentFreemanGangs.paa",
				"AoEServerMods/PreloadScript/FederationOnTheMove.paa",
				"AoEServerMods/PreloadScript/FindUsOnFacebook.paa",
				"AoEServerMods/PreloadScript/JoinTheUnitedFederation.paa",
				"AoEServerMods/PreloadScript/ThunderGame.paa",
				"AoEServerMods/PreloadScript/ExploreUniqueTerrain.paa",
				"AoEServerMods/PreloadScript/JoinTheFederationToday.paa",
				"AoEServerMods/PreloadScript/KneelBeforeZOD.paa",
				"AoEServerMods/PreloadScript/LakeLandBoys.paa",
				"AoEServerMods/PreloadScript/RedDawn.paa",
				"AoEServerMods/PreloadScript/ZombieTooClose.paa"
		};
		return images[rand];
	}
};

modded class LoginQueueBase
{
	override Widget Init()
	{
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast(layoutRoot.FindAnyWidget("Background"));
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, GetRandomLoadingBackgroundLoginQueueBase());
		return w;
	}

	string GetRandomLoadingBackgroundLoginQueueBase()
	{
		private int rand = Math.RandomIntInclusive(0, 17);
		const string images[] = 
		{
				"AoEServerMods/PreloadScript/EnochLoadingScreen.paa",
				"AoEServerMods/PreloadScript/AoeCommunity.paa",
				"AoEServerMods/PreloadScript/PeterMayHewCommandsIt.paa",
				"AoEServerMods/PreloadScript/JoinTheZod.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon1.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon2.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon3.paa",
				"AoEServerMods/PreloadScript/ViolentFreemanGangs.paa",
				"AoEServerMods/PreloadScript/FederationOnTheMove.paa",
				"AoEServerMods/PreloadScript/FindUsOnFacebook.paa",
				"AoEServerMods/PreloadScript/JoinTheUnitedFederation.paa",
				"AoEServerMods/PreloadScript/ThunderGame.paa",
				"AoEServerMods/PreloadScript/ExploreUniqueTerrain.paa",
				"AoEServerMods/PreloadScript/JoinTheFederationToday.paa",
				"AoEServerMods/PreloadScript/KneelBeforeZOD.paa",
				"AoEServerMods/PreloadScript/LakeLandBoys.paa",
				"AoEServerMods/PreloadScript/RedDawn.paa",
				"AoEServerMods/PreloadScript/ZombieTooClose.paa"
		};
		return images[rand];
	}
};

modded class LoginTimeBase
{
	override Widget Init()
	{
		Widget w = super.Init();
		ImageWidget imageWidgetBackground = ImageWidget.Cast(layoutRoot.FindAnyWidget("Background"));
		imageWidgetBackground.LoadMaskTexture("");
		imageWidgetBackground.LoadImageFile(0, GetRandomLoadingBackgroundLoginTimeBase());
		return w;
	}

	string GetRandomLoadingBackgroundLoginTimeBase()
	{
		private int rand = Math.RandomIntInclusive(0, 17);
		const string images[] = 
		{
				"AoEServerMods/PreloadScript/EnochLoadingScreen.paa",
				"AoEServerMods/PreloadScript/AoeCommunity.paa",
				"AoEServerMods/PreloadScript/PeterMayHewCommandsIt.paa",
				"AoEServerMods/PreloadScript/JoinTheZod.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon1.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon2.paa",
				"AoEServerMods/PreloadScript/ReadTheBooksOnAmazon3.paa",
				"AoEServerMods/PreloadScript/ViolentFreemanGangs.paa",
				"AoEServerMods/PreloadScript/FederationOnTheMove.paa",
				"AoEServerMods/PreloadScript/FindUsOnFacebook.paa",
				"AoEServerMods/PreloadScript/JoinTheUnitedFederation.paa",
				"AoEServerMods/PreloadScript/ThunderGame.paa",
				"AoEServerMods/PreloadScript/ExploreUniqueTerrain.paa",
				"AoEServerMods/PreloadScript/JoinTheFederationToday.paa",
				"AoEServerMods/PreloadScript/KneelBeforeZOD.paa",
				"AoEServerMods/PreloadScript/LakeLandBoys.paa",
				"AoEServerMods/PreloadScript/RedDawn.paa",
				"AoEServerMods/PreloadScript/ZombieTooClose.paa"
		};
		return images[rand];
	}
};