class ServerLogo
{
	Widget m_root; 
	ImageWidget m_image;
	
	void ServerLogo()
	{

		m_root = GetGame().GetWorkspace().CreateWidgets("AoEServerMods\\PreloadScript\\logo.layout");
		m_image = ImageWidget.Cast(m_root.FindAnyWidget("ServerLogo"));
		m_image.LoadImageFile(0, "AoEServerMods\\PreloadScript\\EnochLogo512x256.paa");
		m_image.SetAlpha(1.0);
		
	}
}