OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_RuinsSomewhere, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"

OldaleTown_House2_Text_RuinsSomewhere:
	.string "I know there was an ancient\n"
	.string "civilization here once, whatever that\p"
	.string "silly girl outside says. Why else would\n"
	.string "Devon scientist have been digging here?$"

