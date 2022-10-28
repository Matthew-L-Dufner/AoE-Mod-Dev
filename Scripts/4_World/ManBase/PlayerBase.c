modded class PlayerBase extends ManBase //Mod by S4MT3K [DEV ONLY]
{
	bool m_aoeMapCloseRequest;

    override void Init()
    {
        if ( GetGame().IsServer() || GetGame().IsMultiplayer() )
		{
			DayzPlayerItemBehaviorCfg 	onehandedradio = new DayzPlayerItemBehaviorCfg;
			//--------------------------------------------------------

			onehandedradio.SetToolsOneHanded();
			//--------------------------------------------------------

            GetDayZPlayerType().AddItemInHandsProfileIK("AOE_Custom_Radio", "dz/anims/workspaces/player/player_main/props/player_main_1h_radio.asi", onehandedradio, "dz/anims/anm/player/ik/gear/Radio.anm");
			GetDayZPlayerType().AddItemInHandsProfileIK("AOEMap", "dz/anims/workspaces/player/player_main/player_main_1h.asi", onehandedradio, "dz/anims/anm/player/ik/gear/Map_chernarus.anm");

        }
        super.Init();
    }

	override void SetMapOpen(bool state)
	{
		super.SetMapOpen(state);
		m_aoeMapCloseRequest = !state;
		
	}

	/*override bool OnClick(Widget w, int x, int y, int button)
	{
		if (button == MouseState.LEFT)
		{
			switch (w)
			{
				case m_UiLeftButton:
				{
					if (GetGame().IsMultiplayer() && GetGame().IsClient())
					{
						OpenMap();

						if (!GetGame().GetUIManager().GetMenu())
						{
							GetGame().GetMission().PlayerControlEnable();
						}

						if (GetGame().GetUIManager().IsMenuOpen(MENU_MAP))
						{
							GetGame().GetUIManager().FindMenu(MENU_MAP).Close();
						}
						return true;
					}

					else
					{
						CloseMap();
						return false;
					}
				}
			}
		}
		return false;
	}*/

	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)
	{
		super.CommandHandler(pDt, pCurrentCommandID, pCurrentCommandFinished);

		if ((!GetGame().IsMultiplayer() || GetGame().IsClient()) && IsMapOpen() && !m_aoeMapCloseRequest)
		{
			HumanInputController HumInpCon = GetInputController(); // ref necessary?! Maybe: new HumanInPutController?! [DEV-ANSWER] : NO! ;)

			if (m_hac && HumInpCon.IsUseButtonDown()) //if ( key == KeyCode.KC_ESCAPE ) 
			{
				ScriptInputUserData ScrInpDat = new ScriptInputUserData;

				if (ScrInpDat.CanStoreInputUserData())
				{
					if (GetGame().IsMultiplayer() && GetGame().IsClient())
					{
						m_hac.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
						ScrInpDat.Write(INPUT_UDT_STANDARD_ACTION_END_REQUEST);
						ScrInpDat.Write(DayZPlayerConstants.CMD_ACTIONINT_END);
						ScrInpDat.Send();
					}

					else if (!GetGame().IsMultiplayer())
					{
						m_hac.InternalCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
					}
				}

				if (GetGame().IsClient() || !GetGame().IsMultiplayer()) // !GetGame().IsServer())
				{
					if (!GetGame().GetUIManager().GetMenu())
					{
						GetGame().GetMission().PlayerControlEnable(true);
					}

					if (GetGame().GetUIManager().IsMenuOpen(MENU_MAP))
					{
						GetGame().GetUIManager().FindMenu(MENU_MAP).Close();
					}
				}

				//Setting request to true (Loop Blocking)
				m_aoeMapCloseRequest = true;
			}
		}
	}

	//override bool OnKeyDown(Widget w, int x, int y, int key) //ALL NOT WORKING 20.10.2019
	//{
	//	super.OnKeyDown(w, x, y, key);

	//	switch (key)
	//	{
	//		// TODO: just temporary until new inputs are done
	//	case KeyCode.KC_W:
	//	case KeyCode.KC_S:
	//	case KeyCode.KC_A:
	//	case KeyCode.KC_D:
	//	case KeyCode.KC_UP:
	//	case KeyCode.KC_DOWN:
	//	case KeyCode.KC_LEFT:
	//	case KeyCode.KC_RIGHT:
	//	case KeyCode.KC_ESCAPE:
	//		Cancel();
	//	}

	//	return true;
	//}

	override void CloseMap()
	{
		if (IsMapOpen());
		{
			return;
		}
	}
}