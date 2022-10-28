class AOE_Custom_Radio extends ItemBase //MOD BY S4MT3K... DO NOT EDIT, SHARE, OR DO ANYTHING WITHOU MY PERMISSIONS!!!
{
	const string BROLOANTHEM			= "BroloAnthem_SoundSet";			// #1
	const string DOUBLEWILDLOVE			= "DoubleWideLove_SoundSet";		// #2
	const string BLOODANDBONES			= "BloodAndBones_SoundSet";			// #3
	const string NERDSDOITBETTER		= "NerdsDoItBetter_SoundSet";		// #4
	const string NEVERDRINKINGAGAIN		= "NeverDrinkingAgain_SoundSet";	// #5
	const string PAINISGONE				= "PainIsGone_SoundSet";			// #6
	const string MOVINGALONG			= "MovingAlong_SoundSet";			// #7
	const string NERDSTAR				= "NerdStar_SoundSet";				// #8
	const string COLDWORLD				= "ColdWorld_SoundSet";				// #9
	const string LORDOFLIGHT			= "LordOfLight_SoundSet";			// #10

	const string SOUND_TURN_ON			= "turnOnRadio_SoundSet";			//Vanilla SoundSet
	const string SOUND_TURN_OFF			= "turnOffRadio_SoundSet";			//Vanilla SoundSet

	static ref array<Object> m_chests;

	ref protected EffectSound m_PlaySoundLoop_AOE;

	protected EffectSound m_SoundTurnOn;									//ref necessary?!?!
	protected EffectSound m_SoundTurnOff;									//ref necessary?!?!

	void AOE_Custom_Radio()
	{
		m_PlaySoundLoop_AOE = new EffectSound;
	}

	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionTurnOnWhileInHands);
		AddAction(ActionTurnOffWhileInHands);
	}

	void OnSwitchOn()
	{
		super.OnSwitchOn();
		SoundTurnOn();
		PlaySong();
		SetSynchDirty();
	}

	override void OnSwitchOff()
	{
		super.OnSwitchOff();
		StopSong();
		SoundTurnOff();
		SetSynchDirty();
	}

	override bool CanReceiveAttachment(EntityAI attachment, int slotId) //Old method (allows receiving all items into cargo and Only receive attachments from TStringArray above [DELETEMEMAYBE?]
	{
		ItemBase item = ItemBase.Cast(attachment);

		if (!item.IsRuined() && !this.GetCompEM().IsWorking())
		{
			return true;
		}

		return false;
	}

	override bool CanReleaseAttachment(EntityAI attachment)
	{
		if (this.GetCompEM().IsWorking())
		{
			return false;
		}
		return true;
	}

	void PlaySong()
	{
		for (int i = 0; i < CassettesAsAtt.Count(); i++)
		{
			Entity Attached_Cassette = EntityAI.Cast(this.FindAttachmentBySlotName("AOE_BaseCassette"));

			if (Attached_Cassette == NULL)
			{
				Print(":::DEBUG::: NO CASSETTE ATTACHED");
			}

			else
			{
				if (Attached_Cassette.IsKindOf(CassettesAsAtt.Get(i)))
				{
					string ActualAttachedCasette = Attached_Cassette.GetType();

					switch (ActualAttachedCasette)
					{

					case "AOE_BroloAnthem_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, BROLOANTHEM, 0.3, 0.4);			//Play Song #1
					}
					break;

					case "AOE_DoubleWideLove_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, DOUBLEWILDLOVE, 0.3, 0.4);		//Play Song #2
					}
					break;

					case "AOE_BloodAndBones_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, BLOODANDBONES, 0.3, 0.4);			//Play Song #3
					}
					break;

					case "AOE_NerdsDoItBetter_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, NERDSDOITBETTER, 0.3, 0.4);		//Play Song #4
					}
					break;

					case "AOE_NeverDrinkingAgain_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, NEVERDRINKINGAGAIN, 0.3, 0.4);	//Play Song #5
					}
					break;

					case "AOE_PainIsGone_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, PAINISGONE, 0.3, 0.4);			//Play Song #6
					}
					break;

					case "AOE_MovingAlong_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, MOVINGALONG, 0.3, 0.4);			//Play Song #7
					}
					break;

					case "AOE_NerdStar_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, NERDSTAR, 0.3, 0.4);				//Play Song #8
					}
					break;

					case "AOE_ColdWorld_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, COLDWORLD, 0.3, 0.4);				//Play Song #9
					}
					break;

					case "AOE_LordOfLight_Cassette":
					{
						PlaySoundSetLoop(m_PlaySoundLoop_AOE, LORDOFLIGHT, 0.3, 0.4);			//Play Song #9
					}
					break;

					default:
						Print(":::DEBUG::: Could Not Play A Song- Please Insert Casette");		//Print Default "No cassette" message int scripts.log
						break;
					}
				}
			}
		}
	}

	void StopSong()
	{
		if (GetGame().IsMultiplayer() && GetGame().IsServer())
		{
			StopSoundSet(m_PlaySoundLoop_AOE);
		}

		if (GetGame().IsMultiplayer() && GetGame().IsClient())
		{
			StopSoundSet(m_PlaySoundLoop_AOE);
		}
	}

	//---------------------------ENABLE/DISABLE SOUND-----------------------------
	protected void SoundTurnOn()
	{
		PlaySoundSet(m_SoundTurnOn, SOUND_TURN_ON, 0.0, 0.0);
	}

	protected void SoundTurnOff()
	{
		PlaySoundSet(m_SoundTurnOff, SOUND_TURN_OFF, 0.0, 0.0);
	}
};