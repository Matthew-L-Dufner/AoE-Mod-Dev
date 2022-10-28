class AOEMap extends ItemMap
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionUnfoldMap);
	}
}
class AOEMap_open extends ItemMap {}