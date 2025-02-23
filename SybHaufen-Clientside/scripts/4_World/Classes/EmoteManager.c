modded class EmoteManager
{
	int GetCurrentEmoteID()
	{
		return m_CurrentGestureID;
	}
	
	int GetTotalEmotesCount()
    {
        return m_NameEmoteMap.Count();
    }
    
    int GetEmoteKeyById(int emoteId)
    {
        return m_NameEmoteMap.GetKey(emoteId);
    }

	bool IsPlayerSleeping()
	{
	    int currentEmote = GetCurrentEmoteID();
	    return (currentEmote == EmoteConstants.ID_EMOTE_LYINGDOWN || currentEmote == EmoteConstants.ID_EMOTE_CAMPFIRE || currentEmote == EmoteConstants.ID_EMOTE_SITA || currentEmote == EmoteConstants.ID_EMOTE_SITB || currentEmote == EMOTE_SASitNew);
	}

	
	override void Update( float deltaT )
	{
		super.Update(deltaT);
		
		if (m_Player.IsRestrained())
			return;
		
		if ( m_Callback )
		{
			if (m_CurrentGestureID == EmoteConstants.ID_EMOTE_SUICIDE && m_Player.GetMindState() == 5)
			{
				if (m_Callback.GetState() == m_Callback.STATE_LOOP_LOOP)
				{
					CommitSuicide();
				}
			}
		}
	}
};