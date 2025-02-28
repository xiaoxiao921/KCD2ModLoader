# Console Commands

- **Bind**:

```text

```

- **ConsoleHide**:

```text
Closes the console
```

- **ConsoleShow**:

```text
Opens the console
```

- **GOCMode**:

```text
Enable GOC mode
```

- **LoadConfig**:

```text
Load .cfg file from disk (from the {Game}/Config directory)
e.g. LoadConfig lowspec.cfg
Usage: LoadConfig <filename>
```

- **RecordClip**:

```text
Records a video clip of the game
Usage: RecordClipCmd <exec/config> <time before> <time after> <local backup (backup/no_backup)> <annotation text>
e.g. RecordClipCmd config 10 5 backup My Test Video
     Configures the recording parameters
e.g. RecordClipCmd config
     Shows the current parameters
e.g. RecordClipCmd
     Records a video clip using the stored parameters
e.g. RecordClipCmd exec 3 6 no_backup Other Test Video
     Records a video clip using the given recording parameters and updates the configuration

```

- **RunUnitTests**:

```text
Execute a set of unit tests
```

- **Screenshot**:

```text
Create a screenshot with annotation
e.g. Screenshot beach scene with shark
Supported filetypes are .jpg and .tga; default is .jpg
Usage: Screenshot <annotation text>
```

- **VisRegTest**:

```text
Run visual regression test.
Usage: VisRegTest [<name>=test] [<config>=visregtest.xml] [quit=false]
```

- **WH_AI_DogPointManager_ReloadPoints**:

```text
Reloads points of interest for dog (marking and drinking spots)
```

- **WH_AI_Dog_RequestObjective**:

```text
Usage: wh_ai_Dog_RequestObjective 		<dogName> <objectiveName> [<targetName>]
```

- **WH_AI_Dog_SetMode**:

```text
Usage: wh_ai_Dog_SetMode <dogName> <mode>
```

- **ai_CheckGoalpipes**:

```text
Checks goalpipes and dumps report to console.
```

- **ai_DebugAgent**:

```text
Start debugging an agent more in-depth. Pick by name, closest or in center of view.
Example: ai_DebugAgent closest
Example: ai_DebugAgent centerview
Example: ai_DebugAgent name
Call without parameters to stop the in-depth debugging.
Example: ai_DebugAgent

```

- **ai_MNMComputeConnectedIslands**:

```text
Computes connected islands on the mnm mesh.

```

- **ai_Recorder_Start**:

```text
Reset and start the AI Recorder on demand
```

- **ai_Recorder_Stop**:

```text
Stop the AI Recorder. If logging in memory, saves it to disk.
```

- **ai_commTest**:

```text
Tests communication for the specified AI actor.
If no communication name is specified all communications will be played.
Usage: ai_commTest <actorName> [commName]

```

- **ai_commTestStop**:

```text
Stop currently playing communication for the specified AI actor.
Usage: ai_commTestStop <actorName>

```

- **ai_debugMNMAgentType**:

```text
Enabled MNM debug draw for an specific agent type.
Usage: ai_debugMNMAgentType [AgentTypeName]

```

- **ai_reload**:

```text
Reload AI system scripts and data
```

- **ai_resetCommStats**:

```text
Resets current communication statistics.
Usage: ai_resetCommStats

```

- **ai_writeCommStats**:

```text
Dumps current statistics to log file.
Usage: ai_writeCommStats

```

- **ban**:

```text
Bans player for 30 minutes from server.
```

- **ban_remove**:

```text
Removes player from ban list.
```

- **ban_status**:

```text
Shows currently banned players.
```

- **bulletTimeMode**:

```text
Enable bullet time mode
```

- **ca_DebugText**:

```text
if this is 1, it will print some debug text on the screen
if you give a file path or part of it instead, only the info for that character will appear
```

- **ca_OutputStats**:

```text
Output animation statistics
```

- **camgoto**:

```text
Get or set the current position and orientation for the camera
Usage: camgoto
Usage: camgoto x y z
Usage: camgoto x y z wx wy wz
```

- **closeVisorOn**:

```text
Closes visor on provided entity
```

- **connect**:

```text
Start a client and connect to a server
```

- **demo**:

```text
Plays a time demo from file.
Usage: demo demoname

```

- **demo_StartDemoChain**:

```text
Load's a file at 1st argument with the list of levels and play time demo on each

```

- **demo_StartDemoLevel**:

```text
Prepares and starts time demos for the specified set of level names

```

- **disconnect**:

```text
Stop a game (or a client or a server)
```

- **disconnectchannel**:

```text
Stop a game (or a client or a server)
```

- **dump_action_maps**:

```text
Prints all action map bindings to console
```

- **dump_maps**:

```text
Dumps currently scanned maps
```

- **dump_stats**:

```text
Dumps some player statistics
```

- **e_ParticleListEffects**:

```text
Writes all effects used and counts to log
```

- **e_ParticleListEmitters**:

```text
Writes all emitters to log
```

- **e_ParticleMemory**:

```text
Displays current particle memory usage
```

- **e_ReloadSurfaces**:

```text
Reload physical properties of all materials
```

- **eqp_DumpPacks**:

```text
Prints all equipment pack information to console
```

- **es_AudioListenerOffset**:

```text
Sets by how much the audio listener offsets its position and rotation in regards to its entity.
Usage: es_AudioListenerOffset PosX PosY PosZ RotX RotY RotZ

```

- **es_compile_area_grid**:

```text
Trigger a recompile of the area grid
```

- **es_debugAnim**:

```text
Debug entity animation (toggle on off)
```

- **es_dump_bookmarks**:

```text
Dumps information about all bookmarked entities
```

- **es_dump_entities**:

```text
Dumps current entities and their states!
```

- **es_dump_entity_classes_in_use**:

```text
Dumps all used entity classes
```

- **exec**:

```text
executes a batch file of console commands
```

- **fg_InspectAction**:

```text
Inspects the specified AIAction graph
```

- **fg_InspectEntity**:

```text
Inspects the specified Entity graph
```

- **fg_Inspector**:

```text
Toggles FlowGraph System DefaultInspector.
Usage: fg_Inspector [0/1]
Default is 0 (off).
```

- **freeze**:

```text
Freezes player
```

- **g_DebugConfigureActivity**:

```text
Changes the state of the activity from low level API
```

- **g_DebugProgressAchievement**:

```text
Set a progress to the achievement with this id
```

- **g_DebugSetCurrentActivity**:

```text
Changes the current activity just like a SetPlatformActivity concept box
```

- **g_DebugUnlockAchievement**:

```text
Unlocks achievement with this id (number)
```

- **g_Log_Drawcalls**:

```text
logs current draw call count
```

- **g_Log_FPS**:

```text
logs current frame rate
```

- **g_Log_Frametime**:

```text
logs current frame time
```

- **g_Log_Memory**:

```text
logs currently used memory
```

- **g_Log_VisReg**:

```text
logs current player and camera positions to use for visual regression
```

- **g_dumpClassRegistry**:

```text
Print to console the list of classes and their associated ids
```

- **g_dump_stats**:

```text

```

- **g_movementTransitions_reload**:

```text
Reloads all movementTransitions
```

- **g_saveLoadDumpEntity**:

```text
Print to console the xml data saved for a specified entity
```

- **gamedata_playback**:

```text

```

- **gamedata_record**:

```text

```

- **gamedata_stop_record_or_playback**:

```text

```

- **gfx_reload_all**:

```text
Reloads all UI Elements
```

- **goto**:

```text
Get or set the current position and orientation for the player. Same as playerGoto
Usage: goto - copies the result into the clipboard
Usage: goto entity
Usage: goto x y z
Usage: goto level x y z
Usage: goto x y z wx wy wzUsage: goto level x y z wx wy wz
```

- **gotoe**:

```text
Set the position of a entity with an given name
```

- **http_startserver**:

```text
Starts an HTTP server
```

- **http_stopserver**:

```text
Stops an HTTP server
```

- **i_dropitem**:

```text
Drops the current selected item!
```

- **i_giveallitems**:

```text
Gives all available items to the player!
```

- **i_giveammo**:

```text
Sets specified ammo to the specified amount in the player's inventory.
Usage: i_giveammo PistolBullet 999
```

- **i_givedebugitems**:

```text
Gives special debug items to the player!
```

- **i_giveitem**:

```text
Gives specified item to the player!
```

- **i_listitems**:

```text
List all item names matching the string provided as parameter.
```

- **i_saveweaponposition**:

```text
Saves weapon offset
```

- **kick**:

```text
Kicks player from game
```

- **kickid**:

```text
Kicks player from game
```

- **log_flush**:

```text
Flush the log file
```

- **lua_debugger_show**:

```text
Shows the Lua debugger window
```

- **lua_dump_coverage**:

```text
Dumps lua states
```

- **lua_dump_state**:

```text
Dumps the current state of the lua memory (defined symbols and values) into the file LuaState.txt
```

- **lua_garbagecollect**:

```text
Forces a garbage collection of the lua state
```

- **lua_reload_script**:

```text
Reloads given script files and their dependencies
```

- **map**:

```text
Load a map
```

- **mfx_Reload**:

```text
Reload MFX Spreadsheet
```

- **mfx_ReloadFGEffects**:

```text
Reload MaterialEffect's FlowGraphs
```

- **mn_DebugAI**:

```text

```

- **mn_listAssets**:

```text
Lists all the currently referenced animation assets
```

- **mn_reload**:

```text
Reloads animation databases
```

- **net_pb_cl_enable**:

```text
Sets PunkBuster client enabled state
```

- **net_pb_sv_enable**:

```text
Sets PunkBuster server enabled state
```

- **net_set_cdkey**:

```text

```

- **open_url**:

```text

```

- **osm_setFBScale**:

```text
Sets the framebuffer scale to either a single scale on both X and Y, or independent scales.
NOTE: Will be overridden immediately if Overload scene manager is still enabled - see osm_enabled
```

- **plDumpLocation**:

```text
Dump location for playerGoto. Same as running 'playerGoto' without arguments.
```

- **play**:

```text
Play back a recorded game
```

- **playerGoto**:

```text
Get or set the current position and orientation for the player. Same as goto
Usage: playerGoto - copies the result into the clipboard
Usage: playerGoto entity
Usage: playerGoto x y z
Usage: playerGoto level x y z
Usage: playerGoto x y z wx wy wzUsage: playerGoto level x y z wx wy wz
```

- **player_dumpFow**:

```text
Dumps to the state of the fog of war into a bitmap file.
```

- **player_revealFow**:

```text
Reveals fog of war over the entire map.
```

- **q_Quality**:

```text
If called with a parameter it sets the quality of all q_.. variables
otherwise it prints their current state
Usage: q_Quality [0=low/1=med/2=high/3=very high]
```

- **quit**:

```text
Quit/Shutdown the engine
```

- **r_ColorGradingChartImage**:

```text
If called with a parameter it loads the color chart immediately.
This image will overwrite all current loaded layers.
To reset to a neutral color chart, call r_ColorGradingChartImage 0.
Usage: r_ColorGradingChartImage [path of color chart image/ '0']
```

- **r_OverscanBorders**:

```text
Changes the size of the overscan borders for the left/right and top/bottom
of the screen for adjusting the title safe area. This is for logo placements
and text printout to account for the TV overscan and is mostly needed for consoles.
If only one value is specified, the overscan borders for left/right and top/bottom
are set simultaneously, but you may also specify different percentages for left/right
and top/bottom.
Usage: r_OverscanBorders [0..25]
       r_OverscanBorders [0..25] [0..25]
Default is 0=off, >0 defines the size of the overscan borders for left/right
or top/bottom as percentages of the whole screen size (e.g. 7.5).
```

- **r_PSOCompilationStatStart**:

```text

```

- **r_PSOCompilationStatStop**:

```text

```

- **r_PrecacheShaderList**:

```text

```

- **r_ReloadBillboardAtlas**:

```text
Reloads textures into the billboard atlas
```

- **r_ReloadDecalAtlas**:

```text
Reloads textures into the decal atlas
```

- **r_ReloadDetailAtlas**:

```text
Reloads textures into the detail atlas
```

- **r_ReloadMacroAtlas**:

```text
Reloads textures into the macro atlas
```

- **r_ReloadMaterialAtlas**:

```text
Reloads textures into the material atlas
```

- **r_RemoveCachedResourceDesc**:

```text
Requests removal of resource entry from RSC
Usage: r_RemoveCachedPSODesc [resource_type] [hashes... (hex)]
resource types:
	0 - pso
	1 - vertex_format
	2 - render_pass
	3 - resource_layout

```

- **r_ShowRenderTarget**:

```text
Displays render targets - for debug purpose
[Usage]
r_ShowRenderTarget -l : list all available render targets
r_ShowRenderTarget -l hdr : list all available render targets whose name contain 'hdr'
r_ShowRenderTarget -nf zpass : show any render targets whose name contain 'zpass' with no filtering in 2x2(default) table
r_ShowRenderTarget -c:3 pass : show any render targets whose name contain 'pass' in 3x3 table
r_ShowRenderTarget z hdr : show any render targets whose name contain either 'z' or 'hdr'
r_ShowRenderTarget scene:rg scene:b : show any render targets whose name contain 'scene' first with red-green channels only and then with a blue channel only
r_ShowRenderTarget scenetarget:rgba:2 : show any render targets whose name contain 'scenetarget' with all channels multiplied by 2
r_ShowRenderTarget scene:b hdr:a : show any render targets whose name contain 'scene' with a blue channel only and ones whose name contain 'hdr' with an alpha channel only
r_ShowRenderTarget -e $ztarget : show a render target whose name exactly matches '$ztarget'
r_ShowRenderTarget -s scene : separately shows each channel of any 'scene' render targets
r_ShowRenderTarget -k scene : shows any 'scene' render targets with RGBK decoding
r_ShowRenderTarget -a scene : shows any 'scene' render targets with 101110/8888 aliasingr_ShowRenderTarget -m:2 scene : shows mip map level 2 of 'scene' render targetsr_ShowRenderTarget -s:3 scene : shows array slice 3 of 'scene' render targets
```

- **r_TrimResourceCache**:

```text

```

- **raiseVisorOn**:

```text
Closes visor on provided entity
```

- **rcon_command**:

```text
Issues a console command from a RCON client to a RCON server
```

- **rcon_connect**:

```text
Connects to a remote control server
```

- **rcon_disconnect**:

```text
Disconnects from a remote control server
```

- **rcon_startserver**:

```text
Starts a remote control server
```

- **rcon_stopserver**:

```text
Stops a remote control server
```

- **record**:

```text
Starts recording of a time demo.
Usage: record demoname
File 'demoname.tmd' will be created.
```

- **s_ExecuteTrigger**:

```text
Execute an Audio Trigger.
The first argument is the name of the AudioTrigger to be executed, the second argument is an optional AudioObject ID.
If the second argument is provided, the AudioTrigger is executed on the AudioObject with the given ID,
otherwise, the AudioTrigger is executed on the GlobalAudioObject
Usage: s_ExecuteTrigger Play_chicken_idle 605 or s_ExecuteTrigger MuteDialog

```

- **s_SetRtpc**:

```text
Set an Audio RTPC value.
The first argument is the name of the AudioRtpc to be set, the second argument is the float value to be set,the third argument is an optional AudioObject ID.
If the third argument is provided, the AudioRtpc is set on the AudioObject with the given ID,
otherwise, the AudioRtpc is set on the GlobalAudioObject
Usage: s_SetRtpc character_speed  0.0  601 or s_SetRtpc volume_music 1.0

```

- **s_SetSwitchState**:

```text
Set an Audio Switch to a provided State.
The first argument is the name of the AudioSwitch to, the second argument is the name of the SwitchState to be set,the third argument is an optional AudioObject ID.
If the third argument is provided, the AudioSwitch is set on the AudioObject with the given ID,
otherwise, the AudioSwitch is set on the GlobalAudioObject
Usage: s_SetSwitchState SurfaceType concrete 601 or s_SetSwitchState weather rain

```

- **s_StopTrigger**:

```text
Execute an Audio Trigger.
The first argument is the name of the AudioTrigger to be stopped, the second argument is an optional AudioObject ID.
If the second argument is provided, the AudioTrigger is stopped on the AudioObject with the given ID,
otherwise, the AudioTrigger is stopped on the GlobalAudioObject
Usage: s_StopTrigger Play_chicken_idle 605 or s_StopTrigger MuteDialog

```

- **save_genstrings**:

```text

```

- **status**:

```text
Shows connection status
```

- **stopdemo**:

```text
Stop playing a time demo.

```

- **stoprecording**:

```text
Stops recording of a time demo.
Usage: stoprecording
File 'demoname.?' will be saved.
```

- **sw**:

```text
Control segmented world, use 'sw help' for more info
```

- **sys_LvlRes_finalstep**:

```text
to combine all recorded level resources and create final stripped build (pass directory name as parameter)
```

- **sys_LvlRes_findunused**:

```text
find unused level resources
```

- **sys_RestoreSpec**:

```text
Restore or test the cvar settings of game specific spec settings,
'test*' and 'info' log to the log file only
Usage: sys_RestoreSpec [test|test*|apply|info]
```

- **sys_crashtest**:

```text
Make the game crash
0=off
1=null pointer exception
2=floating point exception
3=memory allocation exception
4=cry fatal error is called
5=memory allocation for small blocks
6=assert
7=debugbreak
8=10min sleep
```

- **sys_driveinfo**:

```text
Print Drive information.
```

- **sys_localization_reload**:

```text
Reload all currently loaded localization databases.
```

- **test_delegate**:

```text
delegate test cmd
```

- **test_playersBounds**:

```text

```

- **test_profile**:

```text

```

- **test_reset**:

```text

```

- **unload**:

```text
Unload current map
```

- **version**:

```text
Shows game version number
```

- **voice_mute**:

```text
Mute player's voice comms
```

- **wait_frames**:

```text
Forces the console to wait for a given number of frames before the next deferred command is processed
Works only in deferred command mode
```

- **wait_seconds**:

```text
Forces the console to wait for a given number of seconds before the next deferred command is processed
Works only in deferred command mode
```

- **wh_RecordFrameTimesPause**:

```text
Pause recording of frame times
```

- **wh_RecordFrameTimesStart**:

```text
Start recording frame times.
```

- **wh_RecordFrameTimesStop**:

```text
Stop recording frame times and save xml file names based on arg
```

- **wh_RecordFrameTimesTestStop**:

```text
Stop recording frame times and generate a filename based on TestName/Tag/Timestamp, used by tests. Usage: `wh_RecordFrameTimesTestStop [testName] [tag(optional)]`.
```

- **wh_RecordFrameTimesUnpause**:

```text
Unpause recording of frame times
```

- **wh_ai_CheckPathGraphConnectivityFrom**:

```text
Print unconnected paths. You must specify entity which position is used as start point for path bfs
```

- **wh_ai_DisplayNPCHistory**:

```text
Displays the history of selected NPC properties
```

- **wh_ai_DogPointManager_ClearTimeouts**:

```text
Reset all timeouts on all dog points and behaviors.
```

- **wh_ai_DumpNPCHistory**:

```text
Dump the complete history of selected NPC properties to the log
```

- **wh_ai_MessageStatisticsCollect**:

```text
Collects the message debug statistics from current state
```

- **wh_ai_PathManager_ClearAll**:

```text

```

- **wh_ai_PostLoadErrorForceCancel**:

```text
Force cancels the post load error. Use only once the reason for the error has been identified
```

- **wh_ai_PrintNodeContexts**:

```text
Prints a list of node contexts for all registered behavior tree nodes
```

- **wh_ai_RebuildNavmesh**:

```text

```

- **wh_ai_RebuildNavmeshFromCache**:

```text

```

- **wh_ai_ReloadConfiguration**:

```text
Reloads the configuration of the XGenAIModule
```

- **wh_ai_budgetsClearLog**:

```text

```

- **wh_ai_budgetsFlushLog**:

```text

```

- **wh_am_DebugPlayAnimation**:

```text
Play animation on given entity.
```

- **wh_am_ReloadDB**:

```text
Regenerate all object databases.
```

- **wh_assignStashInventories**:

```text
Generate inventories, that would be assgined for stashes in export. Might be incorrent based on loaded layers!
```

- **wh_cc_OverrideBloodZoneMask**:

```text
Parameters: entity zoneIdx mask
```

- **wh_cheat_addItem**:

```text
Adds specific item into active player inventory.
```

- **wh_cheat_money**:

```text
Adds specific amount of money to the active player.
```

- **wh_concept_ExportDefinitions**:

```text
Exports concept graph definition file.
```

- **wh_concept_FullReload**:

```text
Clears all intermediate files and reloads concept graph file.
```

- **wh_concept_Reload**:

```text
Reloads concept graph file.
```

- **wh_cs_AddFilter**:

```text
Adds debug filter element.
```

- **wh_cs_Automation1_SelectProfile**:

```text
Select debug AI profile for target: 0 - no action, 1 - easy, 2 - medium, 3 - hard
```

- **wh_cs_Automation2_SelectProfile**:

```text
Select debug AI profile for target: 0 - no action, 1 - easy, 2 - medium, 3 - hard
```

- **wh_cs_DumpQuery**:

```text
Dumps query log into file.
```

- **wh_cs_ReloadDB**:

```text
Regenerate all combat object databases.
```

- **wh_cs_RemoveFilter**:

```text
Removes debug filter element.
```

- **wh_db_ReloadObjectDatabase**:

```text

```

- **wh_de_MoveDown**:

```text
Move down debug events
```

- **wh_de_MoveLeft**:

```text
Move left debug events
```

- **wh_de_MoveRight**:

```text
Move right debug events
```

- **wh_de_MoveToLast**:

```text
Move debug events to the last one
```

- **wh_de_MoveUp**:

```text
Move up debug events
```

- **wh_de_NextLayer**:

```text
Switches to next debug event layer
```

- **wh_de_PreviousLayer**:

```text
Switches to next debug event layer
```

- **wh_de_RulerLeft**:

```text
Move left debug event's ruler
```

- **wh_de_RulerRight**:

```text
Move right debug event's ruler
```

- **wh_de_TurnMultiline**:

```text
Turns on/off multi-line move that enables display events with same time
```

- **wh_de_ZoomIn**:

```text
Zoom in debug events
```

- **wh_de_ZoomOut**:

```text
Zoom out debug events
```

- **wh_dlg_ReloadDB**:

```text
Regenerates and reloads dialogue databases (e.g. dialogue_attachments)
```

- **wh_dlg_SetAnimDurationScales**:

```text
Regenerates and reloads dialogue animation database with new values for maximum and minimum duration scales
```

- **wh_dlg_reloadFunctions**:

```text
Reloads dialogue functions loaded from DB.
```

- **wh_dumpBigInventories**:

```text
Log informations about inventory with more than X items.
```

- **wh_e_ObserverEnable**:

```text
Manipulate observers.
```

- **wh_ent_GameProfileManagerDump**:

```text

```

- **wh_eval**:

```text
Can be used to evaluate expressions in runtime.
```

- **wh_game_unpause**:

```text
Debug command to unpause game for developers.
```

- **wh_horse_StealCurrentHorse**:

```text
Makes the horse the player sits on its primary horse companion. This might cause unforseen consequences.
```

- **wh_horse_ThrowDown**:

```text
Throw down the player from the current horse.
```

- **wh_mod_GenerateReport**:

```text
Generates a report in game's root directory.
```

- **wh_openInventory**:

```text
Opens inventory for specified actor by name.
```

- **wh_osh_load**:

```text
Stop all and reload
```

- **wh_osh_play**:

```text
Play haptic feedback
```

- **wh_osh_rtpc**:

```text
Set RTPC on a haptic feedback
```

- **wh_osh_stop**:

```text
Stop haptic feedback
```

- **wh_pl_FakeFastTravelTo**:

```text
Fake (quest) fast travel player to pos x y z -or- to entityname
Usage: x y z -or- entityname

```

- **wh_pl_FastTravelTo**:

```text
Fast travel player to pos x y z -or- to entityname
Usage: x y z -or- entityname

```

- **wh_pl_FollowEntity**:

```text
Sets entity for debug camera to follow
```

- **wh_pl_ForcedSkipTime**:

```text
Force skip time
Usage: num hours

```

- **wh_pl_GameOverTest**:

```text
WARNING: for testing only! Forces game over

```

- **wh_pl_MagicBox**:

```text

	- consumableitem
	- alchemybase
	- food
	- misc
	- ointment
	- missileweapon
	- meleeweapon
	- playeritem
	- divisibleitem
	- ammo
	- money
	- armor
	- document
	- item
	- craftingmaterial
	- herb
	- npctool
	- poison
	- die
	- dicebadge
	- helmet
	- key
	- keyring
	- pickableitem
	- weaponequip
	- equippableitem
	- weapon
	- quickslotcontainer
```

- **wh_pl_OrbitCameraPosition**:

```text
Sets position for debug camera on sphere from followed entity.
```

- **wh_pl_StopSkipTimeDebug**:

```text
Stops skip time
```

- **wh_player_Unlink**:

```text
Unlink the player from horse if still linked.
```

- **wh_rpg_FlushEventLog**:

```text
Discover a named RPG location.
```

- **wh_rpg_ResetLogging**:

```text
Resets event logging. You have to Reset after changing logging settings!
```

- **wh_rpg_ResetStatistics**:

```text
Resets all statistics.
```

- **wh_rpg_TelemetryPlaionSendStats**:

```text
Sends RPG statistics/counters to Plaion telemetry. Only works if Plaion telemetry is enabled
```

- **wh_rpg_UnlockAchievement**:

```text
param = ID of achievment to unlock
```

- **wh_rpg_UnlockAllAchievements**:

```text
Unlocks all achievements.
```

- **wh_rpg_countFastTravelPoints**:

```text
Returns number of fast travel points
```

- **wh_rpg_discover**:

```text
Reveal only positions of all POI and locations.
```

- **wh_rpg_discoverAll**:

```text
Reveal and discover all POI and locations.
```

- **wh_rpg_discoverLocation**:

```text
Discover a named RPG location.
```

- **wh_rpg_discoverPOI**:

```text
Discover all POI.
```

- **wh_rpg_dumpLocations**:

```text
Dump all RPG locations.
```

- **wh_rpg_getLocation**:

```text
Get current RPG location.
```

- **wh_rpg_reload**:

```text
Reloads all rpg tables.
```

- **wh_rpg_removePOI**:

```text
Remove procedural POI.
```

- **wh_rpg_resetLocations**:

```text
Reset all RPG locations.
```

- **wh_rpg_skill**:

```text
Dump all player's skills.
```

- **wh_rpg_undiscoverAll**:

```text
Undiscover all POI and locations.
```

- **wh_snd_ProcessBlendSpaceAnimEvents**:

```text
Process .animevents files for automatic placement of audio events in blend space animations.
```

- **wh_snd_filter**:

```text
Set the filter
```

- **wh_snd_fmcount**:

```text
Display total number of triggered events so far using ActivateTrigger
```

- **wh_snd_fmfiles**:

```text
List files that PlayFile routine was unable to load
```

- **wh_snd_fmstatus**:

```text
Display the current FMOD Update status
```

- **wh_snd_getatt**:

```text
Display the attenuation between two audio objects
```

- **wh_snd_getplayer**:

```text
Display audio object # of the player
```

- **wh_snd_listbanksbeingloaded**:

```text
List the banks that are currently loading.
```

- **wh_snd_loadbank**:

```text
Preload the audio data of the given bank.
```

- **wh_snd_loadbankmetadata**:

```text
Load the metadata of the given bank.
```

- **wh_snd_memory**:

```text
Executes FMOD Studio's Memory_GetStats function and prints the result.
```

- **wh_snd_pauseall**:

```text
Pause all sounds
```

- **wh_snd_playfile**:

```text
Play a speech file on the player
```

- **wh_snd_sqcdebug**:

```text
Enable SQC debug
```

- **wh_snd_sqcget**:

```text
Get value of an SQC variable
```

- **wh_snd_sqcinfo**:

```text
Retrieve soundtrack information
```

- **wh_snd_sqclist**:

```text
List values of all SQC variables
```

- **wh_snd_sqcpause**:

```text
Pause the music playback (= stream silence instead)
```

- **wh_snd_sqcplay**:

```text
Resume the music playback if stopped
```

- **wh_snd_sqcreload**:

```text
Reload music expressions
```

- **wh_snd_sqcset**:

```text
Set an SQC variable
```

- **wh_snd_sqcuptime**:

```text
Show the number of seconds served by SQC Music Engine
```

- **wh_snd_statobj**:

```text
Display information on given audio object
```

- **wh_snd_stopallfiles**:

```text
Stop all played files
```

- **wh_snd_unloadbank**:

```text
Unload the audio data of the given bank.
```

- **wh_snd_unloadbankmetadata**:

```text
Unload the metadata of the given bank.
```

- **wh_snd_unpauseall**:

```text
Unpause all sounds
```

- **wh_spawnItems**:

```text
Test spawn items on table!
```

- **wh_storm_RefreshAll**:

```text
Loads storm program from disk and runs it on all souls.
```

- **wh_storm_RefreshSoul**:

```text
Loads storm program from disk and runs it on given soul.
```

- **wh_storm_RunTask**:

```text
Runs setGenericCharacterNamePattern operators
```

- **wh_sys_ResetSaveLocks**:

```text
Removes all savegame locks
```

- **wh_sys_listpaks**:

```text
list opened pak files
```

- **wh_ui_KillFader**:

```text
Deletes a fader. Parameters: name of the fader
```

- **wh_ui_ListCutscenes**:

```text
List all pre-rendered cutscenes.
```

- **wh_ui_PlayCutscene**:

```text
Play cutscene with specified name (from db).
```

- **wh_ui_PlayMovie**:

```text
Play movie with specified path.
```

- **wh_ui_StopCutscene**:

```text
Stop the cutscene previously played with wh_ui_PlayCutscene.
```

- **wh_ui_StopMovie**:

```text
Stop movie previously played with wh_ui_PlayMovie.
```

- **wh_w_fire**:

```text
Fires ammo from weapon.
```

- **wh_weaponSystemReload**:

```text
Reloads weapon system.
```

