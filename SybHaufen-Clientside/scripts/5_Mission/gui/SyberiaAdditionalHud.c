class SyberiaAdditionalHud
{
	ref Widget m_actionBlocker;
	ref TextWidget m_actionBlockerText;
	bool m_actionBlockerVisible;
	
	ref Widget m_mainHud;
	ref GridSpacerWidget m_defaultActionMenu;
	
	ref MultilineTextWidget m_screenMessageWidget;
	ref array<string> m_screenMessageText;
	ref array<float> m_screenMessageDuration;
	float m_screenMessageTimer;
	
	void SyberiaAdditionalHud(ref Widget mainHud, ref Widget actionBlocker, ref MultilineTextWidget screenMessageWidget)
	{
		m_mainHud = mainHud;
		m_actionBlocker = actionBlocker;
		m_actionBlockerText = null;
		m_actionBlockerVisible = false;
		
		m_screenMessageWidget = screenMessageWidget;
		m_screenMessageText = new array<string>;
		m_screenMessageDuration = new array<float>;
		m_screenMessageTimer = 0;
	}

	void Init()
	{
		// Init action blocker
		m_defaultActionMenu = GridSpacerWidget.Cast( m_mainHud.FindAnyWidget("ItemActions") );
		m_actionBlockerText = TextWidget.Cast( m_actionBlocker.FindAnyWidget("ia_block_interact_action_name") );
		
		// Init screen info text
		m_mainHud.AddChild(m_screenMessageWidget);
	}
	
	void Refresh(float dt)
	{
		RefreshActionBlocker(dt);
		RefreshScreenMessage(dt);
	}
	
	void RefreshActionBlocker(float dt)
	{		
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		ActionManagerBase actionManager = player.GetActionManager();
		
		int deltaBlocker = GetGame().GetTime() - actionManager.m_ActionBlockerTimeStamp;
		if (actionManager.m_ActionBlockerText.Length() > 0 && deltaBlocker < 200)
		{
			if (!m_actionBlockerVisible) {
				m_defaultActionMenu.AddChild(m_actionBlocker);
				m_actionBlockerVisible = true;
			}
			m_actionBlockerText.SetText(actionManager.m_ActionBlockerText);
		}
		else if (m_actionBlockerVisible)
		{
			m_defaultActionMenu.RemoveChild(m_actionBlocker);
			m_actionBlockerVisible = false;
		}
	}
	
	void RefreshScreenMessage(float dt)
	{
		if (m_screenMessageText.Count() > 0)
		{
			if (m_screenMessageTimer == 0)
			{
				m_screenMessageWidget.Show(true);
				m_screenMessageWidget.SetText( m_screenMessageText.Get(0) );
			}
			
			if (m_screenMessageTimer < 0.2)
			{
				m_screenMessageWidget.SetColor( ARGBF(m_screenMessageTimer / 0.2, 1, 1, 1) );
			}
			else if (m_screenMessageDuration.Get(0) - m_screenMessageTimer < 1)
			{
				m_screenMessageWidget.SetColor( ARGBF(m_screenMessageDuration.Get(0) - m_screenMessageTimer, 1, 1, 1) );
			}
			else
			{
				m_screenMessageWidget.SetColor( ARGBF(1, 1, 1, 1) );
			}
			
			m_screenMessageTimer = m_screenMessageTimer + dt;
			
			if (m_screenMessageTimer >= m_screenMessageDuration.Get(0))
			{
				m_screenMessageDuration.Remove(0);
				m_screenMessageText.Remove(0);
				m_screenMessageTimer = 0;
				m_screenMessageWidget.Show(false);
				m_screenMessageWidget.SetText("");
			}
		}
	}
	
	void ShowScreenMessage(string message, float duration)
	{
		foreach (string cacheMsg : m_screenMessageText)
		{
			if (cacheMsg == message)
			{
				m_screenMessageTimer = 0.2;
				return;
			}
		}
		
		m_screenMessageDuration.Insert(duration);
		m_screenMessageText.Insert(message);
		m_screenMessageTimer = 0;
	}
};