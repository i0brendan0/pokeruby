MossdeepCity_House2_EventObjects:: @ 838A808
	object_event 1, EVENT_OBJ_GFX_MAN_5, 0, 6, 0, 6, 0, 3, 9, 0, 0, 0, 0, 0, 0, MossdeepCity_House2_EventScript_15A869, 0, 0, 0
	object_event 2, EVENT_OBJ_GFX_LITTLE_GIRL_1, 0, 4, 0, 4, 0, 3, 8, 0, 0, 0, 0, 0, 0, MossdeepCity_House2_EventScript_15A872, 0, 0, 0
	object_event 3, EVENT_OBJ_GFX_WINGULL, 0, 4, 0, 5, 0, 3, 7, 0, 0, 0, 0, 0, 0, MossdeepCity_House2_EventScript_15A87B, FLAG_HIDE_WINGULL_MOSSDEEP_HOUSE, 0, 0

MossdeepCity_House2_MapWarps:: @ 838A850
	warp_def 3, 8, 0, 3, MAP_MOSSDEEP_CITY
	warp_def 4, 8, 0, 3, MAP_MOSSDEEP_CITY

MossdeepCity_House2_MapEvents:: @ 838A860
	map_events MossdeepCity_House2_EventObjects, MossdeepCity_House2_MapWarps, 0x0, 0x0
