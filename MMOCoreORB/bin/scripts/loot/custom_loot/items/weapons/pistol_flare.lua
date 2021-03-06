pistol_flare = {
	minimumLevel = 0,
	maximumLevel = -1,
	customObjectName = "",
	directObjectTemplate = "object/weapon/ranged/pistol/pistol_flare.iff",
	craftingValues = {
		{"mindamage",7,17,0},
		{"maxdamage",36,72,0},
		{"attackspeed",4.7,3.2,0},
		{"woundchance",3.4,7.2,0},
		{"hitpoints",750,750,0},
		{"attackhealthcost",19,11,0},
		{"attackactioncost",43,23,0},
		{"attackmindcost",20,12,0},
		{"roundsused",10,40,0},
		{"zerorangemod",-5,-5,0},
		{"maxrangemod",-60,-60,0},
		{"midrange",15,15,0},
		{"midrangemod",25,46,0},
	},
	customizationStringNames = {},
	customizationValues = {},

	-- randomDotChance: The chance of this weapon object dropping with a random dot on it. Higher number means less chance. Set to 0 to always have a random dot.
	randomDotChance = 800,
	junkDealerTypeNeeded = JUNKWEAPONS,
	junkMinValue = 20,
	junkMaxValue = 40

}

addLootItemTemplate("pistol_flare", pistol_flare)
