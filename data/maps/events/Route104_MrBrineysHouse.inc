Route104_MrBrineysHouse_EventObjects:: @ 838B654
	object_event 1, EVENT_OBJ_GFX_OLD_MAN_1, 0, 5, 0, 3, 0, 3, 50, 51, 0, 0, 0, 0, 0, Route104_MrBrineysHouse_EventScript_15BCEB, FLAG_HIDE_MR_BRINEY_ROUTE104_HOUSE, 0, 0
	object_event 2, EVENT_OBJ_GFX_WINGULL, 0, 6, 0, 3, 0, 3, 8, 51, 0, 0, 0, 0, 0, Route104_MrBrineysHouse_EventScript_15BDD1, FLAG_HIDE_PEEKO_BRINEY_HOUSE, 0, 0

Route104_MrBrineysHouse_MapWarps:: @ 838B684
	warp_def 5, 8, 0, 0, MAP_ROUTE104
	warp_def 6, 8, 0, 0, MAP_ROUTE104

Route104_MrBrineysHouse_MapEvents:: @ 838B694
	map_events Route104_MrBrineysHouse_EventObjects, Route104_MrBrineysHouse_MapWarps, 0x0, 0x0
