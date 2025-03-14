enum SyberiaPerkType
{
	SYBPERK_IMMUNITY_INFLUENZA_TIME = 0,
	SYBPERK_IMMUNITY_STOMATCHPOISON_TIME = 1,
	SYBPERK_IMMUNITY_ZVIRUS_TIME = 2,
	SYBPERK_IMMUNITY_SEPSIS_TIME = 3,
	SYBPERK_IMMUNITY_PAIN_STRONG = 4,
	SYBPERK_IMMUNITY_OVERDOSE_STRONG = 5,
	SYBPERK_IMMUNITY_HEMATOMA_CHANCE = 6,
	SYBPERK_IMMUNITY_CUTHIT_CHANCE = 7,
	SYBPERK_IMMUNITY_HEMATOMA_TIME = 8,
	SYBPERK_IMMUNITY_CUTHIT_TIME = 9,
	SYBPERK_IMMUNITY_UNCUNSION_CHANCE = 10,
	SYBPERK_IMMUNITY_UNCUNSION_TIME = 11,
	SYBPERK_IMMUNITY_SLEEPING_TIME = 12,
	SYBPERK_IMMUNITY_MENTAL_TIME = 13,
    SYBPERK_IMMUNITY_INFLUENZA_FIREPLACE_HEAL = 14,
    
    SYBPERK_ATHLETICS_SPRINT_DEC = 1000,
    SYBPERK_ATHLETICS_JOG_INC = 1001,
    SYBPERK_ATHLETICS_SWIM_SPRINT_DEC = 1002,
    SYBPERK_ATHLETICS_SWIM_INC = 1003,
    SYBPERK_ATHLETICS_LADDER_SPRINT_DEC = 1004,
    SYBPERK_ATHLETICS_LADDER_INC = 1005,
    SYBPERK_ATHLETICS_BREATH_DEC = 1006,
    SYBPERK_ATHLETICS_IDDLE_INC = 1007,
    SYBPERK_ATHLETICS_LADDER_FAST_DOWN = 1008,
    SYBPERK_ATHLETICS_INFINITE_SPRINT = 1009,
	SYBPERK_ATHLETICS_COLDOWN_DEC = 1010,
    
    SYBPERK_STRENGTH_STAMINA_KG_TO = 2000,
    SYBPERK_STRENGTH_STAMINA_MAX = 2001,
    SYBPERK_STRENGTH_JUMP_STAMINA_DEC = 2002,
    SYBPERK_STRENGTH_BLOCK_STAMINA_DEC = 2003,
    SYBPERK_STRENGTH_FAST_ATTACK_STAMINA_DEC = 2004,
    SYBPERK_STRENGTH_FAST_ATTACK_STRENGTH = 2005,
    SYBPERK_STRENGTH_HEAVY_ATTACK_STAMINA_DEC = 2006,
    SYBPERK_STRENGTH_HEAVY_ATTACK_STRENGTH = 2007,
    SYBPERK_STRENGTH_KNOCKOUT_HEAVY_ITEMS = 2008,
    SYBPERK_STRENGTH_HEAVY_ITEMS = 2009,
    
    SYBPERK_MEDICINE_TABLETS_RESEARCH = 3000,
    SYBPERK_MEDICINE_AMPOULES_RESEARCH = 3001,
    SYBPERK_MEDICINE_INJECTORS_RESEARCH = 3002,
    SYBPERK_MEDICINE_SURGEON_KNIFE_HITS = 3003,
    SYBPERK_MEDICINE_SURGEON_BULLET_HITS = 3004,
    SYBPERK_MEDICINE_SURGEON_VISCERA_HITS = 3005,
    SYBPERK_MEDICINE_TOOLS_DEGRADATION_DEC = 3006,
    SYBPERK_MEDICINE_SEPSIS_CHANCE_DEC = 3007,
    SYBPERK_MEDICINE_BRING_FROM_UNCUNSION = 3008,
    SYBPERK_MEDICINE_SHOW_PLAYER_STATE = 3009,
    SYBPERK_MEDICINE_START_LOADOUT = 3010,
    SYBPERK_MEDICINE_DEATH_CAUSE = 3011,
    
    SYBPERK_STEALTH_VOICE_SOUND_DEC = 4000,
    SYBPERK_STEALTH_WEAPONS_SOUND_DEC = 4001,
    SYBPERK_STEALTH_EQUIPMENT_SOUND_DEC = 4002,
    SYBPERK_STEALTH_ZOMBIE_AGRO_DEC = 4003,
    SYBPERK_STEALTH_CAT_VISSION = 4004,
    SYBPERK_STEALTH_STEPS_SOUND_DEC = 4005,
    SYBPERK_STEALTH_START_LOADOUT = 4006,
    
    SYBPERK_SURVIVAL_MAKEFIRE_INC = 5000,
    SYBPERK_SURVIVAL_HANDDRILL_USE = 5001,
    SYBPERK_SURVIVAL_BERRIES_RESEARCH = 5002,
    SYBPERK_SURVIVAL_MUSHROOMS_RESEARCH = 5003,
    SYBPERK_SURVIVAL_CUTHIT_HANDS_DEC = 5004,
    SYBPERK_SURVIVAL_CUTHIT_LEGS_DEC = 5005,
    SYBPERK_SURVIVAL_TOOLS_DEGRADATION_DEC = 5006,
    SYBPERK_SURVIVAL_DIG_ITEMS = 5007,
    SYBPERK_SURVIVAL_KEEPING_FIRE = 5008,
    SYBPERK_SURVIVAL_FROST_RESIST = 5009,
    SYBPERK_SURVIVAL_START_LOADOUT = 5010,
};

class PerksCollection
{
	private ref map<int, ref PerkInfo> m_mapIds = new map<int, ref PerkInfo>;
	
	void PerksCollection()
	{
		OnInit();
	}
	
	protected void OnInit()
	{
        //
        // IMMUNITY
        //
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_INFLUENZA_TIME, "%").AddUnlockValue(1, 5).AddUnlockValue(10, 15).AddUnlockValue(20, 30).AddUnlockValue(32, 50).AddUnlockValue(47, 80).AddUnlockValue(85, 120);
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_STOMATCHPOISON_TIME, "%").AddUnlockValue(1, 5).AddUnlockValue(10, 15).AddUnlockValue(20, 30).AddUnlockValue(32, 50).AddUnlockValue(47, 80).AddUnlockValue(85, 120);
        
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_HEMATOMA_TIME, "%").AddUnlockValue(3, 5).AddUnlockValue(12, 10).AddUnlockValue(23, 20).AddUnlockValue(34, 30).AddUnlockValue(53, 40).AddUnlockValue(90, 50);
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_CUTHIT_TIME, "%").AddUnlockValue(3, 5).AddUnlockValue(12, 10).AddUnlockValue(23, 20).AddUnlockValue(34, 30).AddUnlockValue(53, 40).AddUnlockValue(90, 50);
        
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_SLEEPING_TIME, "%").AddUnlockValue(5, 10).AddUnlockValue(15, 20).AddUnlockValue(25, 30).AddUnlockValue(36, 50).AddUnlockValue(57, 80).AddUnlockValue(100, 120);
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_MENTAL_TIME, "%").AddUnlockValue(5, 10).AddUnlockValue(15, 20).AddUnlockValue(25, 30).AddUnlockValue(36, 40).AddUnlockValue(57, 50).AddUnlockValue(100, 80);
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_OVERDOSE_STRONG, "%").AddUnlockValue(5, 10).AddUnlockValue(15, 20).AddUnlockValue(25, 35).AddUnlockValue(36, 50).AddUnlockValue(57, 75).AddUnlockValue(100, 200);
        
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_UNCUNSION_CHANCE, "%").AddUnlockValue(7, 2).AddUnlockValue(18, 5).AddUnlockValue(28, 10).AddUnlockValue(38, 15).AddUnlockValue(60, 20).AddUnlockValue(95, 25);
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_UNCUNSION_TIME, "%").AddUnlockValue(7, 2).AddUnlockValue(18, 5).AddUnlockValue(28, 10).AddUnlockValue(38, 15).AddUnlockValue(60, 20).AddUnlockValue(95, 25);
        
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_HEMATOMA_CHANCE, "%").AddUnlockValue(30, 10).AddUnlockValue(43, 20).AddUnlockValue(70, 30);
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_CUTHIT_CHANCE, "%").AddUnlockValue(30, 10).AddUnlockValue(43, 20).AddUnlockValue(70, 30);
        
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_ZVIRUS_TIME, "%").AddUnlockValue(40, 15).AddUnlockValue(65, 30).AddUnlockValue(100, 120);
		Register(SyberiaPerkType.SYBPERK_IMMUNITY_SEPSIS_TIME, "%").AddUnlockValue(40, 15).AddUnlockValue(65, 30).AddUnlockValue(100, 120);
        
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_INFLUENZA_FIREPLACE_HEAL).AddUnlockValue(50, 1);
        Register(SyberiaPerkType.SYBPERK_IMMUNITY_PAIN_STRONG, " #syb_skill_level2").AddUnlockValue(100, 1);
        
        
        //
        // ATHLETICS
        //
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_SPRINT_DEC, "%").AddUnlockValue(1, 10).AddUnlockValue(12, 20).AddUnlockValue(30, 30).AddUnlockValue(50, 40).AddUnlockValue(70, 50).AddUnlockValue(90, 70).AddUnlockValue(100, 90);
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_JOG_INC, "%").AddUnlockValue(1, 10).AddUnlockValue(12, 20).AddUnlockValue(30, 30).AddUnlockValue(50, 40).AddUnlockValue(70, 50).AddUnlockValue(90, 70).AddUnlockValue(100, 100);
        
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_SWIM_SPRINT_DEC, "%").AddUnlockValue(3, 20).AddUnlockValue(15, 35).AddUnlockValue(35, 50).AddUnlockValue(55, 70).AddUnlockValue(75, 90);
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_SWIM_INC, "%").AddUnlockValue(3, 20).AddUnlockValue(15, 35).AddUnlockValue(35, 50).AddUnlockValue(55, 70).AddUnlockValue(75, 90);
        
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_LADDER_SPRINT_DEC, "%").AddUnlockValue(6, 20).AddUnlockValue(18, 35).AddUnlockValue(40, 50).AddUnlockValue(60, 70).AddUnlockValue(80, 90);
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_LADDER_INC, "%").AddUnlockValue(6, 20).AddUnlockValue(18, 35).AddUnlockValue(40, 50).AddUnlockValue(60, 70).AddUnlockValue(80, 90);
        
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_BREATH_DEC, "%").AddUnlockValue(9, 10).AddUnlockValue(22, 20).AddUnlockValue(45, 30).AddUnlockValue(65, 40).AddUnlockValue(85, 50).AddUnlockValue(95, 80).AddUnlockValue(100, 120);
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_IDDLE_INC, "%").AddUnlockValue(9, 10).AddUnlockValue(22, 20).AddUnlockValue(45, 30).AddUnlockValue(65, 40).AddUnlockValue(85, 50).AddUnlockValue(95, 80).AddUnlockValue(100, 120);
        Register(SyberiaPerkType.SYBPERK_ATHLETICS_COLDOWN_DEC, "%").AddUnlockValue(9, 10).AddUnlockValue(22, 20).AddUnlockValue(45, 30).AddUnlockValue(65, 40).AddUnlockValue(85, 50).AddUnlockValue(95, 60).AddUnlockValue(100, 90);
        
        
        //
        // STRENGTH
        //
        Register(SyberiaPerkType.SYBPERK_STRENGTH_STAMINA_KG_TO, "%").AddUnlockValue(1, 10).AddUnlockValue(18, 20).AddUnlockValue(36, 30).AddUnlockValue(50, 40).AddUnlockValue(65, 50).AddUnlockValue(76, 60).AddUnlockValue(88, 70).AddUnlockValue(100, 90);
        Register(SyberiaPerkType.SYBPERK_STRENGTH_STAMINA_MAX, "%").AddUnlockValue(1, 10).AddUnlockValue(18, 20).AddUnlockValue(36, 30).AddUnlockValue(50, 40).AddUnlockValue(65, 50).AddUnlockValue(76, 60).AddUnlockValue(88, 70).AddUnlockValue(100, 90);
        
        Register(SyberiaPerkType.SYBPERK_STRENGTH_JUMP_STAMINA_DEC, "%").AddUnlockValue(3, 20).AddUnlockValue(24, 30).AddUnlockValue(40, 40).AddUnlockValue(54, 50).AddUnlockValue(68, 60).AddUnlockValue(79, 70).AddUnlockValue(90, 80);
        Register(SyberiaPerkType.SYBPERK_STRENGTH_BLOCK_STAMINA_DEC, "%").AddUnlockValue(3, 20).AddUnlockValue(24, 30).AddUnlockValue(40, 40).AddUnlockValue(54, 50).AddUnlockValue(68, 60).AddUnlockValue(79, 70).AddUnlockValue(90, 80);
        
        Register(SyberiaPerkType.SYBPERK_STRENGTH_FAST_ATTACK_STAMINA_DEC, "%").AddUnlockValue(5, 20).AddUnlockValue(28, 30).AddUnlockValue(43, 40).AddUnlockValue(58, 50).AddUnlockValue(70, 60).AddUnlockValue(82, 70).AddUnlockValue(93, 80);
        Register(SyberiaPerkType.SYBPERK_STRENGTH_FAST_ATTACK_STRENGTH, "%").AddUnlockValue(5, 20).AddUnlockValue(28, 30).AddUnlockValue(43, 40).AddUnlockValue(58, 50).AddUnlockValue(70, 60).AddUnlockValue(82, 70).AddUnlockValue(93, 80);
        
        Register(SyberiaPerkType.SYBPERK_STRENGTH_HEAVY_ATTACK_STAMINA_DEC, "%").AddUnlockValue(12, 20).AddUnlockValue(32, 30).AddUnlockValue(47, 40).AddUnlockValue(62, 50).AddUnlockValue(73, 60).AddUnlockValue(85, 70).AddUnlockValue(97, 80);
        Register(SyberiaPerkType.SYBPERK_STRENGTH_HEAVY_ATTACK_STRENGTH, "%").AddUnlockValue(12, 20).AddUnlockValue(32, 30).AddUnlockValue(47, 40).AddUnlockValue(62, 50).AddUnlockValue(73, 60).AddUnlockValue(85, 70).AddUnlockValue(97, 80);
        
        Register(SyberiaPerkType.SYBPERK_STRENGTH_KNOCKOUT_HEAVY_ITEMS).AddUnlockValue(100, 1);
        Register(SyberiaPerkType.SYBPERK_STRENGTH_HEAVY_ITEMS).AddUnlockValue(8, 1);
        
		
        //
        // MEDICINE
        //
        Register(SyberiaPerkType.SYBPERK_MEDICINE_SURGEON_KNIFE_HITS, "%").AddUnlockValue(1, 30).AddUnlockValue(15, 50).AddUnlockValue(30, 75).AddUnlockValue(70, 100);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_SURGEON_BULLET_HITS, "%").AddUnlockValue(3, 20).AddUnlockValue(18, 40).AddUnlockValue(35, 60).AddUnlockValue(85, 80).AddUnlockValue(100, 100);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_SURGEON_VISCERA_HITS, "%").AddUnlockValue(6, 10).AddUnlockValue(21, 20).AddUnlockValue(45, 40).AddUnlockValue(90, 60).AddUnlockValue(100, 80);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_SEPSIS_CHANCE_DEC, "%").AddUnlockValue(9, 5).AddUnlockValue(23, 10).AddUnlockValue(55, 25).AddUnlockValue(95, 50).AddUnlockValue(100, 75);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_TOOLS_DEGRADATION_DEC, "%").AddUnlockValue(12, 10).AddUnlockValue(27, 25).AddUnlockValue(65, 50);

		Register(SyberiaPerkType.SYBPERK_MEDICINE_SHOW_PLAYER_STATE).AddUnlockValue(20, 1);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_TABLETS_RESEARCH).AddUnlockValue(25, 1);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_BRING_FROM_UNCUNSION).AddUnlockValue(40, 1);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_AMPOULES_RESEARCH).AddUnlockValue(50, 1);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_DEATH_CAUSE).AddUnlockValue(60, 1);
        Register(SyberiaPerkType.SYBPERK_MEDICINE_INJECTORS_RESEARCH).AddUnlockValue(75, 1);     
        Register(SyberiaPerkType.SYBPERK_MEDICINE_START_LOADOUT).AddUnlockValue(100, 1);
        

        //
        // STEALTH
        //
        Register(SyberiaPerkType.SYBPERK_STEALTH_STEPS_SOUND_DEC, "%"    ).AddUnlockValue(1, 10).AddUnlockValue(8 , 20).AddUnlockValue(20, 30).AddUnlockValue(32, 40).AddUnlockValue(44, 50).AddUnlockValue(58, 60).AddUnlockValue(72, 70).AddUnlockValue(88, 80).AddUnlockValue(100, 90);
        Register(SyberiaPerkType.SYBPERK_STEALTH_VOICE_SOUND_DEC, "%"    ).AddUnlockValue(2, 10).AddUnlockValue(10, 20).AddUnlockValue(22, 30).AddUnlockValue(34, 40).AddUnlockValue(46, 50).AddUnlockValue(60, 60).AddUnlockValue(74, 70).AddUnlockValue(90, 80).AddUnlockValue(100, 100);
        Register(SyberiaPerkType.SYBPERK_STEALTH_WEAPONS_SOUND_DEC, "%"  ).AddUnlockValue(3, 10).AddUnlockValue(12, 20).AddUnlockValue(24, 30).AddUnlockValue(36, 40).AddUnlockValue(48, 50).AddUnlockValue(62, 60).AddUnlockValue(78, 70).AddUnlockValue(92, 80).AddUnlockValue(100, 95);
        Register(SyberiaPerkType.SYBPERK_STEALTH_EQUIPMENT_SOUND_DEC, "%").AddUnlockValue(4, 10).AddUnlockValue(14, 20).AddUnlockValue(26, 30).AddUnlockValue(38, 40).AddUnlockValue(52, 50).AddUnlockValue(64, 60).AddUnlockValue(82, 70).AddUnlockValue(94, 80).AddUnlockValue(100, 95);
        Register(SyberiaPerkType.SYBPERK_STEALTH_ZOMBIE_AGRO_DEC, "%"    ).AddUnlockValue(5, 5 ).AddUnlockValue(16, 10).AddUnlockValue(28, 20).AddUnlockValue(40, 30).AddUnlockValue(54, 40).AddUnlockValue(66, 50).AddUnlockValue(84, 60).AddUnlockValue(96, 70).AddUnlockValue(100, 80);
        Register(SyberiaPerkType.SYBPERK_STEALTH_CAT_VISSION, "%"        ).AddUnlockValue(6, 10).AddUnlockValue(18, 20).AddUnlockValue(30, 30).AddUnlockValue(42, 40).AddUnlockValue(56, 50).AddUnlockValue(68, 60).AddUnlockValue(86, 70).AddUnlockValue(98, 80).AddUnlockValue(100, 120);
		
        Register(SyberiaPerkType.SYBPERK_STEALTH_START_LOADOUT).AddUnlockValue(100, 1);
        // 75, 70 and 80 levels are empty and reserver for future perks
		
      
        //
        // SURVIVAL
        //
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_MAKEFIRE_INC, "%").AddUnlockValue(1, 5).AddUnlockValue(5, 10).AddUnlockValue(15, 15).AddUnlockValue(22, 20).AddUnlockValue(35, 25).AddUnlockValue(45, 30).AddUnlockValue(55, 35).AddUnlockValue(65, 40).AddUnlockValue(72, 45).AddUnlockValue(84, 50).AddUnlockValue(92, 60).AddUnlockValue(100, 100);
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_FROST_RESIST, "%").AddUnlockValue(2, 2).AddUnlockValue(8, 5).AddUnlockValue(18, 8).AddUnlockValue(28, 10).AddUnlockValue(38, 12).AddUnlockValue(48, 15).AddUnlockValue(58, 18).AddUnlockValue(68, 20).AddUnlockValue(78, 25).AddUnlockValue(88, 30).AddUnlockValue(95, 35).AddUnlockValue(100, 50);

        Register(SyberiaPerkType.SYBPERK_SURVIVAL_CUTHIT_HANDS_DEC, "%").AddUnlockValue(3, 5).AddUnlockValue(12, 10).AddUnlockValue(20, 15).AddUnlockValue(32, 20).AddUnlockValue(42, 25).AddUnlockValue(52, 30).AddUnlockValue(62, 40).AddUnlockValue(70, 50).AddUnlockValue(82, 60).AddUnlockValue(90, 70).AddUnlockValue(98, 80).AddUnlockValue(100, 100);
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_CUTHIT_LEGS_DEC, "%").AddUnlockValue(3, 5).AddUnlockValue(12, 10).AddUnlockValue(20, 15).AddUnlockValue(32, 20).AddUnlockValue(42, 25).AddUnlockValue(52, 30).AddUnlockValue(62, 40).AddUnlockValue(70, 50).AddUnlockValue(82, 60).AddUnlockValue(90, 70).AddUnlockValue(98, 80).AddUnlockValue(100, 100);
        
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_TOOLS_DEGRADATION_DEC, " #syb_perk_info_times_longer").AddUnlockValue(40, 2).AddUnlockValue(60, 3).AddUnlockValue(80, 4).AddUnlockValue(100, 5);
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_KEEPING_FIRE, "%").AddUnlockValue(40, 10).AddUnlockValue(60, 25).AddUnlockValue(80, 50).AddUnlockValue(100, 75);
		
        //Register(SyberiaPerkType.SYBPERK_SURVIVAL_BERRIES_RESEARCH).AddUnlockValue(10, 1);
        //Register(SyberiaPerkType.SYBPERK_SURVIVAL_MUSHROOMS_RESEARCH).AddUnlockValue(25, 1);
		
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_HANDDRILL_USE).AddUnlockValue(30, 1);
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_DIG_ITEMS).AddUnlockValue(10, 1);
        Register(SyberiaPerkType.SYBPERK_SURVIVAL_START_LOADOUT).AddUnlockValue(100, 1);
		// 75 reserved
	}
	
	protected ref PerkInfo Register(int perkId, string unitsType = "")
	{
		ref PerkInfo perk = new PerkInfo(perkId, unitsType);
		m_mapIds.Insert(perkId, perk);
		return perk;
	}
	
	void GetFilteredPerks(int skillId, int unlockLevel, ref array<ref PerkInfo> perks)
	{
		foreach (int id, ref PerkInfo perk : m_mapIds)
		{
			if (skillId == -1 || perk.GetSkillId() == skillId)
			{
				if (unlockLevel == -1 || perk.HasUnlockLevel(unlockLevel))
				{
					perks.Insert(perk);
				}
			}
		}
	}
	
	void GetUnlockLevelsOfSkill(int skillId, ref array<int> levels)
	{
		foreach (int perkId, ref PerkInfo perk : m_mapIds)
		{
			if (perk.GetSkillId() != skillId)
				continue;
			
			for (int i = 0; i < perk.GetUnlockLevels().Count(); i++)
			{
				int unlockLevel = perk.GetUnlockLevels().GetKey(i);
				if (levels.Find(unlockLevel) == -1)
				{
					levels.Insert( unlockLevel );
				}
			}
		}
	}
	
	ref PerkInfo GetPerk(int perkId)
	{
		return m_mapIds.Get(perkId);
	}
	
	static ref PerksCollection m_Instance = new PerksCollection();
};

class PerkInfo
{
	private int m_id;
	private int m_skillId;		
	private ref map<int, int> m_unlockValues;
    private string m_unitsType;
	
	void PerkInfo(int id, string unitsType)
	{
		m_id = id;
		m_skillId = CalculateSkillId(id);
		m_unlockValues = new map<int, int>;
        m_unitsType = unitsType;
	}
	
	ref PerkInfo AddUnlockValue(int level, int value)
	{
		m_unlockValues.Insert(level, value);
		return this;
	}
	
	private int CalculateSkillId(int id)
	{
		int skill = 0;
		while (id >= 1000)
		{
			skill = skill + 1;
			id = id - 1000;
		}
		
		return skill;
	}
	
	int GetId()
	{
		return m_id;
	}
	
	string GetName()
	{
		return "#syb_perk_name_" + GetId();
	}
	
	string GetDesc(int level)
	{
		string result = "#syb_perk_desc_" + GetId();
		if (m_unitsType != "")
		{
			result = result + " " + GetUnlockLevelValue(level) + m_unitsType;
		}
		return result;
	}
	
	int GetSkillId()
	{
		return m_skillId;
	}
	
	bool HasUnlockLevel(int unlockLevel)
	{
		return m_unlockValues.Contains(unlockLevel);
	}
	
	int GetPrevUnlockLevel(int unlockLevel)
	{
		int result = -1;
		ref array<int> keys = m_unlockValues.GetKeyArray();
		keys.Sort();
		
		int curIndex = keys.Find(unlockLevel);
		if (curIndex > 0)
		{
			result = keys.Get(curIndex - 1);
		}
		
		return result;
	}
	
	int GetUnlockLevelValue(int unlockLevel)
	{
		return m_unlockValues.Get(unlockLevel);
	}
	
	ref map<int, int> GetUnlockLevels()
	{
		return m_unlockValues;
	}
};