Route110_TrickHousePuzzle8_EventObjects:: @ 8392BA8
	object_event 1, EVENT_OBJ_GFX_MAN_4, 0, 12, 0, 21, 0, 3, 10, 0, 0, 1, 0, 2, 0, Route110_TrickHousePuzzle8_EventScript_163439, 0, 0, 0
	object_event 2, EVENT_OBJ_GFX_MAN_4, 0, 12, 0, 11, 0, 3, 10, 0, 0, 1, 0, 2, 0, Route110_TrickHousePuzzle8_EventScript_163467, 0, 0, 0
	object_event 3, EVENT_OBJ_GFX_WOMAN_7, 0, 10, 0, 11, 0, 3, 8, 0, 0, 1, 0, 1, 0, Route110_TrickHousePuzzle8_EventScript_163450, 0, 0, 0
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 2, 0, 11, 0, 3, 1, 0, 0, 0, 0, 0, 0, Route110_TrickHousePuzzle8_EventScript_1B1AB9, FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_1, 0, 0

Route110_TrickHousePuzzle8_MapWarps:: @ 8392C08
	warp_def 0, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 1, 21, 3, 2, MAP_ROUTE110_TRICK_HOUSE_ENTRANCE
	warp_def 13, 1, 0, 0, MAP_ROUTE110_TRICK_HOUSE_END

Route110_TrickHousePuzzle8_MapBGEvents:: @ 8392C20
	bg_event 7, 11, 3, 0, 0, Route110_TrickHousePuzzle8_EventScript_16341C

Route110_TrickHousePuzzle8_MapEvents:: @ 8392C2C
	map_events Route110_TrickHousePuzzle8_EventObjects, Route110_TrickHousePuzzle8_MapWarps, 0x0, Route110_TrickHousePuzzle8_MapBGEvents
