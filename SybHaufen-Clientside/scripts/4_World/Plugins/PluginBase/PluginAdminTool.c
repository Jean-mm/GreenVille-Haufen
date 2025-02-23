class PluginAdminTool extends PluginBase
{
	ref AdminToolMenu m_guiMenu = null;
	int m_openNoSpamTimer;
	int m_selectedTabId = 0;
	string m_selectedPlayerUID;
	bool m_adminPermissions = false;
	ref AdminMessageBox m_adminMessageBox = null;
	
	override void OnInit()
	{
		m_openNoSpamTimer = GetGame().GetTime();
        GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_OPEN, this, "RequestOpen");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_PLAYERINFO, this, "PlayerInfo");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_PLAYERUPDATE, this, "PlayerUpdate");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_SPAWNITEM, this, "SpawnItem");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_CLEARITEMS, this, "ClearItems");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_UPDATEMAP, this, "UpdateMap");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_TELEPORT, this, "Teleport");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_OBJMOVE, this, "ObjMove");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_OBJDEL, this, "ObjDel");		
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_DELETE_CHARACTER, this, "PlayerDeleteCharacter");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_KICK, this, "PlayerKick");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_TELEPORT_TO_PLAYER, this, "PlayerTeleportToPlayer");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_TELEPORT_PLAYER_TO_ME, this, "PlayerTeleportToMe");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_ADMINTOOL_MESSAGE, this, "PlayerMessage");
	}
	
	override void OnUpdate(float delta_time)
	{
		if (!m_adminPermissions) return;
		if (!GetGame().IsClient()) return;
	
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if (!player || !player.IsAlive())
		{
			m_adminPermissions = false;
			return;
		}
	}
	
	bool IsOpen()
	{
		return m_guiMenu && m_guiMenu.m_active;
	}
	
	void Open()
	{
		int deltaTimeLastOpen = GetGame().GetTime() - m_openNoSpamTimer;
		if (deltaTimeLastOpen > 1000)
		{
			m_openNoSpamTimer = GetGame().GetTime();
			GetSyberiaRPC().SendToServer( SyberiaRPC.SYBRPC_ADMINTOOL_OPEN, new Param1< int >( 0 ) );
		}
	}
	
	void Close()
	{
		if (m_guiMenu)
		{
			m_selectedTabId = m_guiMenu.m_selectedTabId;
			m_selectedPlayerUID = m_guiMenu.m_selectedPlayerUID;
			m_guiMenu.m_active = false;
		}
	}
	
	void RequestOpen( ParamsReadContext ctx, PlayerIdentity sender )
    { 
		if (GetGame().IsServer() || IsOpen()) return;		
		if (GetGame().GetUIManager().GetMenu() != NULL) return;
		
        if (!m_guiMenu) m_guiMenu = new AdminToolMenu;
		
		Param1< ref PluginAdminTool_OpenContext > serverData;
        if ( !ctx.Read( serverData ) ) return;
		
		m_adminPermissions = true;
		m_guiMenu.m_selectedTabId = m_selectedTabId;
		m_guiMenu.m_selectedPlayerUID = m_selectedPlayerUID;
		m_guiMenu.UpdateServerContext(serverData.param1);
		GetGame().GetUIManager().ShowScriptedMenu( m_guiMenu, NULL );
	}
	
	void PlayerInfo( ParamsReadContext ctx, PlayerIdentity sender )
    { 
		if (GetGame().IsServer() || !IsOpen() || !m_guiMenu) return;		
		
		Param1< ref PluginAdminTool_PlayerContextDetails > serverData;
        if ( !ctx.Read( serverData ) ) return;
		
		m_guiMenu.UpdatePlayerContext(serverData.param1);
	}
	
	void PlayerUpdate( ParamsReadContext ctx, PlayerIdentity sender ) {}
	
	void SpawnItem( ParamsReadContext ctx, PlayerIdentity sender ) {}
	
	void ClearItems( ParamsReadContext ctx, PlayerIdentity sender ) {}
	
	void UpdateMap( ParamsReadContext ctx, PlayerIdentity sender ) 
	{
		if (GetGame().IsServer() || !IsOpen() || !m_guiMenu) return;		
		
		Param1< ref PluginAdminTool_MapContext > serverData;
        if ( !ctx.Read( serverData ) ) return;
		
		m_guiMenu.UpdateMapTab(serverData.param1);
	}
	
	void Teleport( ParamsReadContext ctx, PlayerIdentity sender ) {}
	
	void ObjMove( ParamsReadContext ctx, PlayerIdentity sender ) { }
	
	void ObjDel( ParamsReadContext ctx, PlayerIdentity sender ) { }
	
	void PlayerDeleteCharacter( ParamsReadContext ctx, PlayerIdentity sender ) { }
	
	void PlayerKick( ParamsReadContext ctx, PlayerIdentity sender ) { }
	
	void PlayerTeleportToPlayer( ParamsReadContext ctx, PlayerIdentity sender ) { }
	
	void PlayerTeleportToMe( ParamsReadContext ctx, PlayerIdentity sender ) { }
	
	void PlayerMessage( ParamsReadContext ctx, PlayerIdentity sender ) 
	{
		Param1< string > serverData;
        if ( !ctx.Read( serverData ) ) return;
		
		if (!m_adminMessageBox)
		{
			m_adminMessageBox = new AdminMessageBox();
		}
		
		m_adminMessageBox.ShowTextMessage(serverData.param1);
		GetGame().GetUIManager().CloseAll();
		GetGame().GetUIManager().ShowScriptedMenu(m_adminMessageBox, NULL);
	}
	
	bool HasAdminPermissions()
	{
		return m_adminPermissions;
	}
};

class PluginAdminTool_OpenContext
{
	ref array<ref PluginAdminTool_PlayerContextBase> m_players;
	ref array<ref PluginAdminTool_SpawnerCategories> m_spawnerCategories;
	
	void ~PluginAdminTool_OpenContext()
	{
		if (m_players)
		{
			foreach (ref PluginAdminTool_PlayerContextBase player : m_players) delete player;
			delete m_players;
		}
	}
};

class PluginAdminTool_SpawnerCategories
{
	string m_name;
	string m_preffix;
	string m_class;
};

class PluginAdminTool_PlayerContextBase
{
	string m_uid;
	string m_name;
	string m_nickname;
	string m_group;
	bool m_isAdmin;
	bool m_isGhost;
};

class PluginAdminTool_PlayerContextDetails : PluginAdminTool_PlayerContextBase
{
	int m_souls;
	int m_respawnCounter;
    vector m_position;
	
	ref array<ref PluginAdminTool_PlayerStatContext> m_stats;
	
	ref array<ref PluginAdminTool_PlayerInvContext> m_inv;
	
	void ~PluginAdminTool_PlayerContextDetails()
	{
		if (m_stats)
		{
			foreach (ref PluginAdminTool_PlayerStatContext stat : m_stats) delete stat;
			delete m_stats;
		}
		
		if (m_inv)
		{
			foreach (ref PluginAdminTool_PlayerInvContext inv : m_inv) delete inv;
			delete m_inv;
		}
	}
}

class PluginAdminTool_PlayerStatContext
{
	string m_statName;
	float m_minValue;
	float m_maxValue;
	float m_curValue;
	
	void PluginAdminTool_PlayerStatContext(string statName, float minValue, float maxValue, float curValue)
	{
		m_statName = statName;
		m_minValue = minValue;
		m_maxValue = maxValue;
		m_curValue = curValue;
	}
};

class PluginAdminTool_PlayerInvContext
{
	string m_classname;
	float m_damage;
	int m_curQuantity;
	int m_maxQuantity;
	
	ref array<ref PluginAdminTool_PlayerInvContext> m_attachments;
	ref array<ref PluginAdminTool_PlayerInvContext> m_cargo;
	
	void ~PluginAdminTool_PlayerInvContext()
	{
		if (m_attachments)
		{
			foreach (ref PluginAdminTool_PlayerInvContext a : m_attachments) delete a;
			delete m_attachments;
		}
		
		if (m_cargo)
		{
			foreach (ref PluginAdminTool_PlayerInvContext c : m_cargo) delete c;
			delete m_cargo;
		}
	}
};

class PluginAdminTool_SpawnItemContext
{
	string m_classname;
	float m_health;
	float m_quantity;
	int m_spawnType;
	vector m_cursorPos;
	ref array<string> m_attachments;
};

class PluginAdminTool_MapContext
{
	ref array<vector> m_playerPositions;
	ref array<string> m_playerNames;
	
	ref array<vector> m_bodiesPositions;
	ref array<string> m_bodiesNames;
	
	ref array<vector> m_vehiclePositions;
	ref array<string> m_vehicleNames;
	
	void ~PluginAdminTool_MapContext()
	{
		if (m_playerPositions) delete m_playerPositions;
		if (m_playerNames) delete m_playerNames;
		
		if (m_bodiesPositions) delete m_bodiesPositions;
		if (m_bodiesNames) delete m_bodiesNames;
		
		if (m_vehiclePositions) delete m_vehiclePositions;
		if (m_vehicleNames) delete m_vehicleNames;
	}
};