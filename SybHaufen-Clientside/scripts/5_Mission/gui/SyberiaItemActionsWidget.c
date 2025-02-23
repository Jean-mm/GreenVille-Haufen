modded class ItemActionsWidget extends ScriptedWidgetEventHandler
{
    override protected void Update()
	{
		if (!g_Game || !m_Hud)
		{
			return;
		}
		
		super.Update();
	}
}

modded class ContinuousActionProgress extends ScriptedWidgetEventHandler
{
    override protected void Update()
	{
		if (!GetGame() || !GetGame().GetMission())
    	{
    	    return;
    	}
		
		super.Update();
	}
}

modded class CrossHairSelector extends ScriptedWidgetEventHandler
{
    override protected void Update()
	{
		if (!g_Game)
		{
			return;
		}
		
		super.Update();
	}
}

modded class ProjectedCrosshair extends ScriptedWidgetEventHandler
{
    override protected void Update()
	{
		if (!m_Player)
		{
			return;
		}
		
		super.Update();
	}
}