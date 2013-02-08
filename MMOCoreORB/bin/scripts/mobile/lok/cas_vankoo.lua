cas_vankoo = Creature:new {
	objectName = "@mob/creature_names:cas_vankoo",
	socialGroup = "kimogila",
	pvpFaction = "bandit",
	faction = "bandit",
	level = 117,
	chanceHit = 34,
	damageMin = 725,
	damageMax = 1160,
	baseXp = 11109,
	baseHAM = 40000,
	baseHAMmax = 49000,
	armor = 2,
	resists = {75,75,0,10,10,10,10,0,0},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER + STALKER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_lok_cas_vankoo.iff"},
	lootGroups = {},
	weapons = {"cas_vankoo_weapons"},
	conversationTemplate = "",
	attacks = merge(pistoleermaster,pikemanmaster)
}

CreatureTemplates:addCreatureTemplate(cas_vankoo, "cas_vankoo")
