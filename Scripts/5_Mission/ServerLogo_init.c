modded class MissionServer
{
    void MissionServer()
    {
		if (GetGame().IsMultiplayer())
		{
			//Do nothing if the game IsMultiplayer. 
		}
		else
		{
			ServerLogo image; 
			image = null;
			image = new ServerLogo();
		}
    }
}

modded class MissionGameplay
{
    void MissionGameplay()
    {
		//On MissionGameplay (Which is a predefined class within the 5_Mission.c) display our icon.
		ServerLogo image; 
		image = null;
        image = new ServerLogo();
    }
}