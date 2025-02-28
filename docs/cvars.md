# CVars

- **ExitOnQuit**:

```text

```

- **MemInfo**:

```text
Display memory information by modules
1=on, 0=off
```

- **MemStats**:

```text
0/x=refresh rate in milliseconds
Use 1000 to switch on and 0 to switch off
Usage: MemStats [0..]
```

- **MemStatsMaxDepth**:

```text

```

- **MemStatsThreshold**:

```text

```

- **STAP_DEBUG**:

```text
Enable STAP Debug Rendering
```

- **STAP_DISABLE**:

```text
Disable torso orientation
```

- **STAP_LOCK_EFFECTOR**:

```text
Lock the STAP Effector Joint
```

- **STAP_OVERRIDE_TRACK_FACTOR**:

```text
Override the base anim tracking factor
```

- **STAP_TRANSLATION_FEATHER**:

```text
Enable STAP Translation Feathering
```

- **STAP_TRANSLATION_FUDGE**:

```text
Enable STAP Translation Fudge
```

- **TMP_init**:

```text

```

- **TMP_update**:

```text

```

- **VisualConsole**:

```text
writes console to screen
```

- **VisualConsoleSubStr**:

```text
writes console to screen if it matches substr
```

- **WH_AI_ANIM_Debug_DisplayAdditionalInfo**:

```text
Display the error
```

- **WH_AI_ANIM_Debug_DisplayTags**:

```text
Display vertical step
```

- **WH_AI_ANIM_Debug_ShowFlags**:

```text
Are flags displayed
```

- **WH_AI_ANIM_Debug_TrashDepth**:

```text
How many animations are stored
```

- **WH_AI_BT_Node_Profile**:

```text
Allows/disallows profiling of individual node performance. Requires reload scripts for changes to take effect.
```

- **WH_AI_Boid_DisableThreats**:

```text
Turns of threat influence for XGEN AI boids.
```

- **WH_AI_Boid_MinPathLenght**:

```text
Minimal lenght of path proposed by BOID node. Shorter paths will be discarded.
```

- **WH_AI_BudgetEnabled**:

```text
Enable or disable budget system. If disabled, original tree execution is used.
```

- **WH_AI_BudgetedCombatSUBB**:

```text
budgets on combat subbrain
```

- **WH_AI_CombatIgnoreTargetAttraction**:

```text
ignore the attraction of the target
```

- **WH_AI_CombatIgnoreTargetOnSweetSpot**:

```text
if on sweet spto dont turn down
```

- **WH_AI_CombatMove_AccelerationLimit**:

```text
How fast can the vector speed change in following / combat (in m/ss)
```

- **WH_AI_CombatMove_AccelerationLimitHorse**:

```text
How fast can the vector speed change in following / combat (in m/ss) - specialization for horse
```

- **WH_AI_CombatMove_ApproachOffset**:

```text
How far from sweet spot approach should change to engage.
```

- **WH_AI_CombatMove_BehindCut**:

```text
cut stuff at back
```

- **WH_AI_CombatMove_CatchDistanceCap**:

```text
when being this far from target, it is already considered unreached
```

- **WH_AI_CombatMove_CatchDistanceTolerance**:

```text
when being this distance from ss area outer border, target is already considered caught
```

- **WH_AI_CombatMove_CatchTimeAngleLimit**:

```text
If catch time is limited by angle, this is the least dot product values that is required (direction to target vs current direction)
```

- **WH_AI_CombatMove_CirclingChangeSmoothTime**:

```text
Smoothing time of change in circling direction (not moving is here also considered a direction).
```

- **WH_AI_CombatMove_CirclingChooseMoveMaxProb**:

```text
Maximal probability (at maximal movement activity) that we will choose to move instead of standing still.
```

- **WH_AI_CombatMove_CirclingDirectionDurationMax**:

```text
Maximal duration for which one circling direction is held. This is average, can be increased by randomization by half.
```

- **WH_AI_CombatMove_CirclingDirectionDurationMin**:

```text
Minimal duration for which one circling direction is held. This is average, can be lowered by randomization by half.
```

- **WH_AI_CombatMove_CirclingLowestMovementActivity**:

```text
If movement activity is lower than this, there is no lateral circling.
```

- **WH_AI_CombatMove_CirclingWaitingDurationMax**:

```text
Maximal duration for which waiting during circling lasts. This is average, can be increased by randomization by half.
```

- **WH_AI_CombatMove_CirclingWaitingDurationMin**:

```text
Minimal duration for which waiting during circling lasts. This is average, can be lowered by randomization by half.
```

- **WH_AI_CombatMove_CuttingHisteresis**:

```text
cut equally
```

- **WH_AI_CombatMove_DampingSize**:

```text
How much repulsion is damped (only the part of it that prevents reaching ss)
```

- **WH_AI_CombatMove_DestinationRepulsionAlliesOnly**:

```text
Only enemies of our target (so our allies in defeating him) are checked in the destination repulsion computation.
```

- **WH_AI_CombatMove_DestinationRepulsionMinDist**:

```text
If closer to ss than this, follower pf cannot be stopped because of destination repulsion
```

- **WH_AI_CombatMove_DestinationRepulsionThreshold**:

```text
How much repulsion must be on some spot to prevent pathfollow there
```

- **WH_AI_CombatMove_DogBackwardLimitAngle**:

```text
The higher the number is, the less the dog shows his back to attacker (but it is harder for him to increase distance from opponent).The number is angle from completely backward orientation, that is the limit for dog's voluntary orientation (in radians).Used only when s_MinTurnAngle > 0.
```

- **WH_AI_CombatMove_DogDistanceMax**:

```text
Maximal desired combat distance for target from dog.
```

- **WH_AI_CombatMove_DogDistanceMin**:

```text
Minimal desired combat distance from target for dog.
```

- **WH_AI_CombatMove_DogMaxLateralLogicalSpeed**:

```text
Maximal lateral logical speed for fighting dogs. Default is 2 for canter.
```

- **WH_AI_CombatMove_DogMaxSpeed**:

```text
Maximal speed usable in combat in m/s.
```

- **WH_AI_CombatMove_DogMinLateralLogicalSpeed**:

```text
Minimal lateral logical speed for fighting dogs. Default is 1 for trot.
```

- **WH_AI_CombatMove_DogMinTurnRadius**:

```text
During combat, dog can turn only with higher or equal radius than this number. If 0, there is no limit.
```

- **WH_AI_CombatMove_DogUseTurnAngle**:

```text
Whether dog should use delta movement for turn angle. This cvar is checked only when combat start (to change it start a new combat)
```

- **WH_AI_CombatMove_EvasionManeuversSpeedRandPart**:

```text
[0,1] how big part of the speed is random (rest is rpg)
```

- **WH_AI_CombatMove_EvasionManeuversTimeIntervalRandomPart**:

```text
[0,1] how big part of the interval is random (rest is rpg)
```

- **WH_AI_CombatMove_EvasionManeuversTimeToChangeDirMax**:

```text
(in seconds) maximal time to change dir during bow evasion
```

- **WH_AI_CombatMove_EvasionManeuversTimeToChangeDirMin**:

```text
(in seconds) minimal time to change dir during bow evasion
```

- **WH_AI_CombatMove_ForceDisableMoveTransition**:

```text
disable transitions
```

- **WH_AI_CombatMove_ForceFocusBack_Horse**:

```text
how far back from center reaches horse repulsion
```

- **WH_AI_CombatMove_ForceFocusFront_Horse**:

```text
how far front from center reaches horse repulsion
```

- **WH_AI_CombatMove_ForceKeepDistance**:

```text
Force keep distance
```

- **WH_AI_CombatMove_ForceOffsetMax**:

```text
repulsion center (in following) moves in speed direction only up to this limit
```

- **WH_AI_CombatMove_ForceOffsetMaxSpeed**:

```text
speed at which repulsion center moves by s_ForceRepulsionOffsetMax
```

- **WH_AI_CombatMove_ForceSpeedupBase**:

```text
How much speed (m/s) passes the force object of speedupDistance 1m at distance 1m
```

- **WH_AI_CombatMove_ForceSpeedupDistance_Horse**:

```text
Distance at which Horse speeds up follower by WH_AI_CombatMove_ForceSpeedup
```

- **WH_AI_CombatMove_ForceSpeedupDistance_NPC**:

```text
Distance at which NPC speeds up follower by WH_AI_CombatMove_ForceSpeedup
```

- **WH_AI_CombatMove_ForceSpeedupDistance_NPCIndoor**:

```text
Used instead WH_AI_CombatMove_ForceSpeedupDistance_NPC if indoor GameContext is set
```

- **WH_AI_CombatMove_ForeignTargetRepulsion**:

```text
Extra repulsor between target and each other attacker. Repulsor is in front of target and if the attacker is 3m or closer, it has this repulsing speedup (for units seeWH_AI_CombatMove_ForceSpeedupBase). The further the attacker is, the smaller the repulsion gets.
```

- **WH_AI_CombatMove_FormationFacing**:

```text
do we face the direction of the formation
```

- **WH_AI_CombatMove_FormationLookAimTolerance**:

```text
the distance when to start looking into the direction of the formation
```

- **WH_AI_CombatMove_FormationRepulsionOverrideRelaxed**:

```text
Repulsion for relaxed formations (not applied for horses)
```

- **WH_AI_CombatMove_FormationRepulsionOverrideTight**:

```text
Repulsion for tight (Keep / Relocate) formations (not applied for horses)
```

- **WH_AI_CombatMove_FormationSpeedGapTolerance**:

```text
If the formation member is in its spot, allow him to move faster then the logical speed max limit would otherwise allow (by this amount). Does not work for the max speed limit (only smooths the speed limit gaps).
```

- **WH_AI_CombatMove_GuardDisableTimeout**:

```text
When guard is enabled, how much time must pass since disable request for it to take effect
```

- **WH_AI_CombatMove_GuardEnableTimeout**:

```text
When guard is disabled, how much time must pass since enable request for it to take effect
```

- **WH_AI_CombatMove_HorseModeRadiusMultiplier**:

```text
how many (max) radii from target the horse mode can start (going from sides if target is on horse)
```

- **WH_AI_CombatMove_InAreaHysteresisTolerance**:

```text
If leaving InArea state and not further than this distance from area, still considered within area
```

- **WH_AI_CombatMove_InfrontCut**:

```text
cut stuff infront
```

- **WH_AI_CombatMove_MaxAllowedSlope**:

```text
If the slope is higher that this, we don't cut lateral movement anymore (we try to circle to get to better position).
```

- **WH_AI_CombatMove_MaxAllowedSlopePlayer**:

```text
If the slope is higher that this, we don't cut lateral movement anymore (we try to circle to get to better position). Applies for NPC that targets player.
```

- **WH_AI_CombatMove_MaxArcRange**:

```text
ARC drivers maximum range angle
```

- **WH_AI_CombatMove_MaxCongetsion**:

```text
congestion per area to slow doen
```

- **WH_AI_CombatMove_MaxIgnoredSlope**:

```text
If the slope is lower that this, we don't care for it and don't cut lateral movement.
```

- **WH_AI_CombatMove_MaxIgnoredSlopePlayer**:

```text
If the slope is lower that this, we don't care for it and don't cut lateral movement. Applies for NPC that targets player.
```

- **WH_AI_CombatMove_MinArcRange**:

```text
ARC drivers minimum range angle
```

- **WH_AI_CombatMove_PlayerSecondaryAttackerHuntMultiplier**:

```text
Multiplier for average expected speed of getting to sweet spot (for player secondary attacker). If we are slower, hunt attack is triggered. Should be lower than WH_AI_CombatMove_PlayerSecondaryAttackerSpeedMultiplier ff we want less frequent hunt attacks
```

- **WH_AI_CombatMove_PlayerSecondaryAttackerOuterCircleTolerance**:

```text
How far behind the outer circle is the secondary player enemy considered close enough to slow him down globally.
```

- **WH_AI_CombatMove_PlayerSecondaryAttackerSpeedMultiplier**:

```text
Speed multiplier for someone attacking player, while player is attacking someone else.
```

- **WH_AI_CombatMove_ReactionMaxTime**:

```text
Max smooth time of target position from attacker point of view (for slowest reactions)
```

- **WH_AI_CombatMove_ReactionMinTime**:

```text
Min smooth time of target position from attacker point of view (for fastest reactions)
```

- **WH_AI_CombatMove_RefreshTime**:

```text
Timeout between moves
```

- **WH_AI_CombatMove_RepulsionForceCapped**:

```text
Whether the total repulsion force size is capped by biggest of its individual forces.
```

- **WH_AI_CombatMove_RepulsionForceMaxZDifference**:

```text
If two points have higher z difference that this, there is no repulsion force between them. Otherwise the force is computed in 2d.
```

- **WH_AI_CombatMove_RunawaySpeedForSyncGuardMinRange**:

```text
When the target gets away at least this fast, we close the minimal range up to sync guard range. When he gets away slower, we interpolate the minimum.
```

- **WH_AI_CombatMove_SlopeEstimateDistance**:

```text
How far perpendicularly to target direction do we sample z of the terrain to determine future slope.
```

- **WH_AI_CombatMove_SpeedHysteresisAdditiveBonus**:

```text
If out of allowed speeds interval (in gap), consider the distance to allowed speed limit for the current speed to be smaller by this amount then the distance to the other speed limit.
```

- **WH_AI_CombatMove_SpeedHysteresisMultiplicativeBonus**:

```text
If out of allowed speeds interval (in gap), consider the distance to allowed speed limit for the current speed to be smaller by this factor then the distance to the other speed limit.
```

- **WH_AI_CombatMove_StopTolerance**:

```text
tolerance radius
```

- **WH_AI_CombatMove_SweetSpotArea_AngleOffsetSmoothTime**:

```text
angle offset smoothign
```

- **WH_AI_CombatMove_SweetSpotArea_ArcPeriod**:

```text
updates of arc
```

- **WH_AI_CombatMove_SweetSpotArea_BiasPeriod**:

```text
updates of bias
```

- **WH_AI_CombatMove_SweetSpotArea_CenterSmoothTime**:

```text
sweet spot area center moves at this smoothing rate
```

- **WH_AI_CombatMove_SweetSpotArea_DebugDrawZOffset**:

```text
z offset
```

- **WH_AI_CombatMove_SweetSpotArea_DistanceOffsetSmoothTime**:

```text
distnace offset smoothign
```

- **WH_AI_CombatMove_SweetSpotArea_DorsalSmoothTime**:

```text
dorsal smoothing time
```

- **WH_AI_CombatMove_SweetSpotArea_LateralCutMinRaycastLength**:

```text
lateral cut raycast length is based on bias size, but this is always added to avoid too short raycasts
```

- **WH_AI_CombatMove_SweetSpotArea_LateralSmoothTime**:

```text
lateral smoothing time
```

- **WH_AI_CombatMove_SweetSpotArea_MainAxisSmoothTime**:

```text
main axis smoothing time
```

- **WH_AI_CombatMove_SweetSpotArea_MaxSmoothTime**:

```text
maximum angle of the sweet spot area smoothing time
```

- **WH_AI_CombatMove_SweetSpotArea_MinSmoothTime**:

```text
minimum angle of the sweet spot area smoothing time
```

- **WH_AI_CombatMove_SweetSpotArea_RangePeriod**:

```text
updates of range
```

- **WH_AI_CombatMove_SweetSpotArea_SSInflow**:

```text
how much is a point projected into the space between ss and tracked
```

- **WH_AI_CombatMove_SweetSpotArea_SweetSpotDistanceRatio**:

```text
ratio of distance of ss from target (default 1) - can move ss closer or further from its optimal position
```

- **WH_AI_CombatMove_TacticalFollowersUpdate**:

```text
how often is the range updated
```

- **WH_AI_CombatMove_TacticalRangeGain**:

```text
how much is added around
```

- **WH_AI_CombatMove_TacticalSurround**:

```text
how many are around
```

- **WH_AI_CombatMove_TargetRepulsionDampSpeedThreshold**:

```text
If the target is getting from us at least this fast, its repulsion is completely dampened (for us). Slower speeds damp the repulsion less.
```

- **WH_AI_CombatMove_ToGuardFactor**:

```text
factor in the guard slowdown equation
```

- **WH_AI_CombatMove_TooFarLowerClamp**:

```text
lower clamp for too far
```

- **WH_AI_CombatMove_TooFarToleranceFactor**:

```text
How much is the path distance tolareted
```

- **WH_AI_CombatMove_TurnAngleBackwardsChangeCooldown**:

```text
minimal cooldown after switching direction (forward / backward) until another switch, when turn angle movement is set (0 for no limitation, negative value for infinite)
```

- **WH_AI_CombatMove_TurnAngleMinSpeedToDisable**:

```text
below this speed, turn angle is always disabled (0 for no limitation, negative value for infinite
```

- **WH_AI_CombatMove_TurnAngleRotationMax**:

```text
Following turn angle rotation maximum (radians per second)
```

- **WH_AI_CombatMove_TurnAngleSmoothIn**:

```text
Following turn angle rotation smoothing in speed
```

- **WH_AI_CombatMove_TurnAngleSmoothOut**:

```text
Following turn angle rotation smoothing out speed
```

- **WH_AI_CombatMove_UnreachableWeaponTolerance**:

```text
How much reserve in weapon range must attacker at the mnm border have to be able to attack target oom (rather than send unreachable)
```

- **WH_AI_CombatSimulator_AccuracyMaxAgeMSec**:

```text
Minimum age of action to be considered eligible for for simulator accuracy measurement
```

- **WH_AI_CombatSimulator_AccuracyMinAgeMSec**:

```text
Minimum age of action to be considered eligible for for simulator accuracy measurement
```

- **WH_AI_CombatSimulator_Allow**:

```text
Allow the combat simulator subsystem at large.
```

- **WH_AI_CombatSimulator_DebugDraw**:

```text
Debug draw of latest combat simulator decisions for nearby NPCs.
```

- **WH_AI_CombatSimulator_ExperimentDefinition**:

```text
Name of the file that defines currently running human experiment
```

- **WH_AI_CombatSimulator_ExperimentRepeat**:

```text
If set to 1, the current experiment is repeated endlessly.
```

- **WH_AI_CombatSimulator_LogPredictions**:

```text
Enables logging of combat simulator predictions
```

- **WH_AI_CombatSimulator_MonitorAccuracy**:

```text
Enables automatic measurement of simulator accuracy
```

- **WH_AI_CombatSimulator_SearchesToKeep**:

```text
How many searches of the CombatSimulator are kept for debugging.
```

- **WH_AI_CombatUsePrediction**:

```text
try to predict movement
```

- **WH_AI_ConsoleDebug**:

```text
Select how much will be written into the debug console - 0 means nothing, 1 means all
```

- **WH_AI_CrimeFollower_ApproachDistance**:

```text
How far from target the followers will have maximum speed - sprint (slowing as they approach from this point on)
```

- **WH_AI_CrimeFollower_AreaRadius**:

```text
Radius of area where the follower is satisfied.
```

- **WH_AI_CrimeFollower_DistanceAssist**:

```text
Distance of follower in role 'Assist'
```

- **WH_AI_CrimeFollower_DistanceMain**:

```text
Distance of follower in role 'Main'
```

- **WH_AI_CrimeFollower_DistanceObserver**:

```text
Distance of follower in role 'Observer'
```

- **WH_AI_CrimeFollower_DistanceObserverMin**:

```text
Minimal distance of follower in role 'Observer', he always tries to move further away than this.
```

- **WH_AI_CrimeFollower_DistanceVariance**:

```text
Any crime follower distance is multiplied by random number (deterministic per NPC) from interval [ 1-variance ; 1+variance ]
```

- **WH_AI_CrimeFollower_RepulsionOverride**:

```text
How much the crime followers are repelled by other NPCs. For explanation of units see WH_AI_CombatMove_ForceSpeedupDistance_NPC which this cvar overrides for crime following.
```

- **WH_AI_DampDirectionChange**:

```text
When the force change is too small in respect to direction, this is logaritmically damped by a value
```

- **WH_AI_DisableAnimErrorCvar**:

```text
Disable anim error box if it spams (but still call Vegeta!).
```

- **WH_AI_DogPointManager_DrawPoints**:

```text
Toggles drawing of points of interest for dog (marking and drinking spots)
```

- **WH_AI_Dog_AlarmDirectionDotMinimum**:

```text
The minimal dot product allowed between dog direction and direction towards target.The closer to 1, the more dog looks exactly at target, but the more often is has to turn.
```

- **WH_AI_Dog_AlarmMaxObjectiveDistance**:

```text
Maximal distance for alarm objective.
```

- **WH_AI_Dog_AlarmObjectiveDisobedienceDuration**:

```text
Fake alarm maximal duration (+- AlarmObjectiveDurationVariation cvar).
```

- **WH_AI_Dog_AlarmObjectiveDisobediencePauseDuration**:

```text
Pause between fake alarm attempts.
```

- **WH_AI_Dog_AlarmObjectiveDuration**:

```text
Normal alarm maximal duration (+- AlarmObjectiveDurationVariation cvar).
```

- **WH_AI_Dog_AlarmObjectiveDurationVariation**:

```text
Variation for alarm duration (both normal and fake).
```

- **WH_AI_Dog_AlarmYieldingDelay**:

```text
How long after alarm beginning the objective starts to yield (can be interrupted by higher priority objectives that don't normally interrupt.
```

- **WH_AI_Dog_AmbushNPCTrackRadius**:

```text
From what distance will dog notice NPCs is ambush mode.
```

- **WH_AI_Dog_BarkInterval**:

```text
Minimal time interval (in seconds) between two runs of Bark objective.
```

- **WH_AI_Dog_BarkMaxDistance**:

```text
Maximal distance at which bark objective can be started (but already with negligible priority.
```

- **WH_AI_Dog_BarkMinDistance**:

```text
Distance at which Barking objective has its maximal priority.
```

- **WH_AI_Dog_ChaseActionTimeout**:

```text
Time between two chasing in seconds.
```

- **WH_AI_Dog_ChaseBarkingTimeout**:

```text
Duration in seconds of barking at the action point of the chase.
```

- **WH_AI_Dog_ChaseMasterDogDistance**:

```text
Maximal distance to the master where chase objective can be run.
```

- **WH_AI_Dog_ChaseMaxDistanceToTarget**:

```text
Max distance to the target boid where chase objective has minimal priority.
```

- **WH_AI_Dog_ChaseMinDistanceToTarget**:

```text
Min distance to the target boid where chase objective has maximal priority.
```

- **WH_AI_Dog_CourtSniffMinInterval**:

```text
Minimal time interval between two court sniffing (in seconds)
```

- **WH_AI_Dog_DigMaxMasterVelocity**:

```text
Objective has maximum priority when velocity of master is zero and minimum when master reach the value of DigMaxMasterVelocity.
```

- **WH_AI_Dog_DigMaxRange**:

```text
Range in meters around the master where the point of digging is found.
```

- **WH_AI_Dog_DigMinInterval**:

```text
Minimal time interval between two digging (in seconds)
```

- **WH_AI_Dog_DogMinTeleportDistance**:

```text
Minimal distance to the master when teleport is available.
```

- **WH_AI_Dog_DogTeleportDistance**:

```text
Dog will teleport behind the master when it exceeds this distance.
```

- **WH_AI_Dog_DrinkMinInterval**:

```text
Minimal time interval between two drinking (in seconds)
```

- **WH_AI_Dog_DrinkStopDistance**:

```text
Distance in meters to stop before water to drink.
```

- **WH_AI_Dog_EatingApproachingPredictionWeight**:

```text
Prediction weight to stop before reaching the meat. 0 means no prediction, 1 - means full prediction based on current speed
```

- **WH_AI_Dog_EatingReplanDistance**:

```text
Distance in meters for re-planing movement for eating (for example the meat can move).
```

- **WH_AI_Dog_EatingTime**:

```text
Dog food eating time
```

- **WH_AI_Dog_EatingWalkingDistance**:

```text
Distance in meters when a dog will go to the walking speed before reach the meat.
```

- **WH_AI_Dog_FetchGrabVictimDistance**:

```text
When distance to the victim is lower than this the grab is immediate without any move to the victim.
```

- **WH_AI_Dog_FetchPutVictimDistance**:

```text
When distance to the master is lower than this the put is immediate without any move to the master.
```

- **WH_AI_Dog_FetchPutVictimMountedDistance**:

```text
The same meaning as FetchPutVictimDistance when master is mounted.
```

- **WH_AI_Dog_FetchValidVictimDistanceOffset**:

```text
Offset added to put distance to consider range around the master as valid.
```

- **WH_AI_Dog_FetchVictimStopDistance**:

```text
Distance in meters before victim to stop movement and start grab.
```

- **WH_AI_Dog_FollowActivationDogStealthDistance**:

```text
If player is doing stealth, follow will not activate if dog is closer than this.
```

- **WH_AI_Dog_FollowDogReactionTime**:

```text
Dog will continue with current move before new replan when master speed changes abruptly.
```

- **WH_AI_Dog_FollowDogTargetApproachDistance**:

```text
Threshold distance to enable early replan before dog reaches target point during master movement.
```

- **WH_AI_Dog_FollowEmergencyFleeDistanceToFlee**:

```text
When emergency flee is engaged during follow the dog will flee to this distance.
```

- **WH_AI_Dog_FollowEmergencyFleeDistanceToTarget**:

```text
The dog will flee if target is further than this distance and tries to teleport during the movement.
```

- **WH_AI_Dog_FollowEmergencyRadius**:

```text
Radius for target point search when master position is not valid (master is in interior).
```

- **WH_AI_Dog_FollowHeelDynamicOffset**:

```text
Offset factor when master is moving when dog is planning new target point.
```

- **WH_AI_Dog_FollowHeelRadius**:

```text
Radius in meters where dog is trying to reach around the master.
```

- **WH_AI_Dog_FollowHeelRadiusWhenMounted**:

```text
Same as s_FollowHeelRadius but when master is mounted.
```

- **WH_AI_Dog_FollowHeelStaticOffset**:

```text
Offset factor when master is static when dog is planning new target point.
```

- **WH_AI_Dog_FollowHeelTimeout**:

```text
Maximal time in seconds that dog follows his master's heel until priority drops to 0.
```

- **WH_AI_Dog_FollowMaxDistanceMasterToTarget**:

```text
Maximum distance from master to last planned point. If this distance is reached, follow is replanned.
```

- **WH_AI_Dog_FollowMaxDogPanicDistance**:

```text
At this distance is dog in maximum panic mode and will follow with absolute priority and interrupting.
```

- **WH_AI_Dog_FollowMinDogPanicDistance**:

```text
Start distance for dog panic. This allows dog to increase priority up to maximum of follow.
```

- **WH_AI_Dog_FollowMinimalNewPointDistance**:

```text
Minimal distance from previous found point in meters.
```

- **WH_AI_Dog_FollowMovementOffsetPrediction**:

```text
Offset factor to search area when master is in movement during follow.
```

- **WH_AI_Dog_FollowSpeedChangeCooldown**:

```text
How often can dog follow speed change (eliminates speed jitter)
```

- **WH_AI_Dog_FollowSpeedDogAheadOffset**:

```text
How far in front of master should dog try to run, when master constantly runs
```

- **WH_AI_Dog_FollowSpeedIncreaseDistance**:

```text
For each this whole distance from master, the dog uses faster speed to catch master
```

- **WH_AI_Dog_FollowTargetPointRange**:

```text
Range in meters to find new point for movement in front of master.
```

- **WH_AI_Dog_FollowYiedingMasterSpeedTolerance**:

```text
By how much slower than FastRun can master move to be considered not traveling somewhere (and thus Follow yields).
```

- **WH_AI_Dog_FollowYiedingMaxMasterDistance**:

```text
Maximum distance to the master that allows yielding follow objective.
```

- **WH_AI_Dog_FoundByMasterBarkTime**:

```text
When master gets close to dog who found POI, how long should the dog remain barking.
```

- **WH_AI_Dog_FoundByMasterDistance**:

```text
Distance when search is considered as finish when master is near the poi.
```

- **WH_AI_Dog_FunMoveMaxRange**:

```text
Range in meters where new movement target is planned in front of the master.
```

- **WH_AI_Dog_FunMoveMinDistance**:

```text
Minimal distance from current position of the dog where new target will be found.
```

- **WH_AI_Dog_FunMoveMinInterval**:

```text
Interval between automatic running of fun move objective.
```

- **WH_AI_Dog_FunMoveYieldingMasterDistance**:

```text
When master is further than this distance the objective will be yielding immediately.
```

- **WH_AI_Dog_FunOnPointMaxDistance**:

```text
Maximal distance of drink point to start objective (in meters). The lower the distance, the more likely the dog will mark.
```

- **WH_AI_Dog_FunOnTargetPointUpdateTimeout**:

```text
Time between FunOnTarget objectives point updates (in seconds)
```

- **WH_AI_Dog_GrowlDuration**:

```text
Duration how long will dog growl after trigger growl component.
```

- **WH_AI_Dog_HuntCapacityReplenishRate**:

```text
Coefficient to replenish capacity over time.
```

- **WH_AI_Dog_HuntMaximumCapacity**:

```text
Maximum hunting capacity.
```

- **WH_AI_Dog_HuntPeriod**:

```text
Period of hunt objective when dog is hunting automatically.
```

- **WH_AI_Dog_HuntWaitForMasterTermDist**:

```text
Min distance from master to end waiting for master after hunt.
```

- **WH_AI_Dog_HuntWaitForMasterTimeout**:

```text
Max time for waiting for master after hunt.
```

- **WH_AI_Dog_MarkMinInterval**:

```text
Minimal time interval between two markings (in seconds)
```

- **WH_AI_Dog_MaxCombatBorder**:

```text
Maximal distance for combat priority border.
```

- **WH_AI_Dog_MaxHuntObjectiveDistance**:

```text
Max distance for lowest priority computation during hunting.
```

- **WH_AI_Dog_MaxHuntSpeed**:

```text
Maximal speed usable in hunt in m/s.
```

- **WH_AI_Dog_MaxMildAlarmDistance**:

```text
Maximal distance for mild alarm.
```

- **WH_AI_Dog_MaxPointDistance**:

```text
Maximal distance of SO point to start FunOnSo objective (in meters). The higher the distance, the more likely the dog will do the behavior on point.
```

- **WH_AI_Dog_MaxRiderFollowDistance**:

```text
Maximal distance to master for this objective to be active. When dog's distantion is greather than this, the objective will yield, FollowObjective will kick in. FollowObjective then has all the custom logic for teleports and stuff.
```

- **WH_AI_Dog_OwnerTrackerSamplingCacheSize**:

```text
Sets the size of the recent owner position cache.
```

- **WH_AI_Dog_OwnerTrackerSamplingInterval**:

```text
Sets the interval of insertion into the recent owner position cache. Smoothing of owner's velocity isbased on the oldest sample.
```

- **WH_AI_Dog_OwnerTrackerSmoothFalloffDelay**:

```text
Time when moving for which gradual smooth time falloff to zero is delayed
```

- **WH_AI_Dog_OwnerTrackerSmoothTime**:

```text
Maximum smooth time (see SmoothCD) for owner's position, rotation and velocity
```

- **WH_AI_Dog_PathsEnabled**:

```text
If true, dog uses navigation paths for longer movement.
```

- **WH_AI_Dog_RunawayHideDistance**:

```text
Distance in meters when dog is hidden in runaway mode.
```

- **WH_AI_Dog_SearchFailedTimeout**:

```text
Objective timeout after objective failed (player did not follow the dog).
```

- **WH_AI_Dog_SearchFoundBarkTime**:

```text
Length of barking when item is found.
```

- **WH_AI_Dog_SearchMaxAttempts**:

```text
Maximum number of attempts when trying to find a random waypoint in range
```

- **WH_AI_Dog_SearchMaxDistanceToStart**:

```text
Maximum distance from master to start new tracking.
```

- **WH_AI_Dog_SearchMaxRange**:

```text
Maximum range to find waypoints from points on path to target
```

- **WH_AI_Dog_SearchPOIAproxSize**:

```text
Distance before POI where dog stop and begin barking.
```

- **WH_AI_Dog_SearchPOIRadiusOffset**:

```text
Distance is used to offset poi radius to stop dog searching.
```

- **WH_AI_Dog_SearchRecentTimeout**:

```text
Time after which the same tracking target can be chosen again.
```

- **WH_AI_Dog_SearchStashAproxSizeOffset**:

```text
Offset distance before stash where dog stop. The real distance is derived from the size of the stash.
```

- **WH_AI_Dog_SearchSuccessfulTimeout**:

```text
Objective timeout after objective finished
```

- **WH_AI_Dog_SearchWaitDistance**:

```text
Distance after which the dog will play waiting animation.
```

- **WH_AI_Dog_SearchWaitingTime**:

```text
Length of searching without moving animation.
```

- **WH_AI_Dog_ShakeoutInterval**:

```text
Duration in seconds between two shake out actions.
```

- **WH_AI_Dog_ShakeoutMinimumWaterDepth**:

```text
Minimum depth of water that dog must walk through to be marked as wet.
```

- **WH_AI_Dog_ShakeoutRainThreshold**:

```text
Threshold rain intensity when the objective can be planned.
```

- **WH_AI_Dog_ShakeoutTimeAfterRainStart**:

```text
Time after start raining when shaking is plannable.
```

- **WH_AI_Dog_SniffMinInterval**:

```text
Minimal time interval between two point sniffing (in seconds)
```

- **WH_AI_Dog_SniffOffset**:

```text
Offset of the sniff animation. It can be a bit more further away.
```

- **WH_AI_Dog_SniffStopDistance**:

```text
Stopping distance from point when sniffing. Dog will not go all the way to the end of the path, but will play the animation early.
```

- **WH_AI_Dog_StealthInertiaTime**:

```text
Stealth state will be held this long after player stops crouching.
```

- **WH_AI_Dog_WaitActivityVariation**:

```text
Variation part of waiting activity duration.
```

- **WH_AI_Dog_WaitAvoidanceAngle**:

```text
Angle tolerance for NPC direction and the position of the dog.
```

- **WH_AI_Dog_WaitAvoidanceDistance**:

```text
Distance before dog to start avoidance movement when NPC is at maximum speed given by s_WaitAvoidanceMaxNPCVel.
```

- **WH_AI_Dog_WaitAvoidanceDogRotationAngle**:

```text
Angle tolerance for limiting sector based on dog rotation. The system prefers direction of the movement given by rotation of the dog.
```

- **WH_AI_Dog_WaitAvoidanceForbiddenAngle**:

```text
Angle tolerance limiting in direction of movement of the target NPC. The dog tries to move the the sides.
```

- **WH_AI_Dog_WaitAvoidanceMaxDistanceFromOrigPos**:

```text
Maximum distance in meters of the movement from the original position when wait started.
```

- **WH_AI_Dog_WaitAvoidanceMaxFindPointAttemps**:

```text
Maximum attempts in find method during search for avoidance target point.
```

- **WH_AI_Dog_WaitAvoidanceMaxNPCVel**:

```text
Maximum speed of NPCs. It is constant for determining velocity factor and distance before dog to start avoidance movement.
```

- **WH_AI_Dog_WaitAvoidanceMinMoveDistance**:

```text
Minimum distance for avoidance movement.
```

- **WH_AI_Dog_WaitAvoidanceMoveDistance**:

```text
Typical distance for avoidance movement.
```

- **WH_AI_Dog_WaitForsakenDistance**:

```text
Master must be at least this far away (or at dog inaccessible position) for dog to be considered forsaken
```

- **WH_AI_Dog_WaitForsakenMinTime**:

```text
Dog must be waiting for at leas this long to be considered forsaken.
```

- **WH_AI_Dog_WaitProrityMaxMasterSpeed**:

```text
Maximum master speed when priority of wait is minimal.
```

- **WH_AI_Dog_WaitYieldingOtherTimeout**:

```text
Minimal time before the objective can be interrupted by others.
```

- **WH_AI_Dog_WaterTubDrinkingMinInterval**:

```text
Minimal time interval between two water tub drinking (in seconds)
```

- **WH_AI_DrawPredefinedPath**:

```text
WH_AI_DrawPredefinedPath
```

- **WH_AI_EmergencyThreshold**:

```text
Emergency threshold for NPC
```

- **WH_AI_FWD_WarnIfMissing**:

```text
If a variable is used and it is not declared in a current tree (it is expected to be in a parent), it should be forward declared. Set this to 1 to show warnings if this forward declaration is missing.
```

- **WH_AI_FaderBarrier_TimeoutDuration**:

```text
Timeout duration of ReadinessObserver in FaderBarrier node
```

- **WH_AI_FormationApproachDistance**:

```text
How far from their spot are formation members considered approaching (closing distance asap).
```

- **WH_AI_FormationApproachDistanceHorse**:

```text
How far from their spot are formation members considered approaching (closing distance asap) - specialization for horses.
```

- **WH_AI_FormationTurnMaxDistance**:

```text
Maximal distance from path point to start smoothed turn.
```

- **WH_AI_FormationTurnSmoothingActive**:

```text
If MoveHistory formation mode should use smoothing.
```

- **WH_AI_Formation_StopPredictionMaxLogicalSpeed**:

```text
The highest logical speed allowed during stopping.
```

- **WH_AI_Formation_StopPredictionTimeReserve**:

```text
How much in advance (in seconds) should followers react to leader stop.
```

- **WH_AI_GraphSearchSteps**:

```text
Number of steps done by the graph search per update per graph search, -1 means max
```

- **WH_AI_LOD_Areas**:

```text
0 - only distance is used for NPC LOD resolution, 1 - filtered by LOD areas, 2 - filtered by Visibility areas
```

- **WH_AI_LOD_ForceFullPriorityUpdateObserverPosChangeThreshold**:

```text
Threshold of observer position change to trigger full update of LOD agents' LOD state
```

- **WH_AI_LOD_GroupInterval**:

```text
Maximal time in miliseconds between combat LOD group refreshes (actualizations of their LOD status).
```

- **WH_AI_LOD_HysteresisMultiplierDetail**:

```text
When comparing distances to select closest NPCs to be in Detail, the distance of NPCs already in detail is multiplied by this number to achieve hysteresis (should be lower than 1).
```

- **WH_AI_LOD_HysteresisMultiplierMonsterLOD**:

```text
When comparing distances to select the furthest NPCs to be in MonsterLOD, the distance of NPCs already in MonsteLOD is multiplied by this number to achieve hysteresis (should be higher than 1).
```

- **WH_AI_LOD_MLBehaviorTimeout**:

```text
How long does one cycle of behavior take, when in MonsterLOD. Movement is extra.
```

- **WH_AI_LOD_MLBehaviorTimeoutVariation**:

```text
The variation in duration of behavior's one cycle
```

- **WH_AI_LOD_MLPostponedTeleportPlayerDistance**:

```text
If the behavior has ML flag that postpones its ML teleport when the destination is visible, it is not postponed if player is further than this distance.
```

- **WH_AI_LOD_MLUseFakeMovementMinimalDistance**:

```text
The minimal distance in which the fake movement is used in monster LOD
```

- **WH_AI_LOD_MLUseFakeMovementMinimalDistanceSkipTime**:

```text
The minimal distance in which the fake movement is used in monster LOD. Use in skip time
```

- **WH_AI_LOD_MaxCountDetail**:

```text
The maximal amount of NPCs in Detail.
```

- **WH_AI_LOD_MaxCountDetailBuffer**:

```text
Temporarily this amount of NPCs can be switching to Detail even if NPCs that release budget for them haven't finished switching out of Detail yet.
```

- **WH_AI_LOD_MaxCountLOD**:

```text
The maximal amount of NPCs that are in LOD (NPCs in Detail don't count to this limit, their budget is separate).
```

- **WH_AI_LOD_MaxCountLODBuffer**:

```text
Temporarily this amount of NPCs can be switching to LOD (from ML) even if NPCs that release budget for them haven't finished switching to ML yet.
```

- **WH_AI_LOD_MaxCountLODUnstealableByMLWakeUp**:

```text
If there are too many MonsterLOD wakeUps, they start to overuse lodBudget instead of taking all lodBudget. How much lodBudget remains untouched is defined by this cvar (shouldn't be bigger than the lodBudget: WH_AI_LOD_MaxCountLOD).
```

- **WH_AI_LOD_MaxDetailDistance**:

```text
Maximal distance at which npc is not yet switched from Detail to LOD (for switching the other way multiply it with WH_AI_LOD_HysteresisMultiplierDetail)
```

- **WH_AI_LOD_MaxNonMLDistance**:

```text
The maximal searched distance for NPCs that should not be in MonsterLOD. The lower the value, the better the performance
```

- **WH_AI_LOD_MaxNonMLDistanceHysteresisMultiplier**:

```text
Hysteresis ratio for WH_AI_LOD_MaxNonMLDistance (see its description). Note that apart from this ration, hysteresis distance is additionally increased by grid imprecision.
```

- **WH_AI_LOD_MaxNonMLDistanceSkipTime**:

```text
The maximal searched distance for NPCs that should not be in MonsterLOD the is used in skip time
```

- **WH_AI_LOD_MonsterLODPerception_MaxNPCsPerBatch**:

```text
How many NPCs can receive the perception message in MonsterLOD from one specific volume in one of its check intervals [s]. Negative number means all NPCs in radius receive the message, 0 disables the sending of messages altogether.
```

- **WH_AI_LOD_MonsterLODPerception_MessageInterval**:

```text
How often one perceptible volume in MonsterLOD checks its surroundings and send perception messages [s]
```

- **WH_AI_LOD_MonsterLODPerception_MessageNPCCooldown**:

```text
How often can one specific NPC receive MonsterLOD perception message from one specific volume [s]
```

- **WH_AI_LOD_MonsterLODPerception_MessageRadius**:

```text
How far from the perceptible volume can be the NPC that receives MonsterLOD perception message [m]
```

- **WH_AI_LOD_SOWakeupDistanceMultiplier**:

```text
Multiplier for distance for determining when to run OnMonsterLODWakeup tree on smart objects. To call it sooner (as player approaches) than surrounding NPCs wake up, make the value lower than 1.
```

- **WH_AI_LinkArrowLength**:

```text
Length of an arrow (default: 0.4f)
```

- **WH_AI_LinkArrowWidth**:

```text
What is the link's arrow size (default: 0.2f)
```

- **WH_AI_LinkGizmoArrowHeadDistance**:

```text
What is the distance between arrowheads (default: 3.0f)
```

- **WH_AI_LinkSparkleVisibility**:

```text
Sets the visibility of sparkles - 0 none 
 1 only when drawing the link 
 2 always visible
```

- **WH_AI_LinkSpeed**:

```text
What is the link's arrow speed (default: 5.0f)
```

- **WH_AI_LinkVisibility**:

```text
How far are the link shown
```

- **WH_AI_LogLevel**:

```text
What kind of logs are provided, all the levels below a given level are displayed. Higher the number, less severity
 0 - No Errors at all 
 1 - Fatal Errors 
 2 - Recoverable Errors (& Fatal Errors) 
 3 - Warnings (& Fatal and Recoverable errors) 
 4 - Notes (Warnings & Fatal & Recoverable errors)		When the value is negative only the exact level is printed.
 -1 - Fatal errors 
 -2 - Recoverable errors 
 -3 - Warnings 
 -4 - notes
```

- **WH_AI_Module_Debug_Draw**:

```text
This draws various debug info from AI module
```

- **WH_AI_MoveToAnimationThreshold**:

```text
How far in metres should the movement start to trigger the movenet from animation
```

- **WH_AI_NotNearPlayerAheadTime**:

```text
default not near player ahead detection time [s]
```

- **WH_AI_NotNearPlayerRadius**:

```text
default radius for not near player detection [m]
```

- **WH_AI_ParallelUpdate**:

```text
Enables AI parallel update optimalization
```

- **WH_AI_PassiveWaiting**:

```text
Passive waiting on/off
```

- **WH_AI_Path_AllowPathConnectionsEnds**:

```text
How many connections can be created on designed path ends. Minimal 1
```

- **WH_AI_Path_AllowPathConnectionsMiddle**:

```text
How many connections can be created on designed path middle points. Minimal 1
```

- **WH_AI_ReadinessWait_TimeoutDuration**:

```text
Timeout duration of ReadinessObserver in ReadinessWait node
```

- **WH_AI_RecentlySkirmishMaxTime**:

```text
Max time for RecenltSkirmished node
```

- **WH_AI_StartingForceDelay**:

```text
Starting is delayed by this time, if exactly WH_AI_StartingForceThreshold is applied. Larger force lowers the delay.
```

- **WH_AI_StartingForceDelayVariation**:

```text
Random variation for WH_AI_StartingForceDelay (up to this value is added or substracted).
```

- **WH_AI_StartingForceLowestSpeedRatio**:

```text
If the follower isn't moving and its force is higher then than this fraction of its lowest non-0 speed, it starts moving (note that there is also delay).
```

- **WH_AI_StoppingForceLowestSpeedRatio**:

```text
If the force affecting follower is smaller than this fraction of its lowest non-0 speed, it is ignored and follower stops.
```

- **WH_AI_TargetFollower_OutOfMNMRaycastBudget**:

```text
maximum number of consecutive raycasts in targetFollower MNM check
```

- **WH_AI_TargetTracker_EstimateCount**:

```text
How many samples are kept during target tracking for possible future estimation.
```

- **WH_AI_TargetTracker_EstimateInterval**:

```text
How often (in ms) should speed estimation sample be taken.
```

- **WH_AI_TargetTracker_EstimateMinimalSpeed**:

```text
Minimal estimated speed of target that is not visible.
```

- **WH_AI_ZeroForceOnMNMLimiter**:

```text
if direction hits an obstacle, zero the speed
```

- **WH_AreaNotifier_DebugDraw**:

```text
This draws the grid of AreaNotifier
```

- **WH_Audio_AudioModel**:

```text
If set to 1 that means a box model 
 If set to 2 that means a sphere model.
```

- **WH_Audio_DebugDraw**:

```text
If set to 0 then no debug information is shown, 
 if set to 1 simple debug information is shown...
```

- **WH_Audio_OverrideCrySoundPerceptionMechanism**:

```text
If set to 0 then no override happens, 
 if set to 1 the override is only partial (the sound data is transmitted to the CryEngine subsystem), 
 2 means the override is complete and no sound info reaches the Cry subsystem
```

- **WH_BubbleLOD_DebugDraw**:

```text
This draws the BubbleLOD, 0 no draw at all, 1 draw proximity capsules, choices more coming soon
```

- **WH_BubbleLOD_Enable**:

```text
Enables the Bubble LOD, currently WIP
```

- **WH_BubbleLOD_NumOfThreads**:

```text
Number of threads, currently WIP
```

- **WH_BubbleLOD_Proximity**:

```text
Proximity mode, currently WIP, 1-CircQ, 2-GridAndAdjac, 3-AABBEach
```

- **WH_BubbleLOD_UseThreads**:

```text
Usage of threads, currently WIP
```

- **WH_Enable_FileProfiling**:

```text
Recording profiles with substring XGenAI and write them to disk as csv files
```

- **WH_MNM_TileAdjecancyTolerance**:

```text
Tolerance used to merge triangles in neighbouring tiles. Default value 0.02 is used in Cry Engine.
```

- **WH_MNM_TileBorderSize**:

```text
Controls the size of extra margin added to the tile in MNM. The value is used as the multiplier of tile size to determine the margin size (use 2 as the max value). The margin will always be as big as the default value == agent radius
```

- **WH_MNM_TriangulateSurfaceAlignHeuristic**:

```text
Turns on/off the heuristic that prefers triangulation using lines aligned with the surface. 0 - heuristic off, 1 - heuristic on
```

- **WH_Move_AllowOffMeshNavigation**:

```text
Enables the movement off the nav mesh.
```

- **WH_Move_AllowTeleport**:

```text
Allow teleport when move node can't navigate the NPC
```

- **WH_Move_OffMeshStuckDetectionMultiplier**:

```text
Multiplier for the predicted threshold for the off mash stuck detection.
```

- **WH_Move_OffMesh_HorizontalSearchThreshold**:

```text
Threshold limiting the radius of the search area for the nearest point inside the nav mesh.
```

- **WH_Move_OffMesh_VerticalSearchThreshold**:

```text
Threshold limiting the height of the search area for the nearest point inside the nav mesh.
```

- **WH_Positioning_Allow**:

```text
Allows/disallows the positioning system. Requires restarting game to take effect.
```

- **WH_Positioning_DebugDraw**:

```text
This draws debug info for situation positioning
```

- **WH_Sensations_DebugDraw**:

```text
If set to 0 then no debug information about sensations is shown, 
 if set to 1 simple debug information is shown...
```

- **WH_Situations_Allow**:

```text
Allows/disallows the situation system as a whole. Requires restarting game to take effect.
```

- **WH_Situations_CompareSearchAlgs**:

```text
If on, all available situation search algorithms are invoked for every situation search allowing to compare speed. Makes sense only if WH_Situations_LogSearchStats = 1
```

- **WH_Situations_DebugDraw**:

```text
This draws the situation system statistics. If WH_Situations_Allow is not set, it has no effect
```

- **WH_Situations_LogSearchStats**:

```text
Log situation search statistics to a file.
```

- **WH_Situations_StartNew**:

```text
Lets the situation system start new situations. If WH_Situations_Allow is not set, it has no effect.
```

- **WH_VisualMap_DebugDraw**:

```text
This shows the debug draw for visual maps
 0 nothing is drawn, 
 (bitwise) 1 << 1 only sensor arcs are drawn, 1 << 2 visibility results (arrows) are drawn
```

- **WH_VisualMap_Enabled**:

```text
Enable/Disable visual map
```

- **WH_VisualMap_ProcessingLimit**:

```text
The processing limit per one update on visual map -1 means infinite
```

- **WH_VisualMap_TrackFrameCount**:

```text
How many frames are stored for visual map debug
```

- **WH_VisualMap_UpdatePeriod**:

```text
How often the visual map updates itself (milliseconds), you have to restart the game (just game, not the whole editor) to enforce the change.
```

- **a_poseAlignerAnimDrivenBlend**:

```text
PoseAligner will use weight bones to determine blend. CVAR defines the distance between target and blend bone at which alignment will completely turn off
```

- **a_poseAlignerBipedRaycasLength**:

```text

```

- **a_poseAlignerDebugDraw**:

```text
Enable PoseAligner debug drawing.
```

- **a_poseAlignerEnable**:

```text
Enable PoseAligner.
```

- **a_poseAlignerForceLock**:

```text
PoseAligner force lock.
```

- **a_poseAlignerForceNoIK**:

```text
PoseAligner will not use IK
```

- **a_poseAlignerForceNoIntersections**:

```text
PoseAligner forces no intersections, might make animation more 'poppy'.
```

- **a_poseAlignerForceNoRootOffset**:

```text
PoseAligner forces no root offset.
```

- **a_poseAlignerForceNoRootRotation**:

```text
PoseAligner forces no root rotation.
```

- **a_poseAlignerForceTargetSmoothing**:

```text
PoseAligner forces smoothing of target position and normal.
```

- **a_poseAlignerForceWeightOne**:

```text
PoseAligner forces targeting weight to always be one.
```

- **a_poseAlignerQuadrupleRaycasLength**:

```text

```

- **aa_maxDist**:

```text
max lock distance
```

- **ac_ColliderModeAI**:

```text
Force override collider mode for all AI.
```

- **ac_ColliderModePlayer**:

```text
Force override collider mode for all players.
```

- **ac_DebugFilter**:

```text
Debug specified entity name only.
```

- **ac_debugAnimEffects**:

```text
Print log messages when anim events spawn effects.
```

- **ac_debugAnimTarget**:

```text
Display debug history graphs of anim target correction.
```

- **ac_debugColliderMode**:

```text
Display filtered and requested collider modes.
```

- **ac_debugEntityParams**:

```text
Display entity params graphs
```

- **ac_debugLeaning**:

```text
Debug procedural leaning.
```

- **ac_debugLocations**:

```text
Debug render entity location.
```

- **ac_debugLocationsGraphs**:

```text
Display debug history graphs of entity locations and movement.
```

- **ac_debugMotionParams**:

```text
Display graph of motion parameters.
```

- **ac_debugMovementControlMethods**:

```text
Display movement control methods.
```

- **ac_debugText**:

```text
Display entity/animation location/movement values, etc.
```

- **ac_debugXXXValues**:

```text
Display some values temporarily hooked into temp history graphs.
```

- **ac_disableLivingVsLivingCollisions**:

```text
Disable collisions between living entities. Must reload level (or update collider mode otherwise) to work.
```

- **ac_disableLivingVsRigidCollisions**:

```text
Disable collisions between living and rigid entities. Must reload level (or update collider mode otherwise) to work.
```

- **ac_disableSlidingContactEvents**:

```text
Force disable sliding contact events.
```

- **ac_enableExtraSolidCollider**:

```text
Enable extra solid collider (for non-pushable characters).
```

- **ac_enableProceduralLeaning**:

```text
Enable procedural leaning (disabled asset leaning and curving slowdown).
```

- **ac_entityAnimClamp**:

```text
Forces the entity movement to be limited by animation.
```

- **ac_forceSimpleMovement**:

```text
Force enable simplified movement (not visible, dedicated server, etc).
```

- **ac_frametime**:

```text
Display a graph of the frametime.
```

- **ac_groundAlignMaxFramesWithoutUpdate**:

```text

```

- **ac_groundAlignMaxFullUpdatesPerFrame**:

```text

```

- **ac_groundAlignTurnOffWhenNotMoving**:

```text

```

- **ac_groundAlignUpdateAllDistance**:

```text

```

- **ac_groundAlignUpdateNoneDistance**:

```text

```

- **ac_movementControlMethodFilter**:

```text
Force reinterprets Decoupled/CatchUp MCM specified by AG as Entity MCM (H/V overrides override this).
```

- **ac_movementControlMethodHor**:

```text
Overrides the horizontal movement control method specified by AG (overrides filter).
```

- **ac_movementControlMethodVer**:

```text
Overrides the vertical movement control method specified by AG (overrides filter).
```

- **ac_templateMCMs**:

```text
Use MCMs from AG state templates instead of AG state headers.
```

- **ac_useMovementPrediction**:

```text
When using animation driven motion sample animation for the root one frame ahead to take into account 1 frame of physics delay
```

- **ac_useQueuedRotation**:

```text
Instead of applying rotation directly, queue it until the beginning of the next frame (synchronizes rotation with translation coming from asynchronous physics)
```

- **ag_debugExactPos**:

```text
Enable/disable exact positioning debugger
```

- **ag_defaultAIStance**:

```text
Specifies default stance name for AI
```

- **ag_travelAngleSmoothing**:

```text
Enables/Disables travel angle smoothing.
```

- **ag_travelSpeedSmoothing**:

```text
Enables/Disables travel speed smoothing.
```

- **ag_turnAngleSmoothing**:

```text
Enables/Disables turn angle smoothing.
```

- **ag_turnSpeedParamScale**:

```text
Scale the turn speed animation param (used for leaning)
```

- **ag_turnSpeedSmoothing**:

```text
Enables/Disables turn speed smoothing.
```

- **ai_AdjustPathsAroundDynamicObstacles**:

```text
Set to 1/0 to enable/disable AI path adjustment around dynamic obstacles
```

- **ai_AgentStatsDist**:

```text
Sets agent statistics draw distance, such as current goalpipe, command and target.
Only information on enabled AI objects will be displayed.
To display more information on particular AI agent, use ai_StatsTarget.
Yellow line represents direction where AI is trying to move;
Red line represents direction where AI is trying to look;
Blue line represents forward dir (entity forward);
Usage: ai_AgentStatsDist [view distance]
Default is 20 meters. Works with ai_DebugDraw enabled.
```

- **ai_AllTime**:

```text
Displays the update times of all agents, in milliseconds.
Usage: ai_AllTime [0/1]
Default is 0 (off). Times all agents and displays the time used updating
each of them. The name is colour coded to represent the update time.
	Green: less than 1 ms (ok)
	White: 1 ms to 5 ms
	Red: more than 5 ms
You must enable ai_DebugDraw before you can use this tool.
```

- **ai_AllowedToHit**:

```text
If turned off, all agents will miss all the time.
```

- **ai_AllowedToHitPlayer**:

```text
If turned off, all agents will miss the player all the time.
```

- **ai_AmbientFireEnable**:

```text
Enable ambient fire system.
```

- **ai_AmbientFireQuota**:

```text
Number of units allowed to hit the player at a time.
```

- **ai_AmbientFireUpdateInterval**:

```text
Ambient fire update interval. Controls how often puppet's ambient fire status is updated.
```

- **ai_AttemptStraightPath**:

```text
Toggles AI attempting a simple straight path when possible.
Default is 1 (on).
```

- **ai_BannedNavSoTime**:

```text
Time indicating how long invalid navsos should be banned.
```

- **ai_BeautifyPath**:

```text
Toggles AI optimisation of the generated path.
Usage: ai_BeautifyPath [0/1]
Default is 1 (on). Optimisation is on by default. Set to 0 to
disable path optimisation (AI uses non-optimised path).
```

- **ai_BubbleSystemAllowPrototypeDialogBubbles**:

```text
Enabling the visualization of the bubbles created to prototype AI dialogs
```

- **ai_BubblesSystem**:

```text
Enables/disables bubble notifier.
```

- **ai_BubblesSystemAlertnessFilter**:

```text
Specifies the type of messages you want to receive:
0 - none
1 - Only logs in the console
2 - Only bubbles
3 - Logs and bubbles
4 - Only blocking popups
5 - Blocking popups and logs
6 - Blocking popups and bubbles
7 - All notifications
```

- **ai_BubblesSystemDecayTime**:

```text
Specifies the decay time for the bubbles drawn on screen.
```

- **ai_BubblesSystemFontSize**:

```text
Font size for the BubblesSystem.
```

- **ai_BubblesSystemUseDepthTest**:

```text
Specifies if the BubblesSystem should use the depth test to show the messages inside the 3D world.
```

- **ai_BurstWhileMovingDestinationRange**:

```text
When using FIREMODE_BURST_WHILE_MOVING - only fire when within this distance to the destination.
```

- **ai_CheckWalkabilityOptimalSectionLength**:

```text
The maximum segment length used by CheckWalkabilityFast when querying for world geometry from physics.
Default: 1.75

```

- **ai_CodeCoverageMode**:

```text
Set current mode of Code Coverage system.
0 = off, 1 = smart, 2 = silent, 3 = force
```

- **ai_CollisionAvoidanceAgentExtraFat**:

```text
Extra radius to use in Collision Avoidance calculations as a buffer.
```

- **ai_CollisionAvoidanceAgentTimeHorizon**:

```text
Time horizon used to calculate an agent's collision free velocity against other agents.
```

- **ai_CollisionAvoidanceClampVelocitiesWithNavigationMesh**:

```text
Enable/Disable the clamping of the speed resulting from ORCA with the navigation mesh
		2 - means disabling avoidance for agents that are not on nav mesh
```

- **ai_CollisionAvoidanceEnableRadiusIncrement**:

```text
Enable/disable agents adding an increment to their collision avoidance radius when moving.
```

- **ai_CollisionAvoidanceMinSpeed**:

```text
Minimum speed allowed to be used by ORCA.
```

- **ai_CollisionAvoidanceObstacleTimeHorizon**:

```text
Time horizon used to calculate an agent's collision free velocity against static obstacles.
```

- **ai_CollisionAvoidancePathEndCutoffRange**:

```text
Distance from it's current path end for an agent to stop avoiding obstacles. Other actors will still avoid the agent.
```

- **ai_CollisionAvoidanceRadiusIncrementDecreaseRate**:

```text
Decrease rate of the collision avoidance radius increment.
```

- **ai_CollisionAvoidanceRadiusIncrementIncreaseRate**:

```text
Increase rate of the collision avoidance radius increment.
```

- **ai_CollisionAvoidanceRange**:

```text
Range for collision avoidance.
```

- **ai_CollisionAvoidanceSmartObjectCutoffRange**:

```text
Distance from it's next smart object for an agent to stop avoiding obstacles. Other actors will still avoid the agent.
```

- **ai_CollisionAvoidanceTargetCutoffRange**:

```text
Distance from it's current target for an agent to stop avoiding obstacles. Other actors will still avoid the agent.
```

- **ai_CollisionAvoidanceTimestep**:

```text
TimeStep used to calculate an agent's collision free velocity.
```

- **ai_CollisionAvoidanceUpdateVelocities**:

```text
Enable/disable agents updating their velocities after processing collision avoidance.
```

- **ai_CommunicationForceTestVoicePack**:

```text
Forces all the AI agents to use a test voice pack. The test voice pack will have the specified name in the archetype or in the entity and the system will replace the _XX number with the _test string
```

- **ai_CommunicationManagerHeighThresholdForTargetPosition**:

```text
Defines the threshold used to detect if the target is above or below the entity that wants to play a communication.

```

- **ai_CompatibilityMode**:

```text
Set AI features to behave in earlier milestones - please use sparingly
```

- **ai_CoolMissesBoxHeight**:

```text
Vertical size of the box to collect potential cool objects to shoot at.
```

- **ai_CoolMissesBoxSize**:

```text
Horizontal size of the box to collect potential cool objects to shoot at.
```

- **ai_CoolMissesCooldown**:

```text
Global time between potential cool misses.
```

- **ai_CoolMissesMaxLightweightEntityMass**:

```text
Maximum mass of a non-destroyable, non-deformable, non-breakable rigid body entity to be considered.
```

- **ai_CoolMissesMinMissDistance**:

```text
Maximum distance to go away from the player.
```

- **ai_CoolMissesProbability**:

```text
Agents' chance to perform a cool miss!
```

- **ai_CoverExactPositioning**:

```text
Enables using exact positioning for arriving at cover.
Usage: ai_CoverPredictTarget [0/1]
Default x is 0 (off)
0 - disable
1 - enable

```

- **ai_CoverMaxEyeCount**:

```text
Max numbers of observers to consider when selecting cover.
Usage: ai_CoverMaxEyeCount <x>

```

- **ai_CoverPredictTarget**:

```text
Enables simple cover system target location prediction.
Usage: ai_CoverPredictTarget x
Default x is 0.0 (off)
x - how many seconds to look ahead

```

- **ai_CoverSpacing**:

```text
Minimum spacing between agents when choosing cover.
Usage: ai_CoverPredictTarget <x>
x - Spacing width in meters

```

- **ai_CoverSystem**:

```text
Enables the cover system.
Usage: ai_CoverSystem [0/1]
Default is 1 (on)
0 - off - use anchors
1 - use offline cover surfaces

```

- **ai_CrouchVisibleRange**:

```text
Max perception range for AI when player is crouching
```

- **ai_CrowdControlInPathfind**:

```text
Toggles AI using crowd control in pathfinding.
Usage: ai_CrowdControlInPathfind [0/1]
Default is 0 (off).
```

- **ai_DebugBehaviorSelection**:

```text
Display behavior selection information for a specific agent
Usage: ai_DebugBehaviorSelection <name>
```

- **ai_DebugCheckWalkability**:

```text
Toggles output of check walkability information, as well as allowing the use of tagpoints named CheckWalkabilityTestStart/End to trigger a test each update. [default 0 is off]
```

- **ai_DebugCheckWalkabilityRadius**:

```text
Radius to use for the per-frame debug CheckWalkability test.
```

- **ai_DebugCollisionAvoidanceForceSpeed**:

```text
Force agents velocity to it's current direction times the specified value.
```

- **ai_DebugDraw**:

```text
Toggles the AI debugging view.
Usage: ai_DebugDraw [-1/0/1]
Default is 0 (minimal), value -1 will draw nothing, value 1 displays AI rays and targets 
and enables the view for other AI debugging tools.
```

- **ai_DebugDrawAStarOpenList**:

```text
Draws the A* open list for the specified AI agent.
Usage: ai_DebugDrawAStarOpenList [AI agent name]
Default is 0, which disables the debug draw. Requires ai_DebugPathfinding=1 to be activated.
```

- **ai_DebugDrawAStarOpenListTime**:

```text
The amount of time to draw the A* open list.
```

- **ai_DebugDrawAdaptiveUrgency**:

```text
Enables drawing the adaptive movement urgency.
```

- **ai_DebugDrawAmbientFire**:

```text
Displays fire quota on puppets.
```

- **ai_DebugDrawArrowLabelsVisibilityDistance**:

```text
Provided ai_DebugDraw > 0, if the camera is closer to an agent than this distance,
agent arrows for look/fire/move arrows will have labels.
Usage: ai_DebugDrawArrowLabelsVisibilityDistance [distance]
Default is 50. 

```

- **ai_DebugDrawBannedNavsos**:

```text
Toggles drawing banned navsos [default 0 is off]
```

- **ai_DebugDrawCollisionAvoidance**:

```text
Enable debugging obstacle avoidance system.
```

- **ai_DebugDrawCollisionAvoidanceAgentName**:

```text
Name of the agent to draw collision avoidance data for.
```

- **ai_DebugDrawCollisionAvoidanceAgentsRelativeTo**:

```text
Name of the agent/obstacle that provides context for drawing agents positions and radii. Use to correctly display how agent acts with regards to this agent/obstacle
```

- **ai_DebugDrawCollisionAvoidanceCandidateVelocities**:

```text
Enables debug draw of candidates velocities for collision avoidance debug agent
```

- **ai_DebugDrawCollisionAvoidanceObstaclesForAgent**:

```text
Enables debug draw of obstacles only for agent selected ai_DebugDrawCollisionAvoidanceAgentName. The draw is relative to agent and correctly displays radii and positions adjusted for travel
```

- **ai_DebugDrawCommunication**:

```text
Displays communication debug information.
Usage: ai_DebugDrawCommunication [0/1/2]
 0 - disabled. (default).
 1 - draw playing and queued comms.
 2 - draw debug history for each entity.
 5 - extended debugging (to log) 6 - outputs info about each line played
```

- **ai_DebugDrawCommunicationHistoryDepth**:

```text
Tweaks how many historical entries are displayed per entity.
Usage: ai_DebugDrawCommunicationHistoryDepth [depth]
```

- **ai_DebugDrawCoolMisses**:

```text
Toggles displaying the cool miss locations around the player.
Usage: ai_DebugDrawCoolMisses [0/1]
```

- **ai_DebugDrawCover**:

```text
Displays cover debug information.
Usage: ai_DebugDrawCover [0/1/2]
Default is 0 (off)
0 - off
1 - currently being used
2 - all in 50m range (slow)

```

- **ai_DebugDrawCoverLocations**:

```text
Displays cover locations.
Usage: ai_DebugDrawCoverLocations [0/1]
Default is 0 (off)

```

- **ai_DebugDrawCoverOccupancy**:

```text
Renders red balls at the location of occupied cover.
Usage: ai_DebugDrawCoverOccupancy [0/1]
Default is 0 (off)
0 - off
1 - render red balls at the location of occupied cover

```

- **ai_DebugDrawCoverPlanes**:

```text
Displays cover planes.
Usage: ai_DebugDrawCoverPlanes [0/1]
Default is 0 (off)

```

- **ai_DebugDrawCoverSampler**:

```text
Displays cover sampler debug rendering.
Usage: ai_DebugDrawCoverSampler [0/1/2/3]
Default is 0 (off)
0 - off
1 - display floor sampling
2 - display surface sampling
3 - display both

```

- **ai_DebugDrawCrowdControl**:

```text
Draws crowd control debug information. 0=off, 1=on
```

- **ai_DebugDrawDamageControl**:

```text
Debugs the damage control system 0=disabled, 1=collect, 2=collect&draw.
```

- **ai_DebugDrawDamageParts**:

```text
Draws the damage parts of puppets and vehicles.
```

- **ai_DebugDrawDynamicCoverSampler**:

```text
Displays dynamic cover sampler debug rendering.
Usage: ai_DebugDrawDynamicCoverSampler [0/1]
Default is 0 (off)
0 - off
1 - on

```

- **ai_DebugDrawDynamicHideObjectsRange**:

```text
Sets the range for drawing dynamic hide objects around the player (needs ai_DebugDraw > 0).
```

- **ai_DebugDrawEnabledActors**:

```text
list of AI Actors that are enabled and metadata
```

- **ai_DebugDrawEnabledPlayers**:

```text
list of AI players that are enabled and metadata
```

- **ai_DebugDrawExpensiveAccessoryQuota**:

```text
Displays expensive accessory usage quota on puppets.
```

- **ai_DebugDrawFireCommand**:

```text
Toggles displaying the fire command targets and modifications.
Usage: ai_DebugDrawFireCommand [0/1]
```

- **ai_DebugDrawFlight2**:

```text
Set AI features to behave in earlier milestones - please use sparingly
```

- **ai_DebugDrawGroups**:

```text
Toggles the AI Groups debugging view.
Usage: ai_DebugDrawGroups [0/1]
Default is 0 (off). ai_DebugDrawGroups displays groups' leaders, members and their desired positions.
```

- **ai_DebugDrawHideSpotSearchRays**:

```text
Toggle drawing rays used in HM_ONLY_IF_CAN_SHOOT_FROM_THERE hide spot search option.
Usage: ai_DebugDrawHideSpotSearchRays [0..1]
```

- **ai_DebugDrawHidespotRange**:

```text
Sets the range for drawing hidespots around the player (needs ai_DebugDraw > 0).
```

- **ai_DebugDrawLightLevel**:

```text
Debug AI light level manager
```

- **ai_DebugDrawNavigation**:

```text
Displays the navigation debug information.
Usage: ai_DebugDrawNavigation [0/1]
Default is 0 (off)
0 - off
1 - triangles and contour
2 - triangles, mesh and contours
3 - triangles, mesh contours and external links
4 - triangles, mesh contours, external links and triangle IDs
5 - triangles, mesh contours, external links and island IDs

```

- **ai_DebugDrawNavigationWorldMonitor**:

```text
Enables displaying bounding boxes for world changes.
Usage: ai_DebugDrawNavigationWorldMonitor [0/1]
Default is 0 (off)
0 - off
1 - on

```

- **ai_DebugDrawPhysicsAccess**:

```text
Displays current physics access statistics for the AI module.
```

- **ai_DebugDrawPlayerActions**:

```text
Debug draw special player actions.
```

- **ai_DebugDrawReinforcements**:

```text
Enables debug draw for reinforcement logic for specified group.
Usage: ai_DebugDrawReinforcements <groupid>, or -1 to disable.
```

- **ai_DebugDrawStanceSize**:

```text
Draws the game logic representation of the stance size of the AI agents.
```

- **ai_DebugDrawVegetationCollisionDist**:

```text
Enables drawing vegetation collision closer than a distance projected onto the terrain.
```

- **ai_DebugDrawVisionMap**:

```text
Toggles the debug drawing of the AI VisionMap.
```

- **ai_DebugDrawVisionMapObservables**:

```text
Enables the debug drawing of the AI VisionMap to show the location/stats of the observables.
```

- **ai_DebugDrawVisionMapObservers**:

```text
Enables the debug drawing of the AI VisionMap to show the location/stats of the observers.

```

- **ai_DebugDrawVisionMapObserversFOV**:

```text
Enables the debug drawing of the AI VisionMap to draw representations of the observers FOV.

```

- **ai_DebugDrawVisionMapStats**:

```text
Enables the debug drawing of the AI VisionMap to show stats information.
```

- **ai_DebugDrawVisionMapVisibilityChecks**:

```text
Enables the debug drawing of the AI VisionMap to show the status of the visibility checks.
```

- **ai_DebugDrawVolumeVoxels**:

```text
Toggles the AI debugging drawing of voxels in volume generation.
Usage: ai_DebugDrawVolumeVoxels [0, 1, 2 etc]
Default is 0 (off)
+n draws all voxels with original value >= n
-n draws all voxels with original value =  n
```

- **ai_DebugGlobalPerceptionScale**:

```text
Draws global perception scale multipliers on screen
```

- **ai_DebugHideSpotName**:

```text
Debug HideSpot Name!
```

- **ai_DebugInterestSystem**:

```text
Display debugging information on interest system
```

- **ai_DebugMovementSystem**:

```text
Draw debug information to the screen regarding character movement.
                         0 - off
                         1 - on, draws default info level
                         2 - on, draws details for current movement block
                         3 - on, draws details for all movement blocks
```

- **ai_DebugMovementSystemActor**:

```text
Name filter to draw information only for selected actors. Works as a substring filter!
```

- **ai_DebugMovementSystemActorRequests**:

```text
Draw queued movement requests of actors in the world as text above their head.
0 - Off
1 - Draw request queue of only the currently selected agent
2 - Draw request queue of all agents
```

- **ai_DebugMovementSystemUpdatedActors**:

```text
Enables automatic filtering to display only actors requiring update
```

- **ai_DebugPathfinding**:

```text
Toggles output of pathfinding information [default 0 is off]
```

- **ai_DebugPerceptionManager**:

```text
Draws perception manager performance overlay. 0=disable, 1=vis checks, 2=stimulus
```

- **ai_DebugRangeSignaling**:

```text
Enable Range Signaling Debug Screen
```

- **ai_DebugSignalTimers**:

```text
Enable Signal Timers Debug Screen
```

- **ai_DebugTacticalPoints**:

```text
Display debugging information on tactical point selection system
```

- **ai_DebugTacticalPointsBlocked**:

```text
Highlight with red spheres any points blocked by generation phase, e.g. occupied points
```

- **ai_DebugTargetSilhouette**:

```text
Draws the silhouette used for missing the target while shooting.
```

- **ai_DebugTargetTracksAgent**:

```text
Draws the target tracks for the given agent
Usage: ai_DebugTargetTracksAgent AIName
Default is 'none'. AIName is the name of the AI agent to debug
```

- **ai_DebugTargetTracksConfig**:

```text
Draws the information contained in the loaded target track configurations to the screen
```

- **ai_DebugTargetTracksConfig_Filter**:

```text
Filter what configurations are drawn when debugging target tracks
Usage: ai_DebugTargetTracks_Filter Filter
Default is 'none'. Filter is a substring that must be in the configuration name
```

- **ai_DebugTargetTracksTarget**:

```text
Draws lines to illustrate where each agent's target is
Usage: ai_DebugTargetTracking 0/1/2
0 = Off. 1 = Show best target. 2 = Show all possible targets.
```

- **ai_DebugTimestamps**:

```text
[0-1] Enable/Disable the debug text of the modular behavior tree's timestamps.
```

- **ai_DebugWalkabilityCache**:

```text
Toggles allowing the use of tagpoints named WalkabilityCacheOrigin to cache walkability. [default 0 is off]
```

- **ai_DrawAgentFOV**:

```text
Toggles the vision cone of the AI agent.
Usage: ai_DrawagentFOV [0..1]
Default is 0 (off), value 1 will draw the cone all the way to
the sight range, value 0.1 will draw the cone to distance of 10%
of the sight range, etc. ai_DebugDraw must be enabled before
this tool can be used.
```

- **ai_DrawAgentStats**:

```text
Flag field specifying which of the overhead agent stats to display:
N - name
k - groupID
d - distances
c - cover info
B - currently selected behavior node
b - current behavior
t - target info
G - goal pipe
g - goal op
S - stance
f - fire
w - territory/wave
p - pathfinding status
l - light level (perception) status
D - various direction arrows (aim target, move target, ...) status
L - personal log
a - alertness

Default is NkcBbtGgSfdDL
```

- **ai_DrawAgentStatsGroupFilter**:

```text
Filters Debug Draw Agent Stats displays to the specified groupIDs separated by spaces
usage: ai_DrawAgentStatsGroupFilter 1011 1012
```

- **ai_DrawAreas**:

```text
Enables/Disables drawing behavior related areas.
```

- **ai_DrawAttentionTargetPositions**:

```text
Displays markers for the AI's current attention target position. 
```

- **ai_DrawBadAnchors**:

```text
Toggles drawing out of bounds AI objects of particular type for debugging AI.
Valid only for 3D navigation. Draws red spheres at positions of anchors which are
located out of navigation volumes. Those anchors have to be moved.
 0 - off, 1 - on
```

- **ai_DrawBulletEvents**:

```text
Debug draw the bullet events the AI system processes. 0=disable, 1=enable.
```

- **ai_DrawCollisionEvents**:

```text
Debug draw the collision events the AI system processes. 0=disable, 1=enable.
```

- **ai_DrawDistanceLUT**:

```text
Draws the distance lookup table graph overlay.
```

- **ai_DrawExplosions**:

```text
Debug draw the explosion events the AI system processes. 0=disable, 1=enable.
```

- **ai_DrawFakeDamageInd**:

```text
Draws fake damage indicators on the player.
```

- **ai_DrawFakeHitEffects**:

```text
Draws fake hit effects the player.
```

- **ai_DrawFakeTracers**:

```text
Draws fake tracers around the player.
```

- **ai_DrawFireEffectDecayRange**:

```text
Distance under which the draw fire duration starts decaying linearly.
```

- **ai_DrawFireEffectEnabled**:

```text
Enabled AI to sweep fire when starting to shoot after a break.
```

- **ai_DrawFireEffectMaxAngle**:

```text
Maximum angle actors actors are allowed to go away from their aiming direction during draw fire.
```

- **ai_DrawFireEffectMinDistance**:

```text
Distance under which the draw fire will be disabled.
```

- **ai_DrawFireEffectMinTargetFOV**:

```text
FOV under which the draw fire will be disabled.
```

- **ai_DrawFireEffectTimeScale**:

```text
Scale for the weapon's draw fire time setting.
```

- **ai_DrawFormations**:

```text
Draws all the currently active formations of the AI agents.
Usage: ai_DrawFormations [0/1]
Default is 0 (off). Set to 1 to draw the AI formations.
```

- **ai_DrawGetEnclosingFailures**:

```text
Set to the number of seconds you want GetEnclosing() failures visualized.  Set to 0 to turn visualization off.
```

- **ai_DrawGoals**:

```text
Draws all the active goal ops debug info.
Usage: ai_DrawGoals [0/1]
Default is 0 (off). Set to 1 to draw the AI goal op debug info.
```

- **ai_DrawGrenadeEvents**:

```text
Debug draw the grenade events the AI system processes. 0=disable, 1=enable.
```

- **ai_DrawGroupTactic**:

```text
draw group tactic: 0 = disabled, 1 = draw simple, 2 = draw complex.
```

- **ai_DrawHidespots**:

```text
Draws latest hide-spot positions for all agents within specified range.
```

- **ai_DrawModifiers**:

```text
Toggles the AI debugging view of navigation modifiers.
```

- **ai_DrawModularBehaviorTreeStatistics**:

```text
Draw modular behavior statistics to the screen.
```

- **ai_DrawNode**:

```text
Toggles visibility of named agent's position on AI triangulation.
See also: ai_DrawNodeLinkType and ai_DrawNodeLinkCutoff
Usage: ai_DrawNode [ai agent's name]
 none - switch off
 all - to display nodes of all the AI agents
 player - to display player's node
 AI agent's name - to display node of particular agent
```

- **ai_DrawNodeLinkCutoff**:

```text
Sets the link cutoff value in ai_DrawNodeLinkType. If the link value is more than
ai_DrawNodeLinkCutoff the number gets displayed in green, otherwise red.
```

- **ai_DrawNodeLinkType**:

```text
Sets the link parameter to draw with ai_DrawNode.
Values are:
 0 - pass radius (default)
 1 - exposure
 2 - water max depth
 3 - water min depth
```

- **ai_DrawOffset**:

```text
vertical offset during debug drawing (graph nodes, navigation paths, ...)
```

- **ai_DrawPath**:

```text
Draws the generated paths of the AI agents. ai_drawoffset is used.
Usage: ai_DrawPath [name]
 none - off (default)
 squad - squadmates
 enemy - all the enemies
```

- **ai_DrawPathAdjustment**:

```text
Draws the path adjustment for the AI agents.
Usage: ai_DrawPathAdjustment [name]
Default is none (nobody).
```

- **ai_DrawPathFollower**:

```text
Enables PathFollower debug drawing displaying agent paths and safe follow target.
```

- **ai_DrawPathFollowerFilter**:

```text
Substring filter of agent's name for debug draw of path followers
```

- **ai_DrawPerceptionDebugging**:

```text
Draws indicators showing enemy view intersection with perception modifiers
```

- **ai_DrawPerceptionHandlerModifiers**:

```text
Draws perception handler modifiers on a specific AI
Usage: ai_DrawPerceptionHandlerModifiers AIName
Default is 'none'. AIName is the name of the AI
```

- **ai_DrawPerceptionIndicators**:

```text
Draws indicators showing enemy current perception level of player
```

- **ai_DrawPerceptionModifiers**:

```text
Draws perception modifier areas in game mode
```

- **ai_DrawPlayerRanges**:

```text
Draws rings around player to assist in gauging target distance
```

- **ai_DrawProbableTarget**:

```text
Enables/Disables drawing the position of probable target.
```

- **ai_DrawRadar**:

```text
Draws AI radar: 0=no radar, >0 = size of the radar on screen
```

- **ai_DrawRadarDist**:

```text
AI radar draw distance in meters, default=20m.
```

- **ai_DrawReadibilities**:

```text
Draws all the currently active readibilities of the AI agents.
Usage: ai_DrawReadibilities [0/1]
Default is 0 (off). Set to 1 to draw the AI readibilities.
```

- **ai_DrawRefPoints**:

```text
Toggles reference points and beacon view for debugging AI.
Usage: ai_DrawRefPoints "all", agent name, group id 
Default is the empty string (off). Indicates the AI reference points by drawing
balls at their positions.
```

- **ai_DrawSelectedTargets**:

```text
[0-1] Enable/Disable the debug helpers showing the AI's selected targets.
```

- **ai_DrawShooting**:

```text
Name of puppet to show fire stats
```

- **ai_DrawSmartObjects**:

```text
Draws smart object debug information.
Usage: ai_DrawSmartObjects [0/1]
Default is 0 (off). Set to 1 to draw the smart objects.
```

- **ai_DrawSoundEvents**:

```text
Debug draw the sound events the AI system processes. 0=disable, 1=enable.
```

- **ai_DrawStats**:

```text
Toggles drawing stats (in a table on top left of screen) for AI objects within specified range.
Will display attention target, goal pipe and current goal.
```

- **ai_DrawTargets**:

```text
Distance to display the perception events of all enabled puppets.
Displays target type and priority
```

- **ai_DrawTrajectory**:

```text
Record and draw the actual path taken by the agent specified in ai_StatsTarget.
Path is displayed in aqua, and only a certain length will be displayed, after which
old path gradually disappears as new path is drawn.
0=do not record, 1=record.
```

- **ai_DrawType**:

```text
Display all AI object of specified type. If object is enabled it will be displayed.
with blue ball, otherwise with red ball. Yellow line will represent forward direction of the object.
 <0 - off
 0 - display all the dummy objects
 >0 - type of AI objects to display
```

- **ai_DrawUpdate**:

```text
list of AI forceUpdated entities
```

- **ai_DynamicHidespotsEnabled**:

```text
If enabled, dynamic hidespots are considered when evaluating.
```

- **ai_DynamicVolumeUpdateTime**:

```text
How long (max) to spend updating dynamic volume regions per AI update (in sec)
0 disables dynamic updates. 0.002 is a sensible value
```

- **ai_DynamicWaypointUpdateTime**:

```text
How long (max) to spend updating dynamic waypoint regions per AI update (in sec)
0 disables dynamic updates. 0.0005 is a sensible value
```

- **ai_EnableCoolMisses**:

```text
If turned on, when agents miss the player, they will pick cool objects to shoot at.
```

- **ai_EnableORCA**:

```text
Enable obstacle avoidance system.
```

- **ai_EnablePerceptionStanceVisibleRange**:

```text
Turn on use of max perception range for AI based on player's stance
```

- **ai_EnableWarningsErrors**:

```text
Enable AI warnings and errors: 1 or 0
```

- **ai_EnableWaterOcclusion**:

```text
Enables applying water occlusion to AI target visibility checks
```

- **ai_ExtraActorAvoidanceRadius**:

```text
Value in meters to be added to an actor obstacle radius

```

- **ai_ExtraAvoidanceRadius**:

```text
Value in meters to be added to every dynamic obstacle radius

```

- **ai_ExtraForbiddenRadiusDuringBeautification**:

```text
Extra radius added to agents close to forbidden edges during beautification.
```

- **ai_ExtraRadiusDuringBeautification**:

```text
Extra radius added to agents during beautification.
```

- **ai_ExtraVehicleAvoidanceRadiusBig**:

```text
Value in meters to be added to a big obstacle's own size while computing obstacle
size for purposes of vehicle steering. See also ai_ObstacleSizeThreshold.
```

- **ai_ExtraVehicleAvoidanceRadiusSmall**:

```text
Value in meters to be added to a big obstacle's own size while computing obstacle
size for purposes of vehicle steering. See also ai_ObstacleSizeThreshold.
```

- **ai_FilterAgentName**:

```text
Only draws the AI info of the agent with the given name.
Usage: ai_FilterAgentName name
Default is none (draws all of them if ai_debugdraw is on)

```

- **ai_FlowNodeAlertnessCheck**:

```text
Enable the alertness check in AI flownodes
```

- **ai_ForceAGAction**:

```text
Forces all AI characters to specified AG action input. 0 to disable.

```

- **ai_ForceAGSignal**:

```text
Forces all AI characters to specified AG signal input. 0 to disable.

```

- **ai_ForceAllowStrafing**:

```text
Forces all AI characters to use/not use strafing (-1 disables)
```

- **ai_ForceLookAimTarget**:

```text
Forces all AI characters to use/not use a fixed look/aim target
none disables
x, y, xz or yz sets it to the appropriate direction
otherwise it forces looking/aiming at the entity with this name (no name -> (0, 0, 0))
```

- **ai_ForcePosture**:

```text
Forces all AI characters to specified posture. 0 to disable.

```

- **ai_ForceSerializeAllObjects**:

```text
Serialize all AI objects (ignore NO_SAVE flag).
```

- **ai_ForceStance**:

```text
Forces all AI characters to specified stance:
Disable = -1, Stand = 0, Crouch = 1, Prone = 2, Relaxed = 3, Stealth = 4, Cover = 5, Swim = 6, Zero-G = 7
```

- **ai_IgnoreBulletRainStimulus**:

```text
Have the Perception Handler ignore all bullet rain stimulus always
```

- **ai_IgnorePlayer**:

```text
Makes AI ignore the player.
Usage: ai_IgnorePlayer [0/1]
Default is 0 (off). Set to 1 to make AI ignore the player.
Used with ai_DebugDraw enabled.
```

- **ai_IgnoreSoundStimulus**:

```text
Have the Perception Handler ignore all sound stimulus always
```

- **ai_IgnoreVisibilityChecks**:

```text
Makes certain visibility checks (for teleporting etc) return false.
```

- **ai_IgnoreVisualStimulus**:

```text
Have the Perception Handler ignore all visual stimulus always
```

- **ai_InterestSystem**:

```text
Enable interest system
```

- **ai_InterestSystemCastRays**:

```text
Makes the Interest System check visibility with rays
```

- **ai_IntersectionTesterQuota**:

```text
Amount of deferred intersection tests allowed to be cast per frame!
```

- **ai_IslandConnectionsSystemProfileMemory**:

```text
Enables/Disables the memory profile for the island connections system.
```

- **ai_LayerSwitchDynamicLinkBump**:

```text
Multiplier for the dynamic link update budget when layer switch occurs.
```

- **ai_LayerSwitchDynamicLinkBumpDuration**:

```text
Duration of the dynamic link update budget bump in frames.
```

- **ai_LobThrowMinAllowedDistanceFromFriends**:

```text
Minimum distance a grenade (or any object thrown using a lob) should land from mates to accept the throw trajectory.
```

- **ai_LobThrowPercentageOfDistanceToTargetUsedForInaccuracySimulation**:

```text
This value identifies percentage of the distance to the target that will be used to simulate human inaccuracy with parabolic throws.
```

- **ai_LobThrowTimePredictionForFriendPositions**:

```text
Time frame used to predict the next position of moving mates to score the landing position of the lob throw
```

- **ai_LobThrowUseRandomForInaccuracySimulation**:

```text
Uses random variation for simulating inaccuracy in the lob throw.
```

- **ai_Locate**:

```text
Indicates position and some base states of specified objects.
It will pinpoint position of the agents; it's name; it's attention target;
draw red cone if the agent is allowed to fire; draw purple cone if agent is pressing trigger.
 none - off
 squad - squadmates
 enemy - all the enemies
 groupID - members of specified group
```

- **ai_LogConsoleVerbosity**:

```text
None = 0, progress/errors/warnings = 1, event = 2, comment = 3
```

- **ai_LogFileVerbosity**:

```text
None = 0, progress/errors/warnings = 1, event = 2, comment = 3
```

- **ai_LogModularBehaviorTreeExecutionStacks**:

```text
[0-2] Enable/Disable logging of the execution stacks of modular behavior trees to individual files in the MBT_Logs directory.
0 - Off
1 - Log execution stacks of only the currently selected agent
2 - Log execution stacks of all currently active agents
```

- **ai_LogSignals**:

```text
Logs all the signals received in CAIActor::NotifySignalReceived.
```

- **ai_MNMAllowDynamicRegenInEditor**:

```text
[0-1] Allow dynamic regeneration of MNM when in the editor, when in game mode. Put this CVar in your configuration file rather than changing it during execution.
```

- **ai_MNMDebugAccessibility**:

```text
[0-1] Display navigation reachable areas in blue and not reachable areas in red
```

- **ai_MNMEditorBackgroundUpdate**:

```text
[0-1] Enable/Disable editor background update of the Navigation Meshes
```

- **ai_MNMPathFinderDebug**:

```text
[0-1] Enable/Disable debug draw statistics on pathfinder load
```

- **ai_MNMPathFinderQuota**:

```text
Set path finding frame time quota in seconds (Set to 0 for no limit)
```

- **ai_MNMPathfinderConcurrentRequests**:

```text
Defines the amount of concurrent pathfinder requests that can be served at the same time.
```

- **ai_MNMPathfinderMT**:

```text
Enable/Disable Multi Threading for the pathfinder.
```

- **ai_MNMPathfinderPositionInTrianglePredictionType**:

```text
Defines which type of prediction for the point inside each triangle used by the pathfinder heuristic to search for the path with minimal cost.
0 - Triangle center.
1 - Advanced prediction.

```

- **ai_MNMProfileMemory**:

```text
[0-1] Display navigation system memory statistics
```

- **ai_MNMRaycastImplementation**:

```text
Defines which type of raycast implementation to use on the MNM meshes.0 - Old one. This version will be deprecated as it sometimes does not handle correctly the cases where the ray coincides with triangle egdes, which has been fixed in the new version.
1 - New one.
Any other value is used for the new one
```

- **ai_MinActorDynamicObstacleAvoidanceRadius**:

```text
Minimum value in meters to be added to the obstacle's own size for actors
(pathRadius property can override it if bigger)
```

- **ai_ModularBehaviorTree**:

```text
[0-1] Enable/Disable the usage of the modular behavior tree system.
```

- **ai_MovementSystemPathReplanningEnabled**:

```text
Enable/disable path-replanning of moving actors in the MovementSystem every time
a navigation-mesh change at runtime affects their current path.
Ignores designer-placed paths.
0 - disabled (default)
1 - enabled
```

- **ai_NavGenThreadJobs**:

```text
Number of tile generation jobs per thread per frame.
Usage: ai_NavGenThreadJobs [1+]
Default is 1. The more you have, the faster it will go but the frame rate will drop while it works.
Recommendations:
 Fast machine [10]
 Slow machine [4]
 Smooth [1]

```

- **ai_NavigationSystemMT**:

```text
Enables navigation information updates on a separate thread.
Usage: ai_NavigationSystemMT [0/1]
Default is 1 (on)
0 - off
1 - on

```

- **ai_NetworkDebug**:

```text
Toggles the AI network debug.
Usage: ai_NetworkDebug [0/1]
Default is 0 (off). ai_NetworkDebug is used to direct DebugDraw information 
from the server to the client.
```

- **ai_NoUpdate**:

```text
Disables AI system update when 1
```

- **ai_ObstacleSizeThreshold**:

```text
Obstacle size in meters that differentiates small obstacles from big ones so that vehicles can ignore the small ones
```

- **ai_OutputPersonalLogToConsole**:

```text
Output the personal log messages to the console.
```

- **ai_OverlayMessageDuration**:

```text
How long (seconds) to overlay AI warnings/errors
```

- **ai_PathStringPullingIterations**:

```text
Defines the number of iteration used for the string pulling operation to simplify the path
```

- **ai_PathfindTimeLimit**:

```text
Specifies how many seconds an individual AI can hold the pathfinder blocked
Usage: ai_PathfindTimeLimit 0.15
Default is 0.08. A lower value will result in more path requests that end in NOPATH -
although the path may actually exist.
```

- **ai_PathfinderAvoidanceCostForGroupMates**:

```text
Cost used in the heuristic calculation for the avoidance of the group mates's positions.
```

- **ai_PathfinderDangerCostForAttentionTarget**:

```text
Cost used in the heuristic calculation for the danger created by the attention target position.
```

- **ai_PathfinderDangerCostForExplosives**:

```text
Cost used in the heuristic calculation for the danger created by the position of explosive objects.
```

- **ai_PathfinderExplosiveDangerMaxThreatDistance**:

```text
Range used to decide if evaluate an explosive danger as an actual threat.
```

- **ai_PathfinderExplosiveDangerRadius**:

```text
Range used to evaluate the explosive threats in the path calculation. Outside this range a location is considered safe.
```

- **ai_PathfinderGroupMatesAvoidanceRadius**:

```text
Range used to evaluate the group mates avoidance in the path calculation.
```

- **ai_PathfinderUpdateTime**:

```text
Maximum pathfinder time per AI update
```

- **ai_PlayerAffectedByLight**:

```text
Sets if player is affected by light from observable perception checks
```

- **ai_PredictivePathFollowing**:

```text
Sets if AI should use the predictive path following if allowed by the type's config.
```

- **ai_ProfileGoals**:

```text
Toggles timing of AI goal execution.
Usage: ai_ProfileGoals [0/1]
Default is 0 (off). Records the time used for each AI goal (like
approach, run or pathfind) to execute. The longest execution time
is displayed on screen. Used with ai_DebugDraw enabled.
```

- **ai_ProneVisibleRange**:

```text
Max perception range for AI when player is proning
```

- **ai_RODAliveTime**:

```text
The base level time the player can survive under fire.
```

- **ai_RODAmbientFireInc**:

```text
Increment for the alive time when the target is within the kill-zone of the target.
```

- **ai_RODCombatRangeMod**:

```text
Combat-zone distance = attackRange * combatRangeMod.
```

- **ai_RODCoverFireTimeMod**:

```text
Multiplier for cover fire times set in weapon descriptor.
```

- **ai_RODDirInc**:

```text
Increment how the orientation of the target affects the alive time. 0=disable
```

- **ai_RODFakeHitChance**:

```text
Percentage of the missed hits that will instead be hits dealing very little damage.
```

- **ai_RODKillRangeMod**:

```text
Kill-zone distance = attackRange * killRangeMod.
```

- **ai_RODKillZoneInc**:

```text
Increment how the target is within the kill-zone of the target.
```

- **ai_RODLowHealthMercyTime**:

```text
The amount of time the AI will not hit the target when the target crosses the low health threshold.
```

- **ai_RODMoveInc**:

```text
Increment how the speed of the target affects the alive time (the value is doubled for supersprint). 0=disable
```

- **ai_RODReactionDarkIllumInc**:

```text
Increase for reaction time when the target is in dark light condition.
```

- **ai_RODReactionDirInc**:

```text
Increase for the reaction time when the enemy is outside the players FOV or near the edge of the FOV.
The increment is doubled when the target is behind the player.
```

- **ai_RODReactionDistInc**:

```text
Increase for the reaction time when the target is in combat-far-zone or warn-zone.
In warn-zone the increase is doubled.
```

- **ai_RODReactionLeanInc**:

```text
Increase to the reaction to when the target is leaning.
```

- **ai_RODReactionMediumIllumInc**:

```text
Increase for reaction time when the target is in medium light condition.
```

- **ai_RODReactionSuperDarkIllumInc**:

```text
Increase for reaction time when the target is in super dark light condition.
```

- **ai_RODReactionTime**:

```text
Uses rate of death as damage control method.
```

- **ai_RODStanceInc**:

```text
Increment how the stance of the target affects the alive time, 0=disable.
The base value is for crouch, and it is doubled for prone.
The crouch inc is disable in kill-zone and prone in kill and combat-near -zones
```

- **ai_RayCasterQuota**:

```text
Amount of deferred rays allowed to be cast per frame!
```

- **ai_RecordCommunicationStats**:

```text
Turns on/off recording of communication stats to a log.
Usage: ai_RecordCommunicationStats [0/1]

```

- **ai_RecordLog**:

```text
log all the AI state changes on stats_target
```

- **ai_Recorder**:

```text
Sets AI Recorder mode. Default is 0 - off.
```

- **ai_Recorder_Auto**:

```text
Auto record the AI when in Editor mode game

```

- **ai_Recorder_Buffer**:

```text
Set the size of the AI debug recording buffer
```

- **ai_SOMSpeedCombat**:

```text
Time before the AI will see the enemy while alarmed.
Usage: ai_SOMSpeedCombat 0.15
Default is 0.15. A lower value causes the AI to react to the enemy faster.
```

- **ai_SOMSpeedRelaxed**:

```text
Time before the AI will see the enemy while relaxed.
Usage: ai_SOMSpeedRelaxed 0.4
Default is 0.4. A lower value causes the AI to react to the enemy faster.
```

- **ai_SightRangeDarkIllumMod**:

```text
Multiplier for sightrange when the target is in dark light condition.
```

- **ai_SightRangeMediumIllumMod**:

```text
Multiplier for sightrange when the target is in medium light condition.
```

- **ai_SightRangeSuperDarkIllumMod**:

```text
Multiplier for sightrange when the target is in super dark light condition.
```

- **ai_SimpleWayptPassability**:

```text
Use simplified and faster passability recalculation for human waypoint links where possible.
```

- **ai_SmartPathFollower_LookAheadPredictionTimeForMovingAlongPathRunAndSprint**:

```text
Defines the time frame the AI is allowed to look ahead while moving strictly along a path to decide whether to cut towards the next point. (Run and Sprint only)

```

- **ai_SmartPathFollower_LookAheadPredictionTimeForMovingAlongPathWalk**:

```text
Defines the time frame the AI is allowed to look ahead while moving strictly along a path to decide whether to cut towards the next point. (Walk only)

```

- **ai_SmartPathFollower_decelerationHuman**:

```text
Deceleration multiplier for non-vehicles
```

- **ai_SmartPathFollower_decelerationVehicle**:

```text
Deceleration multiplier for vehicles
```

- **ai_SmartPathFollower_useAdvancedPathShortcutting**:

```text
Enables a more failsafe way of preventing the AI to shortcut through obstacles (0 = disable, any other value = enable)
```

- **ai_SmartPathFollower_useAdvancedPathShortcutting_debug**:

```text
Show debug lines for when CVar ai_SmartPathFollower_useAdvancedPathShortcutting_debug is enabled
```

- **ai_SoundPerception**:

```text
Toggles AI sound perception.
Usage: ai_SoundPerception [0/1]
Default is 1 (on). Used to prevent AI from hearing sounds for
debugging purposes. Works with ai_DebugDraw enabled.
```

- **ai_StatsDisplayMode**:

```text
Select display mode for the AI stats manager
Usage: 0 - Hidden, 1 - Show

```

- **ai_StatsTarget**:

```text
Focus debugging information on a specific AI
Display current goal pipe, current goal, subpipes and agentstats information for the selected AI agent.
Long green line will represent the AI forward direction (game forward).
Long red/blue (if AI firing on/off) line will represent the AI view direction.
Usage: ai_StatsTarget AIName
Default is 'none'. AIName is the name of the AI
on which to focus.
```

- **ai_SteepSlopeAcrossValue**:

```text
Indicates slope value that is borderline-walkable across.
Usage: ai_SteepSlopeAcrossValue 0.8
Default is 0.6 Zero means flat. Infinity means vertical. Set it greater than ai_SteepSlopeUpValue
```

- **ai_SteepSlopeUpValue**:

```text
Indicates slope value that is borderline-walkable up.
Usage: ai_SteepSlopeUpValue 0.5
Default is 1.0 Zero means flat. Infinity means vertical. Set it smaller than ai_SteepSlopeAcrossValue
```

- **ai_SystemUpdate**:

```text
Toggles the regular AI system update.
Usage: ai_SystemUpdate [0/1]
Default is 1 (on). Set to 0 to disable ai system updating.
```

- **ai_TacticalPointUpdateTime**:

```text
Maximum allowed update time in main AI thread for Tactical Point System
Usage: ai_TacticalPointUpdateTime <number>
Default is 0.0003
```

- **ai_TacticalPointsDebugDrawMode**:

```text
Debugging draw mode: 1=sphere transparency, 2=sphere size
```

- **ai_TacticalPointsDebugFadeMode**:

```text
Debugging fade mode: 1=vanish, 2=alpha fade, 3=blink
```

- **ai_TacticalPointsDebugScaling**:

```text
Scale the size of debugging spheres for visibility
```

- **ai_TacticalPointsDebugTime**:

```text
Time to display debugging spheres for (if not 'persistent'
```

- **ai_TacticalPointsWarnings**:

```text
Toggles TPS Warnings on and off
```

- **ai_TargetTracking**:

```text
Enable/disable target tracking. 0=disable, any other value = Enable
```

- **ai_TargetTracks_GlobalTargetLimit**:

```text
Global override to control the number of agents that can actively target another agent (unless there is no other choice)
A value of 0 means no global limit is applied. If the global target limit is less than the agent's target limit, the global limit is used.
```

- **ai_UpdateAllAlways**:

```text
If non-zero then over-rides the auto-disabling of invisible/distant AI
```

- **ai_UpdateInterval**:

```text
In seconds the amount of time between two full updates for AI  
Usage: ai_UpdateInterval <number>
Default is 0.1. Number is time in seconds
```

- **ai_UpdateProxy**:

```text
Toggles update of AI proxy (model).
Usage: ai_UpdateProxy [0/1]
Default is 1 (on). Updates proxy (AI representation in game)
set to 0 to disable proxy updating.
```

- **ai_UseCalculationStopperCounter**:

```text
Uses a (calibrated) counter instead of time in AI updates
```

- **ai_UseSimplePathfindingHeuristic**:

```text
Toggles the AI using a straight simple distance heuristic for debugging.
Usage: ai_UseSimpleHeuristic [0/1]
```

- **ai_UseSmartPathFollower**:

```text
Enables Smart PathFollower (default: 1).
```

- **ai_UseSmartPathFollower_AABB_based**:

```text
Enables Smart PathFollower to use AABB checks and other optimizations
```

- **ai_UseSmartPathFollower_LookAheadDistance**:

```text
LookAheadDistance of SmartPathFollower
```

- **ai_VisionMapNumberOfPVSUpdatesPerFrame**:

```text

```

- **ai_VisionMapNumberOfVisibilityUpdatesPerFrame**:

```text

```

- **ai_WaterOcclusion**:

```text
scales how much water hides player from AI
```

- **ai_perception.landed_baseRadius**:

```text
Base radius for the AI sound generated when player lands
```

- **ai_perception.landed_speedMultiplier**:

```text
Multiplier applied to fall speed which is added on to the radius for the AI sound generated when player lands
```

- **ai_perception.movement_crouchMovingMultiplier**:

```text
Multiplier for crouched movement speed effect on footstep sound radius
```

- **ai_perception.movement_crouchRadiusDefault**:

```text
Default value for crouching footstep sound radius multiplier (overridden by surface type)
```

- **ai_perception.movement_movingSurfaceDefault**:

```text
Default value for movement speed effect on footstep radius (overridden by surface type)
```

- **ai_perception.movement_standingMovingMultiplier**:

```text
Multiplier for standing movement speed effect on footstep sound radius
```

- **ai_perception.movement_standingRadiusDefault**:

```text
Default value for standing footstep sound radius (overridden by surface type)
```

- **ai_perception.movement_useSurfaceType**:

```text
Toggle if surface type should be used to get the base radius instead of cvars
```

- **aim_assistAimEnabled**:

```text
Enable/disable aim assitance on aim zooming
```

- **aim_assistAutoCoeff**:

```text
The scale of auto weapons' aim assistance at continuous fire
```

- **aim_assistCrosshairDebug**:

```text
debug crosshair aim assistance
```

- **aim_assistCrosshairSize**:

```text
screen size used for crosshair aim assistance
```

- **aim_assistMaxDistance**:

```text
The maximum range at which autoaim operates
```

- **aim_assistRestrictionTimeout**:

```text
The restriction timeout on aim assistance after user uses a mouse
```

- **aim_assistSearchBox**:

```text
The area autoaim looks for enemies within
```

- **aim_assistSingleCoeff**:

```text
The scale of single-shot weapons' aim assistance
```

- **aim_assistSnapDistance**:

```text
The maximum deviation autoaim is willing to compensate for
```

- **aim_assistTriggerEnabled**:

```text
Enable/disable aim assistance on firing the weapon
```

- **aim_assistVerticalScale**:

```text
The amount of emphasis on vertical correction (the less the number is the more vertical component is compensated)
```

- **aln_debug_filter**:

```text

```

- **aln_debug_movement**:

```text

```

- **autotest_disable_saveload**:

```text
disable save/load whilst running feature tests
```

- **autotest_enabled**:

```text
1 = enabled autotesting, 2 = enabled autotesting with no output results written.
```

- **autotest_quit_when_done**:

```text
quit the game when tests are done
```

- **autotest_state_setup**:

```text
setup string for autotesting
```

- **autotest_verbose**:

```text
output detailed logging whilst running feature tests
```

- **ban_timeout**:

```text
Ban timeout in minutes
```

- **br_breakmaxworldsize**:

```text
The maximum value used for breakage world positions
```

- **br_breakworldoffsetx**:

```text
Break world origin
```

- **br_breakworldoffsety**:

```text
Break world origin
```

- **bt_end_melee**:

```text
end bullet-time when melee
```

- **bt_end_reload**:

```text
end bullet-time when reloading
```

- **bt_end_select**:

```text
end bullet-time when selecting a new weapon
```

- **bt_energy_decay**:

```text
bullet time energy decay rate
```

- **bt_energy_max**:

```text
maximum bullet-time energy
```

- **bt_energy_regen**:

```text
bullet time energy regeneration rate
```

- **bt_ironsight**:

```text
bullet-time when in ironsight
```

- **bt_pitch**:

```text
sound pitch shift for bullet-time
```

- **bt_speed**:

```text
bullet-time when in speed mode
```

- **bt_time_scale**:

```text
bullet-time time scale to apply
```

- **c_shakeMult**:

```text

```

- **ca_AllowMultipleEffectsOfSameName**:

```text
Allow a skeleton animation to spawn more than one instance of an effect with the same name on the same instance.
```

- **ca_AnimWarningLevel**:

```text
if you set this to 0, there won't be any
frequest warnings from the animation system
```

- **ca_AnimationLODs**:

```text
Enable animation LODs
```

- **ca_ApplyJointVelocitiesMode**:

```text
Joint velocity preservation code mode: 0=Disabled, 1=Physics-driven, 2=Animation-driven
```

- **ca_AttachmentCullingRation**:

```text
ration between size of attachment and distance to camera
```

- **ca_AttachmentCullingRationMP**:

```text
ration between size of attachment and distance to camera for MP
```

- **ca_AttachmentMergingMemoryBudget**:

```text
amount of memory (in bytes) dedicated to merged character attachments
```

- **ca_CharEditModel**:

```text

```

- **ca_ClothBlending**:

```text
if this is 0 blending with animation is disabled
```

- **ca_ClothBypassSimulation**:

```text
if this is 1 actual cloth simulation is disabled (wrap skinning still works)
```

- **ca_CopySkinLoad**:

```text
if non zero allow copy instead of load optimization
```

- **ca_DBAUnloadRemoveTime**:

```text
DBA Unload Timing: DBA Remove Time.
```

- **ca_DBAUnloadUnregisterTime**:

```text
DBA Unload Timing: CAF Unregister Time.
```

- **ca_DeathBlendTime**:

```text
Specifies the blending time between low-detail dead body skeleton and current skeleton
```

- **ca_DebugADIKTargets**:

```text
If 1, then it will show if there are animation-driven IK-Targets for this model.
```

- **ca_DebugAnimJointController**:

```text
dump all joint controllers for every running animation
use together with ca_FilterJoints, ca_FilterAnims and ca_FilterCharacters to limit the output
outputs O (orientation in degrees) and P (position in metres)
```

- **ca_DebugAnimMemTracking**:

```text
if this is 1, then its shows the anim-key allocations
```

- **ca_DebugAnimUpdates**:

```text
shows the amount of skeleton-updates
```

- **ca_DebugAnimUsage**:

```text
shows what animation assets are used in the level
1 - simple DBA list
2 - DBA list with used cafs
4 - complete debug
8 - oneshot: dump used CAF files
16 - oneshot: dump all CAF files and its DBAs

```

- **ca_DebugAnimUsageFilter**:

```text
Filter for anim usage debug for DBA name.
```

- **ca_DebugAnimationStreaming**:

```text
if this is 1, then it shows what animations are streamed in
```

- **ca_DebugCommandBuffer**:

```text
if this is 1, it will print the amount of commands for the blend-buffer
2 prints extended info for one joint selected by ca_filterjoints
```

- **ca_DebugCriticalErrors**:

```text
if 1, then we stop with a Fatal-Error if we detect a serious issue
```

- **ca_DebugFacial**:

```text
Debug facial playback info
```

- **ca_DebugFacialEyes**:

```text
Debug facial eyes info
```

- **ca_DebugModelCache**:

```text
shows what models are currently loaded and how much memory they take
```

- **ca_DebugSWSkinning**:

```text
1 colored wireframe on top of software skinned meshes - color coded count of skinned bones,
2 draws normals,
3 draws blue mesh where the tangents are updated,
4 colored wireframe with total morph/vertex frame debug, use ca_FilterMorphs to filter morphs
5 colored wireframe with active morph/vertex frame debug, use ca_FilterMorphs to filter morphs

```

- **ca_DebugSegmentation**:

```text
if set to 1, we can see the timing and the segment-counter of all assets in a BSpace
```

- **ca_DebugSkeletonEffects**:

```text
If true, dump log messages when skeleton effects are handled.
```

- **ca_DebugTextFilter**:

```text
Animation debug by entity name, allows multiple characters divided by comma. Compatible with es_DebugAnim.
```

- **ca_DebugTextScaling**:

```text
Change size of the anim debug text as it was too small.
```

- **ca_DecalSizeMultiplier**:

```text
The multiplier for the decal sizes
```

- **ca_DisableAnimationUnloading**:

```text
Disable Animation Unloading.
```

- **ca_DisableAuxPhysics**:

```text
disable simulation of character ropes and cloth
```

- **ca_DoNotWaitForStreaming**:

```text
Animations that are not in memory are activated as normal and processing is skipped but animation time is running, animation events sent.
```

- **ca_DrawAimIKVEGrid**:

```text
if set to 1, we will the the grid with the virtual examples
```

- **ca_DrawAimIKVEGridIndex**:

```text
force index from VEG grid
```

- **ca_DrawAimPoses**:

```text
draws the wireframe of the aim poses
```

- **ca_DrawAllSimulatedSockets**:

```text
if set to 1, the own bounding box of the character is drawn
```

- **ca_DrawAttachmentOBB**:

```text
if this is 0, will not draw the attachments objects
```

- **ca_DrawAttachmentProjection**:

```text
if this is 0, will not draw the attachment projections
```

- **ca_DrawAttachments**:

```text
if this is 0, will not draw the attachments objects
```

- **ca_DrawAttachmentsMergedForShadows**:

```text
if this is 1 we merge attachments for shadow generation
```

- **ca_DrawBBox**:

```text
if set to 1, the own bounding box of the character is drawn
```

- **ca_DrawBaseMesh**:

```text
if this is 0, will not draw the characters
```

- **ca_DrawBinormals**:

```text
draws the binormals of the rendered character
```

- **ca_DrawCC**:

```text
if this is 0, will not draw the CC characters
```

- **ca_DrawCGA**:

```text
if this is 0, will not draw the CGA characters
```

- **ca_DrawCHR**:

```text
if this is 0, will not draw the CHR characters
```

- **ca_DrawCloth**:

```text
1 draw render mesh, 2 draw sim mesh, 0 draws neither
```

- **ca_DrawDecalsBBoxes**:

```text
if set to 1, the decals bboxes are drawn
```

- **ca_DrawEmptyAttachments**:

```text
draws a wireframe cube if there is no object linked to an attachment
```

- **ca_DrawLocator**:

```text
if this is 1, we will draw the body and move-direction. If this is 2, we will also print out the move direction
```

- **ca_DrawLookIK**:

```text
draws a visualization of look ik
```

- **ca_DrawNormals**:

```text
draws the normals of the rendered character
```

- **ca_DrawPose**:

```text

```

- **ca_DrawPositionPost**:

```text
draws the world position of the character (after update)
```

- **ca_DrawSkeleton**:

```text
Display skeleton debug
1 - the skeleton is drawn
2 - shows joint name
4 - shows some additional info
8 - enables smaller font
16 - show total joint count
32 - show skeleton guid
```

- **ca_DrawTangents**:

```text
draws the tangents of the rendered character
```

- **ca_DrawVEGInfo**:

```text
if set to 1, the VEG debug info is drawn
```

- **ca_DrawWireframe**:

```text
draws a wireframe on top of the rendered character
```

- **ca_DumpUsedAnims**:

```text
writes animation asset statistics to the disk
```

- **ca_FacialAnimationRadius**:

```text
Maximum distance at which facial animations are updated - handles zooming correctly
```

- **ca_FacialAnimationTransformTranslations**:

```text
Turns on translation transformation to parent's local space
```

- **ca_FilterAnims**:

```text
to filter output of ca_DebugAnimJointController
```

- **ca_FilterCharacters**:

```text
to filter output of ca_DebugAnimJointController
```

- **ca_FilterJoints**:

```text
Filter of the displayed joints. Used as a case insesitive substring filter. Comma or space separated list of tokens can be used and each token is used as a filter that allows joint to be drawn.
```

- **ca_FilterMorphs**:

```text
to filter output of ca_DebugSWSkinning
```

- **ca_ForceUpdateSkeletons**:

```text
Always update all skeletons, even if not visible.
```

- **ca_KeepModels**:

```text
If set to 1, will prevent models from unloading from memory
upon destruction of the last referencing character
```

- **ca_LoadUncompressedChunks**:

```text
If this 1, then uncompressed chunks prefer compressed while loading
```

- **ca_LockFeetWithIK**:

```text
If this is set to 1, then we lock the feet to prevent sliding when additive animations are used
```

- **ca_LookIKBlendSpeed**:

```text
Speed of lookIK fade-in/fade-out
```

- **ca_LookIKEyeRotationDirectlyToBone**:

```text
Rotation from LookIK is applied to eye bones instead of as an offset to eye attachments
```

- **ca_LookIKEyeWeightHack**:

```text
Blending weight is partially moved to eyes only (hacky behavior)
```

- **ca_MemoryDefragEnabled**:

```text
Enables defragmentation of anim data
```

- **ca_MemoryDefragPoolSize**:

```text
Sets the upper limit on the defrag pool size
```

- **ca_MemoryUsageLog**:

```text
enables a memory usage log
```

- **ca_MinInPlaceCAFStreamSize**:

```text
min size a caf should be for in-place streaming
```

- **ca_MorphVertexFrameStateDebug**:

```text
if this is 1, then its shows morphs / vertex frames without control joint
```

- **ca_MotionBlurMovementThreshold**:

```text
"advanced" Set motion blur movement threshold for discarding skinned object
```

- **ca_NoAnim**:

```text
the animation isn't updated (the characters remain in the same pose)
```

- **ca_OverrideBlendWeightSimulation**:

```text
Override helper joint value for blending between attachment simulation and animation pose
 0.0 - full animation
 1.0 - full simulation (override disabled)
```

- **ca_ParametricPoolSize**:

```text
Size of the parametric pool
```

- **ca_PrecacheAnimationSets**:

```text
Enable Precaching of Animation Sets per Character.
```

- **ca_PreloadAllCAFs**:

```text
Preload all CAFs during level preloading.
```

- **ca_QuadrupedIKBone1Mult**:

```text
Angle difference multiplier for bone1 for the quadruped solver
```

- **ca_ReloadAllCHRPARAMS**:

```text
reload all CHRPARAMS
```

- **ca_SaveAABB**:

```text
if the AABB is invalid, replace it by the default AABB
```

- **ca_SerializeSkeletonAnim**:

```text
Turn on CSkeletonAnim Serialization.
```

- **ca_SnapToVGrid**:

```text
if set to 1, we snap the control parameter to the closest VCell
```

- **ca_Stats**:

```text
1 will turn on statistics gathering, 0 will turn it off and output results
```

- **ca_StatsOutputNetworkPath**:

```text
Output network path for animation statistics log
```

- **ca_StatsTimedOutput**:

```text
If >0 output stats every x seconds
```

- **ca_StoreAnimNamesOnLoad**:

```text
stores the names of animations during load to allow name lookup for debugging
```

- **ca_StreamCHR**:

```text
Set to enable CHR streaming
```

- **ca_StreamDBAInPlace**:

```text
Set to stream DBA files in place
```

- **ca_UnloadAnimationCAF**:

```text
unloading streamed CAFs as soon as they are not used
```

- **ca_UnloadAnimationDBA**:

```text
if 1, then unload DBA if not used
```

- **ca_UseAimIK**:

```text
If this is set to 1, then we are adding a look-at animation to the skeleton
```

- **ca_UseAssetDefinedLod**:

```text
Lowers render LODs for characters with respect to "consoles_lod0" UDP. Requires characters to be reloaded.
```

- **ca_UseDecals**:

```text
if set to 0, effectively disables creation of decals on characters
2 - alternative method of calculating/building the decals
```

- **ca_UseFacialAnimation**:

```text
If this is set to 1, we can play facial animations
```

- **ca_UseIMG_AIM**:

```text
if 1, then we use the IMG file. In development mode it is suppose to be off
```

- **ca_UseIMG_CAF**:

```text
if 1, then we use the IMG file. In development mode it is suppose to be off
```

- **ca_UseJointMasking**:

```text
Use Joint Masking to speed up motion decoding.
```

- **ca_UseLookIK**:

```text
If this is set to 1, then we are adding a look-at animation to the skeleton
```

- **ca_UseMorph**:

```text
the morph skinning step is skipped (it's part of overall skinning during rendering)
```

- **ca_UsePhysics**:

```text
the physics is not applied (effectively, no IK)
```

- **ca_UseRecoil**:

```text
If this is set to 1, then we enable procedural recoil
```

- **ca_UseScaling**:

```text
If set to 1, enables the scaling pipeline in the animation system.
```

- **ca_VClothMode**:

```text
0 - disabled (disable rendering & simulation)
1 - enabled (default)
2 - force skinning (disable simulation)

```

- **ca_Validate**:

```text
if set to 1, will run validation on animation data
```

- **ca_cloth_air_resistance**:

```text
"advanced" (more correct) version of damping
```

- **ca_cloth_damping**:

```text

```

- **ca_cloth_friction**:

```text

```

- **ca_cloth_max_safe_step**:

```text
if a segment stretches more than this (in *relative* units), its length is reinforced
```

- **ca_cloth_max_timestep**:

```text

```

- **ca_cloth_stiffness**:

```text
stiffness for stretching
```

- **ca_cloth_stiffness_norm**:

```text
stiffness for shape preservation along normals ("convexity preservation")
```

- **ca_cloth_stiffness_tang**:

```text
stiffness for shape preservation against tilting
```

- **ca_cloth_thickness**:

```text
thickness for collision checks
```

- **ca_cloth_vars_reset**:

```text
1 - load the values from the next char, 1 - apply normally, 2+ - ignore
```

- **ca_debugAnimProcessing**:

```text
Detailed dumping of proccessing anim jobs.
```

- **ca_disable_thread**:

```text
TEMP Disable Animation Thread.
```

- **ca_eyes_procedural**:

```text
Enables/Disables procedural eyes animation
```

- **ca_lipsync_debug**:

```text
Enables facial animation debug draw
```

- **ca_lipsync_phoneme_crossfade**:

```text
Cross fade time between phonemes in milliseconds
```

- **ca_lipsync_phoneme_crossfade_attenuation**:

```text
Cross fade attenuation in percent
```

- **ca_lipsync_phoneme_offset**:

```text
Offset phoneme start time by this value in milliseconds
```

- **ca_lipsync_phoneme_strength**:

```text
LipSync phoneme strength
```

- **ca_lipsync_vertex_drag**:

```text
Vertex drag coefficient when blending morph targets
```

- **ca_physicsProcessImpact**:

```text
Process physics impact pulses.
```

- **ca_syncAllAnimationsParallel**:

```text
Parallel sync all anims.
```

- **ca_thread**:

```text
If >0 enables Animation Multi-Threading.
```

- **ca_thread0Affinity**:

```text
Affinity of first Animation Thread.
```

- **ca_thread1Affinity**:

```text
Affinity of second Animation Thread.
```

- **ca_useADIKTargets**:

```text
Use Animation Driven Ik Targets.
```

- **ca_vaBlendCullingDebug**:

```text
Show Blend Shapes culling difference
```

- **ca_vaBlendCullingThreshold**:

```text
Blend Shapes culling threshold
```

- **ca_vaBlendEnable**:

```text
Enables Vertex Animation blends
```

- **ca_vaBlendPostSkinning**:

```text
Perform Vertex Animation blends post skinning
```

- **ca_vaEnable**:

```text
Enables Vertex Animation
```

- **ca_vaProfile**:

```text
Enable Vertex Animation profile
```

- **ca_vaScaleFactor**:

```text
Vertex Animation Weight Scale Factor
```

- **ca_vaSkipVertexAnimationLOD**:

```text
Skip LOD 0 for characters using vertex animation
```

- **ca_vaUpdateTangents**:

```text
Update Tangents on SKIN attachments that have the vertex color blue channel set to 255 and 8 weights
```

- **capture_file_format**:

```text
Specifies file format of captured files (jpg, tga).
```

- **capture_file_name**:

```text
If set, specifies the path and name to use for the captured frame
```

- **capture_file_prefix**:

```text
If set, specifies the prefix to use for the captured frame instead of the default 'Frame'.
```

- **capture_folder**:

```text
Specifies sub folder to write captured frames.
```

- **capture_frame_once**:

```text
Makes capture single frame only
```

- **capture_frames**:

```text
Enables capturing of frames. 0=off, 1=on
```

- **capture_frames_pause**:

```text
Pauses capturing of frames for given number of frames.
```

- **cl_AISystem**:

```text
Load and use the AI system on the client
```

- **cl_DefaultNearPlane**:

```text
The default camera near plane. 
```

- **cl_DisableHUDText**:

```text
Force disable all output from HUD Debug text nodes
```

- **cl_ETColorOverrideB**:

```text
Global color override (BLUE)
```

- **cl_ETColorOverrideEnable**:

```text
Global color override
```

- **cl_ETColorOverrideG**:

```text
Global color override (GREEN)
```

- **cl_ETColorOverrideR**:

```text
Global color override (RED)
```

- **cl_ETFontSizeMultiplier**:

```text
Global font size multiplier
```

- **cl_ETHideAIDebug**:

```text
Hide AI debug tags
```

- **cl_ETHideAll**:

```text
Hide all tags (overrides all other options)
```

- **cl_ETHideBehaviour**:

```text
Hide AI behavior tags
```

- **cl_ETHideFlowgraph**:

```text
Hide tags created by flowgraph
```

- **cl_ETHideReadability**:

```text
Hide AI readability tags
```

- **cl_ETHideScriptBind**:

```text
Hide tags created by Lua script
```

- **cl_ETLog**:

```text
Logging (0=off, 1=editor.log, 2=editor.log + AIlog.log)
```

- **cl_ETMaxDisplayDistance**:

```text
Max display distance
```

- **cl_ViewSystemDebug**:

```text
Sets Debug information of the ViewSystem.
```

- **cl_actorsafemode**:

```text
Enable/disable actor safe mode
```

- **cl_bandwidth**:

```text
Bit rate on client
```

- **cl_bob**:

```text
view/weapon bobbing multiplier
```

- **cl_camKeepX**:

```text
Fraction of camera x-axis rotation to keep.
```

- **cl_camKeepY**:

```text
Fraction of camera y-axis rotation to keep.
```

- **cl_camKeepZ**:

```text
Fraction of camera z-axis rotation to keep.
```

- **cl_camModify**:

```text
Enable camera modifiers.
```

- **cl_camOffsetX**:

```text
Degrees to offset camera around x-axis.
```

- **cl_camOffsetY**:

```text
Degrees to offset camera around y-axis.
```

- **cl_camOffsetZ**:

```text
Degrees to offset camera around z-axis.
```

- **cl_camRotateX**:

```text
Degrees to rotate camera per second around x-axis.
```

- **cl_camRotateY**:

```text
Degrees to rotate camera per second around y-axis.
```

- **cl_camRotateZ**:

```text
Degrees to rotate camera per second around z-axis.
```

- **cl_camTranslateX**:

```text
Translate along camera local x-axis.
```

- **cl_camTranslateY**:

```text
Translate along camera local y-axis.
```

- **cl_camTranslateZ**:

```text
Translate along camera local z-axis.
```

- **cl_cam_PitchMax**:

```text
Max camera pitch
```

- **cl_cam_PitchMin**:

```text
Min camera pitch
```

- **cl_cam_auto_follow_movement_speed**:

```text
Camera auto-rotate reacts on player movement on/off.
```

- **cl_cam_auto_follow_rate**:

```text
Scale the speed at which the camera auto-rotates in player direction (0.0f is off).
```

- **cl_cam_auto_follow_threshold**:

```text
Camera auto-rotate threshold angle (how close it rotates to hero direction).
```

- **cl_cam_clipping_offset_distance**:

```text
Distance at which the camera starts offsetting horizontally to prevent clipping through the character/target.
```

- **cl_cam_debug**:

```text
Camera system debug output.
```

- **cl_cam_enable_lazy_cam**:

```text
Follow camera is 'lazy' and doesn't keep player in screen center.
```

- **cl_cam_keyLeftRightMove_SmoothingTime**:

```text
Time to interpolate the keyboard turning to full
```

- **cl_cam_lazy_cam_distance_XY**:

```text
Camera movement distance threshold in lazy cam mode. Bigger value => more lazy.
```

- **cl_cam_lazy_cam_distance_Z**:

```text
Camera movement distance threshold in lazy cam mode. Bigger value => more lazy.
```

- **cl_cam_lazy_cam_time_XY**:

```text
Camera movement time in lazy cam mode. Bigger value => more lazy.
```

- **cl_cam_lazy_cam_time_Z**:

```text
Camera movement time in lazy cam mode. Bigger value => more lazy.
```

- **cl_cam_min_distance**:

```text
Minimum distance for debugging.
```

- **cl_cam_mousePitchScale**:

```text
Camera pitch dampening.
```

- **cl_cam_mouseYawScale**:

```text
Camera yaw dampening.
```

- **cl_cam_orbit**:

```text
In Third Person mode this will enable orbit camera
see cl_cam_orbit_offset how to setup offset for this camera
see cl_cam_orbit_slide and cl_cam_orbit_slidespeed how to setup slide for object clipping
```

- **cl_cam_orbit_distance**:

```text
Distance of orbit camera.
```

- **cl_cam_orbit_offsetX**:

```text
X Offset of orbit camera.
```

- **cl_cam_orbit_offsetZ**:

```text
Z Offset of orbit camera.
```

- **cl_cam_orbit_slide**:

```text
Enable camera slide (Orbit mode).
```

- **cl_cam_orbit_slidespeed**:

```text
Camera slide speed (Orbit mode).
```

- **cl_cam_pitch_input_inertia**:

```text
Time delay until the camera fully stops after moving right stick in nav mode.
```

- **cl_cam_rotation_acceleration_time_pitch**:

```text
Camera pitch acceleration time.
```

- **cl_cam_rotation_acceleration_time_yaw**:

```text
Camera yaw acceleration time.
```

- **cl_cam_rotation_enable_acceleration**:

```text
Camera rotation is accelerating, not jumping on / off.
```

- **cl_cam_rotation_speed**:

```text
Camera rotation speed.
```

- **cl_cam_tracking**:

```text
Camera tracking enable/disable.
```

- **cl_cam_tracking_allow_pitch**:

```text
Camera tracking changes also vertical movement.
```

- **cl_cam_tracking_rotation_speed**:

```text
Speed multiplicator, adjusting rotation speed.
```

- **cl_cam_tracking_volume**:

```text
By default cam tracking ignores trees, but when they are bigger than this volume, they get tracked around.
```

- **cl_cam_yaw_input_inertia**:

```text
Time delay until the camera fully stops after moving right stick in nav mode.
```

- **cl_camera_noise**:

```text
Adds hand-held like camera noise to the camera view. 
 The higher the value, the higher the noise.
 A value <= 0 disables it.
```

- **cl_camera_noise_freq**:

```text
Defines camera noise frequency for the camera view. 
 The higher the value, the higher the noise.
```

- **cl_comment**:

```text
Hide/Unhide comments in game-mode
```

- **cl_crouchToggle**:

```text
To make the crouch key work as a toggle
```

- **cl_debugSwimming**:

```text
enable swimming debugging
```

- **cl_enable_tree_transparency**:

```text
Switches tree transparency on/off.
```

- **cl_fake_first_person**:

```text
Enable fake first person view in new new camera control system (cl_cam_orbit 1).
```

- **cl_fov**:

```text
vertical field of view.
```

- **cl_fovBlendTime**:

```text
Field of view blend delay
```

- **cl_headBob**:

```text
head bobbing multiplier
```

- **cl_headBobLimit**:

```text
head bobbing distance limit
```

- **cl_hfov**:

```text
horizontal field of view.
```

- **cl_hitBlur**:

```text
blur on hit
```

- **cl_hitShake**:

```text
hit shake
```

- **cl_initClientActor**:

```text
Enables actionmap and view setup for the client actor after connection.
Default is 1.

```

- **cl_invertCombatMouse**:

```text
invert in combat vertical axis [0 - no invert / 1 - inverted]
```

- **cl_invertMouse**:

```text
invert mouse vertical axis [0 - no invert / 1 - inverted]
```

- **cl_joy_nav_maxH**:

```text
max Horz turn speed in nav mode
```

- **cl_joy_nav_maxV**:

```text
max Vert turn speed in nav mode
```

- **cl_joy_nav_sensitivityH**:

```text
the stick centre to edge Horz turn sensitivity in nav mode
```

- **cl_joy_nav_sensitivityV**:

```text
the stick centre to edge Vert turn sensitivity in nav mode
```

- **cl_joy_nav_speedH**:

```text
scale the Horz turn speed in nav mode
```

- **cl_joy_nav_speedV**:

```text
scale the Vert turn speed in nav mode
```

- **cl_joy_nav_useHforV**:

```text
non zero => use the H values for V as well
```

- **cl_nearPlane**:

```text
overrides the near clipping plane if != 0, just for testing.
```

- **cl_nearPlaneMin**:

```text
Minimum Near clipping plane value. Used when overriding ZNear in CameraManager (ProcClip)
```

- **cl_nickname**:

```text
Nickname for player on connect.
```

- **cl_packetRate**:

```text
Packet rate on client
```

- **cl_righthand**:

```text
Select right-handed weapon!
```

- **cl_screeneffects**:

```text
Enable player screen effects (depth-of-field, motion blur, ...).
```

- **cl_sensitivity**:

```text
Set mouse sensitivity!
```

- **cl_serveraddr**:

```text
Server address
```

- **cl_serverpassword**:

```text
Server password
```

- **cl_serverport**:

```text
Server port
```

- **cl_shallowWaterDepthHi**:

```text
Shallow water depth high (above has full slowdown)
```

- **cl_shallowWaterDepthLo**:

```text
Shallow water depth low (below has zero slowdown)
```

- **cl_shallowWaterSpeedMulAI**:

```text
Shallow water speed multiplier (AI only)
```

- **cl_shallowWaterSpeedMulPlayer**:

```text
shallow water speed multiplier (Players only)
```

- **cl_sprintRestingTime**:

```text
How long needs the player to rest until he can sprint again
```

- **cl_sprintShake**:

```text
sprint shake
```

- **cl_sprintTime**:

```text
How long can the player sprint
```

- **cl_sprintToggle**:

```text
To make the sprint key work as a toggle
```

- **cl_sprintTurnOffHoldTime**:

```text
If player holds the sprint key for too long then he will stop sprinting after releasing it [s]
```

- **cl_sprintTurnOffMode**:

```text
0 = do not turn off the sprint if we hold the sprint key for too long (and then release it)
1 = turn off the sprint when holding the key for too long (only on PC)
2 = turn off the sprint when holding the key for too long (both PC and consoles)
```

- **cl_strengthscale**:

```text
nanosuit strength scale
```

- **cl_tpvAngDamping**:

```text
Camera angle damping: 0..N 0 = camera responds immediately.
```

- **cl_tpvAngDampingNav**:

```text
Camera angle damping: 0..N 0 = camera responds immediately.
```

- **cl_tpvDeltaDist**:

```text
Affects how far the cam can lag the player
```

- **cl_tpvDeltaDistNav**:

```text
Nav mode: Affects how far the cam can lag the player
```

- **cl_tpvDeltaVel**:

```text
Affects how far the cam can lag the player
```

- **cl_tpvDeltaVelNav**:

```text
Nav mode: Affects how far the cam can lag the player
```

- **cl_tpvDist**:

```text
camera distance in 3rd person view
```

- **cl_tpvFOVDamping**:

```text
Camera FOV damping
```

- **cl_tpvPosDamping**:

```text
Camera position damping: 0..N 0 = camera responds immediately.
```

- **cl_tpvPosDampingNav**:

```text
Nav mode: Camera position damping: 0..N 0 = camera responds immediately.
```

- **cl_tpvYaw**:

```text
camera angle offset in 3rd person view
```

- **cl_useCurrentUserNameAsDefault**:

```text
Use the current user name instead of the default profile's name
```

- **cl_visualLog**:

```text
Enables Visual Logging.
```

- **cl_visualLogFolder**:

```text
Specifies sub folder to write logs to.
```

- **cl_visualLogImageFormat**:

```text
Specifies file format of captured files (jpg, bmp).
```

- **cl_visualLogImageScale**:

```text
Image size. [0-1] = scale value. >1 = actual pixels for image width
```

- **cl_voice_recording**:

```text
Enable client voice recording
```

- **cl_voice_volume**:

```text
Set VOIP playback volume: 0-1
```

- **co_coopAnimDebug**:

```text
Enable Cooperative Animation debug output
```

- **co_slideWhileStreaming**:

```text
Allows the sliding while the anims are being streamed. Otherwise the sliding step while wait until the anims are streaming
```

- **co_usenewcoopanimsystem**:

```text
Uses the new cooperative animation system which works without the animation graph
```

- **con_debug**:

```text
Log call stack on every GetCVar call
```

- **con_display_last_messages**:

```text

```

- **con_line_buffer_size**:

```text

```

- **con_restricted**:

```text
0=normal mode / 1=restricted access to the console
```

- **con_showonload**:

```text
Show console on level loading
```

- **ctrl_Coeff_X**:

```text
Analog controller X rotation scale
```

- **ctrl_Coeff_Z**:

```text
Analog controller Z rotation scale
```

- **ctrl_Curve_X**:

```text
Analog controller X rotation curve
```

- **ctrl_Curve_Z**:

```text
Analog controller Z rotation curve
```

- **ctrl_ZoomMode**:

```text
Weapon aiming mode with controller. 0 is same as mouse zoom, 1 cancels at release
```

- **ctrl_aspectCorrection**:

```text
Aspect ratio corrections for controller rotation: 0-off, 1-direct, 2-inverse
```

- **ctrl_input_smoothing**:

```text
Smooths rotation input in GDC demo.
```

- **ctrlr_corner_smoother**:

```text
Sets the maximally allowed method for taking smooth corners; 0 = none; 1 = C2 method, smoothcd of angle; 2 = C3 method, using splines
```

- **ctrlr_corner_smoother_debug**:

```text
Enables debugging for corner smoother.
```

- **ctrlr_corner_smoother_target_max_distance**:

```text
If move target is farther than this distance it is clamped by this.
```

- **cvDoVerboseWindowTitle**:

```text

```

- **d3d11_CBUpdateStats**:

```text
Logs constant buffer updates statistics.
```

- **d3d11_forcedFeatureLevel**:

```text
Forces the Direct3D device to target a specific feature level - supported values are:
 10_0
 10_1
 11_0
 11_1
```

- **d3d11_preventDriverThreading**:

```text
Prevent internal threading optimizations for D3D Device.

```

- **demo_ai**:

```text
Enable/Disable AI during the demo
```

- **demo_file**:

```text
Time Demo Filename
```

- **demo_finish_cmd**:

```text
Console command to run when demo is finished
```

- **demo_finish_memreplay_sizer**:

```text
Add a crysizer tree to memreplay when demo is finished
```

- **demo_finish_memreplay_stop**:

```text
Stop memreplay when demo is finished
```

- **demo_fixed_timestep**:

```text
number of updates per second
```

- **demo_game_state**:

```text
enable/disable the game state recording
```

- **demo_max_frames**:

```text
Max number of frames to save
```

- **demo_noinfo**:

```text
Disable info display during demo playback
```

- **demo_num_orientations**:

```text
Number of horizontal orientations to play the demo using
e.g. 3 will play: looking ahead, 120deg left, 120deg right
default/min: 1
```

- **demo_num_runs**:

```text
Number of times to loop timedemo
```

- **demo_panoramic**:

```text
Panoramic view when playing back demo
```

- **demo_profile**:

```text
Enable demo profiling
```

- **demo_quit**:

```text
Quit game after demo runs finished
```

- **demo_replay_entities**:

```text
Disable restoring entities during demo playback
```

- **demo_restart_level**:

```text
Restart level after each loop: 0 = Off; 1 = use quicksave on first playback; 2 = load level start
```

- **demo_save_every_frame**:

```text
Save timedemo every frame during recording, in case game crashes timedemo will be reliable
```

- **demo_savestats**:

```text
Save level stats at the end of the loop
```

- **demo_screenshot_frame**:

```text
Make screenshot on specified frame during demo playback, If Negative then do screen shoot every N frame
```

- **demo_scroll_pause**:

```text
ScrollLock pauses demo play/record
```

- **demo_start_cmd**:

```text
Console command to run when demo is started
```

- **demo_time_of_day**:

```text
Sets the time of day to override in game settings if not negative
```

- **demo_use_hmd_rotation**:

```text
Uses alternative entity and view rotation for HMD Devices
```

- **demo_vtune**:

```text
Enables VTune profiling when running time demo
```

- **designer_warning_enabled**:

```text
designer warnings are enabled
```

- **designer_warning_level_resources**:

```text
Designer warnings about resource load during run-time
```

- **dlc_directory**:

```text
Holds the path to the directory where DLC should be installed to and read from
```

- **dt_enable**:

```text
suit actions activated by double-tapping
```

- **dt_meleeTime**:

```text
time in seconds between double taps for melee
```

- **dt_time**:

```text
time in seconds between double taps
```

- **e_3dEngineLogAlways**:

```text
Set maximum verbosity to 3dengine.dll log messages
```

- **e_3dEngineTempPoolSize**:

```text
pool size for temporary allocations in kb, requires app restart
```

- **e_AutoPrecacheCameraJumpDist**:

```text
When not 0 - Force full pre-cache of textures, procedural vegetation and shaders
if camera moved for more than X meters in one frame or on new cut scene start
```

- **e_AutoPrecacheCgf**:

```text
Force auto pre-cache of CGF render meshes. 1=pre-cache all mehes around camera. 2=pre-cache only important ones (twice faster)
```

- **e_AutoPrecacheTerrainAndProcVeget**:

```text
Force auto pre-cache of terrain textures and procedural vegetation
```

- **e_AutoPrecacheTexturesAndShaders**:

```text
Force auto pre-cache of general textures and shaders
```

- **e_AutoViewDistRatio**:

```text
If  - will be skip auto calculating the ViewDistRatio for a selected object
```

- **e_BBoxes**:

```text
Activates drawing of bounding boxes
```

- **e_BreezeAffectsRigidsWH**:

```text
Enables interaction between breeze the physical CRigidEntity 
0 - off
1 - on
```

- **e_BrushUseTerrainColor**:

```text
Allow blend with terrain color for brushes
```

- **e_Brushes**:

```text
Draw brushes
```

- **e_CGFMaxFileSize**:

```text
will refuse to load any cgf larger than the given filesize (in kb)
-1 - 1024 (<0 off (default), >0 filesize limit)
```

- **e_CacheNearestCubePicking**:

```text
Enable caching nearest cube maps probe picking for alpha blended geometry
```

- **e_CameraFreeze**:

```text
Freeze 3dengine camera (good to debug object culling and LOD).
The view frustum is drawn in write frame.
 0 = off
 1 = activated
```

- **e_CameraGoto**:

```text
Move cameras to a certain pos/angle
```

- **e_CameraRotationSpeed**:

```text
Rotate camera around Z axis for debugging
```

- **e_CharLodMin**:

```text
Min LOD for character objects
```

- **e_CharRenderLodMin**:

```text
Min LOD for character objects (used for rendering)
```

- **e_CheckOcclusion**:

```text
Perform a visible check in check occlusion job
```

- **e_CheckOcclusionJobBatchSize**:

```text
Size of the job request batch.
```

- **e_CheckOcclusionOutputQueueSize**:

```text
Size of queue for data send from check occlusion job
```

- **e_CheckOctreeObjectsBoxSize**:

```text
CryWarning for crazy sized COctreeNode m_objectsBoxes
```

- **e_ClipVolumes**:

```text
Enable/Disable light clip volumes. Default: 1 - Enabled
```

- **e_Clouds**:

```text
Enable clouds rendering
```

- **e_CoverCgfDebug**:

```text
Shows the cover setups on cfg files
```

- **e_CoverageBuffer**:

```text
Activates usage of software coverage buffer.
1 - camera culling only
2 - camera culling and light-to-object check
```

- **e_CoverageBufferAABBExpand**:

```text
expanding the AABB's of the objects to test to avoid z-fighting issues in the Coverage buffer
```

- **e_CoverageBufferBias**:

```text
Coverage buffer z-biasing
```

- **e_CoverageBufferCullIndividualBrushesMaxNodeSize**:

```text
128 - cull only nodes of scene tree and very big brushes
0 - cull all brushes individually
```

- **e_CoverageBufferDebug**:

```text
Display content of main camera coverage buffer
```

- **e_CoverageBufferDebugFreeze**:

```text
Freezes view matrix/-frustum 
```

- **e_CoverageBufferDrawOccluders**:

```text
Debug draw of occluders for coverage buffer
```

- **e_CoverageBufferEarlyOut**:

```text
preempting occluder rasterization to avoid stalling in the main thread if rendering is faster
```

- **e_CoverageBufferEarlyOutDelay**:

```text
Time in ms that rasterizer is allowed to continue working after early out request
```

- **e_CoverageBufferOccludersViewDistRatio**:

```text
Debug
```

- **e_CoverageBufferRastPolyLimit**:

```text
maximum amount of polys to rasterize cap, 0 means no limit
default is 500000
```

- **e_CoverageBufferReproj**:

```text
Selects occlusion culling mode
  1 - Simple reprojection
  2 - Reprojection with hole filling
  4 - Rasterized occlusion meshes
  6 - Reprojection and occlusion meshes
```

- **e_CoverageBufferShowOccluder**:

```text
1 show only meshes used as occluder, 2 show only meshes not used as occluder
```

- **e_CoverageBufferTerrain**:

```text
Activates usage of coverage buffer for terrain
```

- **e_CoverageBufferTerrainExpand**:

```text
expanding the AABB Z axis of terrain to avoid flat terrain flickering
```

- **e_CullVegActivation**:

```text
Vegetation activation distance limit; 0 disables visibility-based culling (= unconditional activation)
```

- **e_DebugDraw**:

```text
Draw helpers with information for each object (same number negative hides the text)
 1: Name of the used cgf, polycount, used LOD
 2: Color coded polygon count
 3: Show color coded LODs count, flashing color indicates no Lod
 4: Display color coded object texture memory usage
 5: Display color coded number of render materials
 6: Display ambient color
 7: Display tri count, number of render materials, texture memory
 8: Display per object editor MaxViewDistance
 9: Free slot
10: Render geometry with simple lines and triangles
11: Free slot
12: Free slot
13: Display occlusion amount (used during AO computations). Warning: can take a long time to calculate, depending on level size! 
15: Display helpers
16: Display debug gun
17: Streaming info (buffer sizes)
18: Free slot
19: Physics proxy triangle count
20: Display Character attachments texture memory usage
21: Display animated object distance to camera
22: Display object's current LOD vertex count
23: Display shadow casters in red
24: Show LOD info for characters
30: Face area on screen
31: LOD and View distance comparison
32: Color coded HLods, flashing color indicates switching
33: LOD and HLOD distance comparison
34: LOD distances
----------------debug draw list values. Any of them enable 2d on-screen listing type info debug. Specific values define the list sorting-----------
 100: tri count
 101: verts count
 102: draw calls
 103: texture memory
 104: mesh memory
```

- **e_DebugDrawFilter**:

```text
Show a specified text on DebugDraw
```

- **e_DebugDrawMaxDistance**:

```text
Draw distance for e_debugDraw text
```

- **e_DebugDrawShowOnlyCompound**:

```text
e_DebugDraw shows only Compound (less efficient) static meshes
```

- **e_DebugDrawShowOnlyLod**:

```text
e_DebugDraw shows only objects showing lod X
```

- **e_DebugGeomPrep**:

```text
enable logging of Geom preparation
```

- **e_DebugLights**:

```text
Use different colors for objects affected by different number of lights
black:0, blue:1, green:2, red:3 or more, blinking yellow: more then the maximum enabled
Obsolete for deferred lights. Use r_DeferredShadingDebug.
```

- **e_Decals**:

```text
1 - Activates drawing of decals (game decals and hand-placed)
2 - Displays debug stats and indicators for decals
```

- **e_DecalsAllowGameDecals**:

```text
Allows creation of decals by game (like weapon bullets marks)
```

- **e_DecalsClip**:

```text
Clip decal geometry by decal bbox
```

- **e_DecalsDeferredDynamic**:

```text
1 - make all game play decals deferred, 2 - make all game play decals non deferred
```

- **e_DecalsDeferredDynamicDepthScale**:

```text
Scale decal projection depth
```

- **e_DecalsForceDeferred**:

```text
1 - force to convert all decals to use deferred ones
```

- **e_DecalsHitCache**:

```text
Use smart hit caching for bullet hits (may cause no decals in some cases)
```

- **e_DecalsLifeTimeScale**:

```text
Allows to increase or reduce decals life time for different specs
```

- **e_DecalsMaxTrisInObject**:

```text
Do not create decals on objects having more than X triangles
```

- **e_DecalsMaxUpdatesPerFrame**:

```text
Maximum number of static decal render mesh updates per frame
```

- **e_DecalsMaxValidFrames**:

```text
Number of frames after which not visible static decals are removed
```

- **e_DecalsMerge**:

```text
Combine pieces of decals into one render call
```

- **e_DecalsNeighborMaxLifeTime**:

```text
If not zero - new decals will force old decals to fade in X seconds
```

- **e_DecalsOverlapping**:

```text
If zero - new decals will not be spawned if the distance to nearest decals less than X
```

- **e_DecalsPlacementTestAreaSize**:

```text
Avoid spawning decals on the corners or edges of entity geometry
```

- **e_DecalsPlacementTestMinDepth**:

```text
Avoid spawning decals on the corners or edges of entity geometry
```

- **e_DecalsPreCreate**:

```text
Pre-create decals at load time
```

- **e_DecalsRange**:

```text
Less precision for decals outside this range
```

- **e_DecalsSpawnDistRatio**:

```text
Max distance ratio for spawning dynamic decals.
This will be applied on top of e_ViewDistRatio
```

- **e_DefaultMaterial**:

```text
use gray illumination as default
```

- **e_DeferredPhysicsEvents**:

```text
Enable to Perform some physics events deferred as a task/job
```

- **e_DeformableObjects**:

```text
Enable / Disable morph based deformable objects
```

- **e_DisplayMemoryUsageIcon**:

```text
Turns On/Off the memory usage icon rendering: 1 on, 0 off.
```

- **e_DissolveUsePermanentRenderObjects**:

```text
Activates usage of permanent render objects for lod disolving.
```

- **e_DynamicDistanceShadows**:

```text
Enable dynamic distance shadows, 0 = disable, 1 = enable only for movable object types, 2 = enable for all object types, -1 = don't render dynamic distance shadows
```

- **e_DynamicLights**:

```text
Activates dynamic light sources
  0 - Disable dynamic lights
  1 - Enable dynamic lights
  2 - Show entity debug info on regular lights
  3 - Show entity debug info on environment probes
```

- **e_DynamicLightsConsistentSortOrder**:

```text
Debug
```

- **e_DynamicLightsForceDeferred**:

```text
Convert all lights to deferred (except sun)
```

- **e_DynamicLightsFrameIdVisTest**:

```text
Use based on last draw frame visibility test
```

- **e_DynamicLightsMaxCount**:

```text
Sets maximum amount of dynamic light sources
```

- **e_Entities**:

```text
Activates drawing of entities and brushes
```

- **e_EntitySuppressionLevel**:

```text
Defines the level at which entities are spawned.
Entities marked with lower level will not be spawned - 0 means no level.
Usage: e_EntitySuppressionLevel [0-infinity]
Default is 0 (off)
```

- **e_ExecuteRenderAsJobMask**:

```text
Each bit specifies object type to render it in jobs
```

- **e_Fog**:

```text
Activates global height/distance based fog
```

- **e_FogVolumes**:

```text
Activates local height/distance based fog volumes
```

- **e_FoliageBranchesDamping**:

```text
Damping of branch ropes
```

- **e_FoliageBranchesStiffness**:

```text
Stiffness of branch ropes
```

- **e_FoliageBranchesTimeout**:

```text
Maximum lifetime of branch ropes (if there are no collisions)
```

- **e_FoliageBrokenBranchesDamping**:

```text
Damping of branch ropes of broken vegetation
```

- **e_FoliageStiffness**:

```text
Stiffness of the spongy obstruct geometry
```

- **e_FoliageWindActivationDist**:

```text
If the wind is sufficiently strong, visible foliage in this view dist will be forcefully activated
```

- **e_ForceDetailLevelForScreenRes**:

```text
[DEPRECATED] Force sprite distance and other values used for some specific screen resolution, 0 means current
```

- **e_GeomCacheBufferSize**:

```text
Geometry cache stream buffer upper limit size in MB. Default: 32, IGNORED if e_GeomCacheUsePoolMemory is set to 0!
```

- **e_GeomCacheDecodeAheadTime**:

```text
Time in seconds that data will be decoded ahead for geom cache streaming. Default: 0.5
```

- **e_GeomCacheEnabled**:

```text
Enable Geom Caches
```

- **e_GeomCacheLerpBetweenFrames**:

```text
Interpolate between geometry cache frames. Default: 1
```

- **e_GeomCacheMaxBufferAheadTime**:

```text
Time in seconds maximum that data will be buffered ahead for geom cache streaming. Default: 5.0
```

- **e_GeomCacheMaxPlaybackFromMemorySize**:

```text
Maximum size of geometry cache animated data in MB before always streaming from disk ignoring the memory playback flag. Default: 16
```

- **e_GeomCacheMinBufferAheadTime**:

```text
Time in seconds minimum that data will be buffered ahead for geom cache streaming. Default: 2.0
```

- **e_GeomCachePreferredDiskRequestSize**:

```text
Preferred disk request size for geometry cache streaming in KB. Default: 1024
```

- **e_GeomCacheUsePoolMemory**:

```text
Specify if should use pool to allocate space for geom caches of just classic malloc. Default: 0 - malloc
```

- **e_GeomCaches**:

```text
Activates drawing of geometry caches
```

- **e_GsmCastFromTerrain**:

```text
Allows sun shadows from terrain to be activated in editor level settings
```

- **e_GsmDepthBoundsDebug**:

```text
Debug GSM bounds regions calculation
```

- **e_GsmLodsNum**:

```text
Number of GSM lods (0..5)
```

- **e_GsmSizesWH**:

```text
Comma separated list of sizes for GSM LODs (in meters)
```

- **e_GsmStats**:

```text
Show GSM statistics 0=off, 1=enable debug to the screens
```

- **e_HwOcclusionCullingWater**:

```text
Activates usage of HW occlusion test for ocean
```

- **e_JointStrengthScale**:

```text
Scales the strength of prebroken objects' joints (for tweaking)
```

- **e_LightIlluminanceThreshold**:

```text
Min illuminance to determine light effect radius
```

- **e_LightShadowCastSpecWH**:

```text
Only lights with a shadow casting parameter set to less than or equal to this cvar will cast shadows
```

- **e_LightVolumes**:

```text
Allows deferred lighting for registered alpha blended geometry
0 = Off
1 = Enabled
2 = Enabled just for sun light

```

- **e_LightVolumesDebug**:

```text
Display light volumes culling debug info. Setting this to nonzero value will render color-coded AABBs of lights.
	gray   - octree node was visible, but the light was culled (typically by distance)
	blue   - environment probe
	white  - reflex light/area light
	red    - light with shadows
	orange - light without shadows

```

- **e_LodCompMaxSize**:

```text
Affects LOD selection for big objects, small number will switch more objects into lower LOD
```

- **e_LodFaceArea**:

```text
LOD selection method:
0 - [deprecated] Use mesh size, adjusted by e_LodRatio
1 - [current] Use geometric mean face area of base mesh only, e_LodFaceAreaTargetSize specifies radians per base-mesh vertex
2 - [experimental] Use geometric mean face area of all mesh LODs, e_LodFaceAreaTargetSize specifies radians per vertex
3 - [experimental] Use geometric mean face area of all mesh LODs, e_LodFaceAreaPixels specifies pixels per vertex

```

- **e_LodFaceAreaPixels**:

```text
Target pixel distance for LOD vertices.
```

- **e_LodFaceAreaTargetSize**:

```text
Target radian span for LOD vertices.
```

- **e_LodFaceAreaTargetSizeVegetationMult**:

```text
Ability to tweak vegetation LODs separately from environment.
This value multiplies e_LodFaceAreaTargetSize for vegetation render nodes.
```

- **e_LodMax**:

```text
Max LOD for objects
```

- **e_LodMin**:

```text
Min LOD for objects
```

- **e_LodMinTtris**:

```text
LODs with less triangles will not be used
```

- **e_LodRatio**:

```text
LOD distance ratio for objects
```

- **e_LodTransitionTime**:

```text
If non 0 - use dissolve for smooth LOD transition
```

- **e_Lods**:

```text
Load and use LOD models for static geometry
```

- **e_LodsForceUse**:

```text
Force using LODs even if triangle count do not suit
```

- **e_MaxDrawCalls**:

```text
Will not render CGFs past the given amount of drawcalls
(<=0 off (default), >0 draw calls limit)
```

- **e_MaxViewDistFullDistCamHeight**:

```text
Debug
```

- **e_MaxViewDistSpecLerp**:

```text
1 - use max view distance set by designer for very high spec
0 - for very low spec
Values between 0 and 1 - will lerp between high and low spec max view distances
```

- **e_MaxViewDistance**:

```text
Far clipping plane distance
```

- **e_MergedMeshes**:

```text
Show runtime merged meshes
0: Disabled
1: Enabled
2: Enabled even when vegetation is disabled
```

- **e_MergedMeshesActiveDist**:

```text
Active distance up until merged mesh patches will be streamed in
```

- **e_MergedMeshesBufferWH**:

```text
Toggles merged meshes buffer type
0: eRMT_Dynamic
1: eRMT_Static
```

- **e_MergedMeshesBulletLifetime**:

```text
MergedMesh Bullet approximations lifetime
```

- **e_MergedMeshesBulletScale**:

```text
MergedMesh Bullet approximations size scale
```

- **e_MergedMeshesBulletSpeedFactor**:

```text
MergedMesh Bullet approximations speed factor
```

- **e_MergedMeshesCullingLodRatioWH**:

```text
Adjusts LOD distance for culling merged meshes.
```

- **e_MergedMeshesDebug**:

```text
enable debug drawing of runtime merged meshes
2: Show AABB + debug info (position, state, size, visibility)
64: Show the calculated wind
128: Show sectors, color coded by density
256: Draw colliders of objects influencing the merged meshes
544: Draw spines
1056: Draw simulated spines
2080: Draw spines with LOD info (red/blue)

```

- **e_MergedMeshesDebugMaxCnt0**:

```text
First value (BLUE->GREEN) for gradient used by e_MergedMeshesDebug=128
```

- **e_MergedMeshesDebugMaxCnt1**:

```text
Second value (GREEN->RED) for gradient used by e_MergedMeshesDebug=128
```

- **e_MergedMeshesDebugMaxCnt2**:

```text
Third value (MAGENTA) for gradient used by e_MergedMeshesDebug=128
```

- **e_MergedMeshesDedicatedCullingJob**:

```text
When enabled render of merged mesh creates dedicated job for culling.
When disabled culling is ran in the same job (unless render inside job is disabled elsewhere).
```

- **e_MergedMeshesDeformViewDistMod**:

```text
distance modifier applied to view dist ratios after which deformables stop updating
```

- **e_MergedMeshesDissolveRangeShadowWH**:

```text
Sets how long the dissolve for shadows is (in meters).
```

- **e_MergedMeshesDissolveRangeWH**:

```text
Sets how long the dissolve is (in meters).
```

- **e_MergedMeshesForceUpdate**:

```text
MergedMeshes will be updated even with zero dt
```

- **e_MergedMeshesInitialIterationsWH**:

```text
Number of iteration simulated on splines that was just loaded. Significantly affects performance
```

- **e_MergedMeshesInitialLongIterationWH**:

```text
Number of iteration simulated on FIRST spline that was just loaded. Used as baseline for other splines
```

- **e_MergedMeshesInitialPlasticityWH**:

```text
Remaining plasticity after initial update at [0,1]. It shrinks velocity.
```

- **e_MergedMeshesInitialSimulationWH**:

```text
Enable initial simulation - after turns and camera cuts
```

- **e_MergedMeshesInitialUpdateDistanceLodWH**:

```text
Number of meters after which we decrease the number of iteration. Should be low to prevent further MM from causing visual artifacts.
```

- **e_MergedMeshesInitialVelocityMultWH**:

```text
Multiplier for velocity after initial simulation .
```

- **e_MergedMeshesInstanceDist**:

```text
Distance fudge factor at which merged meshes turn off animation
```

- **e_MergedMeshesLodRatio**:

```text
merged meshes lod ratio
```

- **e_MergedMeshesMaxStreamingInProgress**:

```text
Maximum MergedMesh streaming tasks in progress
```

- **e_MergedMeshesMaxTriangles**:

```text
Do not merge meshes containing too many triangles. It's more efficient to render them without merging
```

- **e_MergedMeshesOutdoorOnly**:

```text
MergedMeshes will recieve ERF_OUTDOORONLY by default
```

- **e_MergedMeshesPool**:

```text
amount of mainmeory (in kb) that merged meshes are allowed to sustain
```

- **e_MergedMeshesPoolSpines**:

```text
percentage of the pool for spines
```

- **e_MergedMeshesTesselationSupport**:

```text
Enable or disable support for tesselation on mergedmeshes
```

- **e_MergedMeshesUseDissolveWH**:

```text
Enables distance based dissolve for merged meshes.
```

- **e_MergedMeshesUseSpines**:

```text
MergedMeshes use touchbending
```

- **e_MergedMeshesViewDistRatio**:

```text
merged meshes view dist ratio
```

- **e_MinMassDistanceCheckRenderMeshCollision**:

```text
Minimum mass to check for e_DecalsRange as distance in a RenderMesh Collision check
```

- **e_ObjFastRegister**:

```text
Debug
```

- **e_ObjQuality**:

```text
Object detail quality
```

- **e_ObjShadowCastSpec**:

```text
Object shadow casting spec. Only objects with Shadow Cast Spec <= e_ObjShadowCastSpec will cast shadows
```

- **e_ObjStats**:

```text
Show instances count
```

- **e_ObjectLayersActivation**:

```text
Allow game to activate/deactivate object layers
```

- **e_ObjectLayersActivationPhysics**:

```text
Allow game to create/free physics of objects: 0: Disable; 1: All; 2: Water only.
```

- **e_Objects**:

```text
Render or not all objects
```

- **e_ObjectsTreeBBoxes**:

```text
Debug draw of object tree bboxes.0 - off1 - draw node boxes2 - draw objects boxes3 - draw node boxes and color them by being loaded or not, also draw, counts on top.
```

- **e_ObjectsTreeLevelsDebug**:

```text
If non 0 - render only octree nodes of specified size
```

- **e_ObjectsTreeNodeMinSize**:

```text
Controls objects tree balancing
```

- **e_ObjectsTreeNodeSizeRatio**:

```text
Controls objects tree balancing
```

- **e_OcclusionCullingViewDistRatio**:

```text
Skip per object occlusion test for very far objects - culling on tree level will handle it
```

- **e_OcclusionLazyHideFrames**:

```text
Makes less occluson tests, but it takes more frames to detect invisible objects
```

- **e_OcclusionVolumes**:

```text
Enable occlusion volumes(antiportals)
```

- **e_OcclusionVolumesViewDistRatio**:

```text
Controls how far occlusion volumes starts to occlude objects
```

- **e_OnDemandMaxSize**:

```text
Specifies the maximum size of vegetation objects that are physicalized on-demand
```

- **e_OnDemandPhysics**:

```text
Turns on on-demand physicalization (0=off, 1=vegetation only[default], 2=brushes only, 3=brushes&vegetation
```

- **e_ParticleShadowsNumGSMs**:

```text
Number of shadow GSMs used for particle shadows
```

- **e_Particles**:

```text
Activates drawing of particles
```

- **e_ParticlesAllowRuntimeLoad**:

```text
Allow loading of dynamic particle effects at runtime
```

- **e_ParticlesAnimBlend**:

```text
Blend between animated texture frames
Usage: e_ParticlesAnimBlend [0/1/2]
0 = Off
1 = On
2 = Force
```

- **e_ParticlesAudio**:

```text
Toggles audio on particles on or off.
Usage: e_ParticlesAudio [0/1]
0 = Off
1 = On (Default)

```

- **e_ParticlesCollisions**:

```text
Enable collisions for non-physical particles:
  1 = terrain only, 2 = static objects also, 3 = dynamic objects also
```

- **e_ParticlesConvertPfx1**:

```text
Convert pfx1 to pfx2 when loaded. Combinable options:
  1 = Convert if pfx2 version doesn't exist.
  2 = Convert and overwrite pfx2 version.
  4 = Replace loaded pfx1 effects with pfx2 version.

```

- **e_ParticlesCullAgainstOcclusionBuffer**:

```text
Cull Particles against the Occlusion Buffer
```

- **e_ParticlesCullAgainstViewFrustum**:

```text
Cull Particles against the view-frustum
```

- **e_ParticlesDebug**:

```text
Particle debug flags: <flags> to set, <flags>+ to add, <flags>- to remove 1 = show basic stats m = show memory usage r = show reiteration, rejection, and collision stats b = draw bounding boxes and labels, show bounding box stats x = show bounding box stats d = force dynamic bounds and update for all emitters c = disable clipping against water and vis area bounds z = freeze particle system t = used by developers to debug test algorithms
```

- **e_ParticlesDumpMemoryAfterMapLoad**:

```text
Set to 1 to dump particle memory informations after map load
```

- **e_ParticlesForceSeed**:

```text
0 - every emitter is random unless a seed is specified
n - uses this value as seed for all emitters without specified seed
```

- **e_ParticlesGI**:

```text
Apply global illumination to appropriate particle effects
Usage: e_ParticlesGI [0/1/2]
0 = Off
1 = On
2 = Force
```

- **e_ParticlesIndexPoolSize**:

```text
Memory Size of Index Pool between Particle and Render Thread
```

- **e_ParticlesLayeredUpdateMul**:

```text
Multiplier for layered particle update.
```

- **e_ParticlesLights**:

```text
Allows to have light source attached to every particle
0 = Off
1 = Deferred lights

```

- **e_ParticlesLightsViewDistRatio**:

```text
Set particles lights view distance ratio
```

- **e_ParticlesLod**:

```text
Multiplier to particle count
```

- **e_ParticlesMaxDrawScreen**:

```text
Screen size max per particle -- fade out earlier
```

- **e_ParticlesMaxScreenFill**:

```text
Screen size max of total particles to draw
```

- **e_ParticlesMinDrawAlpha**:

```text
Alpha cutoff for rendering particles
```

- **e_ParticlesMinDrawPixels**:

```text
Pixel size min per particle -- fade out earlier
```

- **e_ParticlesMinPhysicsDynamicBounds**:

```text
Min particle PhysicsType to force dynamic bounds computation:
  0 = never force, 1 = SimpleCollision, 2 = SimplePhysics, 3 = RigidBody
```

- **e_ParticlesMotionBlur**:

```text
Motion blur for particles
Usage: e_ParticlesMotionBlur [0/1/2]
0 = Off
1 = On
2 = Force
```

- **e_ParticlesObjectCollisions**:

```text
Enable particle/object collisions for SimpleCollision:
  1 = against static objects only, 2 = dynamic also
```

- **e_ParticlesPrecacheAssets**:

```text
Precache particle textures and meshes instead of streaming
```

- **e_ParticlesPreload**:

```text
Enable preloading of all particle effects at the beginning
```

- **e_ParticlesProfile**:

```text
PFx1 only:
1 - always show statistics about particle pools usage
2 - disable the warning message when running out of pool memory
```

- **e_ParticlesProfiler**:

```text
Wavicle only:
1 - Display performance profiler on screen
2 - Display memory profiler on screen
f - Output statistics to a csv file
```

- **e_ParticlesProfilerCountBudget**:

```text
Particle counts budget to be shown during profiling
```

- **e_ParticlesProfilerOutputFolder**:

```text
Folder to output particle profiler
```

- **e_ParticlesProfilerOutputName**:

```text
Name of the particle statistics file name
```

- **e_ParticlesProfilerTimingBudget**:

```text
Particle processing time budget (in nanoseconds) to be shown during profiling
```

- **e_ParticlesQuality**:

```text
Particles detail quality
```

- **e_ParticlesSerializeNamedFields**:

```text
Save effects libraries with named fields for future compatibility (compatible with versions >= 24)
```

- **e_ParticlesShadows**:

```text
Shadows on particles
Usage: e_ParticlesShadows [0/1/2]
0 = Off
1 = On
2 = Force
```

- **e_ParticlesSoftIntersect**:

```text
Render appropriate particles with soft intersection
Usage: e_ParticlesSoftIntersect [0/1/2]
0 = Off
1 = On
2 = Force
```

- **e_ParticlesSortQuality**:

```text
Minimum sort quality for new particle insertion:
  0 = basic, 1 = better, 2 = best
```

- **e_ParticlesUseLevelSpecificLibs**:

```text
Allows searching for level-specific version of effects files
0 = Off
1 = Enabled

```

- **e_ParticlesVertexPoolSize**:

```text
Memory Size of Vertex Pool between Particle and Render Thread
```

- **e_PermanentRenderObjectReserveTime**:

```text
A permanent render objects will be freed after this time plus e_LodTransitionTime since its last usage.
```

- **e_PermanentRenderObjects**:

```text
Activates usage of permanent render objects
2 = skip level objects where permanent render objects are used
```

- **e_PhysFoliage**:

```text
Enables physicalized foliage
1 - only for dynamic objects
2 - for static and dynamic)
```

- **e_PhysMinCellSize**:

```text
Min size of cell in physical entity grid
```

- **e_PhysOceanCell**:

```text
Cell size for ocean approximation in physics, 0 assumes flat plane
```

- **e_PhysProxyTriLimit**:

```text
Maximum allowed triangle count for phys proxies
```

- **e_Portals**:

```text
Activates drawing of visareas content (indoors), values 2,3,4 used for debugging
```

- **e_PortalsBigEntitiesFix**:

```text
Enables special processing of big entities like 1p vehicles intersecting portals
```

- **e_PortalsBlend**:

```text
Blend lights and cubemaps of vis areas connected to portals 0=off, 1=on
```

- **e_PortalsMaxRecursion**:

```text
Maximum number of visareas and portals to traverse for indoor rendering
```

- **e_PrecacheLevel**:

```text
Pre-render objects right after level loading
```

- **e_PreloadDecals**:

```text
Preload all materials for decals
```

- **e_PreloadMaterials**:

```text
Preload level materials from level cache pak and resources list
```

- **e_PrepareDeformableObjectsAtLoadTime**:

```text
Enable to Prepare deformable objects at load time instead on demand, prevents peaks but increases memory usage
```

- **e_ProcVegetation**:

```text
Show procedurally distributed vegetation
```

- **e_ProcVegetationMaxCacheLevels**:

```text
Number of heightmap quad-tree levels used for vegetation spawning
```

- **e_ProcVegetationMaxObjectsPerSector**:

```text
Maximum number of procedural instances in level
```

- **e_ProcVegetationMaxSectorsInCache**:

```text
Maximum number of 64x64 meter sectors cached in memory
```

- **e_ProcVegetationMaxViewDistance**:

```text
Maximum distance where procedural objects may be spawn for heightmap quad-tree level 0, every next level multiply it by 2
```

- **e_RNTmpDataPoolMaxFrames**:

```text
Cache RNTmpData at least for X framres
```

- **e_Recursion**:

```text
If 0 - will skip recursive render calls like render into texture
```

- **e_RecursionViewDistRatio**:

```text
Set all view distances shorter by factor of X
```

- **e_Render**:

```text
Enable engine rendering
```

- **e_RenderMeshCollisionLod**:

```text
Lod for render mesh collision check test
```

- **e_RenderMeshCollisionTolerance**:

```text
Min distance between physics-proxy and rendermesh before collision is considered a hole
```

- **e_RenderMeshUpdateAsync**:

```text
Enables async updating of dynamically updated rendermeshes
0 - performs a synchronous update
1 - performs the update in an async job (default))
```

- **e_Roads**:

```text
Activates drawing of road objects
```

- **e_Ropes**:

```text
Turn Rendering of Ropes on/off
```

- **e_SQTestBegin**:

```text
If not zero - start streaming latency unit test
```

- **e_SQTestCount**:

```text
If not zero - restart test X times
```

- **e_SQTestDelay**:

```text
Time to stabilize the system before camera movements
```

- **e_SQTestDistance**:

```text
Distance to travel
```

- **e_SQTestExitOnFinish**:

```text
If not zero - shutdown when finished testing
```

- **e_SQTestMip**:

```text
Mip to wait during test
```

- **e_SQTestMoveSpeed**:

```text
Camera speed during test (meters/sec)
```

- **e_SQTestTextureName**:

```text
Reference texture name for streaming latency test
```

- **e_ScissorDebug**:

```text
Debug
```

- **e_ScreenShot**:

```text
Make screenshot combined up of multiple rendered frames
(negative values for multiple frames, positive for a a single frame)
 1 highres
 2 360 degree panorama (not supported)
 3 Map top-down view

see:
  e_ScreenShotWidth, e_ScreenShotHeight, e_ScreenShotQuality, e_ScreenShotMapCenterX,
  e_ScreenShotMapCenterY, e_ScreenShotMapSize, e_ScreenShotMinSlices, e_ScreenShotDebug
```

- **e_ScreenShotDebug**:

```text
0 off
1 show stitching borders
2 show overlapping areas
```

- **e_ScreenShotFileFormat**:

```text
Set output image file format for hires screen shots. Can be JPG or TGA
```

- **e_ScreenShotHeight**:

```text
used for all type highres screenshots made by e_ScreenShot to define the
height of the destination image, 1080 default [1-4096]
```

- **e_ScreenShotMapCamHeight**:

```text
param for top-down-view screenshot creation, defining the camera height for screenshots,
see e_ScreenShotMap defines the y position of the bottom right corner of the
screenshot-area on the terrain,
0.0 - 1.0 (1.0 is default)
```

- **e_ScreenShotMapCenterX**:

```text
param for the centerX position of the camera, see e_ScreenShotMap
defines the x position of the top left corner of the screenshot-area on the terrain,
0.0 - 1.0 (0.0 is default)
```

- **e_ScreenShotMapCenterY**:

```text
param for the centerX position of the camera, see e_ScreenShotMap
defines the y position of the top left corner of the screenshot-area on the terrain,
0.0 - 1.0 (0.0 is default)
```

- **e_ScreenShotMapOrientation**:

```text
param for rotating the orientation through 90 degrees so the screen shot width is along the X axis
see e_ScreenShotMap
0 - 1 (0 is default)
```

- **e_ScreenShotMapResolution**:

```text
used for mini map screenshots to define the
resolution of the destination image, 512 default [1-4096]
```

- **e_ScreenShotMapSizeX**:

```text
param for the size in worldunits of area to make map screenshot, see e_ScreenShotMap
defines the x position of the bottom right corner of the screenshot-area on the terrain,
0.0 - 1.0 (1.0 is default)
```

- **e_ScreenShotMapSizeY**:

```text
param for the size in worldunits of area to make map screenshot, see e_ScreenShotMap
defines the x position of the bottom right corner of the screenshot-area on the terrain,
0.0 - 1.0 (1.0 is default)
```

- **e_ScreenShotMinSlices**:

```text
used for all type highres screenshots made by e_ScreenShot to define the amount
of sub-screenshots for the width and height to generate the image,
 the min count
will be automatically raised if not sufficient (per screenshot-based)
```

- **e_ScreenShotQuality**:

```text
used for all type highres screenshots made by e_ScreenShot to define the quality
0=fast, 10 .. 30 .. 100 = extra border in percent (soften seams), negative value to debug
```

- **e_ScreenShotWidth**:

```text
used for all type highres screenshots made by e_ScreenShot to define the
width of the destination image, 1920 default [1-4096]
```

- **e_Shadows**:

```text
Controls rendering of shadows
  0=off,
  1=on,
  2=sun shadows only,
  3=point light shadows only

```

- **e_ShadowsAdaptScale**:

```text
Shadows slope bias for shadowgen
```

- **e_ShadowsAutoBias**:

```text
Attempts to compute an optimal shadow bias, ignoring all other bias settings (Experimental)
  0: Deactivated
  1.0: Good default value
  Other values scale bias relative to default

```

- **e_ShadowsAutoBiasLodScaleWH**:

```text
Comma separated relative bias for cascades
```

- **e_ShadowsBlendCascades**:

```text
Blend between shadow cascades: 0=off, 1=on
```

- **e_ShadowsBlendCascadesVal**:

```text
Size of cascade blend region
```

- **e_ShadowsCacheExtendLastCascade**:

```text
Always render full extent of last cached shadow cascade. 0=disabled, 1=enabled
```

- **e_ShadowsCacheJobs**:

```text
Jobify gathering of shadow casters for the shadow cache
```

- **e_ShadowsCacheMaxNodesPerFrame**:

```text
Maximum number of octree nodes to visit during incremental update. default: 50
```

- **e_ShadowsCacheObjectLod**:

```text
The lod used for rendering objects into the shadow cache. Set to -1 to disable
```

- **e_ShadowsCacheRenderCharacters**:

```text
Render characters into the shadow cache. 0=disabled, 1=enabled
```

- **e_ShadowsCacheUpdate**:

```text
Trigger updates of the shadow cache: 0=no update, 1=one update, 2=continuous updates
```

- **e_ShadowsCascadesCentered**:

```text
Force shadow cascades to be centered 0=disable 1=enable 
```

- **e_ShadowsCascadesDebug**:

```text
0=off, 1=visualize sun shadow cascades on screen
```

- **e_ShadowsCastFadeOutRatioLightsWH**:

```text
Start of the shadow fade out, relative to the shadow view distance.
Please note that the distance is measured from the light radius/aabb.
  1: disable the fade out
  0: smoothest transition
```

- **e_ShadowsCastViewDistRatio**:

```text
View dist ratio for shadow maps casting from objects
```

- **e_ShadowsCastViewDistRatioLights**:

```text
View dist ratio for shadow maps casting for light sources
```

- **e_ShadowsCastViewDistRatioMulInvis**:

```text
Muls the view dist ratio for any objects rendered only to shadows
```

- **e_ShadowsClouds**:

```text
Cloud shadows
```

- **e_ShadowsConstBias**:

```text
Shadows slope bias for shadowgen
```

- **e_ShadowsDebug**:

```text
0=off,
2=visualize shadow maps on the screen,
4=visualize shadow frustums as spheres and cones

```

- **e_ShadowsDoubleSidedBias**:

```text
For local light sources this controlls additional bias for materials that cannot be rendered with the front-face culling
  0: Deactivated
  1.0: Good default value
  Other values scale bias relative to default

```

- **e_ShadowsFrustums**:

```text
Debug
```

- **e_ShadowsLodBiasFixed**:

```text
Simplifies mesh for shadow map generation by X LOD levels
```

- **e_ShadowsLodBiasInvis**:

```text
Simplifies mesh for shadow map generation by X LOD levels, if object is not visible in main frame
```

- **e_ShadowsMaxTexRes**:

```text
Set maximum resolution of shadow map
256(faster), 512(medium), 1024(better quality)
```

- **e_ShadowsMaxTexResSunWH**:

```text
Sets the texture resolution for sun shadow cascades
```

- **e_ShadowsPerObject**:

```text
Per object shadow maps 0=off, 1=on, -1=don't draw object shadows
```

- **e_ShadowsPerObjectResolutionScale**:

```text
Global scale for per object shadow texture resolution
NOTE: individual texture resolution is rounded to next power of two 
```

- **e_ShadowsPoolSize**:

```text
Set size of shadow pool (e_ShadowsPoolSize*e_ShadowsPoolSize)
```

- **e_ShadowsResScale**:

```text
Shadows slope bias for shadowgen
```

- **e_ShadowsSlopeBias**:

```text
Shadows slope bias for shadowgen
```

- **e_ShadowsTessellateCascades**:

```text
Maximum cascade number to render tessellated shadows (0 = no tessellation for sun shadows)
```

- **e_ShadowsTessellateDLights**:

```text
Disable/enable tessellation for local lights shadows
```

- **e_ShadowsUpdateViewDistRatio**:

```text
View dist ratio for shadow maps updating for shadowpool
```

- **e_SkipInFrustumOptimizationWH**:

```text
Skip completely in frustum optimization for n cascades
  0=off,
  1=apply only on 1st shadow cascade,
  2=apply only on 1st and 2nd shadow cascade,
  n=apply only on up to n-th shadow cascade,

```

- **e_SkyBox**:

```text
Activates drawing of skybox and moving cloud layers
```

- **e_SkyQuality**:

```text
Quality of dynamic sky: 1 (very high), 2 (high).
```

- **e_SkyType**:

```text
Type of sky used: 0 (low-spec), 1 (default-spec).
```

- **e_SkyUpdateRate**:

```text
Percentage of a full dynamic sky update calculated per frame (0..100].
```

- **e_Sleep**:

```text
Sleep X in C3DEngine::Draw
```

- **e_StatObjBufferRenderTasks**:

```text
1 - occlusion test on render node level, 2 - occlusion test on render mesh level
```

- **e_StatObjMerge**:

```text
Enable CGF sub-objects meshes merging
```

- **e_StatObjMergeMaxTrisPerDrawCall**:

```text
Skip merging of meshes already having acceptable number of triangles per draw call
```

- **e_StatObjPreload**:

```text
Load level CGF's in efficient way
```

- **e_StatObjStoreMesh**:

```text
Store the mesh if enabled, used for cheat detection purposes (they will be stored by default on the dedi server)
```

- **e_StatObjTessellationMode**:

```text
Set they way pre-tessellated version of meshes is created: 0 = no pre-tessellation, 1 = load from disk, 2 = generate from normal mesh on loading
```

- **e_StatObjValidate**:

```text
Enable CGF mesh validation during loading
```

- **e_StaticInstancing**:

```text
Prepare and cache instancing info (mostly for vegetation)
2 = Show only instanced objects
3 = Show only instanced objects and bounding boxes
4 = Show only non instanced objects

```

- **e_StaticInstancingMinInstNum**:

```text
Minimum number of objects for grouping
```

- **e_StreamAutoMipFactorMax**:

```text
Debug
```

- **e_StreamAutoMipFactorMaxDVD**:

```text
Debug
```

- **e_StreamAutoMipFactorMin**:

```text
Debug
```

- **e_StreamAutoMipFactorSpeedThreshold**:

```text
Debug
```

- **e_StreamCgf**:

```text
Enable streaming of static render meshes
```

- **e_StreamCgfDebug**:

```text
Draw helpers and other debug information about CGF streaming
 1: Draw color coded boxes for objects taking more than e_StreamCgfDebugMinObjSize,
    also shows are the LOD's stored in single CGF or were split into several CGF's
 2: Trace into console every loading and unloading operation
 3: Print list of currently active objects taking more than e_StreamCgfDebugMinObjSize KB 4: Draw a graph showing (un)loaded objects and their importance
```

- **e_StreamCgfDebugFilter**:

```text
Show only items containing specified text
```

- **e_StreamCgfDebugHeatMap**:

```text
Generate and show mesh streaming heat map
 1: Generate heat map for entire level
 2: Show last heat map
```

- **e_StreamCgfDebugMinObjSize**:

```text
Threshold for objects debugging in KB
```

- **e_StreamCgfFastUpdateMaxDistance**:

```text
Update streaming priorities for near objects every second frame
```

- **e_StreamCgfGridUpdateDistance**:

```text
Update streaming priorities when camera moves more than this value
```

- **e_StreamCgfMaxNewTasksPerUpdate**:

```text
Maximum number of files requested from streaming system per update
```

- **e_StreamCgfMaxTasksInProgress**:

```text
Maximum number of files simultaneously requested from streaming system
```

- **e_StreamCgfPoolSize**:

```text
Render mesh cache size in MB
```

- **e_StreamCgfUpdatePerNodeDistance**:

```text
Use node distance as entity distance for far nodex 
```

- **e_StreamCgfVisObjPriority**:

```text
Priority boost for visible objects
0 - visible objects has no priority over invisible objects, camera direction does not affect streaming
1 - visible objects has highest priority, in case of trashing will produce even more trashing
```

- **e_StreamInstances**:

```text
Enable streaming of static world instances (usually vegetation and decals, not used in editor)
```

- **e_StreamInstancesDistRatio**:

```text
Controls streaming distance
```

- **e_StreamInstancesMaxTasks**:

```text
Maximum allowed number of file streaming requests for instances streaming (one request reads single octree node)
```

- **e_StreamInstancesMinLoadedNodes**:

```text
Minimum number of octree-nodes to keep in memory
```

- **e_StreamPredictionAhead**:

```text
Use preducted camera position for streaming priority updates
```

- **e_StreamPredictionAheadDebug**:

```text
Draw ball at predicted position
```

- **e_StreamPredictionAlwaysIncludeOutside**:

```text
Always include outside octrees in streaming
```

- **e_StreamPredictionBoxRadius**:

```text
Radius of stream prediction box
```

- **e_StreamPredictionDistanceFar**:

```text
Prediction distance for streaming, affects far objects
```

- **e_StreamPredictionDistanceNear**:

```text
Prediction distance for streaming, affets LOD of objects
```

- **e_StreamPredictionMaxVisAreaRecursion**:

```text
Maximum number visareas and portals to traverse.
```

- **e_StreamPredictionMinFarZoneDistance**:

```text
Debug
```

- **e_StreamPredictionMinReportDistance**:

```text
Debug
```

- **e_StreamPredictionTexelDensity**:

```text
Use mesh texture mapping density info for textures streaming
```

- **e_StreamPredictionUpdateFarTimeSlice**:

```text
Maximum amount of time to spend for scene streaming priority update of far objects in milliseconds
```

- **e_StreamSaveStartupResultsIntoXML**:

```text
Save basic information about streaming performance on level start into XML
```

- **e_Sun**:

```text
Activates sun light source
```

- **e_SunAngleSnapDot**:

```text
Sun dir snap control
```

- **e_SunAngleSnapMinLodWH**:

```text
Minimum shadow cascade (LOD) to apply sun dir snapping.
```

- **e_SunAngleSnapSec**:

```text
Sun dir snap control
```

- **e_SunElevationClamp**:

```text
Sets minimum elevation of the Sun for shadow map genration.
```

- **e_Terrain**:

```text
Activates drawing of terrain ground
```

- **e_TerrainAutoGenerateBaseTexture**:

```text
Instead of manually painting the base texture - just build it automatically based on terrain materials info painted
```

- **e_TerrainAutoGenerateBaseTextureTiling**:

```text
Controls tiling of baked diffuse textures
```

- **e_TerrainBBoxes**:

```text
Show terrain nodes bboxes
```

- **e_TerrainBlendingDebug**:

```text
Options:
0 = Only blend objects that have FOB_ALLOW_TERRAIN_LAYER_BLEND set (default)
1 = Disable blending on all objects
2 = Enable blending on all objects
```

- **e_TerrainDeformations**:

```text
Allows in-game terrain surface deformations
```

- **e_TerrainDetailMaterials**:

```text
Activates drawing of detail materials on terrain ground
```

- **e_TerrainDetailMaterialsDebug**:

```text
Shows number of materials in use per terrain sector
```

- **e_TerrainDetailMaterialsViewDistXY**:

```text
Max view distance of terrain XY materials
```

- **e_TerrainDetailMaterialsViewDistZ**:

```text
Max view distance of terrain Z materials
```

- **e_TerrainDetailMaterialsWeightedBlending**:

```text
Enable advanced weighted blending between terrain detail materials
```

- **e_TerrainDrawThisSectorOnly**:

```text
1 - render only sector where camera is and objects registered in sector 00
2 - render only sector where camera is
```

- **e_TerrainEditPostponeTexturesUpdate**:

```text
Controls the postpone of terrain normal and elevation textures update during terrain sculpting in the editor
```

- **e_TerrainIntegrateObjectsMaxHeight**:

```text
Take only trianglses close to terrain for objects integration
```

- **e_TerrainIntegrateObjectsMaxVertices**:

```text
Preallocate specified number of vertices to be used for objects integration into terrain (per terrain sector)
0 - disable the feature completelly
```

- **e_TerrainLodDistanceRatio**:

```text
Controls heightmap LOD by comparing sector distance with a sector size
```

- **e_TerrainLodErrorRatio**:

```text
Controls heightmap LOD by comparing sector distance with the maximum elevation difference between the sector and its childs
```

- **e_TerrainMeshInstancingMinLod**:

```text
Mesh instancing is used for distant terrain sectors and for shadow map generation
```

- **e_TerrainMeshInstancingShadowBias**:

```text
During shadow map generation render distant terrain sectors little lower for less problems with terrain self-shadowing
```

- **e_TerrainMeshInstancingShadowLodRatio**:

```text
Smaller values produce less draw calls and less polygons for terrain shadow map generation
```

- **e_TerrainOcclusionCulling**:

```text
heightmap occlusion culling with time coherency 0=off, 1=on
```

- **e_TerrainOcclusionCullingDebug**:

```text
Draw sphere on every terrain height sample
```

- **e_TerrainOcclusionCullingMaxDist**:

```text
Max length of ray (for version 1)
```

- **e_TerrainOcclusionCullingMaxSteps**:

```text
Max number of tests per ray (for version 0)
```

- **e_TerrainOcclusionCullingPrecision**:

```text
Density of rays
```

- **e_TerrainOcclusionCullingPrecisionDistRatio**:

```text
Controls density of rays depending on distance to the object
```

- **e_TerrainOcclusionCullingStepSize**:

```text
Initial size of single step (in heightmap units)
```

- **e_TerrainOcclusionCullingStepSizeDelta**:

```text
Step size scale on every next step (for version 1)
```

- **e_TerrainTextureLodRatio**:

```text
Adjust terrain base texture resolution on distance
```

- **e_TerrainTextureStreamingDebug**:

```text
Debug
```

- **e_TerrainTextureStreamingPoolItemsNum**:

```text
Specifies number of textures in terrain base texture streaming pool
```

- **e_Tessellation**:

```text
HW geometry tessellation  0 = not allowed, 1 = allowed
```

- **e_TessellationMaxDistance**:

```text
Maximum distance from camera in meters to allow tessellation, also affects distance-based displacement fadeout
```

- **e_TimeOfDay**:

```text
Current Time of Day
```

- **e_TimeOfDayDebug**:

```text
Display time of day current values on screen
```

- **e_TimeOfDaySpeed**:

```text
Time of Day change speed
```

- **e_Vegetation**:

```text
Activates drawing of distributed objects like trees
```

- **e_VegetationBending**:

```text
Enable vegetation bending (does not affect merged grass)
```

- **e_VegetationBillboards**:

```text
Allow replacing distant vegetation with billboards
Billboard textures must be prepared by ed_GenerateBillboardTextures command in the editor
```

- **e_VegetationBoneInfo**:

```text
Logs information about number of bones in each vegetation object loaded
```

- **e_VegetationMinSize**:

```text
Minimal size of static object, smaller objects will be not rendered
```

- **e_VegetationUseTerrainColor**:

```text
Allow blend with terrain color for vegetations
```

- **e_VegetationUseTerrainColorDistance**:

```text
Controls distance of fading into terrain color
 0 = Use 30% of maximum view distance of each vegetation instance (old default way)
<0 = Maximum view distance value is calculated using vegetation mesh size (non scaled CGF size) and then multiplied by this cvar
>0 = This value used directly as fading distance for all vegetations
```

- **e_ViewDistCompMaxSize**:

```text
Affects max view distance for big objects, small number will render less objects
```

- **e_ViewDistMin**:

```text
Min distance on what far objects will be culled out
```

- **e_ViewDistRatio**:

```text
View distance ratio for objects
```

- **e_ViewDistRatioCustom**:

```text
View distance ratio for special marked objects (Players,AI,Vehicles)
```

- **e_ViewDistRatioDetail**:

```text
View distance ratio for detail objects
```

- **e_ViewDistRatioInteriorReflexLights**:

```text
View distance ratio for interior reflex lights. Light must be of area type and have 'affects this area only' enabled to be classified as interior reflex light.
```

- **e_ViewDistRatioLargeEnvCubemap**:

```text
View distance ratio for env cubemaps, details in CLightEntity::GetMaxViewDistEnvCubemapsWH
```

- **e_ViewDistRatioLights**:

```text
View distance ratio for generic light sources (excluding env cubemaps and reflex lights)
```

- **e_ViewDistRatioModifierGameDecals**:

```text
View distance ratio for dynamically generated decalsThis will be applied on top of e_ViewDistRatio
```

- **e_ViewDistRatioPortals**:

```text
View distance ratio for portals
```

- **e_ViewDistRatioSmallEnvCubemap**:

```text
View distance ratio for env cubemaps, details in CLightEntity::GetMaxViewDistEnvCubemapsWH
```

- **e_ViewDistRatioVegetation**:

```text
View distance ratio for vegetation
```

- **e_VolObjShadowStrength**:

```text
Self shadow intensity of volume objects [0..1].
```

- **e_VolumetricFog**:

```text
Activates volumetric fog
```

- **e_WaterOcean**:

```text
Activates drawing of ocean. 
1: use usual rendering path
2: use fast rendering path with merged fog
```

- **e_WaterOceanBottom**:

```text
Activates drawing bottom of ocean
```

- **e_WaterOceanFFT**:

```text
Activates fft based ocean
```

- **e_WaterRipplesDebug**:

```text
Draw water hits that affect water ripple simulation
```

- **e_WaterTessellationAmount**:

```text
Set tessellation amount
```

- **e_WaterTessellationAmountX**:

```text
Set tessellation on x axis - 0 means not used
```

- **e_WaterTessellationAmountY**:

```text
Set tessellation on y axis - 0 means not used
```

- **e_WaterTessellationSwathWidth**:

```text
Set the swath width for the boustrophedonic mesh stripping
```

- **e_WaterVolumes**:

```text
Activates drawing of water volumes
1: use usual rendering path
2: use fast rendering path with merged fog
```

- **e_WaterWaves**:

```text
Activates drawing of water waves
```

- **e_WaterWavesTessellationAmount**:

```text
Sets water waves tessellation amount
```

- **e_Wind**:

```text
Enable global wind calculations, affects vegetations bending animations and VertexAnim vertex modifier
```

- **e_WindAreas**:

```text
Enable wind areas
```

- **e_WindBendingAreaStrength**:

```text
Minimal size of static object, smaller objects will be not rendered
```

- **e_WindBendingDistRatio**:

```text
Wind cutoff distance for bending (linearly attentuated to that distance)
```

- **e_WindBendingStrength**:

```text
Minimal size of static object, smaller objects will be not rendered
```

- **e_levelStartupFrameDelay**:

```text
Set to number of frames to wait after level load before beginning fps measuring
```

- **e_levelStartupFrameNum**:

```text
Set to number of frames to capture for avg fps computation
```

- **e_surfaceTypesFile**:

```text
Location in the game folder of the list of surface types
```

- **e_svoDVR**:

```text
Activate Direct Volume Rendering of SVO (trace and output results to the screen)
```

- **e_svoDVR_DistRatio**:

```text
Controls voxels LOD ratio for streaming and tracing
```

- **e_svoDebug**:

```text
6 = Visualize voxels, different colors shows different LOD
7 = Visualize postponed nodes and not ready meshes
```

- **e_svoDispatchX**:

```text
Controls parameters of SVO compute shaders execution
```

- **e_svoDispatchY**:

```text
Controls parameters of SVO compute shaders execution
```

- **e_svoEnabled**:

```text
Activates SVO subsystem
```

- **e_svoLoadTree**:

```text
Start SVO generation or loading from disk
```

- **e_svoMaxAreaMeshSizeKB**:

```text
Maximum number of KB per area allowed to allocate for voxelization mesh
```

- **e_svoMaxAreaSize**:

```text
Maximum SVO node size for detailed voxelization
```

- **e_svoMaxBrickUpdates**:

```text
Limits the number of bricks uploaded from CPU to GPU per frame
```

- **e_svoMaxBricksOnCPU**:

```text
Maximum number of voxel bricks allowed to cache on CPU side
```

- **e_svoMaxNodeSize**:

```text
Maximum SVO node size for voxelization (bigger nodes stays empty)
```

- **e_svoMaxStreamRequests**:

```text
Limits the number of brick streaming or building requests per frame
```

- **e_svoMinNodeSize**:

```text
Smallest SVO node allowed to create during level voxelization
Smaller values helps getting more detailed lighting but may work slower and use more memory in pool
It may be necessary to increase VoxelPoolResolution in order to prevent running out of voxel pool
```

- **e_svoRender**:

```text
Enables CPU side (every frame) SVO traversing and update
```

- **e_svoRootless**:

```text
Limits the area covered by SVO. Limits number of tree levels and speedup the tracing.
```

- **e_svoStreamVoxels**:

```text
Enable steaming of voxel data from disk instead of run-time voxelization
0 - disabled, 1 - stream only in launcher/game, 2 - both editor and game
If enabled, level export will include voxels pre-computation process which may take up to one hour for big complex levels
```

- **e_svoTI_Active**:

```text
Activates voxel GI for the level
```

- **e_svoTI_AnalyticalGI**:

```text
Completely replace voxel tracing with analytical shapes tracing
Light bouncing is supported only in integration mode 0
```

- **e_svoTI_AnalyticalOccluders**:

```text
Enable basic support for hand-placed occlusion shapes like box, cylinder and capsule
This also enables indirect shadows from characters (shadow capsules are defined in .chrparams file)
```

- **e_svoTI_AnalyticalOccludersRange**:

```text
Shadow length
```

- **e_svoTI_AnalyticalOccludersSoftness**:

```text
Shadow softness
```

- **e_svoTI_Apply**:

```text
Allows to temporary deactivate GI for debug purposes
```

- **e_svoTI_AsyncCompute**:

```text
Use asynchronous compute for SVO updates
```

- **e_svoTI_ConeMaxLength**:

```text
Maximum length of the tracing rays (in meters)
Shorter rays work faster
```

- **e_svoTI_ConstantAmbientDebug**:

```text
Replace GI computations with constant ambient color for GI debugging
```

- **e_svoTI_DiffuseAmplifier**:

```text
Adjusts the output brightness of cone traced indirect diffuse component
```

- **e_svoTI_DiffuseConeWidth**:

```text
Controls wideness of diffuse cones
Wider cones work faster but may cause over-occlusion and more light leaking
Narrow cones are slower and may bring more noise
```

- **e_svoTI_Diffuse_Cache**:

```text
Pre-bake lighting in SVO and use it instead of cone tracing
```

- **e_svoTI_Diffuse_Spr**:

```text
Adjusts the kernel of diffuse tracing; big value will merge all cones into single vector
```

- **e_svoTI_DualTracing**:

```text
Double the number of rays per fragment
1 = Always ON; 2 = Active only in multi-GPU mode
```

- **e_svoTI_DynLights**:

```text
Allow single real-time indirect bounce from marked dynamic lights
```

- **e_svoTI_EmissiveMultiplier**:

```text
Modulates emissive materials light injection
Allows controlling emission separately from post process glow
```

- **e_svoTI_ForceGIForAllLights**:

```text
Force dynamic GI for all lights except ambient lights and sun
This allows to quickly get dynamic GI working in unprepared scenes
```

- **e_svoTI_GsmCascadeLod**:

```text
Sun shadow cascade LOD for RSM GI
```

- **e_svoTI_HalfresKernelPrimary**:

```text
Use less rays for first bounce and AO
This gives faster frame rate and sharper lighting but may increase noise and GI aliasing
```

- **e_svoTI_HalfresKernelSecondary**:

```text
Use less rays for secondary bounce
This gives faster update of cached lighting but may reduce the precision of secondary bounce
Difference is only visible with number of bounces more than 1
```

- **e_svoTI_HighGlossOcclusion**:

```text
Normally specular contribution of env probes is corrected by diffuse GI
This parameter controls amount of correction (usually darkening) for very glossy and reflective surfaces
```

- **e_svoTI_IndoorFadeInTime**:

```text
Time in seconds to fully apply the indoor multipliers when entering interior
```

- **e_svoTI_IndoorFadeOutTime**:

```text
Time in seconds to fade out the multipliers to unity when exiting interior
```

- **e_svoTI_IndoorSkyMultiplier**:

```text
Injection multiplier for sky when camera is indoors
```

- **e_svoTI_IndoorSunMultiplier**:

```text
Injection multiplier for sun when camera is indoors
```

- **e_svoTI_InjectionMultiplier**:

```text
Modulates light injection (controls the intensity of bounce light)
```

- **e_svoTI_IntegrationMode**:

```text
GI computations may be used in several ways:
0 = Basic diffuse GI mode
      GI completely replaces default diffuse ambient lighting
      Single light bounce (fully real-time) is supported for sun and projectors (use '_TI_DYN' in light name)
      Default ambient specular (usually coming from env probes) is modulated by intensity of diffuse GI
      This mode takes less memory (only opacity is voxelized) and works acceptable on consoles
      Optionally this mode may be converted into low cost AO-only mode: set InjectionMultiplier=0 and UseLightProbes=true
1 = Advanced diffuse GI mode (experimental)
      GI completely replaces default diffuse ambient lighting
      Two indirect light bounces are supported for sun and semi-static lights (use '_TI' in light name)
      Single fully dynamic light bounce is supported for projectors (use '_TI_DYN' in light name)
      Default ambient specular is modulated by intensity of diffuse GI
      Please perform scene re-voxelization if IntegrationMode was changed (use UpdateGeometry)
2 = Full GI mode (very experimental)
      Both ambient diffuse and ambient specular lighting is computed by voxel cone tracing
      This mode works fine only on good modern PC
```

- **e_svoTI_LightingUpdateDistancePriorityBonus**:

```text
Update blocks that are closer to the camera more often. The unit is frames.
```

- **e_svoTI_LightingUpdateInViewPriorityBonus**:

```text
Update blocks that are in the camera view frustum more often. The unit is frames.
```

- **e_svoTI_LowSpecMode**:

```text
Set low spec mode
Values greater than 0 scale down internal render targets and simplify shaders
If set to -2 it will be initialized by value specified in sys_spec_Shading.cfg (on level load or on spec change)
```

- **e_svoTI_MaxSyncUpdateTime**:

```text
Limit the time (in seconds) allowed for synchronous voxelization (usually happens on level start)
```

- **e_svoTI_MinLightEffectiveRadius**:

```text
Minimal effective radius of a light to be registered by SVOTI
```

- **e_svoTI_MinReflectance**:

```text
Controls light bouncing from very dark surfaces (and from surfaces missing in RSM)
```

- **e_svoTI_MinVoxelOpacity**:

```text
Voxelize only geometry with opacity higher than specified value
```

- **e_svoTI_NumStreamingThreads**:

```text
Set number of voxelization data streaming threads
```

- **e_svoTI_NumberOfBounces**:

```text
Maximum number of indirect bounces (from 0 to 2)
First indirect bounce is completely dynamic
The rest of the bounces are cached in SVO and mostly static
```

- **e_svoTI_ObjectsLod**:

```text
Mesh LOD used for voxelization
Changes are visible only after re-voxelization (click <Update geometry> or restart)
```

- **e_svoTI_ObjectsMaxViewDistance**:

```text
Voxelize only objects with maximum view distance greater than this value (only big and important objects)
If set to 0 - disable this check and also disable skipping of too small triangles
Changes are visible after full re-voxelization (click <Update geometry> or restart)
```

- **e_svoTI_ObjectsMaxViewDistanceScale**:

```text
Scales e_svoTI_ObjectsMaxViewDistance, so it can be different on consoles.
```

- **e_svoTI_PointLightsBias**:

```text
Modulates non shadowed injection from point light (helps simulating multiple bounces)
```

- **e_svoTI_PointLightsMaxDistance**:

```text
Maximum distance at which point lights produce light bounces
```

- **e_svoTI_PointLightsMultiplier**:

```text
Modulates point light injection (controls the intensity of bounce light)
```

- **e_svoTI_PortalsDeform**:

```text
Adjusts the sky light tracing kernel so that more rays are cast in direction of portals
This helps getting more detailed sky light indoor but may cause distortion of all other indirect lighting
```

- **e_svoTI_PortalsInject**:

```text
Inject portal lighting into SVO
This helps getting better indoor sky light even with single bounce
```

- **e_svoTI_PropagationBooster**:

```text
Controls fading of the light during in-SVO propagation
Values greater than 1 help propagating light further but may bring more light leaking artifacts
```

- **e_svoTI_RT_Active**:

```text
Activates mesh ray tracing for reflections
It is necessary to re-voxelize the scene after activation
```

- **e_svoTI_RT_MaxDistCam**:

```text
Maximum camera distance for mesh tracing
```

- **e_svoTI_RT_MaxDistRay**:

```text
Maximum ray distance for mesh tracing
```

- **e_svoTI_RT_MaxTexRes**:

```text
Maximum texture size for GPU tracing
```

- **e_svoTI_RT_MaxTrisPerVoxel**:

```text
Maximum number of triangles registered per voxel
```

- **e_svoTI_RT_MinGloss**:

```text
Minimum surface glossiness for mesh tracing
```

- **e_svoTI_RT_MinRefl**:

```text
Minimum surface reflectance for mesh tracing
```

- **e_svoTI_RT_SafetyBorder**:

```text
Extend the area of voxel to triangle intersection. This makes sure the ray finds all necessary triangles
```

- **e_svoTI_Reflect_Vox_Max**:

```text
Controls amount of voxels allowed to refresh every frame
```

- **e_svoTI_Reflect_Vox_Max_Overhead**:

```text
Controls amount of voxels allowed to refresh every frame
```

- **e_svoTI_ResScaleAir**:

```text
Defines resolution of GI cone-tracing targets; 2=half res
```

- **e_svoTI_ResScaleBase**:

```text
Defines resolution of GI cone-tracing targets; 2=half res
```

- **e_svoTI_ResScaleSpecular**:

```text
Defines resolution of specular targets; 2=half res
```

- **e_svoTI_RsmConeMaxLength**:

```text
Maximum length of the RSM rays (in meters)
Shorter rays work faster
```

- **e_svoTI_RsmConeMaxLengthFOVMaxMul**:

```text
Max multiplier of e_svoTI_RsmConeMaxLength for 10 deg FOV.
```

- **e_svoTI_RsmConeMaxLengthFOVMulEnabled**:

```text
Enables e_svoTI_RsmConeMaxLengthFOVMul
```

- **e_svoTI_SSAOAmount**:

```text
Allows to scale down SSAO (SSDO) amount and radius when GI is active
```

- **e_svoTI_SSDepthTrace**:

```text
Use SS depth tracing together with voxel tracing
```

- **e_svoTI_Saturation**:

```text
Controls color saturation of propagated light
```

- **e_svoTI_ShadowsFromHeightmap**:

```text
Include terrain heightmap (whole level) into ray-traced sun shadows
```

- **e_svoTI_ShadowsFromSun**:

```text
Calculate sun shadows using SVO ray tracing
Normally supposed to be used in combination with normal shadow maps and screen space shadows
```

- **e_svoTI_ShadowsSoftness**:

```text
Controls softness of ray traced shadows
```

- **e_svoTI_SkipNonGILights**:

```text
Disable all lights except sun and lights marked to be used for GI
This mode ignores all local environment probes and ambient lights
```

- **e_svoTI_SkyColorMultiplier**:

```text
Controls amount of the sky light
This value may be multiplied with TOD fog color
```

- **e_svoTI_SpecularAmplifier**:

```text
Adjusts the output brightness of specular component
```

- **e_svoTI_SpecularFromDiffuse**:

```text
Compute simplified specular lighting using intermediate results of diffuse SVO tracing
In this mode environment probes are not used. It works fine for materials with low smoothness but works wrong for mirrors
```

- **e_svoTI_Specular_Sev**:

```text
Controls severity of specular cones; this value limits the material glossiness
```

- **e_svoTI_SyncUpdateLighting**:

```text
Set to number of frames you want full radiance update to happen. This cvar is automaticly reset to 0.
```

- **e_svoTI_TemporalFilteringBase**:

```text
Controls amount of temporal smoothing
0 = less noise and aliasing, 1 = less ghosting
```

- **e_svoTI_TraceVoxels**:

```text
Include voxels into tracing
Allows to exclude voxel tracing if only proxies are needed
```

- **e_svoTI_TranslucentBrightness**:

```text
Adjusts the brightness of semi translucent surfaces
Affects mostly vegetation leaves and grass
Setting this parameter to zero disables custom GI processing for translucent surfaces
```

- **e_svoTI_Troposphere_Active**:

```text
Activates SVO atmospheric effects (completely replaces default fog computations)
It is necessary to re-voxelize the scene after activation
```

- **e_svoTI_Troposphere_Brightness**:

```text
Controls intensity of atmospheric effects.
```

- **e_svoTI_Troposphere_CloudGenTurb_Freq**:

```text
CloudsGen magic number
```

- **e_svoTI_Troposphere_CloudGenTurb_Scale**:

```text
CloudsGen magic number
```

- **e_svoTI_Troposphere_CloudGen_Freq**:

```text
CloudsGen magic number
```

- **e_svoTI_Troposphere_CloudGen_FreqStep**:

```text
CloudsGen magic number
```

- **e_svoTI_Troposphere_CloudGen_Height**:

```text
Maximum height for atmospheric effects
```

- **e_svoTI_Troposphere_CloudGen_Scale**:

```text
CloudsGen magic number
```

- **e_svoTI_Troposphere_Density**:

```text
Density of the atmosphere
```

- **e_svoTI_Troposphere_Ground_Height**:

```text
Minimum height for atmospheric effects
```

- **e_svoTI_Troposphere_Layer0_Dens**:

```text
Layered fog Density
```

- **e_svoTI_Troposphere_Layer0_Height**:

```text
Layered fog level
```

- **e_svoTI_Troposphere_Layer0_Rand**:

```text
Layered fog randomness
```

- **e_svoTI_Troposphere_Layer1_Dens**:

```text
Layered fog Density
```

- **e_svoTI_Troposphere_Layer1_Height**:

```text
Layered fog level
```

- **e_svoTI_Troposphere_Layer1_Rand**:

```text
Layered fog randomness
```

- **e_svoTI_Troposphere_Snow_Height**:

```text
Snow on objects height
```

- **e_svoTI_Troposphere_Subdivide**:

```text
Build detailed SVO also in areas not filled by geometry
```

- **e_svoTI_UpdateGeometry**:

```text
When switched from OFF to ON - forces single complete re-voxelization of the scene
This is needed if terrain, brushes or vegetation were modified
```

- **e_svoTI_UpdateLighting**:

```text
When switched from OFF to ON - forces single full update of cached lighting
If stays enabled - automatically updates lighting if some light source was modified
```

- **e_svoTI_UseLightProbes**:

```text
If enabled - environment probes lighting is multiplied with GI
If disabled - diffuse contribution of environment probes is replaced with GI
In modes 1-2 it enables usage of global env probe for sky light instead of TOD fog color
```

- **e_svoTI_VegetationMaxOpacity**:

```text
Limits the opacity of vegetation voxels
```

- **e_svoTI_VoxelOpacityMultiplier**:

```text
Allows making voxels more opaque, helps reducing light leaks
```

- **e_svoTI_VoxelizationLODRatio**:

```text
Controls distance LOD ratio for voxelization
Bigger value helps getting more detailed lighting at distance but may work slower and will use more memory in pool
It may be necessary to increase VoxelPoolResolution parameter in order to prevent running out of voxel pool
```

- **e_svoTI_VoxelizationMapBorder**:

```text
Skip voxelization of geometry close to the edges of the map
In case of offline voxelization this will speedup the export process and reduce data size on disk.
```

- **e_svoTI_VoxelizationPostpone**:

```text
1 - Postpone voxelization until all needed meshes are streamed in
2 - Postpone voxelization and request streaming of missing meshes
Use e_svoDebug = 7 to visualize postponed nodes and not ready meshes
```

- **e_svoTI_VoxelizeHiddenObjects**:

```text
0 = Skip hidden objects during voxelization
```

- **e_svoTI_VoxelizeUnderTerrain**:

```text
0 = Skip underground triangles during voxelization
```

- **e_svoVoxDistRatio**:

```text
Limits the distance where real-time GPU voxelization used
```

- **e_svoVoxGenRes**:

```text
GPU voxelization dummy render target resolution
```

- **e_svoVoxNodeRatio**:

```text
Limits the real-time GPU voxelization only to leaf SVO nodes
```

- **e_svoVoxelPoolResolution**:

```text
Size of volume textures (x,y,z dimensions) used for SVO data storage
Valid values are 128 and 256
Engine has to be restarted if this value was modified
Too big pool size may cause long stalls when some GI parameter was changed
```

- **es_AreaManagerUpdateBudget**:

```text
Entity updates per frame in area manager
```

- **es_CharZOffsetSpeed**:

```text
sets the character Z-offset change speed (in m/s), used for IK
```

- **es_ClearPoolBookmarksOnLayerUnload**:

```text
Clear pool bookmarks when a layer is unloaded (saves memory and makes smaller saves)
```

- **es_DebrisLifetimeScale**:

```text
Usage: es_DebrisLifetimeScale 1.0
```

- **es_DebugEntityUsage**:

```text
Draws information to the screen to show how entities are being used, per class, including total, active and hidden counts and memory usage
Usage: es_DebugEntityUsage update_rate
update_rate - Time in ms to refresh memory usage calculation or 0 to disable
```

- **es_DebugEntityUsageFilter**:

```text
Filter entity usage debugging to classes which have this string in their name
```

- **es_DebugEvents**:

```text
Enables logging of entity events
```

- **es_DebugInvalidRemoveEntity**:

```text
Enable debug checks for invalid RemoveEntity calls.

```

- **es_DebugPool**:

```text
Enable debug drawing of entity pools
```

- **es_DebugPoolFilter**:

```text
Filter entity pool debugging for just this pool and draw more info about it
```

- **es_DebugTimers**:

```text
This is for profiling and debugging (for game coders and level designer)
By enabling this you get a lot of console printouts that show all entities that receive OnTimer
events - it's good to minimize the call count. Certain entities might require this feature and
using less active entities can often be defined by the level designer.
Usage: es_DebugTimers 0/1
```

- **es_DisableTriggers**:

```text
Disable enter/leave events for proximity and area triggers
```

- **es_DrawAreaDebug**:

```text
Enables debug drawing of Areas, set 2 for log details
```

- **es_DrawAreaGrid**:

```text
Enables drawing of Area Grid
```

- **es_DrawAreas**:

```text
Enables drawing of Areas
```

- **es_DrawAudioProxyZRay**:

```text
Enables drawing of Z ray on check for Z visibility
```

- **es_DrawProximityTriggers**:

```text
Shows Proximity Triggers.
Usage: es_DrawProximityTriggers [0-255].  The parameter sets the transparency (alpha) level.
Value 1 will be changed to 70.
Default is 0 (off)

```

- **es_EnablePoolUse**:

```text
Force toggle the use of entity pools on/off.
Usage: es_EnablePoolUse 1
Default is -1, or normal behavior. 0 forces system off. 1 forces system on.
```

- **es_EntityUpdatePosDelta**:

```text
Indicates the position delta by which an entity must move before the AreaManager updates position relevant data.
Default: 0.1 (10 cm)
```

- **es_ExcludeUnusedNames**:

```text
Don't use names in entities that don't require them (currently prefabs)
```

- **es_FarPhysRagdollTimeout**:

```text
Timeout for faraway physics forceful deactivation
```

- **es_FarPhysTimeout**:

```text
Timeout for faraway physics forceful deactivation
```

- **es_HitCharacters**:

```text
specifies whether alive characters are affected by bullet hits (0 or 1)
```

- **es_HitDeadBodies**:

```text
specifies whether dead bodies are affected by bullet hits (0 or 1)
```

- **es_ImpulseScale**:

```text
Usage: es_ImpulseScale 0.0
```

- **es_LayerDebugInfo**:

```text
Render debug info on active layers: 
0 - inactive 
1 - active brush layers 
2 - all layer info 
3 - render memory stats
4 - layer pak stats
5 - layer activation
```

- **es_LayerSaveLoadSerialization**:

```text
Switches layer entity serialization: 
0 - serialize all 
1 - automatically ignore entities on disabled layers 
2 - only ignore entities on non-save layers.
```

- **es_MaxImpulseAdjMass**:

```text
Usage: es_MaxImpulseAdjMass 2000.0
```

- **es_MaxPhysDist**:

```text
Physical entities farther from the camera than this are forcefully deactivated
```

- **es_MaxPhysDistCloth**:

```text
Cloth entities farther from the camera than this are forcefully deactivated
```

- **es_MaxPhysDistInvisible**:

```text
Invisible physical entities farther from the camera than this are forcefully deactivated
```

- **es_MinImpulseVel**:

```text
Usage: es_MinImpulseVel 0.0
```

- **es_ParallelComponentUpdate**:

```text
Enable parallel component update.

```

- **es_ParallelEntityUpdate**:

```text
Enable parallel entity update.

```

- **es_PerInstanceStreaming**:

```text
Enable entity per instance streaming.

```

- **es_PerInstanceStreamingClassSpawnBudget**:

```text
How many entities can be spawned in a frame per streamable class.
The same budget is used for despawning.
```

- **es_PerInstanceStreamingDebug**:

```text
1 - Show debug.

```

- **es_PerInstanceStreamingDespawnHysteresis**:

```text
Relative to spawn distance.

```

- **es_PerInstanceStreamingForceRemove**:

```text
Force remove all unobserver entities (without waiting for AI).

```

- **es_SaveLoadUseLUANoSaveFlag**:

```text
Save&Load optimization : use lua flag to not serialize entities, for example rigid bodies.
```

- **es_SortUpdatesByClass**:

```text
Sort entity updates by class (possible optimization)
```

- **es_SplashThreshold**:

```text
minimum instantaneous water resistance that is detected as a splashUsage: es_SplashThreshold 200.0
```

- **es_SplashTimeout**:

```text
minimum time interval between consecutive splashesUsage: es_SplashTimeout 3.0
```

- **es_TestPoolSignatures**:

```text
Enable signature testing on entity classes the first time they're prepared from an entity pool
```

- **es_UpdateAI**:

```text
Toggles updating of AI entities.
Usage: es_UpdateAI [0/1]
Default is 1 (on). Set to 0 to prevent AI entities from updating.
```

- **es_UpdateCollision**:

```text
Toggles updating of entity collisions.
Usage: es_UpdateCollision [0/1]
Default is 1 (on). Set to 0 to disable entity collision updating.
```

- **es_UpdateCollisionScript**:

```text
Usage: es_UpdateCollisionScript [0/1]
Default is 1 (on).
```

- **es_UpdateContainer**:

```text
Usage: es_UpdateContainer [0/1]
Default is 1 (on).
```

- **es_UpdateEntities**:

```text
Toggles entity updating.
Usage: es_UpdateEntities [0/1]
Default is 1 (on). Set to 0 to prevent all entities from updating.
```

- **es_UpdatePhysics**:

```text
Toggles updating of entity physics.
Usage: es_UpdatePhysics [0/1]
Default is 1 (on). Set to 0 to prevent entity physics from updating.
```

- **es_UpdateScript**:

```text
Usage: es_UpdateScript [0/1]
Default is 1 (on).
```

- **es_UpdateTimer**:

```text
Usage: es_UpdateTimer [0/1]
Default is 1 (on).
```

- **es_UsePhysVisibilityChecks**:

```text
Activates physics quality degradation and forceful sleeping for invisible and faraway entities
```

- **es_VisCheckForUpdate**:

```text
Usage: es_VisCheckForUpdate [0/1]
Default is 1 (on).
```

- **es_activateEntity**:

```text
Activates an entity
```

- **es_bboxes**:

```text
Toggles entity bounding boxes.
Usage: es_bboxes [0/1]
Default is 0 (off). Set to 1 to display bounding boxes.
```

- **es_deactivateEntity**:

```text
Deactivates an entity
```

- **es_debug**:

```text
Enable entity debugging info
Usage: es_debug [0/1]
Default is 0 (on).
```

- **es_debugDrawEntityIDs**:

```text
Displays the EntityId of all entities.
Default is 0 (off), any other number enables it.
Note: es_debug must be set to 1 also (or else the EntityId won't be displayed)
```

- **es_debugEntityLifetime**:

```text
Debug entities creation and deletion time
```

- **es_debug_not_seen_timeout**:

```text
if true, log messages when entities undergo not seen timeout
```

- **es_enable_full_script_save**:

```text
Enable (experimental) full script save functionality
```

- **es_helpers**:

```text
Toggles helpers.
Usage: es_helpers [0/1]
Default is 0 (off). Set to 1 to display entity helpers.
```

- **es_log_collisions**:

```text
Enables collision events logging
```

- **es_not_seen_timeout**:

```text
number of seconds after which to cleanup temporary render buffers in entity
```

- **es_profileentities**:

```text
Usage: es_profileentities 1,2,3
Default is 0 (off).
```

- **es_removeEntity**:

```text
Removes an entity
```

- **es_updateType**:

```text
Defines how we update type for the entities
```

- **fg_SystemEnable**:

```text
Toggles FlowGraph System Updates.
Usage: fg_SystemEnable [0/1]
Default is 1 (on).
```

- **fg_abortOnLoadError**:

```text
Abort on load error of flowgraphs
2:abort, 1:dialog, 0:log only
```

- **fg_debugmodules**:

```text
Display Module debug info.
0=Disabled1=Modules only2=Modules + Module Instances
```

- **fg_debugmodules_filter**:

```text
Only debug modules with this name
```

- **fg_iDebugNextStep**:

```text
Update flowgraph debug by one step.
```

- **fg_iEnableFlowgraphNodeDebugging**:

```text
Toggles visual flowgraph debugging.
```

- **fg_inspectorLog**:

```text
Log inspector on console.
```

- **fg_noDebugText**:

```text
Don't show debug text [0/1]
Default is 0 (show debug text).
```

- **fg_profile**:

```text
Flow graph profiling enable/disable
```

- **g_ColorGradingBlendTime**:

```text
Time to blend from the last color grading chart to the next.
```

- **g_DebugTimeWarp**:

```text
Debug information from time warp.
```

- **g_EnableLoadSave**:

```text
Enables/disables saving and loading of savegames
```

- **g_LedgeGrabManager_DebugDraw**:

```text
Toggles debug rendering on ledges: 0 - Disabled / 1 - Enabled
```

- **g_LedgeGrabManager_DebugDrawInEditor**:

```text
Toggles debug rendering on ledges in editor: 0 - Disabled / 1 - Enabled in editing mode / 2 - Enabled in game mode / 3 - Visualize only deprecated ledge entities
```

- **g_LedgeGrabManager_DebugDrawInEditor_Distance**:

```text
Max distance from camera at which ledges are rendered
```

- **g_LedgeGrabManager_DebugDrawInEditor_ToleranceMax**:

```text
Max ledge height.
```

- **g_LedgeGrabManager_DebugDrawInEditor_ToleranceMin**:

```text
Min ledge height.
```

- **g_LedgeGrabManager_DebugDrawInEditor_UseTerrain**:

```text
Toggles usage of terrain only in ledge debug!
```

- **g_LedgeGrabManager_DebugDraw_Distance**:

```text
Max distance from camera at which ledges are rendered
```

- **g_ProjectilePathDebugGfx**:

```text
Displays projectile trace debug.
```

- **g_XMLCPBAddExtraDebugInfoToXmlDebugFiles**:

```text
When the xml debug files are activated, this option adds the name and entity class name to every entity reference in the .xml .
```

- **g_XMLCPBBlockQueueLimit**:

```text
Limits the number of blocks to queue for saving, causes a main thread stall if exceeded. 0 for no limit.
```

- **g_XMLCPBGenerateXmlDebugFiles**:

```text
Activates the generation, for debug purposes, of a text xml file each time that there is a binary save (LastBinarySaved.xml) or load (LastBinaryLoaded.xml).
```

- **g_XMLCPBSizeReportThreshold**:

```text
defines the minimun size needed for nodes to be shown in the xml report file
```

- **g_XMLCPBUseExtraZLibCompression**:

```text
Enables an extra zlib compression pass on the binary saves.
```

- **g_aimdebug**:

```text
Enable/disable debug drawing for aiming direction
```

- **g_alignQuadruped**:

```text
Enable quadruped alignment.
```

- **g_alignQuadrupedDebug**:

```text
Enable quadruped alignment debug outputs.
```

- **g_alignQuadrupedRotation**:

```text
Enable rotational alignment for quadrupeds in the X axis. Value above 1 will turn on debugging.
```

- **g_alignSkeletonVertical**:

```text
Enable vertical offseting of the skeleton when ground aligning.
```

- **g_allowDisconnectIfUpdateFails**:

```text

```

- **g_asynclevelload**:

```text
Enable asynchronous level loading
```

- **g_autoteambalance**:

```text
Enables auto team balance.
```

- **g_battleDust_debug**:

```text
0: off, 1: text, 2: text+gfx
```

- **g_battleDust_effect**:

```text
Sets the effect to use for battledust
```

- **g_battleDust_enable**:

```text
Enable/Disable battledust
```

- **g_battleRange**:

```text
sets the battle range in meters 
```

- **g_breakImpulseScale**:

```text
How big do explosions need to be to break things?
```

- **g_breakageFadeDelay**:

```text

```

- **g_breakageFadeTime**:

```text

```

- **g_breakageMinAxisInertia**:

```text
Set this to 1.0 to force broken trees to have spherical inertia
```

- **g_breakageNoDebrisCollisions**:

```text
Turns off all collisions for debris, apart from coltype_solid
```

- **g_breakageTreeDec**:

```text
Please see comments in ActionGame.cpp
```

- **g_breakageTreeInc**:

```text
Please see comments in ActionGame.cpp
```

- **g_breakageTreeIncGlass**:

```text
Please see comments in ActionGame.cpp
```

- **g_breakageTreeMax**:

```text
Please see comments in ActionGame.cpp
```

- **g_breakage_debug**:

```text
Turns on debug rendering for broken objects counted against g_breakage_mem_limit
```

- **g_breakage_mem_limit**:

```text
Sets a budget for procedurally breakable objects (in KBs)
```

- **g_breakage_particles_limit**:

```text
Imposes a limit on particles generated during 2d surfaces breaking
```

- **g_breakagelog**:

```text
Log break events
```

- **g_breaktimeoutframes**:

```text

```

- **g_buddyMessagesIngame**:

```text
Output incoming buddy messages in chat while playing game.
```

- **g_combatFadeTime**:

```text
sets the battle fade time in seconds 
```

- **g_combatFadeTimeDelay**:

```text
waiting time before the battle starts fading out, in seconds 
```

- **g_cutsceneSkipDelay**:

```text
Skip Delay for Cutscenes.
```

- **g_deathCam**:

```text
Enables / disables the MP death camera (shows the killer's location)
```

- **g_debugCollisionDamage**:

```text
Log collision damage
```

- **g_debugDialogBuffers**:

```text
Enables the on screen debug info for flownode dialog buffers.
```

- **g_debugDirectMPMenu**:

```text
Jump directly to MP menu on application start.
```

- **g_debugHits**:

```text
Log hits
```

- **g_debugNetPlayerInput**:

```text
Show some debug for player input
```

- **g_debugSaveLoadMemory**:

```text
Print debug information about save/load memory usage
```

- **g_debug_fscommand**:

```text
Print incoming fscommands to console
```

- **g_debug_stats**:

```text
Enabled massive gameplay events debug
```

- **g_debugaimlook**:

```text
Debug aim/look direction
```

- **g_detachCamera**:

```text
Detach camera
```

- **g_difficultyHintSystem**:

```text
Lower difficulty hint system (0 is off, 1 is radius based, 2 is save-game based)
```

- **g_difficultyLevel**:

```text
Difficulty level
```

- **g_difficultyRadius**:

```text
Radius in which player needs to die to display lower difficulty level hint.
```

- **g_difficultyRadiusThreshold**:

```text
Number of times player has to die within radius to trigger difficulty hint.
```

- **g_difficultySaveThreshold**:

```text
Number of times player has to die with same savegame active to trigger difficulty hint.
```

- **g_disableInputKeyFlowNodeInDevMode**:

```text
disables input Key flownodes even in dev mode. Pure game only, does not affect editor.
```

- **g_disableSequencePlayback**:

```text
disable movie sequence playback
```

- **g_disableWinKeys**:

```text
Determines if Windows keys are disabled
```

- **g_disable_grab**:

```text
Disable NPC grabbing
```

- **g_disable_pickup**:

```text
Disable picking objects up
```

- **g_disable_throw**:

```text
Disable object throwing
```

- **g_displayIgnoreList**:

```text
Display ignore list in chat tab.
```

- **g_distanceForceNoIk**:

```text
Distance at which to disable ground alignment IK
```

- **g_distanceForceNoLegRaycasts**:

```text
Distance at which to disable ground alignment IKs raycasts
```

- **g_distanceForceNoLegRaycastsQuadrupeds**:

```text
Distance at which to disable ground alignment IKs raycasts
```

- **g_dof_averageAdjustSpeed**:

```text
Speed that the average between min and max can be approached. Default = 20
```

- **g_dof_distAppart**:

```text
Minimum distance that max and min can be apart. Default = 10
```

- **g_dof_ironsight**:

```text
Enable ironsight dof. Default = 1
```

- **g_dof_maxAdjustSpeed**:

```text
Speed that DoF can adjust the max value with. Default = 200
```

- **g_dof_maxHitScale**:

```text
Scale of ray hit distance which Max tries to approach. Default = 2.0f
```

- **g_dof_minAdjustSpeed**:

```text
Speed that DoF can adjust the min value with. Default = 100
```

- **g_dof_minHitScale**:

```text
Scale of ray hit distance which Min tries to approach. Default = 0.25
```

- **g_dof_sampleAngle**:

```text
Sample angle in degrees. Default = 5
```

- **g_dofset_limitScale**:

```text
Scale Dof_FocusLimit param when it gets set Default = 9
```

- **g_dofset_maxScale**:

```text
Scale Dof_FocusMax param when it gets set Default = 3
```

- **g_dofset_minScale**:

```text
Scale Dof_FocusMin param when it gets set Default = 1
```

- **g_ec_enable**:

```text
Enable/Disable explosion culling of small objects. Default = 1
```

- **g_ec_extent**:

```text
Explosion culling length of an AABB side which needs to be exceed for objects to not be culled.
```

- **g_ec_radiusScale**:

```text
Explosion culling scale to apply to explosion radius for object query.
```

- **g_ec_removeThreshold**:

```text
At how many items in exploding area will it start removing items.
```

- **g_ec_volume**:

```text
Explosion culling volume which needs to be exceed for objects to not be culled.
```

- **g_empStyle**:

```text

```

- **g_enableAlternateIronSight**:

```text
Enable/Disable alternate ironsight mode
```

- **g_enableFriendlyFallAndPlay**:

```text
Enables fall&play feedback for friendly actors.
```

- **g_enableMPStealthOMeter**:

```text
Enables the stealth-o-meter to detect enemies in MP matches.
```

- **g_enableMergedMeshRuntimeAreas**:

```text
Enables the Merged Mesh cluster generation and density precalculations at game/level load
```

- **g_enablePoolCache**:

```text
Enable the caching of data associated with entities pooled e.g., equipment pack, body damage, etc.
```

- **g_enableSlimCheckpoints**:

```text
Enable the use of console style checkpoints instead of full save.
```

- **g_enableSpeedLean**:

```text
Enables player-controlled curve leaning in speed mode.
```

- **g_enableTracers**:

```text
Enable/Disable tracers.
```

- **g_enableitems**:

```text
Enable/disable the item system
```

- **g_enableloadingscreen**:

```text
Enable/disable the loading screen
```

- **g_energy_scale_income**:

```text
Scales incoming energy.
```

- **g_energy_scale_price**:

```text
Scales energy prices.
```

- **g_fallAndPlayThreshold**:

```text
Minimum damage for fall and play.
```

- **g_footstepSoundMaxDistance**:

```text
Maximum distance for footstep sounds / fx spawned by Actors.
```

- **g_footstepSoundMinInterval**:

```text
Minimum time between footsteps events.
```

- **g_footstepSoundsFollowEntity**:

```text
Toggles moving of footsteps sounds with it's entity.
```

- **g_forceFastUpdate**:

```text
GameObjects IsProbablyVisible->TRUE && IsProbablyDistant()->FALSE
```

- **g_fpDbaManagementDebug**:

```text
Debug information about currently loaded fp dbas
```

- **g_fpDbaManagementEnable**:

```text
Enable/Disable fp dbas load/unload management
```

- **g_fraglead**:

```text
Number of frags a player has to be ahead of other players once g_fraglimit is reached. Default is 1.
```

- **g_fraglimit**:

```text
Number of frags before a round restarts. Default is 0, 0 means no frag-limit.
```

- **g_friendlyfireratio**:

```text
Sets friendly damage ratio.
```

- **g_gameplayAnalyst**:

```text
Enable/Disable Gameplay Analyst
```

- **g_glassAutoShatter**:

```text
Always smash the whole pane, and spawn fracture effect
```

- **g_glassAutoShatterMinArea**:

```text
If the area of glass is below this, then autoshatter
```

- **g_glassAutoShatterOnExplosions**:

```text
Just smash the whole pane, and spawn fracture effect for explosions
```

- **g_glassForceTimeout**:

```text
Make all glass break after a given time, overrides art settings
```

- **g_glassForceTimeoutSpread**:

```text
Add a random amount to forced glass shattering
```

- **g_glassMaxPanesToBreakPerFrame**:

```text
Max glass breaks, before auto-shattering is forced
```

- **g_glassNoDecals**:

```text
Turns off glass decals
```

- **g_glassSystemEnable**:

```text
Enables the new dynamic breaking system for glass
```

- **g_godMode**:

```text
God Mode
```

- **g_grabLog**:

```text
verbosity for grab logging (0-2)
```

- **g_groundAlignAll**:

```text
Enable ground alignment for every character that supports it.
```

- **g_groundeffectsdebug**:

```text
Enable/disable logging for GroundEffects (2 = use non-deferred ray-casting)
```

- **g_handleEvents**:

```text
Activates the registration requirement for GameObjectEvents
```

- **g_hitDeathReactions_debug**:

```text
Enables/Disables visual debug information for hit and death reactions system
```

- **g_hitDeathReactions_disableRagdoll**:

```text
Disables switching to ragdoll at the end of animations
```

- **g_hitDeathReactions_disable_ai**:

```text
If enabled, it'll not allow to execute any AI instruction during the hit/death reaction
```

- **g_hitDeathReactions_enable**:

```text
Enables/Disables Hit/Death reaction system
```

- **g_hitDeathReactions_logReactionAnimsOnLoading**:

```text
Non-Release only CVar: Enables logging of animations used by non-animation graph-based reactions. 0: don't log, 1: log anim names, 2: log filepaths
```

- **g_hitDeathReactions_streaming**:

```text
Enables/Disables reactionAnims streaming. 0: Disabled, 1: DBA Registering-based, 2: Entity lifespan-based
```

- **g_hitDeathReactions_useLuaDefaultFunctions**:

```text
If enabled, it'll use the default lua methods inside HitDeathReactions script instead of the default c++ version
```

- **g_hitDeathReactions_usePrecaching**:

```text
Enables/Disables precaching of of hitreactions: Requires game restart.
```

- **g_immersive**:

```text
If set, multiplayer physics will be enabled
```

- **g_interactiveObjectDebugRender**:

```text
InteractiveObject debug render.
```

- **g_joint_breaking**:

```text
Toggles jointed objects breaking
```

- **g_landingBobLandTimeFactor**:

```text
Fraction of the bob time to be at full compression
```

- **g_landingBobTimeFactor**:

```text
Fraction of the bob time to release full compression
```

- **g_language**:

```text
Defines which language pak is loaded
```

- **g_languageAudio**:

```text
Will automatically match g_language setting unless specified otherwise
```

- **g_ledgeGrabClearHeight**:

```text
Distance a player must clear a ledge grab entity by to avoid doing a ledge grab
```

- **g_ledgeGrabMovingledgeExitVelocityMult**:

```text
On exiting a grab onto a moving ledge a movement will be added to the players exit velocity in the direction of the ledge movement
```

- **g_loadPlayerModelOnLoad**:

```text
Sets if the client player's model should be loaded on level load
```

- **g_localPacketRate**:

```text
Packet rate locally on faked network connection
```

- **g_meleeWhileSprinting**:

```text
Enables option to melee while sprinting, using left mouse button.
```

- **g_minplayerlimit**:

```text
Minimum number of players to start a match.
```

- **g_minteamlimit**:

```text
Minimum number of players in each team to start a match.
```

- **g_movementTransitions_debug**:

```text
Enables/Disables on-screen debugging of movement transitions
```

- **g_movementTransitions_debugFilter**:

```text
Substring name filter for g_movementTransitions_debug (in mode 1)
```

- **g_movementTransitions_enable**:

```text
Enables/Disables special movement transitions system
```

- **g_movementTransitions_log**:

```text
Enables/Disables logging of special movement transitions
```

- **g_multiplayerEnableVehicles**:

```text
Enable vehicles in multiplayer
```

- **g_no_breaking_by_objects**:

```text
Prevents procedural breaking caused by rigid bodies
```

- **g_no_secondary_breaking**:

```text
Prevents secondary procedural breaks (to keep down memory usage)
```

- **g_playerFallAndPlay**:

```text
When enabled, the player doesn't die from direct damage, but goes to fall and play.
```

- **g_playerHealthValue**:

```text
Maximum player health.
```

- **g_playerInteractorRadius**:

```text
Maximum radius at which player can interact with other entities
```

- **g_playerLowHealthThreshold**:

```text
The player health threshold when the low health effect kicks in.
```

- **g_playerRespawns**:

```text
Sets the player lives.
```

- **g_pp_scale_income**:

```text
Scales incoming PP.
```

- **g_pp_scale_price**:

```text
Scales PP prices.
```

- **g_preroundtime**:

```text
Frozen time before round starts. Default is 8, 0 Disables freeze time.
```

- **g_procedural_breaking**:

```text
Toggles procedural mesh breaking (except explosion-breaking)
```

- **g_proneAimAngleRestrict_Enable**:

```text
Test fix for matching aim restrictions between 1st and 3rd person
```

- **g_proneNotUsableWeapon_FixType**:

```text
Test various fixes for not selecting hurricane while prone
```

- **g_punishFriendlyDeaths**:

```text
The player gets punished by death when killing a friendly unit.
```

- **g_radialBlur**:

```text
Radial blur on explosions. Default = 1, 0 to disable
```

- **g_resetActionmapOnStart**:

```text
Resets Keyboard mapping on application start.
```

- **g_revivetime**:

```text
Revive wave timer.
```

- **g_roundlimit**:

```text
Maximum numbers of rounds to be played. Default is 0, 0 means no limit.
```

- **g_roundtime**:

```text
Duration of a round (in minutes). Default is 0, 0 means no time-limit.
```

- **g_saveLoadBasicEntityOptimization**:

```text
Switch basic entity data optimization
```

- **g_saveLoadExtendedLog**:

```text
Enables the generation of detailed log information regarding saveloads
```

- **g_saveLoadUseExportedEntityList**:

```text
Only save entities in the editor-generated save list (if available). 0 is the previous behavior
```

- **g_setActorModelFromLua**:

```text
Toggle if the actor model should be set from Lua or internally
```

- **g_showBitmapUi**:

```text
Show or hide the bitmap user interface.
```

- **g_showIdleStats**:

```text

```

- **g_showPlayerState**:

```text
Display all CPlayer entities (0=disabled, 1=only players, 2=also AI)
```

- **g_showUpdateState**:

```text
Show the game object update state of any activated entities; 3-4 -- AI objects only
```

- **g_show_crosshair**:

```text
show crosshair
```

- **g_show_crosshair_tp**:

```text
keep crosshair in third person
```

- **g_show_fullscreen_info**:

```text
show fullscreen info (and which one to show)
```

- **g_skipIntro**:

```text
Skip all the intro videos.
```

- **g_spectatorCollisions**:

```text
Collide against the geometry in spectator mode
```

- **g_stanceTransitionSpeed**:

```text
Set speed of camera transition from stance to stance
```

- **g_startFirstTime**:

```text
1 before the game was started first time ever.
```

- **g_statisticsMode**:

```text
Statistics mode
 0 - disabled
 1 - enabled crysis mode
 2 - enabled K01 mode

```

- **g_stereoFrameworkEnable**:

```text
Enables the processing of the game stereo framework. (2=extra debug output)
```

- **g_stereoIronsightEyeDistance**:

```text
Distance of eyes when in ironsight
```

- **g_stereoIronsightWeaponDistance**:

```text
Distance of convergence plane when in ironsight
```

- **g_suddendeathtime**:

```text
Number of seconds before round end to start sudden death. Default if 30. 0 Disables sudden death.
```

- **g_syncClassRegistry**:

```text
synchronize class registry from server to clients
```

- **g_teamlock**:

```text
Number of players one team needs to have over the other, for the game to deny joining it. 0 disables.
```

- **g_timelimit**:

```text
Duration of a time-limited game (in minutes). Default is 0, 0 means no time-limit.
```

- **g_tk_punish**:

```text
Turns on punishment for team kills
```

- **g_tk_punish_limit**:

```text
Number of team kills user will be banned for
```

- **g_tpview_control**:

```text
Enables control of 3rd person view switching through cvar (F1 will be disabled!)
```

- **g_tpview_enable**:

```text
Enables 3rd person view if precedent cvar is true
```

- **g_tpview_force_goc**:

```text
Forces 'Gears of Crysis' (tm) when in 3rd person view
```

- **g_tree_cut_reuse_dist**:

```text
Maximum distance from a previously made cut that allows reusing
```

- **g_useSinglePosition**:

```text
Activates the new Single Position update order
```

- **g_useXMLCPBinForSaveLoad**:

```text
Use XML compressed binary format for save and loads. DON'T CHANGE THIS DURING RUNTIME!
```

- **g_vaultMinAnimationSpeed**:

```text
When vaulting at slow speeds the resulting animation speed will never go beneath this value
```

- **g_vaultMinHeightDiff**:

```text
Minimum height difference between a player and a ledge for a vault to be possible
```

- **g_visibilityTimeout**:

```text
Adds visibility timeout to IsProbablyVisible() calculations
```

- **g_visibilityTimeoutTime**:

```text
Visibility timeout time used by IsProbablyVisible() calculations
```

- **g_walkMultiplier**:

```text
Modify movement speed
```

- **g_waterHitOnly**:

```text
Bullet hit FX appears on water and not what's underneath
```

- **gfx_ampserver**:

```text
Enables AMP flash profiling
```

- **gfx_debugdraw**:

```text
Display UI Elements debug info.
0=Disabled1=UIElements2=UIActions4=UIActions12=UIStack per UI FG
```

- **gfx_draw**:

```text
Draw UI Elements
```

- **gfx_enabled**:

```text
Enables the general FlashUI.
```

- **gfx_inputevents_triggerrepeat**:

```text
Time in seconds to wait between each input key trigger
```

- **gfx_inputevents_triggerstart**:

```text
Time in seconds to wait until input key triggering starts
```

- **gfx_loadtimethread**:

```text
Enables threaded rendering while loading
```

- **gfx_reloadonlanguagechange**:

```text
Automatically reloads all UIElements on language change
```

- **gfx_uiaction_enable**:

```text
Enables UI Actions
```

- **gfx_uiaction_folder**:

```text
Default folder for UIActions
```

- **gfx_uiaction_log**:

```text
Log UI Actions
```

- **gfx_uiaction_log_filter**:

```text
Filter for logging
<string> only log messages
-<string> don't log message
<filter1>|<filter2> to use more filters
```

- **gfx_uievents_editorenabled**:

```text
Enabled UI->System events in editor (Disabled per default! handle with care!)
```

- **goc_enable**:

```text
gears of crysis
```

- **goc_targetx**:

```text
target position of camera
```

- **goc_targety**:

```text
target position of camera
```

- **goc_targetz**:

```text
target position of camera
```

- **gpu_particle_physics**:

```text
Enable GPU physics if available (0=off / 1=enabled).
```

- **hit_assistMultiplayerEnabled**:

```text
Enable/disable minimum damage hit assistance in multiplayer games
```

- **hit_assistSingleplayerEnabled**:

```text
Enable/disable minimum damage hit assistance
```

- **hr_dotAngle**:

```text
max angle for FOV change
```

- **hr_fovAmt**:

```text
goal FOV when hit
```

- **hr_fovTime**:

```text
fov time
```

- **hr_rotateFactor**:

```text
rotate factor
```

- **hr_rotateTime**:

```text
rotate time
```

- **http_password**:

```text
Password for http administration
```

- **i_bufferedkeys**:

```text
Toggles key buffering.
Usage: i_bufferedkeys [0/1]
Default is 0 (off). Set to 1 to process buffered key strokes.
```

- **i_debug**:

```text
Toggles input event debugging.
Usage: i_debug [0/1]
Default is 0 (off). Set to 1 to spam console with key events (only press and release).
```

- **i_debugDigitalButtons**:

```text
render controller's digital button pressed info
Usage: 0 (off), 1(on)Default is 0. Value must be >=0
```

- **i_debug_mp_flowgraph**:

```text
Displays info on the MP flowgraph node
```

- **i_debug_projectiles**:

```text
Displays info about projectile status, where available.
```

- **i_debug_sounds**:

```text
Enable item sound debugging
```

- **i_debug_zoom_mods**:

```text
Use zoom mode spread/recoil mods
```

- **i_debuggun_1**:

```text
Command to execute on primary DebugGun fire
```

- **i_debuggun_2**:

```text
Command to execute on secondary DebugGun fire
```

- **i_forcefeedback**:

```text
Enable/Disable force feedback output.
```

- **i_inventory_capacity**:

```text
Players inventory capacity
```

- **i_itemSystemDebugMemStats**:

```text
Display item memory stats on screen
```

- **i_kinGlobalExpCorrectionFactor**:

```text
Trend correction factor for double exponential smoothing.
```

- **i_kinGlobalExpDeviationRadius**:

```text
Maximum deviation radius from prediction for double exponential smoothing.
```

- **i_kinGlobalExpJitterRadius**:

```text
Radius to determine jitter correction for double exponential smoothing.
```

- **i_kinGlobalExpPredictionFactor**:

```text
Prediction factor for double exponential smoothing.
```

- **i_kinGlobalExpSmoothFactor**:

```text
Smoothing factor for double exponential smoothing.
```

- **i_kinSkeletonMovedDistance**:

```text
Distance used to determine if kinect skeleton has moved in the play space.
```

- **i_kinSkeletonSmoothType**:

```text
Kinect skeleton tracking smooth type: 0 = not smoothed, 1 = using Double Exponential Smoothing
```

- **i_lighteffects**:

```text
Enable/Disable lights spawned during item effects.
```

- **i_lying_item_limit_mp**:

```text
Max number of items lying around in a level (<= 0 means no limit). Only works in multiplayer.
```

- **i_lying_item_limit_sp**:

```text
Max number of items lying around in a level (<= 0 means no limit). Only works in singleplayer.
```

- **i_mouse_accel**:

```text
Set mouse acceleration, 0.0 means no acceleration.
Usage: i_mouse_accel [float number] (usually a small number, 0.1 is a good one)
Default is 0.0 (off)
```

- **i_mouse_accel_max**:

```text
Set mouse max mouse delta when using acceleration.
Usage: i_mouse_accel_max [float number]
Default is 100.0
```

- **i_mouse_buffered**:

```text
Toggles mouse input buffering.
Usage: i_mouse_buffered [0/1]
Default is 0 (off). Set to 1 to process buffered mouse input.
```

- **i_mouse_inertia**:

```text
Set mouse inertia. It is disabled (0.0) by default.
Usage: i_mouse_inertia [float number]
Default is 0.0
```

- **i_mouse_scroll_coordinate_origin**:

```text
Controls the origin of mouse coordinates sent for mouse wheel scrolling events.
0 = Top-left of screen space (Windows default behavior), 1 = Top-left of client area, 2 = Top-left of client area, clamped to client area
```

- **i_mouse_sensitivity**:

```text
Changes mouse sensitivity.
Usage: i_mouse_sensitivity [float number]
Default is 1 (raw movement), Set to 0 for no movement, [0/1] for slower movement and [1/n] for faster movement
```

- **i_mouse_smooth**:

```text
Set mouse smoothing value, also if 0 (disabled) there will be a simple average
between the old and the actual input.
Usage: i_mouse_smooth [float number]
(1.0 = very very smooth, 30 = almost instant)
Default is 0.0
```

- **i_particleeffects**:

```text
Enable/Disable particles spawned during item effects.
```

- **i_postScePadTrackingEvent**:

```text
Defines which Sce Game Pad tracking events should be posted by the Input System: 
0=None
1=Touch
2=Orientation
4=Acceleration

```

- **i_precache**:

```text
Enables precaching of items during level loading.
```

- **i_soundeffects**:

```text
Enable/Disable playing item sound effects.
```

- **i_staticfiresounds**:

```text
Enable/Disable static fire sounds. Static sounds are not unloaded when idle.
```

- **i_useKinect**:

```text
Use Kinect
```

- **i_xinput_deadzone_handling**:

```text
deadzonehandling
Usage: i_xinput_deadzone_handling 0/1 (0 - old deadzone/ 1 - new deadzone)
Default is 1. Value must be >=0.
```

- **int_moveZoomTime**:

```text
Number of seconds it takes to zoom out when moving. Default = 0.2
```

- **int_zoomAmount**:

```text
Maximum zoom, between 0.0 and 1.0. Default = .75
```

- **int_zoomInTime**:

```text
Number of seconds it takes to zoom in. Default = 5.0
```

- **int_zoomOutTime**:

```text
Number of seconds it takes to zoom out when you stop firing. Default = 0.5
```

- **log_EnableRemoteConsole**:

```text
enables/disables the remote console
```

- **log_Filter**:

```text
defines general filter for log events
log_Filter="Foo" - will only log events that matches this filter ("Foo")log_Filter="-Foo" - all events that matches this filter ("Foo") will be droppedlog_Filter="Foo|-Bar" - combine more filters
```

- **log_IncludeTime**:

```text
Toggles time stamping of log entries.
Usage: log_IncludeTime [0/1/2/3/4/5]
  0=off (default)
  1=current time
  2=relative time
  3=current+relative time
  4=absolute time in seconds since this mode was started
  5=current time+server time
```

- **log_Module**:

```text
Only show warnings from specified module
```

- **log_SpamDelay**:

```text
Sets the minimum time interval between messages classified as spam
```

- **log_UseFilter**:

```text
toggle to use filter (0=disabled, 1=filter console, 2=filter file, 3=filter console and file)
```

- **log_Verbosity**:

```text
defines the verbosity level for log messages written to console
-1=suppress all logs (including eAlways)
0=suppress all logs(except eAlways)
1=additional errors
2=additional warnings
3=additional messages
4=additional comments
```

- **log_VerbosityOverridesWriteToFile**:

```text
when enabled, setting log_verbosity to 0 will stop all logging including writing to file
```

- **log_WriteToFile**:

```text
toggle whether to write log to file (game.log)
```

- **log_WriteToFileVerbosity**:

```text
defines the verbosity level for log messages written to files
-1=suppress all logs (including eAlways)
0=suppress all logs(except eAlways)
1=additional errors
2=additional warnings
3=additional messages
4=additional comments
```

- **log_tick**:

```text
When not 0, writes tick log entry into the log file, every N seconds
```

- **lua_CodeCoverage**:

```text
Enables code coverage
```

- **lua_StopOnError**:

```text
Stops on error
```

- **lua_debugger**:

```text
Enables the script debugger.
1 to trigger on breakpoints and errors
2 to only trigger on errors
Usage: lua_debugger [0/1/2]
```

- **lua_stackonmalloc**:

```text
Enables/disables logging of the called lua functions and respective callstacks, whenever a new lua object is instantiated.
```

- **m_wh_demo_positionOverride**:

```text
Override player position by this value during timeDemo.
```

- **mfx_Debug**:

```text
Turns on MaterialEffects debug messages. 1=Collisions, 2=Breakage, 3=Both
```

- **mfx_DebugFlowGraphFX**:

```text
Turns on Material FlowGraph FX manager debug messages.
```

- **mfx_DebugVisual**:

```text
Turns on/off visual debugging for MFX system
```

- **mfx_DebugVisualFilter**:

```text

```

- **mfx_Enable**:

```text
Enables MaterialEffects.
```

- **mfx_EnableAttachedEffects**:

```text
Enable attached effects (characters, entities...)
```

- **mfx_EnableFGEffects**:

```text
Enabled Flowgraph based Material effects. Default: On
```

- **mfx_ParticleImpactThresh**:

```text
Impact threshold for particle effects. Default: 2.0
```

- **mfx_RaisedSoundImpactThresh**:

```text
Impact threshold for sound effects if we're rolling. Default: 3.5
```

- **mfx_SerializeFGEffects**:

```text
Serialize Flowgraph based effects. Default: Off
```

- **mfx_SoundImpactThresh**:

```text
Impact threshold for sound effects. Default: 1.5
```

- **mfx_Timeout**:

```text
Timeout (in seconds) to avoid playing effects too often
```

- **mfx_pfx_maxDist**:

```text
Max dist (how far away before scale is clamped)
```

- **mfx_pfx_maxScale**:

```text
Max scale (when particle is far)
```

- **mfx_pfx_minScale**:

```text
Min scale (when particle is close)
```

- **mn_LogToFile**:

```text
Dumps all mann event logging to the file
```

- **mn_allowEditableDatabasesInPureGame**:

```text
Do not store editable databases
```

- **mov_NoCutscenes**:

```text
Disable playing of Cut-Scenes
```

- **mov_cameraPrecacheTime**:

```text

```

- **mov_enableFakeProjection**:

```text
Enabled fake projection in cutscenes.
```

- **mov_maxTimeStepForMovieSystem**:

```text
Caps the time step for the movie system so that a cut-scene won't be jumped in the case of an extreme stall.
```

- **mov_overrideCam**:

```text
Set the camera used for the sequence which overrides the camera track info in the sequence.
```

- **movie_physicalentity_animation_lerp**:

```text
Lerp value for animation-driven physical entities
```

- **movie_timeJumpTransitionTime**:

```text
Jump transition time
```

- **net_active_http_connections**:

```text
Number of active http connections
```

- **net_debugVerboseLevel**:

```text

```

- **net_disconnect_on_rmi_error**:

```text
Disconnect remote connections on script exceptions during RMI calls
```

- **net_inactivitytimeout**:

```text
Sets how many seconds without receiving a packet a connection will stay alive for (can only be set on server)
```

- **net_inactivitytimeoutDevmode**:

```text
Sets how many seconds without receiving a packet a connection will stay alive for while in devmode (can only be set on server)
```

- **net_lan_scanport_first**:

```text
Starting port for LAN games scanning
```

- **net_lan_scanport_num**:

```text
Num ports for LAN games scanning
```

- **net_lanbrowser**:

```text
enable lan games browser
```

- **net_log**:

```text
Logging level of network system
```

- **net_log_remote_methods**:

```text
Log remote method invocations
```

- **net_numNetIDHighBitBits**:

```text
Number of bits used for high bit NetIDs. By default static entities start allocating from high bit NetIDs.
```

- **net_numNetIDLowBitBits**:

```text
Number of bits used for low bit NetIDs. By default players start allocating from low bit NetIDs.
```

- **net_numNetIDMediumBitBits**:

```text
Number of bits used for medium bit NetIDs. By default dynamic entities start allocating from medium bit NetIDs.
```

- **net_phys_debug**:

```text

```

- **net_phys_lagsmooth**:

```text

```

- **net_phys_pingsmooth**:

```text

```

- **net_receiveQueueSize**:

```text

```

- **net_sendQueueSize**:

```text

```

- **net_stats_login**:

```text
Login for reporting stats on dedicated server
```

- **net_stats_pass**:

```text
Password for reporting stats on dedicated server
```

- **nvAnselDisallow**:

```text
Does Nvidia Ansel allow to be activated
```

- **osm_enabled**:

```text
Enables/disables overload scene manager
```

- **osm_fbMinScale**:

```text
The minimum scale factor the overload scene manager will drop to
```

- **osm_fbScaleDeltaDown**:

```text
The speed multiplier for the overload scene manager frame buffer scaling down
```

- **osm_fbScaleDeltaUp**:

```text
The speed multiplier for the overload scene manager frame buffer scaling up
```

- **osm_historyLength**:

```text
Overload scene manager number of frames to record stats for
```

- **osm_targetFPS**:

```text
Overload scene manager target frame rate
```

- **osm_targetFPSTolerance**:

```text
The overload scene manager will make adjustments if fps is outside targetFPS +/- this value
```

- **p_CharacterIK**:

```text
Toggles character IK.
Usage: p_characterik [0/1]
Default is 1 (on). Set to 0 to disable inverse kinematics.
```

- **p_DLCDRegionCount**:

```text
Num of regions enumerated when searching for DLC's
```

- **p_DLCDebug**:

```text
Enable debug for DLC manager.
```

- **p_GEB_max_cells**:

```text
Specifies the cell number threshold after which GetEntitiesInBox issues a warning
```

- **p_accuracy_LCPCG**:

```text
Desired accuracy of LCP CG solver (velocity-related, m/s)
```

- **p_accuracy_LCPCG_no_improvement**:

```text
Required LCP CG accuracy that allows to stop if there was no improvement after p_max_LCPCG_fruitless_iters
```

- **p_accuracy_MC**:

```text
Desired accuracy of microcontact solver (velocity-related, m/s)
```

- **p_approx_caps_len**:

```text
Breakable trees are approximated with capsules of this length (0 disables approximation)
```

- **p_break_on_validation**:

```text
Toggles break on validation error.
Usage: p_break_on_validation [0/1]
Default is 0 (off). Issues CryDebugBreak() call in case of
a physics parameter validation error.
```

- **p_check_out_of_bounds**:

```text
Check for physics entities outside world (terrain) grid:
1 - Enable raycasts; 2 - Enable proximity checks; 3 - Both
```

- **p_climbable_offset**:

```text
Maximal climbable offset in z on non-climbable slopes.
Usage: p_climbable_offset 0.25
```

- **p_collision_mode**:

```text
This variable is obsolete.
```

- **p_cull_distance**:

```text
Culling distance for physics helpers rendering
```

- **p_damping_group_size**:

```text
Sets contacting objects group size
before group damping is used.Usage: p_damping_group_size 3
Used for internal tweaking only.
```

- **p_debug_explosions**:

```text
Turns on explosions debug mode
```

- **p_debug_joints**:

```text
If set, breakable objects will log tensions at the weakest spots
```

- **p_do_step**:

```text
Steps physics system forward when in single step mode.
Usage: p_do_step 1
Default is 0 (off). Each 'p_do_step 1' instruction allows
the physics system to advance a single step.
```

- **p_draw_cells**:

```text
Toggles display of physical cells. The value is a bitmask : 
bit 0  - show cells
bit 1  - show dephysicalization timer
bit 2  - show cell index numbers
Examples: disabled - 0, show cells with timers - 3, show cells with indexes - 5
```

- **p_draw_helpers**:

```text
Same as p_draw_helpers_num, but encoded in letters
Usage [Entity_Types]_[Helper_Types] - [t|s|r|R|l|i|g|a|y|e]_[g|c|b|l|t(#)]
Entity Types:
t - show terrain
s - show static entities
r - show sleeping rigid bodies
R - show active rigid bodies
l - show living entities
i - show independent entities
g - show triggers
a - show areas
y - show rays in RayWorldIntersection
e - show explosion occlusion maps
Helper Types
g - show geometry
c - show contact points
b - show bounding boxes
l - show tetrahedra lattices for breakable objects
j - show structural joints (will force translucency on the main geometry)
t(#) - show bounding volume trees up to the level #
f(#) - only show geometries with this bit flag set (multiple f's stack)
Example: p_draw_helpers larRis_g - show geometry for static, sleeping, active, independent entities and areas
```

- **p_draw_helpers_num**:

```text
Toggles display of various physical helpers. The value is a bitmask:
bit 0  - show contact points
bit 1  - show physical geometry
bit 8  - show helpers for static objects
bit 9  - show helpers for sleeping physicalized objects (rigid bodies, ragdolls)
bit 10 - show helpers for active physicalized objects
bit 11 - show helpers for players
bit 12 - show helpers for independent entities (alive physical skeletons,particles,ropes)
bits 16-31 - level of bounding volume trees to display (if 0, it just shows geometry)
Examples: show static objects - 258, show active rigid bodies - 1026, show players - 2050
```

- **p_enforce_contacts**:

```text
This variable is obsolete.
```

- **p_ent_grid_use_obb**:

```text
Whether to use OBBs rather than AABBs for the entity grid setup for brushes
```

- **p_fixed_timestep**:

```text
Toggles fixed time step mode.Usage: p_fixed_timestep [0/1]
Forces fixed time step when set to 1. When set to 0, the
time step is variable, based on the frame rate.
```

- **p_fly_mode**:

```text
Toggles fly mode.
Usage: p_fly_mode [0/1]
```

- **p_force_sync**:

```text
Forces main thread to wait on physics if not completed in time
```

- **p_gravity_z**:

```text

```

- **p_group_damping**:

```text
Toggles damping for object groups.
Usage: p_group_damping [0/1]
Default is 1 (on). Used for internal tweaking only.
```

- **p_joint_damage_accum**:

```text
Default fraction of damage (tension) accumulated on a breakable joint
```

- **p_joint_damage_accum_threshold**:

```text
Default damage threshold (0..1) for p_joint_damage_accum
```

- **p_joint_gravity_step**:

```text
Time step used for gravity in breakable joints (larger = stronger gravity effects)
```

- **p_jump_to_profile_ent**:

```text
Move the local player next to the corresponding entity in the p_profile_entities list
```

- **p_lattice_max_iters**:

```text
Limits the number of iterations of lattice tension solver
```

- **p_limit_simple_solver_energy**:

```text
Specifies whether the energy added by the simple solver is limited (0 or 1)
```

- **p_list_active_objects**:

```text

```

- **p_log_lattice_tension**:

```text
If set, breakable objects will log tensions at the weakest spots
```

- **p_max_LCPCG_contacts**:

```text
Maximum number of contacts that LCPCG solver is allowed to handle
```

- **p_max_LCPCG_fruitless_iters**:

```text
Maximum number of LCP CG iterations w/o improvement (defined by p_min_LCPCGimprovement)
```

- **p_max_LCPCG_iters**:

```text
Maximum number of LCP CG iterations
```

- **p_max_LCPCG_microiters**:

```text
Limits the total number of per-contact iterations during one LCP CG iteration
(number of microiters = number of subiters * number of contacts)
```

- **p_max_LCPCG_microiters_final**:

```text
Same as p_max_LCPCG_microiters, but for the final LCP CG iteration
```

- **p_max_LCPCG_subiters**:

```text
Limits the number of LCP CG solver inner iterations (should be of the order of the number of contacts)
```

- **p_max_LCPCG_subiters_final**:

```text
Limits the number of LCP CG solver inner iterations during the final iteration (should be of the order of the number of contacts)
```

- **p_max_MC_iters**:

```text
Specifies the maximum number of microcontact solver iterations *per contact*
```

- **p_max_MC_mass_ratio**:

```text
Maximum mass ratio between objects in an island that MC solver is considered safe to handle
```

- **p_max_MC_vel**:

```text
Maximum object velocity in an island that MC solver is considered safe to handle
```

- **p_max_approx_caps**:

```text
Maximum number of capsule approximation levels for breakable trees
```

- **p_max_bone_velocity**:

```text
Clamps character bone velocities estimated from animations
```

- **p_max_contact_gap**:

```text
Sets the gap, enforced whenever possible, between
contacting physical objects.Usage: p_max_contact_gap 0.01
This variable is used for internal tweaking only.
```

- **p_max_contact_gap_player**:

```text
Sets the safe contact gap for player collisions with
the physical environment.Usage: p_max_contact_gap_player 0.01
This variable is used for internal tweaking only.
```

- **p_max_contact_gap_simple**:

```text
Specifies the maximum contact gap for objects that use the simple solver
```

- **p_max_contacts**:

```text
Maximum contact number, after which contact reduction mode is activated
```

- **p_max_debris_mass**:

```text
Broken pieces with mass<=this limit use debris collision settings
```

- **p_max_entity_cells**:

```text
Limits the number of entity grid cells an entity can occupy
```

- **p_max_object_splashes**:

```text
Specifies how many splash events one entity is allowed to generate
```

- **p_max_plane_contacts**:

```text
Maximum number of contacts lying in one plane between two rigid bodies
(the system tries to remove the least important contacts to get to this value)
```

- **p_max_plane_contacts_distress**:

```text
Same as p_max_plane_contacts, but is effective if total number of contacts is above p_max_contacts
```

- **p_max_player_velocity**:

```text
Clamps players' velocities to this value
```

- **p_max_substeps**:

```text
Limits the number of substeps allowed in variable time step mode.
Usage: p_max_substeps 5
Objects that are not allowed to perform time steps
beyond some value make several substeps.
```

- **p_max_substeps_large_group**:

```text
Limits the number of substeps large groups of objects can make
```

- **p_max_unproj_vel**:

```text
Limits the maximum unprojection velocity request
```

- **p_max_velocity**:

```text
Clamps physicalized objects' velocities to this value
```

- **p_max_world_step**:

```text
Specifies the maximum step physical world can make (larger steps will be truncated)
```

- **p_min_LCPCG_improvement**:

```text
Defines a required residual squared length improvement, in fractions of 1
```

- **p_min_MC_iters**:

```text
Specifies the minmum number of microcontact solver iterations *per contact set* (this has precedence over p_max_mc_iters)
```

- **p_min_separation_speed**:

```text
Used a threshold in some places (namely, to determine when a particle
goes to rest, and a sliding condition in microcontact solver)
```

- **p_net_debugDraw**:

```text
Draw some debug graphics to help diagnose issues (requires p_draw_helpers to be switch on to work, e.g. p_draw_helpers rR_b)
```

- **p_net_extrapmax**:

```text
The maximum amount of time the client is allowed to extrapolate the position based on last received packet.
```

- **p_net_interp**:

```text
The amount of time which the client will lag behind received packet updates. High values result in smoother movement but introduces additional lag as a trade-off.
```

- **p_net_sequencefrequency**:

```text
The frequency at which sequence numbers increase per second, higher values add accuracy but go too high and the sequence numbers will wrap round too fast
```

- **p_num_bodies_large_group**:

```text
Group size to be used with p_max_substeps_large_group, in bodies
```

- **p_num_startup_overload_checks**:

```text
For this many frames after loading a level, check if the physics gets overloaded and freezes non-player physicalized objects that are slow enough
```

- **p_num_threads**:

```text
The number of internal physics threads
```

- **p_penalty_scale**:

```text
Scales the penalty impulse for objects that use the simple solver
```

- **p_players_can_break**:

```text
Whether living entities are allowed to break static objects with breakable joints
```

- **p_predicted_slope_distance_in**:

```text
Distance for surface material predition when living is before the slope.
```

- **p_predicted_slope_distance_out**:

```text
Distance for surface material predition when living is on the slope.
```

- **p_profile**:

```text
Enables group profiling of physical entities
```

- **p_profile_entities**:

```text
Enables per-entity time step profiling
```

- **p_profile_functions**:

```text
Enables detailed profiling of physical environment-sampling functions
```

- **p_prohibit_unprojection**:

```text
This variable is obsolete.
```

- **p_proxy_highlight_range**:

```text
Physics proxies with triangle counts >= p_proxy_highlight_threshold+p_proxy_highlight_range will get the maximum highlight
```

- **p_proxy_highlight_threshold**:

```text
Physics proxies with triangle counts large than this will be highlighted
```

- **p_pumploggedevents_parallel**:

```text

```

- **p_ray_fadeout**:

```text
Fade-out time for ray physics helpers
```

- **p_ray_peak_time**:

```text
Rays that take longer then this (in ms) will use different color
```

- **p_rope_collider_size_limit**:

```text
Disables rope collisions with meshes having more triangles than this (0-skip the check)
```

- **p_single_step_mode**:

```text
Toggles physics system 'single step' mode.Usage: p_single_step_mode [0/1]
Default is 0 (off). Set to 1 to switch physics system (except
players) to single step mode. Each step must be explicitly
requested with a 'p_do_step' instruction.
```

- **p_skip_redundant_colldet**:

```text
Specifies whether to skip furher collision checks between two convex objects using the simple solver
when they have enough contacts between them
```

- **p_sliding_time_mult**:

```text
Higher values will make sliding reach top speed faster (also depends on the slope)
```

- **p_splash_dist0**:

```text
Range start for splash event distance culling
```

- **p_splash_dist1**:

```text
Range end for splash event distance culling
```

- **p_splash_force0**:

```text
Minimum water hit force to generate splash events at p_splash_dist0
```

- **p_splash_force1**:

```text
Minimum water hit force to generate splash events at p_splash_dist1
```

- **p_splash_vel0**:

```text
Minimum water hit velocity to generate splash events at p_splash_dist0
```

- **p_splash_vel1**:

```text
Minimum water hit velocity to generate splash events at p_splash_dist1
```

- **p_tick_breakable**:

```text
Sets the breakable objects structure update interval
```

- **p_time_granularity**:

```text
Sets physical time step granularity.
Usage: p_time_granularity [0..0.1]
Used for internal tweaking only.
```

- **p_unproj_vel_scale**:

```text
Requested unprojection velocity is set equal to penetration depth multiplied by this number
```

- **p_use_distance_contacts**:

```text
Allows to use distance-based contacts (is forced off in multiplayer)
```

- **p_use_unproj_vel**:

```text
internal solver tweak
```

- **p_wireframe_distance**:

```text
Maximum distance at which wireframe is drawn on physics helpers
```

- **pl_DebugFootstepSounds**:

```text
Toggles debug messages of footstep sounds.
```

- **pl_clientInertia**:

```text
Override the interia of clients
```

- **pl_curvingSlowdownSpeedScale**:

```text
Player only slowdown speedscale when curving/leaning extremely.
```

- **pl_debugFallDamage**:

```text
Enables console output of fall damage information.
```

- **pl_debugInterpolation**:

```text
Debug interpolation
```

- **pl_debug_filter**:

```text

```

- **pl_debug_jumping**:

```text

```

- **pl_debug_movement**:

```text

```

- **pl_fallDamage_Normal_SpeedFatal**:

```text
Fatal fall speed in armor mode (13.5 m/s after falling freely for ca 20m).
```

- **pl_fallDamage_Normal_SpeedSafe**:

```text
Safe fall speed (in all modes, including strength jump on flat ground).
```

- **pl_fallDamage_SpeedBias**:

```text
Damage bias for medium fall speed: =1 linear, <1 more damage, >1 less damage.
```

- **pl_fallHeight**:

```text
The height above the ground at which the player starts to fall
```

- **pl_inputAccel**:

```text
Movement input acceleration
```

- **pl_jump_control.air_control_scale**:

```text
Scales base air control while in air
```

- **pl_jump_control.air_inertia_scale**:

```text
Scales inertia while in air
```

- **pl_jump_control.air_resistance_scale**:

```text
Scales base air resitance while in air
```

- **pl_ledgeClamber.cameraBlendWeight**:

```text
FP camera blending weight when performing ledge grab action. Do NOT change this from 1.0f lightly!
```

- **pl_ledgeClamber.debugDraw**:

```text
Turn on debug drawing of Ledge Clamber
```

- **pl_ledgeClamber.enableVaultFromStanding**:

```text
0 = No vault from standing; 1 = Vault when push towards obstacle and press jump; 2 = Vault when press jump; 3 = Vault when push towards obstacle
```

- **pl_lookAccel**:

```text
Look input acceleration (0=disabled acceleration)
```

- **pl_movement.crouch_SpeedScale**:

```text
Crouch speed scale
```

- **pl_movement.ground_timeInAirToFall**:

```text
Amount of time (in seconds) the player/ai can be in the air and still be considered on ground
```

- **pl_movement.ground_velocityToFall**:

```text
Minimal Z velocity to enable falling
```

- **pl_movement.mp_slope_speed_multiplier_downhill**:

```text
Changes how drastically slopes affect a players movement speed when moving downhill. Lower = less effect.
```

- **pl_movement.mp_slope_speed_multiplier_minHill**:

```text
Minimum threshold for the slope steepness before speed is affected (in degrees).
```

- **pl_movement.mp_slope_speed_multiplier_uphill**:

```text
Changes how drastically slopes affect a players movement speed when moving uphill. Lower = less effect.
```

- **pl_movement.power_sprint_targetFov**:

```text
Fov while sprinting in power mode
```

- **pl_movement.speedScale**:

```text
General speed scale
```

- **pl_movement.sprintStamina_debug**:

```text
For MP characters (eg. Assault defenders). Display debug values for the sprint stamina
```

- **pl_movement.sprint_SpeedScale**:

```text
Sprint speed scale
```

- **pl_movement.strafe_SpeedScale**:

```text
Strafe speed scale
```

- **pl_netAimLerpFactor**:

```text
Factor to lerp the remote aim directions by
```

- **pl_netSerialiseMaxSpeed**:

```text
Maximum char speed, used by interpolation
```

- **pl_nightvisionModeBinocular**:

```text
Sets the default nightvision mode for binocular item
```

- **pl_playerErrorSnapDistSquare**:

```text
Maximum distance between local and remote player pos to perform error snapping
```

- **pl_scaledMovement**:

```text
Movement is scaled directly by the gamepad stick offset
```

- **pl_serialisePhysVel**:

```text
Serialise the physics vel rathe rthan the stick
```

- **pl_swimBackSpeedMul**:

```text
Swimming backwards speed mul.
```

- **pl_swimBaseSpeed**:

```text
Swimming base speed.
```

- **pl_swimJumpSpeedBaseMul**:

```text
Swimming speed normal jump velocity mul (dolphin rocket).
```

- **pl_swimJumpSpeedCost**:

```text
Swimming speed shift+jump energy cost (dolphin rocket).
```

- **pl_swimJumpSpeedSprintMul**:

```text
Swimming speed shift+jump velocity mul (dolphin rocket).
```

- **pl_swimJumpStrengthBaseMul**:

```text
Swimming strength normal jump velocity mul (dolphin rocket).
```

- **pl_swimJumpStrengthCost**:

```text
Swimming strength shift+jump energy cost (dolphin rocket).
```

- **pl_swimJumpStrengthSprintMul**:

```text
Swimming strength shift+jump velocity mul (dolphin rocket).
```

- **pl_swimNormalSprintSpeedMul**:

```text
Swimming Non-Speed sprint speed mul.
```

- **pl_swimSideSpeedMul**:

```text
Swimming sideways speed mul.
```

- **pl_swimSpeedSprintSpeedMul**:

```text
Swimming Speed sprint speed mul.
```

- **pl_swimUpSprintSpeedMul**:

```text
Swimming sprint while looking up (dolphin rocket).
```

- **pl_swimVertSpeedMul**:

```text
Swimming vertical speed mul.
```

- **pl_velocityInterpAirControlScale**:

```text
Use velocity based interpolation method with gravity adjustment
```

- **pl_velocityInterpAirDeltaFactor**:

```text
Interpolation air motion damping factor (0-1)
```

- **pl_velocityInterpAlwaysSnap**:

```text
Set to true to continually snap the remote player to the desired position, for debug usage only
```

- **pl_velocityInterpPathCorrection**:

```text
Percentage of velocity to apply tangentally to the current velocity, used to reduce oscillation
```

- **pl_velocityInterpSynchJump**:

```text
Velocity interp jump velocity synching
```

- **pp_LoadOnlineAttributes**:

```text
Load online attributes
```

- **pp_RSFDebugWrite**:

```text
When RichSaveGames are enabled, save plain XML Data alongside for debugging
```

- **pp_RSFDebugWriteOnLoad**:

```text
When RichSaveGames are enabled, save plain XML Data alongside for debugging when loading a savegame
```

- **pp_RichSaveGames**:

```text
Enable RichSaveGame Format for SaveGames
```

- **profile**:

```text
Allows CPU profiling
Usage: profile #
Where # sets the profiling to:
	0: Profiling off
	1: Self Time
	2: Hierarchical Time
	3: Extended Self Time
	4: Extended Hierarchical Time
	5: Peaks Time
	6: Subsystem Info
	7: Calls Numbers
	8: Standard Deviation
	9: Memory Allocation
	10: Memory Allocation (Bytes)
	11: Stalls
	-1: Profiling enabled, but not displayed
Default is 0 (off)
```

- **profileStreaming**:

```text
Profiles streaming of different assets.
Usage: profileStreaming [0/1/2]
	1: Graph displayed as points.	2: Graph displayed as lines.Default is 0 (off).
```

- **profile_additionalsub**:

```text
Enable displaying additional sub-system profiling.
Usage: profile_additionalsub #
Where where # may be:
	0: no additional subsystem information
	1: display additional subsystem information
Default is 0 (off)
```

- **profile_allthreads**:

```text
Enables profiling of non-main threads.

```

- **profile_filter**:

```text
Profiles a specified subsystem.
Usage: profile_filter subsystem
Where 'subsystem' may be:
Renderer
3DEngine
Animation
AI
Entity
Physics
Sound
System
Game
Editor
Script
Network
```

- **profile_filter_thread**:

```text
Profiles a specified thread only.
Usage: profile_filter threadName
Where 'threadName' may be:
Main
Renderer
Streaming
etc...
```

- **profile_graph**:

```text
Enable drawing of profiling graph.
```

- **profile_graphScale**:

```text
Sets the scale of profiling histograms.
Usage: profileGraphScale 100
```

- **profile_network**:

```text
Enables network profiling
```

- **profile_pagefaults**:

```text
Enable drawing of page faults graph.
```

- **profile_peak**:

```text
Profiler Peaks Tolerance in Milliseconds
```

- **profile_peak_display**:

```text
hot to cold time for peak display
```

- **profile_sampler**:

```text
Set to 1 to start sampling profiling
```

- **profile_sampler_max_samples**:

```text
Number of samples to collect for sampling profiler
```

- **profile_smooth**:

```text
Profiler exponential smoothing interval (seconds)
```

- **profile_weighting**:

```text
Profiler smoothing mode: 0 = legacy, 1 = average, 2 = peak weighted, 3 = peak hold
```

- **q_Renderer**:

```text
Defines the quality of Renderer
Usage: q_Renderer 0=low/1=med/2=high/3=very high (default)
```

- **q_ShaderFX**:

```text
Defines the shader quality of FX
Usage: q_ShaderFX 0=low/1=med/2=high/3=very high
```

- **q_ShaderGeneral**:

```text
Defines the shader quality of General
Usage: q_ShaderGeneral 0=low/1=med/2=high/3=very high
```

- **q_ShaderGlass**:

```text
Defines the shader quality of Glass
Usage: q_ShaderGlass 0=low/1=med/2=high/3=very high
```

- **q_ShaderHDR**:

```text
Defines the shader quality of HDR
Usage: q_ShaderHDR 0=low/1=med/2=high/3=very high
```

- **q_ShaderIce**:

```text
Defines the shader quality of Ice
Usage: q_ShaderIce 0=low/1=med/2=high/3=very high
```

- **q_ShaderMetal**:

```text
Defines the shader quality of Metal
Usage: q_ShaderMetal 0=low/1=med/2=high/3=very high
```

- **q_ShaderPostProcess**:

```text
Defines the shader quality of PostProcess
Usage: q_ShaderPostProcess 0=low/1=med/2=high/3=very high
```

- **q_ShaderShadow**:

```text
Defines the shader quality of Shadow
Usage: q_ShaderShadow 0=low/1=med/2=high/3=very high
```

- **q_ShaderTerrain**:

```text
Defines the shader quality of Terrain
Usage: q_ShaderTerrain 0=low/1=med/2=high/3=very high
```

- **q_ShaderVegetation**:

```text
Defines the shader quality of Vegetation
Usage: q_ShaderVegetation 0=low/1=med/2=high/3=very high
```

- **q_ShaderWater**:

```text
Defines the shader quality of Water
Usage: q_ShaderWater 0=low/1=med/2=high/3=very high
```

- **r_3MonHack**:

```text
Enables 3 monitor hack hud in center
```

- **r_3MonHackHUDFOVX**:

```text
3 monitor hack hud in center - X FOV
```

- **r_3MonHackHUDFOVY**:

```text
3 monitor hack hud in center - Y FOV
```

- **r_3MonHackLeftCGFOffsetX**:

```text
3 monitor hack hud in center - Adds position offset in X direction to all left CGF planes
```

- **r_3MonHackRightCGFOffsetX**:

```text
3 monitor hack hud in center - Adds position offset in X direction to all right CGF planes
```

- **r_3PLAverageIlluminanceAttenuationMin**:

```text
Minimal value of attenuation caused by low average illuminance.
	0 -> 3pl can have zero intensity in the dark
	1 -> illumination of the scene won't attenuate 3pl at all
```

- **r_3PLAverageIlluminanceMultiplier**:

```text
Multiplies average illuminance of the previous frame to get the 3pl attenuation. This cannot make 3pl brighter, it only attenuates the lights in the dark.
```

- **r_3PLFalloffBegin**:

```text
Depth buffer value at which Three-Point Lighting falloff begins. Everything closer than this will fully receive TPL.
```

- **r_3PLFalloffEnd**:

```text
Depth buffer value at which Three-Point Lighting falloff ends. Everything farther than this will have no TPL.
```

- **r_3PLFillDirStr**:

```text
Three Point Lighting - Fill light dir written as a string
```

- **r_3PLGradientAngle**:

```text
Direction of the gradient.
	0: top -> down
	90: left -> right

```

- **r_3PLGradientEnd**:

```text
This is the value of the gradient at the bottom of the screen. There is a screen-space gradient going from top to bottom that is used to darken the 3pl.
Setting this to 1 effectivelly disables this feature.
```

- **r_3PLKeyDirStr**:

```text
Three Point Lighting - Key light dir written as a string
```

- **r_3PLMaxRelativeIlluminanceRatio**:

```text
We modulate 3PL intensity using pixel relative illuminance (using the regular lights, probes and GI).
This bounds the effect. Setting this to 1 effectivelly disables this feature.
Setting this to 2 will clamp the ratio between 0.5 and 2.
```

- **r_3PLRimDirStr**:

```text
Three Point Lighting - Rim light dir written as a string
```

- **r_AllowLiveMoCap**:

```text
Offers the LiveCreate MoCap Editor on Editor Startup when 1
```

- **r_AntialiasingMode**:

```text
Enables post process based anti-aliasing modes.
Usage: r_AntialiasingMode [n]
0: NO AA
1: SMAA 1X
2: SMAA 1TX
3: SMAA 2TX
4: TSAA

```

- **r_AntialiasingModeDebug**:

```text
Enables AA debugging views
Usage: r_AntialiasingModeDebug [zoom-factor]
```

- **r_AntialiasingModeEditor**:

```text
Sets antialiasing modes to editing mode (disables jitter on modes using camera jitter which can cause flickering of helper objects)
Usage: r_AntialiasingModeEditor [0/1]
```

- **r_AntialiasingModeSCull**:

```text
Enables post processed based aa modes stencil culling optimization

```

- **r_AntialiasingSMAAThreshold**:

```text
Specifies threshold (in normalized brightness) when SMAA considers edge-detection. Default 0.1
Bigger values requires larger brightness differences to trigger edge-detection, which is faster but antialiases less.
Smaller value allows smaller brightness differences to trigger edge-detection, which is slower but antialiases more.
```

- **r_AntialiasingTAAFalloffHiFreq**:

```text
Set TAA falloff for high frequencies (high contrast regions). Default 10.0
Bigger value increases temporal stability but also overall image blurriness
Smaller value decreases temporal stability but gives overall sharper image
```

- **r_AntialiasingTAAFalloffLowFreq**:

```text
Set TAA falloff for low frequencies (low contrast regions). Default 2.0
Bigger value increases temporal stability but also overall image blurriness
Smaller value decreases temporal stability but gives overall sharper image
```

- **r_AntialiasingTAAPattern**:

```text
Selects TAA sampling pattern.
  0: no subsamples
 ------------------
  1: optimal pattern for selected aa mode
  2: 2x
  3: 3x
  4: 4x aligned grid
  5: 4x rotated grid
  6: 8x
  7: 8x sparse grid
 ------------------
  8: 8x Halton
  9: 16x Halton
 10: 1024x Halton
 ------------------
 11: 4x N-queens (solution to 5)
 12: 5x N-queens
 13: 7x N-queens
 14: 8x N-queens (solution to 6)
 ------------------
 -1: Random
```

- **r_AntialiasingTAASharpening**:

```text
Enables TAA sharpening.

```

- **r_AntialiasingTSAAMipBias**:

```text
Sets mimap lod bias for TSAA (negative values for sharpening).

```

- **r_AntialiasingTSAASmoothness**:

```text
Adjusts smoothness of image under motion.

```

- **r_AntialiasingTSAASubpixelDetection**:

```text
Adjusts metric for detecting subpixel changes (higher: less flickering but more ghosting)

```

- **r_AuxGeomAutoScaleOver1080pWH**:

```text
Enable aux geom text scale for high resolutions. Values in-between 0 and 1 changes how much the text is scaled.
```

- **r_AuxGeomFontAutoScaleMultiplierOver1080pWH**:

```text
Multiplier for aux geom font auto scaling on high resolutions. Value 0.8 means the font is only scaled 80% of what it should based on the ratio between actual resolution and 1080p
```

- **r_BreakOnError**:

```text
calls debugbreak on illegal behaviour
```

- **r_Brightness**:

```text
Sets the display brightness.
Usage: r_Brightness 0.5
Default is 0.5.
```

- **r_CBufferUseNativeDepth**:

```text
1= enable, 0 = disable
Usage: r_CBufferUseNativeDepth [0/1]
```

- **r_CROConstantBufferPreallocationAmount**:

```text
Specify the number of constant buffers that will be preallocated (actual GPU buffers) during compiled render object pool creation.
0 - none
>0 - amount of buffers.
```

- **r_Character_NoDeform**:

```text

```

- **r_ChromaticAberration**:

```text
Chromatic aberration amount
Usage: r_ChromaticAberration [Value]
```

- **r_ColorBits**:

```text
Sets the color resolution, in bits per pixel. Default is 32.
Usage: r_ColorBits [32/24/16/8]
```

- **r_ColorGrading**:

```text
Enables color grading.
Usage: r_ColorGrading [0/1]
```

- **r_ColorGradingCharts**:

```text
Enables color grading via color charts.
Usage: r_ColorGradingCharts [0/1]
```

- **r_ColorGradingChartsCache**:

```text
Enables color grading charts update caching.
Usage: r_ColorGradingCharts [0/1/2/etc]
Default is 4 (update every 4 frames), 0 - always update, 1- update every other frame
```

- **r_ColorGradingFilters**:

```text
Enables color grading.
Usage: r_ColorGradingFilters [0/1]
```

- **r_ColorGradingLevels**:

```text
Enables color grading.
Usage: r_ColorGradingLevels [0/1]
```

- **r_ColorGradingSelectiveColor**:

```text
Enables color grading.
Usage: r_ColorGradingSelectiveColor [0/1]
```

- **r_ColorRangeCompression**:

```text
Enables color range compression to account for the limited RGB range of TVs.
  0: Disabled (full extended range)
  1: Range 16-235

```

- **r_ComputeMipMapGen**:

```text
Enagle mip map generation using compute pipeline: 0-false, 1-true
```

- **r_ComputeSkinning**:

```text
Activate skinning via compute shaders (0=disabled, 1=enabled, 2=forced)
```

- **r_ComputeSkinningDebugDraw**:

```text
Enable debug draw mode for geometry deformation
```

- **r_ComputeSkinningMorphs**:

```text
Apply morphs before skinning (0=disabled, 1=enabled, 2=forced)
```

- **r_ComputeSkinningTangents**:

```text
Calculate new tangents after skinning is computed (0=disabled, 1=enabled, 2=forced)
```

- **r_Contrast**:

```text
Sets the display contrast.
Usage: r_Contrast 0.5
Default is 0.5.
```

- **r_CubemapGenerationAdditionalWaitFramesWH**:

```text
Additional frames to wait before generating cubemap.
```

- **r_CubemapGenerationTimeout**:

```text
Maximum number of frames cubemap generation waits for streaming operations to complete.

```

- **r_CustomResHeight**:

```text
Height of custom resolution rendering
```

- **r_CustomResMaxSize**:

```text
Maximum resolution of custom resolution rendering
```

- **r_CustomResPreview**:

```text
Enable/disable preview of custom resolution rendering in viewport(0 - no preview, 1 - scaled to match viewport, 2 - custom resolution clipped to viewport
```

- **r_CustomResWidth**:

```text
Width of custom resolution rendering
```

- **r_CustomVisions**:

```text
Enables custom visions, like heatvision, binocular view, etc.
Usage: r_CustomVisions [0/1/2/3]
Default is 0 (disabled). 1 enables. 2 - cheaper version, no post processing. 3 - cheaper post version
```

- **r_D3D12AsynchronousCompute**:

```text
Enables asynchronous compute for different sub-systems.
Setting this to a non-zero value also enables concurrent UAV access.
0=Off,
+1=GPU-Skinning (default off),
+2=GPU-Particles (default off),
+4=Tiled-Shading (default off),
+8=Volumetric-Clouds (default off)
Usage: r_D3D12SubmissionThread [0-15]
```

- **r_D3D12BatchResourceBarriers**:

```text
Enables batching of resource barriers.
0=Off,
1=On,
2=On + actively rewrite redundant barriers
Usage: r_D3D12BatchResourceBarriers [0-2]
```

- **r_D3D12DebugLayerBreakpoints**:

```text
Enables breakpoints when the debuglayer reports a message.0: All breakpoints are off+1: Break on Corruption+2: Break on Error+4: Break on Warning+8: Break on Info+16: Break on Message
```

- **r_D3D12EnableDRED**:

```text
Enables DRED (Device Removed Extended Data), which is triggered when an error causes a device removed event.0: DRED is disabled1: DRED is enabled
```

- **r_D3D12EnablePIXCaptureRuntime**:

```text
When enabled the PIX capture runtime is loaded into the application which enables PIX captures without starting the application from PIX.0: Engine does not load the PIX capture runtime1: Engine loads the PIX capture runtime
```

- **r_D3D12EnablePlacedResources**:

```text
Enable the use of placed resources0: Placed resources are disabled1: Placed resources are enabled
```

- **r_D3D12EnableResourceTracking**:

```text
Enables tracking of GPU-resources which can be used to find faulting resources during a device removed event.0: Tracking is disabled1: Tracking is enabled
```

- **r_D3D12EnableTiledResources**:

```text
Enable the use of tiled resources0: Tiled resources are disabled1: Tiled resources are enabled
```

- **r_D3D12HardwareComputeQueue**:

```text
Enables the compute hardware queue.
0=Uses Direct Queue,
1=Uses Compute Queue
Usage: r_D3D12HardwareComputeQueue [0-1]
```

- **r_D3D12HardwareCopyQueue**:

```text
Enables the copy hardware queue.
0=Uses Direct Queue,
1=Uses Copy Queue
Usage: r_D3D12HardwareCopyQueue [0-1]
```

- **r_D3D12MaxCreatedCommandLists**:

```text
Maximum number of created Commandlists per CommandlistPool.
```

- **r_D3D12MaxGarbageResourceDescriptors**:

```text
Maximum number of descriptors waiting to be freed for reuse.
```

- **r_D3D12MaxGarbageSamplerDescriptors**:

```text
Maximum number of sampler-descriptors waiting to be freed for reuse.
```

- **r_D3D12MaxHeapDecommitLatency**:

```text
Maximum number of frames to delay decommiting D3D12 memory heaps.
```

- **r_D3D12MaxLiveCommandLists**:

```text
Maximum number of total live commandlists currently being executed by the GPU.
```

- **r_D3D12PIXGPUCapturerPath**:

```text
Path to the WinPixGpuCapturer.dll, which must be of the same version as the installed PIX application.
```

- **r_D3D12RecycleHeapMaxSize**:

```text
Maximum size(in megabytes) of the resource recycle heap. When this size is reached the system will wait for some resources to be released.
```

- **r_D3D12ReleaseHeapMaxSize**:

```text
Maximum size(in megabytes) of the resource release heap. When this size is reached the system will wait for some resources to be released.
```

- **r_D3D12SubmissionThread**:

```text
Run DX12 command queue submission tasks from dedicated thread(s).
0=Off,
+1=Direct (default off),
+2=Bundle (default off),
+4=Compute (default off),
+8=Copy (default on)
Usage: r_D3D12SubmissionThread [0-15]
```

- **r_D3D12UploadAllocatorSize**:

```text
Size (in megabytes) of the upload allocator.
```

- **r_D3D12WaitableSwapChain**:

```text
Enables highest performance in windowed mode (does not allow switching to fullscreen).
```

- **r_DebugFontRendering**:

```text
0=off, 1=display various features of the font rendering to verify function and to document usage
```

- **r_DebugGBuffer**:

```text
Debug view for gbuffer attributes
  0 - Disabled
  1 - Normals
  2 - Smoothness
  3 - Reflectance
  4 - Albedo
  5 - Lighting model
  6 - Translucency
  7 - Sun self-shadowing
  8 - Subsurface scattering
  9 - Specular validation overlay

```

- **r_DebugLayerEffect**:

```text
Enables debug mode (independent from game code) for layer effects
Usage: r_DebugLayerEffect [0/1/2/3/etc]
Default is 0 (disabled). 1: 1st layer mode, etc
```

- **r_DebugLightVolumes**:

```text
0=Disable
1=Enable
Usage: r_DebugLightVolumes[0/1]
```

- **r_DebugLights**:

```text
Display dynamic lights for debugging.
Usage: r_DebugLights [0/1/2/3]
Default is 0 (off). Set to 1 to display centers of light sources,
or set to 2 to display light centers and attenuation spheres, 3 to get light properties to the screen
```

- **r_DebugRefraction**:

```text
Debug refraction usage. Displays red instead of refraction
Usage: r_DebugRefraction
Default is 0 (off)
```

- **r_DebugRenderMode**:

```text

```

- **r_DeferredDecals**:

```text
Toggles deferred decals.
Usage: r_DeferredDecals [0/1]
Default is 1 (enabled), 0 Disabled. 
```

- **r_DeferredShading3PL**:

```text
Controlls the Three-Point Lighting for selected materials.
Usage: r_DeferredShading3PL [0/1/2/3]
	0 - disabled
	1 - enabled, without SSDO, without screen-space shadows
	2 - enabled, with SSDO, without screen-space shadows
	3 - enabled, with SSDO, with screen-space shadows
Default is 3

```

- **r_DeferredShadingAmbientLights**:

```text
Enables/Disables ambient lights.
Usage: r_DeferredShadingAmbientLights [0/1]
Default is 1 (enabled)
```

- **r_DeferredShadingAreaLights**:

```text
Enables/Disables more complex area lights processing.
Usage: r_DeferredShadingAreaLights [-1/0/1]
-1 prevents loading of area lights
Default is 1 (enabled)
```

- **r_DeferredShadingEnvProbes**:

```text
Toggles deferred environment probes rendering.
Usage: r_DeferredShadingEnvProbes [0/1]
Default is 1 (enabled)
```

- **r_DeferredShadingFilterGBuffer**:

```text
Enables filtering of GBuffer to reduce specular aliasing.

```

- **r_DeferredShadingLightLodRatio**:

```text
Sets deferred shading light intensity threshold.
Usage: r_DeferredShadingLightLodRatio [value]
Default is 0.1
```

- **r_DeferredShadingLightStencilRatio**:

```text
Sets screen ratio for deferred lights to use stencil (eg: 0.2 - 20% of screen).
Usage: r_DeferredShadingLightStencilRatio [value]
Default is 0.2
```

- **r_DeferredShadingLightVolumes**:

```text
Toggles Light volumes for deferred shading.
Usage: r_DeferredShadingLightVolumes [0/1]
Default is 1 (enabled)
```

- **r_DeferredShadingLights**:

```text
Enables/Disables lights processing.
Usage: r_DeferredShadingLights [0/1]
Default is 1 (enabled)
```

- **r_DeferredShadingSSS**:

```text
Toggles deferred subsurface scattering (requires full deferred shading)
```

- **r_DeferredShadingSortLights**:

```text
Sorts light by influence
Usage: r_DeferredShadingSortLights [0/1]
Default is 0 (off)
```

- **r_DeferredShadingTiled**:

```text
Toggles tile based shading.
0 - Off1 - Tiled forward shading for transparent objects
2 - [OBSOLETE, see KCD2-90063] Tiled deferred and forward shading
3 - Tiled deferred and forward shading using volume rasterization for light list generation
4 - Tiled forward shading for opaque and transparent objects (using volume rasterization)

```

- **r_DeferredShadingTiledDebug**:

```text
1 - Display debug info
2 - Light coverage visualization
3 - Shadow caster info
4 - Dynamic light info
5 - Shadow maps per frame info
```

- **r_DeferredShadingTiledHairQuality**:

```text
Tiled shading hair quality
0 - Regular forward shading
1 - Tiled shading on selected assets and more accurate probe blending
2 - Full tiled shading with high quality shadow filter

```

- **r_DepthBits**:

```text
Sets the depth precision, in bits per pixel. Default is 24.
Usage: r_DepthBits [32/24/16]
```

- **r_DepthOfField**:

```text
Enables depth of field.
Usage: r_DepthOfField [0/1/2]
Default is 0 (disabled). 1 enables, 2 hdr time of day dof enabled
```

- **r_DepthOfFieldBokehQuality**:

```text
Sets depth of field bokeh quality (samples multiplier).
Usage: r_DepthOfFieldBokeh [0/1/etc]
Default is 0: ingame quality, 1: high quality mode
```

- **r_DepthOfFieldMode**:

```text
Selects DOF implementation (0: sprite-based, 1: gather-based).

```

- **r_DetailDistance**:

```text
Distance used for per-pixel detail layers blending.
Usage: r_DetailDistance (1-20)
Default is 6.
```

- **r_DetailTextures**:

```text
Toggles detail texture overlays.
Usage: r_DetailTextures [0/1]
Default is 1 (detail textures on).
```

- **r_DisplayInfo**:

```text
Toggles debugging information display.
Usage: r_DisplayInfo [0=off/1=show/2=enhanced/3=minimal/4=fps bar/5=heartbeat]
```

- **r_DisplayInfoFontScale**:

```text
Applies a scaling to the font size for r_displayInfo's content.
```

- **r_DisplayInfoOffsetX**:

```text
Applies an right side offset to the r_displayInfo's content, default 5.0
```

- **r_DisplayInfoTargetDrawCalls**:

```text
Specifies the max draw call count where display info will highlight a warning
0 disables the warning
```

- **r_DisplayInfoTargetPolygons**:

```text
Specifies the max polygon count where display info will highlight a warning
0 disables the warning
```

- **r_DrawNearFarPlane**:

```text
Default is 40.
```

- **r_DrawNearFoV**:

```text
Sets the FoV for drawing of near objects.
Usage: r_DrawNearFoV [n]
Default is 60.
```

- **r_DrawNearShadows**:

```text
Enable shadows for near objects.
Usage: r_DrawNearShadows [0/1]

```

- **r_DrawNearZRange**:

```text
Default is 0.1.
```

- **r_Driver**:

```text
Sets the renderer driver ( DX11/DX12/GL/VK/AUTO ).
Specify in system.cfg like this: r_Driver = "DX11"
```

- **r_DuplicateLastFrameOnCameraChangeWH**:

```text
Trigger last frame duplication when camera change is detected.
```

- **r_DuplicateLastFrameWH**:

```text
Enables last frame duplication feature
0=Disable
Other=Number of frames last frame is duplicated for

```

- **r_DynTexSourceSharedRTHeight**:

```text
Height override of shared RT for dynamic texture sources. Takes effect when bigger than 0.
```

- **r_DynTexSourceSharedRTWidth**:

```text
Width override for shared RT for dynamic texture sources. Takes effect when bigger than 0.
```

- **r_DynTexSourceUseSharedRT**:

```text
Defines if dynamic flash textures are rendered into shared RT
Usage: r_DynTexSourceUseSharedRT [0/1].
0: Use Unique RT for each dynamic flash texture (with alpha support)
1: Use Shared RT for all dynamic flash textures (no alpha support!)
Disabled by default. Requires level reload to change.
```

- **r_EnableDebugLayer**:

```text
Enable Graphics API specific debug layer0: Debug layers disabled1: Debug layers enabled2: (DX12 specific) Enable GBV (GPU-Based Validation) in addition to debug layers
```

- **r_EnableFramePacing**:

```text
Enable frame pacing code.0: Disabled1: Enabled
```

- **r_EnableNvidiaAftermath**:

```text
Enable Nvidia Aftermath0: Nvidia Aftermath disabled1: Nvidia Aftermath enabled
```

- **r_EnableNvidiaAftermathCallstackCollection**:

```text
Collect command list callstacks, when GPU crash happens0: Callstack collection disabled1: Callstack collection enabled
```

- **r_EnableNvidiaAftermathShaderDumps**:

```text
Enable Nvidia Aftermath Shader dumps. This saves a debug file related to the shader. 0: Shader dumps disabled1: Shader dumps enabled
```

- **r_EnableRSCResourceTrimming**:

```text
If true, resource trimming will also remove trimmed entries from RSC
```

- **r_EnvCMResolution**:

```text
Sets resolution for target environment cubemap, in pixels.
Usage: r_EnvCMResolution #
where # represents:
	0: 64
	1: 128
	2: 256
Default is 2 (256 by 256 pixels).
```

- **r_EnvTexResolution**:

```text
Sets resolution for 2d target environment texture, in pixels.
Usage: r_EnvTexResolution #
where # represents:
	0: 64
	1: 128
	2: 256
	3: 512
Default is 3 (512 by 512 pixels).
```

- **r_EnvTexUpdateInterval**:

```text
Sets the interval between environmental 2d texture updates.
Usage: r_EnvTexUpdateInterval 0.001
Default is 0.001.
```

- **r_ExcludeMesh**:

```text
Exclude or ShowOnly the named mesh from the render list.
Usage: r_ExcludeShader Name
Usage: r_ExcludeShader !Name
Sometimes this is useful when debugging.
```

- **r_ExcludeShader**:

```text
Exclude the named shader from the render list.
Usage: r_ExcludeShader ShaderName
Sometimes this is useful when debugging.
```

- **r_FlareHqShafts**:

```text
Toggles high quality mode for point light shafts.
Usage: r_FlareHqShafts [0/1]
Default is 1 (on).
```

- **r_Flares**:

```text
Toggles lens flare effect.
Usage: r_Flares [0/1]
Default is 1 (on).
```

- **r_FlaresChromaShift**:

```text
Set flares chroma shift amount.
Usage: r_FlaresChromaShift [n]
Default is 6
0 Disables
```

- **r_FlaresEnableColorGrading**:

```text
Toggles color grading on lens flares.
Usage : r_FlaresEnableColorGrading [n]
Default is 1 (on).
```

- **r_FlaresIrisShaftMaxPolyNum**:

```text
Set the maximum number of polygon of IrisShaft.
Usage : r_FlaresIrisShaftMaxPolyNum [n]
Default is 200
0 Infinite
```

- **r_FlaresTessellationRatio**:

```text
Set the tessellation rate of flares. 1 is the original mesh.
Usage : r_FlaresTessellationRatio 0.5
Default is 1.0
Range is from 0 to 1
```

- **r_FlashDynTextureResQuality**:

```text
Texture resolution quality of flash materials.
 0: Texture is used in original resolution independent of screen resolution.
	1: Texture is used in proper resolution in relation to screen resolution.	2 and more: Texture is used in resolution divided by value and in relation to screen resolution.Default is 1.
```

- **r_FlushToGPU**:

```text
Configure gpu-work flushing behaviour0: Flush at end-frame only1: Flush at positions where the character of the work changes drastically (Flash vs. Scene vs. Post vs. Uploads etc.)
```

- **r_FogDepthTest**:

```text
Enables per-pixel culling for deferred volumetric fog pass.
Fog computations for all pixels closer than a given depth value will be skipped.
Usage: r_FogDepthTest z with...
  z = 0, culling disabled
  z > 0, fixed linear world space culling depth
  z < 0, optimal culling depth will be computed automatically based on camera direction and fog settings
```

- **r_FogShadows**:

```text
Enables deferred volumetric fog shadows
Usage: r_FogShadows [0/1/2]
  0: off
  1: standard resolution
  2: reduced resolution

```

- **r_FogShadowsMode**:

```text
Ray-casting mode for shadowed fog
Usage: r_FogShadowsMode [0/1]
  0: brute force shadowmap sampling
  1: optimized shadowmap sampling

```

- **r_FogShadowsWater**:

```text
Enables volumetric fog shadows for watervolumes
```

- **r_Fullscreen**:

```text
Toggles fullscreen mode. Default is 1 in normal game and 0 in DevMode.
Usage: r_Fullscreen [0=window/1=fullscreen]
```

- **r_FullscreenNativeRes**:

```text
Toggles native resolution upscaling.
If enabled, scene gets upscaled from specified resolution while UI is rendered in native resolution.
```

- **r_Gamma**:

```text
Adjusts the graphics card gamma correction (fast, needs hardware support, affects also HUD and desktop)
Usage: r_Gamma 1.0
1 off (default)
```

- **r_GeomCacheInstanceThreshold**:

```text
Threshold after which instancing is used to draw geometry cache pieces
```

- **r_GetScreenShot**:

```text
To capture one screenshot (variable is set to 0 after capturing)
0=do not take a screenshot (default), 1=save a screenshot (together with .HDR if enabled), 2=save a screenshot
```

- **r_GpuParticles**:

```text
Enables processing of GPU particles (Default: 1).
0 - Disabled.
1 - Enabled.

```

- **r_GpuParticlesGpuBoundingBox**:

```text
Compute bounding boxes on GPU (Default: 0).
0 - Bounding box estimated on CPU.
1 - Bounding box taken from GPU particles.

```

- **r_GpuPhysicsFluidDynamicsDebug**:

```text
Draw GPU Fluid Particles for debugging purposes. This drastically decreases simulation performance. (Default: 1).
0 - Don't draw any debug information.
1 - Draw acceleration structure bounds and fluid particle positions.

```

- **r_GrainEnableExposureThreshold**:

```text
Enable/Disable Legacy Exposure-based grain threshold
Usage: r_GrainEnableExposureThreshold [Value]
Default is 0
```

- **r_GraphicsPipelineMobile**:

```text
Run limited pipeline specifically optimized for mobile devices.
  1: Using compressed micro GBuffer
  2: Using standard GBuffer  3: Mobile VR pipeline
```

- **r_GraphicsPipelinePassScheduler**:

```text
Toggles render pass scheduler that submits passes in a deferred way, allowing improved multithreading and barrier scheduling.
```

- **r_HDRBloom**:

```text
Enables bloom/glare.
Usage: r_HDRBloom [0/1]

```

- **r_HDRBloomQuality**:

```text
Set bloom quality (0: low, 1: medium, 2: high)

```

- **r_HDRDebug**:

```text
Toggles HDR debugging info (to debug HDR/eye adaptation)
Usage: r_HDRDebug
0 off (default)
1 display avgerage luminance, estimated luminance, and exposure values
2 show gamma-corrected scene target without tone-mapping processing
3 identify illegal colors (grey=normal, red=NotANumber, green=negative)

```

- **r_HDRDithering**:

```text
Toggles hdr dithering.
  0: disabled
  1: enabled

```

- **r_HDREyeAdaptationMode**:

```text
Set the eye adaptation (auto exposure) mode.
  1: Standard auto exposure (using EV values)
  2: Legacy auto exposure for backwards compatibility (CE 3.6 to 3.8.1)
```

- **r_HDREyeAdaptationSpeed**:

```text
HDR rendering eye adaptation speed
Usage: r_EyeAdaptationSpeed [Value]
```

- **r_HDRGrainAmount**:

```text
HDR camera grain amount
Usage: r_HDRGrainAmount [Value]
Modulates the grain configured in FlowGraph or TimeOfDay.
```

- **r_HDRRangeAdapt**:

```text
Enable/Disable HDR range adaptation (improve precision - minimize banding) 
Usage: r_HDRRangeAdapt [Value]
Default is 1
```

- **r_HDRRangeAdaptLBufferMax**:

```text
Set range adaptation max adaptation for light buffers (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptLBufferMax [Value]
Default is 0.25f
```

- **r_HDRRangeAdaptLBufferMaxRange**:

```text
Set range adaptation max range adaptation for light buffers (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptLBufferMaxRange [Value]
Default is 2.0f
```

- **r_HDRRangeAdaptMax**:

```text
Set HDR range adaptation max adaptation (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptMax [Value]
Default is 1.0f
```

- **r_HDRRangeAdaptMaxRange**:

```text
Set HDR range adaptation max adaptation (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptMaxRange [Value]
Default is 4.0f
```

- **r_HDRRangeAdaptationSpeed**:

```text
HDR range adaption speed
Usage: r_HDRRangeAdaptationSpeed [Value]
```

- **r_HDRTexFormat**:

```text
Sets HDR render target precision. Default is 1.
Usage: r_HDRTexFormat [Value]
  0: (lower precision)
  1: (standard precision)
  2: (extended precision)

```

- **r_HDRVignetting**:

```text
HDR viggneting
Usage: r_HDRVignetting [Value]
Default is 1 (enabled)
```

- **r_HeadlessStartup**:

```text
Allow creating the render device without any connected monitors.
```

- **r_Height**:

```text
Sets the display height, in pixels.
Usage: r_Height [600/768/..]
```

- **r_HeightMapAO**:

```text
Large Scale Ambient Occlusion based on height map approximation of the scene
0=off
1=quarter resolution
2=half resolution
3=full resolution
```

- **r_HeightMapAOAmount**:

```text
Height Map Ambient Occlusion Amount
```

- **r_HeightMapAORange**:

```text
Range of height map AO around viewer in meters
```

- **r_HeightMapAOResolution**:

```text
Texture resolution of the height map used for HeightMapAO
```

- **r_HideFogVolumesInCubemaps**:

```text
Stops fog volumes being drawn during cubemap generation.

```

- **r_HideSSReflectionsInCubemaps**:

```text
Stops screen-space-reflections being drawn during cubemap generation.

```

- **r_HideSunInCubemaps**:

```text
Stops the sun being drawn during cubemap generation.

```

- **r_HideVolumetricFogInCubemaps**:

```text
Stops volumetric fog being drawn during cubemap generation.

```

- **r_InitialWindowSizeRatio**:

```text
Sets the size ratio of the initial application window in relation to the primary monitor resolution.
Usage: r_InitialWindowSizeRatio [1.0/0.666/..]
```

- **r_Log**:

```text
Logs rendering information to Direct3DLog.txt.
Use negative values to log a single frame.
Usage: r_Log +/-[0/1/2/3/4]
	1: Logs a list of all shaders without profile info.
	2: Log contains a list of all shaders with profile info.
	3: Logs all API function calls.
	4: Highly detailed pipeline log, including all passes,
			states, lights and pixel/vertex shaders.
Default is 0 (off). Use this function carefully, because
log files grow very quickly.
```

- **r_LogShaders**:

```text
Logs shaders info to Direct3DLogShaders.txt
0: off
1: normal
2: extended
```

- **r_LogTexStreaming**:

```text
Logs streaming info to Direct3DLogStreaming.txt
0: off
1: normal
2: extended
```

- **r_LogVBuffers**:

```text
Logs vertex buffers in memory to 'LogVBuffers.txt'.
Usage: r_LogVBuffers [0/1]
Default is 0 (off).
```

- **r_LogVidMem**:

```text
Logs vid mem information to VidMemLog.txt.
```

- **r_MaterialsBatching**:

```text
Toggles materials batching.
Usage: r_MaterialsBatching [0/1]
Default is 1 (on). Set to 0 to disable.
```

- **r_MaxFrameGCLatency**:

```text
Maximum number of frames that unused resources are not garbage collection and available for reuse (in frames).
```

- **r_MaxFrameGCReuseSize**:

```text
Maximum size for unused resources being made available available for reuse (in MB).
```

- **r_MaxFrameLatency**:

```text
Maximum number of frames that can be in-flight on the GPU
```

- **r_MeasureOverdrawScale**:

```text

```

- **r_MergeShadowDrawcalls**:

```text
Enabled Merging of RenderChunks for ShadowRendering
Default is 1 (enabled). 0 disabled
```

- **r_MeshInstancePoolSize**:

```text
The size of the pool for volatile render data in kilobytes. Disabled by default on PC (mesh data allocated on heap).Enabled by default on consoles. Requires app restart to change.
```

- **r_MeshPoolForceFreeAfterUpdate**:

```text
Force mesh pool (malloc) allocations to free after the GPU buffer update.Fixes allocations not being freed when RENDERMESH_BUFFER_ENABLE_DIRECT_ACCESS is off on consoles.Disabled by default on PC.Enabled by default on consoles. Requires app restart to change.
```

- **r_MeshPoolSize**:

```text
The size of the pool for render data in kilobytes. Disabled by default on PC (mesh data allocated on heap).Enabled by default on consoles. Requires app restart to change.
```

- **r_MeshPrecache**:

```text

```

- **r_MobilePipelineHDRMode**:

```text
Set the mobile pipeline HDR mode.
  0: Using fixed exposure, and use ACES Filmic Curve.
  1: Measure luminance, apply exposure, and use Hable Filmic Curve.
```

- **r_MobilePipelineLumMeasMode**:

```text
Specifies where to do the mobile pipeline luminance measurement.
  0: Standard graphics pipeline tone mapping pipeline on the hdr output.
  1: Sample HDR target and calculate average luminance for tone mapping on the CPU.

```

- **r_MobilePipelineLumMeasSampleCount**:

```text
Specifies number of samples taken from hdr output to calculate average luminance.
This cvar is only considered when r_MobilePipelineLumMeasMode=1.

```

- **r_MotionBlur**:

```text
Enables per object and camera motion blur.
Usage: r_MotionBlur [0/1/2/3]
Default is 1 (camera motion blur on).
1: camera motion blur
2: camera and object motion blur
3: debug mode

```

- **r_MotionBlurCameraMotionScale**:

```text
Reduces motion blur for camera movements to account for a fixed focus point of the viewer.
Default: 0.2
```

- **r_MotionBlurGBufferVelocity**:

```text
Pack velocity output in g-buffer.
Usage: r_MotionBlurGBufferVelocity [0/1]
Default is 1 (enabled). 0 - disabled

```

- **r_MotionBlurInlineWithAutoExposure**:

```text
Inlines the motion blur computation with the auto-exposure pass to reduce on memory bandwidth usage.
Default is enabled.
```

- **r_MotionBlurMaxViewDist**:

```text
Sets motion blur max view distance for objects.
Usage: r_MotionBlurMaxViewDist [0...1]
Default is 16 meters
```

- **r_MotionBlurQuality**:

```text
Set motion blur sample count.
Usage: r_MotionBlurQuality [0/1]
0 - low quality, 1 - medium quality, 2 - high quality

```

- **r_MotionBlurShutterSpeed**:

```text
Sets camera exposure time for motion blur as 1/x seconds.
Default: 250 (1/250 of a second)
```

- **r_MotionBlurThreshold**:

```text
Object motion blur velocity threshold.
Usage: r_MotionBlurThreshold (val)
Default is 0.0001.  0 - disabled

```

- **r_MotionBlurTileFastGatherDebug**:

```text
Visualize motion blur fast gather tile optimization for debugging.
Usage: r_MotionBlurTileFastGatherDebug [0/1].
Default is 0 - Disabled. 1 - enabled.
```

- **r_MotionBlurTileFastGatherThreshold**:

```text
Tile max-min velocity threshold for fast gather that skips velocity/depth samples.
Higher values allow more pixels to use the fast path, but too high values may lead to artifacts.
Usage: r_MotionBlurTileFastGatherThreshold [0-1].
Default: 0.15
```

- **r_MotionBlurTileSize**:

```text
Motion blur tile size in pixels for storing dominant motion direction used for the blur.
Tile size must be multiple of 8x8 to work with the initial thread group internal downscale.
Tile size is a trade-off between maximum blur radius and block artifacts.
If the tile size is too large the tiles are more visible due to using a single, dominant blur direction per tile.
If the tile size is too small it limits the blur radius too much.
Larger tiles can make the max velocity tile computation less efficient since that puts more work on less threads.
Larger tiles lead to less tiles being able to use the fast gather optimization.
Larger tiles require higher sample counts to ensure consistent blur quality in the worst case.
Usage: r_MotionBlurTileSize [8, 16, 24, 32...].
Default is 32.
```

- **r_MotionVectors**:

```text
Enables generation of motion vectors for dynamic objects

```

- **r_MouseControllerEmulation**:

```text
Should the controller be used to emulate mouse input?
```

- **r_MouseCursorOffsetX**:

```text
X offset for the mouse cursor to render at
```

- **r_MouseCursorOffsetY**:

```text
Y offset for the mouse cursor to render at
```

- **r_MouseCursorTexture**:

```text
Sets the image (dds file) to be displayed as the mouse cursor
```

- **r_MouseUseSystemCursor**:

```text
Should the application use the hardware mouse cursor?
```

- **r_MultiGPU**:

```text
Toggles MGPU support. Should usually be set before startup.
  0: force off
  1: automatic detection (reliable with SLI, does not respect driver app profiles with Crossfire)

```

- **r_MultiSampleCount**:

```text
Sample count used when MSAA is enabled.

```

- **r_MultiThreaded**:

```text
Enables dedicated render thread in game.
  0: disabled
  1: enabled
  2: automatic detection
```

- **r_MultiThreadedDrawing**:

```text
Enables submission of render items in dedicated jobs.
  0: disabled
  N: use specified number of concurrent draw recording jobs
 -1: automatically choose optimal number of recording jobs
 -2: number of recording jobs equal to the half of job worker threads

```

- **r_MultiThreadedDrawingMinJobSize**:

```text
Specifies threshold for creation of recording jobs.
  0: no threshold
  N: minimum number of render items per job

```

- **r_NightVision**:

```text
Toggles nightvision enabling.
Usage: r_NightVision [0/1]
Default is 2 (HDR). Set to 1 (older version - kept for backward compatibility)Set to 3 to enable debug mode (force enabling).Set to 0 to completely disable nightvision. 
```

- **r_NightVisionBrightLevel**:

```text
Set nightvision bloom brightlevel.

```

- **r_NightVisionCamMovNoiseAmount**:

```text
Set nightvision noise amount based on camera movement.

```

- **r_NightVisionCamMovNoiseBlendSpeed**:

```text
Set nightvision noise amount blend speed.

```

- **r_NightVisionFinalMul**:

```text
Set nightvision final color multiplier for fine tunning.

```

- **r_NightVisionSonarLifetime**:

```text
Set nightvision sonar hints lifetime.

```

- **r_NightVisionSonarMultiplier**:

```text
Set nightvision sonar hints color multiplier.

```

- **r_NightVisionSonarRadius**:

```text
Set nightvision sonar hints radius.

```

- **r_NoDraw**:

```text
Disable submitting of certain draw operations: 1-(Do not process render objects at all), 2-(Do not submit individual render objects), 3-(No DrawIndexed) 4-Disable entire GraphicsPipeline execution.
```

- **r_NoDrawNear**:

```text
Disable drawing of near objects.
Usage: r_NoDrawNear [0/1]
Default is 0 (near objects are drawn).
```

- **r_NoHWGamma**:

```text
Sets renderer to ignore hardware gamma correction.
Usage: r_NoHWGamma [0/1/2]
0 - allow hardware gamma correction
1 - disable hardware gamma correction
2 - disable hardware gamma correction in Editor

```

- **r_NormalsLength**:

```text
Sets the length of displayed vectors.
r_NormalsLength 0.2
Default is 0.2 (meters). Used with r_ShowTangents and r_ShowNormals.
```

- **r_OverdrawComplexity**:

```text
Enables visualization of depth- and quad-overdraw complexity.
Making the mode negative results in all evaluations taking ZPrePass into account.Usage: r_OverdrawComplexity [0/1/2/3/4]
0: no overdraw shown (default)
1: overdraw without any culling
2: overdraw with depth culling (z-test)
3: rejection rate with depth culling (z-test)
4: overdraw without any culling, including quad-overdraw (dead lanes)
5: overdraw with depth culling (z-test), including quad-overdraw (dead lanes)
6: rejection rate with depth culling (z-test), including quad-overdraw (dead lanes)

```

- **r_OverdrawComplexityBluePoint**:

```text
Specifies which integer count is anchored at dark blue (2,25,147). Default is 4.
Usage: r_OverdrawComplexityBluePoint [n]

```

- **r_OverdrawComplexityCompression**:

```text
Amount of compression applied after logarithmic mapping (linear divisor).
Usage: r_OverdrawComplexityCompression [n]

```

- **r_OverdrawComplexitySmoothness**:

```text
Smoothness of the logarithmic mapping of the counts (the value is the log-base).
Smaller values produce a steeper mapping than larger values.
Usage: r_OverdrawComplexitySmoothness [n]

```

- **r_OverscanBorderScaleX**:

```text
Sets the overscan border width scale
Usage: r_OverscanBorderScaleX [0.0->0.25]
```

- **r_OverscanBorderScaleY**:

```text
Sets the overscan border height scale
Usage: r_OverscanBorderScaleY [0.0->0.25]
```

- **r_OverscanBordersDrawDebugView**:

```text
Toggles drawing overscan borders.
Usage: r_OverscanBordersDrawDebugView [0=off/1=show]
```

- **r_PSOCompilationWorkerThreads**:

```text
Number of PSO compilation workers
```

- **r_ParticleMaxVerticePoolSize**:

```text

```

- **r_ParticleVerticePoolSize**:

```text

```

- **r_ParticlesDebug**:

```text
Particles debugging
Usage: 
0 disabled
1 particles screen coverage (red = bad, blue = good)
2 particles overdraw (white = really bad, red = bad, blue = good)
```

- **r_ParticlesHalfRes**:

```text
Enables (1) or forces (2) rendering of particles in a half-resolution buffer.
Usage: r_ParticlesHalfRes [0/1/2]
```

- **r_ParticlesHalfResAmount**:

```text
Sets particle half-res buffer to half (0) or quarter (1) screen size.
Usage: r_ParticlesHalfResForce [0/1]
```

- **r_ParticlesHalfResBlendMode**:

```text
Specifies which particles can be rendered in half resolution.
Usage: r_ParticlesHalfResBlendMode [0=alpha / 1=additive]
```

- **r_ParticlesInstanceVertices**:

```text
Enable instanced-vertex rendering.
Usage: r_ParticlesInstanceVertices [0/1]
```

- **r_ParticlesMaxVertexPoolSize**:

```text
Max size of Particles' buffers
```

- **r_ParticlesRefraction**:

```text
Enables refractive particles.
Usage: r_ParticlesRefraction [0/1]
```

- **r_ParticlesSoftIsec**:

```text
Enables particles soft intersections.
Usage: r_ParticlesSoftIsec [0/1]
```

- **r_ParticlesTessellation**:

```text
Enables particle tessellation for higher quality lighting. (DX11 only)
```

- **r_ParticlesTessellationTriSize**:

```text
Sets particles tessellation triangle screen space size in pixels (DX11 only)
```

- **r_ParticlesVertexPoolSize**:

```text
Initial size Particles' buffers
```

- **r_PipelineResourceDiscardAfterFrame**:

```text
0=Off,
1=Allow for CharacterToolPipeline only,
2=Allow for all graphics pipelines
```

- **r_PipelineStateCollectionMode**:

```text
Enable collection of information for pipeline state precaching (see r_PipelineStatePrecacheMode)Usage: r_PipelineStateCollectionMode [0/1/2]
0 - Off
1 - Store pipeline state information in USER folder
2 - Send pipeline state information to remote shader compiler
3 - (default) Store pipeline state information in USER folder AND send to remote shader compiler
```

- **r_PipelineStatePrecacheMode**:

```text
Enable precaching of pipeline states during loading to avoid stalls at runtime
Usage: r_PipelineStatePrecacheMode [0-7]
0 - Off
1 - Read pipeline state information from disk but don't precache any API datastructures
2 - Precache PSOs to memory (async)
3 - Precache PSOs to memory (renderthread)
4 - Precache shaders and PSOs to the library (async)
5 - Precache shaders and PSOs to the library (renderthread)6 - Precache only shaders (async)
7 - Precache only shaders (renderthread)
```

- **r_PostProcessDebugMode**:

```text
Changes post processing special effects debug mode.
Usage: r_PostProcessDebugMode [0/1/2]
0: Disabled
1: Enables and displays active effects
2: Additional debugging
```

- **r_PostProcessEffects**:

```text
Enables post processing special effects.
Usage: r_PostProcessEffects [0/1]
```

- **r_PostProcessFilters**:

```text
Enables post processing special effects filters.
Usage: r_PostProcessEffectsFilters [0/1]
Default is 1 (enabled). 0 disabled
```

- **r_PostProcessGameFx**:

```text
Enables post processing special effects game fx.
Usage: r_PostProcessEffectsGameFx [0/1]
Default is 1 (enabled). 0 disabled
```

- **r_PostProcessHUD3D**:

```text
Toggles 3d hud post processing.
Usage: r_PostProcessHUD3D [0/1]
Default is 1 (post process hud enabled). 0 Disabled
```

- **r_PostProcessHUD3DCache**:

```text
Enables 3d hud caching overframes.
Usage: r_PostProcessHUD3DCache [0/1/2/3]
Default is 0 (disabled). 1 Cache every 1 frame. 2 Every 2 frames. Etc
```

- **r_PostProcessHUD3DDebugView**:

```text
Debug views for 3d hud post processing.
Usage: CV_r_PostProcessHUD3DDebugView [0/1/2/3]
Default is 0 (disabled). 1 Solid fill. 2 Wire frame. 3 Unwrap mesh onto flash texture
```

- **r_PostProcessHUD3DGlowAmount**:

```text
Controls 3D HUD 'Glow' Amount.
Usage: r_PostProcessHUD3DGlowAmount [> 0.0]
Default is 1.0f, higher = more glow
```

- **r_PostProcessHUD3DShadowAmount**:

```text
Controls 3D HUD 'Shadow' Amount.
Usage: r_PostProcessHUD3DShadowAmount [> 0.0]
Default is 1.7f, higher = darker
```

- **r_PostProcessHUD3DStencilClear**:

```text
Enables stencil clears for flash masks when rendering HUD in 3D post process.
Usage: r_PostProcessHUD3DNoStencilClear [0/1]
Default is 1 (enabled), 0 disabled
```

- **r_PostProcessNanoGlassDebugView**:

```text
Debug views for Nano Glass post processing.
Usage: CV_r_PostProcessNanoGlassDebugView [0/1]
Default is 0 (disabled). 1 Wire frame.
```

- **r_PostProcessParamsBlending**:

```text
Enables post processing effects parameters smooth blending
Usage: r_PostProcessEffectsParamsBlending [0/1]
Default is 1 (enabled).
```

- **r_PostProcessReset**:

```text
Enables post processing special effects reset.
Usage: r_PostProcessEffectsReset [0/1]
Default is 0 (disabled). 1 enabled
```

- **r_PostprocessParamsBlendingTimeScale**:

```text
Sets post processing effects parameters smooth blending time scale
Usage: r_PostprocessParamsBlendingTimeScale [scale]
Default is 12.0f.
```

- **r_PrintMemoryLeaks**:

```text

```

- **r_RC_AutoInvoke**:

```text
Enable calling the resource compiler (rc.exe) to compile assets at run-time if the date check
shows that the destination is older or does not exist.
Usage: r_RC_AutoInvoke 0 (default is 1)
```

- **r_Rain**:

```text
Enables rain rendering
Usage: r_Rain [0/1/2]
0 - disabled1 - enabled2 - enabled with rain occlusion
```

- **r_RainAmount**:

```text
Sets rain amount
Usage: r_RainAmount
```

- **r_RainDistMultiplier**:

```text
Rain layer distance from camera multiplier
```

- **r_RainDropsEffect**:

```text
Enable RainDrops effect.
Usage: r_RainDropEffect [0/1/2]
0: force off
1: on (default)
2: on (forced)
```

- **r_RainIgnoreNearest**:

```text
Disables rain wet/reflection layer for nearest objects
Usage: r_RainIgnoreNearest [0/1]

```

- **r_RainMaxViewDist**:

```text
Sets rain max view distance
Usage: r_RainMaxViewDist
```

- **r_RainMaxViewDist_Deferred**:

```text
Sets maximum view distance (in meters) for deferred rain reflection layer
Usage: r_RainMaxViewDist_Deferred [n]
```

- **r_RainOccluderSizeTreshold**:

```text
Only objects bigger than this size will occlude rain
```

- **r_RainPuddleWindSpeedWH**:

```text
Speed of puddle movement affected by wind
```

- **r_ReflectTextureSlots**:

```text
Reflect texture slot information from shader
```

- **r_Reflections**:

```text
Toggles reflections.
Usage: r_Reflections [0/1]
Default is 1 (reflects).
```

- **r_ReflectionsOffset**:

```text

```

- **r_ReflectionsQuality**:

```text
Toggles reflections quality.
Usage: r_ReflectionsQuality [0/1/2/3]
Default is 0 (terrain only), 1 (terrain + particles), 2 (terrain + particles + brushes), 3 (everything)
```

- **r_Refraction**:

```text
Enables refraction.
Usage: r_Refraction [0/1]
Default is 1 (on). Set to 0 to disable.
```

- **r_RefractionPartialResolveMaxResolveCount**:

```text
Provides an upper limit on partial screen resolves per render-items list.
(Unlimited if a non-positive integer is provided)
```

- **r_RefractionPartialResolveMinResolveAreaWH**:

```text
Minimal resolve screen area in percentage which is required to execute a partial resolve
```

- **r_RefractionPartialResolveMode**:

```text
Specifies mode of operation of partial screen resolves before refraction
Usage: r_RefractionPartialResolveMode [0/1/2]
0: Static approach: Single resolve pass before transparent forward pass.
1: Simple iterative approach: Resolve pass before every refractive render items that requires resolve.
2: Topological sorting of overlaping resolve regions (default)
```

- **r_RefractionPartialResolvesDebug**:

```text
Toggle refraction partial resolves debug display
Usage: r_RefractionPartialResolvesDebug
0: disable 
1: Statistics 
2: Bounding boxes 

```

- **r_ReleaseAllResourcesOnExit**:

```text

```

- **r_ReloadShaders**:

```text
Reloads shaders.
Usage: r_ReloadShaders [0/1]
Default is 0. Set to 1 to reload shaders.
```

- **r_RemappedBoneIndicesDebug**:

```text
1 - Enable debug draw mode for remapped tables (show all mesh-skeleton pairs in memory)
```

- **r_RemappedBoneIndicesDebugFilter**:

```text
Filter for r_RemappedBoneIndicesDebug
```

- **r_RenderMeshHashGridUnitSize**:

```text
Controls density of render mesh triangle indexing structures
```

- **r_RenderTargetPoolSize**:

```text
Size of pool for render targets in MB.
Default is 50(MB).
```

- **r_ReprojectOnlyStaticObjects**:

```text
Forces a split in the zpass, to prevent moving object from beeing reprojected
```

- **r_SSReflDistance**:

```text
Maximum distance of SS raytrace in relation to far-plane.
Usage: r_SSReflDistance [0...1]
Default is 0.15 (further away content is fetched from cube-maps)
```

- **r_SSReflEnvBRDFMultWH**:

```text
Controlls the overall intensity of the SS reflections. 1 is neutral.
```

- **r_SSReflEnvBRDFPowWH**:

```text
Exponent of the BRDF. 1 is neutral,
>1 extend range of the SS reflections (glossy materials will have more prominent reflections)
<1 'desaturate' reflections
```

- **r_SSReflHalfRes**:

```text
Toggles rendering reflections in half resolution

```

- **r_SSReflSamples**:

```text
Maximum number of samples taken within allowed distance, in addition to 4 always taken samples.
Usage: r_SSReflSamples [0...inf]
Default is 4+28, which is about 1 sample every 15m (with default distance of 500m)
```

- **r_SSReflections**:

```text
Glossy screen space reflections
0 - Disabled (Cubemaps only)
1 - SSR enabled (General only) 
2 - SSR enabled (General + WaterVolumes)
```

- **r_ShaderCompilerDontCache**:

```text
Disables caching on server side.
Usage: r_ShaderCompilerDontCache 0 #
Default is 0
```

- **r_ShaderCompilerFolderName**:

```text
Usage: r_ShaderCompilerFolderName foldername 
Default is empty. This overwrites the default path of using the game directory name when storing shader caches.
```

- **r_ShaderCompilerFolderSuffix**:

```text
Usage: r_ShaderCompilerFolderSuffix suffix 
Default is empty. Set to some other value to append this suffix to the sys_game_folder when compiling shaders
```

- **r_ShaderCompilerPort**:

```text
set user defined port of the shader compile server.
Usage: r_ShaderCompilerPort 61453 #
Default is 61453
```

- **r_ShaderCompilerServer**:

```text
Usage: r_ShaderCompilerServer <ip;ip;ip;...> 
Default is localhost 
```

- **r_ShaderEmailCCs**:

```text
Adds optional CC addresses to shader error emails
Default is empty 
```

- **r_ShaderEmailTags**:

```text
Adds optional tags to shader error emails e.g. own name or build run
Usage: r_ShaderEmailTags "some set of tags or text" 
Default is build version 
```

- **r_ShaderTarget**:

```text
Shader cache generation only CVar.Sets the shader generation target ( Orbis/Hercules/Durango/Scarlett/D3D11/D3D12/Vulkan/VulkanMobile ).
Specify in system.cfg like this: r_ShaderTarget = "D3D11"
```

- **r_ShadersAllowCompilation**:

```text

```

- **r_ShadersAsyncActivation**:

```text
Enable asynchronous shader activation
Usage: r_ShadersAsyncActivation [0/1]
 0 = off, (stalling) synchronous shaders activation
 1 = on, shaders are activated/streamed asynchronously

```

- **r_ShadersAsyncCompiling**:

```text
Enable asynchronous shader compiling
Usage: r_ShadersAsyncCompiling [0/1/2/3]
 0 = off, (stalling) shaders compiling
 1 = on, shaders are compiled in parallel, missing shaders are rendered in yellow
 2 = on, shaders are compiled in parallel, missing shaders are not rendered
 3 = on, shaders are compiled in parallel in precache mode
```

- **r_ShadersAsyncMaxThreads**:

```text

```

- **r_ShadersCacheDeterministic**:

```text
Ensures that 2 shaderCaches built from the same source are binary equal
```

- **r_ShadersCompileAutoActivate**:

```text
Automatically reenable shader compilation if outdated shader is detected
```

- **r_ShadersCompileCompatible**:

```text

```

- **r_ShadersCompileStrict**:

```text

```

- **r_ShadersDebug**:

```text
Enable special logging when shaders become compiled
Usage: r_ShadersDebug [0/1/2/3/4]
 1 = assembly into directory {AssetDir}/shaders/cache/d3d12
 2 = compiler input into directory {AssetDir}/testcg
 3 = compiler input with debug information (useful for PIX etc./{AssetDir}/testcg_1pass
 4 = compiler input with debug information, but optimized shaders
Default is 0 (off)
```

- **r_ShadersEditing**:

```text
Force all cvars to settings, which allow shader editing
```

- **r_ShadersIgnoreIncludesChanging**:

```text

```

- **r_ShadersLazyUnload**:

```text

```

- **r_ShadersLogCacheMisses**:

```text
Log all shader caches misses on HD (both level and global shader cache misses).
0 = No logging to disk or TTY
1 = Logging to disk only
2 = Logging to disk and TTY (default)
```

- **r_ShadersRemoteCompiler**:

```text
Enables remote shader compilation on dedicated machine.
0 - Disabled
1 - Enabled but fallback to local on network error after number of retries (r_ShadersRemoteCompilerNetworkFailRetries)
2 - Enabled
```

- **r_ShadersSubmitRequestline**:

```text

```

- **r_ShadowCastingLightsMaxCount**:

```text
Maximum number of simultaneously visible shadow casting lights
```

- **r_ShadowGenDepthClip**:

```text
0=disable shadow gen depth clipping, 1=enable shadow gen depth clipping
```

- **r_ShadowJittering**:

```text
Shadow map jittering radius.
In PC the only use of this cvar is to instantly see the effects of diferent jittering values,
because any value set here will be overwritten by ToD animation (only in PC) as soon as ToD changes.
Usage: r_ShadowJittering [0=off]
```

- **r_ShadowJitteringMultiplierWH**:

```text
Jittering multiplier. Use this in specs instead of changing r_ShadowJittering as the r_ShadowJittering cvar is changed every frame from ToD.
```

- **r_ShadowMapsUpdate**:

```text
0=disable shadow map updates, 1=enable shadow map updates
```

- **r_ShadowMaskStencilPrepass**:

```text
1=Run explicit stencil prepass for shadow mask generation (as opposed to merged stencil/sampling passes)
```

- **r_ShadowPoolBaseCostWH**:

```text
Base cost for shadow frustum
```

- **r_ShadowPoolBudgetPerFrameWH**:

```text
Shadow pool budget per frame.
```

- **r_ShadowPoolImportanceDistanceMultWH**:

```text
Multiplier for shadow frustum update importance based on distance from frustum center.
```

- **r_ShadowPoolImportanceFrameDeltaMultWH**:

```text
Multiplier for shadow frustum update importance based on age of last update.
```

- **r_ShadowPoolImportanceFrameDeltaNeverRenderedValueWH**:

```text
Delta frame value used for importance calculation when frustum was never rendered.
```

- **r_ShadowPoolImportanceLightUpdateRateMultWH**:

```text
Multiplier for shadow frustum update importance based on ShadowUpdateRate specified on the light instance.
```

- **r_ShadowPoolMapSizeCostCoeffWH**:

```text
Coefficient used in calculation of shadow frustum update cost based on shadow map size.
```

- **r_ShadowPoolMapSizeCostMultWH**:

```text
Multiplier to the cost of shadow frustum update based on shadow map size.
```

- **r_ShadowPoolMaxFrames**:

```text
Maximum number of frames a shadow can exist in the pool
```

- **r_ShadowPoolShadowCastersCostMultWH**:

```text
Multiplier to the cost of shadow frustum update based on number its shadow casters.
```

- **r_ShadowTexFormat**:

```text
0=use D32 texture format for depth map
1=use D16 texture format for depth map
2=use D24S8 texture format for depth map
Usage: r_ShadowTexFormat [0-2]
```

- **r_ShadowsAdaptionMin**:

```text
starting kernel size, to avoid blocky shadows.
Usage: r_ShadowsAdaptionMin [0.0 for blocky - 1.0 for blury], 0.35 is default
```

- **r_ShadowsAdaptionRangeClamp**:

```text
maximum range between caster and reciever to take into account.
Usage: r_ShadowsAdaptionRangeClamp [0.0 - 1.0], default 0.01
```

- **r_ShadowsAdaptionSize**:

```text
Select shadow map blurriness if r_ShadowsBias is activated.
Usage: r_ShadowsAdaptoinSize [0 for none - 10 for rapidly changing]
```

- **r_ShadowsCache**:

```text
Replace all sun cascades above cvar value with cached (static) shadow map:
0=no cached shadows,
1=replace first cascade and up
2=replace second cascade and up,...
```

- **r_ShadowsCacheFormat**:

```text
0=use D32 texture format for shadow cache
1=use D16 texture format for shadow cache

```

- **r_ShadowsCacheResolutions**:

```text
Shadow cache resolution per cascade.

```

- **r_ShadowsGridAligned**:

```text
Selects algorithm to use for shadow mask generation:
0 - Disable shadows snapping
1 - Enable shadows snapping
```

- **r_ShadowsLocalLightsFaceCullingWH**:

```text
select between front, back and both faces to render to local light shadow maps
  0 = no culling (slow, little to no light leaking)
  1 = front (faster, little to no self-shadowing, prone to light leaking)
  2 = back (faster, compromise between leaking and self-shadowing)

```

- **r_ShadowsLocalLightsLinearizeDepth**:

```text
Usage: e_ShadowsLocalLightsLinearizeDepth [0-1]
Changes how depth by local lights will be output for shadow mapping
0=output non-linear depth
1=output linear depth (default)

```

- **r_ShadowsMask**:

```text
Controls screen space calculation of shadow contribution0=off
1=all shadow casting lights
2=sun only
3=point lights only
Usage: r_ShadowsMask [0/1/2/3]
```

- **r_ShadowsMaskResolution**:

```text
0=per pixel shadow mask
1=horizontal half resolution shadow mask
2=horizontal and vertical half resolution shadow mask
Usage: r_ShadowsMaskResolution [0/1/2]
```

- **r_ShadowsMotionBiasConstWH**:

```text
Motion shadow bias const term.
```

- **r_ShadowsMotionBiasDirWH**:

```text
Motion shadow bias all directions term.
```

- **r_ShadowsMotionBiasDirZWH**:

```text
Motion shadow bias away from light direction term.
```

- **r_ShadowsMotionBiasLocalCostWH**:

```text
Motion bias coeficient for local light's cost.
```

- **r_ShadowsMotionBiasWH**:

```text
Motion shadow bias strength.
```

- **r_ShadowsNearestMapResolution**:

```text
Nearest shadow map resolution. Default: 4096
```

- **r_ShadowsPCFiltering**:

```text
1=use PCF for shadows
Usage: r_ShadowsPCFiltering [0/1]
```

- **r_ShadowsParticleAnimJitterAmount**:

```text
Amount of animated jittering for particles shadows.
Usage: r_ShadowsParticleJitterAmount [x], 1. is default
```

- **r_ShadowsParticleJitterAmount**:

```text
Amount of jittering for particles shadows.
Usage: r_ShadowsParticleJitterAmount [x], 0.5 is default
```

- **r_ShadowsParticleKernelSize**:

```text
Blur kernel size for particles shadows.
Usage: r_ShadowsParticleKernelSize [0.0 hard edge - x for blur], 1. is default
```

- **r_ShadowsParticleNormalEffect**:

```text
Shadow taps on particles affected by normal and intensity (breaks lines and uniformity of shadows).
Usage: r_ShadowsParticleNormalEffect [x], 1. is default
```

- **r_ShadowsScreenSpace**:

```text
Include screen space tracing into shadow computations
Helps reducing artifacts caused by limited shadow map resolution and biasing
```

- **r_ShadowsScreenSpaceFadeoutBegin**:

```text
Depth of Screen Space Shadows fadeout begin (full intensity).
```

- **r_ShadowsScreenSpaceFadeoutEnd**:

```text
Depth of Screen Space Shadows fadeout end (zero intensity).
```

- **r_ShadowsScreenSpaceLength**:

```text
Controls the tracing length of Screen Space Shadows
```

- **r_ShadowsScreenSpaceStrength**:

```text
Controls the intensity of Screen Space Shadows
```

- **r_Sharpening**:

```text
Image sharpening amount
Usage: r_Sharpening [Value]
```

- **r_ShowDynTextures**:

```text
Display a dyn. textures, filtered by r_ShowDynTexturesFilter
Usage: r_ShowDynTextures 0/1/2
Default is 0. Set to 1 to show all dynamic textures or 2 to display only the ones used in this frame
Textures are sorted by memory usage
```

- **r_ShowDynTexturesFilter**:

```text
Usage: r_ShowDynTexturesFilter *end
Usage: r_ShowDynTexturesFilter *mid*
Usage: r_ShowDynTexturesFilter start*
Default is *. Set to 'pattern' to show only specific textures (activate r_ShowDynTextures)
```

- **r_ShowDynTexturesMaxCount**:

```text
Allows to adjust number of textures shown on the screen
Usage: r_ShowDynTexturesMaxCount [1...36]
Default is 36
```

- **r_ShowLightBounds**:

```text
Display light bounds - for debug purpose
Usage: r_ShowLightBounds [0=off/1=on]
```

- **r_ShowLines**:

```text
Toggles visibility of wireframe overlay.
Usage: r_ShowLines [0/1]
Default is 0 (off).
```

- **r_ShowNormals**:

```text
Toggles visibility of normal vectors.
Usage: r_ShowNormals [0/1]Default is 0 (off).
```

- **r_ShowTangents**:

```text
Toggles visibility of three tangent space vectors.
Usage: r_ShowTangents [0/1]
Default is 0 (off).
```

- **r_ShowTexture**:

```text
Displays loaded texture - for debug purpose

```

- **r_ShowTimeGraph**:

```text
Configures graphic display of frame-times.
Usage: r_ShowTimeGraph [0/1/2]
	1: Graph displayed as points.	2: Graph displayed as lines.Default is 0 (off).
```

- **r_ShowVideoMemoryStats**:

```text

```

- **r_SilhouettePOM**:

```text
Enables use of silhouette parallax occlusion mapping.
Usage: r_SilhouettePOM [0/1]
```

- **r_SkipAlphaTested**:

```text
Disables rendering of alpha-tested objects.

```

- **r_Snow**:

```text
Enables snow rendering
Usage: r_Snow [0/1/2]
0 - disabled
1 - enabled
2 - enabled with snow occlusion
```

- **r_SnowDisplacement**:

```text
Enables displacement for snow accumulation
Usage: r_SnowDisplacement [0/1]
0 - disabled
1 - enabled
```

- **r_SnowFlakeClusters**:

```text
Number of snow flake clusters.
Usage: r_SnowFlakeClusters [n]
```

- **r_SnowHalfRes**:

```text
When enabled, snow renders at half resolution to conserve fill rate.
Usage: r_SnowHalfRes [0/1]
0 - disabled
1 - enabled

```

- **r_SonarVision**:

```text
Toggles sonar vision enabling.
Usage: r_SonarVision [0/1]
Default is 1 (on). Set to 2 to enable debug mode (force enabling). Set to 0 to completely disable sonar vision modes.
```

- **r_Stats**:

```text
Toggles render statistics.
0=disabled,
1=global render stats,
2=print shaders for selected object,
3=CPU times of render passes and video memory usage,
4=CPU times of render passes,
5=Occlusion query calls (calls to mfDraw/mfReadResult_Now/mfReadResult_Try),
6=display per-instance drawcall count,
8=Info about instanced DIPs,
13=print info about cleared RT's,
40=Print buffer pool stats,
Usage: r_Stats [0/1/n]
```

- **r_StencilBits**:

```text
Sets the stencil precision, in bits per pixel. Default is 8.

```

- **r_StereoEnableMgpu**:

```text
Sets support for multi GPU stereo rendering.
Usage: r_StereoEnableMgpu [0=disabled/else=enabled]
0: Disable multi-GPU for dual rendering
 1: Enable multi-GPU for dual rendering
-1: Enable multi-GPU for dual rendering, but run on only one GPU (simulation)

```

- **r_StereoEyeDist**:

```text
[For 3D TV] Maximum separation between stereo images in percentage of the screen.
```

- **r_StereoFlipEyes**:

```text
Flip eyes in stereo mode.
Usage: r_StereoFlipEyes [0=off/1=on]
0: don't flip
1: flip

```

- **r_StereoGammaAdjustment**:

```text
Additional adjustment to the graphics card gamma correction when Stereo is enabled.
Usage: r_StereoGammaAdjustment [offset]0: off
```

- **r_StereoHudScreenDist**:

```text
Distance to plane where hud stereo parallax converges to zero.
If not zero, HUD needs to be rendered two times.
```

- **r_StereoNearGeoScale**:

```text
Scale for near geometry (weapon) that gets pushed into the screen
```

- **r_StereoScreenDist**:

```text
Distance to plane where stereo parallax converges to zero.
```

- **r_StereoStrength**:

```text
Multiplier which influences the strength of the stereo effect.
```

- **r_SuperResolution_AMD_FSR_CustomReactiveMaskScaleWH**:

```text
A value to scale custom reactive mask [0, 1] (Default: 0.5)
```

- **r_SuperResolution_AMD_FSR_CustomResolutionScaleWH**:

```text
A custom value to scale the render resolution [0.4, 1]
```

- **r_SuperResolution_AMD_FSR_QualityMode**:

```text
AMD FSR Quality Mode (Default: 1)
 0 - Quality (1.5x scaling)
 1 - Balanced (1.7x scaling)
 2 - Performance (2.0x scaling)
 3 - Ultra Performance (3.0x scaling)
 4 - NativeAA (1.0x scaling)
 5 - Custom scale

```

- **r_SuperResolution_AMD_FSR_ReactiveMask_BinaryValue**:

```text
A value to set for the binary reactive mask [0, 1] (Default: 1.0)
```

- **r_SuperResolution_AMD_FSR_ReactiveMask_CutoffThreshold**:

```text
A threshold value to generate a binary reactive mask [0, 1] (Default: 1.0)
```

- **r_SuperResolution_AMD_FSR_ReactiveMask_Scale**:

```text
A value to scale the output [0, 1] (Default: 1.0)
```

- **r_SuperResolution_AMD_FSR_TransparencyAndCompositionMask**:

```text
Adjust temporal stability of pixels [0, 1] (Default: 0.1)
Usage: 0 (Off) = most stable but more ghosting, 1 = least stable but less ghosting
Default: 0.0 (similar to default DLSS stability)
```

- **r_SuperResolution_Mode**:

```text
Super Resolution Mode
 0 - Off
 1 - AMD FidelityFX SuperResolution
 2 - NVIDIA DLSS
 3 - SONY PSSR
```

- **r_SuperResolution_NVIDIA_APP_ID**:

```text
NVIDIA APP ID (only for testing purposes, needs to be set by buildengineer)

```

- **r_SuperResolution_NVIDIA_DLSS_ExposureCompensation**:

```text
Adjusts Frame Exposure input to DLSS (Not recommended unless it helps with visual artifacts)
Usage [0, 1] (Default: 0.0)
0 = Best temporal stability / more ghosting
1 = Worst temporal stability / less ghosting
```

- **r_SuperResolution_NVIDIA_DLSS_Preset**:

```text
NVIDIA DLSS Render Preset (Default: 0)
 0 - Default
 1 - A (intended for Perf/Balanced/Quality modes)
        An older variant best suited to combat ghosting
        for elements with missing inputs (such as motion vectors)
 2 - B (intended for Ultra Perf mode)
        Similar to Preset A but for Ultra Performance mode
 3 - C (intended for Perf/Balanced/Quality modes)
        Preset which generally favors current frame information.
        Generally well-suited for fast-paced game content
 4 - D (intended for Perf/Balanced/Quality modes)
        Similar to Preset E. Preset E is generally recommended over Preset D
 5 - E (intended for Perf/Balanced/Quality modes)
        The default preset for Perf/Balanced/Quality mode. Generally, favors image stability
 6 - F (intended for Ultra Perf/DLAA modes)
        The default preset for Ultra Perf and DLAA modes.
```

- **r_SuperResolution_NVIDIA_DLSS_QualityMode**:

```text
NVIDIA DLSS Quality Mode (Default: 2)
 0 - Auto (best fit scaling)
 1 - Quality (1.5x scaling)
 2 - Balanced (1.7x scaling)
 3 - Performance (2.0x scaling)
 4 - Ultra Performance (3.0x scaling)
 5 - DLAA (1.0x scaling)
```

- **r_SuperResolution_ReactiveMask_Mode**:

```text
Reactive Mask Mode (Default: 1)
 0 - Off
 1 - On
 2 - On (Auto generated if supported)
```

- **r_SuperResolution_SONY_PSSR_ResolutionScale**:

```text
A value to scale the render resolution [0.4, 1] (Default: 0.5)
```

- **r_SuperResolution_Sharpness**:

```text
Sharpness adjustment for super resolution modes [0, 1] (Default: 0.0)
```

- **r_SuperResolution_TextureMipBias**:

```text
Adjusts texture mip bias for super resolution [-8, 8] (Default: 0.0)
```

- **r_Supersampling**:

```text
Use supersampled antialiasing(1 - 1x1 no SSAA, 2 - 2x2, 3 - 3x3 ...)
```

- **r_SupersamplingFilter**:

```text
Filter method to use when resolving supersampled output
0 - Box filter
1 - Tent filter
2 - Gaussian filter
3 - Lanczos filter
```

- **r_SyncToFrameFence**:

```text
Stall the render thread until GPU finished processing previous frame
```

- **r_TessellationDebug**:

```text
1 - Factor visualizing.
Default is 0
```

- **r_TessellationTriangleSize**:

```text
Desired triangle size for screen-space tessellation.
Default is 10.
```

- **r_TexBindMode**:

```text
Enable texture overrides.
Usage: r_TexBindMode [0/1/2/4/5/6/7/8/9/10/11]
	1 - Force gray non-font maps
	5 - Force flat normal maps
	6 - Force white diffuse maps
	7 - Force diffuse maps to use mipmapdebug texture
	8 - Colour code diffuse maps to show minimum uploaded mip [0:green,1:cyan,2:blue,3:purple,4:magenta,5:yellow,6:orange,7:red,higher:white]
	9 - Colour code diffuse maps to show textures streaming in in green and out in red
	10 - Colour code diffuse maps that have requested a lower mip than the lowest available [-3: red, -2: yellow, -1: green]
	11 - Force white diffuse map and flat normal map
	12 - Visualise textures that have more or less mips in memory than needed
Default is 0 (disabled).
```

- **r_TexLog**:

```text
Configures texture information logging.
Usage:	r_TexLog #
where # represents:
	0: Texture logging off
	1: Texture information logged to screen
	2: All loaded textures logged to 'UsedTextures.txt'
	3: Missing textures logged to 'MissingTextures.txt
```

- **r_TexMaxAnisotropy**:

```text
Specifies the maximum level allowed for anisotropic texture filtering.
```

- **r_TexMinAnisotropy**:

```text
Specifies the minimum level allowed for anisotropic texture filtering.
0(default) means abiding by the filtering setting in each material, except possibly being capped by r_TexMaxAnisotropy.
```

- **r_TexNoLoad**:

```text
Disables loading of textures.
Usage:	r_TexNoLoad [0/1]
When 1 texture loading is disabled.
```

- **r_TexPostponeLoading**:

```text

```

- **r_TexPreallocateAtlases**:

```text

```

- **r_TexelsPerMeter**:

```text
Enables visualization of the color coded "texels per meter" ratio for objects in view.
The checkerboard pattern displayed represents the mapping of the assigned diffuse
texture onto the object's uv space. One block in the pattern represents 8x8 texels.
Usage: r_TexelsPerMeter [n] (where n is the desired number of texels per meter; 0 = off)
```

- **r_TextureCompiling**:

```text
Enables Run-time compilation and subsequent injection of changed textures from disk during editing.
Usage: r_TextureCompiling [0/1]
Default is 1 (on). Changes are tracked and passed through to the rendering.
Compilation can also be muted by the r_RC_AutoInvoke config.
```

- **r_TextureCompilingIndicator**:

```text
Replaces the textures which are currently compiled by a violet indicator-texture.
Usage: r_TextureCompilingIndicator [-1/0/1]
Default is 0 (off). Textures are silently replaced by their updated versions without any indication.
Negative values will also stop show indicators for compilation errors.
Positive values will show indicators whenever a texture is subject to imminent changes.

```

- **r_TextureLodDistanceRatio**:

```text
Controls dynamic LOD system for textures used in materials.
Usage: r_TextureLodDistanceRatio [-1, 0 and bigger]
Default is -1 (completely off). Value 0 will set full LOD to all textures used in frame.
Values bigger than 0 will activate texture LOD selection depending on distance to the objects.
```

- **r_TexturesAllowDynamicSampler**:

```text
Allow dynamic sampler in resource layouts.

```

- **r_TexturesStreamDynamicPool**:

```text
Dynamically compute texture streaming pool size based on the available VRam and other allocations.

```

- **r_TexturesStreamDynamicPoolMaxSizeWH**:

```text
Maximum texture streaming pool size in MB.

```

- **r_TexturesStreamDynamicPoolMinSize**:

```text
Minimum texture streaming pool size in MB.

```

- **r_TexturesStreamDynamicPoolTargetVramUsage**:

```text
Percentage of OS specified VRam budget used for texture streaming pool size calculation.

```

- **r_TexturesStreamPoolSize**:

```text
Size of texture streaming pool in MB.

```

- **r_TexturesStreaming**:

```text
Enables direct streaming of textures from disk during game.
Usage: r_TexturesStreaming [0/1/2]
Default is 0 (off). All textures save in native format with mips in a
cache file. Textures are then loaded into texture memory from the cache.
1 - stream only mesh/material textures on-demand
2 - stream also cube textures on-demand
```

- **r_TexturesStreamingDebug**:

```text
Enables textures streaming debug mode. (Log uploads and remove unnecessary mip levels)
Usage: r_TexturesStreamingDebug [0/1/2]
Default is 0 (off).
-1 - texture streaming bias logging
 1 - texture streaming precache logging
 2 - texture streaming internal state logging
 3 - Show textures hit-parade based on internal priorities
 4 - Show textures hit-parade based on the memory consumed
 5 - Show textures hit-parade based on internal priorities reversed
 6 - Show textures hit-parade based on the memory requested
```

- **r_TexturesStreamingDebugDumpIntoLog**:

```text
Dump content of current texture streaming debug screen into log
```

- **r_TexturesStreamingDebugFilter**:

```text
Filters displayed textures by name in texture streaming debug mode 1-6

```

- **r_TexturesStreamingDebugMinMip**:

```text
Filters displayed textures by loaded mip in texture streaming debug mode
```

- **r_TexturesStreamingDebugMinSize**:

```text
Filters displayed textures by size in texture streaming debug mode
```

- **r_TexturesStreamingDisableNoStreamDuringLoad**:

```text
Load time optimisation. When enabled, textures flagged as non-streaming will still be streamed during level load, but will have a high priority stream request added in RT_Precache. Once streamed in, the texture will remain resident

```

- **r_TexturesStreamingLowestPrefetchBias**:

```text
Clamping texture prefetch to at most fetch this many more mips than requested if there's free pool memory.
Usage: r_TexturesStreamingLowestPrefetchBias [-0...-inf]
Default is 0 (don't prefetch).
```

- **r_TexturesStreamingMaxRequestedJobs**:

```text
Maximum number of tasks submitted to streaming system.
Usage: r_TexturesStreamingMaxRequestedJobs [jobs number]
Default is 32 jobs
```

- **r_TexturesStreamingMaxRequestedMB**:

```text
Maximum amount of texture data requested from streaming system per frame in MB.
Usage: r_TexturesStreamingMaxRequestedMB [size]
Default is 2.0(MB)
```

- **r_TexturesStreamingMaxUpdateRate**:

```text
Clamping texture stream in to at most fetch this many mips at the same time.
Usage: r_TexturesStreamingMaxUpdateRate [1...inf]
Default is 1 (stream in at most 1 mip per frame per texture).
```

- **r_TexturesStreamingMinReadSizeKB**:

```text
Minimal streaming request size in KB.
Usage: r_TexturesStreamingMinReadSizeKB [size]
Default is 64KiBi
```

- **r_TexturesStreamingMipBias**:

```text
Controls how texture LOD depends from distance to the objects.
Increasing this value will reduce amount of memory required for textures.
Usage: r_TexturesStreamingMipBias [-4..0..4]
Default is 0.
```

- **r_TexturesStreamingMipClampDVD**:

```text
Clamp the texture mip level to certain value when streaming from DVD. 1 will never allow highest mips to be loaded for example.
Usage: r_TexturesStreamingMipClampDVD [0..4]
Default is 1.
```

- **r_TexturesStreamingMipFading**:

```text
Controls how the new texture MIP appears after being streamed in.
This variable influences only a visual quality of appearing texture details.
Usage: r_TexturesStreamingMipFading [0/1...N]
Default is 8 (fade-in in 8 frames time). N is the number of frames needed to fade-in all mips
```

- **r_TexturesStreamingNoUpload**:

```text
Disable uploading data into texture from system memory. Useful for debug purposes.
Usage: r_TexturesStreamingNoUpload [0/1]
Default is 0 (off).
```

- **r_TexturesStreamingOnlyVideo**:

```text
Don't store system memory copy of texture. Applicable only for PC.
Usage: r_TexturesStreamingOnlyVideo [0/1]
Default is 0 (off).
```

- **r_TexturesStreamingPostponeMips**:

```text
Postpone loading of high res mipmaps to improve resolution ballance of texture streaming.
Usage: r_TexturesStreamingPostponeMips [0/1]
Default is 1 (on).
```

- **r_TexturesStreamingPostponeThresholdKB**:

```text
Threshold used to postpone high resolution mipmap loads in KB.
Usage: r_TexturesStreamingPostponeThresholdKB [size]
Default is 1024(KB)
```

- **r_TexturesStreamingPrecacheRounds**:

```text
Number of precache rounds to include in active streamed texture lists.
Default is 1
```

- **r_TexturesStreamingSuppress**:

```text
Force unloading of all textures and suppress new stream tasks.
Default is 0
```

- **r_TexturesStreamingUpdateType**:

```text
Texture streaming update type.
Default is 0
0 - Unavailable (maps to 1)
1 - Use planning texture streamer
```

- **r_ThermalVision**:

```text
Toggles termal vision enabling.
Usage: r_ThermalVision [0/1]
Default is 1 (on). Set to 2 to enable debug mode (force enabling). Set to 0 to completely disable termal vision modes.
```

- **r_ThermalVisionViewDistance**:

```text
Toggles thermal vision distance attenuation.
Default is 150 (meters)
```

- **r_TranspDepthFixup**:

```text
Write approximate depth for certain transparent objects before post effects
Usage: r_TranspDepthFixup [0/1]
Default is 1 (enabled)

```

- **r_TransparentPasses**:

```text
Toggles rendering of transparent/alpha blended objects.

```

- **r_UpdateInstances**:

```text
Enabling runtime instancing CB updatings each frame
```

- **r_UseDisplacementFactor**:

```text
Global displacement amount.
Default is 0.4f.
```

- **r_UseHWSkinning**:

```text
Toggles HW skinning.
Usage: r_UseHWSkinning [0/1]
Default is 1 (on). Set to 0 to disable HW-skinning.
```

- **r_UseMaterialLayers**:

```text
Enables material layers rendering.
Usage: r_UseMaterialLayers [0/1/2]
Default is 2 (optimized). Set to 1 for enabling but with optimization disabled (for debug).
```

- **r_UseZPass**:

```text
Toggles g-buffer pass.
Usage: r_UseZPass [0/1/2/3]
0: Disable Z-pass (not recommended, this disables any g-buffer rendering)
1: Enable Z-pass (g-buffer only)
2: Enable Z-pass (g-buffer and additional Z-prepass)
3: Enable Z-pass (g-buffer and additional Z-prepass with alpha-tested/dissolved objects)
4: Enable Z-pass (g-buffer and additional Z-prepass containing all objects and producing an early depth-buffer)
```

- **r_VSync**:

```text
Toggles vertical sync.
0: Disabled
1: Enabled

```

- **r_ValidateDraw**:

```text
0=disabled, 1=validate each DIP (meshes consistency, shaders, declarations, etc)
```

- **r_VisAreaClipLightsPerPixel**:

```text
Per pixel light/cubemap culling for vis areas: 0=off, 1=on
```

- **r_VolumetricClouds**:

```text
Enables procedural volumetric clouds (experimental feature, data compatibility may break in a future release.).
0 - Disabled.
1 - Enabled (1/2x Res).
2 - Enabled (1/4x Res).
```

- **r_VolumetricCloudsPipeline**:

```text
Set the pipeline mode of procedural volumetric clouds.
0 - Monolithic shader pipeline, using less memory.
1 - Multiple shaders pipeline, using more memory, faster when using Cloud Blocker.
```

- **r_VolumetricCloudsRaymarchStepNum**:

```text
Set the step number of ray-marching for procedural volumetric clouds.
Acceptable number is from 16 to 256, and it should be multiple of 16.
```

- **r_VolumetricCloudsShadowResolution**:

```text
Set the resolution of volumetric clouds shadow map for casting shadow on the terrain and low shading-LOD clouds.
```

- **r_VolumetricCloudsStereoReprojection**:

```text
Enables stereoscopic reprojection for procedural volumetric clouds to accelerate the rendering.
0 - Disabled.
1 - Enabled.

```

- **r_VolumetricCloudsTemporalReprojection**:

```text
Set temporal reprojection mode for procedural volumetric clouds.
0 - faster but prone to flickering artifacts.
1 - a bit slower but less flickering artifacts.

```

- **r_VolumetricFogDownscaledSunShadow**:

```text
Enable replacing sun shadow maps with downscaled shadow maps or static shadow map if possible.
-1: sync with number of sun shadow map cascades currently active
 0: disabled
 1: replace first and second cascades with downscaled shadow maps. the others are replaced with static shadow map if possible.
 2: replace first, second, and third cascades with downscaled shadow maps. the others are replaced with static shadow map if possible.
 3: replace first, second, third, and fourth cascades with downscaled shadow maps. the others are replaced with static shadow map if possible.

```

- **r_VolumetricFogDownscaledSunShadowRatio**:

```text
Set downscale ratio for sun shadow maps
0: 1/4 downscaled sun shadow maps
1: 1/8 downscaled sun shadow maps
2: 1/16 downscaled sun shadow maps

```

- **r_VolumetricFogMinimumLightBulbSize**:

```text
Adjust the minimum size threshold for light attenuation bulb size. Small bulb size causes the light flicker.
```

- **r_VolumetricFogReprojectionBlendFactor**:

```text
Adjust the blend factor of temporal reprojection.
Acceptable value is between 0 and 1.
0 means temporal reprojecton is off.

```

- **r_VolumetricFogReprojectionMode**:

```text
Set the mode of ghost reduction for temporal reprojection.
0: conservative
1: advanced
```

- **r_VolumetricFogSample**:

```text
Adjust number of sample points.
0: 1 sample point in a voxel
1: 2 sample points in a voxel
2: 4 sample points in a voxel

```

- **r_VolumetricFogShadow**:

```text
Adjust shadow sample count per sample point.
0: 1 shadow sample per sample point
1: 2 shadow samples per sample point 
2: 3 shadow samples per sample point
3: 4 shadow samples per sample point

```

- **r_VolumetricFogSunLightCorrection**:

```text
Enables the correction of sun light luminance. Volumetric fog gets brighter but it's consistent with other lighting.
0: Disabled.
1: Enabled.

```

- **r_VolumetricFogTexDepth**:

```text
Depth resolution of volume texture.
Huge value runs out of performance and video memory.

```

- **r_VolumetricFogTexScale**:

```text
Width and height scale factor (divided by screen resolution) for volume texture.
Acceptable value is more than equal 2.

```

- **r_VrProjectionPreset**:

```text
Selects the quality preset for the modified projection
Usage: r_VrProjectionPreset [0..8]
0: full-resolution preset, can be used for quality testing
1,2: desktop high and low quality presets
3..5: Oculus Rift high..low quality presets
6..8: HTC Vive high..low quality presets
```

- **r_VrProjectionType**:

```text
Selects which modified projection to use for rendering
Usage: r_VrProjectionType [0/1/2]
0: none/planar (default)
1: Nvidia Multi-Res Shading
2: NVidia Lens-Matched Shading
```

- **r_WaterCaustics**:

```text
Toggles under water caustics.
Usage: r_WaterCaustics [0/1]
Default is 1 (enabled).
```

- **r_WaterCausticsDeferred**:

```text
Toggles under water caustics deferred pass.
Usage: r_WaterCausticsDeferred [0/1/2]
Default is 0 (disabled). 1 - enables. 2 - enables with stencil pre-pass
```

- **r_WaterCausticsDistance**:

```text
Toggles under water caustics max distance.
Usage: r_WaterCausticsDistance
Default is 100.0 meters
```

- **r_WaterGodRays**:

```text
Enables under water god rays.
Usage: r_WaterGodRays [0/1]
Default is 1 (enabled).
```

- **r_WaterGodRaysDistortion**:

```text
Set the amount of distortion when underwater.
Usage: r_WaterGodRaysDistortion [n]
Default is 1.
```

- **r_WaterReflections**:

```text
Toggles water reflections.
Usage: r_WaterReflections [0/1]
Default is 1 (water reflects).
```

- **r_WaterReflectionsMGPU**:

```text
Toggles water reflections.multi-gpu support
Usage: r_WaterReflectionsMGPU [0/1/2]
Default is 0 (single render update), 1 (multiple render updates)
```

- **r_WaterReflectionsMinVisUpdateDistanceMul**:

```text
Activates update distance multiplier when water mostly occluded.
```

- **r_WaterReflectionsMinVisUpdateFactorMul**:

```text
Activates update factor multiplier when water mostly occluded.
```

- **r_WaterReflectionsMinVisiblePixelsUpdate**:

```text
Activates water reflections if visible pixels above a certain threshold.
```

- **r_WaterReflectionsQuality**:

```text
Activates water reflections quality setting.
Usage: r_WaterReflectionsQuality [0/1/2/3]
Default is 0 (terrain only), 1 (terrain + particles), 2 (terrain + particles + brushes), 3 (everything)
```

- **r_WaterReflectionsUseMinOffset**:

```text
Activates water reflections use min distance offset.
```

- **r_WaterUpdateDistance**:

```text

```

- **r_WaterUpdateFactor**:

```text
Distance factor for water reflected texture updating.
Usage: r_WaterUpdateFactor 0.01
Default is 0.01. 0 means update every frame
```

- **r_WaterUpdateThread**:

```text
Enables water updating on separate thread (when MT supported).
Usage: r_WaterUpdateThread [0/1/2/3/4/n]
Default is 5 (enabled and on 5 hw thread).
```

- **r_WaterVolumeCaustics**:

```text
Toggles advanced water caustics for watervolumes.
Usage: r_WaterVolumeCaustics [0/1]
Default is 0 (disabled). 1 - enables.
```

- **r_WaterVolumeCausticsDensity**:

```text
Density/resolution of watervolume caustic grid.
Usage: r_WaterVolumeCausticsDensity [16/256]
Default is 256
```

- **r_WaterVolumeCausticsMaxDist**:

```text
Maximum distance in which caustics are visible.
Usage: r_WaterVolumeCausticsMaxDist [n]
Default is 35
```

- **r_WaterVolumeCausticsSnapFactor**:

```text
Distance in which to snap the vertex grid/projection (to avoid aliasing).
Usage: r_WaterVolumeCausticsSnapFactor [n]
Default is 1.0
```

- **r_Width**:

```text
Sets the display width, in pixels.
Usage: r_Width [800/1024/..]
```

- **r_WinPosX**:

```text
Sets window position, in pixels.
Usage: r_WinPosX 0-10000 means auto position
```

- **r_WinPosY**:

```text
Sets window position, in pixels.
Usage: r_WinPosY 100-10000 means auto position
```

- **r_WindowIconTexture**:

```text
Sets the image (dds file) to be displayed as the window and taskbar icon
```

- **r_WindowTopMost**:

```text
Toggles WS_EX_TOPMOST window flag.
```

- **r_WindowType**:

```text
Changes the type of window for the rendered viewport.
Usage: r_WindowType [0=normal window/1=borderless window/2=borderless full screen/3=exclusive full screen]
```

- **r_XboxEnableInstrumented**:

```text
Xbox Specific. Enables Instrumentation.
0=Disabled,
1=Enabled
```

- **r_XboxGpuHangDetectionThreshold**:

```text
Xbox Specific. Triggers generation of an xhit dump file when the GPU hasn't 
completed any work within r_XboxGpuHangDetectionThreshold milliseconds.
Set to negative value to disable
```

- **r_XboxImmediateThresholdPercent**:

```text
Percentage of the screen where we allow tearing

```

- **r_ZFightingDepthScale**:

```text
Controls anti z-fighting measures in shaders (scaling homogeneous z).
```

- **r_ZFightingExtrude**:

```text
Controls anti z-fighting measures in shaders (extrusion along normal in world units).
```

- **r_ZPassDepthSorting**:

```text
Toggles Z pass depth sorting.
Usage: r_ZPassDepthSorting [0/1/2]
0: No depth sorting
1: Sort by depth layers (default)
2: Sort by distance

```

- **r_ZPassOnly**:

```text

```

- **r_ZPrepassMaxDist**:

```text
Set ZPrepass max dist.
Usage: r_ZPrepassMaxDist (16.0f default) [distance in meters]

```

- **r_ZPrepassVegetation**:

```text
Enables Z-Prepass for Vegetation shader. Currently doesn't work with vegetation bending until we fix shader differences in depth result between ZPrepass and ZPass.

```

- **r_auxGeom**:

```text

```

- **r_buffer_banksize**:

```text
the bank size in MB for buffer pooling
```

- **r_buffer_banksize_small**:

```text
the bank size in MB for buffer pooling in small pools
```

- **r_buffer_enable_lockless_updates**:

```text
enable/disable lockless buffer updates on platforms that support them
```

- **r_buffer_pool_debug_log**:

```text
enable debug logging of buffer pool allocations
```

- **r_buffer_pool_defrag_dynamic**:

```text
enable/disable runtime defragmentation of dynamic buffers
```

- **r_buffer_pool_defrag_max_moves**:

```text
maximum number of moves the defragmentation system is allowed to perform per frame
```

- **r_buffer_pool_defrag_static**:

```text
enable/disable runtime defragmentation of static buffers
```

- **r_buffer_pool_max_allocs**:

```text
the maximum number of allocations per buffer pool if defragmentation is enabled
```

- **r_buffer_sli_workaround**:

```text
enable SLI workaround for buffer pooling
```

- **r_buffer_staged_update_max_size**:

```text
maximum size in MB of a buffer update via staging
```

- **r_debugGBufferCaptions**:

```text
Onscreen caption for r_DebugGBuffer
  0 - Disabled
  1 - Enabled

```

- **r_deferredDecalsDebug**:

```text
Display decals debug info.
Usage: r_deferredDecalsDebug [0/1]
```

- **r_deferredDecalsMaxLimit**:

```text
Sets the max limit for decals that cane be rendered in a single frame (default 1024)
```

- **r_displayinfoTargetFPS**:

```text
Specifies the aimed number of FPS that is considered ideal for the game.
The value must be positive and is used to display budgeting information with r_DisplayInfo=3
```

- **r_dofMinZ**:

```text
Set dof min z distance, anything behind this distance will get out focus. (good default value 0.4) 

```

- **r_dofMinZBlendMult**:

```text
Set dof min z blend multiplier (bigger value means faster blendind transition)

```

- **r_dofMinZScale**:

```text
Set dof min z out of focus strenght (good default value - 1.0f)

```

- **r_durango_async_dips**:

```text
enables async dip submission on durango
```

- **r_durango_async_dips_sync**:

```text
enables async dip submission sync on durango
```

- **r_enableAltTab**:

```text
Toggles alt tabbing in and out of fullscreen when the game is not in devmode.
Usage: r_enableAltTab [toggle]
Notes: Should only be added to system.cfg and requires a restart
```

- **r_enableAuxGeom**:

```text
Enables aux geometry rendering.
```

- **r_enable_full_gpu_sync**:

```text
enable full gpu synchronization for debugging purposes on the every buffer I/O operation (debugging only)
```

- **r_overrideDXGIAdapter**:

```text
Specifies index of the preferred video adapter to be used for rendering (-1=off, loops until first suitable adapter is found).
Use this to resolve which video card to use if more than one DX11 capable GPU is available in the system.
```

- **r_overrideRefreshRate**:

```text
Enforces specified refresh rate when running in fullscreen (0=off).
```

- **r_overrideScanlineOrder**:

```text
Enforces specified scanline order when running in fullscreen.
0=off,
1=progressive,
2=interlaced (upper field first),
3=interlaced (lower field first)
Usage: r_overrideScanlineOrder [0/1/2/3]
```

- **r_profiler**:

```text
Display render pipeline profiler.
  0: Disabled
  1: Basic overview
  2: Detailed pass stats
  3: Detailed immediate and deferred pass stats (Scheduler only)

```

- **r_profilerSmoothingWeight**:

```text
Set how much the current time measurement weights into the previous one.
  Single Exponential Smoothing -> (1-a)*oldVal + a*newVal
  Range: [0.0, 1.0]
```

- **r_profilerTargetFPS**:

```text
Target framerate for application.
```

- **r_resizableWindow**:

```text
Turn on resizable window borders. Changes are only applied after changing the window style once.
```

- **r_shadersCacheClearOnVersionChange**:

```text
0 off, 1 locally cached compiled shader folder is deleted if a new game version is detected.
```

- **r_shadersWarningsAsErrorsWH**:

```text
Set this to 1 if you are brave enough. All compilation warnings will be treated as errors.
```

- **r_ssdo**:

```text
Screen Space Directional Occlusion
-1 - Debug Mode
 0 - Off
 1 - On
```

- **r_ssdoAmountAmbient**:

```text
Strength of occlusion applied to probe irradiance
```

- **r_ssdoAmountDirect**:

```text
Strength of occlusion applied to light sources
```

- **r_ssdoAmountReflection**:

```text
Strength of occlusion applied to probe specular
```

- **r_ssdoColorBleeding**:

```text
Enables AO color bleeding to avoid overly dark occlusion on bright surfaces (requires tiled deferred shading)
Usage: r_ssdoColorBleeding [0-1]

```

- **r_ssdoFadeoutBegin**:

```text
Starting depth of the fadeout.
```

- **r_ssdoFadeoutEnd**:

```text
Ending depth of the fadeout.
```

- **r_ssdoHalfRes**:

```text
Apply SSDO bandwidth optimizations
0 - Full resolution (not recommended)
1 - Use lower resolution depth
2 - Low res depth except for small camera FOVs to avoid artifacts
3 - Half resolution output
```

- **r_ssdoRadius**:

```text
SSDO radius
```

- **r_ssdoRadiusMax**:

```text
Max clamped SSDO radius
```

- **r_ssdoRadiusMin**:

```text
Min clamped SSDO radius
```

- **r_ssdoSecondaryBandRadius**:

```text
Using two bands of samples to capture both large and small scale features
```

- **r_statsMinDrawCalls**:

```text
Minimum drawcall amount to display for use with r_Stats 6
```

- **r_stereoScaleCoefficient**:

```text
Multiplier which influences the perceived scale of the world in VR (1.f = no effect, 0.25 = you are about 1/4th the size).
```

- **r_sunshafts**:

```text
Enables sun shafts.
Usage: r_sunshafts [0/1]
Default is 1 (on). Set to 0 to disable.
```

- **r_texturesstreamingJobUpdate**:

```text
Enable texture streaming update job
```

- **r_texturesstreamingMinUsableMips**:

```text
Minimum number of mips a texture should be able to use after applying r_texturesstreamingSkipMips.

```

- **r_texturesstreamingPostponeThresholdMip**:

```text
Threshold used to postpone high resolution mipmaps.
Usage: r_texturesstreamingPostponeThresholdMip [count]
Default is 1
```

- **r_texturesstreamingSkipMips**:

```text
Number of top mips to ignore when streaming.

```

- **r_texturesstreampooldefragmentation**:

```text
Enabled CPU (1), GPU(2) and disable (0) textures stream pool defragmentation.

```

- **r_texturesstreampooldefragmentationmaxamount**:

```text
Specify the limit (in bytes) that defrag update will stop
```

- **r_texturesstreampooldefragmentationmaxmoves**:

```text
Specify the maximum number of blocks to move per defragmentation update
```

- **r_transient_pool_size**:

```text
the bank size in MB for the transient pool
```

- **r_window_fullscreen_to_desktop_mode**:

```text
Behavior for the window when losing/re-gaining focus (ALT+TAB, etc) in fullscreen exclusive mode
Usage: r_window_fullscreen_to_desktop_mode [1=minimize,restore/2=revert to windowed mode]
```

- **r_wireframe**:

```text
Toggles wireframe rendering mode
```

- **rc_debugVerboseLevel**:

```text

```

- **rcon_password**:

```text
Sets password for the RCON system
```

- **s_ATLPoolSize**:

```text
Specifies the size (in KiB) of the memory pool to be used by the ATL.
Usage: s_ATLPoolSize [0/...]
Default PC: 8192 (8 MiB), XboxOne: 8192 (8 MiB), PS4: 8192 (8 MiB), Mac: 8192 (8 MiB), Linux: 8192 (8 MiB), iOS: 8192 (8 MiB), Android: 4096 (4 MiB)

```

- **s_AudioEventPoolSize**:

```text
Sets the number of preallocated audio events.
Usage: s_AudioEventPoolSize [0/...]
Default PC: 256, XboxOne: 256, PS4: 256, Mac: 256, Linux: 256, iOS: 256, Android: 256

```

- **s_AudioObjectPoolSize**:

```text
Sets the number of preallocated audio objects and corresponding audio proxies.
Usage: s_AudioObjectPoolSize [0/...]
Default PC: 256, XboxOne: 256, PS4: 256, Mac: 256, Linux: 256, iOS: 256, Android: 256

```

- **s_AudioProxiesInitType**:

```text
Can override AudioProxies' init type on a global scale.
If set it determines whether AudioProxies initialize synchronously or asynchronously.
This is a performance type cvar as asynchronously initializing AudioProxies
will have a greatly reduced impact on the calling thread.
Be aware though that when set to initialize asynchronously that audio will play back delayed.
By how much will greatly depend on the audio thread's work load.
0: AudioProxy specific initialization.
1: All AudioProxies initialize synchronously.
2: All AudioProxies initialize asynchronously.
Usage: s_AudioProxiesInitType [0/1/2]
Default PC: 0, XboxOne: 0, PS4: 0, Mac: 0, Linux: 0, iOS: 0, Android: 0

```

- **s_AudioStandaloneFilePoolSize**:

```text
Sets the number of preallocated audio standalone files.
Usage: s_AudioStandaloneFilePoolSize [0/...]
Default PC: 0, XboxOne: 0, PS4: 0, Mac: 0, Linux: 0, iOS: 0, Android: 0

```

- **s_AudioSystemImplementationName**:

```text
Holds the name of the AudioSystemImplementation library to be used.
Usage: s_AudioSystemImplementationName <name of the library without extension>
Default: CryAudioImplWwise

```

- **s_FileCacheManagerSize**:

```text
Sets the size in KiB the AFCM will allocate on the heap.
Usage: s_FileCacheManagerSize [0/...]
Default PC: 393216 (384 MiB), XboxOne: 393216 (384 MiB), PS4: 393216 (384 MiB), Mac: 393216 (384 MiB), Linux: 393216 (384 MiB), iOS: 2048 (2 MiB), Android: 73728 (72 MiB)

```

- **s_FmodPrimaryPoolSize**:

```text
Specifies the size (in KiB) of the memory pool to be used by the Fmod audio system implementation.
Usage: s_FmodPrimaryPoolSize [0/...]
Default PC: 131072 (128 MiB), XboxOne: 131072 (128 MiB), PS4: 131072 (128 MiB), Mac: 131072 (128 MiB), Linux: 131072 (128 MiB), iOS: 8192 (8 MiB), Android: 32768 (32 MiB)

```

- **s_FullObstructionMaxDistance**:

```text
for the sounds, whose distance to the listener is greater than this value, the obstruction is value gets attenuated with distance.
Usage: s_FullObstructionMaxDistance [0/...]
Default: 5 m

```

- **s_LanguageToCheckForMissingFiles**:

```text
When this language is set in g_LanguageAudio then warning about missing standalone files are produced.
Usage: s_LanguageToCheckForMissingFiles = english 

```

- **s_MasterVolume**:

```text
Simulates volume_voice rtpc.
```

- **s_MusicVolume**:

```text
Simulates volume_music rtpc.
```

- **s_OcclusionMaxDistance**:

```text
Obstruction/Occlusion is not calculated for the sounds, whose distance to the listener is greater than this value. Setting this value to 0 disables obstruction/occlusion calculations.
Usage: s_OcclusionMaxDistance [0/...]
Default: 500 m

```

- **s_OcclusionMaxSyncDistance**:

```text
Physics rays are processed synchronously for the sounds that are closer to the listener than this value, and asynchronously for the rest (possible performance optimization).
Usage: s_OcclusionMaxSyncDistance [0/...]
Default: 10 m

```

- **s_PositionUpdateThreshold**:

```text
An audio object has to move by at least this amount to issue a position update request to the audio system.
This kind of optimization should ideally be done by the parent system so this is here for convenience.Usage: s_PositionUpdateThreshold [0/...]
Default: 0.1 (10 cm)

```

- **s_SoundVolume**:

```text
Simulates volume_sfx rtpc.
```

- **s_VelocityTrackingThreshold**:

```text
An audio object has to change its velocity by at least this amount to issue an "object_speed" RTPC update request to the audio system.
Usage: s_VelocityTrackingThreshold [0/...]
Default: 0.1 (10 cm/s)

```

- **steam_appId**:

```text
Override Steam application id, only possible during development! Requires application restart.
```

- **steam_editor_support**:

```text
Defines whether the Steam integration is enabled in Sandbox. Requires application restart.
```

- **sv_AISystem**:

```text
Load and use the AI system on the server
```

- **sv_DedicatedCPUPercent**:

```text
Sets the target CPU usage when running as a dedicated server, or disable this feature if it's zero.
Usage: sv_DedicatedCPUPercent [0..100]
Default is 0 (disabled).
```

- **sv_DedicatedCPUVariance**:

```text
Sets how much the CPU can vary from sv_DedicateCPU (up or down) without adjusting the framerate.
Usage: sv_DedicatedCPUVariance [5..50]
Default is 10.
```

- **sv_DedicatedMaxRate**:

```text
Sets the maximum update rate when running as a dedicated server.
Usage: sv_DedicatedMaxRate [5..500]
Default is 30.
```

- **sv_LoadAllLayersForResList**:

```text
Bypasses game object layer filtering to load all layers of objects for a multiplayer level
```

- **sv_autoconfigurl**:

```text
Automatically download configuration data from a URL
```

- **sv_bandwidth**:

```text
Bit rate on server
```

- **sv_bind**:

```text
Bind the server to a specific IP address
```

- **sv_dumpstats**:

```text
Enables/disables dumping of level and player statistics, positions, etc. to files
```

- **sv_dumpstatsperiod**:

```text
Time period of statistics dumping in milliseconds
```

- **sv_gamerules**:

```text
The game rules that the server should use
```

- **sv_gamerulesdefault**:

```text
The game rules that the server default to when disconnecting
```

- **sv_input_timeout**:

```text
Experimental timeout in ms to stop interpolating client inputs since last update.
```

- **sv_lanonly**:

```text
Set for LAN games
```

- **sv_levelrotation**:

```text
Sequence of levels to load after each game ends
```

- **sv_map**:

```text
The map the server should load
```

- **sv_maxplayers**:

```text
Maximum number of players allowed to join server.
```

- **sv_maxspectators**:

```text
Maximum number of players allowed to be spectators during the game.
```

- **sv_pacifist**:

```text
Pacifist mode (only works on dedicated server)
```

- **sv_packetRate**:

```text
Packet rate on server
```

- **sv_password**:

```text
Server password
```

- **sv_port**:

```text
Server address
```

- **sv_requireinputdevice**:

```text
Which input devices to require at connection (dontcare, none, gamepad, keyboard)
```

- **sv_servername**:

```text
Server name will be displayed in server list. If empty, machine name will be used.
```

- **sv_timeofdayenable**:

```text
Enables time of day simulation.
```

- **sv_timeofdaylength**:

```text
Sets time of day changing speed.
```

- **sv_timeofdaystart**:

```text
Sets time of day start time.
```

- **sv_timeout_disconnect**:

```text
Timeout for fully disconnecting timeout connections
```

- **sv_votingCooldown**:

```text
Voting cooldown
```

- **sv_votingRatio**:

```text
Part of player's votes needed for successful vote.
```

- **sv_votingTeamRatio**:

```text
Part of team member's votes needed for successful vote.
```

- **sv_votingTimeout**:

```text
Voting timeout
```

- **sw_debugInfo**:

```text
Segmented World Debug Info (0=disable, 1=grid, 2=position, 3=memory, 4=color-coded object, 5=seg index, 6=seg index with layer info)
```

- **sw_draw_bbox**:

```text
Draw bounding box for segments.
Default is 1.

```

- **sw_gridSize**:

```text
Number of active grids in both column and line for segmented world
```

- **sys_AI**:

```text
Enables AI Update
```

- **sys_DeactivateConsole**:

```text
0: normal console behavior
1: hide the console
```

- **sys_LoadFrontendShaderCache**:

```text
Load frontend shader cache (on/off)
```

- **sys_MaxFPS**:

```text
Limits the frame rate to specified number n (if n>0 and if vsync is disabled).
 0 = on PC if vsync is off auto throttles fps while in menu or game is paused (default)
-1 = off
```

- **sys_MaxFPSThrotteled**:

```text
The FPS limit that applies when sys_MaxFPS is set to 0 and the game is in menu, loading screen or unfocused
```

- **sys_MemoryDeadListSize**:

```text
Keep upto size bytes in a "deadlist" of allocations to assist in capturing tramples
```

- **sys_PakDisableNonLevelRelatedPaks**:

```text
Disables all paks that are not required by specific level; This is used with per level splitted assets.
```

- **sys_PakInMemorySizeLimit**:

```text
Individual pak size limit for being loaded into memory (MB)
```

- **sys_PakLoadCache**:

```text
Load in memory paks from _LoadCache folder
```

- **sys_PakLoadModePaks**:

```text
Load mode switching paks from modes folder
```

- **sys_PakLogInvalidFileAccess**:

```text
Log synchronous file access when in game
```

- **sys_PakLogMissingFiles**:

```text
If non-0, missing file names go to mastercd/MissingFilesX.log.
1) only resulting report
2) run-time report is ON, one entry per file
3) full run-time report
```

- **sys_PakMessageInvalidFileAccess**:

```text
Message Box synchronous file access when in game
```

- **sys_PakPriority**:

```text
0: not-in pak file first, 1: pak file first, 2: pak file only, 3: not-in pak mod file first
```

- **sys_PakReadSlice**:

```text
If non-0, means number of kilobytes to use to read files in portions. Should only be used on Win9x kernels
```

- **sys_PakSaveFastLoadResourceList**:

```text
Save resource list during initial loading
```

- **sys_PakSaveLevelResourceList**:

```text
Save resource list when loading level
```

- **sys_PakSaveMenuCommonResourceList**:

```text
Save resource list during front end menu flow
```

- **sys_PakSaveTotalResourceList**:

```text
Save resource list
```

- **sys_PakStreamCache**:

```text
Load in memory paks for faster streaming (cgf_cache.pak,dds_cache.pak)
```

- **sys_PakTotalInMemorySizeLimit**:

```text
Total limit (in MB) for all in memory paks
```

- **sys_PakValidateFileHash**:

```text
Validate file hashes in pak files for collisions
```

- **sys_ProfileLevelLoading**:

```text
Output level loading stats into log
0 = Off
1 = Output basic info about loading time per function
2 = Output full statistics including loading time and memory allocations with call stack info
```

- **sys_ProfileLevelLoadingDump**:

```text
Output level loading dump stats into log

```

- **sys_SSInfo**:

```text
Show SourceSafe information (Name,Comment,Date) for file errors.Usage: sys_SSInfo [0/1]
Default is 0 (off)
```

- **sys_Scale3DMouseYPR**:

```text
Scales rotation speed of supported 3DMouse devices.
```

- **sys_SimulateTask**:

```text
Simulate a task in System:Update which takes X ms
```

- **sys_SleepIfInactiveWH**:

```text
When enabled and game window is inactive, sleep the main thread for 25ms every frame.
```

- **sys_TaskThread0_CPU**:

```text
Specifies the physical CPU index taskthread0 will run on
```

- **sys_TaskThread1_CPU**:

```text
Specifies the physical CPU index taskthread1 will run on
```

- **sys_TaskThread2_CPU**:

```text
Specifies the physical CPU index taskthread2 will run on
```

- **sys_TaskThread3_CPU**:

```text
Specifies the physical CPU index taskthread3 will run on
```

- **sys_TaskThread4_CPU**:

```text
Specifies the physical CPU index taskthread4 will run on
```

- **sys_TaskThread5_CPU**:

```text
Specifies the physical CPU index taskthread5 will run on
```

- **sys_UncachedStreamReads**:

```text
Enable stream reads via an uncached file handle
```

- **sys_affinity**:

```text

```

- **sys_audio_disable**:

```text
Specifies whether to use the NULLAudioSystem in place of the regular AudioSystem
Usage: sys_audio_disable [0/1]
0: use regular AudioSystem.
1: use NullAudioSystem (disable all audio functionality).
Default: 0 (enable audio functionality)
```

- **sys_auto_detect_spec_override**:

```text
Whether to override the spec value during spec auto detect.
0 = Disabled
1 = Low
2 = Medium
3 = High
4 = Ultra

```

- **sys_budget_frametime**:

```text
Sets the upper limit for frame time (in ms) when monitoring budget.
```

- **sys_budget_numdrawcalls**:

```text
Sets the upper limit for number of draw calls per frame.
```

- **sys_budget_numpolys**:

```text
Sets the upper limit for number of polygons per frame.
```

- **sys_budget_soundCPU**:

```text
Sets the upper limit for sound CPU (in Percent) when monitoring budget.
```

- **sys_budget_soundchannels**:

```text
Sets the upper limit for sound channels playing when monitoring budget.
```

- **sys_budget_soundmem**:

```text
Sets the upper limit for sound memory (in MB) when monitoring budget.
```

- **sys_budget_streamingthroughput**:

```text
Sets the upper limit for streaming throughput(KB/s).
```

- **sys_budget_sysmem**:

```text
Sets the upper limit for system memory (in MB) when monitoring budget.
```

- **sys_budget_videomem**:

```text
Sets the upper limit for video memory (in MB) when monitoring budget.
```

- **sys_build_folder**:

```text
Optionally specifies external full path to the build folder to read pak files from. Can be a full path to an external folder or a relative path to a folder inside of the local build.
```

- **sys_deferAudioUpdateOptim**:

```text
0 - disable optimisation
1 - enable optimisation
Default is 1
```

- **sys_display_threads**:

```text
Displays Thread info
```

- **sys_dll_ai**:

```text
Specifies the DLL to load for the AI system
```

- **sys_dll_game**:

```text
Specifies the game DLL to load
```

- **sys_dll_response_system**:

```text
Specifies the DLL to load for the dynamic response system
```

- **sys_dump_aux_threads**:

```text
Dumps callstacks of other threads in case of a crash
```

- **sys_dump_type**:

```text
Specifies type of crash dump to create - see MINIDUMP_TYPE in dbghelp.h for full list of values
0: Do not create a minidump
1: Create a small minidump (stacktrace)
2: Create a medium minidump (+ some variables)
3: Create a full minidump (+ all memory)

```

- **sys_enable_budgetmonitoring**:

```text
Enables budget monitoring. Use #System.SetBudget( sysMemLimitInMB, videoMemLimitInMB,
frameTimeLimitInMS, soundChannelsPlaying ) or sys_budget_sysmem, sys_budget_videomem
or sys_budget_fps to set budget limits.
```

- **sys_entities**:

```text
Enables Entities Update
```

- **sys_error_debugbreak**:

```text
__debugbreak() if a VALIDATOR_ERROR_DBGBREAK message is hit
```

- **sys_filesystemCaseSensitivity**:

```text
0 = Ignore letter casing mismatches, 1 = Show warning on mismatch, 2 = Show error on mismatch
```

- **sys_firstlaunch**:

```text
Indicates that the game was run for the first time.
```

- **sys_flash**:

```text
Enables/disables execution of flash files.
```

- **sys_flash_address_space**:

```text
Specifies the size (in kilo bytes) of the address space used for flash objects.

```

- **sys_flash_allow_reset_mesh_cache**:

```text
Allow programmatic mesh cache resets.
```

- **sys_flash_check_filemodtime**:

```text
Respect file modification time for Flash internal resource sharing.
Cached resources with same filepath but different file modification time are treated as unique entities.
```

- **sys_flash_curve_tess_error**:

```text
Controls curve tessellation. Larger values result in coarser, more angular curves.
```

- **sys_flash_debugdraw**:

```text
Enables debug drawing of Flash assets (1). Canvas area is drawn in bright green.
Also draw masks (2).
```

- **sys_flash_edgeaa**:

```text
Enables/disables edge anti-aliased rendering of flash files.
```

- **sys_flash_frame_catchup_count**:

```text
Maximum number of frames a movieclip can advance each frame.
```

- **sys_flash_log_options**:

```text
Enables logging of several flash related aspects (add them to combine logging)...
1) Flash loading                                                       : 1
2) Flash actions script execution                                      : 2
3) Flash related high-level calls inspected by the profiler (flash.log): 4
   Please note that for (3) the following cvars apply:
   * sys_flash_info
   * sys_flash_info_peak_exclude
```

- **sys_flash_mipmaps**:

```text
Enables/disables mipmap support for flash ui icons
```

- **sys_flash_reset_mesh_cache**:

```text
Reset mesh cache through console (once).
```

- **sys_flash_static_pool_size**:

```text
Specifies the size (in kb) of the static memory pool for flash objects.
Set to zero to turn it off and use a dynamic pool instead.
```

- **sys_flash_stereo_maxparallax**:

```text
Maximum parallax when viewing Flash content in stereo 3D
```

- **sys_flash_use_arenas**:

```text
Enables creation of Flash asset instances through designated memory arenas.
```

- **sys_flash_video_soundvolume**:

```text
Sets volume of video's main sound track(0..1). Has no effect if video support is not compiled in.
```

- **sys_flash_video_subaudiovolume**:

```text
Sets volume of video's sub audio sound track (0..1). Has no effect if video support is not compiled in.
```

- **sys_flash_warning_level**:

```text
Sets verbosity level for CryEngine related warnings...
0) Omit warning
1) Log warning
2) Log warning and display message box
```

- **sys_force_installtohdd_mode**:

```text
Forces install to HDD mode even when doing DVD emulation
```

- **sys_game_folder**:

```text
Specifies the game folder to read all data from. Can be fully pathed for external folders or relative path for folders inside the root.
```

- **sys_game_name**:

```text
Specifies the name to be displayed in the Launcher window title bar
```

- **sys_gamertag**:

```text
Gamertag displayed instead of user name
```

- **sys_ime**:

```text
0 = IME disabled, 1 = IME enabled (if supported)
```

- **sys_initpreloadpacks**:

```text
Specifies the paks for an engine initialization
```

- **sys_intromoviesduringinit**:

```text
Render the startup video during game initialization
```

- **sys_job_system_enable**:

```text
Enable the JobSystem.
Usage: sys_job_system_enable 0/1
0: The Jobsystem is disabled, each job is executed in its invoking thread.
1: The JobSystem is enabled, each job is invoked in one of the worker threads.
```

- **sys_job_system_filter**:

```text
Filters a Job.
Usage: sys_job_system_filter name1,name2,..
Where 'name' refers to the exact name of the job, 0 disables it
More than one job can be specified by using a comma separated list
```

- **sys_job_system_max_worker**:

```text
Sets the number of threads to use for the job systemDefaults to 10 on consoles and 16 threads an PCSet to 0 to create as many threads as cores are available
```

- **sys_job_system_process_wait_on_jobs_wh**:

```text
Allow waiting thread to steal and process jobs on which it waits
```

- **sys_job_system_profiler**:

```text
Enable the job system profiler.
Usage: sys_job_system_profiler <value>
0: Disable the profiler
1: Show the full profiler
2: Show only the execution graph
3: Show the full profiler and sort by execution time
-1: Profiling enabled, but not displayed

```

- **sys_job_system_profiler_max_scale_wh**:

```text
Max scale for sys_job_system_profiler debug draw
```

- **sys_job_system_worker_queue_ratio_wh**:

```text
Queue sharing factor. 1 means every worker has its own queue, 2 means there is a queue for every pair of workers and so on. Higher numbers usually improve scheduler fairness and distrubution of jobs to workers, but increase scheduler overhead via higher thread contention.
```

- **sys_keyboard**:

```text
Enables keyboard.
Usage: sys_keyboard [0/1]
Default is 1 (on).
```

- **sys_keyboard_break**:

```text
Enables keyboard break handler
```

- **sys_languages**:

```text
String list of enabled languages
```

- **sys_languagesAvailable**:

```text
String list of available languages
```

- **sys_languagesAvailable_audio**:

```text
String list of available audio languages
```

- **sys_languages_audio**:

```text
String list of enabled audio languages
```

- **sys_limit_phys_thread_count**:

```text
Limits p_num_threads to physical CPU count - 1
```

- **sys_livecreate**:

```text
Enable/disable LiveCreate. Values: 0-disabled, use Null implementation, 1-fully enabled, 2-disabled (but initialized)
```

- **sys_localization_folder**:

```text
Sets the folder where to look for localized data.
This cvar allows for backwards compatibility so localized data under the game folder can still be found.
Usage: sys_localization_folder <folder name>
Default: Localization

```

- **sys_logallocations**:

```text
Save allocation call stack
```

- **sys_main_CPU**:

```text
Specifies the physical CPU index main will run on
```

- **sys_max_step**:

```text
Specifies the maximum physics step in a separate thread
```

- **sys_memory_debug**:

```text
Enables to activate low memory situation is specific places in the code (argument defines which place), 0=off
```

- **sys_menupreloadpacks**:

```text
Specifies the paks for a main menu loading
```

- **sys_min_step**:

```text
Specifies the minimum physics step in a separate thread
```

- **sys_no_crash_dialog**:

```text

```

- **sys_no_jobs_inlining**:

```text
Dont use jobs inline execution.
```

- **sys_noupdate**:

```text
Toggles updating of system with sys_script_debugger.
Usage: sys_noupdate [0/1]
Default is 0 (system updates during debug).
```

- **sys_parallel_processing**:

```text
Toggles advanced parallel processing.
Usage: sys_parallel_processing [0/1]
Default is 1 (on).
```

- **sys_physics**:

```text
Enables Physics Update
```

- **sys_physics_CPU**:

```text
Specifies the physical CPU index physics will run on
```

- **sys_preload**:

```text
Preload Game Resources
```

- **sys_root**:

```text

```

- **sys_scale3DMouseTranslation**:

```text
Scales translation speed of supported 3DMouse devices.
```

- **sys_scaleform_shared_font_tex_size**:

```text
Additional flash/scaleform font texture raster size for both width and height.
```

- **sys_spec**:

```text
Tells the system cfg spec. (0=custom, 1=low, 2=med, 3=high, 4=very high, 5=ultra, 13=Xbox One, 6=Xbox One X, 7=PS4, 10=PS5, 11=Xbox Series X, 12=Xbox Series S)
```

- **sys_spec_characters**:

```text
Console variable group to apply settings to multiple variables

sys_spec_characters [1/2/3/4/5/12/15/16/17/default] [current]:
 ... WH_AI_LOD_MaxCountDetail = 70/70/70/80/80/70/70/70/70/70
 ... WH_AI_LOD_MaxDetailDistance = 120/150/150/180/220/120/150/150/150/150
 ... ca_AttachmentCullingRation = 1000/1000/1000/1000/1000/1000/1000/1000/1000/1000
 ... es_AreaManagerUpdateBudget = 3/3/3/3/3/3/2/2/2/3
 ... wh_ai_NPCUpdateBudgetLowerBound = 3.5/3.5/3.5/3.5/3.5/3.5/2.5/2.5/2.5/3.5
 ... wh_ca_ClothBudgetMaxFramesToSkip = 4/4/4/1/0/4/4/4/4/4
 ... wh_ca_GeometricMeanOverride = 0.0026/0.0036/0.003/0.0004/0.0004/0.0036/0.003/0.003/0.003/0.003

```

- **sys_spec_full**:

```text
Console variable group to apply settings to multiple variables

sys_spec_full [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... sys_spec_Characters = 1/2/3/4/5/10/11/12/15/16/17/3 [3]
 ... sys_spec_GlobalIllumination = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_Light = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_ObjectDetail = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_Particles = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_PostProcessing = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_Shading = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_Shadows = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_Texture = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_Vegetation = 1/2/3/4/5/10/11/12/15/16/17/3
 ... sys_spec_VolumetricEffects = 1/2/3/4/5/10/11/12/15/16/17/3

```

- **sys_spec_globalillumination**:

```text
Console variable group to apply settings to multiple variables

sys_spec_globalillumination [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... e_svoTI_ConeMaxLength = 25/25/25/30/35/25/25/25/25/25/25/25
 ... e_svoTI_DiffuseConeWidth = 8/8/8/8/8/8/8/8/8/8/8/8
 ... e_svoTI_LowSpecMode = 3/2/1/1/1/2/2/3/2/2/2/1
 ... e_svoTI_NumStreamingThreads = 2/2/2/2/2/1/1/1/1/1/1/2
 ... e_svoTI_NumberOfBounces = 1/1/1/2/2/1/1/1/1/1/1/1
 ... e_svoTI_Reflect_Vox_Max = 100/200/300/500/700/200/200/200/200/200/200/300
 ... e_svoTI_RsmConeMaxLength = 6/6/6/6/6/6/6/6/6/6/6/6
 ... e_svoVoxelPoolResolution = 128/128/128/128/128/128/128/128/128/128/128/128

```

- **sys_spec_light**:

```text
Console variable group to apply settings to multiple variables

sys_spec_light [1/2/3/4/5/12/16/17/default] [current]:
 ... e_ShadowsCastFadeOutRatioLightsWH = 0.6/0.5/0.4/0.3/0.2/0.5/0.5/0.5/0.4
 ... e_ShadowsCastViewDistRatioLights = 0.04/0.055/0.075/0.1/0.15/0.055/0.07/0.07/0.075
 ... e_ViewDistRatioInteriorReflexLights = 0.6/0.7/0.8/0.9/1/0.8/0.8/0.8/0.8
 ... e_ViewDistRatioLights = 9/12/16/24/30/12/12/12/16

```

- **sys_spec_objectdetail**:

```text
Console variable group to apply settings to multiple variables

sys_spec_objectdetail [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... e_DecalsLifeTimeScale = 1/2/2/2/2/2/2/1/2/2/2/2
 ... e_LodFaceAreaTargetSize = 0.011/0.007/0.005/0.0012/0.0006/0.006/0.006/0.0075/0.006/0.008/0.008/0.005
 ... e_LodRatio = 10/15/25/60/300/15/15/10/15/15/15/25
 ... e_MaxViewDistSpecLerp = 0.5/1/1/1/1/1/1/0.5/1/1/1/1
 ... e_ObjQuality = 1/2/3/4/4/3/3/2/3/3/3/3
 ... e_StreamCgfPoolSize = 512/640/768/1280/2048/768/768/512/768/768/768/768
 ... e_TerrainOcclusionCullingMaxDist = 130/200/200/200/200/200/200/130/200/200/200/200
 ... e_ViewDistRatio = 50/80/100/140/180/100/100/45/100/80/80/100
 ... es_PerInstanceStreamingClassSpawnBudget = 2/2/2/2/2/2/2/2/1/1/1/2
 ... sys_flash_curve_tess_error = 4/2/2/2/2/2/2/4/2/2/2/2
 ... wh_e_HLodClusterSwitchingDistanceMin = 50/80/110/150/400/110/110/80/110/110/110/110
 ... wh_e_HLodClusterSwitchingDistanceMultiplier = 0.3/0.35/0.45/0.5/0.65/0.45/0.45/0.35/0.45/0.45/0.45/0.45
 ... wh_e_HLodInteriorSwitchingDistance = 6/8/10/12/20/10/10/3/10/10/10/10
 ... wh_e_ViewDistRatioRoad = 50/60/110/130/140/110/110/60/110/110/110/110

```

- **sys_spec_particles**:

```text
Console variable group to apply settings to multiple variables

sys_spec_particles [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... e_ParticlesMaxScreenFill = 64/128/150/180/220/128/128/64/128/128/128/150
 ... e_ParticlesMinDrawPixels = 1.8/1/1/1/1/1/1/1.8/1/1/1/1
 ... e_ParticlesQuality = 1/2/3/4/5/3/3/2/3/3/3/3
 ... r_ParticlesHalfRes = 1/0/0/0/0/0/0/1/0/0/0/0
 ... wh_e_ParticlesViewDistMul = 1/1.8/2.5/3/5/2.5/2.5/2.5/2.5/1.8/1.8/2.5

```

- **sys_spec_postprocessing**:

```text
Console variable group to apply settings to multiple variables

sys_spec_postprocessing [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... q_ShaderHDR = 1/1/2/3/3/2/2/2/2/2/2/2
 ... q_ShaderPostProcess = 1/1/2/3/3/2/2/2/2/2/2/2
 ... r_ColorGradingChartsCache = 4/0/0/0/0/4/4/4/4/4/4/0
 ... r_HDRBloomQuality = 1/2/2/2/2/1/1/1/1/1/1/2
 ... r_MotionBlurQuality = 0/1/1/2/2/1/1/1/1/0/0/1
 ... r_PostProcessHUD3DCache = 2/2/0/0/0/0/0/0/0/0/0/0
 ... r_RainMaxViewDist_Deferred = 40/100/150/150/150/150/150/150/150/150/150/150
 ... r_TranspDepthFixup = 0/1/1/1/1/1/1/1/1/1/1/1
 ... wh_cl_DofMinZ = 0.4/0.4/0.4/0.4/0.4/0.4/0.4/0.4/0.4/0.4/0.4/0.4
 ... wh_cl_DofMinZScale = 6/6/6/4/4/6/6/6/6/6/6/6

```

- **sys_spec_quality**:

```text
Console variable group to apply settings to multiple variables

sys_spec_quality [1/2/3/4/5/12/default] [current]:
 ... q_Renderer = 0/1/2/3/3/1/2
 ... q_ShaderFX = 0/1/2/3/3/1/2
 ... q_ShaderGeneral = 0/1/2/3/3/1/2
 ... q_ShaderGlass = 0/1/2/3/3/1/2
 ... q_ShaderIce = 0/1/2/3/3/1/2
 ... q_ShaderMetal = 0/1/2/3/3/1/2
 ... q_ShaderShadow = 0/1/2/3/3/1/2
 ... q_ShaderSky = 0/1/2/3/3/1/2
 ... q_ShaderTerrain = 0/1/2/3/3/1/2
 ... q_ShaderVegetation = 0/1/2/3/3/1/2
 ... q_ShaderWater = 0/1/2/3/3/1/2

```

- **sys_spec_shading**:

```text
Console variable group to apply settings to multiple variables

sys_spec_shading [1/2/3/4/5/default] [current]:
 ... e_SkyUpdateRate = 0.5/1/1/1/1/1
 ... r_DeferredShadingTiledHairQuality = 1/2/2/2/2/2
 ... r_EnvTexUpdateInterval = 0.075/0.05/0.05/0.05/0.05/0.05
 ... r_SSReflHalfRes = 1/1/1/0/0/1
 ... sys_spec_Quality = 1/2/3/4/5/3 [3]

```

- **sys_spec_shadows**:

```text
Console variable group to apply settings to multiple variables

sys_spec_shadows [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... e_GsmLodsNum = 4/5/5/5/5/5/5/4/5/5/5/5
 ... e_GsmSizesWH = 2,8,32,200/2.5,8,32,120,600/2.5,8,32,120,600/3,10,32,120,600/3.5,16,40,150,600/2.5,8,32,120,600/2.5,8,32,120,600/2,8,32,200/2.5,8,32,120,600/2.5,8,32,120,600/2.5,8,32,120,600/2.5,8,32,120,600
 ... e_LightShadowCastSpecWH = 1/2/3/4/5/3/3/2/3/3/3/3
 ... e_ObjShadowCastSpec = 1/2/3/4/5/2/2/1/2/2/2/3
 ... e_ShadowsAutoBiasLodScaleWH = 1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1/1,1,1,1,1
 ... e_ShadowsCastViewDistRatio = 0.6/0.7/0.8/0.9/0.95/0.8/0.8/0.6/0.8/0.7/0.7/0.8
 ... e_ShadowsMaxTexRes = 512/1024/1024/2048/4096/1024/1024/1024/1024/1024/1024/1024
 ... e_ShadowsMaxTexResSunWH = 512/1300/1600/2048/4096/1600/1600/1300/1600/1300/1300/1600
 ... e_ShadowsPoolSize = 2048/4096/4096/8192/16384/4096/4096/4096/4096/4096/4096/4096
 ... e_ShadowsUpdateViewDistRatio = 60/80/100/100/100/80/80/60/80/80/80/100
 ... e_SunAngleSnapMinLodWH = 2/2/2/2/3/2/2/2/2/2/2/2
 ... r_FogShadowsWater = 0/0/0/1/1/0/0/0/0/0/0/0
 ... r_ShadowCastingLightsMaxCount = 10/12/16/24/32/12/12/12/12/12/12/16
 ... r_ShadowJitteringMultiplierWH = 0.9/0.62/0.75/0.8/0.9/0.75/0.75/0.62/0.75/0.62/0.62/0.75
 ... r_ShadowPoolBudgetPerFrameWH = 500/1500/3000/5000/20000/3000/3000/1500/3000/3000/3000/3000
 ... r_ShadowPoolMaxFrames = 9/7/5/3/3/5/5/7/5/5/5/5
 ... r_ShadowsScreenSpace = 0/1/1/1/1/1/1/1/1/1/1/1

```

- **sys_spec_texture**:

```text
Console variable group to apply settings to multiple variables

sys_spec_texture [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... e_TerrainDetailMaterialsViewDistXY = 15/25/30/35/40/30/30/15/30/30/30/30
 ... e_TerrainDetailMaterialsViewDistZ = 30/50/60/80/100/60/60/30/60/60/60/60
 ... r_EnvCMResolution = 0/1/2/2/2/2/2/0/2/2/2/2
 ... r_EnvTexResolution = 1/2/3/3/3/3/3/1/3/3/3/3
 ... r_FlashDynTextureResQuality = 1/1/1/0/0/1/1/1/1/1/1/1
 ... r_SuperResolution_TextureMipBias = 1.5/1/0.5/0/0/0.5/0.5/0.5/0.5/1/1/0.5
 ... r_TexMaxAnisotropy = 2/4/8/16/16/8/8/8/8/8/8/8
 ... r_TexMinAnisotropy = 2/4/8/16/16/8/8/8/8/8/8/8
 ... wh_r_texturesstreamingScheduleTimeLimitUs = 3000/3000/3000/3000/3000/3000/3000/3000/2000/2000/2000/3000

```

- **sys_spec_textureresolution**:

```text
Console variable group to apply settings to multiple variables

sys_spec_textureresolution [0/1/2/3/4/5/6/7/8/9/10/default] [current]:
 ... r_TexturesStreamPoolSize = 256/384/1024/1536/2048/2536/4096/5120/8192/10240/16384/256

```

- **sys_spec_vegetation**:

```text
Console variable group to apply settings to multiple variables

sys_spec_vegetation [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... e_LodFaceAreaTargetSizeVegetationMult = 0.7/0.7/0.7/1/1/0.7/0.7/0.7/0.7/0.7/0.7/0.7
 ... e_MergedMeshesCullingLodRatioWH = 1/0.9/0.8/0.7/0.6/0.8/0.8/0.8/0.8/0.8/0.8/0.8
 ... e_MergedMeshesDissolveRangeWH = 20/10/20/20/20/20/20/10/20/20/20/20
 ... e_MergedMeshesInstanceDist = 6/8/12/24/128/12/12/4/12/12/12/12
 ... e_MergedMeshesLodRatio = 15/20/25/30/50/25/25/15/25/25/25/25
 ... e_MergedMeshesPool = 8192/8192/16384/16384/16384/16384/16384/8192/16384/16384/16384/16384
 ... e_MergedMeshesUseDissolveWH = 0/1/1/1/1/1/1/1/1/1/1/1
 ... e_MergedMeshesViewDistRatio = 40/90/120/140/200/100/100/66/100/100/100/120
 ... e_VegetationUseTerrainColorDistance = 80/80/200/250/250/100/100/70/100/100/100/200
 ... e_ViewDistRatioVegetation = 70/80/110/140/250/110/110/70/110/100/100/110
 ... wh_e_HLodVegetationSwitchingDistances = 8000 1000 600 300/8000 1200 800 400/8000 3200 1600 400/8000 4000 2000 500/8000 6000 4000 700/8000 1500 900 400/8000 1500 900 400/8000 1000 600 300/8000 1500 900 400/8000 1500 900 400/8000 1500 900 400/8000 3200 1600 400

```

- **sys_spec_volumetriceffects**:

```text
Console variable group to apply settings to multiple variables

sys_spec_volumetriceffects [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... r_VolumetricFogSample = 0/1/2/2/2/1/1/1/1/1/1/2
 ... r_VolumetricFogTexDepth = 16/32/48/64/64/32/32/24/32/32/32/48
 ... r_volumetricClouds = 2/2/2/2/1/2/2/2/2/2/2/2
 ... r_volumetricfogtexscale = 16/12/12/10/10/12/12/16/12/12/12/12

```

- **sys_ssd_warning**:

```text
Enable/Disable warning box when engine is not running on SSD drive.
```

- **sys_streaming_CPU**:

```text
Specifies the physical CPU file IO thread run on
```

- **sys_streaming_CPU_worker**:

```text
(unused) Specifies the physical CPU file IO worker thread/s run on
```

- **sys_streaming_debug**:

```text
Enable streaming debug information
0=off
1=Streaming Stats
2=File IO
3=Request Order
4=Write to Log
5=Stats per extension

```

- **sys_streaming_debug_filter**:

```text
Set streaming debug information filter.
0=all
1=Texture
2=Geometry
3=Terrain
4=Animation
7=Sound
8=Shader

```

- **sys_streaming_debug_filter_file_name**:

```text
Set streaming debug information filter
```

- **sys_streaming_debug_filter_min_time**:

```text
Show only slow items.
```

- **sys_streaming_in_blocks**:

```text
Streaming of large files happens in blocks
```

- **sys_streaming_max_bandwidth**:

```text
Enables capping of max streaming bandwidth in MB/s
```

- **sys_streaming_max_finalize_per_frame**:

```text
Maximum stream finalizing calls per frame to reduce the CPU impact on main thread (0 to disable)
```

- **sys_streaming_memory_budget**:

```text
Temp memory streaming system can use in KB
```

- **sys_streaming_requests_grouping_time_period**:

```text
Streaming requests are grouped by request time and then sorted by disk offset
```

- **sys_streaming_resetstats**:

```text
Reset all the streaming stats
```

- **sys_streaming_use_optical_drive_thread**:

```text
Allow usage of an extra optical drive thread for faster streaming from 2 medias
```

- **sys_telemetry_keep_alive**:

```text
Telemetry stream keep-alive time
```

- **sys_telemetry_stream_file**:

```text
Telemetry stream file name
```

- **sys_telemetry_stream_ip**:

```text
Telemetry stream ip address
```

- **sys_trackview**:

```text
Enables TrackView Update
```

- **sys_update_profile_time**:

```text
Time to keep updates timings history for.
```

- **sys_usePlatformSavingAPI**:

```text
Use the platform APIs for saving and loading (complies with TRCs, but allocates lots of memory)
```

- **sys_user_folder**:

```text
Specifies the name of the user folder inside the 'Users/<username>/Saved Games/' folder. Empty string means 'User_APPNAME' in the root folder
```

- **sys_user_subfolder**:

```text
Specifies the name of the subfolder in sys_user_folder. It is used for savegames and profiles
```

- **sys_vtune**:

```text

```

- **sys_warnings**:

```text
Toggles printing system warnings.
Usage: sys_warnings [0/1]
Default is 0 (off).
```

- **t_Debug**:

```text
Timer debug: 0 = off, 1 = events, 2 = verbose
```

- **t_FixedStep**:

```text
Game updated with this fixed frame time
0=off, number specifies the frame time in seconds
e.g. 0.033333(30 fps), 0.1(10 fps), 0.01(100 fps)
```

- **t_GameScale**:

```text
Game time scaled by this - for variable slow motion
```

- **t_MaxStep**:

```text
Game systems clamped to this frame time
```

- **t_Scale**:

```text
All times scaled by this - for variable slow motion
```

- **t_Smoothing**:

```text
time smoothing
0=off, 1=on
```

- **tracer_max_count**:

```text
Max number of active tracers.
```

- **tracer_max_distance**:

```text
Distance at which to stop scaling/lengthening tracers.
```

- **tracer_max_scale**:

```text
Scale at max distance.
```

- **tracer_min_distance**:

```text
Distance at which to start scaling/lengthening tracers.
```

- **tracer_min_scale**:

```text
Scale at min distance.
```

- **tracer_player_radiusSqr**:

```text
Sqr Distance around player at which to start decelerate/acelerate tracer speed.
```

- **v_altitudeLimit**:

```text
Used to restrict the helicopter and VTOL movement from going higher than a set altitude.
If set to zero, the altitude limit is disabled.
```

- **v_altitudeLimitLowerOffset**:

```text
Used in conjunction with v_altitudeLimit to set the zone when gaining altitude start to be more difficult.
```

- **v_debugSounds**:

```text
Enable/disable vehicle sound debug drawing
```

- **v_draw_slip**:

```text
Draw wheel slip status
```

- **v_draw_suspension**:

```text
Enables/disables display of wheel suspension, for the vehicle that has v_profileMovement enabled
```

- **v_dumpFriction**:

```text
Dump vehicle friction status
```

- **v_invertPitchControl**:

```text
Invert the pitch control for driving some vehicles, including the helicopter and the vtol
```

- **v_pa_surface**:

```text
Enables/disables vehicle surface particles
```

- **v_profileMovement**:

```text
Used to enable profiling of the current vehicle movement (1 to enable)
```

- **v_rockBoats**:

```text
Enable/disable boats idle rocking
```

- **v_sprintSpeed**:

```text
Set speed for acceleration measuring
```

- **v_stabilizeVTOL**:

```text
Specifies if the air movements should automatically stabilize
```

- **v_wind_minspeed**:

```text
If non-zero, vehicle wind areas always set wind >= specified value
```

- **watch_enabled**:

```text
On-screen watch text is enabled/disabled
```

- **watch_text_render_fxscale**:

```text
Draw2d label to IFFont x scale value (for calcing sizes).
```

- **watch_text_render_lineSpacing**:

```text
On-screen watch text line spacing (to cram more text on screen without shrinking the font)
```

- **watch_text_render_size**:

```text
On-screen watch text render size
```

- **watch_text_render_start_pos_x**:

```text
On-screen watch text render start x position
```

- **watch_text_render_start_pos_y**:

```text
On-screen watch text render start y position
```

- **wh_ArrowTrailEffectStartDistance**:

```text

```

- **wh_HitReaction_CollisionCacheEvictionInterval**:

```text
Interval in which a collision from the same entity is rejected
```

- **wh_HitReaction_CollisionsEnabled**:

```text
Enables collision hit reactions.
```

- **wh_HitReaction_Debug**:

```text
Show hit reaction debug information.
```

- **wh_HitReaction_DebugIgnorePlayer**:

```text
Just for debugging nonplayer HR on the player which is very handy
```

- **wh_HitReaction_Enabled**:

```text
Enables hit reaction system.
```

- **wh_HitReaction_EnvironmentCollisionScale**:

```text
Scale for impulses to environment
```

- **wh_HitReaction_PhysicalHitCoef**:

```text
Coefficient for physical hit impulses.
```

- **wh_RecordFrameTimesIncludeMemory**:

```text
Include memory snapshots in the frametimes recording
```

- **wh_aa_DBQueryProfiling**:

```text
Enable debug output profiling queries
```

- **wh_aa_DebugEvents**:

```text
Enable debug output for action actor
```

- **wh_aa_DebugEventsTarget**:

```text
Setup target for actor actions debug events
```

- **wh_aa_PreprocessVerbosity**:

```text
Enable verbosity during preprocessing assets
```

- **wh_ac_UpdateBBoxByHipsDebugDraw**:

```text
Enables debug draw for updating bbox by hips on anim chars for given entity name.
```

- **wh_actor_ActorTargetDefaultPrepareRadius**:

```text
Default prepare radius for exact positioning
```

- **wh_actor_DebugGhosting**:

```text

```

- **wh_actor_DefaultPitchAngleLimit**:

```text
Default pitch limiting
```

- **wh_actor_EnableActionNaturalLogicalEnd**:

```text
Support natural logical end mode in mannequin actions. 0 - off (action is never logically ended due to the natural end mode), 1 - on
```

- **wh_actor_FallSpeedHeavyLand**:

```text
Heavy land animation will play when landing over this fall speed
```

- **wh_actor_GhostingBumpDelay**:

```text
Maximal delay between two bumps that will not cancel ghosting timer. If frame time is higher it is used instead.
```

- **wh_actor_GhostingEnabled**:

```text
Enables ghosting
```

- **wh_actor_GhostingEnterTimer**:

```text
Time after which ghosting is enabled
```

- **wh_actor_GhostingExitTimer**:

```text
Time after which ghosting is disabled after exiting last collision
```

- **wh_actor_GroundNormalBlendMultiplier**:

```text

```

- **wh_actor_IdleStateUseStanceObjectTransform**:

```text
Enables using the object's transform as TargetPos procclip parameter for stance idle state animations
```

- **wh_actor_JumpCapsuleAdditionalRadius**:

```text
Radius added to a capsule when an actor jumps
```

- **wh_actor_JumpHeight**:

```text
Default jump height
```

- **wh_actor_JumpHeightAnimBlendTime**:

```text
Time until change in height will propagate into blend weight in jump blendspace
```

- **wh_actor_JumpInPlaceMovementSmoothingTime**:

```text
Time until the change in movement when air controlling jump in place will propagate
```

- **wh_actor_LandCheckDelay**:

```text
Delay from jump start until land check is started
```

- **wh_actor_LipSyncStartTransitionTime**:

```text
Fade-in time (seconds) into a facial animation
```

- **wh_actor_LipSyncStopTransitionTime**:

```text
Fade-out time (seconds) from a facial animation
```

- **wh_actor_MovementSpeedMultDefault**:

```text
Default value of the movement speed multiplier. Used when the multiplier is not defined for the surface or the surface is unknown
```

- **wh_actor_MovementSpeedMultEnabled**:

```text
Is the movement speed multiplier updated from surface type underneath the actor?
```

- **wh_actor_MovementSpeedMultSmoothingRate**:

```text
Maximum rate of change of the surface speed movement multiplier. Used to smooth out sudden changes of materials
```

- **wh_actor_MovementSpeedMultSmoothingRateForHorse**:

```text
Maximum rate of change of the surface speed movement multiplier. Used to smooth out sudden changes of materials (exclusive for horses).
```

- **wh_actor_ParallelPrePhysicsUpdate**:

```text
Enable parallel pre physic actor update
```

- **wh_actor_SimplifiedPhysicsBodySubPartId**:

```text
Body subpart Id definition for simplified actor physics.
```

- **wh_actor_SlidingPreventsJumping**:

```text
Jump is disabled when sliding
```

- **wh_actor_UnderTerrainTestOffset**:

```text
C_Actor::IsUnderTerrain method uses this variable as offset when checking height relative to the terrain. The top actor's head needs to be under the terrain when standing.
```

- **wh_actor_UnstuckJumpTimeout**:

```text
Timeout until unstuck exit is activated in jump mode when speed is under wh_actor_UnstuckSpeed
```

- **wh_actor_UnstuckSpeed**:

```text
Speed (squared) under which when flying unstuck mode is activated(AirControl=1)
```

- **wh_actor_UpdateStopLeg**:

```text

```

- **wh_actor_WaterRippleInjectionDistance**:

```text
Actor position difference [m] to add ripple.
```

- **wh_actor_WaterRippleScale**:

```text
Ripple scale/size simulation parameter.
```

- **wh_actor_WaterRippleStrength**:

```text
Ripple strength/intensity/height simulation parameter.
```

- **wh_actor_info**:

```text
Debug draw mask for actor:
1 - model
2 - actions
4 - mannequin
8 - human blood debug
```

- **wh_actor_info_filter**:

```text
Filter for wh_actor_info with name of actor.
```

- **wh_actor_model**:

```text
Debug draw of actor model, 1 for all or entity name
```

- **wh_ai_ActivitySystemSleepOutsideMLOD**:

```text
Enables sleeping of activity system ouside of MLOD if there is nothing to do
```

- **wh_ai_AdvancedNavMeshSpanMerge**:

```text
Use advanced voxel span merge when building navmesh
```

- **wh_ai_AfterMoveTargetCosAngleTolerance**:

```text
Controls the angle tolerance that is considere to be roughly a straight line when determining the after move target. The value is in cos of angle!
```

- **wh_ai_AfterMoveTargetLookAhead**:

```text
Controls the look ahead distance past the navigation element end when determining the after move target. Value is in meters
```

- **wh_ai_AllowPathFollowShortcuting**:

```text
Allow smart path follower shortcuts when the MNM override is enabled
```

- **wh_ai_AllowPathFollowShortcutingFlee**:

```text
Allow smart path follower shortcuts for flee movement!
```

- **wh_ai_AnimalPoint_EatingCheckOffset**:

```text
Distance (in direction of NPC) from the NPC origin, where terrain is checked when testing spot for eating.
```

- **wh_ai_AnimalPoint_MaxEatingSlopeDeg**:

```text
Maximal slope (in degrees) of terrain for places suitable for eating.
```

- **wh_ai_AnimalPoint_MaxSleepingNormalDeg**:

```text
Maximal angle (in degrees) of normals at front and back checked points, when checked for a sleeping spot
```

- **wh_ai_AnimalPoint_MaxSleepingNormalDifferenceDeg**:

```text
Maximal angle (in degrees) between terrain normals on back and front checked points, when checking for a sleeping spot.
```

- **wh_ai_AnimalPoint_MaxSleepingSlopeDeg**:

```text
Maximal slope (in degrees) between front and back checked point for sleeping.
```

- **wh_ai_AnimalPoint_SleepingCheckOffset**:

```text
Distance from the NPC origin (in both directions - to front and to back), where terrain is checked when testing spot for sleeping.
```

- **wh_ai_AnimalSpawner_DebugDraw**:

```text
Animal spawner statistics.
```

- **wh_ai_AnimalSpawner_MinDespawnDistance**:

```text
Animal will not despawn until it is further away from player than this distance.
```

- **wh_ai_AreaProximity_FarThreshold**:

```text
Distance from area that triggers the callback. Near distance for hysteresis.
```

- **wh_ai_AreaProximity_NearThreshold**:

```text
Distance from area that triggers the callback. Near distance for hysteresis.
```

- **wh_ai_AreaToNavSOAllowedLinkNames**:

```text
Allowed link tag names for mapping between smart areas and navigation smart objects.
```

- **wh_ai_AttrEditWindowSizeX**:

```text
Width of the window used to edit all text node attributes.
```

- **wh_ai_AttrEditWindowSizeY**:

```text
Height of the window used to edit all text node attributes.
```

- **wh_ai_AutomaticMNMRebuild**:

```text
Enables automatic rebuilding of nav mesh when a change in level is detected
```

- **wh_ai_BehaviorTreeCachePreload**:

```text
Should the behavior tree cache preload all tree on runtime. 0 - off, 1 - preload in game, 2 - preload in editor too
```

- **wh_ai_BehaviorTreeImmediateChildReset**:

```text
Allows immediate child reset for nodes supporting it (sequence, selector):
			0 - off (never reset the child during execution)
			1 - on in game, turned off in editor, Off in configurations with replay tool (default behavior)
			2 - always on
```

- **wh_ai_BehaviorTreeRuntimeCacheUnusedTimeout**:

```text
Removal timeout for caches with unused objects
```

- **wh_ai_BoidReachablePointHorExtent**:

```text
Horizontal extent when finding reachable point in the Boid node
```

- **wh_ai_BoidReachablePointMaxSearchDistanceMin**:

```text
Minimal value used for max search distance when finding reachable point in the Boid node.
```

- **wh_ai_BoidReachablePointMaxSearchEuclidDistanceMult**:

```text
Multiplier of euclidean distance between start and target is used as max search distance when finding reachable point in the Boid move
```

- **wh_ai_BoidReachablePointVertExtent**:

```text
Vertical extent when finding reachable point in the Boid node
```

- **wh_ai_BoidTimeoutLODMult**:

```text
Timeout multiplier for the Boid node used when NPC is in LOD
```

- **wh_ai_BrainMultiSubbBudgetSplitMode**:

```text
Mode for splitting budget among subbrains in multi subbrain brain.
			0 - remaining budget is split among remaning subbrains (if first subbrain takes too long, other subbrains have to compensate).
			1 - incoming budget is split equally before updating and each subbrain will get equal budget
```

- **wh_ai_BrainMultiSubbSleep**:

```text
Allows multi subb brain to report sleeping
```

- **wh_ai_ChangeCrouchActionInstantDeferredSuccess**:

```text
Controls if instant version of change crouch action disables the mannequin transitions.
			-1 - feature is disabled (i.e. mannequin transitions are kept enabled)
			0 - feature is enabled (i.e. mannequin transitions are diabled in the action)
			>0 - feature is enabled and the action waits for the selected amount of updates
```

- **wh_ai_ChangeStanceActionNoReplanThreshold**:

```text
Controls the proximity of the target in which the replan checking is no longer performed!
```

- **wh_ai_ChangeStanceActionReplanCloseInterval**:

```text
Shorter replan checking interval. Used when npc is closer to the end than wh_ai_ChangeStanceActionReplanCloseThreshold
```

- **wh_ai_ChangeStanceActionReplanCloseThreshold**:

```text
Controls the distance from target when the replanning check is switched to the shorter interval
```

- **wh_ai_ChangeStanceActionReplanInterval**:

```text
Controls the replan checking interval for Change stance action. When NPC moves by more than interval length, the target is recalculated.
```

- **wh_ai_CollisionAvoidanceCandidatesMode**:

```text
Modes for selecting candidates for ORCA. 0 - all agents (i.e. only sorting) 1 - use circular query 2 - use non hidden NPCs
```

- **wh_ai_CollisionAvoidanceCircularQueryRadius**:

```text
Radius for the circular query used to select potential candidates for collision avoidance participation
```

- **wh_ai_CollisionAvoidanceConsistentCandidate**:

```text
Enables the selection of avoidance velocity that is consistent with one chosen in previous frame
```

- **wh_ai_CollisionAvoidanceConsistentCandidatePrevMaxDif**:

```text
Maximal dot product difference from previous frame velocity. Candidate velocities pointing further away are not considered for consistent candidate promotion
```

- **wh_ai_CollisionAvoidanceFallenActorRadiusExtra**:

```text
Added to the radius of obstacles created for fallen actors. Radius used for actors doesn't approximate actors in ragdoll very well
```

- **wh_ai_CollisionAvoidanceObstacleTravel**:

```text
Use travel of obstacles created for non moving agents
```

- **wh_ai_CollisionAvoidanceObstacleTravelMultiplier**:

```text
Multiplier used to scale the obstacle travel
```

- **wh_ai_CollisionAvoidanceOutputHalfspace**:

```text
Is the collision avoidance output velocity clamped into the the same halfspace as the ai actor's velocity
```

- **wh_ai_CollisionAvoidanceSameFloorThreshold**:

```text
Threshold for deciding if two objects in collision avoidance are on the same floor
```

- **wh_ai_CollisionAvoidanceSameFloorThresholdMin**:

```text
Minimal threshold for deciding if two objects are on the same floor. Used when the objects are within each other radius in XY plane.
		Added to solve cases of one object standing on the other
```

- **wh_ai_CollisionAvoidanceShrinkOthersDecreaseRate**:

```text
Rate of decreasing the will of going trough borders (and how deep) of obstacle in collision avoidance, when the path is already clear
```

- **wh_ai_CollisionAvoidanceShrinkOthersIncreaseRate**:

```text
Rate of increasing the will of going trough borders (and how deep) of obstacle in collision avoidance, when there is nowhere to go
```

- **wh_ai_CollisionAvoidanceSmoothingDotLimit**:

```text
Smoothing limit by dot product between avoidance dir and entity dir. Dot products lower then the limit enables smoothing.
```

- **wh_ai_CollisionAvoidanceSmoothingTimeHi**:

```text
Time value for smoothing collision avoidance result in high speed - delay after raw result
```

- **wh_ai_CollisionAvoidanceSmoothingTimeLow**:

```text
Time value for smoothing collision avoidance result in low speed - delay after raw result
```

- **wh_ai_CollisionAvoidanceTimeScale**:

```text
Time scale used in collision avoidance
```

- **wh_ai_CollisionAvoidanceTimeScaleFallback**:

```text
Shortened fallback time scale used in collision avoidance
```

- **wh_ai_ConditionUpdateOnWrite**:

```text
Condition update on write
```

- **wh_ai_CrimeSearchingFilteringMode**:

```text
Controls the filtering node used in GetCrimSearchingPoints node (and in CrimeSearching debug draw).
		0 - Per sector filtering
		1 - Subtract increased ideal point ratio
```

- **wh_ai_CrimeSearchingPolyFilteringIdealPointBase**:

```text
Controls the base distance for ideal point ratio within the filtering of crime searching points
```

- **wh_ai_CrimeSearchingPolyFilteringIdealPointIncrement**:

```text
Controls the increment of the base distance for ideal point ration within the filtering of crime searching points. Used when filtering in SubtractIdealPoints mode
```

- **wh_ai_CryAIObjectMovementNotifications**:

```text
Turns on/off the notifications from AI Objects into AI system
```

- **wh_ai_CryNavigationSystemEnabled**:

```text
Turns on/off the updates of Cry navigation system enabled
```

- **wh_ai_CryPipeUserUpdateCoverAndSpecial**:

```text
Turns on/off the update of cover and special objects related stuff in CPipeUser
```

- **wh_ai_CryPuppetCalculatePriority**:

```text
Turns on/off the computation of AI puppets update priority. When off, the lowest priority is used
```

- **wh_ai_CryPuppetUpdateAllParts**:

```text
Turns on update of all parts from CPuppet. When off, update of some parts is skipped
```

- **wh_ai_CrySmartObjectsEnabled**:

```text
Turns on/off Cry SmartObjects.
```

- **wh_ai_CrySmartObjectsEntitySystemSinkEnabled**:

```text
Turns on/off Cry SmartObjects EventSystemSink notifications.
```

- **wh_ai_DataFolder**:

```text
Path to the root of AI data files. Intended for backwards compatibility when the location changes
```

- **wh_ai_DeltaMovementComputer**:

```text
Enables/disables using the delta rotation computer when generating CMovementRequest for AI objects (in AI proxy)
		0 - disabled
		1 - enabled
		2 - enabled only when the attached entity was recently rendered.
```

- **wh_ai_DeltaMovementComputerAlwaysReload**:

```text
Enables reloading the params for angle computer within delta movement computer. Intended to use when tuning the database settings.
```

- **wh_ai_DeltaMovementComputerDebugDraw**:

```text
Level of debug draw for delta movement computer. Works as bit map, thus the values must be added to the value of the cvar.
		0 - off.
		1 - default data for the delta movement computer.
		2 - additional data for forward speed.
		4 - settings for the rotation computer.
		8 - draws the directions.
```

- **wh_ai_DeltaMovementComputerDebugDrawName**:

```text
Name of entity for debugging of the delta movement
```

- **wh_ai_DeltaMovementComputerSurroundingsRapidRecalculationDelta**:

```text
Entity movement distance required for surroundings recalculation when using the rapid recalculation
```

- **wh_ai_DeltaMovementComputerSurroundingsRapidRecalculationMoveTargetDistanceThreshold**:

```text
When distance to move target is below this threshold, surroundings are recalculated more often 
```

- **wh_ai_DeltaMovementComputerSurroundingsRecalculateMoveTargetDirectionThreshold**:

```text
Threshold controlling when the surroundings usage is required. If the dot product between entity forward dir and		direction to move target is above the threshold, the surroundings are not used to limit the logical speed.
```

- **wh_ai_DeltaMovementComputerSurroundingsRecalculateMoveTargetDistanceThreshold**:

```text
Threshold that control the surroundings recalculation in the delta movement computer. Entity has to move at least		the given distance in order to surroundings to be recalculated
```

- **wh_ai_DeltaMovementComputerUseSurroundings**:

```text
Enables using the surroundings information when limiting the speed in delta movement computer.
```

- **wh_ai_DetourPolyBoundsCacheSize**:

```text
Size of the cache for detour poly bounds. Use -1 to disable the cache altogether
```

- **wh_ai_DetourRayCastEndPointTolerance**:

```text
Controls the tolerance used in detour ray cast to compensate for floating point precision when computing intersections between ray and polygons
```

- **wh_ai_DetourTileCacheContoursUseZ**:

```text
Use Z coordinate when searching for tile cache contours.
```

- **wh_ai_DetourTileCacheKeepTileBoundaryVertices**:

```text
Vertices at tile boundaries are never removed from polys.
```

- **wh_ai_DetourTileCacheRemoveVertexTolerance**:

```text
Tolerance used during final vertex removal in tile cache mesh build. Value is in voxels.
```

- **wh_ai_DetourTileCacheTriangulationBetweenTestUseZ**:

```text
Use z test when determining if a point is in between other 2 points, if all three points are colinear. Used to filter out false positive edge intersections in triangulation
```

- **wh_ai_DisableMissingBehaviorErrors**:

```text
Disables errors when a behavior references tree which does't exist
```

- **wh_ai_DisableORCAInBattle**:

```text
Is ORCA disabled during battle game context
```

- **wh_ai_DistanceBasedMovementPlanFail**:

```text
Number of allowed movement plan fails is not limited but depends on the actual distance of the path
```

- **wh_ai_DistanceBasedMovementPlanFailDistance**:

```text
Distance between movement plan fails that will result in movement failure
```

- **wh_ai_DogPointNpcCourtSniffTimeout**:

```text
Timeout for dog NPC court sniffing behavior.
```

- **wh_ai_DogPointNpcDrinkTimeout**:

```text
Timeout for dog NPC drink (from puddles) behavior.
```

- **wh_ai_DogPointNpcMarkTimeout**:

```text
Timeout for dog NPC mark behavior.
```

- **wh_ai_DogPointNpcSniffTimeout**:

```text
Timeout for dog NPC sniff behavior.
```

- **wh_ai_DogPointNpcWaterTupDringTimeout**:

```text
Timeout for dog NPC tub drinking behavior.
```

- **wh_ai_DogPointRecentlyMarkedTimeout**:

```text
When point is marked by NPC dog, for this period of time it will be remembered and companions will tend to mark it as well.
```

- **wh_ai_DogPointRecentlyUsedTimeout**:

```text
Dog point will not be used for this long after being used.
```

- **wh_ai_DrawPathFollowerLimitSpeed**:

```text
Debug draw of limit speed param when ai_DrawPathFollower is turned on
```

- **wh_ai_EntitySpawnerTimeBudget**:

```text
Maximal amount of time that can be spent spawning and despawning spawned entities (i.e. from random events, animal spawners) per frame, in ms.
```

- **wh_ai_ExactPositioningOnFailedMoveTransitionBuffer**:

```text
Small buffer used when determining that movement transition won't be played and the exact positioning should be run
```

- **wh_ai_FillPathFindingGapWithHistory**:

```text
Is the gap between path finding start and end filled using NPC's movement history
```

- **wh_ai_FindPathFleeCostMultiplier**:

```text
Cost multiplier for flee path find across forbidden circle
```

- **wh_ai_FindPathFleeUseFallbackRawPath**:

```text
Is the fallback for using raw path used when the straight path crosses the forbidden cirle
```

- **wh_ai_FindPathGeneratedNSOCostDistanceMax**:

```text
Distance between path start and path end above which the maximal cost multiplier (wh_ai_FindPathGeneratedNSOCostMultiplierMax) is used
		In between wh_ai_FindPathGeneratedNSOCostDistanceMin and wh_ai_FindPathGeneratedNSOCostDistanceMax the multiplier is interpolated between 
		wh_ai_FindPathGeneratedNSOCostMultiplierMin and wh_ai_FindPathGeneratedNSOCostMultiplierMax
```

- **wh_ai_FindPathGeneratedNSOCostDistanceMin**:

```text
Distance between path start and path end below which the minimal cost multiplier (wh_ai_FindPathGeneratedNSOCostMultiplierMin) is used
		In between wh_ai_FindPathGeneratedNSOCostDistanceMin and wh_ai_FindPathGeneratedNSOCostDistanceMax the multiplier is interpolated between 
		wh_ai_FindPathGeneratedNSOCostMultiplierMin and wh_ai_FindPathGeneratedNSOCostMultiplierMax
```

- **wh_ai_FindPathGeneratedNSOCostMultiplierMax**:

```text
Maximal multiplier used in path finding for generated NSO. Tweak to allow avoiding generated NSO when it is reasonable to go around
```

- **wh_ai_FindPathGeneratedNSOCostMultiplierMin**:

```text
Minimal multiplier used in path finding for generated NSO. Tweak to allow avoiding generated NSO when it is reasonable to go around
```

- **wh_ai_FindPathNavPathEndpointsMode**:

```text
Controls the heuristic used to find end points for navigation using nav paths. 0 - random points, 1 - closest points.
```

- **wh_ai_FindPathObstaclesMultiplier**:

```text
Distance multiplier that is added as extra cost to the part of paths within obstacles
```

- **wh_ai_FindPathShortcutCoef**:

```text
The formula 1+Coef/PathLenghtWhenUsingRoads yields ratio representing maximal euclidean dist multiplier, when roads are allowed to take. Otherwise raw mnm path is be used
```

- **wh_ai_FindPathUseObstacles**:

```text
Include obstacles when computing costs within the nav mesh search
```

- **wh_ai_FormationSpineShortcuttingEnabled**:

```text
Enables shortcutting of spine for the formation. 0 - disabled, 1 - enabled
```

- **wh_ai_FormationSpineShortcuttingStraightLineThreshold**:

```text
Threshold for considering the points on spine to be in straight line. The value is in cosine of angle.
```

- **wh_ai_HelperAnimValidationMode**:

```text
Mode of anim validation used for NPC state actions.
			0 - default, uses precomputed data if available and relevant. If not fallback using runtime checks is used (i.e.the same as for value 1).
			1 - always fallbacks to using the runtime checks 
			2 - always fallbacks to using the KCD1 runtime checks
```

- **wh_ai_IgnorePathsWhenDistToPathIsMoreThan**:

```text
wh_ai_IgnorePathsWhenDistToPathIsMoreThan
```

- **wh_ai_IgnorePathsWhenEuclDistIsLessThan**:

```text
wh_ai_IgnorePathsWhenEuclDistIsLessThan
```

- **wh_ai_IgnoreShortcutEuclidZMultiplier**:

```text
When calculating Euclid dist between start and end when considering path shortcut, this multiplier artificially modify the Z offset. We can achieve large (fake) distance, when traversing hills
```

- **wh_ai_IgnoreShortcutWhenEuclidDistIsAtLeast**:

```text
In meters. Sometimes path navigationmay fallback to mnm one (see wh_ai_FindPathShortcutCoef), this cvar limits distance when it apply
```

- **wh_ai_ItemHandlingActionGenericStoppingDistance**:

```text
Controls the stopping distance for item handling NPC state action (pick up, place) when using generic items - i.e. the animation isn't or can't be aligned
```

- **wh_ai_LOD_HideBudgetFrameThresholdToDecrease**:

```text
If processing all of the pending hide switches would take at most this many frames with current budget, decrease the budget.
```

- **wh_ai_LOD_HideBudgetFrameThresholdToIncrease**:

```text
If processing all of the pending hide switches would take at least this many frames with current budget, increase the budget.
```

- **wh_ai_LOD_HideBudgetMax**:

```text
Maximal budget (number of NPCs) to change lod in one update. Used to prevent peaks if too many NPCs change lod at once
```

- **wh_ai_LOD_HideBudgetMin**:

```text
Minimal budget (number of NPCs) to change lod in one update.
```

- **wh_ai_LandSmartAreaTemplateName**:

```text
Name of the smart entity template that is considered the land area. Land area is found using this template.
```

- **wh_ai_LedgeSOTemplateName**:

```text
Name of the SO template used for generated ledge navigation smart objects
```

- **wh_ai_LimitSpeedAboveWalkEnabled**:

```text
Enables limit speed for running, sprinting NPCs
```

- **wh_ai_LimitSpeedDashBoundary**:

```text
Controls the boundary where the logical speed is clamped down to lower
```

- **wh_ai_LimitSpeedDirectionCriticalDistance**:

```text
Distance in which the influence of direction limit is boosted
```

- **wh_ai_LimitSpeedDirectionCurveMaxDeadZone**:

```text
Above the value of cvar the curve factor from forward direction is ignored and the speed is not limited.
```

- **wh_ai_LimitSpeedDirectionCurveMinDeadZone**:

```text
Below this value of cvar the curve factor from forward direction is clamped to minimum.
```

- **wh_ai_LimitSpeedDistance**:

```text
Controls distance from followed point in which the path limit is applied.
```

- **wh_ai_LimitSpeedLookAheadDistance**:

```text
Distance to look ahead when limiting the movement speed depending on the path
```

- **wh_ai_LimitSpeedPathCurveMaxDeadZone**:

```text
Above this value the curve factor from path is clamped and the speed is not limited
```

- **wh_ai_LimitSpeedSprintBoundary**:

```text
Controls the boundary where the logical speed is clamped down to lower
```

- **wh_ai_LogBodiesFilter**:

```text
Comma separated list of bodies that produce log messages. When empty, all bodies are logged.
```

- **wh_ai_LoopAnimWaitingTimeLimit**:

```text
Controls the limit when the remaning time for loop is considered tolerable and out animations wait until the loop end. Used only for selected action urgencies
```

- **wh_ai_MailboxDiscardsOldestMessage**:

```text
Enables FIFO behavior for message inboxes. 
		0 - LIFO (newest messages are not delivered to full mailboxes)
		1 - FIFO (oldest messages are discarded from full mailboxes)
```

- **wh_ai_MessageStatisticsCollectInUpdate**:

```text
Forces statistics collect in each update. May be performance consuming, use wisely.
```

- **wh_ai_MessageStatisticsDebugDraw**:

```text
Debug draws the collected message statistics. Uses bit flags:
0 - off
1 - basic draw
2 - message by type
4 - message by intellect
```

- **wh_ai_MessageStatisticsDebugDrawOffset**:

```text
Line offset of the statistics draw
```

- **wh_ai_MinPortEditZoomLevel**:

```text
The minimum zoom level at which a double-click on a Graph port will start to edit the port value.
```

- **wh_ai_MovementActorAdapterLimitUrgencyFrequency**:

```text
Frequence of actually limiting the urgency within the movement actor adapter
```

- **wh_ai_MovementActorSleep**:

```text
Enables the (partially) passive update of the movement actors
```

- **wh_ai_MovementBlockDoorLeaveOpenedPlayerDistanceHor**:

```text
Horizontal distance of player (from the door) when the door are left opened. Applied only for door that are public - both navigation end points are not in private area
```

- **wh_ai_MovementBlockDoorLeaveOpenedPlayerDistanceVert**:

```text
Vertical distance of player (from the door) when the door are left opened. Applied only for door that are public - both navigation end points are not in private area
```

- **wh_ai_MovementBlockDoorOpenInMaxDistanceForLateralTest**:

```text
Distance for lateral distance test where lateral tolerance is maximal.
```

- **wh_ai_MovementBlockDoorOpenInMaxLateralDistance**:

```text
Lateral distance tolerance when distance from the door is maximal.
```

- **wh_ai_MovementBlockDoorOpenInMinDistanceForLateralTest**:

```text
Distance for lateral distance test where lateral tolerance is mininal.
```

- **wh_ai_MovementBlockDoorOpenInMinLateralDistance**:

```text
Lateral distance tolerance when distance from the door is minimal.
```

- **wh_ai_MovementBlockDoorOpenInMinRotationDif**:

```text
Minimal allowed difference of rotation between vector actor->door and rotation of starting point.
```

- **wh_ai_MovementBlockDoorOutputDirectionDistance**:

```text
Distance on following path that determines output direction.
```

- **wh_ai_MovementBlockLadderApproachDistance**:

```text
Distance in which the NPC stops and waits when approaching the ladder that can't be yet used
```

- **wh_ai_MovementBlockLadderApproachDistanceVariation**:

```text
Random component of the distance in which the NPC stops and waits when approaching the ladder that can't be yet used
```

- **wh_ai_MovementBlockLadderClimbSpeed**:

```text
Climb speed used for NPC climbing the ladders
```

- **wh_ai_MovementBlockLedgeAlignBoneOffsetBuffer**:

```text
Small buffer added to the align bone offset when delaying the ledge grab in movemen block for ledges.
```

- **wh_ai_MovementBlockLedgeUseAlignBoneOffset**:

```text
Use delaying of the ledge grab base on the align bone offset
```

- **wh_ai_MovementSpeedThrottleAlertedWalk**:

```text

```

- **wh_ai_MovementSpeedThrottleDash**:

```text

```

- **wh_ai_MovementSpeedThrottleFastRun**:

```text

```

- **wh_ai_MovementSpeedThrottleModerateDash**:

```text

```

- **wh_ai_MovementSpeedThrottleModerateSprint**:

```text

```

- **wh_ai_MovementSpeedThrottleRelaxedWalk**:

```text

```

- **wh_ai_MovementSpeedThrottleRun**:

```text

```

- **wh_ai_MovementSpeedThrottleSlowDash**:

```text

```

- **wh_ai_MovementSpeedThrottleSlowSprint**:

```text

```

- **wh_ai_MovementSpeedThrottleSlowestDash**:

```text

```

- **wh_ai_MovementSpeedThrottleSprint**:

```text

```

- **wh_ai_MovementSpeedThrottleWalk**:

```text

```

- **wh_ai_MovementTaskMovingFarArivalDistance**:

```text
Minimum
```

- **wh_ai_MovementTaskMovingFarMinimumDistance**:

```text
Minimum path lenth to activate MovingFar context during the NPC's movement
```

- **wh_ai_MovementTaskRainSpeedUpDistance**:

```text
Controls the minimal distance for movement to consider speed up in rain
```

- **wh_ai_MovementTaskSkipRequestExactDirectionTolerance**:

```text
Direction tolerance for skipping the movement altogether. Movement is skipped when request contains exact positioning and NPC is closer to the exact direction then the specified cvar value. Value is in cosine of an angle (i.e. dot product)
```

- **wh_ai_MovementTaskSkipRequestExactDistanceTolerance**:

```text
Distance tolerance for skipping the movement altogether. Movement is skipped when request contains exact positioning and NPC is closer to the exact pos then the specified cvar value. Value is in meters.
```

- **wh_ai_MovementTeleportWhenStuck**:

```text
Turn on/off the system of automatic teleport when the agent is stuck.
		0 - off
		1 - on, teleports immediately when stuck
		2 - waits with teleport until the actor pos and teleport target are not visible from the camera
```

- **wh_ai_NPCBoundaryLayer2**:

```text

```

- **wh_ai_NPCBoundaryLayer3**:

```text

```

- **wh_ai_NPCBoundaryLayer4**:

```text

```

- **wh_ai_NPCContextGameLoadExecuteStateChange**:

```text
Is the change into loaded npc state executed or skipped
```

- **wh_ai_NPCContextGameLoadUpdatesBudget**:

```text
Budget for the game load updates to get the npc into loaded state. Used as a multiplier of actions count to compute the final budget
```

- **wh_ai_NPCContextStateSearchPostProcess**:

```text
Is the post process for NPC state search request from NPC context enabled
```

- **wh_ai_NPCDryUpdateMode**:

```text
Mode of executing dry update for NPCs 0 - all NPCs are dry updated, 1 - only registered NPCs are dry updated, 2 - only registered NPCs are update (but extra assert code for validation is executed)
```

- **wh_ai_NPCLookTarget**:

```text
Enables NPC look callback
```

- **wh_ai_NPCLookTargetDirectionFilter**:

```text
Filter to avoid trying to look backwards and other not very natural angles. The value is minimum allowed value of dot product between NPC forward direction and look target position
		Overrides (explicitly given look targets) won't use this filter.
```

- **wh_ai_NPCLookTargetDisableAnimVariations**:

```text
Controls if anim variations are disabled by the automatically selected NPC look target. 0 - never disabled, 1 - disabled when player is selected as look target
```

- **wh_ai_NPCLookTargetDistanceFilterXY**:

```text
Filter to avoid trying to look too far (max distance). Used only for the automatic look target selection.
		Overrides (explicitly given look targets) won't use this filter.
```

- **wh_ai_NPCLookTargetDistanceFilterZ**:

```text
Filter to avoid trying to look too high up or down (e.g. other floor in the building).
		Used only for the automatic look target selection. Overrides (explicitly given look targets) won't use this filter.
```

- **wh_ai_NPCLookTargetEyeOffsetMode**:

```text
Controls the mode how the eye offset is computed for NPC. 0 - using the static value from stance manager, 1 - using the bone position when both the looker and lookee are visible, 2 - always using bone position
```

- **wh_ai_NPCLookTargetHistoryTimeOutMax**:

```text
Maximal time of randomized look target history time out
```

- **wh_ai_NPCLookTargetHistoryTimeOutMin**:

```text
Minimal time of randomized look target history time out
```

- **wh_ai_NPCLookTargetInYourFaceDistanceSQ**:

```text
Distance of player npc in which the player is considered to be too close to the NPC (i.e. in NPC's comfort zone). The longer minimal looking time is used
```

- **wh_ai_NPCLookTargetMinTime**:

```text
Minimal time of NPC perception look target to be set. After this time (or after the target is recognized if the recognition takes longer) the look target is ignored. Use negative values for infinite time.
```

- **wh_ai_NPCLookTargetMinTimeInYourFace**:

```text
Minimal time of NPC perception look target with the InYourFace perceived state. After this time (or after the target is recognized if the recognition takes longer) the look target is ignored. Use negative values for infinite time
```

- **wh_ai_NPCLookTargetRandomPointDirectionFilter**:

```text
Direction filter for mode 1 of wh_ai_NPCLookTargetUseRandomPoint. The value is minimum allowed value of dot product between NPC forward direction and look target position
```

- **wh_ai_NPCLookTargetRandomPointHistoryTimeOutMax**:

```text
Maximal timeout for random generated point used as a NPC look target
```

- **wh_ai_NPCLookTargetRandomPointHistoryTimeOutMin**:

```text
Minimal timeout for random generated point used as a NPC look target
```

- **wh_ai_NPCLookTargetRandomPointMinTime**:

```text
Minimal time spent looking used for random generated point used as a NPC look target. After this time the look target is ignored for a timeout period. Use negative values for infinite time
```

- **wh_ai_NPCLookTargetRandomPointPhi**:

```text
Phi range used for generating random point as a look target. The poins is generated in [-phi, phi] range
```

- **wh_ai_NPCLookTargetRandomPointRadiusMax**:

```text
Maximum radius for generating random point as a look target
```

- **wh_ai_NPCLookTargetRandomPointRadiusMin**:

```text
Minimum radius for generating random point as a look target
```

- **wh_ai_NPCLookTargetRandomPointTheta**:

```text
Theta range used for generating random point as a look target. The point is generated in [-theta, theta] range
```

- **wh_ai_NPCLookTargetUseRandomPoint**:

```text
Enables using the random generated point as a lowest priority automatic look target
			0 - off
			1 - using generated world coordinates as a look target. May be filtered using	wh_ai_NPCLookTargetRandomDirectionFilter
			2 - using generated local coordinates as a look target. Effectively always looking in a generated direction.
```

- **wh_ai_NPCLookTargetUseSpatialFilterForPerceptionTargets**:

```text
Enables the spatial filter for look targets taken from perception. For the filtering setting (when enabled) see wh_ai_NPCLookTargetDirectionFilter, wh_ai_NPCLookTargetDistanceFilterXY, wh_ai_NPCLookTargetDistanceFilterZ
```

- **wh_ai_NPCMovementRandomThrottle**:

```text
Limits the random factor in NPC movement throttle control
```

- **wh_ai_NPCNavMeshPosCheckLastPoly**:

```text
Enables the optimization that first checks the nav mesh polygon from last update
```

- **wh_ai_NPCNavMeshPosRefreshToleranceSQ**:

```text
Squared distance for which the npc must move to refresh the nav mesh position.
```

- **wh_ai_NPCNavMeshPosUpdateBudget**:

```text
Number of NPCs for which the nav mesh position is update in each frame
```

- **wh_ai_NPCPriorityBoostSchedulerActivityHighThreshold**:

```text
Threshold value for assigning budget boost (into layer 1) to NPCs with activity priority equal to or above this threshold. The budget is assigned if the NPC is executing the activity, has upcoming result or has scheduled interrupt.
```

- **wh_ai_NPCPriorityBoostSchedulerActivityLowThreshold**:

```text
Threshold value for assigning budget boost (into layer 2) to NPCs with activity priority equal to or above this threshold. The budget is assigned if the NPC is executing the activity, has upcoming result or has scheduled interrupt.
```

- **wh_ai_NPCPriorityLayerBoostSchedulerActivityDistance**:

```text
Distance in which NPCs boosted by the priority of scheduler activity are boosted even further to highest layer
```

- **wh_ai_NPCPriorityLayerHysteresis**:

```text
Hysteresis used when assigning NPCs to the update priority layers
```

- **wh_ai_NPCStateActionSubsequentPathFindDistance**:

```text
Max search distance used in path finding when trying to find the action's subsequent path
```

- **wh_ai_NPCStateActionSubsequentPathLength**:

```text
Lenght of the subsequent path found in NPC state action post process
```

- **wh_ai_NPCStateActionSubsequentPathReachableTest**:

```text
Should the reachable test be executed in order to use the action's subsequent path for actual movement?
```

- **wh_ai_NPCStateActionSubsequentPathReachableTestTolerance**:

```text
Tolerance used when testing if the subsequent path is reachable
```

- **wh_ai_NPCStateActionSubsequentPathShortTrendLength**:

```text
Length of the subsequent path included when computing the short (or immediate) path trend
```

- **wh_ai_NPCStateActionSubsequentPathTrendLength**:

```text
Length of the subsequent path included when computing the trend
```

- **wh_ai_NPCStateAnimActionNameAligned**:

```text
Name of the action that is used for the aligned animations.
```

- **wh_ai_NPCStateAnimActionNameNoMovement**:

```text
Name of the action that is used for the non aligned animations.
```

- **wh_ai_NPCStateSearchActiveRequests**:

```text
Number of requests being processed in parallel.
```

- **wh_ai_NPCStateSearchActiveRequestsPostLoad**:

```text
Number of requests being processed in parallel used when post load budgets are enabled.
```

- **wh_ai_NPCStateSearchCenterPosMode**:

```text
Mode of the center position for sorting the priority queue of the requests.
		0 - default mode - center position depents on the wh_ai_ObserverAdapterMode value
		1 - player observer's position
		2 - camera observer's position
```

- **wh_ai_NPCStateSearchCenterPosThresholdSQ**:

```text
Squared distance threshold for updating the center position
```

- **wh_ai_NPCStateSearchImmediateSuccessEnabled**:

```text
Enables the immediate success request processing.
```

- **wh_ai_NPCStateSearchSliceUpdateCount**:

```text
Number of internal updates used in each sliced update.
```

- **wh_ai_NPCStateSearchSliceUpdateCountPostLoad**:

```text
Number of internal updates used in each sliced update used when post load budgets are enabled.
```

- **wh_ai_NPCStateSearchUpdatesLimit**:

```text
Limit for allowed internal update per NPC state search. Each search must be completed within this limit.
```

- **wh_ai_NPCStateSearchUsePostLoadBudgets**:

```text
Is the usage of different (larger) budgets in post load and related situations allowed
```

- **wh_ai_NPCStateUnstanceDatabaseUseGenericFastOuts**:

```text
Enables the usage of generic animations as unstance outs. Reguires restart or script reload after changed
```

- **wh_ai_NPCUpdateBudgetLowerBound**:

```text

```

- **wh_ai_NPCUpdateBudgetRatioLayer0**:

```text

```

- **wh_ai_NPCUpdateBudgetRatioLayer1**:

```text

```

- **wh_ai_NPCUpdateBudgetRatioLayer2**:

```text

```

- **wh_ai_NPCUpdateBudgetRatioLayer3**:

```text

```

- **wh_ai_NPCUpdateBudgetRatioLayer4**:

```text

```

- **wh_ai_NPCUpdateCountAdditionLayer0**:

```text

```

- **wh_ai_NPCUpdateCountAdditionLayer1**:

```text

```

- **wh_ai_NPCUpdateCountAdditionLayer2**:

```text

```

- **wh_ai_NPCUpdateCountAdditionLayer3**:

```text

```

- **wh_ai_NPCUpdateCountAdditionLayer4**:

```text

```

- **wh_ai_NPCUpdateCountLayer0**:

```text

```

- **wh_ai_NPCUpdateCountLayer1**:

```text

```

- **wh_ai_NPCUpdateCountLayer2**:

```text

```

- **wh_ai_NPCUpdateCountLayer3**:

```text

```

- **wh_ai_NPCUpdateCountLayer4**:

```text

```

- **wh_ai_NPCUpdateFixedBudget**:

```text

```

- **wh_ai_NPCUpdateJobBudgetLayer0**:

```text

```

- **wh_ai_NPCUpdateJobBudgetLayer1**:

```text

```

- **wh_ai_NPCUpdateJobBudgetLayer2**:

```text

```

- **wh_ai_NPCUpdateJobBudgetLayer3**:

```text

```

- **wh_ai_NPCUpdateJobBudgetLayer4**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer0**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer1**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer2**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer3**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer4**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetLayer0**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetLayer1**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetLayer2**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetLayer3**:

```text

```

- **wh_ai_NPCUpdateMinimalBudgetLayer4**:

```text

```

- **wh_ai_NPCUpdateNonMasterBudgetLowerBoundMultiplier**:

```text

```

- **wh_ai_NPCUpdatePostLoadBudget**:

```text
Budget used for each layer during post load reconstruction
```

- **wh_ai_NPCUpdatePostLoadJobBudget**:

```text
Per job budget used during post load reconstruction
```

- **wh_ai_NavMeshInUserData**:

```text
Saves the tile cache file into the user data
```

- **wh_ai_NavigationElementPathSideOffsetMult**:

```text
Multiplier when using the side offest -1.0f using the right side, 1.0 - using the left side
```

- **wh_ai_NavigationRequestCutterDensity**:

```text
Sampling density for the navigation request cutter
```

- **wh_ai_NavigationRequestCutterEnabled**:

```text
Enables cutting the start of navigation request when movement history is prepended
```

- **wh_ai_NavigationRequestCutterLookAhead**:

```text
Maximal look ahead distance where navigation requsted is cut
```

- **wh_ai_NavigationRequestCutterPointDistance**:

```text
Maximum distance from NPC where the sampling point must be from the NPC pos
```

- **wh_ai_NavigationRequestCutterSegmentMinLenght**:

```text
Minimal lenght limit for segment. Avoids division by small numbers or even zero
```

- **wh_ai_NonCircleCollisionAvoidance**:

```text
Use non circle shapes in collision avoidance
```

- **wh_ai_ObserverAdapterMode**:

```text
Master switch for ai observer mode. Used when the user's override mode is left to default.
		0 - default observer
		1 - player observer
		2 - camera observer
```

- **wh_ai_ObstaclesAddToCollisionAvoidance**:

```text
Add static obstacles to the collision avoidance. 0 - no, 1 - yes
```

- **wh_ai_OverrideMNM**:

```text
Recast navmesh and detour pathfinding are used in the movement.
```

- **wh_ai_OverrideMovementSpeed**:

```text
Override NPCs movement speed control. Plugs the RPG into the movement
```

- **wh_ai_PathDebugDraw**:

```text
Debug draw for roads
```

- **wh_ai_PathDebugDrawSegmentSize**:

```text
Segment size for debugging the roads
```

- **wh_ai_PathFinderAdditionalUpdateThresholdDefault**:

```text

```

- **wh_ai_PathFinderAdditionalUpdateThresholdHigh**:

```text

```

- **wh_ai_PathFinderAdditionalUpdateThresholdPathsOnly**:

```text

```

- **wh_ai_PathFinderAdditionalUpdateThresholdReachablePoint**:

```text

```

- **wh_ai_PathFinderCenterPosChangeThresholdSQ**:

```text
Squared threshold for recomputation of distances to prioritize the path finding requests
```

- **wh_ai_PathFinderCenterPosMode**:

```text
Controls the mode to get center position for path finder (and thus controls the sorting of path finding requests)
		0 - uses default - the observer depends on wh_ai_ObserverAdapterMode value 
		1 - uses player observer's position
		2 - uses camera observer's position
```

- **wh_ai_PathFinderEnabled**:

```text
Disables the pathfinding. Used for debug only!
```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsDefault**:

```text

```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsHigh**:

```text

```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsPathsOnly**:

```text

```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsReachablePoint**:

```text

```

- **wh_ai_PathFinderPostLoadBudgetUpdateCountMultiplier**:

```text
Multiplier of updates count for each request when enlarged budgets are applied.
```

- **wh_ai_PathFinderPriorityPromotionThresholdDefault**:

```text

```

- **wh_ai_PathFinderPriorityPromotionThresholdHigh**:

```text

```

- **wh_ai_PathFinderPriorityPromotionThresholdPathsOnly**:

```text

```

- **wh_ai_PathFinderPriorityPromotionThresholdReachablePoint**:

```text

```

- **wh_ai_PathFinderPrioritySlotsDefault**:

```text

```

- **wh_ai_PathFinderPrioritySlotsHigh**:

```text

```

- **wh_ai_PathFinderPrioritySlotsPathsOnly**:

```text

```

- **wh_ai_PathFinderPrioritySlotsReachablePoint**:

```text

```

- **wh_ai_PathFinderReuseFreeBudgetLimit**:

```text
Maximum number of updates used from free update slot
```

- **wh_ai_PathFindingBlockPathSearchExpectedNodesCount**:

```text
Expected count of the nodes withing the path graph. Used to initialize containers
```

- **wh_ai_PathFindingRequestSortingPenalty**:

```text
Penalty distance added for each accumulated failed path finding request
```

- **wh_ai_PathFollowResultSmootherDebugDraw**:

```text
Debug draws the path follow result smoother
```

- **wh_ai_PathFollowResultSmootherDistToEndThreshold**:

```text
Distance to path end threshold for path follower results smoother. If AI is closer to the end than this threshold
		there will be no smoothing.
```

- **wh_ai_PathFollowResultSmootherEndDirThreshold**:

```text
Dot product threshold between body dir and direction to move target thet ENDS the smoothing. Once started when dot product,
		raises above this threshold, the smoothing will stop
```

- **wh_ai_PathFollowResultSmootherMinSpeedThreshold**:

```text
Speed threshold for smoothing of the path follower results. When the actual velocity of the AI is below the threshold 
		there will be no smoothing.
```

- **wh_ai_PathFollowResultSmootherOppositeSideThreshold**:

```text
Threshold to stabilize the smoothed direction when body direction and target direction are almost opposite.
		If the dot product of smoothed dir and smoothed dir from last frame is below this threshold, the new smoothed dir
		will be adjusted
```

- **wh_ai_PathFollowResultSmootherStartDirThreshold**:

```text
Dot product threshold between body dir and direction to move target that STARTS the path follow result smoothing
		Dot product lower than this threshold will be smoothed. Set the cvar to lower than -1.0 to disable the smoothing altogether.
		The smoothing only happens for run and faster speeds.
```

- **wh_ai_PathFollowResultSmootherStartSpeedLimitDirThreshold**:

```text
Dot product threshold to start gradually limiting the speed
```

- **wh_ai_PathFollowerEndBodyDirDist**:

```text
Distance at the end of the path in which path follower sets end body direction
```

- **wh_ai_PathGridDebugDrawMode**:

```text
Debug draw mode for path manager grid
```

- **wh_ai_PathGridStatsDebugDraw**:

```text
Debug draws the statistics for path manager grid. Computes statistics in every frame and may be slow
```

- **wh_ai_PathMaxConnectionLength**:

```text
wh_ai_PathMaxConnectionLength
```

- **wh_ai_PathMaxConnectionLengthOffmesh**:

```text
wh_ai_PathMaxConnectionLengthOffmesh
```

- **wh_ai_PathStraightForDashCheckDebugDraw**:

```text
Debug draws the information for checking the straightness of the path ahead. 0 - disabled (default), 1 - enabled
```

- **wh_ai_PathStraightForDashCheckDistance**:

```text
Distance threshold for reevaluating the path ahead to determine if it is straight enough to use Dash speed
```

- **wh_ai_PathStraightForDashFullDistanceRequired**:

```text
Is it required to reach the end of distance when checking the straightness of a path.
		Effectively it means that at the end of a path the dash will be limited.
```

- **wh_ai_PathUseOldHeuristic**:

```text
wh_ai_PathUseOldHeuristic
```

- **wh_ai_PathfindingAutoAllowedSmartObjects**:

```text
Use only the auto allowed smart object - the ones linked to the source or target area (or their parent areas)			0 - use all smart objects			1 - use auto allowed smart objects
```

- **wh_ai_PathfindingIgnoreIncludeFlags**:

```text
0 - paths and  navigation smart objects are included, depending on path finding params in the specified variable		1 - ignores the pathfidning params variable and excludes the paths and navigation smart object from pathfinding.		2 - disables the second path finding attemp with generated NSO
```

- **wh_ai_PlayerHorseSchedulerProxy**:

```text
Name of entity to be used as player's horse's scheduler proxy.
```

- **wh_ai_PlayerSchedulerProxy**:

```text
Name of entity to be used as player's scheduler proxy.
```

- **wh_ai_PlayerStateHandlerCameraLimitHorizontalDeg**:

```text
Default value for horizontal camera limit used in player state handler
```

- **wh_ai_PlayerStateHandlerCameraLimitVerticalMaxDeg**:

```text
Default value for maximal vertical camera limit used in player state handler
```

- **wh_ai_PlayerStateHandlerCameraLimitVerticalMinDeg**:

```text
Default value for minimal vertical camera limit used in player state handler
```

- **wh_ai_PlayerStateHandlerFreeSpotForPlayerInterruptPriority**:

```text
Priority of interrupt scheduled to NPC blocking the minigame for player
```

- **wh_ai_PositioningDurationWarningThreshold**:

```text
Duration of the NPC positioning (teleport/fastforward) to be considered suspiciously long.
```

- **wh_ai_PostLoadBudgetsInPrecacheMode**:

```text
Enables enlarged (post load) budgets during precache mode. The budgets are enlarged only for selected subsystems
```

- **wh_ai_PostLoadBudgetsInSkipTime**:

```text
Enables enlarged (post load) budgets during precache mode. The budgets are enlarged only for selected subsystems
```

- **wh_ai_PreferClosesPathOverRaycastedIfXTimesCloser**:

```text
wh_ai_PreferClosesPathOverRaycastedIfXTimesCloser
```

- **wh_ai_RepeatedRayCastOffMeshTolerance**:

```text
Controls the tolerance used when raycasting towards an off mesh connection point.
		Tolerance allows the hits to be interpreted as no hits (when hit is within the tolerance from the end point).
```

- **wh_ai_SituationGameTimeMinInterval**:

```text
Minimal interval between the participation in situations in game time. Practically min value of the cooldown
```

- **wh_ai_SituationInterruptPriority**:

```text
Priority used for the situation interrupts passed to NPC scheduler
```

- **wh_ai_SituationInterruptUrgency**:

```text
Urgency used for situation interrupts.
```

- **wh_ai_SituationManagerSearchBudget**:

```text
Maximal budget in search steps during one update
```

- **wh_ai_SituationSubsystemDebugDraw**:

```text
Debug draw of the NPC's situation subsystem. Set name of the NPC as value to draw.
```

- **wh_ai_SituationWorldTimeMinInterval**:

```text
Minimal interval between the participation in situations in world time. Practically min value of the cooldown
```

- **wh_ai_SkipTimeJobBudgetMultiplier**:

```text
Multiplier of job budget skip time
```

- **wh_ai_SkipTimeLayerBudgetMultiplier**:

```text
Multiplier of layer budget during skip time
```

- **wh_ai_SkipTimePathFindingBudgetMultiplier**:

```text
Pathfinding budget multiplier during skip time
```

- **wh_ai_SkipTimeUpdateMinimalCountAdditionMultiplier**:

```text
Multiplier used for additional count added to the minimal update count within layer during skip time
```

- **wh_ai_SkiptTimeLayerBudgetAdditionMultiplier**:

```text
Multiplier of layer budget extra addition during skip time
```

- **wh_ai_SmartAreaUpdateBudgetLowerBound**:

```text

```

- **wh_ai_SmartAreaUpdateBudgetRatioLayer0**:

```text

```

- **wh_ai_SmartAreaUpdateBudgetRatioLayer1**:

```text

```

- **wh_ai_SmartAreaUpdateBudgetRatioLayer2**:

```text

```

- **wh_ai_SmartAreaUpdateCountAdditionLayer0**:

```text

```

- **wh_ai_SmartAreaUpdateCountAdditionLayer1**:

```text

```

- **wh_ai_SmartAreaUpdateCountAdditionLayer2**:

```text

```

- **wh_ai_SmartAreaUpdateCountLayer0**:

```text

```

- **wh_ai_SmartAreaUpdateCountLayer1**:

```text

```

- **wh_ai_SmartAreaUpdateCountLayer2**:

```text

```

- **wh_ai_SmartAreaUpdateFixedBudget**:

```text

```

- **wh_ai_SmartAreaUpdateJobBudgetLayer0**:

```text

```

- **wh_ai_SmartAreaUpdateJobBudgetLayer1**:

```text

```

- **wh_ai_SmartAreaUpdateJobBudgetLayer2**:

```text

```

- **wh_ai_SmartAreaUpdateMinimalBudgetAdditionLayer0**:

```text

```

- **wh_ai_SmartAreaUpdateMinimalBudgetAdditionLayer1**:

```text

```

- **wh_ai_SmartAreaUpdateMinimalBudgetAdditionLayer2**:

```text

```

- **wh_ai_SmartAreaUpdateMinimalBudgetLayer0**:

```text

```

- **wh_ai_SmartAreaUpdateMinimalBudgetLayer1**:

```text

```

- **wh_ai_SmartAreaUpdateMinimalBudgetLayer2**:

```text

```

- **wh_ai_SmartAreaUpdateNonMasterBudgetLowerBoundMultiplier**:

```text

```

- **wh_ai_SmartAreaUpdatePostLoadBudget**:

```text
Budget used for each layer during post load reconstruction
```

- **wh_ai_SmartAreaUpdatePostLoadJobBudget**:

```text
Per job budget used during post load reconstruction
```

- **wh_ai_SmartObjectBoundaryLayer1SQ**:

```text
Boundary distance for smart object priority. Value is squared distance
```

- **wh_ai_SmartObjectBrainLoadOptimization**:

```text
Doesn't load the brains without any logic for smart objects
```

- **wh_ai_SmartObjectDatabaseLoadValidAnimations**:

```text
Are the valid animations loaded into smart object animations database. 0 - not load, only invalid results are loaded. 1 - all animation results are loaded
```

- **wh_ai_SmartObjectDatabaseSaveValidAnimations**:

```text
Are the valid animations saved into smart object animations database. 0 - do not save, only invalid results are saved. 1 - all animation results are saved
```

- **wh_ai_SmartObjectHelpers_DrawHelperValidityPerActorClass**:

```text
Displays the actor class names with helper name in helper animations debug draw
```

- **wh_ai_SmartObjectPriorityLayerHysteresisSQ**:

```text
Hysteresis used when sorting the smart object into priority layers. Value is squared distance
```

- **wh_ai_SmartObjectUpdateAll**:

```text
Updates all smart objects or skips the smart objects without any internal logic
```

- **wh_ai_SmartObjectUpdateBudgetLowerBound**:

```text

```

- **wh_ai_SmartObjectUpdateBudgetRatioLayer0**:

```text

```

- **wh_ai_SmartObjectUpdateBudgetRatioLayer1**:

```text

```

- **wh_ai_SmartObjectUpdateBudgetRatioLayer2**:

```text

```

- **wh_ai_SmartObjectUpdateCountAdditionLayer0**:

```text

```

- **wh_ai_SmartObjectUpdateCountAdditionLayer1**:

```text

```

- **wh_ai_SmartObjectUpdateCountAdditionLayer2**:

```text

```

- **wh_ai_SmartObjectUpdateCountLayer0**:

```text

```

- **wh_ai_SmartObjectUpdateCountLayer1**:

```text

```

- **wh_ai_SmartObjectUpdateCountLayer2**:

```text

```

- **wh_ai_SmartObjectUpdateFixedBudget**:

```text

```

- **wh_ai_SmartObjectUpdateJobBudgetLayer0**:

```text

```

- **wh_ai_SmartObjectUpdateJobBudgetLayer1**:

```text

```

- **wh_ai_SmartObjectUpdateJobBudgetLayer2**:

```text

```

- **wh_ai_SmartObjectUpdateMinimalBudgetAdditionLayer0**:

```text

```

- **wh_ai_SmartObjectUpdateMinimalBudgetAdditionLayer1**:

```text

```

- **wh_ai_SmartObjectUpdateMinimalBudgetAdditionLayer2**:

```text

```

- **wh_ai_SmartObjectUpdateMinimalBudgetLayer0**:

```text

```

- **wh_ai_SmartObjectUpdateMinimalBudgetLayer1**:

```text

```

- **wh_ai_SmartObjectUpdateMinimalBudgetLayer2**:

```text

```

- **wh_ai_SmartObjectUpdateNonMasterBudgetLowerBoundMultiplier**:

```text

```

- **wh_ai_SmartObjectUpdatePostLoadBudget**:

```text
Budget used for each layer during post load reconstruction
```

- **wh_ai_SmartObjectUpdatePostLoadJobBudget**:

```text
Per job budget used during post load reconstruction
```

- **wh_ai_SmartPathFollowerShortcuttingLimitedDistance**:

```text
Maximal tolerated distance between the path follower position and the look ahead position when limited short cutting is used
```

- **wh_ai_StuckDetectionAllowAnyMovement**:

```text
Stuck detection allows any movement (not only advancing along the path
```

- **wh_ai_SubsystemBudgetsDurationSmoother**:

```text
Smoother value for computing the smoothed duration within subsystem budgets. Values from [0,1) range. 
		0 - non smoothed, 1 - would always use last smoothed value.
```

- **wh_ai_SubsystemBudgetsFixedRenderDurationMode**:

```text
Interprets the value of wh_ai_SubsystemBudgetsFixedRenderDurationMs
		0 - off - always use the actual render duration
		1 - fixed - always use wh_ai_SubsystemBudgetsFixedRenderDurationMs as render duration
		2 - cap - use wh_ai_SubsystemBudgetsFixedRenderDurationMs as upper limit on render duration
```

- **wh_ai_SubsystemBudgetsFixedRenderDurationMs**:

```text
Cvar value controlling the perceived render duration. See also wh_ai_SubsystemBudgetsFixedRenderDurationMode
```

- **wh_ai_SubsystemBudgetsRenderRatio**:

```text
Ratio used to compute available budget according to render. Ratio creates a small safety buffer not to exceed render time
```

- **wh_ai_TeleportBehaviorName**:

```text
Name of smart behavior that will be used for scheduler interrupt during NPC teleport.
```

- **wh_ai_TeleportToPlayerInterruptPriority**:

```text
Priority of the interrupt that teleports (horse) to the player
```

- **wh_ai_TileCacheAsBuildBuffer**:

```text
Use tile cache only during building nav mesh. In that case, the tile cache is initialized with minimal tile count.		The Value of cvar is used as the number of tiles in buffer. If 0 full tile cache is used
```

- **wh_ai_TooltipZoomThreshold**:

```text
The zoom level at which the MBT nodes will start to display their tooltips. The nodes will always display their tooltips when zoomed out so far that their representation is switched to an icon.
```

- **wh_ai_TrackDisabledAIActors**:

```text
Keeps track of disabled AI actors
```

- **wh_ai_TreeUpdaterUpdatesPerFrame**:

```text

```

- **wh_ai_TurnNodeIgnoreThresholdRad**:

```text
Skip turn body threshold. For small angles (below this threshold value) the turn body is skipped altogether.
		Normally the value 'minimumAngleForTurnWithoutDelay' from actor's params i used. The value of this cvar is used as a lower bound to clamp the value
		from actor params
```

- **wh_ai_TurnNodeThresholdRad**:

```text
Value controlling the internal precission threshold within Turn node. Value 0.2 corresponds with roughly 11 degrees when tolerance in node attribute is 0.
```

- **wh_ai_TurnTowardsPositionMinimalCorrectTime**:

```text
Minimal required time of correct NPC direction after which the TurnTowardsPosition movement block succeeds
```

- **wh_ai_TurnTowardsPositionTimeout**:

```text
Timouet for TurnTowardsPosition movement block. If the NPC doesn't have correct direction after the timout period, the movement block fails
```

- **wh_ai_TurnTowardsPositionTolerance**:

```text
Tolerance (in degrees) when the NPCs direction is considered correct within the TurnTowardsPosition movement block
```

- **wh_ai_UnstanceInActionNoReplanThreshold**:

```text
Threshold for disabling the replaning in Unstance in action
```

- **wh_ai_UnstanceInActionReplanCloseInterval**:

```text
Shored replan internal for Unstance in action
```

- **wh_ai_UnstanceInActionReplanCloseThreshold**:

```text
Distance in which the shorter replan interval is applied for Unstance in action
```

- **wh_ai_UnstanceInActionReplanInterval**:

```text
Controls the replan checking internval for Unstance in action.
```

- **wh_ai_UpdateEnabled**:

```text
Controls XGenAI module update. 1 - on, 0 - off, negative values - number of updates being incremented until 0 is reached (can be used for stepping one update at a time using value -1)
```

- **wh_ai_UpdateSuspenderEnabled**:

```text
Enables update suspension during profile steaming
```

- **wh_ai_UseBehaviorTreeCache**:

```text
Is cache for loading behavior trees used. 0 - unused, 1 - used.
```

- **wh_ai_UseEdgeCrossingPrediction**:

```text
Uses crossing between edge and line segment to the endpoint as the enter point instead of mid edge point.
```

- **wh_ai_ZoomOnBreakpointHits**:

```text
Set to 1 to center and zoom the Tree Editor view around the node when its breakpoint is hit (default); set to 0 to disable.
```

- **wh_ai_informationBroadcastFactionLabel**:

```text
All members of a faction subtree with this label will share information periodically.
```

- **wh_ai_pathSlicedDebugCurrentIterationCount**:

```text
Current number of iteration when new debug sliced query is performed
```

- **wh_ai_pathSlicedDebugEnabled**:

```text
Enables sliced debug query, pathfind is stoped after x iterations
```

- **wh_ai_pathSlicedDebugNextIterations**:

```text
Performs new pathfind query, which has 'CurrentIterationCount' + arg iterations
```

- **wh_ai_perception_bypass_rpg**:

```text
Set recognition speed for everyone to 0.5
```

- **wh_ai_perception_cone_bias_enable**:

```text
Enable a logarithmic 'spring' that pulls view direction towards body direction.
```

- **wh_ai_perception_cone_bias_log_base**:

```text
Bias angle of head direction from body direction through logarithm of this base.
```

- **wh_ai_perception_cone_hysteresis**:

```text
Symmetric tolerance for crossing from the inner to the outer cone and vice versa. Set to 0 to cross the border immediately (not recommended).
```

- **wh_ai_perception_enabled**:

```text

```

- **wh_ai_perception_ignore_fov_cylinder_back_section_deg**:

```text
Angular size of peripheral vision Pacman -- the complement is where NPCs don' see
```

- **wh_ai_perception_ignore_fov_cylinder_height**:

```text
Peripheral vision Pacman is actually a cylinder
```

- **wh_ai_perception_ignore_fov_cylinder_weight_direction**:

```text
Weight the direction of peripheral vision Pacman between head (0) and body (1)
```

- **wh_ai_perception_ignore_fov_radius**:

```text
Radius of peripheral vision Pacman -- perceive in immediate vicinity
```

- **wh_ai_perception_jobs_per_frame**:

```text

```

- **wh_ai_perception_lod_enabled**:

```text
Must not be changed at runtime
```

- **wh_ai_perception_perceived_states_parallel_update**:

```text
Enables parallel update of perceived states
```

- **wh_ai_perception_perceived_states_parallel_update_size**:

```text
Set number of objects in a job
```

- **wh_ai_perception_recognizing_threshold**:

```text
Add perception threshold of this level to everyone with crimeEnableRecognizingThreshold context.
```

- **wh_ai_perception_target_filtering_enable**:

```text
Eliminate targets that are not interesting right at the start.
```

- **wh_ai_schedulerExplicitInterruptWarningPriorityThreshold**:

```text
When the current activity is interrupted explicitly, if it had this or higher priority, warning is produced.
```

- **wh_ai_schedulerInvalidSearchTimeout**:

```text
Timeout after an unsuccessful search in scheduler [ms world time].
```

- **wh_ai_scheduler_SkipBehaviorNearCorpseMaxPriority**:

```text
Maximum top-level priority of links, that are disabled when a corpse is nearby.
```

- **wh_ai_scheduler_SkipOnFailMaxPriority**:

```text
Maximum top-level priority of scheduler result, where behavior is skipped once when it failed.
```

- **wh_ai_suppressAddingActorsIntoCryAI**:

```text
don't change at runtime
```

- **wh_ai_triggerAreas_debugDraw**:

```text
1 to draw all areas
2 to highlight areas with player presence
3 to draw trespass labeled areas only
```

- **wh_ai_validatePathsOnMnmOnProfileSwitch**:

```text
Should validate paths on mnm, can be costly!
```

- **wh_ai_z_axis_diff_lower**:

```text
Z-axis Difference functionality used for AI sounds. Lower bound of the linear slope from min to max attenuation.
```

- **wh_ai_z_axis_diff_upper**:

```text
Z-axis Difference functionality used for AI sounds. Upper bound of the linear slope from min to max attenuation.
```

- **wh_al_DebugDraw**:

```text
Alignment debug draw
```

- **wh_al_DisableAlignment**:

```text
Disables alignment in combat.
```

- **wh_al_DisableGroundAlignment**:

```text
Disables ground alignment in combat.
```

- **wh_al_GroundAlignmentFade**:

```text
Ground alignment fadeout in case of interruption
```

- **wh_al_GroundAlignmentMaxAngle**:

```text
Maximal angle for ground alignment.
```

- **wh_al_PosAlignment_AdaptiveInterruptionThreshold**:

```text
Max allowed movement error preventing alignment positioning - (collisions).
```

- **wh_al_PosAlignment_EndStifness**:

```text
Stifness of spring at the end of blend - it's the 'lag time', how many seconds actor lags behind target.
```

- **wh_al_PosAlignment_Interruption**:

```text
Enables possition alignmnet interruption when opponent is moving away.
```

- **wh_al_PosAlignment_InterruptionDistance**:

```text
Error distance limit defining possition alignmnet interruption when opponent is moving away.
```

- **wh_al_PosAlignment_InterruptionMinDistance**:

```text
Min pos error allowing alignmnet interruption when opponent is moving away.
```

- **wh_al_PosAlignment_ModeBlendTime**:

```text
Time of blend between alignment modes - alignemnt by attacker, by defender, static, etc.
```

- **wh_al_PosAlignment_RatioStifness**:

```text
Stifness of spring for ratio between actor-opponent during combined alignment.
```

- **wh_al_PosAlignment_StartStifness**:

```text
Stifness of spring at the start of blend - it's the 'lag time', how many seconds actor lags behind target.
```

- **wh_al_PosCombinedAlignment_EndStifness**:

```text
Stifness of spring at the end of blend - it's the 'lag time', how many seconds actor lags behind target.
```

- **wh_al_PosCombinedAlignment_InterruptionFrames**:

```text
Number of frames which combatants can be blocked during combined alignment.
```

- **wh_am_AnimationControllerManagerUpdateAll**:

```text
Force update of all registered controllers. Regardless of the actual pre physics update duration!
			0 - do not force update all
			1 - force update all controllers during skiptime
			2 - force update all controllers (at all times)
```

- **wh_am_AnimationControllerManagerUpdateEndsBeforeStartAnimProc**:

```text
Force update of all registered controller during skiptime. Regardless of the actual pre physics update duration!
```

- **wh_am_BoneCameraDebug**:

```text
Draws collision primitives for each camera of BoneCameraSelector (3rd person camera used in herb picking etc.)
Colliding are red, non-colliding in green.
```

- **wh_am_CCDFPS**:

```text
CCD frame rate.
```

- **wh_am_CCDPredCoef**:

```text
Angular forces coefficient
```

- **wh_am_CCDPredLength**:

```text
Prediction overlook.
```

- **wh_am_DebugAttachments**:

```text
Debug attachments position
```

- **wh_am_DebugAttachmentsFilter**:

```text
filter for wh_am_DebugAttachments
```

- **wh_am_DebugCollisions**:

```text
Debug collisions
```

- **wh_am_DebugHandIK**:

```text
Debug hand ik in AnimatedHuman
1: left hand
2: right hand
3: both hands
```

- **wh_am_DebugHandIKMode**:

```text
Debug hand ik mode
1: IK target positions
2: actual positions
3: both
```

- **wh_am_DrawCollisions**:

```text
Debug draw for collisions
```

- **wh_am_DrawIntersections**:

```text
Debug draw for intersections
```

- **wh_am_ForceCCD**:

```text
Force continuous collision detection.
```

- **wh_am_JointPoseMorphDebug**:

```text
Enables debug draw for joint-based morphs (facial animation)
.  Respects ca_FilterJoints.
```

- **wh_am_LOD_Debug**:

```text
Debug animation controller and anim LODs for given entities (comma separated)
```

- **wh_am_LOD_ForceEmitAllAnimEvents**:

```text
Forces to emit all anim events. Not just important for lod
```

- **wh_am_LOD_LocatorPeriodicalUpdate**:

```text
Time period for updating estimated entity location
```

- **wh_am_LOD_Test**:

```text
Test animation controller
```

- **wh_ansel_enable**:

```text
Master switch of Nvidia Ansel
```

- **wh_autoDemo**:

```text
WH[JM]: Cvar for automated profiling. If set to 1, automatically starts time demo without user interaction after the game starts (from the main menu).
```

- **wh_boid_DebugDraw**:

```text
Enables boid debug draw.
```

- **wh_boid_KillAngle**:

```text
Dot product tolerance which enable to murder a boid.
```

- **wh_boid_KillDistance**:

```text
SQ Distance to boid to enable murder.
```

- **wh_boid_MaxDistFromPlayerForRaycasts**:

```text
Only allow boids shooting raycasts for obstacle avoidance if the boid is at least this close to player.
```

- **wh_boid_RatScareTime**:

```text
If a rat was scared for longer than this time, it will hide. If it is not scared, accumulated time goes linearly down again.
```

- **wh_boid_RoosterCrowTimeEnd**:

```text
Time of day, when roosters stops crowing.
```

- **wh_boid_RoosterCrowTimeStart**:

```text
Time of day, when roosters starts crowing.
```

- **wh_bridle_DebugInfo**:

```text
Shows horse briddle debug info
```

- **wh_ca_AnimationComputationJobBatchSize**:

```text
Sets the size of job batches that are used for animation calculations
```

- **wh_ca_BlendSimulationDebugDraw**:

```text
Enables text debug draw for blending of simulation (pendula, vcloth)
```

- **wh_ca_CacheSkinValidation**:

```text
Caches result of skin LOD test (msg. 'LOD0 and LOD1 have different bones'), reduces log spamming
```

- **wh_ca_CharStreamLodAll**:

```text
Forces all LODs to be streamed in.
```

- **wh_ca_CharStreamLodOverride**:

```text
Force only the specified LOD (or the closest available) to be streamed in. Disabled with -1
```

- **wh_ca_ClothBudgetAdaptivePriority**:

```text
When enabled, priority cutoff for vcloth budgeting (see wh_ca_ClothDefaultPriorityCutoff) 
will be adapted each frame based on whether there was time left in the frame within which VCloth can be simulated without stalling main thread
```

- **wh_ca_ClothBudgetAdjustmentPerFrame**:

```text
Budget cutoff is increased by this per frame if CommandBuffer computation stalled main thread or  decreased by this if it did not stall and some vcloths were skipped because of low budget last frame.
```

- **wh_ca_ClothBudgetDebugDraw**:

```text
Debug draw for VCloth budgeting. Bitwise - sum them to turn on multiple modes:
1 - draws histogram of vcloths based on how many frames each of them skipped. Only shows VCloth with simulation enabled
2 - averages over the last 50 frames how many each vcloth skipped
 and renders a sphere that is: Red if none skipped, Blue if all of them, interpolated in between.
4 - draws bounding boxes used for determining size on screen, along with screen percentage they cover and vcloth's priority
(last non-max, the priority is in grey when maximum priority is assigned this frame)
```

- **wh_ca_ClothBudgetDefaultPriorityCutoff**:

```text
VCloths with priority less than cutoff will not be fully simulated.
```

- **wh_ca_ClothBudgetIncreaseBudgetWhenMainThreadIsIdling**:

```text
When enabled, priority cutoff for vcloth budgeting (see wh_ca_ClothDefaultPriorityCutoff) 
will be allowed to decrease even if it prolongs main thread time (see wh_ca_ClothBudgetAdaptivePriority) as long as the main thread 
was waiting for render thread/GPU for at least wh_ca_ClothBudgetMinTimeToConsiderAsMainThreadIdling ms.

```

- **wh_ca_ClothBudgetMaxCutoff**:

```text
Maximum value of budget priority cutoff. Is never increased above this by wh_ca_ClothBudgetAdjustmentPerFrame and vcloths get assigned at best this (except for cases when we want to force their simulation).
```

- **wh_ca_ClothBudgetMaxFramesToSkip**:

```text
If budgeting system skipped skipped simulation for more than this many frames, 
the VCloth will be simulated regardless of priority.
```

- **wh_ca_ClothBudgetMaxSSaxisSizePercToSkipFrames**:

```text
If char with vcloth covers more than this portion of the screen (vertically or horizontally, whichever is bigger), it will get infinite budget - never skip frames.
 Amount of frames allowed to skip for smaller sizes is interpolated based on this and wh_ca_ClothEnableSimulationSSaxisSizePerc from 1 to wh_ca_ClothBudgetMaxFramesToSkip.
```

- **wh_ca_ClothBudgetMinTimeToConsiderAsMainThreadIdling**:

```text
Time to consider as idling for wh_ca_ClothBudgetIncreaseBudgetWhenMainThreadIsIdling.
```

- **wh_ca_ClothCollisionMaxExpectedSlideDist**:

```text
Only relevant for wh_ca_ClothProxyCollisionMode 2.Distance in default pose from particle to collider - particles farther away are not expected to slide onto that collider.
If it collides, it is treated as collider being outside the cloth, not inside.
```

- **wh_ca_ClothCollisionNormalSmoothing**:

```text
Only relevant for wh_ca_ClothProxyCollisionMode 2.
Smoothing of skinned normals by averaging normals of each particle's neighbor. Value is the number of smoothing iterations.
```

- **wh_ca_ClothDisableSimulationAtDistance**:

```text
Distance at which cloth simulation is disabled (see also wh_ca_ClothEnableSimulationSSaxisSizePerc)
```

- **wh_ca_ClothEnableSimulationSSaxisSizePerc**:

```text
If size of characters bounding box exceeds provided percentage of viewport size, simulation is enabled
(even when beyond distance of wh_ca_ClothDisableSimulationAtDistance)
```

- **wh_ca_ClothLimitedModeMinFramesOn**:

```text
When limited mode is turned on, it will be on for at least this many consecutive frames.
Prevents oscillations between full and limited mode, as the positions of particles will change a bit when switching to limited
 and it could be recognized as motion, even when the character is not moving.
Recommended minimum 2 - 1 was proven to be not enough.
```

- **wh_ca_ClothLimitedModeNumIterations**:

```text
See wh_ca_ClothLimitedModeThreshold. Less than 3 typically leads to oscillations in cloth.
```

- **wh_ca_ClothLimitedModeThreshold**:

```text
If maximum movement (in meters) of vcloth nodes since last frame is less than this,
will do only wh_ca_ClothLimitedModeNumIterations instead of numIterations specified in asset's config and only one collision resolve at the end.
```

- **wh_ca_ClothMaxProxiesTranslateThreshold**:

```text
If one of cloth colliders moves by more than this between two frames, simulation will be restarted (from skinning).
```

- **wh_ca_ClothProxyCollisionMode**:

```text
0 - Use mode as defined in asset config
1 - Force IterativeShortest on all clothing:
iteratively move particle towards closest point on proxy surface, see also wh_ca_ClothProxyResolveFactor 
2 - Force AlongSkinnedNormals on all clothing:
instantly move particle in the direction of it's skinned normal to the proxy surface
```

- **wh_ca_ClothProxyResolveFactor**:

```text
Factor used when resolving vcloth collisions, higher values means faster (in fewer iterations) towards surface
```

- **wh_ca_ClothRagdollSkinningBlendFactor**:

```text
In ragdoll, cloth simulation is blended with skinning. 0 = full skinning, 1 = full simulation.
```

- **wh_ca_ClothSimulationRestartDebug**:

```text
Writes out chars that were restarted (because of too large translation of collision proxies, see wh_ca_ClothMaxProxiesTranslateThreshold). Bitwise:1 restarts that had to be done from main thread (cloth was not simulated before)2 restarts that were done from job.
```

- **wh_ca_DebugCloth**:

```text
Enables debug for simulation sub steps for VCloth
```

- **wh_ca_DebugDrawCloth**:

```text
Enables debug draw for VCloth:1 - stretch links2 - shear links3 - bend links4 - all links6 - all positions (white: sim pos., green: previous pos., blue: old pos., red: skinned pos.7 to 10 - normals of sim. mesh with progressively smaller scale16 (bitwise) - sim mesh normals (cyan: initial, magenta: current)32 (bitwise) - skinned mesh normals (red: current). Valid only with AlongSkinnedNormal collision mode (see wh_ca_ClothProxyCollisionMode).
```

- **wh_ca_DebugDrawClothNNDC**:

```text
Enables debug draw for VCloth Nearest Neighbor Distance Constraints
```

- **wh_ca_DebugDrawClothProxies**:

```text
Enables debug draw for VCloth proxies
```

- **wh_ca_DebugSkinLODs**:

```text
Shows info about skin LODs per character instance. Flags values
1 - Show per character
2 - Show when LOD is rendered by different character
4 - Show triangles for each LOD
8 - Show names of each LOD
16 - Show LOD legend
32 - Show total and average
```

- **wh_ca_DebugSkinLODsEntityFilter**:

```text
Filter for which entity should the debug draw be displayed.
```

- **wh_ca_DebugSkinLODsMaxDistance**:

```text
Max distance for wh_ca_DebugSkinLODs.
```

- **wh_ca_DebugSkinLODsSkeletonFilterList**:

```text
List of skeleton substrings for which the debug draw should be displayed, eg. 'humans animals'
```

- **wh_ca_DeleteDBAOnLevelUnload**:

```text
Should the DBAs be unloaded when clearing character resources on level unload?
```

- **wh_ca_ExtendSkeletonOnAttachmentAdd**:

```text
Allow default skeleton to be extended when a skin attachment requires it.
```

- **wh_ca_GeometricMeanOverride**:

```text
Replaces GeometricMean calculation with constant value
```

- **wh_ca_PendulumDebugDraw**:

```text
Bitwise (combine modes by summing). Affected by ca_FilterCharacters:
1: turns on text debug (speed, position, stiffness etc.)
2: draws velocity (blue) and acceleration (red) vectors as lines
4: draws bob position in current (blue) and stabilized (red) position as spheres connected to the parent joint by lines
8: draws collision primitives of the pendulums. Green = no collision, blue = standard collisions,
    red & yellow = joint collisions (see wh_ca_PendulumResolveJointCollisions): yellow = resolved collisions
    red = not resolved because the end point is not inside collision
16: draws collision primitives of the character with which pendulums collide (VCloth proxies are colored magenta)
```

- **wh_ca_PendulumIgnoredMotionDebugDraw**:

```text
When turned on (1), will write out pendula that ignored translation in the past 5 seconds (cinematic cuts).
```

- **wh_ca_PendulumJointCollisionMinSpeed**:

```text
Minimum speed (m/s) at which are wh_ca_PendulumResolveJointCollisions resolved.
Large values can cause the pendulums to start bouncing a little,
with small values the collisions will not be resolved as well as the resolution won't be able to overcome gravity.
```

- **wh_ca_PendulumResolveJointCollisions**:

```text
When turned on, if joints of the pendulum is inside a collider with which the pendulum collides,
the collision is still resolved, although the resolved position is rather random.
```

- **wh_ca_SkinLodBonesMismatchAction**:

```text
Changes what happens when higher LODs of skin have incompatible skeleton.
0 - Don't load skin
1 - Skip incompatible LOD when in Editor
2 - Always skip incompatible LOD
```

- **wh_ca_SkinningTypeOverride**:

```text
Force skinning type
0 - Default
1 - Linear skinning
2 - Dual quaternion
```

- **wh_ca_SocketsBypassSimulation**:

```text
if this is 1 socket simulation is disabled
```

- **wh_ca_WarnOnUnmappedJoints**:

```text
Warn when skin joint was not found in characters current skeleton.
```

- **wh_cam_DumpLocation**:

```text
Dumps camera location to log and clipboard (useful for a QA bug report). Use "ed_goto" for a later reconstruction.
```

- **wh_cart_ActorDependentUpdate**:

```text
Enables dependent actor PPU update. If disabled it updates in parallel during actor PPU.
```

- **wh_cart_CaravanBlendDist**:

```text
Stopping distance before cart obstacles in caravan.
```

- **wh_cart_CaravanMaxBackDist**:

```text
Maximum distance from cart behind in caravan for free movement.
```

- **wh_cart_CaravanMinFrontDist**:

```text
Minimum distance from front cart in caravan for free movement.
```

- **wh_cart_Debug**:

```text
Selects cart entity to display debug info.
```

- **wh_cart_DisableAuxPhysics**:

```text
Disable cart physics for debugging.
```

- **wh_cart_DisableTestNotSeenByPlayer**:

```text
This can bypass check that postpone horse mounting if player is watching them.
```

- **wh_cart_DozerObstacleOffset**:

```text
Offset of the collision avoidance created for the cart's dozer
```

- **wh_cart_DozerObstacleOffsetStep**:

```text
Step between the collision avoidance obstacles create for the cart's dozer
```

- **wh_cart_DozerObstacleRadius**:

```text
Radius of the collision avoidance created for the cart's dozer
```

- **wh_cart_DozerObstacleRadiusDecrement**:

```text
Decrement of the radius used for the collision avoidance created for the cart's dozer
```

- **wh_cart_DozerObstaclesCount**:

```text
Count of the obstacles created for a cart's dozer
```

- **wh_cart_ForceEnablePlayerSeat**:

```text
This can bypass cart seat setting from script.
```

- **wh_cart_MainObstacleOffset**:

```text
Offset of the obstacle created for the cart's body
```

- **wh_cart_MainObstacleRadius**:

```text
Radius of the obstacle created for the cart's body
```

- **wh_cart_MovementPitchFactor**:

```text
How much cart slowdown or speedup on slopes - X * <-pi/2, pi/2>
```

- **wh_cart_MovementPitchMinLimit**:

```text
Minimum speed which is not influenced by slopes.
```

- **wh_cart_MovementSmoothingStiffness**:

```text
Stiffness of cart movement - how fast is cart slowing down.
```

- **wh_cart_MovementSpeedNormal**:

```text
Global normal cart movement speed on straight terrain.
```

- **wh_cart_NavigationPlatzPadding**:

```text
Padding around the stopped card to create navigation platz
```

- **wh_cart_ObstacleSpeedMultiplier**:

```text
Multiplier of the speed used for cart obstacle
```

- **wh_cart_ReplanMoveAreaPadding**:

```text
Padding around the stopped cart to create replan move area.
```

- **wh_cart_SlowdownPlayerInProximity**:

```text
Should the player be slowed down in the proximity of a cart?
```

- **wh_cat_AlwaysSpawn**:

```text
Spawn cats always, no metter the day, weather, etc
```

- **wh_cat_AttackTriggerDist**:

```text
How close player has to attack (not free attack) something to scare a cat
```

- **wh_cat_FreeAttackTriggerDist**:

```text
How close player has to free attack something to scare a cat
```

- **wh_cat_MaxVisibilityDistance**:

```text
At this distance the cat is de/spawned
```

- **wh_cat_MinRunAnimationSpeed**:

```text
Do not slow run animations below this speed
```

- **wh_cat_PathSmoothingPeriod**:

```text
Maximal distance to next point, at which curvature of path begins (in time seconds, how far cat runs in this time)
```

- **wh_cat_ProximityScareDist**:

```text
How close player has be to scare a cat
```

- **wh_cat_RollBlendTime**:

```text
How fast cat change it's roll.
```

- **wh_cat_RollLimit**:

```text
How much and how fast cat leans to sides when turning
```

- **wh_cat_RollPerRadianPerSecond**:

```text
How much cat change it's roll, depending on direction change delta
```

- **wh_cat_RunRotationInterpolationSpeed**:

```text
How fast cat model rotates
```

- **wh_cat_TerrainFollowingBlendTime**:

```text
How fast cats sticks to terrain and back
```

- **wh_cat_TimeScaleChangeTime**:

```text
How fast time speed changes
```

- **wh_cat_TurnTimeSpeedupRatio**:

```text
How much time speeds up in slowdowns in turns
```

- **wh_cat_debug**:

```text
Cat debug draw.
```

- **wh_cc_AnimCharBloodOverrideRandomness**:

```text
how random will the blood on animchars be generated
```

- **wh_cc_AttachmentSlotPoseModifier**:

```text
enables morphing of attachment slots through a pose modifier:
  0 - off, 1 - blend with anim, 2 - override anim, 3 - identity for debug
```

- **wh_cc_BleedingSpeed**:

```text
how fast is bleeding spreading [intensity/s]
```

- **wh_cc_ClothingAM**:

```text
select clothing attachment manager, 0 - dummy/turn off, 1 - turn on
```

- **wh_cc_CutsceneManagerPriorityBoost**:

```text
how much is the priority increased when the owner entity is in cutscene
```

- **wh_cc_DirtSystem**:

```text
enabled/disable dirt system
```

- **wh_cc_HiddenInvisibleManagerPriorityDecrease**:

```text
how much is the priority decreased when the owner entity is hidden or invisible
```

- **wh_cc_LRUCache**:

```text
ability to turn on/off LRU cache for clothing system
```

- **wh_cc_LodForUberlod**:

```text
a LOD number from where we start showing the uberlod (-1 disables the feature)
```

- **wh_cc_MaxSkinLoaderJobQueueSize**:

```text
maximal count of queued jobs
```

- **wh_cc_MaxSkinLoaderJobs**:

```text
maximum count of simultaneously running loader jobs
```

- **wh_cc_MaxSkinLoadingInProgress**:

```text
maximum count of scheduled skin jobs. Limits the amount of temp memory allocated
```

- **wh_cc_PreloadMaterials**:

```text
controls material pre-loading
  0 - do not preload
  1 - preload in game
  2 - always preload (game and editor)
```

- **wh_cc_RequiredPostLoadReadyManagers**:

```text
how many priority managers must be ready
```

- **wh_cc_RequiredPostLoadReadyTime**:

```text
how long we must be ready [s]
```

- **wh_cc_SchedulerBudgetPerLayer**:

```text
how many jobs are update in the 0th layer
```

- **wh_cc_SchedulerDebug**:

```text
debug draw of the update scheduler, 1 - per layer debug, 2 - sorted jobs
```

- **wh_cc_SchedulerLayer0Count**:

```text
job count in the 0th layer
```

- **wh_cc_SchedulerMaxSortIterations**:

```text
max job sorting iterations
```

- **wh_cc_SchedulerPostLoadBudgetPerLayer**:

```text
how many jobs are update in the 0th layer during the load
```

- **wh_cc_SkinAttachmentFlags**:

```text
flags set to the newly created body/clothing skin attachment (AttachmentFlags enum; same as in the cdf file; 8 for the SW skinning, 32 for linear skinning)
```

- **wh_cc_TotalUpdateBudget**:

```text
per-manager budget, zero and negative values will disable the update
```

- **wh_cc_UberlodLoadDistRatio**:

```text
ratio of max view distance where uberlods are loaded [%]
```

- **wh_cc_UberlodMaterial**:

```text
material name used by character uberlods (without path and extension)
```

- **wh_cc_UnloadHysteresisDist**:

```text
hysteresis distance for unloading uberlod and attachments [m]
```

- **wh_cc_visorAnimDuration**:

```text
duration of opening / closing visor
```

- **wh_cl_DofMinZ**:

```text
distance of the close bluring of dof
```

- **wh_cl_DofMinZScale**:

```text
intensity of the close bluring of dof
```

- **wh_cl_NearDof**:

```text
Toggles near depth of field
```

- **wh_cl_invertControllerHorizontal**:

```text
Controller look Left-Right invert (horizontal)
```

- **wh_cl_invertControllerHorizontalCombat**:

```text
invert X axis in combat [0 - no invert / 1 - inverted]
```

- **wh_cl_invertControllerVertical**:

```text
Controller look Up-Down invert (vertical)
```

- **wh_cl_invertControllerVerticalCombat**:

```text
invert Y axis in combat [0 - no invert / 1 - inverted]
```

- **wh_cl_sensitivityHorizontal**:

```text
Controller sensitivity Left-Right (horizontal)
```

- **wh_cl_sensitivityVertical**:

```text
Controller look sensitivity Up-Down (vertical)
```

- **wh_con_expr_prefix**:

```text
Prefix for printing the value of script expressions.
```

- **wh_con_unix**:

```text
0=full complete mode / 1=Unix auto complete mode
```

- **wh_concept_Debug**:

```text
Shows graph loaded state (value >= 1) and concept nodes state (value >= 2)
```

- **wh_concept_DebugFilter**:

```text
Filters the output of wh_concept_Debug by substring. Empty value means no filter.
```

- **wh_concept_DebugShowOnlyChanged**:

```text
Filters the output of wh_concept_Debug. When value > 0,it shows only states witch are changed from default and are going to be serialized into save game.
```

- **wh_concept_DefinitionFile**:

```text
Concept definition xml file.
```

- **wh_concept_MaxNestedDataFetchThreshold**:

```text
Node infinite loop detection limit (data fetch request count per frame). The number is determined by max estimated callstack depth.
```

- **wh_concept_MaxNestedTriggerThreshold**:

```text
Node infinite loop detection limit (triggers). The number is determined by max estimated callstack depth.
```

- **wh_concept_MemorySavingDoNotLoadOtherLevel**:

```text
Determines whether unimportant nodes from other level should be skiped from loading to save memory.
```

- **wh_concept_Path**:

```text
Concept folder
```

- **wh_concept_RandomEventStreaming**:

```text
Determines whether random events place concept nodes should be ommited to save memory on game start and streamed back during game when needed.
0 = present at start, streaming off 
1 = missing at start, streaming on (in editor, it behaves as 0)
2 = missing at start, streaming off (event places disabled)

```

- **wh_concept_RandomEventStreamingDebug**:

```text
Debug draw for random event concepts graphs
```

- **wh_concept_ReloadOnGameModeStart**:

```text
Automatically reloads concept graph on editor game mode enter.
```

- **wh_concept_ReloadOnlyModified**:

```text
Only modified concept files are being reloaded on wh_concept_Reload
```

- **wh_cs_AIAttackFiglProb**:

```text
Probability that AI will be making figl when AIForceAttack=5.
```

- **wh_cs_AIAttackInterval**:

```text
Time interval between opponent's attacks
```

- **wh_cs_AIDistanceTolerance**:

```text
Attack distance tolerance for AI.
```

- **wh_cs_AIForceBlockMode**:

```text
Force AI block mode trigger
```

- **wh_cs_AIForceProfile**:

```text
Force AI brain profile from table.
```

- **wh_cs_AIForceSymetric**:

```text
Force AI to get symetric force zone.
```

- **wh_cs_AIMoveDistance**:

```text
AI Move distance for 'Pusuit' mode - opp will stop at this distance.
```

- **wh_cs_AIMoveMode**:

```text
AI Move mode: 1-None, 2-Around, 3-Pursuit
```

- **wh_cs_AIMoveSpeed**:

```text
AI Move speed
```

- **wh_cs_AIMoveTimer**:

```text
AI Move time for 'Around' mode - duration of one half-cycle.
```

- **wh_cs_AIReblockMode**:

```text
AI reblock mode: 0 - never, 1 - always, 2 - random 50% chance
```

- **wh_cs_AISkillProfile**:

```text
Skill profile for AI.
```

- **wh_cs_AISlotDurationMod**:

```text
Custom RPG Mod of riposte slot - 0 = lama, 0.5 = standard, 1 = profa
```

- **wh_cs_ArmWeaponRadius**:

```text
Radius of unarmed weapon (sphere).
```

- **wh_cs_AttackTimeToHitEst**:

```text
Average duration of attack time to hit.
```

- **wh_cs_Automation1_ClinchActionDelayMax**:

```text
Debug AI automation: Min time for delayed clinch action
```

- **wh_cs_Automation1_ClinchActionDelayMin**:

```text
Debug AI automation: Min time for delayed clinch action
```

- **wh_cs_Automation1_ClinchAlternativeProb**:

```text
Debug AI automation: Probability of use of alternative guard in clinch.
```

- **wh_cs_Automation1_ComboHitCancelProb**:

```text
Debug AI automation: prob that normal combo is cancelled when hit opponent.
```

- **wh_cs_Automation1_ComboProb**:

```text
Debug AI automation: prob of normal combo.
```

- **wh_cs_Automation1_ComboSteps**:

```text
Debug AI automation: max number of steps for natural combo.
```

- **wh_cs_Automation1_Dodge**:

```text
Debug AI probability for dodge
```

- **wh_cs_Automation1_GuardAbilityLevel**:

```text
Debug AI automation: Guard ability level.
```

- **wh_cs_Automation1_GuardBorderHystDiameter**:

```text
Debug AI automation: Guard border hysteresis diameter.
```

- **wh_cs_Automation1_GuardBorderLevel0**:

```text
Debug AI automation: Guard border distance for begginer.
```

- **wh_cs_Automation1_GuardBorderLevel1**:

```text
Debug AI automation: Guard border distance for master.
```

- **wh_cs_Automation1_Mode**:

```text
Allows to specify whitch automation will be started after selecting target: 0..none, 1..defense, 2..offense, 3..guard, 4..all
```

- **wh_cs_Automation1_NB**:

```text
Debug AI probability for normal block
```

- **wh_cs_Automation1_NoAction**:

```text
Debug AI probability for no defense action
```

- **wh_cs_Automation1_PB**:

```text
Debug AI probability for perfect block
```

- **wh_cs_Automation1_PeriodicalAttackTime**:

```text
Debug AI automation: time for periodical attacking.
```

- **wh_cs_Automation1_RiposteProb**:

```text
Debug AI automation: riposte probability <0,1>.
```

- **wh_cs_Automation1_SPB**:

```text
Debug AI probability for special perfect block
```

- **wh_cs_Automation1_StaticPreblock**:

```text
Debug AI: enables static preblock
```

- **wh_cs_Automation1_Target**:

```text
Enables debug AI on given entity.
```

- **wh_cs_Automation1_TrickActionDelayMax**:

```text
Debug AI automation: Max delay for selected trick action.
```

- **wh_cs_Automation1_TrickActionDelayMin**:

```text
Debug AI automation: Min delay for selected trick action.
```

- **wh_cs_Automation1_TrickAttackProb**:

```text
Debug AI automation: <0,1> Probability for attack from trick.
```

- **wh_cs_Automation1_TrickChangeZoneProb**:

```text
Debug AI automation: <0,1> Probability for changing zone during trick.
```

- **wh_cs_Automation1_TrickEndAttackProb**:

```text
Debug AI automation: <0,1> Probability for terminating trick step without attack.
```

- **wh_cs_Automation1_TrickNewQueryTimeoutMax**:

```text
Debug AI automation: Max delay for next trick step decision.
```

- **wh_cs_Automation1_TrickNewQueryTimeoutMin**:

```text
Debug AI automation: Min delay for next trick step decision.
```

- **wh_cs_Automation1_TrickReactionDelayMax**:

```text
Debug AI automation: Max time between opponent's trick and reblock.
```

- **wh_cs_Automation1_TrickReactionDelayMin**:

```text
Debug AI automation: Min time between opponent's trick and reblock.
```

- **wh_cs_Automation1_WeaponMissileDistRangeMin**:

```text
Debug AI automation: Overrides bow limits
```

- **wh_cs_Automation1_ZoneAdaptationDelayMax**:

```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
```

- **wh_cs_Automation1_ZoneAdaptationDelayMin**:

```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
```

- **wh_cs_Automation1_ZoneChangeDefenseModeWeight**:

```text
Debug AI automation: <0,1> Weight for blending between random selection and best defense fighter decisions
```

- **wh_cs_Automation1_ZoneChangeOffenseModeWeight**:

```text
Debug AI automation: <0,1> Weight for blending between random selection and best offense fighter decisions
```

- **wh_cs_Automation1_ZoneChangeTimeoutMax**:

```text
Debug AI automation: Max time between changes of zones.
```

- **wh_cs_Automation1_ZoneChangeTimeoutMin**:

```text
Debug AI automation: Min time between changes of zones.
```

- **wh_cs_Automation2_ClinchActionDelayMax**:

```text
Debug AI automation: Min time for delayed clinch action
```

- **wh_cs_Automation2_ClinchActionDelayMin**:

```text
Debug AI automation: Min time for delayed clinch action
```

- **wh_cs_Automation2_ClinchAlternativeProb**:

```text
Debug AI automation: Probability of use of alternative guard in clinch.
```

- **wh_cs_Automation2_ComboHitCancelProb**:

```text
Debug AI automation: prob that normal combo is cancelled when hit opponent.
```

- **wh_cs_Automation2_ComboProb**:

```text
Debug AI automation: prob of normal combo.
```

- **wh_cs_Automation2_ComboSteps**:

```text
Debug AI automation: max number of steps for natural combo.
```

- **wh_cs_Automation2_Dodge**:

```text
Debug AI probability for dodge
```

- **wh_cs_Automation2_GuardAbilityLevel**:

```text
Debug AI automation: Guard ability level.
```

- **wh_cs_Automation2_GuardBorderHystDiameter**:

```text
Debug AI automation: Guard border hysteresis diameter.
```

- **wh_cs_Automation2_GuardBorderLevel0**:

```text
Debug AI automation: Guard border distance for begginer.
```

- **wh_cs_Automation2_GuardBorderLevel1**:

```text
Debug AI automation: Guard border distance for master.
```

- **wh_cs_Automation2_Mode**:

```text
Allows to specify whitch automation will be started after selecting target: 0..none, 1..defense, 2..offense, 3..guard, 4..all
```

- **wh_cs_Automation2_NB**:

```text
Debug AI probability for normal block
```

- **wh_cs_Automation2_NoAction**:

```text
Debug AI probability for no defense action
```

- **wh_cs_Automation2_PB**:

```text
Debug AI probability for perfect block
```

- **wh_cs_Automation2_PeriodicalAttackTime**:

```text
Debug AI automation: time for periodical attacking.
```

- **wh_cs_Automation2_RiposteProb**:

```text
Debug AI automation: riposte probability <0,1>.
```

- **wh_cs_Automation2_SPB**:

```text
Debug AI probability for special perfect block
```

- **wh_cs_Automation2_StaticPreblock**:

```text
Debug AI: enables static preblock
```

- **wh_cs_Automation2_Target**:

```text
Enables debug AI on given entity.
```

- **wh_cs_Automation2_TrickActionDelayMax**:

```text
Debug AI automation: Max delay for selected trick action.
```

- **wh_cs_Automation2_TrickActionDelayMin**:

```text
Debug AI automation: Min delay for selected trick action.
```

- **wh_cs_Automation2_TrickAttackProb**:

```text
Debug AI automation: <0,1> Probability for attack from trick.
```

- **wh_cs_Automation2_TrickChangeZoneProb**:

```text
Debug AI automation: <0,1> Probability for changing zone during trick.
```

- **wh_cs_Automation2_TrickEndAttackProb**:

```text
Debug AI automation: <0,1> Probability for terminating trick step without attack.
```

- **wh_cs_Automation2_TrickNewQueryTimeoutMax**:

```text
Debug AI automation: Max delay for next trick step decision.
```

- **wh_cs_Automation2_TrickNewQueryTimeoutMin**:

```text
Debug AI automation: Min delay for next trick step decision.
```

- **wh_cs_Automation2_TrickReactionDelayMax**:

```text
Debug AI automation: Max time between opponent's trick and reblock.
```

- **wh_cs_Automation2_TrickReactionDelayMin**:

```text
Debug AI automation: Min time between opponent's trick and reblock.
```

- **wh_cs_Automation2_WeaponMissileDistRangeMin**:

```text
Debug AI automation: Overrides bow limits
```

- **wh_cs_Automation2_ZoneAdaptationDelayMax**:

```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
```

- **wh_cs_Automation2_ZoneAdaptationDelayMin**:

```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
```

- **wh_cs_Automation2_ZoneChangeDefenseModeWeight**:

```text
Debug AI automation: <0,1> Weight for blending between random selection and best defense fighter decisions
```

- **wh_cs_Automation2_ZoneChangeOffenseModeWeight**:

```text
Debug AI automation: <0,1> Weight for blending between random selection and best offense fighter decisions
```

- **wh_cs_Automation2_ZoneChangeTimeoutMax**:

```text
Debug AI automation: Max time between changes of zones.
```

- **wh_cs_Automation2_ZoneChangeTimeoutMin**:

```text
Debug AI automation: Min time between changes of zones.
```

- **wh_cs_AutomationAction_AttackAfterComboTime**:

```text
Combat automation - defines time after combo end before new normal attack.
```

- **wh_cs_AutomationAction_AttackImmediateDistance**:

```text
Combat automation - defines distance when NPC does immediate attack to keep distance from player.
```

- **wh_cs_AutomationAction_AttackUpdateInterval**:

```text
Combat automation - defines frequency for updating attacking params.
```

- **wh_cs_AutomationAction_BattlementQueryRadius**:

```text
Radius for battlement query.
```

- **wh_cs_AutomationAction_BattlementShootingAngleHorizontal**:

```text
Horizontal angle range for battlement shooting in degrees.
```

- **wh_cs_AutomationAction_BattlementShootingAngleVertical**:

```text
Vertical angle range for battlement shooting in degrees.
```

- **wh_cs_AutomationAction_BattlementShootingElevationTolerance**:

```text
Tolerance in z-axis for position of battlement and combatant that wants to use it.
```

- **wh_cs_AutomationAction_BattlementShootingMaxRange**:

```text
Maximal distance for battlement range.
```

- **wh_cs_AutomationAction_BattlementShootingMinRange**:

```text
Minimal distance for battlement range.
```

- **wh_cs_AutomationAction_BattlementUpdateInterval**:

```text
Default update interval for battlement automation.
```

- **wh_cs_AutomationAction_DebugDraw**:

```text
Debug AI automation: Enables debug draw.
```

- **wh_cs_AutomationAction_DebugDrawTarget**:

```text
Enables debug automation on given entity.
```

- **wh_cs_AutomationAction_DefenseMoveReactionVelocityLim**:

```text
AI defense automation: forward velocity limit for move reaction
```

- **wh_cs_AutomationAction_DelayedEnd**:

```text
Combat automation - when an opponent is not threat any more than defense actions (preblock) must be terminated with given delay.
```

- **wh_cs_AutomationAction_DogAttackAngleLimit**:

```text
Combat automation - dog angle limitation for attack.
```

- **wh_cs_AutomationAction_ForceUnarmedHealthThreshold**:

```text
Health threshold when forced unarmed combat vs. player expired.
```

- **wh_cs_AutomationAction_GuardApproachHystTimer**:

```text
Hysteresis timer to hold approach mode after real aiming ended to survive firing
```

- **wh_cs_AutomationAction_GuardDebugDraw**:

```text
Debug AI automation: Guard automation debug draw.
```

- **wh_cs_AutomationAction_GuardEscapeMinDuration**:

```text
Debug AI automation: Min actor speed for escape mode selection.
```

- **wh_cs_AutomationAction_GuardFOV**:

```text
FOV angle in degrees along actor dir that limits guard automation
```

- **wh_cs_AutomationAction_GuardFOVHyst**:

```text
Hysteresis diameter for FOV angle in degrees along actor dir that limits guard automation
```

- **wh_cs_AutomationAction_GuardFOVVertical**:

```text
Maximum possible angle to opponent before npc is unlocked from combat.
```

- **wh_cs_AutomationAction_GuardInjuredDistanceMod**:

```text
Guard distance is modified with mod in the injured state.
```

- **wh_cs_AutomationAction_GuardMaxSpeed**:

```text
Debug AI automation: Max speed in combat guard.
```

- **wh_cs_AutomationAction_GuardMinAtkDist**:

```text
Debug AI automation: Min atk dist for guard automation.
```

- **wh_cs_AutomationAction_GuardRotDisableOnDodgeCooldown**:

```text
Timeout after opponent makes dodge to disable disabling guard by rot.
```

- **wh_cs_AutomationAction_GuardUpdateInterval**:

```text
Debug AI automation: Update interval for guard autmation decision.
```

- **wh_cs_AutomationAction_HigherComboStepBias**:

```text
Combo automation - max prob for first combo step. Prob is increased with combo step count.
```

- **wh_cs_AutomationAction_HuntAttackDist**:

```text
AI automation: Distance for hunt attack decision based on unreached move event.
```

- **wh_cs_AutomationAction_HuntAttackDistRand**:

```text
AI automation: Random offset for hunt attack distance.
```

- **wh_cs_AutomationAction_HuntAttackTimeLimit**:

```text
AI automation: Max time limit for hunt attack attempt.
```

- **wh_cs_AutomationAction_MaxDistanceForTarget**:

```text
AI automation: Maximum distance to target - preventing targeting of too far targets.
```

- **wh_cs_AutomationAction_MissileAimingFailureCooldown**:

```text
AI automation: Shooting will fail if firing is not executed until this limit.
```

- **wh_cs_AutomationAction_MissileCylRaycastOffset**:

```text
AI automation: Offset of shape cast from the attacker weapon.
```

- **wh_cs_AutomationAction_MissileCylRaycastRadius**:

```text
AI automation: Radius of cylindrical raycast for missile obstacle detection.
```

- **wh_cs_AutomationAction_MissileDebugDraw**:

```text
AI automation: debug draw for missile automation.
```

- **wh_cs_AutomationAction_MissileHuntAttackCooldown**:

```text
AI automation: Cooldown for hunt attacks against ranged opponent.
```

- **wh_cs_AutomationAction_MissileUpdateInterval**:

```text
AI automation: Update interval for missile automation.
```

- **wh_cs_AutomationAction_MoveProblem_AfterHuntAttackDuration**:

```text
AI automation: Defines duration after hunt attack to give a change to solve move problem.
```

- **wh_cs_AutomationAction_MoveProblem_BypassUncertainOnIsAimedDuration**:

```text
AI automation: Cooldown duration for uncertain state triggered by is aimed state.
```

- **wh_cs_AutomationAction_MoveProblem_DebugForceUncertain**:

```text
AI automation: Total duration to resolve move problem. Then report to script.
```

- **wh_cs_AutomationAction_MoveProblem_DistanceFlee**:

```text
AI automation: Defines flee distance for move problem decision.
```

- **wh_cs_AutomationAction_MoveProblem_DistanceThreat**:

```text
AI automation: Defines threat distance for move problem decision.
```

- **wh_cs_AutomationAction_MoveProblem_DistanceThreatForcedUncertain**:

```text
AI automation: Defines threat distance for move problem decision (in forced uncertain state).
```

- **wh_cs_AutomationAction_MoveProblem_EstimatingMoveCooldown**:

```text
AI automation: Cooldown for estimating move before automation sent problem to the skirmish.
```

- **wh_cs_AutomationAction_MoveProblem_EventFilteringTreshold**:

```text
AI automation: Defines init filtering time for filtering of unreachable event.
```

- **wh_cs_AutomationAction_MoveProblem_NoPathMissileAttemptCooldown**:

```text
When pathfind files the npc try to change to missile after this cooldown.
```

- **wh_cs_AutomationAction_MoveProblem_SlowPursuitDuration**:

```text
AI automation: Defines duration for slow pursuit state.
```

- **wh_cs_AutomationAction_MoveProblem_TotalDuration**:

```text
AI automation: Total duration to resolve move problem. Then report to script.
```

- **wh_cs_AutomationAction_MoveProblem_UncertainDuration**:

```text
AI automation: Defines duration for uncertain state of movement problem.
```

- **wh_cs_AutomationAction_MoveProblem_UnreachableFilterDuration**:

```text
AI automation: Defines init duration for filtering of unreachable event.
```

- **wh_cs_AutomationAction_MoveProblem_UnreachedFilterDuration**:

```text
AI automation: Duration of filtering for unreached event after 'Uncertain' state.
```

- **wh_cs_AutomationAction_MoveProblem_WeaponChangeDuration**:

```text
AI automation: Defines duration for weapon change attempt at solve move event.
```

- **wh_cs_AutomationAction_MovementRestrictionOverlapTime**:

```text
Period for movement restriction overlap after action or change of zone.
```

- **wh_cs_AutomationAction_ShoutActionGuardCooldown**:

```text
Debug AI automation: Action shouts are not palyed during this cooldown starting on enter to guard.
```

- **wh_cs_AutomationAction_ShoutActionGuardCooldownVariation**:

```text
Debug AI automation: Action shouts are not palyed during this cooldown starting on enter to guard.
```

- **wh_cs_AutomationAction_ShoutClinchGuardCooldown**:

```text
Debug AI automation: Clinch shouts are not palyed during this cooldown starting on enter to guard.
```

- **wh_cs_AutomationAction_ShoutDistanceLimitMax**:

```text
Debug AI automation: Distance limiting combat idle shouting.
```

- **wh_cs_AutomationAction_ShoutIdleGuardCooldown**:

```text
Debug AI automation: Idle shouts are not palyed during this cooldown starting on enter to guard.
```

- **wh_cs_AutomationAction_ShoutIdleGuardCooldownVariation**:

```text
Debug AI automation: Idle shouts are not palyed during this cooldown starting on enter to guard.
```

- **wh_cs_AutomationAction_ShoutIdleUpdateInterval**:

```text
Debug AI automation: Update interval for idle shout autmation decision.
```

- **wh_cs_AutomationAction_StaticPreblockEnabled**:

```text
Combat automation - enables static preblock.
```

- **wh_cs_AutomationAction_StaticPreblockRateHistoryDuration**:

```text
Combat automation - defines history duration for computing rate between preblocks and blocks.
```

- **wh_cs_AutomationAction_StaticPreblockUpdateInterval**:

```text
Combat automation - defines time interval between static preblock decision.
```

- **wh_cs_AutomationAction_TemporaryGuardStarterPeriod**:

```text
Time for temporary start of guard after StartCombat procclip.
```

- **wh_cs_AutomationAction_WeaponAttackDistTimeTolerance**:

```text
Debug AI automation: Weapon automation - non precise attack distance hysteresis over time.
```

- **wh_cs_AutomationAction_WeaponChangeViaSignal**:

```text
Changing weapon from automation is done via NPC state combat helper or via signal. 0 - npc state combat helper, 1 - signal
```

- **wh_cs_AutomationAction_WeaponMissileInitRandCoef**:

```text
Debug AI automation: Weapon automation - rand coef for missile weapon init decision.
```

- **wh_cs_AutomationAction_WeaponMissileLoadingMinDistance**:

```text
Minimal range from attacker to allow loading of ranged werapon (without autoload).
```

- **wh_cs_AutomationAction_WeaponOversizedAttackProblemDuration**:

```text
Debug AI automation: Weapon automation - drop oversized weapon after given duration from last attack.
```

- **wh_cs_AutomationAction_WeaponUnreachedTest**:

```text
Debug AI automation: Weapon automation - testing of movement enevent unreached.
```

- **wh_cs_AutomationAction_WeaponsUpdateInterval**:

```text
Debug AI automation: Weapon automation - update interval.
```

- **wh_cs_AutomationAction_ZoneChangeAdaptationHysteresis**:

```text
Hysteresis period when adaption (from zone change) is done before next adaption.
```

- **wh_cs_AutomationAction_ZoneChangeAttackSequenceMaxCount**:

```text
Combat automation - maximum preattack sequence changes.
```

- **wh_cs_AutomationAction_ZoneChangeAttackSequenceMinCount**:

```text
Combat automation - minimal preattack sequence changes.
```

- **wh_cs_AutomationAction_ZoneChangeComboOppositeStanceWeight**:

```text
Combo zone weight when stances are opposite.
```

- **wh_cs_AutomationAction_ZoneChangeComboSameStanceWeight**:

```text
Combo zone weight when stances are same.
```

- **wh_cs_AutomationAction_ZoneChangeComboSameZoneWeight**:

```text
Combo zone weight when zones are same.
```

- **wh_cs_AutomationAction_ZoneChangeDebugDraw**:

```text
Debug AI automation: Enables zone selection debug draw.
```

- **wh_cs_AutomationAction_ZoneChangePhysicalZoneTimer**:

```text
Delay for physical zone behind guard zone.
```

- **wh_cs_AutomationAction_ZoneChangeQualityTimingCoef**:

```text
Debug AI automation: Coef <0, 1> for maximal speedup of zone timing for whorse combinations.
```

- **wh_cs_AutomationAction_ZoneChangeRestrictionTimer**:

```text
Checking period of zone validity by restriction.
```

- **wh_cs_AutomationAction_ZoneChangeRestrictionWeight**:

```text
Weight multiplier for restricted zone by enviro.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceChangeGap**:

```text
Combat automation - time gap between changes.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceMaxCount**:

```text
Combat automation - maximum sequence changes.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceMaxTimeMax**:

```text
Combat automation - max time between natural sequences for max fencing.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceMaxTimeMin**:

```text
Combat automation - max time between natural sequences for min fencing.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceMinCount**:

```text
Combat automation - minimal sequence changes.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceMinTimeMax**:

```text
Combat automation - min time between natural sequences for max fencing.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceMinTimeMin**:

```text
Combat automation - min time between natural sequences for min fencing.
```

- **wh_cs_AutomationAction_ZoneChangeSequenceSkillBonus**:

```text
Combat automation - skill bonus for change zone timing (lower skill longer time).
```

- **wh_cs_AutomationAction_ZoneChangeSequenceTime**:

```text
Combat automation - safe time between sequence changes.
```

- **wh_cs_AutomationAction_ZoneChangeToAttackMinDelay**:

```text
Combat automation - min time between zone change and attack (for visual quality).
```

- **wh_cs_AutomationAction_ZoneChangeUpdateInterval**:

```text
Combat automation - defines frequency for updating zone change params.
```

- **wh_cs_BattleDebugDraw**:

```text
Debug draw fot battle manager.
```

- **wh_cs_BattleDebugDrawFilter**:

```text
Filtering for battle debug draw by control entity.
```

- **wh_cs_BattleMaxIdleAnimationTimeOffset**:

```text
Maximum time offset of idle animation when creating a idle sequence.
```

- **wh_cs_BattleMaxIdleAnimationTimeScale**:

```text
Maximum time scale of idle animation when creating a idle sequence.
```

- **wh_cs_BattleMaximumDeadNPC**:

```text
Maximum count of dead NPCs on the scene. When there is more the oldest will disappear.
```

- **wh_cs_BattleMaximumNPC**:

```text
Maximum full and alive NPC on the battle field excluding player.
```

- **wh_cs_BattleMaximumShooterAngle**:

```text
Maximum angle deviation of shooter directed to his target.
```

- **wh_cs_BattleMaximumShooterDistance**:

```text
Maximum distance for shooter targeting.
```

- **wh_cs_BattleShooterAngleWeight**:

```text
Weight for angle priority component.
```

- **wh_cs_BattleShooterDistanceWeight**:

```text
Weight for distance priority component.
```

- **wh_cs_BattleShootingAimingMultiplier**:

```text
Multiplier of aiming period for battle shooters.
```

- **wh_cs_BattleShootingAimingVariation**:

```text
Variation for aiming period for battle shooters.
```

- **wh_cs_BehindCollisionIgnoreThreshold**:

```text
Ignores all collision that y-coord is lesser than the value.
```

- **wh_cs_BigTurnThreshold**:

```text
Big turn animation is used to turn a character above this angle.
```

- **wh_cs_BlockCooldown**:

```text
Cooldown for player block trigger.
```

- **wh_cs_BlockWithdrawalBlendWeightLoss**:

```text
Blendweight loss for blocking move back when obstacle found.
```

- **wh_cs_BrokenBlockInterruptWhenDestroyedWeapon**:

```text
Broken block is interrupted when weapon is destroyed after this time.
```

- **wh_cs_BrokenBlockOverride**:

```text
Override for broken blocks for testing purposes 0 - by rpg, 1 - broken, 2 - normal blocks.
```

- **wh_cs_CanAlmostHitOffset**:

```text
Offset from max attack distance limiting area for potential threat.
```

- **wh_cs_ChargedAttackOverride**:

```text
Override for charged RPG state used for testing purposes.
```

- **wh_cs_ClenchedHandOverlapTime**:

```text
Overlap in seconds for clenched hand action after request ends.
```

- **wh_cs_Combat3PCameraFOV**:

```text
Combat 3P camera default FOV.
```

- **wh_cs_CombatAnimCameraBlendOut**:

```text
Combat anim camera blend out [s].
```

- **wh_cs_CombatAnimCameraSmooth**:

```text
Combat anim camera smoothing.
```

- **wh_cs_CombatCameraStyle**:

```text
Combat camera style [0] - Fixed at opponent, [1] - Dynamic
```

- **wh_cs_CombatCapsulePosZ**:

```text
Position above the ground of additional combat capsule.
```

- **wh_cs_CombatCapsuleWidth**:

```text
Width of additional combat capsule.
```

- **wh_cs_CombatCursorMode**:

```text
Cursor mode in combat - 0 - completely hidden, 1 - normal mode, 2 - HC mode (only dot)
```

- **wh_cs_CombatCursorSmoothing**:

```text
Smoothing for opponent UI in combat.
```

- **wh_cs_ComboSlotDuration**:

```text
Duration of combo slot
```

- **wh_cs_CombosEnabled**:

```text
Combo mechanic is enabled.
```

- **wh_cs_CursorOffsetDog**:

```text
Z offset of combat cursor for dog.
```

- **wh_cs_CursorOffsetNPC**:

```text
Z offset of combat cursor for NPC.
```

- **wh_cs_DBQueryCache**:

```text
Enables cache for database queries.
```

- **wh_cs_DBQueryProfiling**:

```text
Enables profiling of database queries.
```

- **wh_cs_DeadBodyDebugDraw**:

```text
Debug draw for dead body manager.
```

- **wh_cs_DeadBodyDebugDrawFilter**:

```text
Filtering for deadbody debug draw by control entity.
```

- **wh_cs_DeathSyncHitHPTolerance**:

```text
Threshold when resting HP is considered as fatal and opponent dies.
```

- **wh_cs_DebugAI**:

```text
Enables debug AI
```

- **wh_cs_DebugAnimDebug**:

```text
Enables animation debug draw for defined battle soul.
```

- **wh_cs_DebugAttackStart**:

```text
AttackStart activation for debug wioth cvar. 1 for activation, 2 for deactivation
```

- **wh_cs_DebugCameraOverride**:

```text
Override for combat camera. Allows incarnate camera to the npc in the combat.
```

- **wh_cs_DebugCombatActions**:

```text
Detailed information about combat actions in the log.
```

- **wh_cs_DebugCombatGroups**:

```text
Debug draw for combat groups. 1 - dumping history when some safe check fails, 2 - osd debug draw of the groups
```

- **wh_cs_DebugDrawAttackActions**:

```text
Enable visual debug of attack actions.
```

- **wh_cs_DebugDrawLods**:

```text
Enables lod manager debug draw
```

- **wh_cs_DebugDrawPlayerInput**:

```text
Enable visual debug of player input.
```

- **wh_cs_DebugDrawQuery**:

```text
Show query debug for specified actor.
```

- **wh_cs_DebugFilter**:

```text

```

- **wh_cs_DebugHitStrength**:

```text
Debug hit strength overriding rpg for debuggin weak and strong hits.
```

- **wh_cs_DebugIdleTurns**:

```text
Debug idle turns.
```

- **wh_cs_DebugInfo**:

```text
Enable combat system debug info. You can provide entity name or 1.
```

- **wh_cs_DebugInfoPosY**:

```text
Define combat system debug info position in Y
```

- **wh_cs_DebugIsAimedOff**:

```text
Disables state IsAimed on given actor.
```

- **wh_cs_DebugIsAimedOn**:

```text
Enables state IsAimed on given actor.
```

- **wh_cs_DebugObstacleMask**:

```text
Allow filter obstacle test to debug draw.
```

- **wh_cs_DebugObstacleTestTarget**:

```text
Enables debug draw for obstacles test on given entity.
```

- **wh_cs_DebugOpponent**:

```text
Set debug opponent which can then controlled with a keyboard.
```

- **wh_cs_DebugPhys**:

```text
Enable combat system debug info for physics
```

- **wh_cs_DebugPlayer**:

```text
Force debug AI to select player as opponent
```

- **wh_cs_DebugShowCombatDebugInTests**:

```text
Indicates when debug draw should be visible during tests.
```

- **wh_cs_DelayedBlock**:

```text
Delay for AI blocks in s.
```

- **wh_cs_DelayedMasterStrikeInSlot**:

```text
Delay for auto master strike in slot <0, 1>. Enabled with with in master strike slot
```

- **wh_cs_DelayedPerfectBlockInSlot**:

```text
Delay for AI blocks in slot <0, 1>. Enabled with PB blocks.
```

- **wh_cs_DelayedRiposteInSlot**:

```text
Delay for auto riposte in slot <0, 1>. -1 for disable
```

- **wh_cs_DisableCombatCamera**:

```text
Disables combat camera.
```

- **wh_cs_DisablePlayerOpponentSelection**:

```text
Disable standard selection of opponent for player for tests.
```

- **wh_cs_DisableScripts**:

```text
Disables Lua scripts - movement.
```

- **wh_cs_DisableWeakBlock**:

```text
Disables weak block feature.
```

- **wh_cs_DisabledAttackDebug**:

```text
Forces interrupted attacks for debugging.
```

- **wh_cs_DisabledAttackTimeout**:

```text
Timeout to interrupt attack after R2S.
```

- **wh_cs_Dodge_DistanceFactorOverride**:

```text
Override dodge distance factor for debugging.
```

- **wh_cs_Dodge_Duration**:

```text
Duration of entity dodge movement (player value).
```

- **wh_cs_Dodge_IgnoreCollision**:

```text
When nonzero dodging actor will ignore weapon collision with his attacker.
```

- **wh_cs_Dodge_MaxDistance**:

```text
Max distance (m) for dodge movement (player value).
```

- **wh_cs_Dodge_SpatialTimeLimit**:

```text
Time limit in percent from dodge animation to get spatial data.
```

- **wh_cs_Dodge_WindowMod**:

```text
Mod of Dodge slot window - determined as (t_hit - t_dodgeslot) from attack x this value.
```

- **wh_cs_DogClinchOpponentAlignmentOffset**:

```text
Alignment offset when my opponent is in clinch with a dog.
```

- **wh_cs_DonotUseDatabaseIndices**:

```text
Bypass database optimization indices in combat databases.
```

- **wh_cs_EnableCollisionResizing**:

```text
Enables to enlarge capsule collision in combat mode.
```

- **wh_cs_EnableCombatGroups**:

```text
Enable combat groups for combat.
```

- **wh_cs_EnableNavmeshTest**:

```text
Enables navmesh tests for some action types.
```

- **wh_cs_EnableStealthActions**:

```text
Enables stealth actions
```

- **wh_cs_EnvSpatialGridRefreshRate**:

```text
Determines how often is updated environmental spatial grid (in sec)
```

- **wh_cs_EventIdleCooldown**:

```text
Cooldown for idle event when both combatants are in guard.
```

- **wh_cs_EventIdleCooldownVar**:

```text
Variation for idle event.
```

- **wh_cs_EventIdleFollowingCooldown**:

```text
Cooldown for idle event when actor stays in the guard longer.
```

- **wh_cs_EventIdleFollowingCooldownVar**:

```text
Variation for EventIdleFollowingCooldown.
```

- **wh_cs_FixedCombatCursor**:

```text
Combat cursor is fixed in the middle of the screen.
```

- **wh_cs_ForceAttack**:

```text
Force AI to Attack by: 0 - disabled, 1 - riposte, 2 - attack every 8s and, riposte,  3 - no attack, 4 - riposte, player riposte, 5 - attack with figl
```

- **wh_cs_ForceBlock**:

```text
Force AI to block by: 0 - disabled, 1 - normal block, 2 - perfect block, 3 - no block, 4 - broken block, 5 - master strike
```

- **wh_cs_ForceDodge**:

```text
Force AI to dodge by: 0 - disabled, 1 - back, 2 - right, 3 - left
```

- **wh_cs_ForceLod**:

```text
Forces combat LOD: 0..high, 1..med, 2..low
```

- **wh_cs_ForceZone**:

```text
Force combat zone selection by: -1 - disabled, 0-4 zones z0-z4
```

- **wh_cs_FreeBlockPreparingDuration**:

```text
Delay before actor set PARRY_IN_PLACE in free blocks.
```

- **wh_cs_GuardVariationActionTimer**:

```text
Delay for idle var after combat action.
```

- **wh_cs_GuardVariationNonPrimaryTargetMinDistance**:

```text
Minimal distance to target (which is not targetting me) when idle var is allowed to start.
```

- **wh_cs_GuardVariationOneShotPeriod**:

```text
Average time for planning one shot animation in Guard variation system.
```

- **wh_cs_GuardVariationOneShotVar**:

```text
Variation time for planning one shot animation in Guard variation system.
```

- **wh_cs_GuardVariationOpponentActionTimer**:

```text
Delay when threat is about to do some action.
```

- **wh_cs_GuardVariationPrimaryTargetMinDistance**:

```text
Minimal distance to target (which is targetting me) when idle var is allowed to start.
```

- **wh_cs_GuardVariationStartCombatTimer**:

```text
Delay for idle var after combat start.
```

- **wh_cs_GuardVariationUpdatePeriod**:

```text
Period [s] for updating variation system.
```

- **wh_cs_HitReactions**:

```text
Enables combat hit reactions
```

- **wh_cs_HorsePullDownAngle**:

```text
Defines max XY angle to do pulling down action. It is half angle from the center of horse.
```

- **wh_cs_HorsePullDownForce**:

```text
Forse horse pulldown action to always succeeded (=1) of fail (=2).
```

- **wh_cs_HorsePullDownZAngle**:

```text
Defines max Z angle to do pulling down action.
```

- **wh_cs_HorsePullDownZeroAngle**:

```text
Zero angle for computation during pull down from horse. The result angle limit is HorsePullDownZeroAngle +/- HorsePullDownAngle.
```

- **wh_cs_HuntAttackAttackerMinLogical**:

```text
Minimal pseudospeed of attacker to enable hung attack.
```

- **wh_cs_HuntAttackDebugMode**:

```text
Debug mode that all input conditions are skipped.
```

- **wh_cs_HuntAttackDisableVelocity**:

```text
Disable velocity checks for debugging.
```

- **wh_cs_HuntAttackFwdAngleLimit**:

```text
Angle limit in deg for forward hunt attack selection
```

- **wh_cs_HuntAttackMoveWeight**:

```text
Weight for movement compensation of actors.
```

- **wh_cs_HuntAttackOppFwdMovementAngleLimit**:

```text
Angle limit in deg for forward movement of victim to prevent hunt attack during backward movement
```

- **wh_cs_HuntAttackVictimMinLogical**:

```text
Minimal pseudospeed of victim to enable hung attack.
```

- **wh_cs_IdleTurnDuration**:

```text
Threshold angle to requeue idle turn animations with trumping.
```

- **wh_cs_IdleTurnInterruptionThreshold**:

```text
Threshold angle to requeue idle turn animations with trumping.
```

- **wh_cs_IdleTurnPredictionTimeout**:

```text
Small amount of time to postpone turn angle prediction.
```

- **wh_cs_IgnoreHitDuringDeathTimer**:

```text
Cooldown for preventing hits during death reactions.
```

- **wh_cs_IntentionalTargetAngleDefault**:

```text
Angle to detect intentional hit for non-player-actors.
```

- **wh_cs_IntentionalTargetAngleLimitOpponentCount**:

```text
Number of actors near target actos as threshold for lerp <min,max> angle.
```

- **wh_cs_IntentionalTargetAngleMax**:

```text
Max angle to detect intentional hit when in radius around actor is 0 actors.
```

- **wh_cs_IntentionalTargetAngleMin**:

```text
Minimal angle to detect intentional hit when in radius around actor is IntentionalTargetAngleLimitOpponentCount+ actors.
```

- **wh_cs_IntentionalTargetAngleRadius**:

```text
Radius around actor to detect other actors.
```

- **wh_cs_LegWeaponRadius**:

```text
Radius of unarmed leg (sphere).
```

- **wh_cs_LockedAttackDistanceTolerance**:

```text
Max distance from optimal hit distance to approximate angle in that distance.
```

- **wh_cs_LockedAttackMaxAngle**:

```text
Maximal angle between combatants for locked attacks.
```

- **wh_cs_LockedAttackMaxAngleDogVsNPC**:

```text
Maximal angle between combatants for locked attacks when attacker is dog and opponent NPC.
```

- **wh_cs_LockedAttackMaxAngleDogVsPlayer**:

```text
Maximal angle between combatants for locked attacks  when attacker is dog and opponent player.
```

- **wh_cs_LockedAttackZAngle**:

```text
Maximal Z angle between combatants for locked attacks.
```

- **wh_cs_LockedAttackZTolerance**:

```text
Max Z difference between combatants to ignore angle test.
```

- **wh_cs_LodAmbientDistance**:

```text
Distance limit for ambient lod.
```

- **wh_cs_LodBattleDistanceModifier**:

```text
Distance modifier for lod distances in battle.
```

- **wh_cs_LodFarDistance**:

```text
Distance limit for far lod.
```

- **wh_cs_LodNearDistance**:

```text
Distance limit for near lod.
```

- **wh_cs_LogicalBlockMaxAngle**:

```text
Maximal angle between combatants logical block.
```

- **wh_cs_MasterStrikeOnRiposteTimeOffset**:

```text
Time offset of the seek when MS is made against riposte which is shorter.
```

- **wh_cs_MaxAttackDistanceDebug**:

```text
Debug draw for max attack distance.
```

- **wh_cs_MaxAttackDistanceMoveOffset**:

```text
Max offset for dynamic move part of attack distance computation.
```

- **wh_cs_MaxAttackDistanceMoveOffsetStiffness**:

```text
Spring stiffness for smotting of max attack distance.
```

- **wh_cs_MaxAttackRotationDeviation**:

```text
Max angle deviation from direct dir to opponent [degrees].
```

- **wh_cs_MaxFakeCollisionDistance**:

```text
Maximum distance to player when fake collision can appear.
```

- **wh_cs_MaxIdleTurnTimeout**:

```text
Maximal timeout before automatic idle turns.
```

- **wh_cs_MinIdleTurnTimeout**:

```text
Minimal timeout before automatic idle turns.
```

- **wh_cs_MinimalTurnThreshold**:

```text
Minimal angle required to initiate turning.
```

- **wh_cs_MinimalTurnThresholdByTime**:

```text
Minimal angle required to initiate turning after time.
```

- **wh_cs_MinimalTurnThresholdWhenTurning**:

```text
Minimal angle required finish tutning when already turning.
```

- **wh_cs_MoveCooldown**:

```text
Cooldown for player move (dodge).
```

- **wh_cs_NoCombatArmedAlignmentOffset**:

```text
Alignment offset in unarmed combat when one combatant is not in combat.
```

- **wh_cs_NoCombatUnarmedAlignmentOffset**:

```text
Alignment offset in unarmed combat when one combatant is not in combat.
```

- **wh_cs_OnlyBigTurns**:

```text
Use only big turns animations during combat.
```

- **wh_cs_OpenSlotFOVBiasNPC**:

```text
FOV bias for opening slot when blocker is NPC.
```

- **wh_cs_OpenSlotFOVBiasPlayer**:

```text
FOV bias for opening slot when blocker is player.
```

- **wh_cs_OpponentManagerBruteForce**:

```text
Iterate through all actors! (AI grid wont be used)
```

- **wh_cs_PLSkillProfile**:

```text
Skill profile for player.
```

- **wh_cs_PLSlotDurationMod**:

```text
Custom RPG Mod of riposte slot - 0 = lama, 0.5 = standard, 1 = profa
```

- **wh_cs_PerfectBlock_RetargetAngleFOVBias**:

```text
Bias to camera FOV for PB which reacts to attacks from different actor to retarget to this actor.
```

- **wh_cs_PerfectBlock_SpatialVolumeRadius**:

```text
Radius for spatial test limiting perfect block possibility.
```

- **wh_cs_PhysHitReaction_ImpactCoef**:

```text
Physical hit reaction simulation - impact coefficient.
```

- **wh_cs_PhysSim**:

```text
Physical simulation.
```

- **wh_cs_PhysWeaponColSim_ImpactCoef**:

```text
Physical weapon collision simulation - impact coefficient.
```

- **wh_cs_PhysWeaponHitReaction_ImpactCoef**:

```text
Physical weapon hit reaction simulation - impact coefficient.
```

- **wh_cs_PlayerAttackInactivityDuration**:

```text
Duration to detect player inactivity (healing enabled in battles)
```

- **wh_cs_PlayerAttackInactivityDurationVsDog**:

```text
Duration to detect player inactivity when last opponent is a dog
```

- **wh_cs_PlayerDistanceTolerance**:

```text
Attack distance tolerance for Player.
```

- **wh_cs_PlayerFreeAttackMinDistance**:

```text
Min distance for uninterrupted free attack in front of an obstacle.
```

- **wh_cs_PlayerFreeAttackPrepareTime**:

```text
Time in sec for prepare attack during free attack. The attack action is started after that time.
```

- **wh_cs_PlayerFreeAttackStabMinDistance**:

```text
Min distance for uninterrupted free attack in front of an obstacle for stabbing.
```

- **wh_cs_PlayerFreeCameraModeGamepadDeadZone**:

```text
Dead zone in free camera mode for gamepad
```

- **wh_cs_PlayerFreeCameraModeMouseDeadZone**:

```text
Dead zone in free camera mode for mouse
```

- **wh_cs_PlayerHorizontalUnlockDelay**:

```text
Delay before player unlocks from opponent when moving in horizontal direction.
```

- **wh_cs_PlayerInputBypass**:

```text
Disables combat input
```

- **wh_cs_PlayerInputCombatAngleAfterKill**:

```text
Limit X-axis angle when player is unlocked from opponent after kill.
```

- **wh_cs_PlayerInputCombatDelayAfterKill**:

```text
Time in sec to end combat for player when he destroys the opponent.
```

- **wh_cs_PlayerInputCombatDelayAfterKillWithOtherOpponent**:

```text
Time in sec to end combat for player when he destroys the opponent and different opponent is near.
```

- **wh_cs_PlayerInputCombatUnlockDelay**:

```text
Time in sec to unlock from combat when player changes target with mouse.
```

- **wh_cs_PlayerInputCursorUnlockDistance**:

```text
Minimal angle to unlock cursor.
```

- **wh_cs_PlayerInputGamepadSensitivity**:

```text
Camera movement minimal sensitivity when lock on opponent for gamepad.
```

- **wh_cs_PlayerInputGamepadUnlockMinDistanceToUnlock**:

```text
Minimal distance to process unlock with gamepad.
```

- **wh_cs_PlayerInputGamepadUnlockMinTime**:

```text
Minimal time to allow unlocking from selected opponent with gamepad.
```

- **wh_cs_PlayerInputGamepadUnlockMinTimeSameZone**:

```text
Minimal time to allow unlocking from selected opponent with gamepad.
```

- **wh_cs_PlayerInputGamepadUnlockReturnTime**:

```text
Time spent in unlock mode when gamepad movement is still before return to lock mode.
```

- **wh_cs_PlayerInputIndicator**:

```text
Indicator of unlocking is visible in combat.
```

- **wh_cs_PlayerInputLockAreaWidth**:

```text
Distance from opponent in metres to start locking (X axis).
```

- **wh_cs_PlayerInputLockAreaWidthNoCombat**:

```text
Distance from opponent in metres to start locking (X axis) when player is not in combat.
```

- **wh_cs_PlayerInputLockingTolerance**:

```text
Player input - Screen distance vertical tolerance from target defining locking area. (in percentage of vertical screenspace
```

- **wh_cs_PlayerInputMouseSensitivity**:

```text
Camera movement minimal sensitivity when lock on opponent for mouse.
```

- **wh_cs_PlayerInputMouseUnlockMinDistanceToUnlock**:

```text
Minimal distance to process unlock with mouse.
```

- **wh_cs_PlayerInputMouseUnlockMinOppAngle**:

```text
Angle to opponent which will reset total distance to unlock.
```

- **wh_cs_PlayerInputMouseUnlockMinTime**:

```text
Minimal time to allow unlocking from selected opponent with mouse.
```

- **wh_cs_PlayerInputMouseUnlockReturnTime**:

```text
Time spent in unlock mode when mouse movement is still before return to lock mode.
```

- **wh_cs_PlayerInputMouseUnlockXThreshold**:

```text
Angle X-axis that limits view in camera unlocked mode.
```

- **wh_cs_PlayerInputMouseUnlockZThreshold**:

```text
Angle Z-axis that limits view in camera unlocked mode.
```

- **wh_cs_PlayerInputMouseUnlocking**:

```text
Enable mouse movement unlocking for player
```

- **wh_cs_PlayerInputMouseZoneChangeMinDistance**:

```text
Minimal distance to allow zone change with mouse.
```

- **wh_cs_PlayerInputMouseZoneChangeMinTime**:

```text
Minimal time to allow zone change with mouse.
```

- **wh_cs_PlayerInputMouseZoneChangePreventionAfterAction**:

```text
Safety cooldown after action where attack zone change is forbidden.
```

- **wh_cs_PlayerInputMouseZoneChangeSensitivity**:

```text
Sensitivity for change zone with mouse. 20 - super sensitive, 0 - minimal sensitivity
```

- **wh_cs_PlayerInputUnlockAreaWidthHyst**:

```text
Unlock hysterezis distance. PlayerInputLockAreaWidth + PlayerInputUnlockAreaWidthHyst gives unlock distance
```

- **wh_cs_PlayerLockDisabled**:

```text
Disables player locking functionality.
```

- **wh_cs_PlayerLockOpponentAngleBias**:

```text
Bias of FOV angle to lock to opponent.
```

- **wh_cs_PlayerMaxOpponentAngleToLock**:

```text
Maximum possible angle to opponent to lock to combat.
```

- **wh_cs_PlayerMaxOpponentAngleToUnlock**:

```text
Maximum possible angle to opponent before player is unlocked from combat.
```

- **wh_cs_PlayerMaxOpponentDistanceToLock**:

```text
Maximum distance to player lock.
```

- **wh_cs_PlayerMaxOpponentDistanceToUnlock**:

```text
Maximum distance to player unlock.
```

- **wh_cs_PlayerMaxThreatDistance**:

```text
Range for IsThreatNearby detection of threat.
```

- **wh_cs_PlayerNormalAttackOffset**:

```text
Relative time offset for player's normal attacks.
```

- **wh_cs_PlayerTutorialStep**:

```text
Debugger trigger of combat tutorial step. [1-?, 0 disabled]
```

- **wh_cs_PlayerUnlockTimeout**:

```text
Timeout to unlock player from opp when his visibility is lost.
```

- **wh_cs_PlayerVIPTargetAttackDot**:

```text
Maximum dot product that allows attack even when VIP target is closer than opponent.
```

- **wh_cs_PlayerVerticalUnlockDelay**:

```text
Delay before player unlocks from opponent when moving in vertical direction.
```

- **wh_cs_PosAlignmentInterruptionZAngleThreshold**:

```text
When z angle between two combatants reach this level position alignment is interrupted.
```

- **wh_cs_PreBlockRestartCooldown**:

```text
Preblocks delay after a block action.
```

- **wh_cs_ProcessSyncHits**:

```text
Enabled update sync hits. It is disabled by default since this operation should do only databuilder.
```

- **wh_cs_Profiling**:

```text
Enabled profiling in combat -> disables all code which is not in master.
```

- **wh_cs_RepeatHitTimeout**:

```text
Timeout for repeated hit to the same entity.
```

- **wh_cs_RiderWeaponCollisionLen**:

```text
Lenght of extra collision for weapon held by rider to have better range.
```

- **wh_cs_RipostePerfectBlockZoneDistance**:

```text
Allowed distance from blocking zone when searching for attack part of riposte perfect block.
```

- **wh_cs_RiposteSlotDuration**:

```text
Basic riposte slot duration.
```

- **wh_cs_ShowCombatUI**:

```text
Enabled combat UI for testing purposes.
```

- **wh_cs_ShowComboZonesUI**:

```text
Show combo zones on combat cross.
```

- **wh_cs_ShowEnvSpatialGrid**:

```text
Enable visual debug of environment.
```

- **wh_cs_ShowLiveSpatialGrid**:

```text
Show runtime spatial grid for debugging.
```

- **wh_cs_ShowPreprocessedSpatialGrid**:

```text
Show preprocessed spatial grid for debugging.
```

- **wh_cs_ShowRiposteUI**:

```text
Enable riposte slot UI.
```

- **wh_cs_SignificantDeviationAngle**:

```text
Allow idle turn when deviation is greater than this value even when movement restriction is set in the guard.
```

- **wh_cs_SlotEndHitOffset**:

```text
Delay of slot to automatic start from action.
```

- **wh_cs_SpatialGridBlendSpace**:

```text
Determines blendspace of debug spatial grid to show.
```

- **wh_cs_SpatialGridBlendSpaceDistance**:

```text
Distance between blendspace samples for grid array (in metres).
```

- **wh_cs_SpatialGridDisection**:

```text
Spatial grid disections (333 or 332 etc)
```

- **wh_cs_SpatialGridDisectionPlayerAddition**:

```text
Spatial grid suffix used for player (333 or 332 etc)
```

- **wh_cs_SpatialGridPreprocess**:

```text
Enables spatial analyzation during preprocessing.
```

- **wh_cs_SpatialGridRadius**:

```text
Spatial grid radius.
```

- **wh_cs_SpatialGridWeaponLength**:

```text
Length of weapon to consider in spatial grid.
```

- **wh_cs_StandardSlotDuration**:

```text
Standard slot duration.
```

- **wh_cs_StaticAttackCooldown**:

```text
Cooldown for player static attack.
```

- **wh_cs_StealthActionAngle**:

```text
Defines max victim view angle (in degrees) enabling a stealth action.
```

- **wh_cs_StealthActionDistance**:

```text
Defines max distance from victim alowing a stealth action.
```

- **wh_cs_StealthActionLyingAngle**:

```text
Defines frustrum angle next to laying victim limiting stealth actions.
```

- **wh_cs_StealthActionMaxAngle**:

```text
Maximal angle between combatants for stealth kills.
```

- **wh_cs_StealthAlwaysSuccess**:

```text
Stealth kill action always succeeds.
```

- **wh_cs_StealthDisableAIBackoff**:

```text
Disabling backoff for AI during stealth kill.
```

- **wh_cs_StealthDisableAIPerfectBlock**:

```text
Disabling PB for AI during stealth kill.
```

- **wh_cs_StealthTimewarpDurationOverride**:

```text
Debug stealth slot duration.
```

- **wh_cs_StealthTimewarpSpeed**:

```text
Stealth kill timewarp speed.
```

- **wh_cs_SyncGuardAutoTriggerMaxVelocity**:

```text
Max velocity for autotriggering sync guards.
```

- **wh_cs_SyncGuardAutoTriggerMinVelocity**:

```text
Min velocity for autotriggering sync guards.
```

- **wh_cs_SyncGuardAutoTriggerMoveWeight**:

```text
Coef for movement part pushing limit of auto sync guards.
```

- **wh_cs_SyncGuardBackoffTimer**:

```text
After this time from start of sync guard will be backoff action available.
```

- **wh_cs_SyncGuardMaxXYAngle**:

```text
Maximal XY angle between combatants for sync guards.
```

- **wh_cs_SyncGuardMaxZAngle**:

```text
Maximal Z angle between combatants for sync guards.
```

- **wh_cs_SyncGuardkDistanceTolerance**:

```text
Max distance from optimal sync distance to approximate angle in that distance.
```

- **wh_cs_SyncSlotEndHitOffset**:

```text
Delay of slot to automatic start from action.
```

- **wh_cs_TargetUseSpineBone**:

```text
Uses spine3 for targeting opponent.
```

- **wh_cs_ThreatenedTargetsSelectionDistanceBias**:

```text
Distance bias which is added to max attack distance to limit free attack threatening.
```

- **wh_cs_ThreatenedTargetsSelectionDistanceOverride**:

```text
Override distance when free attacks are considered as threatening. 0 = off, max attack distance is used
```

- **wh_cs_ThreatenedTargetsSelectionFOV**:

```text
FOV angle along player dir that limits selection of threatened actors.
```

- **wh_cs_TimeAlignment_BlockSpeedMod**:

```text
Modifier for blocking time alignment to right state switch
```

- **wh_cs_TimeAlignment_ImpulseMinSpeed**:

```text
Minimal const speed bias for time addition by impulse solver.
```

- **wh_cs_TimeAlignment_MaxAnimAddition**:

```text
Maximal time which can be added to running animation to move sync point.
```

- **wh_cs_TimeAlignment_MaxAttackSpeedBias**:

```text
Maximal value of speed bias for time dilatation in attacks
```

- **wh_cs_TimeAlignment_MaxBlockSpeedBias**:

```text
Maximal value of speed bias for time dilatation in blocks
```

- **wh_cs_TimeAlignment_MinAttackSpeedBias**:

```text
Minimal value of speed bias for time dilatation in attacks
```

- **wh_cs_TimeAlignment_MinBlockSpeedBias**:

```text
Minimal value of speed bias for time dilatation in blocks
```

- **wh_cs_TimeAlignment_MinConstSpeedBias**:

```text
Minimal const speed bias for time addition in timing.
```

- **wh_cs_TimeAlignment_SlotDelayDuration**:

```text
This slowdown animation around place defined by 'SlotDelay' combat event proc clip.
```

- **wh_cs_TimeWarpDurationOpp**:

```text
Time of fade out during PB time warp defined relative to hit point.
```

- **wh_cs_TimeWarpDurationPlayer**:

```text
Time of fade out during PB time warp defined relative to hit point.
```

- **wh_cs_TimeWarpFadeIn**:

```text
Time of fade in during PB time warp defined relative to hit point.
```

- **wh_cs_TimeWarpFadeOut**:

```text
Time of fade out during PB time warp defined relative to hit point.
```

- **wh_cs_TimeWarpMSFadeSpeedForOpp**:

```text
Timewarp speed during oppponent MS action.
```

- **wh_cs_TimeWarpPBFadeSpeedForOpp**:

```text
Speed of PB time warp when player has opened PB slot on riposte. 1 - disabled
```

- **wh_cs_TimeWarpPBFadeSpeedForPlayer**:

```text
Speed of PB time warp when player is doing PB. 1 - disabled
```

- **wh_cs_TimeWarpSyncPBFadeIn**:

```text
Timewarp fade in for sync guards.
```

- **wh_cs_TimewarpStealthPBSpeedForOpp**:

```text
Timewarp speed during sync PB slot in sync guards.
```

- **wh_cs_TimewarpSyncPBSpeedForOpp**:

```text
Timewarp speed during sync PB slot in sync guards.
```

- **wh_cs_TraceMNDebug**:

```text
Trace mn_debugs of all CA in combat to trace.
```

- **wh_cs_TutorialSlotActionFadeIn**:

```text
Tutorial slot action - fade in of time warp effect.
```

- **wh_cs_TutorialSlotActionFadeOut**:

```text
Tutorial slot action - fade out of time warp effect.
```

- **wh_cs_UnarmedTargetToHeadBone**:

```text
Rotation alignment target headbone instead of reference.
```

- **wh_cs_UnarmedVsArmedAlignmentOffsetOppositeStance**:

```text
Alignment offset in unarmed combat when opponent is armed.
```

- **wh_cs_UnarmedVsArmedAlignmentOffsetSameStance**:

```text
Alignment offset in unarmed combat when opponent is armed.
```

- **wh_cs_UseDudeInTests**:

```text
Replace one soul in tests with dude. 1 - for first soul, 2 - for second soul
```

- **wh_cs_WeaponCollisionCCDPosBias**:

```text
Collidion weapon position bias value used to eliminate CCD error.
```

- **wh_cs_WeaponDisableOffhand**:

```text
Forces disabled offhand for weapon solver
```

- **wh_cs_WeaponProcDisableOffhand**:

```text
Forces disabled offhand for weapon solver
```

- **wh_cs_WeaponProcSolver**:

```text
Procedural weapon impact solver.
```

- **wh_cs_WeaponProcSolverColBlendLimiter**:

```text
Procedural weapon impact solver parameter - blend limit for accepting collisions
```

- **wh_cs_WeaponProcSolverColExtraOffset**:

```text
Procedural weapon impact solver parameter - extra offset to avoid physical touch between weapon collision and collision point
```

- **wh_cs_WeaponProcSolverColFilterFOVOBias**:

```text
Procedural weapon impact solver parameter - bias for fov angle filtering collisions
```

- **wh_cs_WeaponProcSolverDebug**:

```text
Enables debug draw for procedural weapon impact solver
```

- **wh_cs_WeaponProcSolverDebugCollisions**:

```text
Procedural weapon impact solver- enables collision debug draw
```

- **wh_cs_WeaponProcSolverForceLOD**:

```text
Forces LOD - 0 disabled, 1 limited colliding time, 2 no collision
```

- **wh_cs_WeaponProcSolverImpactArea**:

```text
Procedural weapon impact solver parameter - impact area that is used for computation of impactTime = impactArea / velocity 
```

- **wh_cs_WeaponProcSolverLod1Duration**:

```text
Limits solver simulation for given duration before expected hit
```

- **wh_cs_WeaponProcSolverMethod**:

```text
Switches solver mode = 0 - 1. first collision, 2. continous collisions
```

- **wh_cs_WeaponProcSolverNearColDist**:

```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be logically skipped
```

- **wh_cs_WeaponProcSolverNearColDistVisualFilter**:

```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be skipped for weapon reaction
```

- **wh_cs_WeaponProcSolverPosOffhandFade**:

```text
Procedural weapon impact solver parameter - fade in/out time of offhand position change
```

- **wh_cs_WeaponProcSolverProfiling**:

```text
Enables profiling of weapon solver.
```

- **wh_cs_WeaponProcSolverRecoilEffectDist**:

```text
Procedural weapon impact solver parameter - distance for first recoil effect
```

- **wh_cs_WeaponProcSolverRecoilEffectTime**:

```text
Procedural weapon impact solver parameter - time for first recoil effect
```

- **wh_cs_WeaponProcSolverRecoveryIKBlendThreshold**:

```text
Procedural weapon impact solver parameter - rotation recovery blend threshold for IK blend start (in range (0,1)).
```

- **wh_cs_WeaponProcSolverRecoveryTime**:

```text
Procedural weapon impact solver parameter - recovery time.
```

- **wh_cs_WeaponProcSolverRotAnimDelaySharpness**:

```text
Procedural weapon impact solver parameter - sharpness of delay of anim controlling rot recovery - coef K in x^K.. - 1 means no delay
```

- **wh_cs_WeaponProcSolverRotInterpolatorSel**:

```text
Procedural weapon impact solver parameter - weight betwen two interpolators - following orig anim [0], direct target [1].
```

- **wh_cs_WeaponProcSolverRotMaxAnimDeviationAng**:

```text
Procedural weapon impact solver parameter - max delay of targeting animation to real animation in degrees
```

- **wh_cs_WeaponProcSolverRotRecoverySharpness**:

```text
Procedural weapon impact solver parameter - sharpness of rot recovery - coef K in x^K..
```

- **wh_cs_WeaponProcSolverRotRecoveryTimeMax**:

```text
Procedural weapon impact solver parameter - rotation recovery time min.
```

- **wh_cs_WeaponProcSolverRotRecoveryTimeMin**:

```text
Procedural weapon impact solver parameter - rotation recovery time max.
```

- **wh_cs_WeaponProcSolverRotSmoothTime**:

```text
Procedural weapon impact solver parameter - start rotation recovery time of smoother [lag in degrees in unit circle 'stiffness'].
```

- **wh_cs_WeaponSolver**:

```text
Procedural weapon impact solver.
```

- **wh_cs_WeaponSolverColBlendLimiter**:

```text
Procedural weapon impact solver parameter - blend limit for accepting collisions
```

- **wh_cs_WeaponSolverColExtraOffset**:

```text
Procedural weapon impact solver parameter - extra offset to avoid physical touch between weapon collision and collision point
```

- **wh_cs_WeaponSolverColFilterFOVOBias**:

```text
Procedural weapon impact solver parameter - bias for fov angle filtering collisions
```

- **wh_cs_WeaponSolverDebug**:

```text
Enables debug draw for procedural weapon impact solver
```

- **wh_cs_WeaponSolverDebugCollisions**:

```text
Procedural weapon impact solver- enables collision debug draw
```

- **wh_cs_WeaponSolverEnableMultipleCollisions**:

```text
Enables multicollision detection.
```

- **wh_cs_WeaponSolverForceEnableMultipleCollisionsOnWeapon**:

```text
Force enables multicollision detection into weapon.
```

- **wh_cs_WeaponSolverForceLOD**:

```text
Forces LOD - 0 disabled, 1 limited colliding time, 2 no collision
```

- **wh_cs_WeaponSolverForceMode**:

```text
Forced procedural weapon mode. -1 means no force.
```

- **wh_cs_WeaponSolverForcePenetration**:

```text
Forces penetration of weapon into body - given number: -1 = disabled force, 0 = force no penetration, >0 = penetration deep [m]
```

- **wh_cs_WeaponSolverForceRecoilDuration**:

```text
Procedural weapon impact solver forced parameter - recoil effect duration
```

- **wh_cs_WeaponSolverForceRecoilIntensityPos**:

```text
Procedural weapon impact solver forced parameter - pos intensity of recoil effect (how much anim time is rollbacked
```

- **wh_cs_WeaponSolverForceRecoilIntensityRot**:

```text
Procedural weapon impact solver forced parameter - rot intensity of recoil effect (how much anim time is rollbacked
```

- **wh_cs_WeaponSolverForceStuckDelaySharpness**:

```text
Procedural weapon impact solver forced parameter - sharpness of delay of anim controlling pos recovery - coef K in x^K.. - 1 means disabled forcing
```

- **wh_cs_WeaponSolverImpactArea**:

```text
Procedural weapon impact solver parameter - impact area that is used for computation of impactTime = impactArea / velocity 
```

- **wh_cs_WeaponSolverLod1Duration**:

```text
Limits solver simulation for given duration before expected hit
```

- **wh_cs_WeaponSolverMethod**:

```text
Switches solver mode = 0 - 1. first collision, 2. continous collisions
```

- **wh_cs_WeaponSolverNearColDist**:

```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be logically skipped
```

- **wh_cs_WeaponSolverNearColDistVisualFilter**:

```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be skipped for weapon reaction
```

- **wh_cs_WeaponSolverPosOffhandFade**:

```text
Procedural weapon impact solver parameter - fade in/out time of offhand position change
```

- **wh_cs_WeaponSolverProfiling**:

```text
Enables profiling of weapon solver.
```

- **wh_cs_WeaponSolverRecoilEffectDist**:

```text
Procedural weapon impact solver parameter - distance for first recoil effect
```

- **wh_cs_WeaponSolverRecoveryDuration**:

```text
Duration of weapon recovery phase.
```

- **wh_cs_WeaponSolverRecoveryIKBlendThreshold**:

```text
Procedural weapon impact solver parameter - rotation recovery blend threshold for IK blend start (in range (0,1)).
```

- **wh_cs_WeaponSolverRecoveryTime**:

```text
Procedural weapon impact solver parameter - recovery time.
```

- **wh_cs_WeaponSolverRotAnimDelaySharpness**:

```text
Procedural weapon impact solver parameter - sharpness of delay of anim controlling rot recovery - coef K in x^K.. - 1 means no delay
```

- **wh_cs_WeaponSolverRotInterpolatorSel**:

```text
Procedural weapon impact solver parameter - weight betwen two interpolators - following orig anim [0], direct target [1].
```

- **wh_cs_WeaponSolverRotMaxAnimDeviationAng**:

```text
Procedural weapon impact solver parameter - max delay of targeting animation to real animation in degrees
```

- **wh_cs_WeaponSolverRotRecoverySharpness**:

```text
Procedural weapon impact solver parameter - sharpness of rot recovery - coef K in x^K..
```

- **wh_cs_WeaponSolverRotRecoveryTimeMax**:

```text
Procedural weapon impact solver parameter - rotation recovery time min.
```

- **wh_cs_WeaponSolverRotRecoveryTimeMin**:

```text
Procedural weapon impact solver parameter - rotation recovery time max.
```

- **wh_cs_WeaponSolverRotSmoothTime**:

```text
Procedural weapon impact solver parameter - start rotation recovery time of smoother [lag in degrees in unit circle 'stiffness'].
```

- **wh_cs_WeaponSolverSlidingDuration**:

```text
Duration of weapon sliding phase.
```

- **wh_cs_WindowMinWeight**:

```text
Weight <0, 1> to minimal window computation. For PB and Riposte.
```

- **wh_db_AllowPatching**:

```text
Allow duplicate primary keys in database parts. Duplicate rows will replace previous rows with same IDs.
```

- **wh_dbg_EntityDistanceStats**:

```text
Collects and shows statistics based on visible entities distance from camera.
Statistics are computed per bracket, size of which can be set. Entities can be filtered by entity class.
Draws current distance distribution graph and distance histogram.
Logs output to file 'ent_dist_stat_<datetime>.log' when data collection is ended (disabled).
Flags that can be set (Everything enabled = 15):
  1 - Enables data collection
  2 - Shows bracket data information
  4 - Shows entities in each bracket
  8 - Shows graphs
```

- **wh_dbg_EntityDistanceStatsBracket**:

```text
Sets bracket size.
```

- **wh_dbg_EntityDistanceStatsFilter**:

```text
Sets which entity classes should be shown. Input a comma separated list of entity class names.
```

- **wh_dbg_LabelDistance**:

```text
Distance from player where debug labels are showed
```

- **wh_dbg_LabelFilter**:

```text
Filter debug labels, separated by commas
```

- **wh_dbg_ShowLabels**:

```text
Show debug labels
```

- **wh_de_Enabled**:

```text
Enables debug events.
```

- **wh_de_Layer**:

```text
Select layer: 0 - Actor action system.
```

- **wh_de_Target**:

```text
Sets debug events for given entity.
```

- **wh_demo_enabledInputEvents**:

```text
Enables input events during timeDemo (both recording and playing)
```

- **wh_demo_profile_peak**:

```text
WH[VP]: Crytek use 50 as default peak value.
```

- **wh_demo_skipLogInfo**:

```text
WH[VP]: We don't want use LogInfo because it write to file on main thread.
```

- **wh_demo_variableTime**:

```text
WH[VP]: Used for profiling with budgets. Demo is time driven and demo_fixed_timestep is ignored.
```

- **wh_dlc_FakeLicense**:

```text
comma separated numeric IDs of DLCs. Or use * to fake all licenses. If empty real license is used.
```

- **wh_dlg_ActorSoundDebug**:

```text
Draws all currently playing actor sounds.
```

- **wh_dlg_AutoSkip**:

```text
Automatically skips dialog responses.
```

- **wh_dlg_CamParam1**:

```text
Common camera parameter.
```

- **wh_dlg_CamParam2**:

```text
Common camera parameter.
```

- **wh_dlg_ChatBubbles**:

```text
Turns on chat bubbles.
```

- **wh_dlg_ChatBubblesDistance**:

```text
Chat bubbles visible 
```

- **wh_dlg_ChatBubblesMaxOffset**:

```text
Max offset above eyes.
```

- **wh_dlg_ChatBubblesMinOffset**:

```text
Min offset above eyes.
```

- **wh_dlg_ChatBubblesMinScale**:

```text
Min scale of buble in default fov.
```

- **wh_dlg_ChatBubblesSmoothingSpeed**:

```text
Smoothing speed for vertical bubble position above NPC head, higher value means faster (less noticeable) smoothing
```

- **wh_dlg_ChatBubblesSmoothingThreshold**:

```text
When vertical bubble distance between 2 frames is greater than the specified threshold in meters, the bubble will immediately appear in new position without smoothing
```

- **wh_dlg_ChatResponsesLeadTime**:

```text
How long (in seconds) chat responses will be available before last response is finished
```

- **wh_dlg_CollisionRadius**:

```text
Collision capsule radius for head visibility test.
```

- **wh_dlg_CreateObstacle**:

```text
Creates obstacle around dialog that includes player
```

- **wh_dlg_CreateObstacleForIngameNpcDialogues**:

```text
Creates obstacle around ingame dialogues between npcs
```

- **wh_dlg_DBARoot**:

```text
Root folder for DBA archives containing dialogue facial animations
```

- **wh_dlg_DebugDrawCamera**:

```text
Dialog camera manager debug draw.
```

- **wh_dlg_DefaultChatTimeLimit**:

```text
Default time limit for chat (in seconds)
```

- **wh_dlg_DefaultMaxDistance**:

```text
Default max distance of dialogue (in meters), zero means disabled.
```

- **wh_dlg_DialogDebug**:

```text
Prints list of active dialogs.
```

- **wh_dlg_DisplayDecisionIdleTimeout**:

```text
How long (seconds) before last used subtitle is displayed on select decision screen.
```

- **wh_dlg_Enable**:

```text
Enable dialog system. If disabled all NPC's have nothing to say.
```

- **wh_dlg_EnableFallbackVoice**:

```text
Controls usage of generated dialogue voiceovers when the actual ones are not dubbed yet
```

- **wh_dlg_FacialStreamTimeout**:

```text
How long we wait for facial animations to be loaded before we start dialog response.
```

- **wh_dlg_ForceCamera**:

```text
Forced camera mode:
0: disabled
1: Side camera
2: Half detail camera
3: Full detail camera

```

- **wh_dlg_ForcePOV**:

```text
Force POV camera.
```

- **wh_dlg_ForcedDecision**:

```text
Force every dialog to use this decision. Use to test specific decision.
```

- **wh_dlg_HeightCoef**:

```text
Height correction coefficient.
```

- **wh_dlg_IngameDialogueObstacleDistanceThreshold**:

```text
When a NPC travels more than this threshold ingame-dialogue obstacle is removed (meters).
```

- **wh_dlg_IngameDialogueObstacleRadiusAddition**:

```text
Change of the ingame dialog obstacle radius which is calculated from the positions of the NPC.
```

- **wh_dlg_LODRatio**:

```text
Sets LOD ratio for dialog actors.
```

- **wh_dlg_LookAtTransitionDurationMax**:

```text
Maximum time in seconds that turning to speaker will take
```

- **wh_dlg_LookAtTransitionDurationMin**:

```text
Minimal time in seconds that turning to speaker will take
```

- **wh_dlg_MaxAnimDurationScale**:

```text
Maximum duration scale for animations that arent blendspaces
```

- **wh_dlg_MinAnimDurationScale**:

```text
Minimum duration scale for animations that arent blendspaces
```

- **wh_dlg_MinCutTime**:

```text
Time until next cut should not occure on same actor.
```

- **wh_dlg_MinTimeToCut**:

```text
Minimum time (in seconds) needed for camera to cut in case both speakers are visible.
```

- **wh_dlg_NoCameras**:

```text
Disables dialog cameras.
```

- **wh_dlg_RecordDialog**:

```text
At the end of each dialog list of sequences used during this dialog will be printed.
```

- **wh_dlg_RequestMaxAxisAngle**:

```text
Max angle (degree) between dialog axis and one of speakers direction.
```

- **wh_dlg_RequestMaxDistance**:

```text
Max distance (squared) between entities to start dialog.
```

- **wh_dlg_RequestMaxTotalAngle**:

```text
Max angle (degree) between entities to start dialog.
```

- **wh_dlg_RequestTimeout**:

```text
Max time in seconds upon the request is canceled.
```

- **wh_dlg_RestrictDialogHeightDifference**:

```text
Maximal height difference between actors in order to have dialogue interactor.
```

- **wh_dlg_RestrictDialogHeightHorseDifference**:

```text
Maximal height difference between actors in order to have dialogue interactor. The coeficient is used whenever one of the actors is riding a horse.
```

- **wh_dlg_ShowOrigActor**:

```text
Do not hide original actor when freezing its twin.
```

- **wh_dlg_SkipCooldown**:

```text
The time from the beginning of the response during which it cannot be skipped (unless using autoskip)
```

- **wh_dlg_SkipPhysPosAdjustment**:

```text
Skip physically based position adjustment. The adjustment takes some time so skipping it should make dialogue fader faster.
```

- **wh_dlg_SmoothTime**:

```text
Time to smooth camera positions at max rate.
```

- **wh_dlg_TestMode**:

```text
Switch dialog system into testing mode allowing some special behavior.
```

- **wh_dlg_TestPreselectedSequences**:

```text
Defines which sequences may be used by NPC during dialogue.
```

- **wh_dlg_TwinDismountedHorseFrustumConeAngle**:

```text
Half-angle (half of the cone) of the frustum for positioning horse when dismounting when switching into dialog twins.
```

- **wh_dlg_TwinDismountedHorseFrustumMaxDistance**:

```text
Maximal distance for positioning horse when dismounting when switching into dialog twins.
```

- **wh_dlg_TwinDismountedHorseFrustumMinDistance**:

```text
Minimal distance for positioning horse when dismounting when switching into dialog twins
```

- **wh_dlg_TwinKeepPoseFrontConeAngle**:

```text
Half-angle (half of the cone) in which the NPC will cancel its pose when creating dialog twin.
```

- **wh_dlg_TwinPlayerOverlapQueryCount**:

```text
Number of location queries around the NPC when handling NPC-player twin overlap.
```

- **wh_dlg_Verbosity**:

```text
Dialog verbosity.
```

- **wh_dlg_VisibleSequence**:

```text
Renders ids of sequences when visible in dialog.
```

- **wh_dlg_VoiceCategoryPriorityCoef**:

```text
The probability of NPCs selecting a sequence with a voice category is multiplied by this coef
```

- **wh_dlg_VoiceRoot**:

```text
Root folder for dialogue voiceovers
```

- **wh_dlg_WaitForCloth**:

```text
When creating dialog twin. This cvar turns waiting on clothing system to finish ray-casting.
```

- **wh_dlg_WordDelay**:

```text
Delay for each space used to compute speech duration when voice over is missing.
```

- **wh_dog_DebugAction**:

```text
Debugging dog actions
```

- **wh_dog_PetMaxAngle**:

```text
Maximum angle for dog pet action. Calculated in 2D. Angle between dog direction and dog-to-player direction. In degrees.
```

- **wh_dog_PetMaxDistance**:

```text
Maximum distance from dog for pet action
```

- **wh_dog_SmoothTerrainTraversal**:

```text
Terrain smooting for the dog.
0 = turned off
1 = turned on
```

- **wh_e_AllowPersistentRenderObjectsForEntities**:

```text
Allow EntitySlotObjects to use Persistent RenderObjects
```

- **wh_e_AreaLightShadowCameraOffsetBias**:

```text
Additional offset applied to the camera frustum position. Increase if objects in a close proximity fail to cast shadows.
Relative to the size of the light source.
```

- **wh_e_AreaLightShadowClampSmoothing**:

```text
Area lights can cast shadows only inside their frustum. Outside of the frustum is always lit. This cvar controls the width of the transition in the shadow map space.
```

- **wh_e_ClipVolumesGrid**:

```text
Enable accelerating structure for finding clip volumes
```

- **wh_e_ClipVolumesPrepareJob**:

```text
Enable clip volumes prepare to run on a job
```

- **wh_e_CloudMapSpeed**:

```text
Wind speed used in cloud map simulation, in m/s
```

- **wh_e_CoverageBufferReprojIgnoreDistance**:

```text
objects closer than this value is ignored for cullbuffer occlusion
```

- **wh_e_CoverageBufferReprojMethod**:

```text
  0 - use inverse matrix for reprojection(CryEngine way)
  1 - use camera position and frustum vectors for reprojection

```

- **wh_e_DebugDrawBadFaceArea**:

```text
Screen area in px^2 taken up by a single face which is considered unoptimal, used in e_DebugDraw 30.
```

- **wh_e_DebugDrawGoodFaceArea**:

```text
Screen area in px^2 taken up by a single face which is considered optimal, used in e_DebugDraw 30.
```

- **wh_e_DebugDrawTextureMemoryLimit**:

```text
Texture memory limit in KB used in e_DebugDraw 4. Objects with larger texture memory usage will be red.
```

- **wh_e_FullGSMUpdateAfterCameraChange**:

```text
  1 = force rendering of all GSM cascades after a cut (lenghty frame),
  0 = reset round-robin selection, render only nearest cascades aftera a cut (shadow pop-ins).
```

- **wh_e_HDREyeAdaptationEVMin**:

```text
Force EVMin value for HDR eye adaptation. Value 0.0f means disabled
```

- **wh_e_HLodClusterSwitchingDistanceExponent**:

```text
Switching distance for cluster, layer and prefab Lods is calculated from this number.
```

- **wh_e_HLodClusterSwitchingDistanceMin**:

```text
Minimal switching distance for brush HLods.
```

- **wh_e_HLodClusterSwitchingDistanceMultiplier**:

```text
Switching distance for cluster, layer and prefab Lods is calculated from this number.
```

- **wh_e_HLodDebugColoring**:

```text
Specifies debug coloring scheme: 0=HLod level, 1=Random color, 2=Type.
```

- **wh_e_HLodDebugDraw**:

```text
Draw HLod debug: 0=Disabled, 1=Enabled.
```

- **wh_e_HLodDebugLabel**:

```text
Specifies what is shown on debug: 0=Level+Name, 1=Level+Name+Size, 2=Path, 3=Geometry, 4=Radius-SwitchingDistance-CurrentDistance-ParentSwitchingDistance.
```

- **wh_e_HLodDebugSelectedOnly**:

```text
Show debug only for selected HLods: 0=Show all, 1=Show selected only.
```

- **wh_e_HLodDebugSwitchingDistance**:

```text
Draw switching distance radius on ground: 0=Disabled, 1=Enabled.
```

- **wh_e_HLodDebugTypeFilter**:

```text
Bit mask for filtering debug draw by HLod type: 0=All, 1=Vegetation, 2=Cluster, 4=Layer, 8=Prefab, 16=Interior.
```

- **wh_e_HLodHysteresisDistance**:

```text
Hysteresis distance in meters between switching from near to far state.
```

- **wh_e_HLodInteriorSwitchingDistance**:

```text
Switching distance for interior Lods in meters.
```

- **wh_e_HLodSignificantObjectRatio**:

```text
Ratio between HLod radius and significant object radius.
```

- **wh_e_HLodSimulateSlowStreamingFrameCount**:

```text
Delays streaming by given number of frames. Works only in game because streaming is disabled in editor.
```

- **wh_e_HLodStreamBrushInstances**:

```text
Enables instance streaming for brushes 0=Disabled, 1=Enabled.
```

- **wh_e_HLodStreamingFramesUntilObjectLoadingTimeout**:

```text
Number of frames which must pass until object loading times out.
After this the HLod gets switched to Near state no matter what.
This can help when objects get stuck in NotLoaded state for example when cgf pool is full.
```

- **wh_e_HLodStreamingFramesUntilUnload**:

```text
Number of frames until a HLod is unloaded.
```

- **wh_e_HLodStreamingMaxReleasedPerFrame**:

```text
Limits maximum number of hlods released each frame.
```

- **wh_e_HLodStreamingMaxUpdatedPerFrame**:

```text
Limits maximum number of hlods updated each frame.
```

- **wh_e_HLodSwitchingDistanceIn2D**:

```text
Switching distance calculation dimension: 0=3D, 1=2D (KCD2-81329).
```

- **wh_e_HLodSystemEnabled**:

```text
Enables Hierarchical Level of Detail System.
```

- **wh_e_HLodUpdatePaused**:

```text
Pauses update of HLods for debugging.
```

- **wh_e_HLodUseDissolve**:

```text
Enable dissolve for HLods.
```

- **wh_e_HLodVegetationSwitchingDistances**:

```text
Switching distances for vegetation Lods in meters.
```

- **wh_e_HLodViewDistRatioOverride**:

```text
ViewDistRatio of objects in HLods will be overridden to this value.
```

- **wh_e_HLodViewDistRatioOverrideRadiusThreshold**:

```text
ViewDistRatio override will affect only HLods with smaller radius than this threshold in meters.
```

- **wh_e_HlodMaxStreamingTasks**:

```text
Maximum number of hlod streaming tasks at any given time. Good for limiting peaks caused by brush creation
```

- **wh_e_IgnorePerInstanceLodRatio**:

```text
Allows you to ignore per instance LodRatio which was saved in the level
```

- **wh_e_IgnorePerInstanceViewDistRatio**:

```text
Allows you to ignore per instance ViewDistRatio which was saved in the level
```

- **wh_e_MaterialBufferDebugDraw**:

```text
Debug material instances
```

- **wh_e_MaterialBufferUnassignedFeatureDebug**:

```text
Display unassigned character features in bright pink color
```

- **wh_e_MaterialFeatureBufferSize**:

```text
Max number of material features
```

- **wh_e_MaterialInstanceBufferSize**:

```text
Max number of material instances
```

- **wh_e_MaxCompiledRoadsPerFrame**:

```text
Defines maximum compiled roads per frame. Value zero or lower forces immediate compilation.
```

- **wh_e_ObjectsTreeRenderNodeListTypeDebug**:

```text
Specifies object type to debug in e_ObjectsTreeBBoxes mode 3, eRNListType_Unknown (0) - means all list types
```

- **wh_e_ObjectsTreeRenderNodeTypeDebug**:

```text
Specifies object type to debug in e_ObjectsTreeBBoxes mode 3eERType_NotRenderNode (0) - means all render node types
```

- **wh_e_ObserverDebugDraw**:

```text
[int] Enables observer system debug draw. Default: 0
```

- **wh_e_ObserverMinDistance**:

```text
[float] Min. distance (in meters) an observer has to move for the observer system to react. Default: 2.0 (m)
```

- **wh_e_ObserverMinFOVChange**:

```text
[float] Min. FOV change (in radians) the observer system to reacts to. Default: 0.2f (rad) (= ~11.5 deg)
```

- **wh_e_ObserverMinTeleportDistance**:

```text
[float] Min. distance (in meters) an observer has to move to count as a teleport. Default: 16.0 (m)
```

- **wh_e_ObserverMode**:

```text
[int] Observer system mode. Deault: 0.
```

- **wh_e_ObserverTeleportWarning**:

```text
Displays onscreen warning when observer was teleported outside of PrecacheMode. Default: 1
```

- **wh_e_ParticlesAudioFarDistSq**:

```text
CameraMust be at most this many units from the particle for audio to keep playing, once started (squared length).
Must be less than (wh_e_ParticlesAudioMaxDistance^2)
Example: wh_e_ParticlesAudioNearDistSq 625 ... sets the near distance to be 20

```

- **wh_e_ParticlesAudioMaxDistance**:

```text
Specifies the maximum distance at which the emitters with sounds are updated
```

- **wh_e_ParticlesAudioNearDistSq**:

```text
CameraMust be at least this many units from the particle for audio to start playing (squared length).
Must be less than (wh_e_ParticlesAudioMaxDistance^2)
Example: wh_e_ParticlesAudioNearDistSq 400 ... sets the near distance to be 20

```

- **wh_e_ParticlesLimitPerContainer**:

```text
Max number of particles which can be spawned by a container
```

- **wh_e_ParticlesProfileToplist**:

```text
Show particle toplist ordered by:
Components -  0: alloc,  1: alive,  2: updated,  3: rendered
Spawners   -  4: alloc,  5: alive,  6: updated,  7: rendered
Particles  -  8: alloc,  9: alive, 10: updated, 11: rendered, 12: reiterate, 13: reject, 14: clip, 15: collideTest, 16: collideHit
Pixels     - 17: alloc, 18: alive, 19: updated, 20: rendered
Emitters   - 21: alloc, 22: alive, 23: updated, 24: rendered
Volume     - 25: stat,  26: dyn,   27: error
```

- **wh_e_ParticlesUpdateThreshold**:

```text
Specifies after how many frames the emitter is removed from the update collection if it is not rendered.
```

- **wh_e_ParticlesViewDistMul**:

```text
Artificially multiplies the view distance for particles
```

- **wh_e_PernamentPhysicalization**:

```text
Enables pernament physicalization of brushes
```

- **wh_e_PernamentPhysicalizationSyncLoad**:

```text
Enables synchronized load of pernament physicalization instead of streaming of physical files
```

- **wh_e_RoadRenderNodeBBoxes**:

```text
0/1 - show/hide Bouding boxes of RoadRenderNodes
```

- **wh_e_ScreenShotFileName**:

```text
Set output image file name for hires screen shots.
```

- **wh_e_ShadowsSparseGSMUpdate**:

```text
1=enables interleaved rendering of GSM levels 2, 3 and 4.
2=force interleaved for editor.
Usage: wh_e_ShadowsSparseGSMUpdate [0/1/2]
```

- **wh_e_StatObjDsStreaming**:

```text
WH[PD] Set to 1 to enable DirectStorage style of StatObj streaming.
```

- **wh_e_StreamCgfHeaders**:

```text
CGF headers are loaded asynchronously during level load.
```

- **wh_e_StreamCgfSizePenality**:

```text
How much does size decrease streaming importance
```

- **wh_e_StreamPredictionUpdateNearTimeSlice**:

```text
Maximum amount of time to spend for scene streaming priority update of near objects in milliseconds
```

- **wh_e_TimeOfDayMode**:

```text
Current Time of Day mode (0 - default, 1 - real sun position)
```

- **wh_e_VerticalLightCulling**:

```text
WH[TBa] Enables Z distance based light culling (note: it also has to be enabled per-light in the entity properties).
	1 - uses Z difference to turn off the light (after the standard occlusion and view distance culling), bounding boxes are not modified
	2 - modifies Z component of AABBs, relies on the standard view-distance and occlussion culling
	3 - both modes together
See E_VerticalLightCullingModeWH.
```

- **wh_e_ViewDistRatioRoad**:

```text
View distance ratio for roads
```

- **wh_e_WindDebugDraw**:

```text
Enable wind calculations debug draw. Bit flags:
1 - Draw arrows
2 - Display wind grid values
4 - Display global wind value

```

- **wh_e_surfaceTypeDebugColoring**:

```text
Coloring mode of surfaces in 'p_draw_helpers st_g'. Must be set in user.cfg before launching the game!
0 = Using dbg_color in SurfaceTypes.xml
1 = Based on movementSpeedMult (1=blue, 1>green, 0.5=yellow, 0=red)
```

- **wh_e_svoTI_UseProbe**:

```text
Use global probe in SVOTI
```

- **wh_ed_editorAreaDebug**:

```text
Debug editor areas (bitflags):
1 - list areas camera is in.
2 - list AI areas camera is in - display editor areas
```

- **wh_ed_reloadFlashOnGameModeStart**:

```text
1 = reload flash UI from files, 0 = reset only
```

- **wh_ent_AnimSynchronizerForceUpdateAnimController**:

```text
Enables forced update of animation controllers when anim synchronization is required
```

- **wh_ent_AutoRuntimePrefabsDebug**:

```text
Auto phase change runtime prefabs debug draw. Flags:
1 - Show all planned phase changes
2 - Display message when phase changes
```

- **wh_ent_AutoRuntimePrefabsMinDistanceSqr**:

```text
Minimum distance squared that player must be away from a prefab for it to change phase
```

- **wh_ent_CarryItemHeadAngleCap**:

```text
Maximum allowed +/- vertical angle (in deg) player can turn their head while carrying a CarryableItem. Edit only when not carrying to see the difference.
```

- **wh_ent_CarryItemHintsVisibilityTimeout**:

```text
Time for which "drop item" hint remains visible after picking up an item.
```

- **wh_ent_CarryItemPileMaxDistance**:

```text
Maximum distance to interact with CarryItemPile.
```

- **wh_ent_DebugAreaSpawn**:

```text
Shows area spawning debug info
```

- **wh_ent_DebugLogActorActions**:

```text
Logs actor action lifetime.
```

- **wh_ent_DisappearingObjectDespawnDistance**:

```text
Distance needed for this entity to disappear.
```

- **wh_ent_EquipmentSlotsDebug**:

```text
Shows equipment slots and equipped items
```

- **wh_ent_EquipmentSlotsDebugSoul**:

```text
Name of soul for which equipment slot debug is shown. Use empty string to show it for player.
```

- **wh_ent_GameProfileManagerDebugDraw**:

```text
1 = list pending profiles, 2 = list all profiles, 3 = list active profiles, 4 = detailed layer description, list of profiles etc. Use Filter for select specific layer.
```

- **wh_ent_GameProfileManagerDebugDrawFilter**:

```text
Substring name filter for the debug draw. Used for both profiles and layers
```

- **wh_ent_LedgeContinuousBlendWeight**:

```text
Is the blend weight continuously updated for selected ledges. Currently for VaultOver and VaultWindow
```

- **wh_ent_PhysicsDebugDraw**:

```text
Draw physics debug info for this entity
```

- **wh_ent_RestockPerFrameBudget**:

```text
Maximum number of milliseconds to spend on restock in a single frame.
```

- **wh_ent_RestockStartTimeMinutes**:

```text
Restock time of day in minutes (3:00 = 180 min). Changing it mid-game has no effect (must be in config, or you have to re-enter game mode).
```

- **wh_ent_ShowHelperObjects**:

```text
Changes when helper objects of entities are shown (used in lua). Game mode start/stop is needed for change to take effect.
0 - Never shown
1 - Shown in editor (but not game mode)
2 - Shown always
```

- **wh_env_CloudDensitySaturationValue**:

```text
Clouds are considered to be fully dense at this raw volumetric density. Used in rain calculation.
```

- **wh_env_DirtCreationSpeed**:

```text
Speed of the ground getting wet
```

- **wh_env_DirtDryupSpeed**:

```text
Speed of the ground drying up
```

- **wh_env_DisableRainController**:

```text
Disables raincontroller to make Rain Entity work
```

- **wh_env_GridInsertDistanceSquared**:

```text
Distance from player where instances are inserted to the grid (squared value).
```

- **wh_env_LightningThreshold**:

```text
Lightning is enabled when lightningThreshold < rainIntensity
```

- **wh_env_ParallelUpdate**:

```text
Enables parallel update of Environment module.
```

- **wh_env_PuddleCreationDelay**:

```text
Delay from rain start, when puddles start appearing
```

- **wh_env_PuddleCreationSpeed**:

```text
Speed of puddles appearing
```

- **wh_env_PuddleDryupDelay**:

```text
Delay after rain end, when puddles start disappearing
```

- **wh_env_PuddleDryupSpeed**:

```text
Speed of puddles drying up
```

- **wh_env_PuddleMaskMax**:

```text
Maximal threshold for puddle mask
```

- **wh_env_PuddleMaskMin**:

```text
Minimal threshold for puddle mask
```

- **wh_env_PuddlesRippleAmountMul**:

```text
Multiplier in calculation (PuddlesRippleAmount = rainIntensity * puddlesRippleAmountMul)
```

- **wh_env_RainCurrentAmount**:

```text
Affects most of the rain parameters, we should leave it set to 1
```

- **wh_env_RainDebug**:

```text
Shows debug info about rain
```

- **wh_env_RainDiffuseDarkening**:

```text
Diffuse darkening of wet surfaces when raining
```

- **wh_env_RainDropsAmountMul**:

```text
Multiplier in calculation (RainDropsAmount = rainIntensity * rainDropsAmountMul)
```

- **wh_env_RainDropsSpeedBase**:

```text
Base in calculation (RainDropsSpeed = rainDropsSpeedBase + rainIntensity * rainDropsSpeedMul + windStrength * rainDropsSpeedWindMul)
```

- **wh_env_RainDropsSpeedMul**:

```text
Multiplier in calculation (RainDropsSpeed = rainDropsSpeedBase + rainIntensity * rainDropsSpeedMul + windStrength * rainDropsSpeedWindMul)
```

- **wh_env_RainDropsSpeedWindMul**:

```text
Multiplier in calculation (RainDropsSpeed = rainDropsSpeedBase + rainIntensity * rainDropsSpeedMul + windStrength * rainDropsSpeedWindMul)
```

- **wh_env_RainFilterFreq**:

```text
Crosover frequency for rain intensity low pass filter, in Hz
```

- **wh_env_RainIntensityOverride**:

```text
Debug cvar to override rain intensity (0.0-1.0). Default: -1 (don't override)
```

- **wh_env_RainLayers**:

```text
Number of rain capsule layers (1-3), 3 looks best
```

- **wh_env_RainMoveBlend**:

```text
Smoothing player movement affecting rain direction
```

- **wh_env_RainMoveStrength**:

```text
How much player movement affects rain direction
```

- **wh_env_RainThreshold**:

```text
It starts raining when rainThreshold < localCloud * rainProbability
```

- **wh_env_RainWindStrength**:

```text
Sets how wind affects rain direction (if this == windStrength, then the rain will fall at 45deg)
```

- **wh_env_RandomPresetDelay**:

```text
Time in game hours after which random TOD preset will be selected.
```

- **wh_env_RespawnDebug**:

```text
If 1, some debugging info is shown.
```

- **wh_env_RespawnDebugIntervalSec**:

```text
Debug interval for respawning in sec (WT).
```

- **wh_env_RespawnDistance**:

```text
Distance from player when items respawn.
```

- **wh_env_RespawnHerbBboxScale**:

```text
Scale multiplier of herb AABB scale. Used for interactor.
```

- **wh_env_RespawnPickDistance**:

```text
Radius for picking herbs.
```

- **wh_env_RespawnRaycastUpdateDelta**:

```text
When pointing with interactor, shoot raycast only when the ray target moves this distance from the last raycast.
```

- **wh_env_RespawnTypicalHerbHeight**:

```text
Typical (average) height of the herb to offset picking point.
```

- **wh_env_SplashesAmountMul**:

```text
Multiplier in calculation (SplashesAmount = rainIntensity * splashesAmountMul)
```

- **wh_env_WeatherLayerProfileDebugDraw**:

```text
Enables debug for weather layer profiles
```

- **wh_env_WeatherLayerProfileHidingDelay**:

```text
Timeout until the weather profile is disabled after disabling the last particle emitter
```

- **wh_env_WeatherLayerProfileProcessingBudget**:

```text
Budget for number of entities processed per frame
```

- **wh_env_WeatherUpdateEnabled**:

```text
Enables update of weather system.
```

- **wh_env_WetDryThreshold**:

```text
Amount of rain intensity at which weather transitions from DRY to RAINING or from RAINING to DRYING
```

- **wh_env_debugTod**:

```text
Turns time of day blend debug draw.
```

- **wh_env_moon**:

```text
Enables moon update
```

- **wh_es_SlicedLoading**:

```text
Enables sliced loading of entities. 0 = never, 1 = without fader (default), 2 = always
```

- **wh_es_SlicedLoadingDebug**:

```text
Enables debug info of sliced loading. 0 = disabled, 1 = debug draw if active, 2 = debug draw, 3 = debug draw + log
```

- **wh_es_SlicedLoadingTimeBudget**:

```text
Time budget for sliced loading [msec]
```

- **wh_fmod_with_liveupdate**:

```text
Initialize FMOD Studio using FMOD_STUDIO_INIT_LIVEUPDATE (profiling) as opposed to FMOD_STUDIO_INIT_NORMAL
```

- **wh_frameStatsClampValues**:

```text
Should FrameStats get clamped upon requesting them?
```

- **wh_g_showHelp**:

```text
Enables help display.
```

- **wh_game_pauseDebug**:

```text
Shows info about game pause sources.
```

- **wh_gfx_useSWF**:

```text
Loads .SWF if .GFX not found
```

- **wh_horse_CameraSmoothing**:

```text
Camera smoothing timevalue used by road magnetizer.
```

- **wh_horse_DebugStaminaBuff**:

```text
Debug effects of stamina buff applied to player's horse.
```

- **wh_horse_FollowInnerCircleRadius**:

```text
Radius of the inner circle used in follow (ideal distance between NPC and Player)
```

- **wh_horse_FollowInnerCircleRadiusBias**:

```text
Inner circle radius bias used when interpolating between player and target speed when catching up to target
```

- **wh_horse_FollowInputMovementScaleX**:

```text
Scale of player input in X axis
```

- **wh_horse_FollowInputMovementScaleY**:

```text
Scale of player input in Y axis
```

- **wh_horse_FollowMaxStartDistance**:

```text
Maximum distance at which can player start following NPC that he can't chat with
```

- **wh_horse_FollowMinDistance**:

```text
Distance between NPC and player when speed is zero (min distance between NPC and Player)
```

- **wh_horse_FollowNPCSpeedForMaximumOffset**:

```text
Minimum NPC speed at which specified offset values are used
```

- **wh_horse_FollowOffsetX**:

```text
Follow NPC offset on the X axis in NPC local space
```

- **wh_horse_FollowOffsetY**:

```text
Follow NPC offset on the Y axis in NPC local space
```

- **wh_horse_FollowOffsetYWhenCenter**:

```text
Follow NPC offset on the Y axis in NPC local space when using 'Center' offset
```

- **wh_horse_FollowOuterCircleMinSpeed**:

```text
Minimum player speed when outside outer circle (useful when NPC is moving very slowly)
```

- **wh_horse_FollowOuterCircleRadius**:

```text
Radius of the outer circle used in follow (max distance between NPC and Player before Follow turns off)
```

- **wh_horse_FollowOuterCircleTargetSpeedScale**:

```text
When outside outer circle player never moves slower than this multiple of NPC speed (used to keep NPC and player speed similar when catching up to NPC)
```

- **wh_horse_RoadMagnetism**:

```text
Should horse road magnetism be enabled? 0 = no, 1 = on press, 2 = auto
```

- **wh_horse_UseBridleParamsFromLua**:

```text
Use bridle physics params from Horse.lua instead of defaults from code.
```

- **wh_human_DebugLadder**:

```text

```

- **wh_iLogMaxTraceLevel**:

```text
Maximum level of game event that is automatically traced.
Default is LEVEL 3.
```

- **wh_i_Debug**:

```text
Toggle items debugging.
Modes:
0:  off1:  all
2:  with entity
3:  in inventory
4:  equipped
5:  in shop
6:  leaked (no entity and not in inventory)
10: counter only

```

- **wh_i_adaptiveTriggerEffect**:

```text
Enable/Disable trigger effects for DualSense controller (PS5).
```

- **wh_i_controllerVibrations**:

```text
Enable/Disable controller vibrations. (Note: The behavior of DualSense on PS5 differs from other platform/controller combos.)
```

- **wh_i_deadZone**:

```text
Represents how much of a controller input on sticks should be ignored, default value 0.2f = 10%.
```

- **wh_i_defaultDeadZone**:

```text
if someone changes wh_i_deadZone this cvar is used to restore the deadzone to default.
```

- **wh_i_immersiveTriggerEffect**:

```text
Enable/Disable trigger effects for Xbox Series controller (XBOX).
```

- **wh_i_lightBarEffect**:

```text
Enable/Disable lightBar effects.
```

- **wh_i_thumbstickButtonThreshold**:

```text
Value that is used to determine of the stick position is or is not considered as pushed button into given direction(up/down/left/right). This cvars default value is based on threshold from XInputDevice where it is (25000 / 32768)
```

- **wh_i_vibrationIgnoreFocus**:

```text
Ignores focus so we can debug old school haptics (use wh_osh_play).
```

- **wh_item_AllowPatching**:

```text
Allow inventory and item patching.
```

- **wh_item_DropHeightOffset**:

```text
Height offset from eye position to use when spawning dropped items
```

- **wh_item_DroppedAmmoMaxCount**:

```text
How many older dropped ammo is left in wh_item_DroppedAmmoRadius around current ammo drop.
```

- **wh_item_DroppedAmmoRadius**:

```text
Radius in which older dropped ammo is removed if new drops in (see wh_item_DroppedAmmoMaxCount)
```

- **wh_item_DroppedBrokenAmmoBonusTime**:

```text
Broken ammo is considered by this many seconds older when searching for oldest ammo to remove (see wh_item_DroppedAmmoMaxCount)
```

- **wh_item_DroppedItemsDebugDraw**:

```text
Draw items held by the world inventory which can be picked by NPCs.
```

- **wh_item_HomeSlotAutoReturnInitialTimeout**:

```text
Controls the initial timeout when the return of the slot is returned automatically. The value is in miliseconds
```

- **wh_item_HomeSlotAutoReturnMode**:

```text
Controls the mode of auto returning item to its home slot. 
		0 - off
		1 - on with all conditions
		2 - on but the visibility conditions are ignored. Intended for debug
```

- **wh_item_HomeSlotPhaseReset**:

```text
Controls auto reseting of the item phase when the item returns to its home slot or is abandones while SetAside. 
		0 - off
		1 - on with all conditions
		2 - on but the visibility conditions are ignored. Intended for debug
```

- **wh_item_ItemSlotDynSpawning**:

```text
Controls how ItemSlot item entities are spawned:
		0 - all slots are always spawned
		1 - dynamically spawned when player is nearby
		2 - dynamically spawned when player is nearby and visible by VisibilityArea check
```

- **wh_item_ItemSlotDynSpawning_DespawnBudgetMax**:

```text
How many ItemSlots can be despawned per frame at maximum (when spawn budget is not too high)
```

- **wh_item_ItemSlotDynSpawning_DespawnBudgetMin**:

```text
How many ItemSlots can be despawned per frame at minimum.
```

- **wh_item_ItemSlotDynSpawning_Parallel**:

```text
Enables parallelization of algorithm that decides which item slots should be currently despawned.
```

- **wh_item_ItemSlotDynSpawning_Radius**:

```text
How far from the observer should be item slots spawned.
```

- **wh_item_ItemSlotDynSpawning_RadiusHysteresis**:

```text
How further from the observer should be item slots despawned, than they are spawned.
```

- **wh_item_ItemSlotDynSpawning_SearchSizePerFrame**:

```text
How many ItemSlots should be searched for spawning / despawning each frame.
```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetFrameThresholdToDecrease**:

```text
If the spawn queue would take at most this many frames to deplete with current budget, decrease the budget.
```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetFrameThresholdToIncrease**:

```text
If the spawn queue would take at least this many frames to deplete with current budget, increase the budget.
```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetMax**:

```text
If bigger than spawn budget, the budget can be boosted up to this value, if the spawning queue is too big
```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetMin**:

```text
How many ItemSlots can be spawned per frame (can be boosted).
```

- **wh_item_MapBottomHeight**:

```text
Items below this height will be considered "fallen through terrain"
```

- **wh_item_PreloadItemModels**:

```text
Keep models of all items preloaded
```

- **wh_item_PreloadItemPhaseModels**:

```text
Keep models of all items phases preloaded
```

- **wh_item_TagPoached**:

```text
Items with this tag will be considered poached.
```

- **wh_item_ViewDistRatio**:

```text
ViewDistRatio used for spawned items and weapons on characters.
```

- **wh_loco_DebugInfo**:

```text
Shows loco debug info
```

- **wh_lua_better_print**:

```text
Turns on (1) or off (0) improved print command in lua.
```

- **wh_map_CompassPOIDistanceRatio**:

```text
ratio of the POI discovery distance at which the POI appears in UI compass
```

- **wh_map_MoveCursorSens**:

```text
How cursor move input is sensitive.
```

- **wh_map_ShowFastTravelPoints**:

```text
1 enables fast travel points, 0 disables them
```

- **wh_map_StickDeadZone**:

```text
Controller stick dead zone.
```

- **wh_mod_ShowUsedModsInSaveTooltip**:

```text
0=Disabled, 1=Shows which mods were used in saves
```

- **wh_osh_DebugDistance**:

```text
Display the current distance from the sound. Works in the game mode only.
Default: 0 (i.e. off)

```

- **wh_osh_DrawDebug**:

```text
Display the current output of the OSH synthesizer. Works in the game mode only.
Default: 0 (i.e. off)

```

- **wh_osh_enabled**:

```text
Enable the fallback implementation of haptic feedback.
```

- **wh_osh_xml_filename**:

```text
Filename of fallback implementation of haptic feedback.
```

- **wh_photomode_CameraSize**:

```text
The size of the camera for physical collisions.
```

- **wh_photomode_MaxDistance**:

```text
Maximal distance of photomode camera from player.
```

- **wh_photomode_debugCamCollisions**:

```text
Debug the collisions of photomode camera
```

- **wh_pl_AlchemyDistileryFireLightColor**:

```text
Color of light from fire under distilery on alchemy table
```

- **wh_pl_AlchemyDistileryFireLightIntensity**:

```text
Intensity of light from fire under distilery on alchemy table
```

- **wh_pl_AlchemyFinishFaderLength**:

```text
Lenght of the finishing fader in alchemy minigame.
```

- **wh_pl_AlchemyPotFireLightColor**:

```text
Color of light from fire under pot on alchemy table
```

- **wh_pl_AlchemyPotFireLightIntensity**:

```text
Intensity of light from fire under pot on alchemy table
```

- **wh_pl_AnimatedCameraBone**:

```text

```

- **wh_pl_AutoAcceptChat**:

```text
Chat is always automatically accepted.
```

- **wh_pl_BattleArcheryEntryPointOffset**:

```text
Offset of entry point against ref point
```

- **wh_pl_BattleArcheryExitPointOffset**:

```text
Offset of exit point against ref point
```

- **wh_pl_BattleArcheryKeyboardSensitivity**:

```text
Keyboard sensitivity of the movement in battle archery
```

- **wh_pl_BattleArcheryLookingPointOffset**:

```text
Offset of looking point against ref point
```

- **wh_pl_BattleArcheryMaxHAngle**:

```text
Maximum angle of rotation in battle archery
```

- **wh_pl_BattleArcheryMinHAngle**:

```text
Minimum angle of rotation in battle archery
```

- **wh_pl_BattleArcheryMouseSensitivity**:

```text
Mouse sensitivity of the movement in battle archery
```

- **wh_pl_BattleArcheryPalisadeCenterDistance**:

```text
Distance (m) from the entity to the center of rotation
```

- **wh_pl_BattleArcheryPalisadeShootingPointOffset**:

```text
Offset of shooting point against ref point (override)
```

- **wh_pl_BattleArcheryPlayerUseLeaningOut**:

```text
Indicates if player uses 'npc' minigame variant with leaning out animation.
```

- **wh_pl_BattleArcheryShootingMaxVAngle**:

```text
Maximum angle of rotation in battle archery
```

- **wh_pl_BattleArcheryShootingMinVAngle**:

```text
Minimum angle of rotation in battle archery
```

- **wh_pl_BattleArcheryUnlockDistanceOffset**:

```text
Unlock offset to unlock from the minigame with backward movement 
```

- **wh_pl_BattleArcheryUseAngle**:

```text
Minimum dot product of forward vector (entity and slot)
```

- **wh_pl_BattleArcheryUseDistance**:

```text
Distance XY (m) for start battle archery from entry point
```

- **wh_pl_BattleArcheryUseMaxZDistance**:

```text
Max distance in Z axis (m) for start battle archery from entry point
```

- **wh_pl_BattleArcheryUseMinZDistance**:

```text
Min distance in Z axis (m) for start battle archery from entry point
```

- **wh_pl_BattleArcheryUseRadius**:

```text
Radius (m) for using the battlement slot
```

- **wh_pl_BattleArcheryWallCenterDistance**:

```text
Distance (m) from the entity to the center of rotation
```

- **wh_pl_BattleArcheryWallShootingPointOffset**:

```text
Offset of shooting point against ref point (override)
```

- **wh_pl_BattlementDebugDraw**:

```text
Debug draw for battlement minigame
```

- **wh_pl_BellowsUseCountToDistill**:

```text
Count of bellows use in distillation action.
```

- **wh_pl_BlacksmithAlmostFinishedWorkpieceCompletition**:

```text
Completion value for barking (level 2).
```

- **wh_pl_BlacksmithAnvilMovementGamepad**:

```text
Sensitivity of movement on the anvil with gamepad.
```

- **wh_pl_BlacksmithAnvilMovementMouse**:

```text
Sensitivity of movement on the anvil with mouse.
```

- **wh_pl_BlacksmithAnvilParticlesEfficiencyMax**:

```text
Max effectivity for wh_pl_BlacksmithAnvilParticlesMax.
```

- **wh_pl_BlacksmithAnvilParticlesEfficiencyMin**:

```text
Min effectivity for wh_pl_BlacksmithAnvilParticlesMin.
```

- **wh_pl_BlacksmithAnvilParticlesMax**:

```text
Scale of particles count on the anvil at maximal efficiency.
```

- **wh_pl_BlacksmithAnvilParticlesMin**:

```text
Scale of particles count on the anvil at minimal efficiency.
```

- **wh_pl_BlacksmithAnvilRotation**:

```text
Anvil rotation for input.
```

- **wh_pl_BlacksmithBarkSupressCooldownAfterSinging**:

```text
Time period after singing when barks are still supressed.
```

- **wh_pl_BlacksmithColdWorkpieceCount**:

```text
Number of strokes to the cold workpiece to bark.
```

- **wh_pl_BlacksmithColdWorkpieceTemperature**:

```text
Critical temperature for cold workpiece. Bellow this value is workpiece considered as cold.
```

- **wh_pl_BlacksmithCompletionGainMultiplier**:

```text
Completion gain of blacksmith workpiece multiplier.
```

- **wh_pl_BlacksmithDebugDraw**:

```text
Debug draw for blacksmithing minigame			1 - minigame state			2 - draw potential map			4 - draw workpiece raycast grid			8 - draw hammer raycast on workpiece
```

- **wh_pl_BlacksmithDisableHeatLoss**:

```text
If set, disable all sources of heat loss for all the zones.
```

- **wh_pl_BlacksmithForcedSongId**:

```text
Force specified song to play during blacksmith minigame.
```

- **wh_pl_BlacksmithForgeBag**:

```text
Enable using forge bag in blacksmithing minigame forge.
```

- **wh_pl_BlacksmithForgeCoalMaxIntensity**:

```text
Max value for emissive intensity for forge coal.
```

- **wh_pl_BlacksmithForgeCoalMinIntensity**:

```text
Min value for emissive intensity for forge coal.
```

- **wh_pl_BlacksmithForgeCoolingSpeed**:

```text
Cooling of the blacksmithing forge in Celsius/sec when blowing is not active.
```

- **wh_pl_BlacksmithForgeExtraCoalMaxIntensity**:

```text
Max value for emissive intensity for forge coal.
```

- **wh_pl_BlacksmithForgeExtraCoalMinIntensity**:

```text
Min value for emissive intensity for forge coal.
```

- **wh_pl_BlacksmithForgeHeatingSpeed**:

```text
Heating of the blacksmithing forge in Celsius/sec when blowing is active.
```

- **wh_pl_BlacksmithForgeLightMaxIntensity**:

```text
Max value for diffuse intensity for forge light.
```

- **wh_pl_BlacksmithForgeLightMinIntensity**:

```text
Min value for diffuse intensity for forge light.
```

- **wh_pl_BlacksmithForgeMovementGamepad**:

```text
Gamepad threshold of the movement in the forge.
```

- **wh_pl_BlacksmithForgeMovementMouse**:

```text
Sensitivity of movement in the forge.
```

- **wh_pl_BlacksmithForgeOtherHeatFactor**:

```text
Heating speed for other zones in the forge.
```

- **wh_pl_BlacksmithForgeOtherTemperatureFactor**:

```text
Target temperature factor for other zones in the forge.
```

- **wh_pl_BlacksmithForgePowerFactor**:

```text
Heating effectiveness in the forge (energy gain).
```

- **wh_pl_BlacksmithForgeTemperatureLightFactor**:

```text
Maximum intensity of light that is given from coal without heating.
```

- **wh_pl_BlacksmithHalfFinishedWorkpieceCompletition**:

```text
Completion value for barking (level 1).
```

- **wh_pl_BlacksmithHardeningCoolingPower**:

```text
Speed of cooling during hardening in the bucket.
```

- **wh_pl_BlacksmithHardeningHeatingPower**:

```text
Speed of heating during hardening in the forge.
```

- **wh_pl_BlacksmithHardeningWorkpieceTemperature**:

```text
Target temperature of the hardening process in the forge.
```

- **wh_pl_BlacksmithIneffectiveStrokingCount**:

```text
Number of strokes to the same place on the workpiece to bark.
```

- **wh_pl_BlacksmithIneffectiveStrokingTolerance**:

```text
Spatial tolerance of the ineffective stroking to the same place.
```

- **wh_pl_BlacksmithInitialForgeTemperature**:

```text
Initial forge temperature when minigame starts in Celsius.
```

- **wh_pl_BlacksmithMaxForgeTemperature**:

```text
Maximal temperature of the forge in Celsius.
```

- **wh_pl_BlacksmithMinForgeTemperature**:

```text
Minimal temperature of the forge in Celsius.
```

- **wh_pl_BlacksmithNormalHeatLossFactor**:

```text
Energy loss out of forge.
```

- **wh_pl_BlacksmithNormalTemperature**:

```text
Normal/Initial temperature of the workpiece.
```

- **wh_pl_BlacksmithPerfectStroke**:

```text
Enable perfect stroking in blacksmithing minigame.
```

- **wh_pl_BlacksmithPotentialFadeOutTime**:

```text
Time of complete fading of potential to 0.
```

- **wh_pl_BlacksmithQualityLossMultiplier**:

```text
Quality loss of blacksmith workpiece.
```

- **wh_pl_BlacksmithReturnIngredientCoef**:

```text
Percentual coefficient of ingredients that are returned to the inventory when minigame fails.
```

- **wh_pl_BlacksmithSelectedRecipe**:

```text
Debug selected recipe Id for blacksmithing.
```

- **wh_pl_BlacksmithSingingPause**:

```text
Pause after singing when one song ends before next song starts.
```

- **wh_pl_BlacksmithStroke**:

```text
Enable stroking in blacksmithing minigame.
```

- **wh_pl_BlacksmithStrokeMoveCount**:

```text
Workpiece move count after stroke.
```

- **wh_pl_BlacksmithStrokeMoveIntensityCoef**:

```text
Intensity of movement of the workpiece after stroke.
```

- **wh_pl_BlacksmithTimingMaxDuration**:

```text
Maximal duration of rhythmic period [s].
```

- **wh_pl_BlacksmithTimingMinCount**:

```text
Minimal count for consider rhythmic bonus is active.
```

- **wh_pl_BlacksmithTimingTolerance**:

```text
Time tolerance for rhythmic bonus [s].
```

- **wh_pl_BlacksmithUseDistance**:

```text
Maximal distance for using smithery (at starting point).
```

- **wh_pl_BlacksmithVoxelSize**:

```text
Size of voxel.
```

- **wh_pl_BlacksmithWorkpieceCannotBreak**:

```text
Do not break the workpiece when reaching its critical quality.
```

- **wh_pl_BlacksmithWorkpieceIntensityCoef**:

```text
Multiplier for workpiece color intensity.
```

- **wh_pl_BlacksmithZoneTemperatureCap**:

```text
Temporary maximum cap for workpiece zone temperature. Is not applied if the value is negative.
```

- **wh_pl_ButcheringFaderLength**:

```text
Duration for which the screen is faded when butchering animal (first time looting).
```

- **wh_pl_CameraFollowEntity**:

```text
Entity id for debug camera to follow
```

- **wh_pl_DebugAlchemy**:

```text
Turns alchemy debugging.
```

- **wh_pl_DebugFPC**:

```text
Shows first person camera bones
```

- **wh_pl_DebugHoleDigging**:

```text
Turns on/off hole digging debugging.
```

- **wh_pl_DebugHudMask**:

```text
Turns hud mask debugging.
```

- **wh_pl_DebugIKLimbs**:

```text
Enables IK Limbs debug draw
```

- **wh_pl_DebugInteractor**:

```text
Enables interactor debugging.
0: off
1: debug player interactor selection
2: debug player's dog interactor selection
3: debug chat interactor selection
-1, -2, -3: same as positive ones, but with reasons why objects were/weren't selected
-10, -20, -30: same as previous one, but filters out some texts so that screen is not overcrowded

```

- **wh_pl_DebugLockPicking**:

```text
Turns lock picking debugging. (0 = none, 1 = debug info, 2 = debug info and debug behaviour)
```

- **wh_pl_DebugMovementDirs**:

```text
Enables movement directions debugging
```

- **wh_pl_DebugPicking**:

```text
Debug item picking (bitwise - sum to turn multiple modes on):
1: draws all picking slots, green are item slot helpers, red are animation picking asset slots.
H/D/R/S are priority components (Height, Distance, Rotation, Side), P is the final priority, last is hand angle.
2: priority vector (deprecated)
4: same as 1, but draws only the best picking slots, in blue
8: drawn at the beggining of the pick, draws the a violet sphere at the slot location + axes.

```

- **wh_pl_DebugPickpocketing**:

```text
Turns pickpocketing debugging.
```

- **wh_pl_DebugPitchYaw**:

```text
Shows player yaw pitch
```

- **wh_pl_DebugView**:

```text
Enables view debug draw.
```

- **wh_pl_DiceAIAllBadges**:

```text
Adds all badges to NPC inventory, so it can choose from them all.
```

- **wh_pl_DiceAIHoldingDelay**:

```text
Delay between AI is holding dice in seconds
```

- **wh_pl_DiceAIPlayerTurnDelay**:

```text
Delay before AI starts playing its turn in seconds
```

- **wh_pl_DiceCameraHeight**:

```text
Dice camera height (above the board) in meters.
```

- **wh_pl_DiceCameraHorizontal**:

```text
Dice camera horizontal shift towards the player (in multiples of the inner radius of the cup).
```

- **wh_pl_DiceDebug**:

```text
Dice minigame debug.
```

- **wh_pl_DiceGoldFormationsScore**:

```text
Gold Formations badge score.
```

- **wh_pl_DiceHighThrowCount**:

```text
Number of throws when npc barks.
```

- **wh_pl_DiceIdleTimeout**:

```text
Define time for idle npc barks.
```

- **wh_pl_DiceLookAngleLimitDown**:

```text
Down angle of player look limit.
```

- **wh_pl_DiceLookAngleLimitLeft**:

```text
Left angle of player look limit.
```

- **wh_pl_DiceLookAngleLimitRight**:

```text
Right angle of player look limit.
```

- **wh_pl_DiceLookAngleLimitUp**:

```text
Up angle of player look limit.
```

- **wh_pl_DicePlumbFormationsScore**:

```text
Plumb Formations badge score.
```

- **wh_pl_DiceScoreForHighBark**:

```text
Define score for high npc barks.
```

- **wh_pl_DiceScoreForLowBark**:

```text
Define score for low npc barks.
```

- **wh_pl_DiceSilverFormationsScore**:

```text
Silver Formations badge score.
```

- **wh_pl_DiceTargetScore**:

```text
Default dice target score.
```

- **wh_pl_DiggingFaderLength**:

```text
Duration for which the screen is faded.
```

- **wh_pl_DisableApseOnControllerAfterChatDelay**:

```text
How long the apse wont be enabled after chat has ended (in seconds)
```

- **wh_pl_DistractHandOffset**:

```text
Offset of the hand throwing decoy projectile to correct trajectory.
```

- **wh_pl_DogInteractorDayLen**:

```text
Set distance for dog interactor
```

- **wh_pl_DogInteractorNightLen**:

```text
Set distance for dog interactor at night
```

- **wh_pl_DrawAnim**:

```text
Enables draw weapon animations
```

- **wh_pl_ExactPosDebug**:

```text
Shows exact positioning debug info
```

- **wh_pl_FOWEnabled**:

```text
Enable fog of war revealing.
```

- **wh_pl_FOWVisibilityRadius**:

```text
Fog of war visibility radius (meters).
```

- **wh_pl_FOWVisibilityRadiusHC**:

```text
Fog of war visibility radius in hardcore mode (meters).
```

- **wh_pl_FOWVisibilityRadiusQuestLimited**:

```text
Fog of war visibility radius for quest needs.
```

- **wh_pl_FastTravelDebug**:

```text
1 - show fast travel progress.
```

- **wh_pl_FastTravelDismountedHorseFrustumConeAngle**:

```text
Half-angle (half of the cone) of the frustum for positioning horse when dismounting is forced by random event option
```

- **wh_pl_FastTravelDismountedHorseFrustumMaxDistance**:

```text
Maximum distance for positioning horse when dismounting is forced by random event option
```

- **wh_pl_FastTravelDismountedHorseFrustumMinDistance**:

```text
Minimum distance for positioning horse when dismounting is forced by random event option
```

- **wh_pl_FastTravelDistanceTolerance**:

```text
Max. allowed distance from FT POI to be able start FT
```

- **wh_pl_FastTravelEnabled**:

```text
0 - disabled, 1 - from anywhere, 2 - only from fast travel mark
```

- **wh_pl_FastTravelSkipTimeStepModif**:

```text
Fixed fast travel skiptime modif; auto=0; result = wh_pl_SkipTimeStep * wh_pl_FastTravelSkipTimeStepModif
```

- **wh_pl_FastTravelSlowDownPerceptionCount**:

```text
How many perception objects with relation to player provides the maximum simulation slow down during fast travel
```

- **wh_pl_FocusAngleAboveTargetLimit**:

```text
Angle that will decide if player is directly above target (in that case focus wont turn left or right)
```

- **wh_pl_FocusCancelLimits_Down**:

```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
```

- **wh_pl_FocusCancelLimits_Left**:

```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
```

- **wh_pl_FocusCancelLimits_Right**:

```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
```

- **wh_pl_FocusCancelLimits_Top**:

```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
```

- **wh_pl_FocusDampingFactor**:

```text
Damping factor used for focus.
```

- **wh_pl_FocusDebugDraw**:

```text
Debug draw for player focus
```

- **wh_pl_FocusFOVBlendTime**:

```text
Blend time for focus field of view change.
```

- **wh_pl_FocusFOVMaxAngleLength**:

```text
Camera angles length at which field of view is changed for focus camera.
```

- **wh_pl_FocusFOVMaxDecrease**:

```text
Maximum field of view decrease in degrees (at wh_pl_FocusFOVMaxDistance distance) for focus camera.
```

- **wh_pl_FocusFOVMaxDistance**:

```text
Distance at which focus camera field of view is set to default FOV minus wh_pl_FocusFOVMaxDecrease.
```

- **wh_pl_FocusFOVMinAngleLength**:

```text
Camera angles length at which focus camera field of view is set to default FOV minus wh_pl_FocusFOVMaxDecrease.
```

- **wh_pl_FocusFOVMinDistance**:

```text
Minimum distance at which field of view is changed for focus camera.
```

- **wh_pl_FocusInChatEnabled**:

```text
Enables focus in chat.
```

- **wh_pl_FocusInitialLimits_Down**:

```text
Limits for focus box in [%] of screen space. Before softbox being reached.
```

- **wh_pl_FocusInitialLimits_Left**:

```text
Limits for focus box in [%] of screen space. Before softbox being reached.
```

- **wh_pl_FocusInitialLimits_Right**:

```text
Limits for focus box in [%] of screen space. Before softbox being reached.
```

- **wh_pl_FocusInitialLimits_Top**:

```text
Limits for focus box in [%] of screen space. Before softbox being reached.
```

- **wh_pl_FocusLimits_Down**:

```text
Limits for focus box in [%] of screen space.
```

- **wh_pl_FocusLimits_Left**:

```text
Limits for focus box in [%] of screen space.
```

- **wh_pl_FocusLimits_Right**:

```text
Limits for focus box in [%] of screen space.
```

- **wh_pl_FocusLimits_Top**:

```text
Limits for focus box in [%] of screen space.
```

- **wh_pl_FocusOnlyHeadTurnTime**:

```text
Time until which only head is turned by player focus. It can be shorter due to turn head limits
```

- **wh_pl_FocusOutsideCancelBoxDeltaLimit**:

```text
Changes how much player needs to move the camera outside the cancel box before focus is canceled.
```

- **wh_pl_FocusRotationTime**:

```text
Time in which should be body turned to the NPC.
```

- **wh_pl_GameMode**:

```text
game mode
```

- **wh_pl_HerbGatheringFadeInLength**:

```text
Fade in length after gathering herbs finishes.
```

- **wh_pl_HerbGatheringFadeLength**:

```text
Duration for which the screen is black between fade out and fade in.
```

- **wh_pl_HerbGatheringFadeOutLength**:

```text
Fade out length when gathering herbs.
```

- **wh_pl_HerbGatheringLength**:

```text
How long the main animation is looped until fader.
```

- **wh_pl_HoleHeightIncrement**:

```text
The height by which the AABB of graves should be incremented. Fixes the problem with difficult selection of a graves (KCD2-311547).
```

- **wh_pl_InventoryDebugMode**:

```text
1 - inventory in debug mode
```

- **wh_pl_InventoryDummy**:

```text
Enable/disable inventory dummy player for equipping preview
```

- **wh_pl_LockPickedDoorTimeout**:

```text
NPCs will not react to a lock picked more than this amount of seconds ago.
```

- **wh_pl_LockPickingDOF**:

```text
DOF during lock picking, 0 off, 1 on.
```

- **wh_pl_LockPickingForceFeedback**:

```text
Force feedback during lock picking, 0 off, 1 max level.
```

- **wh_pl_LockPickingLayoutDifficulty**:

```text
Overrides lockpicking difficulty in UI layout. [-1]=default, [0]=very easy, [1]=easy, [2]=moderate, [3]=hard, [4]=very hard
```

- **wh_pl_LockPickingShakeOverride**:

```text
Overrides cursor shaking while lockpicking. [-1]=no overriding
```

- **wh_pl_LockPickingShakeStart**:

```text
Cursor relative shaking on lockpicking start (angle 0), range is 0 to 1.0 
```

- **wh_pl_LockpickingMouseSensitivityCoefficient**:

```text
Mouse sensitivity set in menu will be multiplied by this while lockpicking
```

- **wh_pl_MaxRaycastsPerChatInteractor**:

```text
Maximum number of raycasts that chat interactor is allowed to queue per frame
```

- **wh_pl_MaxRaycastsPerDogInteractor**:

```text
Maximum number of raycasts that dog interactor is allowed to queue per frame
```

- **wh_pl_MaxRaycastsPerInteractorTotal**:

```text
Total number of raycasts that the interactor is allowed to queue per frame
```

- **wh_pl_MaxRaycastsPerPlayerInteractor**:

```text
Maximum number of raycasts that player interactor is allowed to queue per frame
```

- **wh_pl_NearZ**:

```text
NearZ for the player camera
```

- **wh_pl_PickAlways**:

```text
Pick no matter what goes wrong!
```

- **wh_pl_PickDistTolerance**:

```text
Picking slot distance tolerance squared.
```

- **wh_pl_PickFarMinBlend**:

```text
When picking beyond wh_pl_PickFarThreshold, at least this much of the foot-forward animation will be blended in.
```

- **wh_pl_PickFarThreshold**:

```text
2D distance to item to pickup; after this distance, we start blending in picking animation with foot forward to get closer to item.
```

- **wh_pl_PickMaxDistance**:

```text
Maximum 2D distance to item that allows pickup interaction.
```

- **wh_pl_PickSlotCanInverseDirection**:

```text
Forces all pick slots to behave as if inverse direction was on (1) or off (2).
Picking slots without inverse direction are named pck_xx..., with have an 'i' instead of one of the 'x'.
Show names using wh_pl_DebugPicking
```

- **wh_pl_PickingTransformAtAttach**:

```text
How is the picked item transformed when attached to hand (only for picking items to inventory):
0: full transformation accodring to the hand slot
1: keeps the transformation it had when it was attached
2: keeps the rotation, but is snapped to the hand slot

```

- **wh_pl_PickpocketAssumeBagHasNoDefaultRotation**:

```text
If turned on, will write trace error for assets that have non-identity rotations.If turned off, will compensate for the default rotation - bag collider will be turned to face forward in NPC's default stance. See KCD2-108597.
```

- **wh_pl_PickpocketDebugDraw**:

```text
Draws the pickpocketing spheres on each human actor.
```

- **wh_pl_PickpocketInteractDepth**:

```text
Half of height of the capsule around pickpocketing bags, the capsule is oriented back-to-front of the NPC.
```

- **wh_pl_PickpocketInteractRadius**:

```text
Radius of the capsule around pickpocketing bags, the capsule is oriented back-to-front of the NPC.
```

- **wh_pl_PickpocketInteractYOffset**:

```text
Capsules for interactor ray casts for pickpocketing bags are based on top-middle of the bag, center of the capsule is offset forward by this amount, see wh_pl_PickpocketInteractRadius/Depth.
```

- **wh_pl_PickpocketInteractZOffset**:

```text
Capsules for interactor ray casts for pickpocketing bags are based on top-middle of the bag, center of the capsule is offset lower by this amount, should be equal to almost radius to get it roughly to the middle of the bag, see wh_pl_PickpocketInteractRadius/Depth.
```

- **wh_pl_PlatformActivitiesDebug**:

```text
Debug screen for platform activities
```

- **wh_pl_PopupTutorialDefaultDuration**:

```text
Default duration of tutorial popup windows.
```

- **wh_pl_PopupTutorialHorseDebug**:

```text
View debug of horse tutorials
```

- **wh_pl_PopupTutorialHorseHoldForwardDuration**:

```text
How long should we hold forward during dash so that a tutorial pops up.
```

- **wh_pl_PopupTutorialHorseHoldSpurDuration**:

```text
How long do we have to hold spur button so that a tutorial pops up
```

- **wh_pl_PopupTutorialHorseOverspurrCount**:

```text
How many times do we have to overspurr the horse over the limit so that a tutorial pops up
```

- **wh_pl_RandomEventsAutoSpawnEnabled**:

```text
Enables automatic spawn of random events when player enters trigger area. Also enables generic random events.
```

- **wh_pl_RandomEventsCooldownsEnabled**:

```text
enable cooldowns
```

- **wh_pl_RandomEventsDebug**:

```text
Shows debug info for all active random events.
```

- **wh_pl_RandomEventsDefaultMapTimeout**:

```text
Default value for timeout of random event encountered in fast travel (value is in seconds)
```

- **wh_pl_RandomEventsDefaultNPCCountStandardDeviation**:

```text
Default value for NPC count normal distribution
```

- **wh_pl_RandomEventsDespawnDistance**:

```text
Distance for event despawn. Player position is checked against event area and all spawned NPCs.
```

- **wh_pl_RandomEventsFastTravelCooldownMult**:

```text
Multiplier to all RandomEvent cooldowns when event in encountered during FastTravel. When changing this, consider also changing wh_pl_RandomEventsGlobalCooldownGenericEvents.
```

- **wh_pl_RandomEventsGenericEventsDebug**:

```text
Debug for generic random events.
1 - Enables wider circular query for debug and prints info about met and missed NPCs when fast travel ends
2 - All trace messages use trace::e_Info level

```

- **wh_pl_RandomEventsGenericEventsDebugEntityFilter**:

```text
Enables more logging for specific entity for generic random events.

```

- **wh_pl_RandomEventsGenericEventsQueryRadius**:

```text
Radius for generic random events circular query.
```

- **wh_pl_RandomEventsGlobalCooldownCaravan**:

```text
Sets global cooldown for caravan random events (value is in seconds)
```

- **wh_pl_RandomEventsGlobalCooldownCity**:

```text
Sets city global cooldown for spawning random events (value is in seconds)
```

- **wh_pl_RandomEventsGlobalCooldownDefault**:

```text
Sets default global cooldown for spawning random events (value is in seconds)
```

- **wh_pl_RandomEventsGlobalCooldownFast**:

```text
Sets global cooldown for 'fast' random events (value is in seconds)
```

- **wh_pl_RandomEventsGlobalCooldownGenericEvents**:

```text
Sets global cooldown for generic random events (value is in seconds). Always multiplied by wh_pl_RandomEventsFastTravelCooldownMult.
```

- **wh_pl_RandomEventsInFastTravelConceptStreamingAdditionalDistance**:

```text
Distance for streaming event place concept nodes in fast travel. Distance is added to the player view rpg value.
```

- **wh_pl_RandomEventsSelectEventPlaceOverride**:

```text
Only specified random event places will spawn when entering trigger area.
[Space separated list of event places names]
```

- **wh_pl_RandomEventsSelectVariantOverride**:

```text
Force specified random event variants to be selected.
[Space separated list of variant names]
```

- **wh_pl_RandomEventsTagDebugDraw**:

```text
Shows debug draw for random event tags.
```

- **wh_pl_RandomEventsVariantDefaultCooldown**:

```text
Sets the default cooldown for random event variants (value is in seconds)
```

- **wh_pl_RefreshInteractorTime**:

```text
Set timeout of interactor forced refresh in seconds.
```

- **wh_pl_SharpeningCameraRotation**:

```text
Camera rotation while sharpening.
```

- **wh_pl_SharpeningDebug**:

```text
Sharpening debug
```

- **wh_pl_SharpeningDebugInfo**:

```text
Shows sharpening progress
```

- **wh_pl_SharpeningEffDecMult**:

```text
Multiplier of efficiency removed from current zone health.
```

- **wh_pl_SharpeningEffIncMult**:

```text
Multiplier of efficiency added to current zone health.
```

- **wh_pl_SharpeningMousePositionMult**:

```text
Sensitivity of mouse while setting position.
```

- **wh_pl_SharpeningMousePressureSteps**:

```text
Number of steps to max pressure with mouse.
```

- **wh_pl_SharpeningMouseRotationMult**:

```text
Sensitivity of mouse while setting rotation.
```

- **wh_pl_SharpeningParticleFailMult**:

```text
Multiplier of fail particle scale count.
```

- **wh_pl_SharpeningParticleNormalMult**:

```text
Multiplier of normal particle scale count.
```

- **wh_pl_SharpeningPedalSpeedInc**:

```text
Increase of speed per single pedal movement.
```

- **wh_pl_SharpeningPerSecSpeedMult**:

```text
Decrease of speed per second.
```

- **wh_pl_SharpeningPerSecSpeedPressMult**:

```text
Decrease of speed per second according to pressure.
```

- **wh_pl_SharpeningPositionMult**:

```text
Sensitivity of stick while setting position.
```

- **wh_pl_SharpeningRotationMult**:

```text
Sensitivity of stick while setting rotation.
```

- **wh_pl_SharpeningUseBothSticks**:

```text
Use one stick for sword position and another for sword rotation.
```

- **wh_pl_ShowFireCursor**:

```text
Show cursor while missile weapon is in hand.
```

- **wh_pl_ShowHead**:

```text
Overwrite state of player's head /w mouth,eyes,teeth and tongue. Re-enter game for this to take effect! 
 (0 = no overwrite, 1 = force show, 2 = force hide)
```

- **wh_pl_SkipTimeAllowInTrespass**:

```text
Controls whether player can initiate skip time while in trespass.
0: cannot initiate
1: cannot initiate, except for sleeping
2: can always initiate
```

- **wh_pl_SkipTimeEnableOptiCVars**:

```text
Enable turning off render, turning on NoAnim and setting wireframe mode to 2 when skip timing
```

- **wh_pl_SkipTimeMaxUpdatesPerFrame**:

```text
Game loop is repeated this many times for each frame while time skipping.
```

- **wh_pl_SkipTimeMaxWorldTimeRatio**:

```text
Max world time ration for skip time. [ration]
```

- **wh_pl_SkipTimeMaxWorldTimeRatioHours**:

```text
Skip time upper hours for max world time ratio. [hours]
```

- **wh_pl_SkipTimeRenderOnEachDialogUpdate**:

```text
Force render update when the skip time dialog is updated (turned)
```

- **wh_pl_SkipTimeStep**:

```text
Fixed update time step when skip time is on, in milliseconds
```

- **wh_pl_StateDebug**:

```text
Displays current state hierarchy for given actor.
```

- **wh_pl_StateEventDebug**:

```text
Displays state machine state history for given actor.
```

- **wh_pl_StoneThrowingAngleTolerance**:

```text
Tolerance rotation (dot) to enable interaction
```

- **wh_pl_StoneThrowingDebugDraw**:

```text
Debug draw for stone throwing minigame
```

- **wh_pl_StoneThrowingLaunchStrength**:

```text
Strength of impulse applied after stone launch
```

- **wh_pl_StoneThrowingLaunchXAngle**:

```text
X angle of impulse for stone throwing
```

- **wh_pl_StoneThrowingMaxDistance**:

```text
Maximum distance to pile to enable interaction
```

- **wh_pl_StoneThrowingMinDistance**:

```text
Minimum distance to pile to enable interaction
```

- **wh_pl_StoneThrowingMovementSmoothing**:

```text
Smoothing factor for movement in the minigame
```

- **wh_pl_SwitchPlayerDebug**:

```text
Debug draw for player switching
```

- **wh_pl_TurningAnimOff**:

```text

```

- **wh_pl_TutorialActionDismissCooldown**:

```text
Duration for which the reset tutorial action is on the screen.
```

- **wh_pl_TutorialOldSaveAgeInSeconds**:

```text
Save if considered old if it was saved sooner than current time minus this constant (in seconds). Default is 150 days.
```

- **wh_pl_UseOldPlayerInteractor**:

```text
Enables old player interactor instead of the new one
```

- **wh_pl_VisualDebug**:

```text

```

- **wh_pl_VisualDebugLayout**:

```text

```

- **wh_pl_cfm_AttackCostCapacity**:

```text
Clamps the stamina cost that one attack has.
```

- **wh_pl_cfm_AttackCostStrengthTreshold**:

```text
If under this treshold, then 0 trigger strength is applied, 
				if the value is set to low it might cause that all wepon attack will have trigger effect applied.
```

- **wh_pl_cfm_CriticallyLowStaminaTreshold**:

```text
If player's stamina is under this threshold, maximum trigger strength is applied. Determines how strong will the resistance of the trigger be.
```

- **wh_pl_cfm_LowStaminaTreshold**:

```text
If player's stamina is under this threshold, low trigger strength is applied. Determines how strong will the resistance of the trigger be.
```

- **wh_pl_cfm_MaxTriggerStrength**:

```text
Trigger strength has to be value between 0-8. Should be higher than wh_pl_cfm_LowTriggerStrength
```

- **wh_pl_cfm_MediumTriggerStrength**:

```text
Trigger strength has to be value between 0-8, Should be lower than wh_pl_cfm_MaxTriggerStrength.
```

- **wh_pl_minigameDebug**:

```text
Shows debug for active minigames.
```

- **wh_playerHorse_FollowInnerCircleRadius**:

```text
Radius of the inner circle used in follow (ideal distance between NPC and Player)
```

- **wh_playerHorse_FollowInnerCircleRadiusBias**:

```text
Inner circle radius bias used when interpolating between player and target speed when catching up to target
```

- **wh_playerHorse_FollowInputMovementScaleX**:

```text
Scale of player input in X axis
```

- **wh_playerHorse_FollowInputMovementScaleY**:

```text
Scale of player input in Y axis
```

- **wh_playerHorse_FollowMaxStartDistance**:

```text
Maximum distance at which can player start following NPC that he can't chat with
```

- **wh_playerHorse_FollowMinDistance**:

```text
Distance between NPC and player when speed is zero (min distance between NPC and Player)
```

- **wh_playerHorse_FollowNPCSpeedForMaximumOffset**:

```text
Minimum NPC speed at which specified offset values are used
```

- **wh_playerHorse_FollowOffsetX**:

```text
Follow NPC offset on the X axis in NPC local space
```

- **wh_playerHorse_FollowOffsetY**:

```text
Follow NPC offset on the Y axis in NPC local space
```

- **wh_playerHorse_FollowOffsetYWhenCenter**:

```text
Follow NPC offset on the Y axis in NPC local space when using 'Center' offset
```

- **wh_playerHorse_FollowOuterCircleMinSpeed**:

```text
Minimum player speed when outside outer circle (useful when NPC is moving very slowly)
```

- **wh_playerHorse_FollowOuterCircleRadius**:

```text
Radius of the outer circle used in follow (max distance between NPC and Player before Follow turns off)
```

- **wh_playerHorse_FollowOuterCircleTargetSpeedScale**:

```text
When outside outer circle player never moves slower than this multiple of NPC speed (used to keep NPC and player speed similar when catching up to NPC)
```

- **wh_player_BowControlScheme**:

```text
0 - old control: lmb press+release
1 - new control: rmb aim, lmb fire
2- hybrid control
```

- **wh_player_DashMaxInterval**:

```text
Maximum amount of time between consecutive presses of the sprint key for dash to be active
```

- **wh_player_DeepWaterLevel**:

```text
Deep water level (limit some actions, crouching ..) 
```

- **wh_player_DefaultPitchAngleDownLimit**:

```text
Default pitch limiting for player (down direction)
```

- **wh_player_DefaultPitchAngleUpLimit**:

```text
Default pitch limiting for player (up direction)
```

- **wh_player_FollowAlwaysCanFollow**:

```text
When enabled player can follow anyone as if they had followable NPC side effect
1 - Center
2 - Left
3 - Right
```

- **wh_player_FollowDebugDraw**:

```text
Enables Follow DebugDraw
```

- **wh_player_FollowInnerCircleRadius**:

```text
Radius of the inner circle used in follow (ideal distance between NPC and Player)
```

- **wh_player_FollowInnerCircleRadiusBias**:

```text
Inner circle radius bias used when interpolating between player and target speed when catching up to target
```

- **wh_player_FollowInputMovementScaleX**:

```text
Scale of player input in X axis
```

- **wh_player_FollowInputMovementScaleY**:

```text
Scale of player input in Y axis
```

- **wh_player_FollowMaxStartDistance**:

```text
Maximum distance at which can player start following NPC that he can't chat with
```

- **wh_player_FollowMinDistance**:

```text
Distance between NPC and player when speed is zero (min distance between NPC and Player)
```

- **wh_player_FollowNPCSpeedForMaximumOffset**:

```text
Minimum NPC speed at which specified offset values are used
```

- **wh_player_FollowOffsetX**:

```text
Follow NPC offset on the X axis in NPC local space
```

- **wh_player_FollowOffsetY**:

```text
Follow NPC offset on the Y axis in NPC local space
```

- **wh_player_FollowOffsetYWhenCenter**:

```text
Follow NPC offset on the Y axis in NPC local space when using 'Center' offset
```

- **wh_player_FollowOuterCircleMinSpeed**:

```text
Minimum player speed when outside outer circle (useful when NPC is moving very slowly)
```

- **wh_player_FollowOuterCircleRadius**:

```text
Radius of the outer circle used in follow (max distance between NPC and Player before Follow turns off)
```

- **wh_player_FollowOuterCircleTargetSpeedScale**:

```text
When outside outer circle player never moves slower than this multiple of NPC speed (used to keep NPC and player speed similar when catching up to NPC)
```

- **wh_player_FrontCollisionBlendIn**:

```text
How fast in 1/s will the front collision move towards maximal offset
```

- **wh_player_FrontCollisionCrouchedVerticalOffset**:

```text
Vertical offset of the front collision sphere
```

- **wh_player_FrontCollisionForwardOffset**:

```text
Maximal forward offset of the front collision sphere
```

- **wh_player_FrontCollisionRadius**:

```text
Radius of the front collision sphere
```

- **wh_player_FrontCollisionVerticalOffset**:

```text
Vertical offset of the front collision sphere
```

- **wh_player_HorseDashShoutTimeout**:

```text
Timeout on player's shout before horse starts dashing
```

- **wh_player_HorseHintsVisibilityTimeout**:

```text
Time for which horse hints would stay visible after mounting
```

- **wh_player_InPlaceJumpAirControl**:

```text
Air control phys value for inplace jump.
```

- **wh_player_InteractorChatMagnetismHeight**:

```text
Interactor magnetism screen for chat interaction
```

- **wh_player_InteractorChatMagnetismWidth**:

```text
Interactor magnetism screen for chat interaction
```

- **wh_player_InteractorDistance**:

```text
Maximum distance at which a player can interact with other entities
```

- **wh_player_InteractorDistanceOnHorse**:

```text
Maximum distance at which a player can interact with other entities while the player is riding a horse
```

- **wh_player_InteractorDistanceSitting**:

```text
Maximum distance at which a player can interact with other entities while in sitting stance
```

- **wh_player_InteractorDogMagnetismHeight**:

```text
Interactor magnetism screen height when using dog interaction
```

- **wh_player_InteractorDogMagnetismWidth**:

```text
Interactor magnetism screen width when using dog interaction
```

- **wh_player_InteractorMagnetismHeight**:

```text
Interactor magnetism screen height
```

- **wh_player_InteractorMagnetismWidth**:

```text
Interactor magnetism screen width
```

- **wh_player_PickPlaceAngleCap**:

```text
Maximum allowed horizontal angle (in deg) for picking and placing items.
```

- **wh_player_SlidingDistanceMultForDamage**:

```text
Multiplies distance passed to RPG fall damage computation when sliding ends
```

- **wh_player_TenseCircumstanceDebugDraw**:

```text
Enables TenseCircumstance DebugDraw (for player)
```

- **wh_player_WeaponDrawHolsterHeadAngleCap**:

```text
Maximum allowed vertical angle (in deg) at which player can look down while drawing or holstering.
```

- **wh_quest_DebugQuestLog**:

```text
Displays objectives and logs for quest (given by name, use wh_quest_ListQuests). For next page use wh_quest_DebugQuestLogPage.
```

- **wh_quest_DebugQuestLogPage**:

```text
Controlls what page of the debug print will be shown. Affects wh_quest_DebugQuestLog.
```

- **wh_quest_DebugQuestMarkers**:

```text
Select quest by name for debug markers
```

- **wh_quest_ListQuests**:

```text
Lists all quests by name. For next page use wh_quest_ListQuestsPage.
```

- **wh_quest_ListQuestsPage**:

```text
Controlls what page of the debug print will be shown. Affects wh_quest_ListQuests.
```

- **wh_r_BillboardAtlasDiffuseConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_BillboardAtlasHeightConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_BillboardAtlasNormalConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_BindlessSkinningMaxBoneCount**:

```text
Maximum number of bones which can be rendered on GPU at once. If we run out, remaining characters will be in T-pose.
```

- **wh_r_BindlessSkinningMaxMorphCount**:

```text
Maximum number of morphs which can be rendered on GPU at once. If we run out, morph will not be applied.
```

- **wh_r_DecalAtlasDiffuseConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_DecalAtlasNormalConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_DecalAtlasSmoothnessConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_DecalAtlasSpecularConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_DetailAtlasConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_DofLdr**:

```text
Use LDR image for DoF calculations
```

- **wh_r_DynamicLightTimes**:

```text
Default time of day hours/minutes to generate dynamic lightning.
```

- **wh_r_MacroAtlasBGSConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MacroAtlasDiffuseConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MacroAtlasNormalConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MacroAtlasSmoothnessConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MaterialAtlasDiffuseConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MaterialAtlasMaskConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MaterialAtlasNormalConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MaterialAtlasSmoothnessConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MaterialAtlasSpecularConfig**:

```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
```

- **wh_r_MultiThreadedEditor**:

```text
Enables dedicated render thread in editor.
  0: disabled
  1: enabled
```

- **wh_r_PerObjectShadowsDistanceSq**:

```text
Sets squared distance from where per-object shadows are enabled on humans.
```

- **wh_r_ProbeCubemapTexSize**:

```text
Size of one texture in the atlas. You will have to change probe entity properties, rc.ini, re-generate all cubemaps and restart editor after changing this cvar.
```

- **wh_r_ProfilerScaleX**:

```text
Render profiler window scale. X axis.
```

- **wh_r_ProfilerScaleY**:

```text
Render profiler window scale. Y axis.
```

- **wh_r_ProfilerX**:

```text
Render profiler window offset. X axis.
```

- **wh_r_ProfilerY**:

```text
Render profiler window offset. Y axis.
```

- **wh_r_ReflexLightDebug**:

```text
Stores reflex light texture into reflexmap.tif file.
```

- **wh_r_ReflexLightRes**:

```text
Reflex light resolution
```

- **wh_r_ScreenShotFile**:

```text
The filename of capturing screenshot
```

- **wh_r_ScreenShotFolder**:

```text
The folder of capturing screenshot
```

- **wh_r_SemiPersistentCompiledObjectsDuration**:

```text
Frame count to hold CompiledRenderObjects. -1 to hold indefinitely(most likely will result in crash due to descriptor pool emptying)
```

- **wh_r_ShadersRemoteCompilerNetworkFailRetries**:

```text
Number of retries on network error before disabling remote shader compiler when r_ShadersRemoteCompiler = 1
```

- **wh_r_TexturesStreamingIdleTrimLimitKB**:

```text
Max amount to trim each frame when there are no streaming request, KB.
Usage: r_TexturesStreamingIdleTrimLimitKB [size]
Default is 4096KiBi
```

- **wh_r_VolumetricCloudsMapOverride**:

```text
Behavior of the local cloud map
0 - standard, new cloud config gets gradually blended in
1 - override whole map with current cloud config
2 - override for a single frame only
```

- **wh_r_VolumetricFogGlobalDensityOverride**:

```text
Override volumetric fog global density. Use -1 to disable override
```

- **wh_r_texturesstreamingKickDuringTrimStage**:

```text
Moves kicking of textures under balance point to trim stage
Usage: wh_r_texturesstreamingKickDuringTrimStage [0/1]
Default is 1 (on).
```

- **wh_r_texturesstreamingScheduleTimeLimitUs**:

```text
Max time to process texture trim, kick and stream per frame, us.
Usage: wh_r_texturesstreamingScheduleTimeLimitUs [time]
Default is 3000us
```

- **wh_rd_Debug**:

```text
Ragdoll debug output
```

- **wh_rd_DefaultStiffness**:

```text
Default ragdoll stiffness when ragdoll is triggered from code
```

- **wh_rd_HitSpeedThreshold**:

```text
Default delta speed for ragdoll to evaluate hit
```

- **wh_rd_PlayerHeadColliderRescale**:

```text
Player's head collision capsule upscales by this modifier during ragdoll to prevent camera clipping.
```

- **wh_rd_StillDuration**:

```text
Duration in seconds of ragdolled actor stillness before stand up
```

- **wh_rd_StillSpeedThreshold**:

```text
Ragdoll still pose speed limit
```

- **wh_rpg_AchievementsDebug**:

```text
set to non-zero to debug draw the achievements
```

- **wh_rpg_ActorIlluminanceIntervalEndpoints**:

```text
Thresholds for player illuminance estimation buff ActorIlluminanceMeter.
Space separated endpoints, number of intervals is the number of floats in this cvar + 1.
The number of intervals must match the numbef of modifier groups in the buff.
```

- **wh_rpg_AutoReloadRoles**:

```text
Controls whether roles table should be automatically reloaded when roles file is modified
```

- **wh_rpg_CombatHistoryExpirationTime**:

```text
Expiration time for combat history. After that time history is discarded.
```

- **wh_rpg_ContextOverride_BodyPart**:

```text
Override ID of the bodypart RPG context.
```

- **wh_rpg_ContextOverride_Health**:

```text
Override ID of the health RPG context.
```

- **wh_rpg_ContextOverride_SkillLevelRelative**:

```text
Override ID of the skill RPG context as relative skill level <0;1>.
```

- **wh_rpg_CorpseDisappearAddedDelay**:

```text
If corpse is supposed to be despawned but is not because player is too close, despawn is delayed by this many milliseconds.
```

- **wh_rpg_DebugAlcohol**:

```text
Shows rpg debug for alcohol,
the value is a bitmask controlling the display of particular info,
possible bits:
      1 - drunkenees

```

- **wh_rpg_DebugFactionId**:

```text
Shows debug for factions of Id,

```

- **wh_rpg_DebugFactions**:

```text
Shows rpg debug for factions,
the value is a bitmask controlling the display of particular info,
possible bits:
      1 - show factions with queued reputations

```

- **wh_rpg_DebugSouls**:

```text
Shows rpg debug info for all nearby souls,
the value is a bitmask controlling the display of particular info,
possible bits:
      1 - name, health, stamina
      2 - stats
      4 - state flags, selected derived stats
      8 - skills
     16 - counters
     32 - abilities and buffs
     64 - roles
    128 - meta roles
    256 - life/death state details
    512 - reputation (relation includes inter-tree links)
   1024 - perks and perk points
   2048 - combat
   4096 - static data
   8192 - companions
  16384 - combat history
  32768 - dirt & blood
  65536 - body description

```

- **wh_rpg_DebugSoulsDistance**:

```text
Max distance from the player to show in DebugSouls [m]
```

- **wh_rpg_DebugSoulsFilter**:

```text
Name of soul to show in DebugSouls
```

- **wh_rpg_DebugSoulsStringFilter**:

```text
filter for the output (currently works only for buffs)
```

- **wh_rpg_EnableReputationOverride**:

```text
Enable global reputation override,

```

- **wh_rpg_EventLogDebug**:

```text
0=Debug disabled, 1=Debug enabled, 2=Enabled with reduced text
```

- **wh_rpg_FollowDrainHorseStamina**:

```text
Should the horse's stamina be drained (during dash) when it is in follow?
```

- **wh_rpg_FollowDrainRiderStamina**:

```text
Should the rider's stamina be drained (during dash) when it is in follow?
```

- **wh_rpg_GameTimeRatioOn**:

```text
1 - Enable game time ratio in skiptime
```

- **wh_rpg_IgnoreStaticBedPOI**:

```text
Bed POI in static level data are not loaded.
```

- **wh_rpg_IndulgencePriceCacheExpirationTime**:

```text
Maximal age of indulgance price cache. Value is in seconds
```

- **wh_rpg_ItemFullHealthByDefault**:

```text
All items will be at full health and quality by default (if not configured).
```

- **wh_rpg_LocationReputationCacheExpirationTime**:

```text
Maximal age of location reputation cache. Value is in seconds
```

- **wh_rpg_LockOnAllTargets**:

```text
all souls are treated as enemies during the combat locking
```

- **wh_rpg_LogCompression**:

```text
Log compression level: 0=No compression, 1=Best speed, 9=Best compression, -1=Default compression (6)
```

- **wh_rpg_LogFilepath**:

```text
Directory path where Log files are saved.
```

- **wh_rpg_LogInterval**:

```text
Interval between saving logs to file (seconds)
```

- **wh_rpg_LogLevel**:

```text
0=Log All events, 1=Log Combat events (same as E_LogLevel)
```

- **wh_rpg_LogReasons**:

```text
0=Disable logging Reasons, 1=Enable logging Reasons
```

- **wh_rpg_LogSize**:

```text
Preferred size of a log file (bytes). The saved file may be a bit larger because the last event has to be closed properly.
```

- **wh_rpg_LogTarget**:

```text
0=Logging disabled, 1=Log to Server, 2=Log to File, 3=Log to Both (same as E_LogTarget
```

- **wh_rpg_LogType**:

```text
0=Log GUIDs, 1=Log names, 2=Log both (same as E_LogType)
```

- **wh_rpg_MaxSoulUpdateDelta**:

```text
max update delta time, all above will be clamped [s]
```

- **wh_rpg_OneShotKill**:

```text
One shot kill (every, even small, hit is lethal).
```

- **wh_rpg_ParallelUpdate**:

```text
execute rpg update in a async job
```

- **wh_rpg_PerceptionPriorRelationshipFuncType**:

```text
Change behaviour of relationship while computing perception priority.
      0 - KCD style, only multiplying constants apply      1 - new style including bonus to neutral and enemy relationship
```

- **wh_rpg_ProfilingLog**:

```text
1 = Log basic profiling data (like CPU and GPU frame times).
```

- **wh_rpg_ProfilingLogInterval**:

```text
How often we send the profiling data [seconds].
```

- **wh_rpg_ProfilingLogSmoothingFactor**:

```text
Exponential smoothing factor. Value from 0 to 1. 1 -> disables smoothing.
```

- **wh_rpg_ReputationLogMaxSize**:

```text
A soul or faction forgets the oldest reputation change record after its own log reaches this size.
```

- **wh_rpg_ReputationOverride**:

```text
All rpg reputations (anything vs. player) are overriden to this value,

```

- **wh_rpg_SchedulerBudgetPerLayer**:

```text
number of updated souls in each layer
```

- **wh_rpg_SchedulerDebug**:

```text
set to non-zero to debug draw the state of the scheduler, 1 - per layer debug, 2 - sorted jobs
```

- **wh_rpg_SchedulerSortIterations**:

```text
number of bubble sort iterations per frame
```

- **wh_rpg_SchedulerSoulsInLayer0**:

```text
souls in the first layer, second contains twice the count
```

- **wh_rpg_SchedulerUpdate**:

```text
1 - use soul priorities, 0 - naive update for each soul
```

- **wh_rpg_SkipAll**:

```text
Disable all rpg effects and timers on all souls. Works bad when put in system.cfg.
```

- **wh_rpg_SkipEffectsOn**:

```text
Disable all RPG effects on soul(s) with given name; _all_ stands for all existing souls
```

- **wh_rpg_SkipFoodTimers**:

```text
disable all food-related timers (like starvation)
```

- **wh_rpg_SkipTimersOn**:

```text
Disable all RPG timers on soul(s) with given name; _all_ stands for all existing souls
```

- **wh_rpg_SoulCombatSimulatorDebugDraw**:

```text
Debug draw for soul combat simulator.
```

- **wh_rpg_SoulCombatSimulatorMeleeMaxDistance**:

```text
Maximal distance for melee fight.
```

- **wh_rpg_SoulCombatSimulatorMeleeTimeout**:

```text
Minimal timeout between attacks for melee weapon. Value is in seconds
```

- **wh_rpg_SoulCombatSimulatorMissileTimeout**:

```text
Attack mean time for archers. The value is given by candency of animation.
```

- **wh_rpg_StatisticsDebug**:

```text
set to non-zero to debug draw the statistics
```

- **wh_rpg_TelemetryEnforced**:

```text
1= Telemetry errors will appear when connection issues happen and Game will be terminated. wh_rpg_LogTarget must be set to 1
```

- **wh_rpg_TelemetryLimitedToPlayer**:

```text
0=Telemetry logging for all events, 1=Telemetry logging only for events affected by player
```

- **wh_rpg_TelemetryLimitedToPlayline**:

```text
0=Telemetry enabled on all playlines, 1-7=Telemetry enabled only on selected playline
```

- **wh_rpg_TelemetryMarketingConsent**:

```text
Set from the UI, Saved in the profile
 0=Publisher/Developer (false) cannot use telemetry data for marketing ,
 1=Publisher/Developer (true)  can use telemetry data for marketing.
```

- **wh_rpg_TelemetryMaxRetryCount**:

```text
Maximum number of retry attempts when sending telemetry failed
```

- **wh_rpg_TelemetryPlaionEnable**:

```text
-1=Disable and free memory, 0=Disable , 1 = Enable (same as E_TelemetryPlaionEnable)
```

- **wh_rpg_TelemetryRetryDelay**:

```text
Delay between retry attempts when sending telemetry failed [ms]
```

- **wh_rpg_TelemetryServer**:

```text
Address of the telemetry load balancing server.
```

- **wh_rpg_TelemetrySpamFiltering**:

```text
0=Log all events, respecting E_LogLevel.
1=Selected frequent events are hard-filtered.
```

- **wh_rpg_UnlockAll**:

```text
unlock all abilities
```

- **wh_s_ObstructionSmoothFloatDefaultAlpha**:

```text
How fast smoothed obstruction reaches its target value.
Usage: wh_s_ObstructionSmoothFloatDefaultAlpha [0/1]
Default: 0.8

```

- **wh_s_OcclusionBubbleThreshold**:

```text
Hide text bubbles when occlusion is above this value. See also sound_obstruction in SurfaceTypes.xml
Usage: wh_s_OcclusionBubbleThreshold [0/1]
Default: 0.5

```

- **wh_s_OcclusionBubbleThresholdEnable**:

```text
Enable hiding text bubbles on unsuccessful raycasts.
Usage: wh_s_OcclusionBubbleThresholdEnable 0/1
Default: 1

```

- **wh_s_OcclusionRayEnabled**:

```text
Enables or disables obstruction system using ray casts.Usage: wh_s_OcclusionRayEnabled [0/1]
Default: 1 (enabled)

```

- **wh_s_OcclusionRayNPCVerticalOffset**:

```text
Offset ray start for NPCs. This offset is relative to their feet.
Usage: wh_s_OcclusionRayNPCVerticalOffset [0/...]
Default: 1.4

```

- **wh_s_OcclusionSmoothFloatDefaultAlpha**:

```text
How fast smoothed occlusion reaches its target value.
Usage: wh_s_OcclusionSmoothFloatDefaultAlpha [0/1]
Default: 0.8

```

- **wh_sequence_aux_widsh_file**:

```text
The auxiliary Sequence WIDSH file
```

- **wh_sequence_fmod_event_name**:

```text
The full path of the FMOD Event through which the music is streamed from Sequence Music Engine
```

- **wh_sequence_main_widsh_file**:

```text
The principal Sequence WIDSH file
```

- **wh_sequence_music_path**:

```text
Path to the music assets
```

- **wh_sh_DebugDraw**:

```text
Debug draw for combat shouts
```

- **wh_sh_HearingWeightMaxHit**:

```text
Hearing system weight for maximal hit.
```

- **wh_sh_HearingWeightMinHit**:

```text
Hearing system weight for minimal hit.
```

- **wh_sh_HearingWeightScreams**:

```text
Hearing system weight for combat screams.
```

- **wh_sh_HearingWeightShouts**:

```text
Hearing system weight for combat shouts.
```

- **wh_shop_MinDistToPlayerToUpdateDisplayed**:

```text
Displayed goods are updated only when player is at least this far (to avoid player seeing item dis/appearing).
```

- **wh_shotgun_numProjectiles**:

```text
Number of extra projectiles for shotguns.
```

- **wh_shotgun_spreadAngle**:

```text
Spread angle of shotgun.
```

- **wh_situations_PreventMultipleSearchRequest**:

```text
Prevents starting multiple search request for a single situation in one situation controller. This prevents stalling the search reqeust queue
```

- **wh_snd_audio_request_queue_dump_cooldown**:

```text
Minimum number of seconds since the last overload ATL dump before another one can happen
```

- **wh_snd_audio_request_queue_dump_enabled**:

```text
Enable dumping the ATL queues to a file. 0 = disabled, 1 = enabled; see similar CVars
```

- **wh_snd_audio_request_queue_dump_threshold_size**:

```text
Dump ATL queues to a file when there are more than this many
```

- **wh_snd_audio_request_queue_max_size**:

```text
Maximum size of a single ATL request queue. Excess pushRequests will be ignored
```

- **wh_snd_audio_xmls_dir**:

```text
Path to the sound XMLs
```

- **wh_snd_buffer_length**:

```text
Length of FMOD Studio mixing buffer in samples. 0 = use default by FMOD Studio.
```

- **wh_snd_enable_audio_backchannel**:

```text
Toggle the WH-specific audio backchannel
```

- **wh_snd_fmod_maxchannels_consoles**:

```text
First parameter of initialize(), must be in config file to work.
```

- **wh_snd_fmod_maxchannels_windows**:

```text
First parameter of initialize(), must be in config file to work.
```

- **wh_snd_ignore_focus**:

```text
If set to 1, OnLoseFocus and OnGetFocus will not do anything
```

- **wh_snd_muteall**:

```text
If set to 1, will cause the FMOD to override all volume settings to silence.
```

- **wh_snd_num_buffers**:

```text
Number of FMOD Studio mixing buffers. 0 = use default by FMOD Studio.
```

- **wh_snd_sound_behavior_xml**:

```text
Performance culling options configuration file. None or invalid = empty list.
```

- **wh_snd_underground_rtpc_name**:

```text
The ATL name of the RTPC to set when player is underground (as determined by PlayableCharacterProbe)
```

- **wh_snd_underground_snapshot_name**:

```text
The ATL name of the shapshot to trigger when player is underground (as determined by PlayableCharacterProbe)
```

- **wh_snd_volctrl_mastermax**:

```text
dB value at RTPC = 1.0 for master volume slider
```

- **wh_snd_volctrl_mastermin**:

```text
dB value at RTPC = 0.0 for master volume slider
```

- **wh_snd_volctrl_musicmax**:

```text
dB value at RTPC = 1.0 for music
```

- **wh_snd_volctrl_musicmin**:

```text
dB value at RTPC = 0.0 for music
```

- **wh_snd_volctrl_sfxmax**:

```text
dB value at RTPC = 1.0 for SFX
```

- **wh_snd_volctrl_sfxmin**:

```text
dB value at RTPC = 0.0 for SFX
```

- **wh_snd_volctrl_silence**:

```text
Volume RTPC less than this value will result in complete silence (regardless of other wh_snd_volctrl CVars)
```

- **wh_snd_z_axis_diff_lower**:

```text
Z-axis Difference functionality. Lower bound of the linear slope from min to max attenuation.
```

- **wh_snd_z_axis_diff_upper**:

```text
Z-axis Difference functionality. Upper bound of the linear slope from min to max attenuation.
```

- **wh_sqc_log_enabled**:

```text
0 = no log written; 1 = log written. Filename is sqc-<unixtime>.log
```

- **wh_storm_DebugOperationTypeFilter**:

```text
Filter storm debug by task class
```

- **wh_storm_DebugSoul**:

```text
Name of soul to show in storm debug
```

- **wh_storm_DebugSubstringFilter**:

```text
Filter storm debug by substring
```

- **wh_storm_ProgramLocation**:

```text
Location from where load storm program
```

- **wh_sys_AutoLoadLastSave**:

```text
Newest game is auto loaded on game start
```

- **wh_sys_AutoPatchDB**:

```text
autopatching of tables by XML
```

- **wh_sys_BaseLevelId**:

```text
ID of initial level
```

- **wh_sys_BuildInfo**:

```text
Build info displayed in menu
```

- **wh_sys_CheckResourcesInRuntime**:

```text
Check animation resources in runtime.
```

- **wh_sys_CollectResources**:

```text
Collects resources and checks resources modifications when data is needed.
```

- **wh_sys_CollectResourcesAtStartup**:

```text
Collects resources and checks resources modifications during start of editor or game on non-master configuration.
```

- **wh_sys_CompilerInfo**:

```text
Executable info, stored by compiler
```

- **wh_sys_ConsoleMode**:

```text
Sets console mode
0 = Fidelity
1 = Performance
```

- **wh_sys_ContentFilter**:

```text
Filters displayed game content (e.g. Nudity, Gore).
```

- **wh_sys_DebugLevelInfo**:

```text
Show debug info of level system and level switching
```

- **wh_sys_DebugMouseEvents**:

```text
Writes mouse events to console/log
```

- **wh_sys_DebugPlayline**:

```text
on-screen debug info, Index of playline. -1 = disabled
```

- **wh_sys_DebugSaveLock**:

```text
Enables message to console on save lock change. Lists current active locks.
```

- **wh_sys_DoCrash**:

```text
Intentional crash
```

- **wh_sys_DoFatalError**:

```text
Intentional fatal error
```

- **wh_sys_ExcludedTableParts**:

```text
Substrings for table part exclusion, comma separated
```

- **wh_sys_ExprReportMissingVariables**:

```text
Expressions: missing variables are reported (instead of silent evaluation to 0)
```

- **wh_sys_ExtraRewardsDebug**:

```text
List ExtraRewards. 1=all, 2=ulocked, 3=ready to consume, 4=consumed
```

- **wh_sys_FakeExtraRewards**:

```text
Comma separated IDs of rewards. Or use * to fake all. If empty real rewards are used.
```

- **wh_sys_ForceMainMenu**:

```text
Main menu is displayed if game is launched with +map option
```

- **wh_sys_ForceUserName**:

```text
Empty string means no name is forced. Must be in system.cfg
```

- **wh_sys_FreezePlayline**:

```text
Saved games are not changed, playline is not deleted for New game
```

- **wh_sys_FullDumpPath**:

```text
Sets the path where Full dump will be uploaded upon crash (only if is in unattended mode and has test session id set)
```

- **wh_sys_GameReleaseVersion**:

```text
Current version of the game.
Used in script to maintain save compatibility.
```

- **wh_sys_GameSaveForceLoadingError**:

```text
Forces error while loading saved game. -1=not forced, 0=suppress err, 1=description err, 2=cry data err, 3=wh data err, 4=level switch err
```

- **wh_sys_GameSaveId**:

```text
Forces ID of gamesave
```

- **wh_sys_GameSaveInstallCompleted**:

```text
Forces state of StreamingInstallCompleted in savegame system. -1=not forced, 0=force false, 1=force true
```

- **wh_sys_GameSaveName**:

```text
Forces name of gamesave
```

- **wh_sys_HideIntroVideo**:

```text
Hides the intro video during game startup
```

- **wh_sys_HideLoadingScreen**:

```text
Hides the loading screen when loading a saved game
```

- **wh_sys_LastLoadedSave**:

```text
Filename of last loaded savegame
```

- **wh_sys_LoadGameFilter**:

```text
controls list of saved games. Combination of 1(manual save), 2(quick save), 4(auto save), 8(permanent point), 16(new game), 32(exit save), 64(level switch). Negative value means default behaviour
```

- **wh_sys_LogFlushInterval**:

```text
Flush log to file every N seconds. 0 means flush every message, negative means flush never.
```

- **wh_sys_MainMenuVideoName**:

```text
If not empty - name of video played in main menu
```

- **wh_sys_MenuBuildInfo**:

```text
Build info displayed in menu
```

- **wh_sys_NestedGameSaveId**:

```text
Forces ID of nested gamesave
```

- **wh_sys_NoPlaylineDeleting**:

```text
Playline savegames are not deleted for New game
```

- **wh_sys_NoSavePotion**:

```text
No save potion is needed in menu
```

- **wh_sys_PakExportAlignmentUsingZlibHeader**:

```text
When exporting paks, use zlib header embedding to maintain a 16bit data alignment.
```

- **wh_sys_PakExportEmbedZlibHeader**:

```text
When exporting paks, embed Zlib headers into PKZip headers.
```

- **wh_sys_PlaylineSavegameCount**:

```text
Number of save slots for each save type
```

- **wh_sys_PrecacheModeDebugDraw**:

```text
Enables PrecacheMode debug
```

- **wh_sys_PrefabsDir**:

```text
Path to prefabs in 'Data'
```

- **wh_sys_PreferredDB**:

```text
Comma separated list of DB serializers (XML, TBL)
```

- **wh_sys_ProfilingMode**:

```text
Used during profiling to indicate disabled credits etc.
```

- **wh_sys_ProsDebug**:

```text
1=log + render Pros debug info, 2=log update
```

- **wh_sys_ProsEnable**:

```text
Pros master switch
```

- **wh_sys_ProsFakeEntitlements**:

```text
Comma separated IDs of entitlements. If empty real entitlements are used.
```

- **wh_sys_ProsMode**:

```text
Pros 0=normal, 1=developer, 2 = developer online, 3 = developer linked, 4 = developer not linked
```

- **wh_sys_ProsUseStagingServer**:

```text
Pros uses 'staging' server instead of 'production' server
```

- **wh_sys_RandomSeed**:

```text
Seed for random generator. If seed < 0, seed is generated from time
```

- **wh_sys_ReadinessObserverDebugDraw**:

```text
Enables ReadinessObserver debug
```

- **wh_sys_ReadinessObserverEnabled**:

```text
Enables ReadinessObserver
```

- **wh_sys_ReadinessObserverProfiler**:

```text
Enables ReadinessObserver profiler
```

- **wh_sys_ReadinessObserverTimeoutDuration**:

```text
Max duration of ReadinessObserver in seconds
```

- **wh_sys_ReadinessTaskProfiler**:

```text
Shows Readiness Tasks in ReadinessProfiler and FaderProfiler. 1: show only tasks which are observed, 2: show all tasks
```

- **wh_sys_ShowDlcInSaveTooltip**:

```text
0=Disabled, 1=Shows DLCs used in selected savegame
```

- **wh_sys_ShowInfoInSaveTooltip**:

```text
0=Disabled, 1=Shows info in selected savegame tooltip
```

- **wh_sys_SkipStartupVideoWhenPossible**:

```text
Skip all the startup videos (with logos) while initial loading as soon as game is ready.
```

- **wh_sys_StartupVideoFileName**:

```text
File name of video played while initial loading
```

- **wh_sys_allow_screensaver**:

```text
1 - screen saver allowed, 0 - screen saver NOT allowed
```

- **wh_sys_assembly_date**:

```text
From file 'whdlversions.json', value of 'Assembly::DateTestedData'
```

- **wh_sys_game_polite_exit**:

```text
Slow exit, proper cleanup. Ignored in editor.
```

- **wh_sys_ipl_mode**:

```text
Mode of Initial PayLoad packs. 0=use both IPL and nonIPL, 1=IPL only mode, ignore nonIPL if IPL exists
```

- **wh_sys_keybind_profile**:

```text
loads specified keybinding from that file
```

- **wh_sys_lowMemoryLimitMB**:

```text
Limit for available page file memory and free windows drive memory for warning message box
```

- **wh_sys_lowMemoryMessageBox**:

```text
Show message box on PC when out of memory crash could occur
```

- **wh_sys_noExitWithoutUser**:

```text
Game is not terminated (exit code 258=USER_LOGIN_FAILED) in case the user login fails
```

- **wh_sys_noUserWithoutController**:

```text
0=user can log in without controller
```

- **wh_sys_outOfMemoryMessageBox**:

```text
Show message box on PC out of memory crashes
```

- **wh_sys_publishing**:

```text
Publishing platform name
```

- **wh_sys_specVersion**:

```text
Script can read this to modify its behavior for E3, Gamescom etc.
```

- **wh_sys_streaming_directstorage_enabled**:

```text
Use direct storage stream engine.
```

- **wh_sys_version**:

```text
Version from system.cfg
```

- **wh_tvr_OptimizeRawAnimKeys**:

```text
Track view recorder: Is trying to optimize duplicity.
```

- **wh_tvr_PosVelocityThreshold**:

```text
Track view recorder: Defines minimal velocity [m/s] threshold for movement recognition
```

- **wh_tvr_RecBonesFromAnims**:

```text
Track view recorder: Enables to record joints dynamically detected from running anims
```

- **wh_tvr_RecBufferSize**:

```text
Track view recorder: Size of recording buffer (in frames -> 30fps * 60s = 1m recoding)
```

- **wh_tvr_RecRawAnim**:

```text
Track view recorder: Enables to record raw anims. Otherwise it is trying to reconstruct scene by existing anims in track view.
```

- **wh_tvr_RotVelocityThreshold**:

```text
Track view recorder: Defines minimal radial velocity [deg/s] threshold for rotation recognition
```

- **wh_tvr_SessionName**:

```text
Track view recorder: Prefix for recorded entities, track view sequence and root point.
```

- **wh_tvr_SessionNameOutputSuffix**:

```text
Track view recorder: Output extra suffix for track view session and anim.
```

- **wh_tvr_SessionRootDir**:

```text
Track view recorder: Output main anim for recorded anims (i_cafs).
```

- **wh_tw_CameraShakeCharacter**:

```text
Used character for animated camera shake in TW.
```

- **wh_tw_editmode**:

```text
Enables track view edit mode
```

- **wh_ui_ActivateDof**:

```text
Enables DOF ingame.
```

- **wh_ui_ApseCameraChangeTime**:

```text
Set time in sec to move on next panel
```

- **wh_ui_ApseCameraPosOffset**:

```text
Change y pos of camera anchor. Positive number is more close to panel, negative is far from panel.
```

- **wh_ui_ApseLightsDebugDraw**:

```text
Turns UI lights debug draw on/off.
```

- **wh_ui_ApseLightsMoving**:

```text
Turns UI lights moving in different views.
```

- **wh_ui_ApseLightsProlong**:

```text
Set delay of lights.
```

- **wh_ui_ApseLightsShieldDebug**:

```text
todo
```

- **wh_ui_ApsePauseRatio**:

```text
Inverse ratio of the inventory pause. The game time scale will get divided by this number when the inventory is entered.
```

- **wh_ui_ApseShieldActivateAnimationDuration**:

```text
Set duration of light activate.
```

- **wh_ui_ApseShieldDeactivateAnimationDuration**:

```text
Set duration of light deactivate.
```

- **wh_ui_ApseShieldLightModalIntensity**:

```text
Relative intensity of lights of focused shield.
```

- **wh_ui_ApseUnloadMode**:

```text
0 = no unload flash, 1 = unload flash elements after close apse, 2 = unload f.e. when hide except map, 3 = unload when f. e. when hide
```

- **wh_ui_BubbleDebug**:

```text
Bubble maker debug mode.
```

- **wh_ui_BubblesEnabled**:

```text
Toggles bark subtitles. Default is 1.
Usage: wh_ui_BubblesEnabled [0=disabled/1=enabled]
```

- **wh_ui_CompassFarThreshold**:

```text
Set maximum meters when  markers stop be smaller.
```

- **wh_ui_CompassFarThresholdHC**:

```text
Set maximum meters when markers stop be smaller.
```

- **wh_ui_CompassLayerThreshold**:

```text
Set from which meters compass marker show in front layer and maximum of meters when show arrow for marker.
```

- **wh_ui_CompassNearThreshold**:

```text
Set from which meters compass marker has scale and alpha 1.
```

- **wh_ui_CompassPitchAngleThreshold**:

```text
Set abs angle between player and object in degrees when show arrow on compass.
```

- **wh_ui_CompassPitchMinZThreshold**:

```text
Set minimum of z diff meters when show arrow on  compass.
```

- **wh_ui_ControllerLightBarHealthEffectFrequency**:

```text
Set R value by which the update of controller lightbar jump in a frame.
```

- **wh_ui_CopyrightMsgLeft**:

```text
Copyright string - left corner
```

- **wh_ui_CopyrightMsgRight**:

```text
Copyright string - right corner
```

- **wh_ui_DebugApse**:

```text

```

- **wh_ui_DebugItemSelection**:

```text

```

- **wh_ui_DebugItemTransfer**:

```text

```

- **wh_ui_DebugShop**:

```text

```

- **wh_ui_DebugShowHiddenActionHints**:

```text
If action hints that are set as invisible by default should be visible. Values: 0=hide them, 1=show them.
```

- **wh_ui_DisableNewGameDebugFader**:

```text
0=New Game (debug) with fader, 1=New Game (debug) without fader
```

- **wh_ui_DisablePros**:

```text
Disable PROS in main menu.
```

- **wh_ui_EnableSubtitleBg**:

```text
Show subtitle background.
```

- **wh_ui_EnableSubtitleSpeakerName**:

```text
Show name of speaker before subtitle.
```

- **wh_ui_ExitToMainMenu**:

```text
Enable <Save and exit to main menu>
```

- **wh_ui_FPS**:

```text
Display FPS counter
```

- **wh_ui_FaderAutoDebug**:

```text
Automatically show debug when the fader is stuck
```

- **wh_ui_FaderDebug**:

```text
Fader debug: 0=disabled, 1=list of active faders
```

- **wh_ui_FaderDebugAlpha**:

```text
Sets fader transparency for debug (0.0-1.0)
```

- **wh_ui_FaderDebugStuckDetectorTimerDuration**:

```text
Duration until stuck detection debug appears (in seconds)
```

- **wh_ui_FaderFadeInDefaultDuration**:

```text
Default duration of FadeIns (in seconds)
```

- **wh_ui_FaderFadeOutDefaultDuration**:

```text
Default duration of FadeOuts (in seconds)
```

- **wh_ui_FaderProfiler**:

```text
Fader debug: 0=disabled, 1=enable profiler
```

- **wh_ui_FaderProfilerSaveDuration**:

```text
Duration of fader for which profile will be saved (in seconds)
```

- **wh_ui_FaderProfilerSavePath**:

```text
Directory path where profiling results are saved
```

- **wh_ui_FaderProgressIndicatorTimerDuration**:

```text
Duration until progress indicator appears (in seconds)
```

- **wh_ui_FaderSuspend**:

```text
Suspends all faders. Use only for debugging!
```

- **wh_ui_GameEventLogLevel**:

```text
maximal level of game events that is shown in the UI (lower level=more important)
```

- **wh_ui_HoldCursorDuration**:

```text
Duration of hold cursor until it is triggered.
```

- **wh_ui_InputDevice**:

```text
Input device type displayed in UI, [1=keyboard+mouse, 2=XBOX controller, 4=PlayStation controller].
```

- **wh_ui_ListShieldMemoryTimeLimit**:

```text
seconds how long we will save which tab is focused in apse
```

- **wh_ui_NewGameDebugInMenu**:

```text
Enable <New Game Debug>
```

- **wh_ui_PauseGameOnFocusLoss**:

```text
Pause game when player switches focus to another window. Default true.
```

- **wh_ui_PreferredInputDevice**:

```text
Preferred input device type displayed in UI, [0=auto, 1=keyboard+mouse, 2=XBOX controller, 16=PlayStation controller].
```

- **wh_ui_PublicTimer**:

```text
In sec. Can be change during runtime. If it is set to number less zero it switch off feature.
```

- **wh_ui_ReadinessObserverProfilerSavePath**:

```text
Directory path where profiling results are saved
```

- **wh_ui_ScreenFaderDebug**:

```text
Enables ScreenFader node debug
```

- **wh_ui_ShowBubbles**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowBubbles [0=hide/1=show]
```

- **wh_ui_ShowBuffs**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowBuffs [0=hide/1=show]
```

- **wh_ui_ShowCommonEvent**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCommonEvent [0=hide/1=show]
```

- **wh_ui_ShowCompass**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCompass [0=hide/1=show]
```

- **wh_ui_ShowCrime**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCrime [0=hide/1=show]
```

- **wh_ui_ShowCursor**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCursor [0=hide/1=show]
```

- **wh_ui_ShowDialogLeft**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDialogLeft [0=hide/1=show]
```

- **wh_ui_ShowDialogRight**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDialogRight [0=hide/1=show]
```

- **wh_ui_ShowDiceContainer**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDiceContainer [0=hide/1=show]
```

- **wh_ui_ShowDiceCursor**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDiceCursor [0=hide/1=show]
```

- **wh_ui_ShowFancyEvent**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowFancyEvent [0=hide/1=show]
```

- **wh_ui_ShowGameLog**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowGameLog [0=hide/1=show]
```

- **wh_ui_ShowHints**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowHints [0=hide/1=show]
```

- **wh_ui_ShowHud**:

```text
Toggles HUD visibility. Default is 1.
Usage: wh_ui_ShowHud [0=hide/1=show]
```

- **wh_ui_ShowInfoText**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowInfoText [0=hide/1=show]
```

- **wh_ui_ShowItemTransfer**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowItemTransfer [0=hide/1=show]
```

- **wh_ui_ShowNormalCursor**:

```text
Show cursor dot.
```

- **wh_ui_ShowPopUpBackground**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowPopUpBackground [0=hide/1=show]
```

- **wh_ui_ShowQAMFood**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowQAMFood [0=hide/1=show]
```

- **wh_ui_ShowQAMWeapon**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowQAMWeapon [0=hide/1=show]
```

- **wh_ui_ShowRatioStrips**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowRatioStrips [0=hide/1=show]
```

- **wh_ui_ShowSequenceNotice**:

```text
Display notice while sequence is playing
```

- **wh_ui_ShowShootingContest**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowShootingContest [0=hide/1=show]
```

- **wh_ui_ShowSkillCheck**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowSkillCheck [0=hide/1=show]
```

- **wh_ui_ShowStats**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowStats [0=hide/1=show]
```

- **wh_ui_ShowSubtitles**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowSubtitles [0=hide/1=show]
```

- **wh_ui_ShowTrespassing**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowTrespassing [0=hide/1=show]
```

- **wh_ui_ShowTutorialInDialog**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowTutorialInDialog [0=hide/1=show]
```

- **wh_ui_ShowTutorialMessage**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowTutorialMessage [0=hide/1=show]
```

- **wh_ui_ShowVignette**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowVignette [0=hide/1=show]
```

- **wh_ui_ShowWanted**:

```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowWanted [0=hide/1=show]
```

- **wh_ui_SubtitleSize**:

```text
Set size of subtitles.
```

- **wh_ui_SubtitlesEnabled**:

```text
Toggles subtitles. Default is 1.
Usage: wh_ui_SubtitlesEnabled [0=disabled/1=enabled]
```

- **wh_ui_TutorialOverlayEnabled**:

```text
Enables overlay tutorials.
```

- **wh_ui_TutorialsEnabled**:

```text
Toggles tutorials. Default is 1.
Usage: wh_ui_TutorialsEnabled [0=disabled/1=enabled]
```

- **wh_ui_consoleModeChosen**:

```text
Say if you see console mode overlay and made decision.
```

- **wh_ui_creditsSecondPartStart**:

```text

```

- **wh_ui_eulaConfirmedVersion**:

```text
Say if you confirm eula and which version.
```

- **wh_ui_eulaCurrentVersion**:

```text
Version 
```

- **wh_ui_notLocalize**:

```text
bit mask: 0 = localize all, 1 = not subtitles, 2 = not bubbles, 4 = not messages, 8 = not item hint, 1024 = not localize
```

- **wh_ui_showFirstTimeOverlays**:

```text

```

- **wh_ui_telemetryConfirmed**:

```text
Say if you see telemetry overlay and made decision.
```

- **wh_w_AimByProjectile**:

```text
Weapons shoot in the direction of the physical projectile.
```

- **wh_w_AlertCosinus**:

```text
Sets up alert cosinus of direction to NPC and direction of projectile after which player's flying projectiles notifies itself to NPC.
Recommended values (-1, 0]
Arrow----------->
 \              
  \    cos      
   \            
    \           
     \|         
     --          
       NPC       

```

- **wh_w_AlertRadius**:

```text
Sets up alert radius in which player's flying projectiles notifies itself to NPC.
```

- **wh_w_DebugTrajectory**:

```text
Toggle trajectory prediction draw.
```

- **wh_w_SensitivityMod**:

```text
Sensitivity of mouse and gamepad stick is lowered when weapon is charged.
```

- **wh_w_ShotTest**:

```text
Toggle shot test.
```

- **wh_w_TrajectoryDashes**:

```text
Trajectory debug dash length.
```

- **wh_w_TrajectoryGaps**:

```text
Trajectory debug gaps length.
```

- **wh_w_TrajectoryResolution**:

```text
Trajectory debug resolution.
```

