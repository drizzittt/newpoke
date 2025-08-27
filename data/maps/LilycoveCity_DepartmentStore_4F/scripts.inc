LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkMiddle::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_BattleItems:
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_MUSCLE_BAND
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_CHARCOAL
	.2byte ITEM_DAMP_ROCK
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_EJECT_BUTTON
	.2byte ITEM_EVIOLITE
	.2byte ITEM_FAIRY_FEATHER
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_GRIP_CLAW
	.2byte ITEM_HARD_STONE
	.2byte ITEM_HEAT_ROCK
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_ICY_ROCK
	.2byte ITEM_IRON_BALL
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_LOADED_DICE
	.2byte ITEM_MAGNET
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_POISON_BARB
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_WISE_GLASSES
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_WEAKNESS_POLICY
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	pokemartlistend

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_LIGHT_SCREEN
	pokemartlistend

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

