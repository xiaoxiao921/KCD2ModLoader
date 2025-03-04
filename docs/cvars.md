# CVars (5254)

- **ExitOnQuit**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **MemInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display memory information by modules
1=on, 0=off
    ```

- **MemStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0/x=refresh rate in milliseconds
Use 1000 to switch on and 0 to switch off
Usage: MemStats [0..]
    ```

- **MemStatsMaxDepth**:

  - **Default Value:** `4`

  - **Description:**

    ```text

    ```

- **MemStatsThreshold**:

  - **Default Value:** `32000`

  - **Description:**

    ```text

    ```

- **STAP_DEBUG**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable STAP Debug Rendering
    ```

- **STAP_DISABLE**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable torso orientation
    ```

- **STAP_LOCK_EFFECTOR**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Lock the STAP Effector Joint
    ```

- **STAP_OVERRIDE_TRACK_FACTOR**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Override the base anim tracking factor
    ```

- **STAP_TRANSLATION_FEATHER**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable STAP Translation Feathering
    ```

- **STAP_TRANSLATION_FUDGE**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable STAP Translation Fudge
    ```

- **TMP_init**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **TMP_update**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **VisualConsole**:

  - **Default Value:** `0`

  - **Description:**

    ```text
writes console to screen
    ```

- **VisualConsoleSubStr**:

  - **Default Value:** ``

  - **Description:**

    ```text
writes console to screen if it matches substr
    ```

- **WH_AI_ANIM_Debug_DisplayAdditionalInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display the error
    ```

- **WH_AI_ANIM_Debug_DisplayTags**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Display vertical step
    ```

- **WH_AI_ANIM_Debug_ShowFlags**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Are flags displayed
    ```

- **WH_AI_ANIM_Debug_TrashDepth**:

  - **Default Value:** `5`

  - **Description:**

    ```text
How many animations are stored
    ```

- **WH_AI_BT_Node_Profile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows/disallows profiling of individual node performance. Requires reload scripts for changes to take effect.
    ```

- **WH_AI_Boid_DisableThreats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns of threat influence for XGEN AI boids.
    ```

- **WH_AI_Boid_MinPathLenght**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Minimal lenght of path proposed by BOID node. Shorter paths will be discarded.
    ```

- **WH_AI_BudgetEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable or disable budget system. If disabled, original tree execution is used.
    ```

- **WH_AI_BudgetedCombatSUBB**:

  - **Default Value:** `0`

  - **Description:**

    ```text
budgets on combat subbrain
    ```

- **WH_AI_CombatIgnoreTargetAttraction**:

  - **Default Value:** `0`

  - **Description:**

    ```text
ignore the attraction of the target
    ```

- **WH_AI_CombatIgnoreTargetOnSweetSpot**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if on sweet spto dont turn down
    ```

- **WH_AI_CombatMove_AccelerationLimit**:

  - **Default Value:** `5`

  - **Description:**

    ```text
How fast can the vector speed change in following / combat (in m/ss)
    ```

- **WH_AI_CombatMove_AccelerationLimitHorse**:

  - **Default Value:** `14`

  - **Description:**

    ```text
How fast can the vector speed change in following / combat (in m/ss) - specialization for horse
    ```

- **WH_AI_CombatMove_ApproachOffset**:

  - **Default Value:** `6`

  - **Description:**

    ```text
How far from sweet spot approach should change to engage.
    ```

- **WH_AI_CombatMove_BehindCut**:

  - **Default Value:** `1`

  - **Description:**

    ```text
cut stuff at back
    ```

- **WH_AI_CombatMove_CatchDistanceCap**:

  - **Default Value:** `130`

  - **Description:**

    ```text
when being this far from target, it is already considered unreached
    ```

- **WH_AI_CombatMove_CatchDistanceTolerance**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
when being this distance from ss area outer border, target is already considered caught
    ```

- **WH_AI_CombatMove_CatchTimeAngleLimit**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
If catch time is limited by angle, this is the least dot product values that is required (direction to target vs current direction)
    ```

- **WH_AI_CombatMove_CirclingChangeSmoothTime**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Smoothing time of change in circling direction (not moving is here also considered a direction).
    ```

- **WH_AI_CombatMove_CirclingChooseMoveMaxProb**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Maximal probability (at maximal movement activity) that we will choose to move instead of standing still.
    ```

- **WH_AI_CombatMove_CirclingDirectionDurationMax**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Maximal duration for which one circling direction is held. This is average, can be increased by randomization by half.
    ```

- **WH_AI_CombatMove_CirclingDirectionDurationMin**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Minimal duration for which one circling direction is held. This is average, can be lowered by randomization by half.
    ```

- **WH_AI_CombatMove_CirclingLowestMovementActivity**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
If movement activity is lower than this, there is no lateral circling.
    ```

- **WH_AI_CombatMove_CirclingWaitingDurationMax**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal duration for which waiting during circling lasts. This is average, can be increased by randomization by half.
    ```

- **WH_AI_CombatMove_CirclingWaitingDurationMin**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Minimal duration for which waiting during circling lasts. This is average, can be lowered by randomization by half.
    ```

- **WH_AI_CombatMove_CuttingHisteresis**:

  - **Default Value:** `1`

  - **Description:**

    ```text
cut equally
    ```

- **WH_AI_CombatMove_DampingSize**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
How much repulsion is damped (only the part of it that prevents reaching ss)
    ```

- **WH_AI_CombatMove_DestinationRepulsionAlliesOnly**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Only enemies of our target (so our allies in defeating him) are checked in the destination repulsion computation.
    ```

- **WH_AI_CombatMove_DestinationRepulsionMinDist**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
If closer to ss than this, follower pf cannot be stopped because of destination repulsion
    ```

- **WH_AI_CombatMove_DestinationRepulsionThreshold**:

  - **Default Value:** `2`

  - **Description:**

    ```text
How much repulsion must be on some spot to prevent pathfollow there
    ```

- **WH_AI_CombatMove_DogBackwardLimitAngle**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
The higher the number is, the less the dog shows his back to attacker (but it is harder for him to increase distance from opponent).The number is angle from completely backward orientation, that is the limit for dog's voluntary orientation (in radians).Used only when s_MinTurnAngle > 0.
    ```

- **WH_AI_CombatMove_DogDistanceMax**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal desired combat distance for target from dog.
    ```

- **WH_AI_CombatMove_DogDistanceMin**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimal desired combat distance from target for dog.
    ```

- **WH_AI_CombatMove_DogMaxLateralLogicalSpeed**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximal lateral logical speed for fighting dogs. Default is 2 for canter.
    ```

- **WH_AI_CombatMove_DogMaxSpeed**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Maximal speed usable in combat in m/s.
    ```

- **WH_AI_CombatMove_DogMinLateralLogicalSpeed**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal lateral logical speed for fighting dogs. Default is 1 for trot.
    ```

- **WH_AI_CombatMove_DogMinTurnRadius**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
During combat, dog can turn only with higher or equal radius than this number. If 0, there is no limit.
    ```

- **WH_AI_CombatMove_DogUseTurnAngle**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Whether dog should use delta movement for turn angle. This cvar is checked only when combat start (to change it start a new combat)
    ```

- **WH_AI_CombatMove_EvasionManeuversSpeedRandPart**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
[0,1] how big part of the speed is random (rest is rpg)
    ```

- **WH_AI_CombatMove_EvasionManeuversTimeIntervalRandomPart**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
[0,1] how big part of the interval is random (rest is rpg)
    ```

- **WH_AI_CombatMove_EvasionManeuversTimeToChangeDirMax**:

  - **Default Value:** `5`

  - **Description:**

    ```text
(in seconds) maximal time to change dir during bow evasion
    ```

- **WH_AI_CombatMove_EvasionManeuversTimeToChangeDirMin**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
(in seconds) minimal time to change dir during bow evasion
    ```

- **WH_AI_CombatMove_ForceDisableMoveTransition**:

  - **Default Value:** `1`

  - **Description:**

    ```text
disable transitions
    ```

- **WH_AI_CombatMove_ForceFocusBack_Horse**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
how far back from center reaches horse repulsion
    ```

- **WH_AI_CombatMove_ForceFocusFront_Horse**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
how far front from center reaches horse repulsion
    ```

- **WH_AI_CombatMove_ForceKeepDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force keep distance
    ```

- **WH_AI_CombatMove_ForceOffsetMax**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
repulsion center (in following) moves in speed direction only up to this limit
    ```

- **WH_AI_CombatMove_ForceOffsetMaxSpeed**:

  - **Default Value:** `5`

  - **Description:**

    ```text
speed at which repulsion center moves by s_ForceRepulsionOffsetMax
    ```

- **WH_AI_CombatMove_ForceSpeedupBase**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How much speed (m/s) passes the force object of speedupDistance 1m at distance 1m
    ```

- **WH_AI_CombatMove_ForceSpeedupDistance_Horse**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Distance at which Horse speeds up follower by WH_AI_CombatMove_ForceSpeedup
    ```

- **WH_AI_CombatMove_ForceSpeedupDistance_NPC**:

  - **Default Value:** `2.1`

  - **Description:**

    ```text
Distance at which NPC speeds up follower by WH_AI_CombatMove_ForceSpeedup
    ```

- **WH_AI_CombatMove_ForceSpeedupDistance_NPCIndoor**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Used instead WH_AI_CombatMove_ForceSpeedupDistance_NPC if indoor GameContext is set
    ```

- **WH_AI_CombatMove_ForeignTargetRepulsion**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Extra repulsor between target and each other attacker. Repulsor is in front of target and if the attacker is 3m or closer, it has this repulsing speedup (for units seeWH_AI_CombatMove_ForceSpeedupBase). The further the attacker is, the smaller the repulsion gets.
    ```

- **WH_AI_CombatMove_FormationFacing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
do we face the direction of the formation
    ```

- **WH_AI_CombatMove_FormationLookAimTolerance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
the distance when to start looking into the direction of the formation
    ```

- **WH_AI_CombatMove_FormationRepulsionOverrideRelaxed**:

  - **Default Value:** `1.3`

  - **Description:**

    ```text
Repulsion for relaxed formations (not applied for horses)
    ```

- **WH_AI_CombatMove_FormationRepulsionOverrideTight**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Repulsion for tight (Keep / Relocate) formations (not applied for horses)
    ```

- **WH_AI_CombatMove_FormationSpeedGapTolerance**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
If the formation member is in its spot, allow him to move faster then the logical speed max limit would otherwise allow (by this amount). Does not work for the max speed limit (only smooths the speed limit gaps).
    ```

- **WH_AI_CombatMove_GuardDisableTimeout**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
When guard is enabled, how much time must pass since disable request for it to take effect
    ```

- **WH_AI_CombatMove_GuardEnableTimeout**:

  - **Default Value:** `300`

  - **Description:**

    ```text
When guard is disabled, how much time must pass since enable request for it to take effect
    ```

- **WH_AI_CombatMove_HorseModeRadiusMultiplier**:

  - **Default Value:** `2`

  - **Description:**

    ```text
how many (max) radii from target the horse mode can start (going from sides if target is on horse)
    ```

- **WH_AI_CombatMove_InAreaHysteresisTolerance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
If leaving InArea state and not further than this distance from area, still considered within area
    ```

- **WH_AI_CombatMove_InfrontCut**:

  - **Default Value:** `1`

  - **Description:**

    ```text
cut stuff infront
    ```

- **WH_AI_CombatMove_MaxAllowedSlope**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
If the slope is higher that this, we don't cut lateral movement anymore (we try to circle to get to better position).
    ```

- **WH_AI_CombatMove_MaxAllowedSlopePlayer**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
If the slope is higher that this, we don't cut lateral movement anymore (we try to circle to get to better position). Applies for NPC that targets player.
    ```

- **WH_AI_CombatMove_MaxArcRange**:

  - **Default Value:** `50`

  - **Description:**

    ```text
ARC drivers maximum range angle
    ```

- **WH_AI_CombatMove_MaxCongetsion**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
congestion per area to slow doen
    ```

- **WH_AI_CombatMove_MaxIgnoredSlope**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
If the slope is lower that this, we don't care for it and don't cut lateral movement.
    ```

- **WH_AI_CombatMove_MaxIgnoredSlopePlayer**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
If the slope is lower that this, we don't care for it and don't cut lateral movement. Applies for NPC that targets player.
    ```

- **WH_AI_CombatMove_MinArcRange**:

  - **Default Value:** `35`

  - **Description:**

    ```text
ARC drivers minimum range angle
    ```

- **WH_AI_CombatMove_PlayerSecondaryAttackerHuntMultiplier**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Multiplier for average expected speed of getting to sweet spot (for player secondary attacker). If we are slower, hunt attack is triggered. Should be lower than WH_AI_CombatMove_PlayerSecondaryAttackerSpeedMultiplier ff we want less frequent hunt attacks
    ```

- **WH_AI_CombatMove_PlayerSecondaryAttackerOuterCircleTolerance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
How far behind the outer circle is the secondary player enemy considered close enough to slow him down globally.
    ```

- **WH_AI_CombatMove_PlayerSecondaryAttackerSpeedMultiplier**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Speed multiplier for someone attacking player, while player is attacking someone else.
    ```

- **WH_AI_CombatMove_ReactionMaxTime**:

  - **Default Value:** `400`

  - **Description:**

    ```text
Max smooth time of target position from attacker point of view (for slowest reactions)
    ```

- **WH_AI_CombatMove_ReactionMinTime**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Min smooth time of target position from attacker point of view (for fastest reactions)
    ```

- **WH_AI_CombatMove_RefreshTime**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Timeout between moves
    ```

- **WH_AI_CombatMove_RepulsionForceCapped**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Whether the total repulsion force size is capped by biggest of its individual forces.
    ```

- **WH_AI_CombatMove_RepulsionForceMaxZDifference**:

  - **Default Value:** `2`

  - **Description:**

    ```text
If two points have higher z difference that this, there is no repulsion force between them. Otherwise the force is computed in 2d.
    ```

- **WH_AI_CombatMove_RunawaySpeedForSyncGuardMinRange**:

  - **Default Value:** `3`

  - **Description:**

    ```text
When the target gets away at least this fast, we close the minimal range up to sync guard range. When he gets away slower, we interpolate the minimum.
    ```

- **WH_AI_CombatMove_SlopeEstimateDistance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
How far perpendicularly to target direction do we sample z of the terrain to determine future slope.
    ```

- **WH_AI_CombatMove_SpeedHysteresisAdditiveBonus**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
If out of allowed speeds interval (in gap), consider the distance to allowed speed limit for the current speed to be smaller by this amount then the distance to the other speed limit.
    ```

- **WH_AI_CombatMove_SpeedHysteresisMultiplicativeBonus**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
If out of allowed speeds interval (in gap), consider the distance to allowed speed limit for the current speed to be smaller by this factor then the distance to the other speed limit.
    ```

- **WH_AI_CombatMove_StopTolerance**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
tolerance radius
    ```

- **WH_AI_CombatMove_SweetSpotArea_AngleOffsetSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
angle offset smoothign
    ```

- **WH_AI_CombatMove_SweetSpotArea_ArcPeriod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
updates of arc
    ```

- **WH_AI_CombatMove_SweetSpotArea_BiasPeriod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
updates of bias
    ```

- **WH_AI_CombatMove_SweetSpotArea_CenterSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
sweet spot area center moves at this smoothing rate
    ```

- **WH_AI_CombatMove_SweetSpotArea_DebugDrawZOffset**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
z offset
    ```

- **WH_AI_CombatMove_SweetSpotArea_DistanceOffsetSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
distnace offset smoothign
    ```

- **WH_AI_CombatMove_SweetSpotArea_DorsalSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
dorsal smoothing time
    ```

- **WH_AI_CombatMove_SweetSpotArea_LateralCutMinRaycastLength**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
lateral cut raycast length is based on bias size, but this is always added to avoid too short raycasts
    ```

- **WH_AI_CombatMove_SweetSpotArea_LateralSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
lateral smoothing time
    ```

- **WH_AI_CombatMove_SweetSpotArea_MainAxisSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
main axis smoothing time
    ```

- **WH_AI_CombatMove_SweetSpotArea_MaxSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
maximum angle of the sweet spot area smoothing time
    ```

- **WH_AI_CombatMove_SweetSpotArea_MinSmoothTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
minimum angle of the sweet spot area smoothing time
    ```

- **WH_AI_CombatMove_SweetSpotArea_RangePeriod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
updates of range
    ```

- **WH_AI_CombatMove_SweetSpotArea_SSInflow**:

  - **Default Value:** `0`

  - **Description:**

    ```text
how much is a point projected into the space between ss and tracked
    ```

- **WH_AI_CombatMove_SweetSpotArea_SweetSpotDistanceRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
ratio of distance of ss from target (default 1) - can move ss closer or further from its optimal position
    ```

- **WH_AI_CombatMove_TacticalFollowersUpdate**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
how often is the range updated
    ```

- **WH_AI_CombatMove_TacticalRangeGain**:

  - **Default Value:** `1`

  - **Description:**

    ```text
how much is added around
    ```

- **WH_AI_CombatMove_TacticalSurround**:

  - **Default Value:** `5`

  - **Description:**

    ```text
how many are around
    ```

- **WH_AI_CombatMove_TargetRepulsionDampSpeedThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
If the target is getting from us at least this fast, its repulsion is completely dampened (for us). Slower speeds damp the repulsion less.
    ```

- **WH_AI_CombatMove_ToGuardFactor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
factor in the guard slowdown equation
    ```

- **WH_AI_CombatMove_TooFarLowerClamp**:

  - **Default Value:** `25.1`

  - **Description:**

    ```text
lower clamp for too far
    ```

- **WH_AI_CombatMove_TooFarToleranceFactor**:

  - **Default Value:** `5`

  - **Description:**

    ```text
How much is the path distance tolareted
    ```

- **WH_AI_CombatMove_TurnAngleBackwardsChangeCooldown**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
minimal cooldown after switching direction (forward / backward) until another switch, when turn angle movement is set (0 for no limitation, negative value for infinite)
    ```

- **WH_AI_CombatMove_TurnAngleMinSpeedToDisable**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
below this speed, turn angle is always disabled (0 for no limitation, negative value for infinite
    ```

- **WH_AI_CombatMove_TurnAngleRotationMax**:

  - **Default Value:** `1.9`

  - **Description:**

    ```text
Following turn angle rotation maximum (radians per second)
    ```

- **WH_AI_CombatMove_TurnAngleSmoothIn**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Following turn angle rotation smoothing in speed
    ```

- **WH_AI_CombatMove_TurnAngleSmoothOut**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Following turn angle rotation smoothing out speed
    ```

- **WH_AI_CombatMove_UnreachableWeaponTolerance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
How much reserve in weapon range must attacker at the mnm border have to be able to attack target oom (rather than send unreachable)
    ```

- **WH_AI_CombatSimulator_AccuracyMaxAgeMSec**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Minimum age of action to be considered eligible for for simulator accuracy measurement
    ```

- **WH_AI_CombatSimulator_AccuracyMinAgeMSec**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Minimum age of action to be considered eligible for for simulator accuracy measurement
    ```

- **WH_AI_CombatSimulator_Allow**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow the combat simulator subsystem at large.
    ```

- **WH_AI_CombatSimulator_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw of latest combat simulator decisions for nearby NPCs.
    ```

- **WH_AI_CombatSimulator_ExperimentDefinition**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of the file that defines currently running human experiment
    ```

- **WH_AI_CombatSimulator_ExperimentRepeat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 1, the current experiment is repeated endlessly.
    ```

- **WH_AI_CombatSimulator_LogPredictions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables logging of combat simulator predictions
    ```

- **WH_AI_CombatSimulator_MonitorAccuracy**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables automatic measurement of simulator accuracy
    ```

- **WH_AI_CombatSimulator_SearchesToKeep**:

  - **Default Value:** `30`

  - **Description:**

    ```text
How many searches of the CombatSimulator are kept for debugging.
    ```

- **WH_AI_CombatUsePrediction**:

  - **Default Value:** `0`

  - **Description:**

    ```text
try to predict movement
    ```

- **WH_AI_ConsoleDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Select how much will be written into the debug console - 0 means nothing, 1 means all
    ```

- **WH_AI_CrimeFollower_ApproachDistance**:

  - **Default Value:** `12`

  - **Description:**

    ```text
How far from target the followers will have maximum speed - sprint (slowing as they approach from this point on)
    ```

- **WH_AI_CrimeFollower_AreaRadius**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Radius of area where the follower is satisfied.
    ```

- **WH_AI_CrimeFollower_DistanceAssist**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Distance of follower in role 'Assist'
    ```

- **WH_AI_CrimeFollower_DistanceMain**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Distance of follower in role 'Main'
    ```

- **WH_AI_CrimeFollower_DistanceObserver**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Distance of follower in role 'Observer'
    ```

- **WH_AI_CrimeFollower_DistanceObserverMin**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Minimal distance of follower in role 'Observer', he always tries to move further away than this.
    ```

- **WH_AI_CrimeFollower_DistanceVariance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Any crime follower distance is multiplied by random number (deterministic per NPC) from interval [ 1-variance ; 1+variance ]
    ```

- **WH_AI_CrimeFollower_RepulsionOverride**:

  - **Default Value:** `1.12`

  - **Description:**

    ```text
How much the crime followers are repelled by other NPCs. For explanation of units see WH_AI_CombatMove_ForceSpeedupDistance_NPC which this cvar overrides for crime following.
    ```

- **WH_AI_DampDirectionChange**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When the force change is too small in respect to direction, this is logaritmically damped by a value
    ```

- **WH_AI_DisableAnimErrorCvar**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable anim error box if it spams (but still call Vegeta!).
    ```

- **WH_AI_DogPointManager_DrawPoints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles drawing of points of interest for dog (marking and drinking spots)
    ```

- **WH_AI_Dog_AlarmDirectionDotMinimum**:

  - **Default Value:** `0.85`

  - **Description:**

    ```text
The minimal dot product allowed between dog direction and direction towards target.The closer to 1, the more dog looks exactly at target, but the more often is has to turn.
    ```

- **WH_AI_Dog_AlarmMaxObjectiveDistance**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Maximal distance for alarm objective.
    ```

- **WH_AI_Dog_AlarmObjectiveDisobedienceDuration**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Fake alarm maximal duration (+- AlarmObjectiveDurationVariation cvar).
    ```

- **WH_AI_Dog_AlarmObjectiveDisobediencePauseDuration**:

  - **Default Value:** `180`

  - **Description:**

    ```text
Pause between fake alarm attempts.
    ```

- **WH_AI_Dog_AlarmObjectiveDuration**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Normal alarm maximal duration (+- AlarmObjectiveDurationVariation cvar).
    ```

- **WH_AI_Dog_AlarmObjectiveDurationVariation**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Variation for alarm duration (both normal and fake).
    ```

- **WH_AI_Dog_AlarmYieldingDelay**:

  - **Default Value:** `2`

  - **Description:**

    ```text
How long after alarm beginning the objective starts to yield (can be interrupted by higher priority objectives that don't normally interrupt.
    ```

- **WH_AI_Dog_AmbushNPCTrackRadius**:

  - **Default Value:** `2`

  - **Description:**

    ```text
From what distance will dog notice NPCs is ambush mode.
    ```

- **WH_AI_Dog_BarkInterval**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Minimal time interval (in seconds) between two runs of Bark objective.
    ```

- **WH_AI_Dog_BarkMaxDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximal distance at which bark objective can be started (but already with negligible priority.
    ```

- **WH_AI_Dog_BarkMinDistance**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Distance at which Barking objective has its maximal priority.
    ```

- **WH_AI_Dog_ChaseActionTimeout**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Time between two chasing in seconds.
    ```

- **WH_AI_Dog_ChaseBarkingTimeout**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Duration in seconds of barking at the action point of the chase.
    ```

- **WH_AI_Dog_ChaseMasterDogDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Maximal distance to the master where chase objective can be run.
    ```

- **WH_AI_Dog_ChaseMaxDistanceToTarget**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Max distance to the target boid where chase objective has minimal priority.
    ```

- **WH_AI_Dog_ChaseMinDistanceToTarget**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Min distance to the target boid where chase objective has maximal priority.
    ```

- **WH_AI_Dog_CourtSniffMinInterval**:

  - **Default Value:** `1200`

  - **Description:**

    ```text
Minimal time interval between two court sniffing (in seconds)
    ```

- **WH_AI_Dog_DigMaxMasterVelocity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Objective has maximum priority when velocity of master is zero and minimum when master reach the value of DigMaxMasterVelocity.
    ```

- **WH_AI_Dog_DigMaxRange**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Range in meters around the master where the point of digging is found.
    ```

- **WH_AI_Dog_DigMinInterval**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Minimal time interval between two digging (in seconds)
    ```

- **WH_AI_Dog_DogMinTeleportDistance**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Minimal distance to the master when teleport is available.
    ```

- **WH_AI_Dog_DogTeleportDistance**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Dog will teleport behind the master when it exceeds this distance.
    ```

- **WH_AI_Dog_DrinkMinInterval**:

  - **Default Value:** `90`

  - **Description:**

    ```text
Minimal time interval between two drinking (in seconds)
    ```

- **WH_AI_Dog_DrinkStopDistance**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Distance in meters to stop before water to drink.
    ```

- **WH_AI_Dog_EatingApproachingPredictionWeight**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Prediction weight to stop before reaching the meat. 0 means no prediction, 1 - means full prediction based on current speed
    ```

- **WH_AI_Dog_EatingReplanDistance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Distance in meters for re-planing movement for eating (for example the meat can move).
    ```

- **WH_AI_Dog_EatingTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Dog food eating time
    ```

- **WH_AI_Dog_EatingWalkingDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Distance in meters when a dog will go to the walking speed before reach the meat.
    ```

- **WH_AI_Dog_FetchGrabVictimDistance**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
When distance to the victim is lower than this the grab is immediate without any move to the victim.
    ```

- **WH_AI_Dog_FetchPutVictimDistance**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
When distance to the master is lower than this the put is immediate without any move to the master.
    ```

- **WH_AI_Dog_FetchPutVictimMountedDistance**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
The same meaning as FetchPutVictimDistance when master is mounted.
    ```

- **WH_AI_Dog_FetchValidVictimDistanceOffset**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Offset added to put distance to consider range around the master as valid.
    ```

- **WH_AI_Dog_FetchVictimStopDistance**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Distance in meters before victim to stop movement and start grab.
    ```

- **WH_AI_Dog_FollowActivationDogStealthDistance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
If player is doing stealth, follow will not activate if dog is closer than this.
    ```

- **WH_AI_Dog_FollowDogReactionTime**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Dog will continue with current move before new replan when master speed changes abruptly.
    ```

- **WH_AI_Dog_FollowDogTargetApproachDistance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Threshold distance to enable early replan before dog reaches target point during master movement.
    ```

- **WH_AI_Dog_FollowEmergencyFleeDistanceToFlee**:

  - **Default Value:** `100`

  - **Description:**

    ```text
When emergency flee is engaged during follow the dog will flee to this distance.
    ```

- **WH_AI_Dog_FollowEmergencyFleeDistanceToTarget**:

  - **Default Value:** `400`

  - **Description:**

    ```text
The dog will flee if target is further than this distance and tries to teleport during the movement.
    ```

- **WH_AI_Dog_FollowEmergencyRadius**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Radius for target point search when master position is not valid (master is in interior).
    ```

- **WH_AI_Dog_FollowHeelDynamicOffset**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Offset factor when master is moving when dog is planning new target point.
    ```

- **WH_AI_Dog_FollowHeelRadius**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Radius in meters where dog is trying to reach around the master.
    ```

- **WH_AI_Dog_FollowHeelRadiusWhenMounted**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Same as s_FollowHeelRadius but when master is mounted.
    ```

- **WH_AI_Dog_FollowHeelStaticOffset**:

  - **Default Value:** `-0.5`

  - **Description:**

    ```text
Offset factor when master is static when dog is planning new target point.
    ```

- **WH_AI_Dog_FollowHeelTimeout**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximal time in seconds that dog follows his master's heel until priority drops to 0.
    ```

- **WH_AI_Dog_FollowMaxDistanceMasterToTarget**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximum distance from master to last planned point. If this distance is reached, follow is replanned.
    ```

- **WH_AI_Dog_FollowMaxDogPanicDistance**:

  - **Default Value:** `60`

  - **Description:**

    ```text
At this distance is dog in maximum panic mode and will follow with absolute priority and interrupting.
    ```

- **WH_AI_Dog_FollowMinDogPanicDistance**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Start distance for dog panic. This allows dog to increase priority up to maximum of follow.
    ```

- **WH_AI_Dog_FollowMinimalNewPointDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimal distance from previous found point in meters.
    ```

- **WH_AI_Dog_FollowMovementOffsetPrediction**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Offset factor to search area when master is in movement during follow.
    ```

- **WH_AI_Dog_FollowSpeedChangeCooldown**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
How often can dog follow speed change (eliminates speed jitter)
    ```

- **WH_AI_Dog_FollowSpeedDogAheadOffset**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How far in front of master should dog try to run, when master constantly runs
    ```

- **WH_AI_Dog_FollowSpeedIncreaseDistance**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
For each this whole distance from master, the dog uses faster speed to catch master
    ```

- **WH_AI_Dog_FollowTargetPointRange**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Range in meters to find new point for movement in front of master.
    ```

- **WH_AI_Dog_FollowYiedingMasterSpeedTolerance**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
By how much slower than FastRun can master move to be considered not traveling somewhere (and thus Follow yields).
    ```

- **WH_AI_Dog_FollowYiedingMaxMasterDistance**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Maximum distance to the master that allows yielding follow objective.
    ```

- **WH_AI_Dog_FoundByMasterBarkTime**:

  - **Default Value:** `6`

  - **Description:**

    ```text
When master gets close to dog who found POI, how long should the dog remain barking.
    ```

- **WH_AI_Dog_FoundByMasterDistance**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Distance when search is considered as finish when master is near the poi.
    ```

- **WH_AI_Dog_FunMoveMaxRange**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Range in meters where new movement target is planned in front of the master.
    ```

- **WH_AI_Dog_FunMoveMinDistance**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Minimal distance from current position of the dog where new target will be found.
    ```

- **WH_AI_Dog_FunMoveMinInterval**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Interval between automatic running of fun move objective.
    ```

- **WH_AI_Dog_FunMoveYieldingMasterDistance**:

  - **Default Value:** `6`

  - **Description:**

    ```text
When master is further than this distance the objective will be yielding immediately.
    ```

- **WH_AI_Dog_FunOnPointMaxDistance**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Maximal distance of drink point to start objective (in meters). The lower the distance, the more likely the dog will mark.
    ```

- **WH_AI_Dog_FunOnTargetPointUpdateTimeout**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Time between FunOnTarget objectives point updates (in seconds)
    ```

- **WH_AI_Dog_GrowlDuration**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Duration how long will dog growl after trigger growl component.
    ```

- **WH_AI_Dog_HuntCapacityReplenishRate**:

  - **Default Value:** `240`

  - **Description:**

    ```text
Coefficient to replenish capacity over time.
    ```

- **WH_AI_Dog_HuntMaximumCapacity**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximum hunting capacity.
    ```

- **WH_AI_Dog_HuntPeriod**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Period of hunt objective when dog is hunting automatically.
    ```

- **WH_AI_Dog_HuntWaitForMasterTermDist**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Min distance from master to end waiting for master after hunt.
    ```

- **WH_AI_Dog_HuntWaitForMasterTimeout**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Max time for waiting for master after hunt.
    ```

- **WH_AI_Dog_MarkMinInterval**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Minimal time interval between two markings (in seconds)
    ```

- **WH_AI_Dog_MaxCombatBorder**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximal distance for combat priority border.
    ```

- **WH_AI_Dog_MaxHuntObjectiveDistance**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Max distance for lowest priority computation during hunting.
    ```

- **WH_AI_Dog_MaxHuntSpeed**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Maximal speed usable in hunt in m/s.
    ```

- **WH_AI_Dog_MaxMildAlarmDistance**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Maximal distance for mild alarm.
    ```

- **WH_AI_Dog_MaxPointDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximal distance of SO point to start FunOnSo objective (in meters). The higher the distance, the more likely the dog will do the behavior on point.
    ```

- **WH_AI_Dog_MaxRiderFollowDistance**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximal distance to master for this objective to be active. When dog's distantion is greather than this, the objective will yield, FollowObjective will kick in. FollowObjective then has all the custom logic for teleports and stuff.
    ```

- **WH_AI_Dog_OwnerTrackerSamplingCacheSize**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Sets the size of the recent owner position cache.
    ```

- **WH_AI_Dog_OwnerTrackerSamplingInterval**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Sets the interval of insertion into the recent owner position cache. Smoothing of owner's velocity isbased on the oldest sample.
    ```

- **WH_AI_Dog_OwnerTrackerSmoothFalloffDelay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Time when moving for which gradual smooth time falloff to zero is delayed
    ```

- **WH_AI_Dog_OwnerTrackerSmoothTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximum smooth time (see SmoothCD) for owner's position, rotation and velocity
    ```

- **WH_AI_Dog_PathsEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If true, dog uses navigation paths for longer movement.
    ```

- **WH_AI_Dog_RunawayHideDistance**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Distance in meters when dog is hidden in runaway mode.
    ```

- **WH_AI_Dog_SearchFailedTimeout**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Objective timeout after objective failed (player did not follow the dog).
    ```

- **WH_AI_Dog_SearchFoundBarkTime**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Length of barking when item is found.
    ```

- **WH_AI_Dog_SearchMaxAttempts**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximum number of attempts when trying to find a random waypoint in range
    ```

- **WH_AI_Dog_SearchMaxDistanceToStart**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximum distance from master to start new tracking.
    ```

- **WH_AI_Dog_SearchMaxRange**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximum range to find waypoints from points on path to target
    ```

- **WH_AI_Dog_SearchPOIAproxSize**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Distance before POI where dog stop and begin barking.
    ```

- **WH_AI_Dog_SearchPOIRadiusOffset**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Distance is used to offset poi radius to stop dog searching.
    ```

- **WH_AI_Dog_SearchRecentTimeout**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Time after which the same tracking target can be chosen again.
    ```

- **WH_AI_Dog_SearchStashAproxSizeOffset**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Offset distance before stash where dog stop. The real distance is derived from the size of the stash.
    ```

- **WH_AI_Dog_SearchSuccessfulTimeout**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Objective timeout after objective finished
    ```

- **WH_AI_Dog_SearchWaitDistance**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Distance after which the dog will play waiting animation.
    ```

- **WH_AI_Dog_SearchWaitingTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Length of searching without moving animation.
    ```

- **WH_AI_Dog_ShakeoutInterval**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Duration in seconds between two shake out actions.
    ```

- **WH_AI_Dog_ShakeoutMinimumWaterDepth**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Minimum depth of water that dog must walk through to be marked as wet.
    ```

- **WH_AI_Dog_ShakeoutRainThreshold**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Threshold rain intensity when the objective can be planned.
    ```

- **WH_AI_Dog_ShakeoutTimeAfterRainStart**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Time after start raining when shaking is plannable.
    ```

- **WH_AI_Dog_SniffMinInterval**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Minimal time interval between two point sniffing (in seconds)
    ```

- **WH_AI_Dog_SniffOffset**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Offset of the sniff animation. It can be a bit more further away.
    ```

- **WH_AI_Dog_SniffStopDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stopping distance from point when sniffing. Dog will not go all the way to the end of the path, but will play the animation early.
    ```

- **WH_AI_Dog_StealthInertiaTime**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Stealth state will be held this long after player stops crouching.
    ```

- **WH_AI_Dog_WaitActivityVariation**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Variation part of waiting activity duration.
    ```

- **WH_AI_Dog_WaitAvoidanceAngle**:

  - **Default Value:** `0.97`

  - **Description:**

    ```text
Angle tolerance for NPC direction and the position of the dog.
    ```

- **WH_AI_Dog_WaitAvoidanceDistance**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Distance before dog to start avoidance movement when NPC is at maximum speed given by s_WaitAvoidanceMaxNPCVel.
    ```

- **WH_AI_Dog_WaitAvoidanceDogRotationAngle**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Angle tolerance for limiting sector based on dog rotation. The system prefers direction of the movement given by rotation of the dog.
    ```

- **WH_AI_Dog_WaitAvoidanceForbiddenAngle**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Angle tolerance limiting in direction of movement of the target NPC. The dog tries to move the the sides.
    ```

- **WH_AI_Dog_WaitAvoidanceMaxDistanceFromOrigPos**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Maximum distance in meters of the movement from the original position when wait started.
    ```

- **WH_AI_Dog_WaitAvoidanceMaxFindPointAttemps**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Maximum attempts in find method during search for avoidance target point.
    ```

- **WH_AI_Dog_WaitAvoidanceMaxNPCVel**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Maximum speed of NPCs. It is constant for determining velocity factor and distance before dog to start avoidance movement.
    ```

- **WH_AI_Dog_WaitAvoidanceMinMoveDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimum distance for avoidance movement.
    ```

- **WH_AI_Dog_WaitAvoidanceMoveDistance**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Typical distance for avoidance movement.
    ```

- **WH_AI_Dog_WaitForsakenDistance**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Master must be at least this far away (or at dog inaccessible position) for dog to be considered forsaken
    ```

- **WH_AI_Dog_WaitForsakenMinTime**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Dog must be waiting for at leas this long to be considered forsaken.
    ```

- **WH_AI_Dog_WaitProrityMaxMasterSpeed**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Maximum master speed when priority of wait is minimal.
    ```

- **WH_AI_Dog_WaitYieldingOtherTimeout**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Minimal time before the objective can be interrupted by others.
    ```

- **WH_AI_Dog_WaterTubDrinkingMinInterval**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Minimal time interval between two water tub drinking (in seconds)
    ```

- **WH_AI_DrawPredefinedPath**:

  - **Default Value:** `0`

  - **Description:**

    ```text
WH_AI_DrawPredefinedPath
    ```

- **WH_AI_EmergencyThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Emergency threshold for NPC
    ```

- **WH_AI_FWD_WarnIfMissing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If a variable is used and it is not declared in a current tree (it is expected to be in a parent), it should be forward declared. Set this to 1 to show warnings if this forward declaration is missing.
    ```

- **WH_AI_FaderBarrier_TimeoutDuration**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Timeout duration of ReadinessObserver in FaderBarrier node
    ```

- **WH_AI_FormationApproachDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
How far from their spot are formation members considered approaching (closing distance asap).
    ```

- **WH_AI_FormationApproachDistanceHorse**:

  - **Default Value:** `40`

  - **Description:**

    ```text
How far from their spot are formation members considered approaching (closing distance asap) - specialization for horses.
    ```

- **WH_AI_FormationTurnMaxDistance**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Maximal distance from path point to start smoothed turn.
    ```

- **WH_AI_FormationTurnSmoothingActive**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If MoveHistory formation mode should use smoothing.
    ```

- **WH_AI_Formation_StopPredictionMaxLogicalSpeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The highest logical speed allowed during stopping.
    ```

- **WH_AI_Formation_StopPredictionTimeReserve**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
How much in advance (in seconds) should followers react to leader stop.
    ```

- **WH_AI_GraphSearchSteps**:

  - **Default Value:** `65535`

  - **Description:**

    ```text
Number of steps done by the graph search per update per graph search, -1 means max
    ```

- **WH_AI_LOD_Areas**:

  - **Default Value:** `2`

  - **Description:**

    ```text
0 - only distance is used for NPC LOD resolution, 1 - filtered by LOD areas, 2 - filtered by Visibility areas
    ```

- **WH_AI_LOD_ForceFullPriorityUpdateObserverPosChangeThreshold**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Threshold of observer position change to trigger full update of LOD agents' LOD state
    ```

- **WH_AI_LOD_GroupInterval**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Maximal time in miliseconds between combat LOD group refreshes (actualizations of their LOD status).
    ```

- **WH_AI_LOD_HysteresisMultiplierDetail**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
When comparing distances to select closest NPCs to be in Detail, the distance of NPCs already in detail is multiplied by this number to achieve hysteresis (should be lower than 1).
    ```

- **WH_AI_LOD_HysteresisMultiplierMonsterLOD**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
When comparing distances to select the furthest NPCs to be in MonsterLOD, the distance of NPCs already in MonsteLOD is multiplied by this number to achieve hysteresis (should be higher than 1).
    ```

- **WH_AI_LOD_MLBehaviorTimeout**:

  - **Default Value:** `360000`

  - **Description:**

    ```text
How long does one cycle of behavior take, when in MonsterLOD. Movement is extra.
    ```

- **WH_AI_LOD_MLBehaviorTimeoutVariation**:

  - **Default Value:** `240000`

  - **Description:**

    ```text
The variation in duration of behavior's one cycle
    ```

- **WH_AI_LOD_MLPostponedTeleportPlayerDistance**:

  - **Default Value:** `70`

  - **Description:**

    ```text
If the behavior has ML flag that postpones its ML teleport when the destination is visible, it is not postponed if player is further than this distance.
    ```

- **WH_AI_LOD_MLUseFakeMovementMinimalDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
The minimal distance in which the fake movement is used in monster LOD
    ```

- **WH_AI_LOD_MLUseFakeMovementMinimalDistanceSkipTime**:

  - **Default Value:** `20`

  - **Description:**

    ```text
The minimal distance in which the fake movement is used in monster LOD. Use in skip time
    ```

- **WH_AI_LOD_MaxCountDetail**:

  - **Default Value:** `70`

  - **Description:**

    ```text
The maximal amount of NPCs in Detail.
    ```

- **WH_AI_LOD_MaxCountDetailBuffer**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Temporarily this amount of NPCs can be switching to Detail even if NPCs that release budget for them haven't finished switching out of Detail yet.
    ```

- **WH_AI_LOD_MaxCountLOD**:

  - **Default Value:** `400`

  - **Description:**

    ```text
The maximal amount of NPCs that are in LOD (NPCs in Detail don't count to this limit, their budget is separate).
    ```

- **WH_AI_LOD_MaxCountLODBuffer**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Temporarily this amount of NPCs can be switching to LOD (from ML) even if NPCs that release budget for them haven't finished switching to ML yet.
    ```

- **WH_AI_LOD_MaxCountLODUnstealableByMLWakeUp**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If there are too many MonsterLOD wakeUps, they start to overuse lodBudget instead of taking all lodBudget. How much lodBudget remains untouched is defined by this cvar (shouldn't be bigger than the lodBudget: WH_AI_LOD_MaxCountLOD).
    ```

- **WH_AI_LOD_MaxDetailDistance**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Maximal distance at which npc is not yet switched from Detail to LOD (for switching the other way multiply it with WH_AI_LOD_HysteresisMultiplierDetail)
    ```

- **WH_AI_LOD_MaxNonMLDistance**:

  - **Default Value:** `600`

  - **Description:**

    ```text
The maximal searched distance for NPCs that should not be in MonsterLOD. The lower the value, the better the performance
    ```

- **WH_AI_LOD_MaxNonMLDistanceHysteresisMultiplier**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Hysteresis ratio for WH_AI_LOD_MaxNonMLDistance (see its description). Note that apart from this ration, hysteresis distance is additionally increased by grid imprecision.
    ```

- **WH_AI_LOD_MaxNonMLDistanceSkipTime**:

  - **Default Value:** `50`

  - **Description:**

    ```text
The maximal searched distance for NPCs that should not be in MonsterLOD the is used in skip time
    ```

- **WH_AI_LOD_MonsterLODPerception_MaxNPCsPerBatch**:

  - **Default Value:** `3`

  - **Description:**

    ```text
How many NPCs can receive the perception message in MonsterLOD from one specific volume in one of its check intervals [s]. Negative number means all NPCs in radius receive the message, 0 disables the sending of messages altogether.
    ```

- **WH_AI_LOD_MonsterLODPerception_MessageInterval**:

  - **Default Value:** `9`

  - **Description:**

    ```text
How often one perceptible volume in MonsterLOD checks its surroundings and send perception messages [s]
    ```

- **WH_AI_LOD_MonsterLODPerception_MessageNPCCooldown**:

  - **Default Value:** `300`

  - **Description:**

    ```text
How often can one specific NPC receive MonsterLOD perception message from one specific volume [s]
    ```

- **WH_AI_LOD_MonsterLODPerception_MessageRadius**:

  - **Default Value:** `10`

  - **Description:**

    ```text
How far from the perceptible volume can be the NPC that receives MonsterLOD perception message [m]
    ```

- **WH_AI_LOD_SOWakeupDistanceMultiplier**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Multiplier for distance for determining when to run OnMonsterLODWakeup tree on smart objects. To call it sooner (as player approaches) than surrounding NPCs wake up, make the value lower than 1.
    ```

- **WH_AI_LinkArrowLength**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Length of an arrow (default: 0.4f)
    ```

- **WH_AI_LinkArrowWidth**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
What is the link's arrow size (default: 0.2f)
    ```

- **WH_AI_LinkGizmoArrowHeadDistance**:

  - **Default Value:** `3`

  - **Description:**

    ```text
What is the distance between arrowheads (default: 3.0f)
    ```

- **WH_AI_LinkSparkleVisibility**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the visibility of sparkles - 0 none 
 1 only when drawing the link 
 2 always visible
    ```

- **WH_AI_LinkSpeed**:

  - **Default Value:** `5`

  - **Description:**

    ```text
What is the link's arrow speed (default: 5.0f)
    ```

- **WH_AI_LinkVisibility**:

  - **Default Value:** `8`

  - **Description:**

    ```text
How far are the link shown
    ```

- **WH_AI_LogLevel**:

  - **Default Value:** `1`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
This draws various debug info from AI module
    ```

- **WH_AI_MoveToAnimationThreshold**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
How far in metres should the movement start to trigger the movenet from animation
    ```

- **WH_AI_NotNearPlayerAheadTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
default not near player ahead detection time [s]
    ```

- **WH_AI_NotNearPlayerRadius**:

  - **Default Value:** `50`

  - **Description:**

    ```text
default radius for not near player detection [m]
    ```

- **WH_AI_ParallelUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables AI parallel update optimalization
    ```

- **WH_AI_PassiveWaiting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Passive waiting on/off
    ```

- **WH_AI_Path_AllowPathConnectionsEnds**:

  - **Default Value:** `1e+07`

  - **Description:**

    ```text
How many connections can be created on designed path ends. Minimal 1
    ```

- **WH_AI_Path_AllowPathConnectionsMiddle**:

  - **Default Value:** `1e+07`

  - **Description:**

    ```text
How many connections can be created on designed path middle points. Minimal 1
    ```

- **WH_AI_ReadinessWait_TimeoutDuration**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Timeout duration of ReadinessObserver in ReadinessWait node
    ```

- **WH_AI_RecentlySkirmishMaxTime**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Max time for RecenltSkirmished node
    ```

- **WH_AI_StartingForceDelay**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Starting is delayed by this time, if exactly WH_AI_StartingForceThreshold is applied. Larger force lowers the delay.
    ```

- **WH_AI_StartingForceDelayVariation**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Random variation for WH_AI_StartingForceDelay (up to this value is added or substracted).
    ```

- **WH_AI_StartingForceLowestSpeedRatio**:

  - **Default Value:** `0.83`

  - **Description:**

    ```text
If the follower isn't moving and its force is higher then than this fraction of its lowest non-0 speed, it starts moving (note that there is also delay).
    ```

- **WH_AI_StoppingForceLowestSpeedRatio**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
If the force affecting follower is smaller than this fraction of its lowest non-0 speed, it is ignored and follower stops.
    ```

- **WH_AI_TargetFollower_OutOfMNMRaycastBudget**:

  - **Default Value:** `3`

  - **Description:**

    ```text
maximum number of consecutive raycasts in targetFollower MNM check
    ```

- **WH_AI_TargetTracker_EstimateCount**:

  - **Default Value:** `10`

  - **Description:**

    ```text
How many samples are kept during target tracking for possible future estimation.
    ```

- **WH_AI_TargetTracker_EstimateInterval**:

  - **Default Value:** `300`

  - **Description:**

    ```text
How often (in ms) should speed estimation sample be taken.
    ```

- **WH_AI_TargetTracker_EstimateMinimalSpeed**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimal estimated speed of target that is not visible.
    ```

- **WH_AI_ZeroForceOnMNMLimiter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if direction hits an obstacle, zero the speed
    ```

- **WH_AreaNotifier_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This draws the grid of AreaNotifier
    ```

- **WH_Audio_AudioModel**:

  - **Default Value:** `2`

  - **Description:**

    ```text
If set to 1 that means a box model 
 If set to 2 that means a sphere model.
    ```

- **WH_Audio_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 0 then no debug information is shown, 
 if set to 1 simple debug information is shown...
    ```

- **WH_Audio_OverrideCrySoundPerceptionMechanism**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 0 then no override happens, 
 if set to 1 the override is only partial (the sound data is transmitted to the CryEngine subsystem), 
 2 means the override is complete and no sound info reaches the Cry subsystem
    ```

- **WH_BubbleLOD_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This draws the BubbleLOD, 0 no draw at all, 1 draw proximity capsules, choices more coming soon
    ```

- **WH_BubbleLOD_Enable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the Bubble LOD, currently WIP
    ```

- **WH_BubbleLOD_NumOfThreads**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Number of threads, currently WIP
    ```

- **WH_BubbleLOD_Proximity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Proximity mode, currently WIP, 1-CircQ, 2-GridAndAdjac, 3-AABBEach
    ```

- **WH_BubbleLOD_UseThreads**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Usage of threads, currently WIP
    ```

- **WH_Enable_FileProfiling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Recording profiles with substring XGenAI and write them to disk as csv files
    ```

- **WH_MNM_TileAdjecancyTolerance**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Tolerance used to merge triangles in neighbouring tiles. Default value 0.02 is used in Cry Engine.
    ```

- **WH_MNM_TileBorderSize**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Controls the size of extra margin added to the tile in MNM. The value is used as the multiplier of tile size to determine the margin size (use 2 as the max value). The margin will always be as big as the default value == agent radius
    ```

- **WH_MNM_TriangulateSurfaceAlignHeuristic**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Turns on/off the heuristic that prefers triangulation using lines aligned with the surface. 0 - heuristic off, 1 - heuristic on
    ```

- **WH_Move_AllowOffMeshNavigation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the movement off the nav mesh.
    ```

- **WH_Move_AllowTeleport**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow teleport when move node can't navigate the NPC
    ```

- **WH_Move_OffMeshStuckDetectionMultiplier**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Multiplier for the predicted threshold for the off mash stuck detection.
    ```

- **WH_Move_OffMesh_HorizontalSearchThreshold**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Threshold limiting the radius of the search area for the nearest point inside the nav mesh.
    ```

- **WH_Move_OffMesh_VerticalSearchThreshold**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Threshold limiting the height of the search area for the nearest point inside the nav mesh.
    ```

- **WH_Positioning_Allow**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows/disallows the positioning system. Requires restarting game to take effect.
    ```

- **WH_Positioning_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This draws debug info for situation positioning
    ```

- **WH_Sensations_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 0 then no debug information about sensations is shown, 
 if set to 1 simple debug information is shown...
    ```

- **WH_Situations_Allow**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows/disallows the situation system as a whole. Requires restarting game to take effect.
    ```

- **WH_Situations_CompareSearchAlgs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If on, all available situation search algorithms are invoked for every situation search allowing to compare speed. Makes sense only if WH_Situations_LogSearchStats = 1
    ```

- **WH_Situations_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This draws the situation system statistics. If WH_Situations_Allow is not set, it has no effect
    ```

- **WH_Situations_LogSearchStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log situation search statistics to a file.
    ```

- **WH_Situations_StartNew**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Lets the situation system start new situations. If WH_Situations_Allow is not set, it has no effect.
    ```

- **WH_VisualMap_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This shows the debug draw for visual maps
 0 nothing is drawn, 
 (bitwise) 1 << 1 only sensor arcs are drawn, 1 << 2 visibility results (arrows) are drawn
    ```

- **WH_VisualMap_Enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable visual map
    ```

- **WH_VisualMap_ProcessingLimit**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
The processing limit per one update on visual map -1 means infinite
    ```

- **WH_VisualMap_TrackFrameCount**:

  - **Default Value:** `60`

  - **Description:**

    ```text
How many frames are stored for visual map debug
    ```

- **WH_VisualMap_UpdatePeriod**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
How often the visual map updates itself (milliseconds), you have to restart the game (just game, not the whole editor) to enforce the change.
    ```

- **a_poseAlignerAnimDrivenBlend**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
PoseAligner will use weight bones to determine blend. CVAR defines the distance between target and blend bone at which alignment will completely turn off
    ```

- **a_poseAlignerBipedRaycasLength**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **a_poseAlignerDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable PoseAligner debug drawing.
    ```

- **a_poseAlignerEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable PoseAligner.
    ```

- **a_poseAlignerForceLock**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner force lock.
    ```

- **a_poseAlignerForceNoIK**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner will not use IK
    ```

- **a_poseAlignerForceNoIntersections**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner forces no intersections, might make animation more 'poppy'.
    ```

- **a_poseAlignerForceNoRootOffset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner forces no root offset.
    ```

- **a_poseAlignerForceNoRootRotation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner forces no root rotation.
    ```

- **a_poseAlignerForceTargetSmoothing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner forces smoothing of target position and normal.
    ```

- **a_poseAlignerForceWeightOne**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PoseAligner forces targeting weight to always be one.
    ```

- **a_poseAlignerQuadrupleRaycasLength**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text

    ```

- **aa_maxDist**:

  - **Default Value:** `10`

  - **Description:**

    ```text
max lock distance
    ```

- **ac_ColliderModeAI**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force override collider mode for all AI.
    ```

- **ac_ColliderModePlayer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force override collider mode for all players.
    ```

- **ac_DebugFilter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug specified entity name only.
    ```

- **ac_debugAnimEffects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Print log messages when anim events spawn effects.
    ```

- **ac_debugAnimTarget**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display debug history graphs of anim target correction.
    ```

- **ac_debugColliderMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display filtered and requested collider modes.
    ```

- **ac_debugEntityParams**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display entity params graphs
    ```

- **ac_debugLeaning**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug procedural leaning.
    ```

- **ac_debugLocations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug render entity location.
    ```

- **ac_debugLocationsGraphs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display debug history graphs of entity locations and movement.
    ```

- **ac_debugMotionParams**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display graph of motion parameters.
    ```

- **ac_debugMovementControlMethods**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display movement control methods.
    ```

- **ac_debugText**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display entity/animation location/movement values, etc.
    ```

- **ac_debugXXXValues**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display some values temporarily hooked into temp history graphs.
    ```

- **ac_disableLivingVsLivingCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable collisions between living entities. Must reload level (or update collider mode otherwise) to work.
    ```

- **ac_disableLivingVsRigidCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable collisions between living and rigid entities. Must reload level (or update collider mode otherwise) to work.
    ```

- **ac_disableSlidingContactEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force disable sliding contact events.
    ```

- **ac_enableExtraSolidCollider**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable extra solid collider (for non-pushable characters).
    ```

- **ac_enableProceduralLeaning**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable procedural leaning (disabled asset leaning and curving slowdown).
    ```

- **ac_entityAnimClamp**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Forces the entity movement to be limited by animation.
    ```

- **ac_forceSimpleMovement**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force enable simplified movement (not visible, dedicated server, etc).
    ```

- **ac_frametime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display a graph of the frametime.
    ```

- **ac_groundAlignMaxFramesWithoutUpdate**:

  - **Default Value:** `30`

  - **Description:**

    ```text

    ```

- **ac_groundAlignMaxFullUpdatesPerFrame**:

  - **Default Value:** `10`

  - **Description:**

    ```text

    ```

- **ac_groundAlignTurnOffWhenNotMoving**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **ac_groundAlignUpdateAllDistance**:

  - **Default Value:** `30`

  - **Description:**

    ```text

    ```

- **ac_groundAlignUpdateNoneDistance**:

  - **Default Value:** `100`

  - **Description:**

    ```text

    ```

- **ac_movementControlMethodFilter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force reinterprets Decoupled/CatchUp MCM specified by AG as Entity MCM (H/V overrides override this).
    ```

- **ac_movementControlMethodHor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Overrides the horizontal movement control method specified by AG (overrides filter).
    ```

- **ac_movementControlMethodVer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Overrides the vertical movement control method specified by AG (overrides filter).
    ```

- **ac_templateMCMs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use MCMs from AG state templates instead of AG state headers.
    ```

- **ac_useMovementPrediction**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When using animation driven motion sample animation for the root one frame ahead to take into account 1 frame of physics delay
    ```

- **ac_useQueuedRotation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Instead of applying rotation directly, queue it until the beginning of the next frame (synchronizes rotation with translation coming from asynchronous physics)
    ```

- **ag_debugExactPos**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable exact positioning debugger
    ```

- **ag_defaultAIStance**:

  - **Default Value:** `combat`

  - **Description:**

    ```text
Specifies default stance name for AI
    ```

- **ag_travelAngleSmoothing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables travel angle smoothing.
    ```

- **ag_travelSpeedSmoothing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables travel speed smoothing.
    ```

- **ag_turnAngleSmoothing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables turn angle smoothing.
    ```

- **ag_turnSpeedParamScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scale the turn speed animation param (used for leaning)
    ```

- **ag_turnSpeedSmoothing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables turn speed smoothing.
    ```

- **ai_AdjustPathsAroundDynamicObstacles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set to 1/0 to enable/disable AI path adjustment around dynamic obstacles
    ```

- **ai_AgentStatsDist**:

  - **Default Value:** `150`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
If turned off, all agents will miss all the time.
    ```

- **ai_AllowedToHitPlayer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If turned off, all agents will miss the player all the time.
    ```

- **ai_AmbientFireEnable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable ambient fire system.
    ```

- **ai_AmbientFireQuota**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Number of units allowed to hit the player at a time.
    ```

- **ai_AmbientFireUpdateInterval**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Ambient fire update interval. Controls how often puppet's ambient fire status is updated.
    ```

- **ai_AttemptStraightPath**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles AI attempting a simple straight path when possible.
Default is 1 (on).
    ```

- **ai_BannedNavSoTime**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Time indicating how long invalid navsos should be banned.
    ```

- **ai_BeautifyPath**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles AI optimisation of the generated path.
Usage: ai_BeautifyPath [0/1]
Default is 1 (on). Optimisation is on by default. Set to 0 to
disable path optimisation (AI uses non-optimised path).
    ```

- **ai_BubbleSystemAllowPrototypeDialogBubbles**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabling the visualization of the bubbles created to prototype AI dialogs
    ```

- **ai_BubblesSystem**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables bubble notifier.
    ```

- **ai_BubblesSystemAlertnessFilter**:

  - **Default Value:** `7`

  - **Description:**

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

  - **Default Value:** `15`

  - **Description:**

    ```text
Specifies the decay time for the bubbles drawn on screen.
    ```

- **ai_BubblesSystemFontSize**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Font size for the BubblesSystem.
    ```

- **ai_BubblesSystemUseDepthTest**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies if the BubblesSystem should use the depth test to show the messages inside the 3D world.
    ```

- **ai_BurstWhileMovingDestinationRange**:

  - **Default Value:** `2`

  - **Description:**

    ```text
When using FIREMODE_BURST_WHILE_MOVING - only fire when within this distance to the destination.
    ```

- **ai_CheckWalkabilityOptimalSectionLength**:

  - **Default Value:** `1.75`

  - **Description:**

    ```text
The maximum segment length used by CheckWalkabilityFast when querying for world geometry from physics.
Default: 1.75

    ```

- **ai_CodeCoverageMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set current mode of Code Coverage system.
0 = off, 1 = smart, 2 = silent, 3 = force
    ```

- **ai_CollisionAvoidanceAgentExtraFat**:

  - **Default Value:** `0.075`

  - **Description:**

    ```text
Extra radius to use in Collision Avoidance calculations as a buffer.
    ```

- **ai_CollisionAvoidanceAgentTimeHorizon**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Time horizon used to calculate an agent's collision free velocity against other agents.
    ```

- **ai_CollisionAvoidanceClampVelocitiesWithNavigationMesh**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enable/Disable the clamping of the speed resulting from ORCA with the navigation mesh
		2 - means disabling avoidance for agents that are not on nav mesh
    ```

- **ai_CollisionAvoidanceEnableRadiusIncrement**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable agents adding an increment to their collision avoidance radius when moving.
    ```

- **ai_CollisionAvoidanceMinSpeed**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Minimum speed allowed to be used by ORCA.
    ```

- **ai_CollisionAvoidanceObstacleTimeHorizon**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Time horizon used to calculate an agent's collision free velocity against static obstacles.
    ```

- **ai_CollisionAvoidancePathEndCutoffRange**:

  - **Default Value:** `1.3`

  - **Description:**

    ```text
Distance from it's current path end for an agent to stop avoiding obstacles. Other actors will still avoid the agent.
    ```

- **ai_CollisionAvoidanceRadiusIncrementDecreaseRate**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Decrease rate of the collision avoidance radius increment.
    ```

- **ai_CollisionAvoidanceRadiusIncrementIncreaseRate**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Increase rate of the collision avoidance radius increment.
    ```

- **ai_CollisionAvoidanceRange**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Range for collision avoidance.
    ```

- **ai_CollisionAvoidanceSmartObjectCutoffRange**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Distance from it's next smart object for an agent to stop avoiding obstacles. Other actors will still avoid the agent.
    ```

- **ai_CollisionAvoidanceTargetCutoffRange**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Distance from it's current target for an agent to stop avoiding obstacles. Other actors will still avoid the agent.
    ```

- **ai_CollisionAvoidanceTimestep**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
TimeStep used to calculate an agent's collision free velocity.
    ```

- **ai_CollisionAvoidanceUpdateVelocities**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable agents updating their velocities after processing collision avoidance.
    ```

- **ai_CommunicationForceTestVoicePack**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces all the AI agents to use a test voice pack. The test voice pack will have the specified name in the archetype or in the entity and the system will replace the _XX number with the _test string
    ```

- **ai_CommunicationManagerHeighThresholdForTargetPosition**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Defines the threshold used to detect if the target is above or below the entity that wants to play a communication.

    ```

- **ai_CompatibilityMode**:

  - **Default Value:** ``

  - **Description:**

    ```text
Set AI features to behave in earlier milestones - please use sparingly
    ```

- **ai_CoolMissesBoxHeight**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Vertical size of the box to collect potential cool objects to shoot at.
    ```

- **ai_CoolMissesBoxSize**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Horizontal size of the box to collect potential cool objects to shoot at.
    ```

- **ai_CoolMissesCooldown**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Global time between potential cool misses.
    ```

- **ai_CoolMissesMaxLightweightEntityMass**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximum mass of a non-destroyable, non-deformable, non-breakable rigid body entity to be considered.
    ```

- **ai_CoolMissesMinMissDistance**:

  - **Default Value:** `7.5`

  - **Description:**

    ```text
Maximum distance to go away from the player.
    ```

- **ai_CoolMissesProbability**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Agents' chance to perform a cool miss!
    ```

- **ai_CoverExactPositioning**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables using exact positioning for arriving at cover.
Usage: ai_CoverPredictTarget [0/1]
Default x is 0 (off)
0 - disable
1 - enable

    ```

- **ai_CoverMaxEyeCount**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Max numbers of observers to consider when selecting cover.
Usage: ai_CoverMaxEyeCount <x>

    ```

- **ai_CoverPredictTarget**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables simple cover system target location prediction.
Usage: ai_CoverPredictTarget x
Default x is 0.0 (off)
x - how many seconds to look ahead

    ```

- **ai_CoverSpacing**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Minimum spacing between agents when choosing cover.
Usage: ai_CoverPredictTarget <x>
x - Spacing width in meters

    ```

- **ai_CoverSystem**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the cover system.
Usage: ai_CoverSystem [0/1]
Default is 1 (on)
0 - off - use anchors
1 - use offline cover surfaces

    ```

- **ai_CrouchVisibleRange**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Max perception range for AI when player is crouching
    ```

- **ai_CrowdControlInPathfind**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles AI using crowd control in pathfinding.
Usage: ai_CrowdControlInPathfind [0/1]
Default is 0 (off).
    ```

- **ai_DebugBehaviorSelection**:

  - **Default Value:** ``

  - **Description:**

    ```text
Display behavior selection information for a specific agent
Usage: ai_DebugBehaviorSelection <name>
    ```

- **ai_DebugCheckWalkability**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles output of check walkability information, as well as allowing the use of tagpoints named CheckWalkabilityTestStart/End to trigger a test each update. [default 0 is off]
    ```

- **ai_DebugCheckWalkabilityRadius**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Radius to use for the per-frame debug CheckWalkability test.
    ```

- **ai_DebugCollisionAvoidanceForceSpeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force agents velocity to it's current direction times the specified value.
    ```

- **ai_DebugDraw**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Toggles the AI debugging view.
Usage: ai_DebugDraw [-1/0/1]
Default is 0 (minimal), value -1 will draw nothing, value 1 displays AI rays and targets 
and enables the view for other AI debugging tools.
    ```

- **ai_DebugDrawAStarOpenList**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the A* open list for the specified AI agent.
Usage: ai_DebugDrawAStarOpenList [AI agent name]
Default is 0, which disables the debug draw. Requires ai_DebugPathfinding=1 to be activated.
    ```

- **ai_DebugDrawAStarOpenListTime**:

  - **Default Value:** `10`

  - **Description:**

    ```text
The amount of time to draw the A* open list.
    ```

- **ai_DebugDrawAdaptiveUrgency**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables drawing the adaptive movement urgency.
    ```

- **ai_DebugDrawAmbientFire**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays fire quota on puppets.
    ```

- **ai_DebugDrawArrowLabelsVisibilityDistance**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Provided ai_DebugDraw > 0, if the camera is closer to an agent than this distance,
agent arrows for look/fire/move arrows will have labels.
Usage: ai_DebugDrawArrowLabelsVisibilityDistance [distance]
Default is 50. 

    ```

- **ai_DebugDrawBannedNavsos**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles drawing banned navsos [default 0 is off]
    ```

- **ai_DebugDrawCollisionAvoidance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable debugging obstacle avoidance system.
    ```

- **ai_DebugDrawCollisionAvoidanceAgentName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of the agent to draw collision avoidance data for.
    ```

- **ai_DebugDrawCollisionAvoidanceAgentsRelativeTo**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of the agent/obstacle that provides context for drawing agents positions and radii. Use to correctly display how agent acts with regards to this agent/obstacle
    ```

- **ai_DebugDrawCollisionAvoidanceCandidateVelocities**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw of candidates velocities for collision avoidance debug agent
    ```

- **ai_DebugDrawCollisionAvoidanceObstaclesForAgent**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw of obstacles only for agent selected ai_DebugDrawCollisionAvoidanceAgentName. The draw is relative to agent and correctly displays radii and positions adjusted for travel
    ```

- **ai_DebugDrawCommunication**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays communication debug information.
Usage: ai_DebugDrawCommunication [0/1/2]
 0 - disabled. (default).
 1 - draw playing and queued comms.
 2 - draw debug history for each entity.
 5 - extended debugging (to log) 6 - outputs info about each line played
    ```

- **ai_DebugDrawCommunicationHistoryDepth**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Tweaks how many historical entries are displayed per entity.
Usage: ai_DebugDrawCommunicationHistoryDepth [depth]
    ```

- **ai_DebugDrawCoolMisses**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles displaying the cool miss locations around the player.
Usage: ai_DebugDrawCoolMisses [0/1]
    ```

- **ai_DebugDrawCover**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays cover debug information.
Usage: ai_DebugDrawCover [0/1/2]
Default is 0 (off)
0 - off
1 - currently being used
2 - all in 50m range (slow)

    ```

- **ai_DebugDrawCoverLocations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays cover locations.
Usage: ai_DebugDrawCoverLocations [0/1]
Default is 0 (off)

    ```

- **ai_DebugDrawCoverOccupancy**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Renders red balls at the location of occupied cover.
Usage: ai_DebugDrawCoverOccupancy [0/1]
Default is 0 (off)
0 - off
1 - render red balls at the location of occupied cover

    ```

- **ai_DebugDrawCoverPlanes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays cover planes.
Usage: ai_DebugDrawCoverPlanes [0/1]
Default is 0 (off)

    ```

- **ai_DebugDrawCoverSampler**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws crowd control debug information. 0=off, 1=on
    ```

- **ai_DebugDrawDamageControl**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debugs the damage control system 0=disabled, 1=collect, 2=collect&draw.
    ```

- **ai_DebugDrawDamageParts**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the damage parts of puppets and vehicles.
    ```

- **ai_DebugDrawDynamicCoverSampler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays dynamic cover sampler debug rendering.
Usage: ai_DebugDrawDynamicCoverSampler [0/1]
Default is 0 (off)
0 - off
1 - on

    ```

- **ai_DebugDrawDynamicHideObjectsRange**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the range for drawing dynamic hide objects around the player (needs ai_DebugDraw > 0).
    ```

- **ai_DebugDrawEnabledActors**:

  - **Default Value:** `0`

  - **Description:**

    ```text
list of AI Actors that are enabled and metadata
    ```

- **ai_DebugDrawEnabledPlayers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
list of AI players that are enabled and metadata
    ```

- **ai_DebugDrawExpensiveAccessoryQuota**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays expensive accessory usage quota on puppets.
    ```

- **ai_DebugDrawFireCommand**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles displaying the fire command targets and modifications.
Usage: ai_DebugDrawFireCommand [0/1]
    ```

- **ai_DebugDrawFlight2**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set AI features to behave in earlier milestones - please use sparingly
    ```

- **ai_DebugDrawGroups**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the AI Groups debugging view.
Usage: ai_DebugDrawGroups [0/1]
Default is 0 (off). ai_DebugDrawGroups displays groups' leaders, members and their desired positions.
    ```

- **ai_DebugDrawHideSpotSearchRays**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggle drawing rays used in HM_ONLY_IF_CAN_SHOOT_FROM_THERE hide spot search option.
Usage: ai_DebugDrawHideSpotSearchRays [0..1]
    ```

- **ai_DebugDrawHidespotRange**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the range for drawing hidespots around the player (needs ai_DebugDraw > 0).
    ```

- **ai_DebugDrawLightLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug AI light level manager
    ```

- **ai_DebugDrawNavigation**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables displaying bounding boxes for world changes.
Usage: ai_DebugDrawNavigationWorldMonitor [0/1]
Default is 0 (off)
0 - off
1 - on

    ```

- **ai_DebugDrawPhysicsAccess**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays current physics access statistics for the AI module.
    ```

- **ai_DebugDrawPlayerActions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw special player actions.
    ```

- **ai_DebugDrawReinforcements**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Enables debug draw for reinforcement logic for specified group.
Usage: ai_DebugDrawReinforcements <groupid>, or -1 to disable.
    ```

- **ai_DebugDrawStanceSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the game logic representation of the stance size of the AI agents.
    ```

- **ai_DebugDrawVegetationCollisionDist**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables drawing vegetation collision closer than a distance projected onto the terrain.
    ```

- **ai_DebugDrawVisionMap**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the debug drawing of the AI VisionMap.
    ```

- **ai_DebugDrawVisionMapObservables**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the debug drawing of the AI VisionMap to show the location/stats of the observables.
    ```

- **ai_DebugDrawVisionMapObservers**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the debug drawing of the AI VisionMap to show the location/stats of the observers.

    ```

- **ai_DebugDrawVisionMapObserversFOV**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the debug drawing of the AI VisionMap to draw representations of the observers FOV.

    ```

- **ai_DebugDrawVisionMapStats**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the debug drawing of the AI VisionMap to show stats information.
    ```

- **ai_DebugDrawVisionMapVisibilityChecks**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the debug drawing of the AI VisionMap to show the status of the visibility checks.
    ```

- **ai_DebugDrawVolumeVoxels**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the AI debugging drawing of voxels in volume generation.
Usage: ai_DebugDrawVolumeVoxels [0, 1, 2 etc]
Default is 0 (off)
+n draws all voxels with original value >= n
-n draws all voxels with original value =  n
    ```

- **ai_DebugGlobalPerceptionScale**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws global perception scale multipliers on screen
    ```

- **ai_DebugHideSpotName**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug HideSpot Name!
    ```

- **ai_DebugInterestSystem**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display debugging information on interest system
    ```

- **ai_DebugMovementSystem**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw debug information to the screen regarding character movement.
                         0 - off
                         1 - on, draws default info level
                         2 - on, draws details for current movement block
                         3 - on, draws details for all movement blocks
    ```

- **ai_DebugMovementSystemActor**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name filter to draw information only for selected actors. Works as a substring filter!
    ```

- **ai_DebugMovementSystemActorRequests**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw queued movement requests of actors in the world as text above their head.
0 - Off
1 - Draw request queue of only the currently selected agent
2 - Draw request queue of all agents
    ```

- **ai_DebugMovementSystemUpdatedActors**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables automatic filtering to display only actors requiring update
    ```

- **ai_DebugPathfinding**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles output of pathfinding information [default 0 is off]
    ```

- **ai_DebugPerceptionManager**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws perception manager performance overlay. 0=disable, 1=vis checks, 2=stimulus
    ```

- **ai_DebugRangeSignaling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Range Signaling Debug Screen
    ```

- **ai_DebugSignalTimers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Signal Timers Debug Screen
    ```

- **ai_DebugTacticalPoints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display debugging information on tactical point selection system
    ```

- **ai_DebugTacticalPointsBlocked**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Highlight with red spheres any points blocked by generation phase, e.g. occupied points
    ```

- **ai_DebugTargetSilhouette**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the silhouette used for missing the target while shooting.
    ```

- **ai_DebugTargetTracksAgent**:

  - **Default Value:** `none`

  - **Description:**

    ```text
Draws the target tracks for the given agent
Usage: ai_DebugTargetTracksAgent AIName
Default is 'none'. AIName is the name of the AI agent to debug
    ```

- **ai_DebugTargetTracksConfig**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the information contained in the loaded target track configurations to the screen
    ```

- **ai_DebugTargetTracksConfig_Filter**:

  - **Default Value:** `none`

  - **Description:**

    ```text
Filter what configurations are drawn when debugging target tracks
Usage: ai_DebugTargetTracks_Filter Filter
Default is 'none'. Filter is a substring that must be in the configuration name
    ```

- **ai_DebugTargetTracksTarget**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws lines to illustrate where each agent's target is
Usage: ai_DebugTargetTracking 0/1/2
0 = Off. 1 = Show best target. 2 = Show all possible targets.
    ```

- **ai_DebugTimestamps**:

  - **Default Value:** `1`

  - **Description:**

    ```text
[0-1] Enable/Disable the debug text of the modular behavior tree's timestamps.
    ```

- **ai_DebugWalkabilityCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles allowing the use of tagpoints named WalkabilityCacheOrigin to cache walkability. [default 0 is off]
    ```

- **ai_DrawAgentFOV**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the vision cone of the AI agent.
Usage: ai_DrawagentFOV [0..1]
Default is 0 (off), value 1 will draw the cone all the way to
the sight range, value 0.1 will draw the cone to distance of 10%
of the sight range, etc. ai_DebugDraw must be enabled before
this tool can be used.
    ```

- **ai_DrawAgentStats**:

  - **Default Value:** `NkcBbtGgSfdDL`

  - **Description:**

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

  - **Default Value:** ``

  - **Description:**

    ```text
Filters Debug Draw Agent Stats displays to the specified groupIDs separated by spaces
usage: ai_DrawAgentStatsGroupFilter 1011 1012
    ```

- **ai_DrawAreas**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/Disables drawing behavior related areas.
    ```

- **ai_DrawAttentionTargetPositions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays markers for the AI's current attention target position. 
    ```

- **ai_DrawBadAnchors**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Toggles drawing out of bounds AI objects of particular type for debugging AI.
Valid only for 3D navigation. Draws red spheres at positions of anchors which are
located out of navigation volumes. Those anchors have to be moved.
 0 - off, 1 - on
    ```

- **ai_DrawBulletEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw the bullet events the AI system processes. 0=disable, 1=enable.
    ```

- **ai_DrawCollisionEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw the collision events the AI system processes. 0=disable, 1=enable.
    ```

- **ai_DrawDistanceLUT**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the distance lookup table graph overlay.
    ```

- **ai_DrawExplosions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw the explosion events the AI system processes. 0=disable, 1=enable.
    ```

- **ai_DrawFakeDamageInd**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws fake damage indicators on the player.
    ```

- **ai_DrawFakeHitEffects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws fake hit effects the player.
    ```

- **ai_DrawFakeTracers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws fake tracers around the player.
    ```

- **ai_DrawFireEffectDecayRange**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Distance under which the draw fire duration starts decaying linearly.
    ```

- **ai_DrawFireEffectEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enabled AI to sweep fire when starting to shoot after a break.
    ```

- **ai_DrawFireEffectMaxAngle**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximum angle actors actors are allowed to go away from their aiming direction during draw fire.
    ```

- **ai_DrawFireEffectMinDistance**:

  - **Default Value:** `7.5`

  - **Description:**

    ```text
Distance under which the draw fire will be disabled.
    ```

- **ai_DrawFireEffectMinTargetFOV**:

  - **Default Value:** `7.5`

  - **Description:**

    ```text
FOV under which the draw fire will be disabled.
    ```

- **ai_DrawFireEffectTimeScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scale for the weapon's draw fire time setting.
    ```

- **ai_DrawFormations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws all the currently active formations of the AI agents.
Usage: ai_DrawFormations [0/1]
Default is 0 (off). Set to 1 to draw the AI formations.
    ```

- **ai_DrawGetEnclosingFailures**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to the number of seconds you want GetEnclosing() failures visualized.  Set to 0 to turn visualization off.
    ```

- **ai_DrawGoals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws all the active goal ops debug info.
Usage: ai_DrawGoals [0/1]
Default is 0 (off). Set to 1 to draw the AI goal op debug info.
    ```

- **ai_DrawGrenadeEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw the grenade events the AI system processes. 0=disable, 1=enable.
    ```

- **ai_DrawGroupTactic**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draw group tactic: 0 = disabled, 1 = draw simple, 2 = draw complex.
    ```

- **ai_DrawHidespots**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws latest hide-spot positions for all agents within specified range.
    ```

- **ai_DrawModifiers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the AI debugging view of navigation modifiers.
    ```

- **ai_DrawModularBehaviorTreeStatistics**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw modular behavior statistics to the screen.
    ```

- **ai_DrawNode**:

  - **Default Value:** `none`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the link cutoff value in ai_DrawNodeLinkType. If the link value is more than
ai_DrawNodeLinkCutoff the number gets displayed in green, otherwise red.
    ```

- **ai_DrawNodeLinkType**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the link parameter to draw with ai_DrawNode.
Values are:
 0 - pass radius (default)
 1 - exposure
 2 - water max depth
 3 - water min depth
    ```

- **ai_DrawOffset**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
vertical offset during debug drawing (graph nodes, navigation paths, ...)
    ```

- **ai_DrawPath**:

  - **Default Value:** `none`

  - **Description:**

    ```text
Draws the generated paths of the AI agents. ai_drawoffset is used.
Usage: ai_DrawPath [name]
 none - off (default)
 squad - squadmates
 enemy - all the enemies
    ```

- **ai_DrawPathAdjustment**:

  - **Default Value:** ``

  - **Description:**

    ```text
Draws the path adjustment for the AI agents.
Usage: ai_DrawPathAdjustment [name]
Default is none (nobody).
    ```

- **ai_DrawPathFollower**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables PathFollower debug drawing displaying agent paths and safe follow target.
    ```

- **ai_DrawPathFollowerFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Substring filter of agent's name for debug draw of path followers
    ```

- **ai_DrawPerceptionDebugging**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws indicators showing enemy view intersection with perception modifiers
    ```

- **ai_DrawPerceptionHandlerModifiers**:

  - **Default Value:** `none`

  - **Description:**

    ```text
Draws perception handler modifiers on a specific AI
Usage: ai_DrawPerceptionHandlerModifiers AIName
Default is 'none'. AIName is the name of the AI
    ```

- **ai_DrawPerceptionIndicators**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws indicators showing enemy current perception level of player
    ```

- **ai_DrawPerceptionModifiers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws perception modifier areas in game mode
    ```

- **ai_DrawPlayerRanges**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws rings around player to assist in gauging target distance
    ```

- **ai_DrawProbableTarget**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/Disables drawing the position of probable target.
    ```

- **ai_DrawRadar**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws AI radar: 0=no radar, >0 = size of the radar on screen
    ```

- **ai_DrawRadarDist**:

  - **Default Value:** `20`

  - **Description:**

    ```text
AI radar draw distance in meters, default=20m.
    ```

- **ai_DrawReadibilities**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws all the currently active readibilities of the AI agents.
Usage: ai_DrawReadibilities [0/1]
Default is 0 (off). Set to 1 to draw the AI readibilities.
    ```

- **ai_DrawRefPoints**:

  - **Default Value:** ``

  - **Description:**

    ```text
Toggles reference points and beacon view for debugging AI.
Usage: ai_DrawRefPoints "all", agent name, group id 
Default is the empty string (off). Indicates the AI reference points by drawing
balls at their positions.
    ```

- **ai_DrawSelectedTargets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-1] Enable/Disable the debug helpers showing the AI's selected targets.
    ```

- **ai_DrawShooting**:

  - **Default Value:** `none`

  - **Description:**

    ```text
Name of puppet to show fire stats
    ```

- **ai_DrawSmartObjects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws smart object debug information.
Usage: ai_DrawSmartObjects [0/1]
Default is 0 (off). Set to 1 to draw the smart objects.
    ```

- **ai_DrawSoundEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw the sound events the AI system processes. 0=disable, 1=enable.
    ```

- **ai_DrawStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles drawing stats (in a table on top left of screen) for AI objects within specified range.
Will display attention target, goal pipe and current goal.
    ```

- **ai_DrawTargets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Distance to display the perception events of all enabled puppets.
Displays target type and priority
    ```

- **ai_DrawTrajectory**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Record and draw the actual path taken by the agent specified in ai_StatsTarget.
Path is displayed in aqua, and only a certain length will be displayed, after which
old path gradually disappears as new path is drawn.
0=do not record, 1=record.
    ```

- **ai_DrawType**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Display all AI object of specified type. If object is enabled it will be displayed.
with blue ball, otherwise with red ball. Yellow line will represent forward direction of the object.
 <0 - off
 0 - display all the dummy objects
 >0 - type of AI objects to display
    ```

- **ai_DrawUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
list of AI forceUpdated entities
    ```

- **ai_DynamicHidespotsEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If enabled, dynamic hidespots are considered when evaluating.
    ```

- **ai_DynamicVolumeUpdateTime**:

  - **Default Value:** `0.000175`

  - **Description:**

    ```text
How long (max) to spend updating dynamic volume regions per AI update (in sec)
0 disables dynamic updates. 0.002 is a sensible value
    ```

- **ai_DynamicWaypointUpdateTime**:

  - **Default Value:** `0.00035`

  - **Description:**

    ```text
How long (max) to spend updating dynamic waypoint regions per AI update (in sec)
0 disables dynamic updates. 0.0005 is a sensible value
    ```

- **ai_EnableCoolMisses**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If turned on, when agents miss the player, they will pick cool objects to shoot at.
    ```

- **ai_EnableORCA**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable obstacle avoidance system.
    ```

- **ai_EnablePerceptionStanceVisibleRange**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turn on use of max perception range for AI based on player's stance
    ```

- **ai_EnableWarningsErrors**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable AI warnings and errors: 1 or 0
    ```

- **ai_EnableWaterOcclusion**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables applying water occlusion to AI target visibility checks
    ```

- **ai_ExtraActorAvoidanceRadius**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Value in meters to be added to an actor obstacle radius

    ```

- **ai_ExtraAvoidanceRadius**:

  - **Default Value:** `0.125`

  - **Description:**

    ```text
Value in meters to be added to every dynamic obstacle radius

    ```

- **ai_ExtraForbiddenRadiusDuringBeautification**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Extra radius added to agents close to forbidden edges during beautification.
    ```

- **ai_ExtraRadiusDuringBeautification**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Extra radius added to agents during beautification.
    ```

- **ai_ExtraVehicleAvoidanceRadiusBig**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Value in meters to be added to a big obstacle's own size while computing obstacle
size for purposes of vehicle steering. See also ai_ObstacleSizeThreshold.
    ```

- **ai_ExtraVehicleAvoidanceRadiusSmall**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Value in meters to be added to a big obstacle's own size while computing obstacle
size for purposes of vehicle steering. See also ai_ObstacleSizeThreshold.
    ```

- **ai_FilterAgentName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Only draws the AI info of the agent with the given name.
Usage: ai_FilterAgentName name
Default is none (draws all of them if ai_debugdraw is on)

    ```

- **ai_FlowNodeAlertnessCheck**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable the alertness check in AI flownodes
    ```

- **ai_ForceAGAction**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces all AI characters to specified AG action input. 0 to disable.

    ```

- **ai_ForceAGSignal**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces all AI characters to specified AG signal input. 0 to disable.

    ```

- **ai_ForceAllowStrafing**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forces all AI characters to use/not use strafing (-1 disables)
    ```

- **ai_ForceLookAimTarget**:

  - **Default Value:** `none`

  - **Description:**

    ```text
Forces all AI characters to use/not use a fixed look/aim target
none disables
x, y, xz or yz sets it to the appropriate direction
otherwise it forces looking/aiming at the entity with this name (no name -> (0, 0, 0))
    ```

- **ai_ForcePosture**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces all AI characters to specified posture. 0 to disable.

    ```

- **ai_ForceSerializeAllObjects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Serialize all AI objects (ignore NO_SAVE flag).
    ```

- **ai_ForceStance**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forces all AI characters to specified stance:
Disable = -1, Stand = 0, Crouch = 1, Prone = 2, Relaxed = 3, Stealth = 4, Cover = 5, Swim = 6, Zero-G = 7
    ```

- **ai_IgnoreBulletRainStimulus**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Have the Perception Handler ignore all bullet rain stimulus always
    ```

- **ai_IgnorePlayer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Makes AI ignore the player.
Usage: ai_IgnorePlayer [0/1]
Default is 0 (off). Set to 1 to make AI ignore the player.
Used with ai_DebugDraw enabled.
    ```

- **ai_IgnoreSoundStimulus**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Have the Perception Handler ignore all sound stimulus always
    ```

- **ai_IgnoreVisibilityChecks**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Makes certain visibility checks (for teleporting etc) return false.
    ```

- **ai_IgnoreVisualStimulus**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Have the Perception Handler ignore all visual stimulus always
    ```

- **ai_InterestSystem**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable interest system
    ```

- **ai_InterestSystemCastRays**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Makes the Interest System check visibility with rays
    ```

- **ai_IntersectionTesterQuota**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Amount of deferred intersection tests allowed to be cast per frame!
    ```

- **ai_IslandConnectionsSystemProfileMemory**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/Disables the memory profile for the island connections system.
    ```

- **ai_LayerSwitchDynamicLinkBump**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Multiplier for the dynamic link update budget when layer switch occurs.
    ```

- **ai_LayerSwitchDynamicLinkBumpDuration**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Duration of the dynamic link update budget bump in frames.
    ```

- **ai_LobThrowMinAllowedDistanceFromFriends**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Minimum distance a grenade (or any object thrown using a lob) should land from mates to accept the throw trajectory.
    ```

- **ai_LobThrowPercentageOfDistanceToTargetUsedForInaccuracySimulation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This value identifies percentage of the distance to the target that will be used to simulate human inaccuracy with parabolic throws.
    ```

- **ai_LobThrowTimePredictionForFriendPositions**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Time frame used to predict the next position of moving mates to score the landing position of the lob throw
    ```

- **ai_LobThrowUseRandomForInaccuracySimulation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Uses random variation for simulating inaccuracy in the lob throw.
    ```

- **ai_Locate**:

  - **Default Value:** `none`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
None = 0, progress/errors/warnings = 1, event = 2, comment = 3
    ```

- **ai_LogFileVerbosity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
None = 0, progress/errors/warnings = 1, event = 2, comment = 3
    ```

- **ai_LogModularBehaviorTreeExecutionStacks**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-2] Enable/Disable logging of the execution stacks of modular behavior trees to individual files in the MBT_Logs directory.
0 - Off
1 - Log execution stacks of only the currently selected agent
2 - Log execution stacks of all currently active agents
    ```

- **ai_LogSignals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs all the signals received in CAIActor::NotifySignalReceived.
    ```

- **ai_MNMAllowDynamicRegenInEditor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-1] Allow dynamic regeneration of MNM when in the editor, when in game mode. Put this CVar in your configuration file rather than changing it during execution.
    ```

- **ai_MNMDebugAccessibility**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-1] Display navigation reachable areas in blue and not reachable areas in red
    ```

- **ai_MNMEditorBackgroundUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
[0-1] Enable/Disable editor background update of the Navigation Meshes
    ```

- **ai_MNMPathFinderDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-1] Enable/Disable debug draw statistics on pathfinder load
    ```

- **ai_MNMPathFinderQuota**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Set path finding frame time quota in seconds (Set to 0 for no limit)
    ```

- **ai_MNMPathfinderConcurrentRequests**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Defines the amount of concurrent pathfinder requests that can be served at the same time.
    ```

- **ai_MNMPathfinderMT**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable Multi Threading for the pathfinder.
    ```

- **ai_MNMPathfinderPositionInTrianglePredictionType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Defines which type of prediction for the point inside each triangle used by the pathfinder heuristic to search for the path with minimal cost.
0 - Triangle center.
1 - Advanced prediction.

    ```

- **ai_MNMProfileMemory**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-1] Display navigation system memory statistics
    ```

- **ai_MNMRaycastImplementation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Defines which type of raycast implementation to use on the MNM meshes.0 - Old one. This version will be deprecated as it sometimes does not handle correctly the cases where the ray coincides with triangle egdes, which has been fixed in the new version.
1 - New one.
Any other value is used for the new one
    ```

- **ai_MinActorDynamicObstacleAvoidanceRadius**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Minimum value in meters to be added to the obstacle's own size for actors
(pathRadius property can override it if bigger)
    ```

- **ai_ModularBehaviorTree**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[0-1] Enable/Disable the usage of the modular behavior tree system.
    ```

- **ai_MovementSystemPathReplanningEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable path-replanning of moving actors in the MovementSystem every time
a navigation-mesh change at runtime affects their current path.
Ignores designer-placed paths.
0 - disabled (default)
1 - enabled
    ```

- **ai_NavGenThreadJobs**:

  - **Default Value:** `1`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables navigation information updates on a separate thread.
Usage: ai_NavigationSystemMT [0/1]
Default is 1 (on)
0 - off
1 - on

    ```

- **ai_NetworkDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the AI network debug.
Usage: ai_NetworkDebug [0/1]
Default is 0 (off). ai_NetworkDebug is used to direct DebugDraw information 
from the server to the client.
    ```

- **ai_NoUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables AI system update when 1
    ```

- **ai_ObstacleSizeThreshold**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Obstacle size in meters that differentiates small obstacles from big ones so that vehicles can ignore the small ones
    ```

- **ai_OutputPersonalLogToConsole**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Output the personal log messages to the console.
    ```

- **ai_OverlayMessageDuration**:

  - **Default Value:** `5`

  - **Description:**

    ```text
How long (seconds) to overlay AI warnings/errors
    ```

- **ai_PathStringPullingIterations**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Defines the number of iteration used for the string pulling operation to simplify the path
    ```

- **ai_PathfindTimeLimit**:

  - **Default Value:** `0.08`

  - **Description:**

    ```text
Specifies how many seconds an individual AI can hold the pathfinder blocked
Usage: ai_PathfindTimeLimit 0.15
Default is 0.08. A lower value will result in more path requests that end in NOPATH -
although the path may actually exist.
    ```

- **ai_PathfinderAvoidanceCostForGroupMates**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Cost used in the heuristic calculation for the avoidance of the group mates's positions.
    ```

- **ai_PathfinderDangerCostForAttentionTarget**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Cost used in the heuristic calculation for the danger created by the attention target position.
    ```

- **ai_PathfinderDangerCostForExplosives**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Cost used in the heuristic calculation for the danger created by the position of explosive objects.
    ```

- **ai_PathfinderExplosiveDangerMaxThreatDistance**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Range used to decide if evaluate an explosive danger as an actual threat.
    ```

- **ai_PathfinderExplosiveDangerRadius**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Range used to evaluate the explosive threats in the path calculation. Outside this range a location is considered safe.
    ```

- **ai_PathfinderGroupMatesAvoidanceRadius**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Range used to evaluate the group mates avoidance in the path calculation.
    ```

- **ai_PathfinderUpdateTime**:

  - **Default Value:** `0.0005`

  - **Description:**

    ```text
Maximum pathfinder time per AI update
    ```

- **ai_PlayerAffectedByLight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets if player is affected by light from observable perception checks
    ```

- **ai_PredictivePathFollowing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets if AI should use the predictive path following if allowed by the type's config.
    ```

- **ai_ProfileGoals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles timing of AI goal execution.
Usage: ai_ProfileGoals [0/1]
Default is 0 (off). Records the time used for each AI goal (like
approach, run or pathfind) to execute. The longest execution time
is displayed on screen. Used with ai_DebugDraw enabled.
    ```

- **ai_ProneVisibleRange**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Max perception range for AI when player is proning
    ```

- **ai_RODAliveTime**:

  - **Default Value:** `3`

  - **Description:**

    ```text
The base level time the player can survive under fire.
    ```

- **ai_RODAmbientFireInc**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Increment for the alive time when the target is within the kill-zone of the target.
    ```

- **ai_RODCombatRangeMod**:

  - **Default Value:** `0.55`

  - **Description:**

    ```text
Combat-zone distance = attackRange * combatRangeMod.
    ```

- **ai_RODCoverFireTimeMod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier for cover fire times set in weapon descriptor.
    ```

- **ai_RODDirInc**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Increment how the orientation of the target affects the alive time. 0=disable
    ```

- **ai_RODFakeHitChance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Percentage of the missed hits that will instead be hits dealing very little damage.
    ```

- **ai_RODKillRangeMod**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Kill-zone distance = attackRange * killRangeMod.
    ```

- **ai_RODKillZoneInc**:

  - **Default Value:** `-4`

  - **Description:**

    ```text
Increment how the target is within the kill-zone of the target.
    ```

- **ai_RODLowHealthMercyTime**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
The amount of time the AI will not hit the target when the target crosses the low health threshold.
    ```

- **ai_RODMoveInc**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Increment how the speed of the target affects the alive time (the value is doubled for supersprint). 0=disable
    ```

- **ai_RODReactionDarkIllumInc**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Increase for reaction time when the target is in dark light condition.
    ```

- **ai_RODReactionDirInc**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Increase for the reaction time when the enemy is outside the players FOV or near the edge of the FOV.
The increment is doubled when the target is behind the player.
    ```

- **ai_RODReactionDistInc**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Increase for the reaction time when the target is in combat-far-zone or warn-zone.
In warn-zone the increase is doubled.
    ```

- **ai_RODReactionLeanInc**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Increase to the reaction to when the target is leaning.
    ```

- **ai_RODReactionMediumIllumInc**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Increase for reaction time when the target is in medium light condition.
    ```

- **ai_RODReactionSuperDarkIllumInc**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Increase for reaction time when the target is in super dark light condition.
    ```

- **ai_RODReactionTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Uses rate of death as damage control method.
    ```

- **ai_RODStanceInc**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Increment how the stance of the target affects the alive time, 0=disable.
The base value is for crouch, and it is doubled for prone.
The crouch inc is disable in kill-zone and prone in kill and combat-near -zones
    ```

- **ai_RayCasterQuota**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Amount of deferred rays allowed to be cast per frame!
    ```

- **ai_RecordCommunicationStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off recording of communication stats to a log.
Usage: ai_RecordCommunicationStats [0/1]

    ```

- **ai_RecordLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
log all the AI state changes on stats_target
    ```

- **ai_Recorder**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets AI Recorder mode. Default is 0 - off.
    ```

- **ai_Recorder_Auto**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Auto record the AI when in Editor mode game

    ```

- **ai_Recorder_Buffer**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Set the size of the AI debug recording buffer
    ```

- **ai_SOMSpeedCombat**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Time before the AI will see the enemy while alarmed.
Usage: ai_SOMSpeedCombat 0.15
Default is 0.15. A lower value causes the AI to react to the enemy faster.
    ```

- **ai_SOMSpeedRelaxed**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Time before the AI will see the enemy while relaxed.
Usage: ai_SOMSpeedRelaxed 0.4
Default is 0.4. A lower value causes the AI to react to the enemy faster.
    ```

- **ai_SightRangeDarkIllumMod**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Multiplier for sightrange when the target is in dark light condition.
    ```

- **ai_SightRangeMediumIllumMod**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Multiplier for sightrange when the target is in medium light condition.
    ```

- **ai_SightRangeSuperDarkIllumMod**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Multiplier for sightrange when the target is in super dark light condition.
    ```

- **ai_SimpleWayptPassability**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use simplified and faster passability recalculation for human waypoint links where possible.
    ```

- **ai_SmartPathFollower_LookAheadPredictionTimeForMovingAlongPathRunAndSprint**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Defines the time frame the AI is allowed to look ahead while moving strictly along a path to decide whether to cut towards the next point. (Run and Sprint only)

    ```

- **ai_SmartPathFollower_LookAheadPredictionTimeForMovingAlongPathWalk**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Defines the time frame the AI is allowed to look ahead while moving strictly along a path to decide whether to cut towards the next point. (Walk only)

    ```

- **ai_SmartPathFollower_decelerationHuman**:

  - **Default Value:** `7.75`

  - **Description:**

    ```text
Deceleration multiplier for non-vehicles
    ```

- **ai_SmartPathFollower_decelerationVehicle**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Deceleration multiplier for vehicles
    ```

- **ai_SmartPathFollower_useAdvancedPathShortcutting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables a more failsafe way of preventing the AI to shortcut through obstacles (0 = disable, any other value = enable)
    ```

- **ai_SmartPathFollower_useAdvancedPathShortcutting_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show debug lines for when CVar ai_SmartPathFollower_useAdvancedPathShortcutting_debug is enabled
    ```

- **ai_SoundPerception**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles AI sound perception.
Usage: ai_SoundPerception [0/1]
Default is 1 (on). Used to prevent AI from hearing sounds for
debugging purposes. Works with ai_DebugDraw enabled.
    ```

- **ai_StatsDisplayMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Select display mode for the AI stats manager
Usage: 0 - Hidden, 1 - Show

    ```

- **ai_StatsTarget**:

  - **Default Value:** `none`

  - **Description:**

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

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Indicates slope value that is borderline-walkable across.
Usage: ai_SteepSlopeAcrossValue 0.8
Default is 0.6 Zero means flat. Infinity means vertical. Set it greater than ai_SteepSlopeUpValue
    ```

- **ai_SteepSlopeUpValue**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Indicates slope value that is borderline-walkable up.
Usage: ai_SteepSlopeUpValue 0.5
Default is 1.0 Zero means flat. Infinity means vertical. Set it smaller than ai_SteepSlopeAcrossValue
    ```

- **ai_SystemUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles the regular AI system update.
Usage: ai_SystemUpdate [0/1]
Default is 1 (on). Set to 0 to disable ai system updating.
    ```

- **ai_TacticalPointUpdateTime**:

  - **Default Value:** `0.0005`

  - **Description:**

    ```text
Maximum allowed update time in main AI thread for Tactical Point System
Usage: ai_TacticalPointUpdateTime <number>
Default is 0.0003
    ```

- **ai_TacticalPointsDebugDrawMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debugging draw mode: 1=sphere transparency, 2=sphere size
    ```

- **ai_TacticalPointsDebugFadeMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Debugging fade mode: 1=vanish, 2=alpha fade, 3=blink
    ```

- **ai_TacticalPointsDebugScaling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scale the size of debugging spheres for visibility
    ```

- **ai_TacticalPointsDebugTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time to display debugging spheres for (if not 'persistent'
    ```

- **ai_TacticalPointsWarnings**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles TPS Warnings on and off
    ```

- **ai_TargetTracking**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable target tracking. 0=disable, any other value = Enable
    ```

- **ai_TargetTracks_GlobalTargetLimit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Global override to control the number of agents that can actively target another agent (unless there is no other choice)
A value of 0 means no global limit is applied. If the global target limit is less than the agent's target limit, the global limit is used.
    ```

- **ai_UpdateAllAlways**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If non-zero then over-rides the auto-disabling of invisible/distant AI
    ```

- **ai_UpdateInterval**:

  - **Default Value:** `0.13`

  - **Description:**

    ```text
In seconds the amount of time between two full updates for AI  
Usage: ai_UpdateInterval <number>
Default is 0.1. Number is time in seconds
    ```

- **ai_UpdateProxy**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles update of AI proxy (model).
Usage: ai_UpdateProxy [0/1]
Default is 1 (on). Updates proxy (AI representation in game)
set to 0 to disable proxy updating.
    ```

- **ai_UseCalculationStopperCounter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Uses a (calibrated) counter instead of time in AI updates
    ```

- **ai_UseSimplePathfindingHeuristic**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles the AI using a straight simple distance heuristic for debugging.
Usage: ai_UseSimpleHeuristic [0/1]
    ```

- **ai_UseSmartPathFollower**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Smart PathFollower (default: 1).
    ```

- **ai_UseSmartPathFollower_AABB_based**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Smart PathFollower to use AABB checks and other optimizations
    ```

- **ai_UseSmartPathFollower_LookAheadDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
LookAheadDistance of SmartPathFollower
    ```

- **ai_VisionMapNumberOfPVSUpdatesPerFrame**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **ai_VisionMapNumberOfVisibilityUpdatesPerFrame**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **ai_WaterOcclusion**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
scales how much water hides player from AI
    ```

- **ai_perception.landed_baseRadius**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Base radius for the AI sound generated when player lands
    ```

- **ai_perception.landed_speedMultiplier**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Multiplier applied to fall speed which is added on to the radius for the AI sound generated when player lands
    ```

- **ai_perception.movement_crouchMovingMultiplier**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Multiplier for crouched movement speed effect on footstep sound radius
    ```

- **ai_perception.movement_crouchRadiusDefault**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Default value for crouching footstep sound radius multiplier (overridden by surface type)
    ```

- **ai_perception.movement_movingSurfaceDefault**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Default value for movement speed effect on footstep radius (overridden by surface type)
    ```

- **ai_perception.movement_standingMovingMultiplier**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Multiplier for standing movement speed effect on footstep sound radius
    ```

- **ai_perception.movement_standingRadiusDefault**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Default value for standing footstep sound radius (overridden by surface type)
    ```

- **ai_perception.movement_useSurfaceType**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggle if surface type should be used to get the base radius instead of cvars
    ```

- **aim_assistAimEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable aim assitance on aim zooming
    ```

- **aim_assistAutoCoeff**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The scale of auto weapons' aim assistance at continuous fire
    ```

- **aim_assistCrosshairDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
debug crosshair aim assistance
    ```

- **aim_assistCrosshairSize**:

  - **Default Value:** `25`

  - **Description:**

    ```text
screen size used for crosshair aim assistance
    ```

- **aim_assistMaxDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The maximum range at which autoaim operates
    ```

- **aim_assistRestrictionTimeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The restriction timeout on aim assistance after user uses a mouse
    ```

- **aim_assistSearchBox**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The area autoaim looks for enemies within
    ```

- **aim_assistSingleCoeff**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The scale of single-shot weapons' aim assistance
    ```

- **aim_assistSnapDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The maximum deviation autoaim is willing to compensate for
    ```

- **aim_assistTriggerEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable aim assistance on firing the weapon
    ```

- **aim_assistVerticalScale**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The amount of emphasis on vertical correction (the less the number is the more vertical component is compensated)
    ```

- **aln_debug_filter**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **aln_debug_movement**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **autotest_disable_saveload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
disable save/load whilst running feature tests
    ```

- **autotest_enabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 = enabled autotesting, 2 = enabled autotesting with no output results written.
    ```

- **autotest_quit_when_done**:

  - **Default Value:** `0`

  - **Description:**

    ```text
quit the game when tests are done
    ```

- **autotest_state_setup**:

  - **Default Value:** ``

  - **Description:**

    ```text
setup string for autotesting
    ```

- **autotest_verbose**:

  - **Default Value:** `1`

  - **Description:**

    ```text
output detailed logging whilst running feature tests
    ```

- **ban_timeout**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Ban timeout in minutes
    ```

- **br_breakmaxworldsize**:

  - **Default Value:** `10000`

  - **Description:**

    ```text
The maximum value used for breakage world positions
    ```

- **br_breakworldoffsetx**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Break world origin
    ```

- **br_breakworldoffsety**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Break world origin
    ```

- **bt_end_melee**:

  - **Default Value:** `0`

  - **Description:**

    ```text
end bullet-time when melee
    ```

- **bt_end_reload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
end bullet-time when reloading
    ```

- **bt_end_select**:

  - **Default Value:** `0`

  - **Description:**

    ```text
end bullet-time when selecting a new weapon
    ```

- **bt_energy_decay**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
bullet time energy decay rate
    ```

- **bt_energy_max**:

  - **Default Value:** `1`

  - **Description:**

    ```text
maximum bullet-time energy
    ```

- **bt_energy_regen**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
bullet time energy regeneration rate
    ```

- **bt_ironsight**:

  - **Default Value:** `0`

  - **Description:**

    ```text
bullet-time when in ironsight
    ```

- **bt_pitch**:

  - **Default Value:** `-0.4`

  - **Description:**

    ```text
sound pitch shift for bullet-time
    ```

- **bt_speed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
bullet-time when in speed mode
    ```

- **bt_time_scale**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
bullet-time time scale to apply
    ```

- **c_shakeMult**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **ca_AllowMultipleEffectsOfSameName**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow a skeleton animation to spawn more than one instance of an effect with the same name on the same instance.
    ```

- **ca_AnimWarningLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if you set this to 0, there won't be any
frequest warnings from the animation system
    ```

- **ca_AnimationLODs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable animation LODs
    ```

- **ca_ApplyJointVelocitiesMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Joint velocity preservation code mode: 0=Disabled, 1=Physics-driven, 2=Animation-driven
    ```

- **ca_AttachmentCullingRation**:

  - **Default Value:** `200`

  - **Description:**

    ```text
ration between size of attachment and distance to camera
    ```

- **ca_AttachmentCullingRationMP**:

  - **Default Value:** `300`

  - **Description:**

    ```text
ration between size of attachment and distance to camera for MP
    ```

- **ca_AttachmentMergingMemoryBudget**:

  - **Default Value:** `2.62144e+07`

  - **Description:**

    ```text
amount of memory (in bytes) dedicated to merged character attachments
    ```

- **ca_CharEditModel**:

  - **Default Value:** `objects/characters/human/sdk_player/sdk_player.cdf`

  - **Description:**

    ```text

    ```

- **ca_ClothBlending**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if this is 0 blending with animation is disabled
    ```

- **ca_ClothBypassSimulation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1 actual cloth simulation is disabled (wrap skinning still works)
    ```

- **ca_CopySkinLoad**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if non zero allow copy instead of load optimization
    ```

- **ca_DBAUnloadRemoveTime**:

  - **Default Value:** `4`

  - **Description:**

    ```text
DBA Unload Timing: DBA Remove Time.
    ```

- **ca_DBAUnloadUnregisterTime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
DBA Unload Timing: CAF Unregister Time.
    ```

- **ca_DeathBlendTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies the blending time between low-detail dead body skeleton and current skeleton
    ```

- **ca_DebugADIKTargets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If 1, then it will show if there are animation-driven IK-Targets for this model.
    ```

- **ca_DebugAnimJointController**:

  - **Default Value:** `0`

  - **Description:**

    ```text
dump all joint controllers for every running animation
use together with ca_FilterJoints, ca_FilterAnims and ca_FilterCharacters to limit the output
outputs O (orientation in degrees) and P (position in metres)
    ```

- **ca_DebugAnimMemTracking**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1, then its shows the anim-key allocations
    ```

- **ca_DebugAnimUpdates**:

  - **Default Value:** `0`

  - **Description:**

    ```text
shows the amount of skeleton-updates
    ```

- **ca_DebugAnimUsage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
shows what animation assets are used in the level
1 - simple DBA list
2 - DBA list with used cafs
4 - complete debug
8 - oneshot: dump used CAF files
16 - oneshot: dump all CAF files and its DBAs

    ```

- **ca_DebugAnimUsageFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter for anim usage debug for DBA name.
    ```

- **ca_DebugAnimationStreaming**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1, then it shows what animations are streamed in
    ```

- **ca_DebugCommandBuffer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1, it will print the amount of commands for the blend-buffer
2 prints extended info for one joint selected by ca_filterjoints
    ```

- **ca_DebugCriticalErrors**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if 1, then we stop with a Fatal-Error if we detect a serious issue
    ```

- **ca_DebugFacial**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug facial playback info
    ```

- **ca_DebugFacialEyes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug facial eyes info
    ```

- **ca_DebugModelCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
shows what models are currently loaded and how much memory they take
    ```

- **ca_DebugSWSkinning**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 colored wireframe on top of software skinned meshes - color coded count of skinned bones,
2 draws normals,
3 draws blue mesh where the tangents are updated,
4 colored wireframe with total morph/vertex frame debug, use ca_FilterMorphs to filter morphs
5 colored wireframe with active morph/vertex frame debug, use ca_FilterMorphs to filter morphs

    ```

- **ca_DebugSegmentation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, we can see the timing and the segment-counter of all assets in a BSpace
    ```

- **ca_DebugSkeletonEffects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If true, dump log messages when skeleton effects are handled.
    ```

- **ca_DebugTextFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Animation debug by entity name, allows multiple characters divided by comma. Compatible with es_DebugAnim.
    ```

- **ca_DebugTextScaling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Change size of the anim debug text as it was too small.
    ```

- **ca_DecalSizeMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
The multiplier for the decal sizes
    ```

- **ca_DisableAnimationUnloading**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable Animation Unloading.
    ```

- **ca_DisableAuxPhysics**:

  - **Default Value:** `0`

  - **Description:**

    ```text
disable simulation of character ropes and cloth
    ```

- **ca_DoNotWaitForStreaming**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Animations that are not in memory are activated as normal and processing is skipped but animation time is running, animation events sent.
    ```

- **ca_DrawAimIKVEGrid**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, we will the the grid with the virtual examples
    ```

- **ca_DrawAimIKVEGridIndex**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
force index from VEG grid
    ```

- **ca_DrawAimPoses**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws the wireframe of the aim poses
    ```

- **ca_DrawAllSimulatedSockets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, the own bounding box of the character is drawn
    ```

- **ca_DrawAttachmentOBB**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 0, will not draw the attachments objects
    ```

- **ca_DrawAttachmentProjection**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 0, will not draw the attachment projections
    ```

- **ca_DrawAttachments**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if this is 0, will not draw the attachments objects
    ```

- **ca_DrawAttachmentsMergedForShadows**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1 we merge attachments for shadow generation
    ```

- **ca_DrawBBox**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, the own bounding box of the character is drawn
    ```

- **ca_DrawBaseMesh**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if this is 0, will not draw the characters
    ```

- **ca_DrawBinormals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws the binormals of the rendered character
    ```

- **ca_DrawCC**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if this is 0, will not draw the CC characters
    ```

- **ca_DrawCGA**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if this is 0, will not draw the CGA characters
    ```

- **ca_DrawCHR**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if this is 0, will not draw the CHR characters
    ```

- **ca_DrawCloth**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 draw render mesh, 2 draw sim mesh, 0 draws neither
    ```

- **ca_DrawDecalsBBoxes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, the decals bboxes are drawn
    ```

- **ca_DrawEmptyAttachments**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws a wireframe cube if there is no object linked to an attachment
    ```

- **ca_DrawLocator**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1, we will draw the body and move-direction. If this is 2, we will also print out the move direction
    ```

- **ca_DrawLookIK**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws a visualization of look ik
    ```

- **ca_DrawNormals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws the normals of the rendered character
    ```

- **ca_DrawPose**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **ca_DrawPositionPost**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws the world position of the character (after update)
    ```

- **ca_DrawSkeleton**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
draws the tangents of the rendered character
    ```

- **ca_DrawVEGInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, the VEG debug info is drawn
    ```

- **ca_DrawWireframe**:

  - **Default Value:** `0`

  - **Description:**

    ```text
draws a wireframe on top of the rendered character
    ```

- **ca_DumpUsedAnims**:

  - **Default Value:** `0`

  - **Description:**

    ```text
writes animation asset statistics to the disk
    ```

- **ca_FacialAnimationRadius**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum distance at which facial animations are updated - handles zooming correctly
    ```

- **ca_FacialAnimationTransformTranslations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on translation transformation to parent's local space
    ```

- **ca_FilterAnims**:

  - **Default Value:** ``

  - **Description:**

    ```text
to filter output of ca_DebugAnimJointController
    ```

- **ca_FilterCharacters**:

  - **Default Value:** ``

  - **Description:**

    ```text
to filter output of ca_DebugAnimJointController
    ```

- **ca_FilterJoints**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter of the displayed joints. Used as a case insesitive substring filter. Comma or space separated list of tokens can be used and each token is used as a filter that allows joint to be drawn.
    ```

- **ca_FilterMorphs**:

  - **Default Value:** ``

  - **Description:**

    ```text
to filter output of ca_DebugSWSkinning
    ```

- **ca_ForceUpdateSkeletons**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Always update all skeletons, even if not visible.
    ```

- **ca_KeepModels**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 1, will prevent models from unloading from memory
upon destruction of the last referencing character
    ```

- **ca_LoadUncompressedChunks**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If this 1, then uncompressed chunks prefer compressed while loading
    ```

- **ca_LockFeetWithIK**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If this is set to 1, then we lock the feet to prevent sliding when additive animations are used
    ```

- **ca_LookIKBlendSpeed**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Speed of lookIK fade-in/fade-out
    ```

- **ca_LookIKEyeRotationDirectlyToBone**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Rotation from LookIK is applied to eye bones instead of as an offset to eye attachments
    ```

- **ca_LookIKEyeWeightHack**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Blending weight is partially moved to eyes only (hacky behavior)
    ```

- **ca_MemoryDefragEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables defragmentation of anim data
    ```

- **ca_MemoryDefragPoolSize**:

  - **Default Value:** `1.04858e+06`

  - **Description:**

    ```text
Sets the upper limit on the defrag pool size
    ```

- **ca_MemoryUsageLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enables a memory usage log
    ```

- **ca_MinInPlaceCAFStreamSize**:

  - **Default Value:** `131072`

  - **Description:**

    ```text
min size a caf should be for in-place streaming
    ```

- **ca_MorphVertexFrameStateDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1, then its shows morphs / vertex frames without control joint
    ```

- **ca_MotionBlurMovementThreshold**:

  - **Default Value:** `0`

  - **Description:**

    ```text
"advanced" Set motion blur movement threshold for discarding skinned object
    ```

- **ca_NoAnim**:

  - **Default Value:** `0`

  - **Description:**

    ```text
the animation isn't updated (the characters remain in the same pose)
    ```

- **ca_OverrideBlendWeightSimulation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Override helper joint value for blending between attachment simulation and animation pose
 0.0 - full animation
 1.0 - full simulation (override disabled)
    ```

- **ca_ParametricPoolSize**:

  - **Default Value:** `512`

  - **Description:**

    ```text
Size of the parametric pool
    ```

- **ca_PrecacheAnimationSets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Precaching of Animation Sets per Character.
    ```

- **ca_PreloadAllCAFs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Preload all CAFs during level preloading.
    ```

- **ca_QuadrupedIKBone1Mult**:

  - **Default Value:** `0.33`

  - **Description:**

    ```text
Angle difference multiplier for bone1 for the quadruped solver
    ```

- **ca_ReloadAllCHRPARAMS**:

  - **Default Value:** `0`

  - **Description:**

    ```text
reload all CHRPARAMS
    ```

- **ca_SaveAABB**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if the AABB is invalid, replace it by the default AABB
    ```

- **ca_SerializeSkeletonAnim**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turn on CSkeletonAnim Serialization.
    ```

- **ca_SnapToVGrid**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, we snap the control parameter to the closest VCell
    ```

- **ca_Stats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 will turn on statistics gathering, 0 will turn it off and output results
    ```

- **ca_StatsOutputNetworkPath**:

  - **Default Value:** ``

  - **Description:**

    ```text
Output network path for animation statistics log
    ```

- **ca_StatsTimedOutput**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
If >0 output stats every x seconds
    ```

- **ca_StoreAnimNamesOnLoad**:

  - **Default Value:** `0`

  - **Description:**

    ```text
stores the names of animations during load to allow name lookup for debugging
    ```

- **ca_StreamCHR**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set to enable CHR streaming
    ```

- **ca_StreamDBAInPlace**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to stream DBA files in place
    ```

- **ca_UnloadAnimationCAF**:

  - **Default Value:** `1`

  - **Description:**

    ```text
unloading streamed CAFs as soon as they are not used
    ```

- **ca_UnloadAnimationDBA**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if 1, then unload DBA if not used
    ```

- **ca_UseAimIK**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If this is set to 1, then we are adding a look-at animation to the skeleton
    ```

- **ca_UseAssetDefinedLod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Lowers render LODs for characters with respect to "consoles_lod0" UDP. Requires characters to be reloaded.
    ```

- **ca_UseDecals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 0, effectively disables creation of decals on characters
2 - alternative method of calculating/building the decals
    ```

- **ca_UseFacialAnimation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If this is set to 1, we can play facial animations
    ```

- **ca_UseIMG_AIM**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if 1, then we use the IMG file. In development mode it is suppose to be off
    ```

- **ca_UseIMG_CAF**:

  - **Default Value:** `1`

  - **Description:**

    ```text
if 1, then we use the IMG file. In development mode it is suppose to be off
    ```

- **ca_UseJointMasking**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use Joint Masking to speed up motion decoding.
    ```

- **ca_UseLookIK**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If this is set to 1, then we are adding a look-at animation to the skeleton
    ```

- **ca_UseMorph**:

  - **Default Value:** `1`

  - **Description:**

    ```text
the morph skinning step is skipped (it's part of overall skinning during rendering)
    ```

- **ca_UsePhysics**:

  - **Default Value:** `1`

  - **Description:**

    ```text
the physics is not applied (effectively, no IK)
    ```

- **ca_UseRecoil**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If this is set to 1, then we enable procedural recoil
    ```

- **ca_UseScaling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If set to 1, enables the scaling pipeline in the animation system.
    ```

- **ca_VClothMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0 - disabled (disable rendering & simulation)
1 - enabled (default)
2 - force skinning (disable simulation)

    ```

- **ca_Validate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if set to 1, will run validation on animation data
    ```

- **ca_cloth_air_resistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
"advanced" (more correct) version of damping
    ```

- **ca_cloth_damping**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **ca_cloth_friction**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **ca_cloth_max_safe_step**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if a segment stretches more than this (in *relative* units), its length is reinforced
    ```

- **ca_cloth_max_timestep**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **ca_cloth_stiffness**:

  - **Default Value:** `0`

  - **Description:**

    ```text
stiffness for stretching
    ```

- **ca_cloth_stiffness_norm**:

  - **Default Value:** `0`

  - **Description:**

    ```text
stiffness for shape preservation along normals ("convexity preservation")
    ```

- **ca_cloth_stiffness_tang**:

  - **Default Value:** `0`

  - **Description:**

    ```text
stiffness for shape preservation against tilting
    ```

- **ca_cloth_thickness**:

  - **Default Value:** `0`

  - **Description:**

    ```text
thickness for collision checks
    ```

- **ca_cloth_vars_reset**:

  - **Default Value:** `2`

  - **Description:**

    ```text
1 - load the values from the next char, 1 - apply normally, 2+ - ignore
    ```

- **ca_debugAnimProcessing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Detailed dumping of proccessing anim jobs.
    ```

- **ca_disable_thread**:

  - **Default Value:** `1`

  - **Description:**

    ```text
TEMP Disable Animation Thread.
    ```

- **ca_eyes_procedural**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables procedural eyes animation
    ```

- **ca_lipsync_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables facial animation debug draw
    ```

- **ca_lipsync_phoneme_crossfade**:

  - **Default Value:** `70`

  - **Description:**

    ```text
Cross fade time between phonemes in milliseconds
    ```

- **ca_lipsync_phoneme_crossfade_attenuation**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Cross fade attenuation in percent
    ```

- **ca_lipsync_phoneme_offset**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Offset phoneme start time by this value in milliseconds
    ```

- **ca_lipsync_phoneme_strength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
LipSync phoneme strength
    ```

- **ca_lipsync_vertex_drag**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Vertex drag coefficient when blending morph targets
    ```

- **ca_physicsProcessImpact**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Process physics impact pulses.
    ```

- **ca_syncAllAnimationsParallel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Parallel sync all anims.
    ```

- **ca_thread**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If >0 enables Animation Multi-Threading.
    ```

- **ca_thread0Affinity**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Affinity of first Animation Thread.
    ```

- **ca_thread1Affinity**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Affinity of second Animation Thread.
    ```

- **ca_useADIKTargets**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use Animation Driven Ik Targets.
    ```

- **ca_vaBlendCullingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show Blend Shapes culling difference
    ```

- **ca_vaBlendCullingThreshold**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Blend Shapes culling threshold
    ```

- **ca_vaBlendEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Vertex Animation blends
    ```

- **ca_vaBlendPostSkinning**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Perform Vertex Animation blends post skinning
    ```

- **ca_vaEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Vertex Animation
    ```

- **ca_vaProfile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Vertex Animation profile
    ```

- **ca_vaScaleFactor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Vertex Animation Weight Scale Factor
    ```

- **ca_vaSkipVertexAnimationLOD**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Skip LOD 0 for characters using vertex animation
    ```

- **ca_vaUpdateTangents**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Update Tangents on SKIN attachments that have the vertex color blue channel set to 255 and 8 weights
    ```

- **capture_file_format**:

  - **Default Value:** `jpg`

  - **Description:**

    ```text
Specifies file format of captured files (jpg, tga).
    ```

- **capture_file_name**:

  - **Default Value:** ``

  - **Description:**

    ```text
If set, specifies the path and name to use for the captured frame
    ```

- **capture_file_prefix**:

  - **Default Value:** ``

  - **Description:**

    ```text
If set, specifies the prefix to use for the captured frame instead of the default 'Frame'.
    ```

- **capture_folder**:

  - **Default Value:** `CaptureOutput`

  - **Description:**

    ```text
Specifies sub folder to write captured frames.
    ```

- **capture_frame_once**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Makes capture single frame only
    ```

- **capture_frames**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables capturing of frames. 0=off, 1=on
    ```

- **capture_frames_pause**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pauses capturing of frames for given number of frames.
    ```

- **cl_AISystem**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Load and use the AI system on the client
    ```

- **cl_DefaultNearPlane**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
The default camera near plane. 
    ```

- **cl_DisableHUDText**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force disable all output from HUD Debug text nodes
    ```

- **cl_ETColorOverrideB**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Global color override (BLUE)
    ```

- **cl_ETColorOverrideEnable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Global color override
    ```

- **cl_ETColorOverrideG**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Global color override (GREEN)
    ```

- **cl_ETColorOverrideR**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Global color override (RED)
    ```

- **cl_ETFontSizeMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Global font size multiplier
    ```

- **cl_ETHideAIDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide AI debug tags
    ```

- **cl_ETHideAll**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide all tags (overrides all other options)
    ```

- **cl_ETHideBehaviour**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide AI behavior tags
    ```

- **cl_ETHideFlowgraph**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide tags created by flowgraph
    ```

- **cl_ETHideReadability**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide AI readability tags
    ```

- **cl_ETHideScriptBind**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide tags created by Lua script
    ```

- **cl_ETLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logging (0=off, 1=editor.log, 2=editor.log + AIlog.log)
    ```

- **cl_ETMaxDisplayDistance**:

  - **Default Value:** `-2`

  - **Description:**

    ```text
Max display distance
    ```

- **cl_ViewSystemDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets Debug information of the ViewSystem.
    ```

- **cl_actorsafemode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable actor safe mode
    ```

- **cl_bandwidth**:

  - **Default Value:** `50000`

  - **Description:**

    ```text
Bit rate on client
    ```

- **cl_bob**:

  - **Default Value:** `1`

  - **Description:**

    ```text
view/weapon bobbing multiplier
    ```

- **cl_camKeepX**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Fraction of camera x-axis rotation to keep.
    ```

- **cl_camKeepY**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Fraction of camera y-axis rotation to keep.
    ```

- **cl_camKeepZ**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Fraction of camera z-axis rotation to keep.
    ```

- **cl_camModify**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable camera modifiers.
    ```

- **cl_camOffsetX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Degrees to offset camera around x-axis.
    ```

- **cl_camOffsetY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Degrees to offset camera around y-axis.
    ```

- **cl_camOffsetZ**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Degrees to offset camera around z-axis.
    ```

- **cl_camRotateX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Degrees to rotate camera per second around x-axis.
    ```

- **cl_camRotateY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Degrees to rotate camera per second around y-axis.
    ```

- **cl_camRotateZ**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Degrees to rotate camera per second around z-axis.
    ```

- **cl_camTranslateX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Translate along camera local x-axis.
    ```

- **cl_camTranslateY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Translate along camera local y-axis.
    ```

- **cl_camTranslateZ**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Translate along camera local z-axis.
    ```

- **cl_cam_PitchMax**:

  - **Default Value:** `2.18`

  - **Description:**

    ```text
Max camera pitch
    ```

- **cl_cam_PitchMin**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Min camera pitch
    ```

- **cl_cam_auto_follow_movement_speed**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Camera auto-rotate reacts on player movement on/off.
    ```

- **cl_cam_auto_follow_rate**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Scale the speed at which the camera auto-rotates in player direction (0.0f is off).
    ```

- **cl_cam_auto_follow_threshold**:

  - **Default Value:** `0.942478`

  - **Description:**

    ```text
Camera auto-rotate threshold angle (how close it rotates to hero direction).
    ```

- **cl_cam_clipping_offset_distance**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Distance at which the camera starts offsetting horizontally to prevent clipping through the character/target.
    ```

- **cl_cam_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Camera system debug output.
    ```

- **cl_cam_enable_lazy_cam**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Follow camera is 'lazy' and doesn't keep player in screen center.
    ```

- **cl_cam_keyLeftRightMove_SmoothingTime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Time to interpolate the keyboard turning to full
    ```

- **cl_cam_lazy_cam_distance_XY**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Camera movement distance threshold in lazy cam mode. Bigger value => more lazy.
    ```

- **cl_cam_lazy_cam_distance_Z**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Camera movement distance threshold in lazy cam mode. Bigger value => more lazy.
    ```

- **cl_cam_lazy_cam_time_XY**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Camera movement time in lazy cam mode. Bigger value => more lazy.
    ```

- **cl_cam_lazy_cam_time_Z**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Camera movement time in lazy cam mode. Bigger value => more lazy.
    ```

- **cl_cam_min_distance**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Minimum distance for debugging.
    ```

- **cl_cam_mousePitchScale**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Camera pitch dampening.
    ```

- **cl_cam_mouseYawScale**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Camera yaw dampening.
    ```

- **cl_cam_orbit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
In Third Person mode this will enable orbit camera
see cl_cam_orbit_offset how to setup offset for this camera
see cl_cam_orbit_slide and cl_cam_orbit_slidespeed how to setup slide for object clipping
    ```

- **cl_cam_orbit_distance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Distance of orbit camera.
    ```

- **cl_cam_orbit_offsetX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
X Offset of orbit camera.
    ```

- **cl_cam_orbit_offsetZ**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Z Offset of orbit camera.
    ```

- **cl_cam_orbit_slide**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable camera slide (Orbit mode).
    ```

- **cl_cam_orbit_slidespeed**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Camera slide speed (Orbit mode).
    ```

- **cl_cam_pitch_input_inertia**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Time delay until the camera fully stops after moving right stick in nav mode.
    ```

- **cl_cam_rotation_acceleration_time_pitch**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Camera pitch acceleration time.
    ```

- **cl_cam_rotation_acceleration_time_yaw**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Camera yaw acceleration time.
    ```

- **cl_cam_rotation_enable_acceleration**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Camera rotation is accelerating, not jumping on / off.
    ```

- **cl_cam_rotation_speed**:

  - **Default Value:** `0.054`

  - **Description:**

    ```text
Camera rotation speed.
    ```

- **cl_cam_tracking**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Camera tracking enable/disable.
    ```

- **cl_cam_tracking_allow_pitch**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Camera tracking changes also vertical movement.
    ```

- **cl_cam_tracking_rotation_speed**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Speed multiplicator, adjusting rotation speed.
    ```

- **cl_cam_tracking_volume**:

  - **Default Value:** `5000`

  - **Description:**

    ```text
By default cam tracking ignores trees, but when they are bigger than this volume, they get tracked around.
    ```

- **cl_cam_yaw_input_inertia**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Time delay until the camera fully stops after moving right stick in nav mode.
    ```

- **cl_camera_noise**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Adds hand-held like camera noise to the camera view. 
 The higher the value, the higher the noise.
 A value <= 0 disables it.
    ```

- **cl_camera_noise_freq**:

  - **Default Value:** `2.53262`

  - **Description:**

    ```text
Defines camera noise frequency for the camera view. 
 The higher the value, the higher the noise.
    ```

- **cl_comment**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hide/Unhide comments in game-mode
    ```

- **cl_crouchToggle**:

  - **Default Value:** `1`

  - **Description:**

    ```text
To make the crouch key work as a toggle
    ```

- **cl_debugSwimming**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable swimming debugging
    ```

- **cl_enable_tree_transparency**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Switches tree transparency on/off.
    ```

- **cl_fake_first_person**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable fake first person view in new new camera control system (cl_cam_orbit 1).
    ```

- **cl_fov**:

  - **Default Value:** `65`

  - **Description:**

    ```text
vertical field of view.
    ```

- **cl_fovBlendTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Field of view blend delay
    ```

- **cl_headBob**:

  - **Default Value:** `1`

  - **Description:**

    ```text
head bobbing multiplier
    ```

- **cl_headBobLimit**:

  - **Default Value:** `0.06`

  - **Description:**

    ```text
head bobbing distance limit
    ```

- **cl_hfov**:

  - **Default Value:** `95`

  - **Description:**

    ```text
horizontal field of view.
    ```

- **cl_hitBlur**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
blur on hit
    ```

- **cl_hitShake**:

  - **Default Value:** `1.25`

  - **Description:**

    ```text
hit shake
    ```

- **cl_initClientActor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables actionmap and view setup for the client actor after connection.
Default is 1.

    ```

- **cl_invertCombatMouse**:

  - **Default Value:** `0`

  - **Description:**

    ```text
invert in combat vertical axis [0 - no invert / 1 - inverted]
    ```

- **cl_invertMouse**:

  - **Default Value:** `0`

  - **Description:**

    ```text
invert mouse vertical axis [0 - no invert / 1 - inverted]
    ```

- **cl_joy_nav_maxH**:

  - **Default Value:** `2.05`

  - **Description:**

    ```text
max Horz turn speed in nav mode
    ```

- **cl_joy_nav_maxV**:

  - **Default Value:** `2`

  - **Description:**

    ```text
max Vert turn speed in nav mode
    ```

- **cl_joy_nav_sensitivityH**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
the stick centre to edge Horz turn sensitivity in nav mode
    ```

- **cl_joy_nav_sensitivityV**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
the stick centre to edge Vert turn sensitivity in nav mode
    ```

- **cl_joy_nav_speedH**:

  - **Default Value:** `2.05`

  - **Description:**

    ```text
scale the Horz turn speed in nav mode
    ```

- **cl_joy_nav_speedV**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
scale the Vert turn speed in nav mode
    ```

- **cl_joy_nav_useHforV**:

  - **Default Value:** `0`

  - **Description:**

    ```text
non zero => use the H values for V as well
    ```

- **cl_nearPlane**:

  - **Default Value:** `0`

  - **Description:**

    ```text
overrides the near clipping plane if != 0, just for testing.
    ```

- **cl_nearPlaneMin**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Minimum Near clipping plane value. Used when overriding ZNear in CameraManager (ProcClip)
    ```

- **cl_nickname**:

  - **Default Value:** ``

  - **Description:**

    ```text
Nickname for player on connect.
    ```

- **cl_packetRate**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Packet rate on client
    ```

- **cl_righthand**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Select right-handed weapon!
    ```

- **cl_screeneffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable player screen effects (depth-of-field, motion blur, ...).
    ```

- **cl_sensitivity**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Set mouse sensitivity!
    ```

- **cl_serveraddr**:

  - **Default Value:** `localhost`

  - **Description:**

    ```text
Server address
    ```

- **cl_serverpassword**:

  - **Default Value:** ``

  - **Description:**

    ```text
Server password
    ```

- **cl_serverport**:

  - **Default Value:** `64087`

  - **Description:**

    ```text
Server port
    ```

- **cl_shallowWaterDepthHi**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shallow water depth high (above has full slowdown)
    ```

- **cl_shallowWaterDepthLo**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Shallow water depth low (below has zero slowdown)
    ```

- **cl_shallowWaterSpeedMulAI**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Shallow water speed multiplier (AI only)
    ```

- **cl_shallowWaterSpeedMulPlayer**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
shallow water speed multiplier (Players only)
    ```

- **cl_sprintRestingTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
How long needs the player to rest until he can sprint again
    ```

- **cl_sprintShake**:

  - **Default Value:** `0`

  - **Description:**

    ```text
sprint shake
    ```

- **cl_sprintTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
How long can the player sprint
    ```

- **cl_sprintToggle**:

  - **Default Value:** `1`

  - **Description:**

    ```text
To make the sprint key work as a toggle
    ```

- **cl_sprintTurnOffHoldTime**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
If player holds the sprint key for too long then he will stop sprinting after releasing it [s]
    ```

- **cl_sprintTurnOffMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
0 = do not turn off the sprint if we hold the sprint key for too long (and then release it)
1 = turn off the sprint when holding the key for too long (only on PC)
2 = turn off the sprint when holding the key for too long (both PC and consoles)
    ```

- **cl_strengthscale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
nanosuit strength scale
    ```

- **cl_tpvAngDamping**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Camera angle damping: 0..N 0 = camera responds immediately.
    ```

- **cl_tpvAngDampingNav**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Camera angle damping: 0..N 0 = camera responds immediately.
    ```

- **cl_tpvDeltaDist**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Affects how far the cam can lag the player
    ```

- **cl_tpvDeltaDistNav**:

  - **Default Value:** `2.55`

  - **Description:**

    ```text
Nav mode: Affects how far the cam can lag the player
    ```

- **cl_tpvDeltaVel**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Affects how far the cam can lag the player
    ```

- **cl_tpvDeltaVelNav**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Nav mode: Affects how far the cam can lag the player
    ```

- **cl_tpvDist**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
camera distance in 3rd person view
    ```

- **cl_tpvFOVDamping**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Camera FOV damping
    ```

- **cl_tpvPosDamping**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Camera position damping: 0..N 0 = camera responds immediately.
    ```

- **cl_tpvPosDampingNav**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Nav mode: Camera position damping: 0..N 0 = camera responds immediately.
    ```

- **cl_tpvYaw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
camera angle offset in 3rd person view
    ```

- **cl_useCurrentUserNameAsDefault**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use the current user name instead of the default profile's name
    ```

- **cl_visualLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables Visual Logging.
    ```

- **cl_visualLogFolder**:

  - **Default Value:** `VisualLog`

  - **Description:**

    ```text
Specifies sub folder to write logs to.
    ```

- **cl_visualLogImageFormat**:

  - **Default Value:** `bmp`

  - **Description:**

    ```text
Specifies file format of captured files (jpg, bmp).
    ```

- **cl_visualLogImageScale**:

  - **Default Value:** `128`

  - **Description:**

    ```text
Image size. [0-1] = scale value. >1 = actual pixels for image width
    ```

- **cl_voice_recording**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable client voice recording
    ```

- **cl_voice_volume**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set VOIP playback volume: 0-1
    ```

- **co_coopAnimDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Cooperative Animation debug output
    ```

- **co_slideWhileStreaming**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows the sliding while the anims are being streamed. Otherwise the sliding step while wait until the anims are streaming
    ```

- **co_usenewcoopanimsystem**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Uses the new cooperative animation system which works without the animation graph
    ```

- **con_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log call stack on every GetCVar call
    ```

- **con_display_last_messages**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **con_line_buffer_size**:

  - **Default Value:** `1000`

  - **Description:**

    ```text

    ```

- **con_restricted**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=normal mode / 1=restricted access to the console
    ```

- **con_showonload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show console on level loading
    ```

- **ctrl_Coeff_X**:

  - **Default Value:** `12.25`

  - **Description:**

    ```text
Analog controller X rotation scale
    ```

- **ctrl_Coeff_Z**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Analog controller Z rotation scale
    ```

- **ctrl_Curve_X**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Analog controller X rotation curve
    ```

- **ctrl_Curve_Z**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Analog controller Z rotation curve
    ```

- **ctrl_ZoomMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Weapon aiming mode with controller. 0 is same as mouse zoom, 1 cancels at release
    ```

- **ctrl_aspectCorrection**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Aspect ratio corrections for controller rotation: 0-off, 1-direct, 2-inverse
    ```

- **ctrl_input_smoothing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Smooths rotation input in GDC demo.
    ```

- **ctrlr_corner_smoother**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets the maximally allowed method for taking smooth corners; 0 = none; 1 = C2 method, smoothcd of angle; 2 = C3 method, using splines
    ```

- **ctrlr_corner_smoother_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debugging for corner smoother.
    ```

- **ctrlr_corner_smoother_target_max_distance**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
If move target is farther than this distance it is clamped by this.
    ```

- **cvDoVerboseWindowTitle**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **d3d11_CBUpdateStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs constant buffer updates statistics.
    ```

- **d3d11_forcedFeatureLevel**:

  - **Default Value:** ``

  - **Description:**

    ```text
Forces the Direct3D device to target a specific feature level - supported values are:
 10_0
 10_1
 11_0
 11_1
    ```

- **d3d11_preventDriverThreading**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Prevent internal threading optimizations for D3D Device.

    ```

- **demo_ai**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable AI during the demo
    ```

- **demo_file**:

  - **Default Value:** `timedemo`

  - **Description:**

    ```text
Time Demo Filename
    ```

- **demo_finish_cmd**:

  - **Default Value:** ``

  - **Description:**

    ```text
Console command to run when demo is finished
    ```

- **demo_finish_memreplay_sizer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Add a crysizer tree to memreplay when demo is finished
    ```

- **demo_finish_memreplay_stop**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Stop memreplay when demo is finished
    ```

- **demo_fixed_timestep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
number of updates per second
    ```

- **demo_game_state**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable/disable the game state recording
    ```

- **demo_max_frames**:

  - **Default Value:** `100000`

  - **Description:**

    ```text
Max number of frames to save
    ```

- **demo_noinfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable info display during demo playback
    ```

- **demo_num_orientations**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Number of horizontal orientations to play the demo using
e.g. 3 will play: looking ahead, 120deg left, 120deg right
default/min: 1
    ```

- **demo_num_runs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Number of times to loop timedemo
    ```

- **demo_panoramic**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Panoramic view when playing back demo
    ```

- **demo_profile**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable demo profiling
    ```

- **demo_quit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Quit game after demo runs finished
    ```

- **demo_replay_entities**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable restoring entities during demo playback
    ```

- **demo_restart_level**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Restart level after each loop: 0 = Off; 1 = use quicksave on first playback; 2 = load level start
    ```

- **demo_save_every_frame**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save timedemo every frame during recording, in case game crashes timedemo will be reliable
    ```

- **demo_savestats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save level stats at the end of the loop
    ```

- **demo_screenshot_frame**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Make screenshot on specified frame during demo playback, If Negative then do screen shoot every N frame
    ```

- **demo_scroll_pause**:

  - **Default Value:** `1`

  - **Description:**

    ```text
ScrollLock pauses demo play/record
    ```

- **demo_start_cmd**:

  - **Default Value:** ``

  - **Description:**

    ```text
Console command to run when demo is started
    ```

- **demo_time_of_day**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Sets the time of day to override in game settings if not negative
    ```

- **demo_use_hmd_rotation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Uses alternative entity and view rotation for HMD Devices
    ```

- **demo_vtune**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables VTune profiling when running time demo
    ```

- **designer_warning_enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
designer warnings are enabled
    ```

- **designer_warning_level_resources**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Designer warnings about resource load during run-time
    ```

- **dlc_directory**:

  - **Default Value:** ``

  - **Description:**

    ```text
Holds the path to the directory where DLC should be installed to and read from
    ```

- **dt_enable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
suit actions activated by double-tapping
    ```

- **dt_meleeTime**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
time in seconds between double taps for melee
    ```

- **dt_time**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
time in seconds between double taps
    ```

- **e_3dEngineLogAlways**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set maximum verbosity to 3dengine.dll log messages
    ```

- **e_3dEngineTempPoolSize**:

  - **Default Value:** `8192`

  - **Description:**

    ```text
pool size for temporary allocations in kb, requires app restart
    ```

- **e_AutoPrecacheCameraJumpDist**:

  - **Default Value:** `16`

  - **Description:**

    ```text
When not 0 - Force full pre-cache of textures, procedural vegetation and shaders
if camera moved for more than X meters in one frame or on new cut scene start
    ```

- **e_AutoPrecacheCgf**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Force auto pre-cache of CGF render meshes. 1=pre-cache all mehes around camera. 2=pre-cache only important ones (twice faster)
    ```

- **e_AutoPrecacheTerrainAndProcVeget**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force auto pre-cache of terrain textures and procedural vegetation
    ```

- **e_AutoPrecacheTexturesAndShaders**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force auto pre-cache of general textures and shaders
    ```

- **e_AutoViewDistRatio**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If  - will be skip auto calculating the ViewDistRatio for a selected object
    ```

- **e_BBoxes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates drawing of bounding boxes
    ```

- **e_BreezeAffectsRigidsWH**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables interaction between breeze the physical CRigidEntity 
0 - off
1 - on
    ```

- **e_BrushUseTerrainColor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow blend with terrain color for brushes
    ```

- **e_Brushes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Draw brushes
    ```

- **e_CGFMaxFileSize**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
will refuse to load any cgf larger than the given filesize (in kb)
-1 - 1024 (<0 off (default), >0 filesize limit)
    ```

- **e_CacheNearestCubePicking**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable caching nearest cube maps probe picking for alpha blended geometry
    ```

- **e_CameraFreeze**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Freeze 3dengine camera (good to debug object culling and LOD).
The view frustum is drawn in write frame.
 0 = off
 1 = activated
    ```

- **e_CameraGoto**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Move cameras to a certain pos/angle
    ```

- **e_CameraRotationSpeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Rotate camera around Z axis for debugging
    ```

- **e_CharLodMin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Min LOD for character objects
    ```

- **e_CharRenderLodMin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Min LOD for character objects (used for rendering)
    ```

- **e_CheckOcclusion**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Perform a visible check in check occlusion job
    ```

- **e_CheckOcclusionJobBatchSize**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Size of the job request batch.
    ```

- **e_CheckOcclusionOutputQueueSize**:

  - **Default Value:** `32768`

  - **Description:**

    ```text
Size of queue for data send from check occlusion job
    ```

- **e_CheckOctreeObjectsBoxSize**:

  - **Default Value:** `1`

  - **Description:**

    ```text
CryWarning for crazy sized COctreeNode m_objectsBoxes
    ```

- **e_ClipVolumes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable light clip volumes. Default: 1 - Enabled
    ```

- **e_Clouds**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable clouds rendering
    ```

- **e_CoverCgfDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows the cover setups on cfg files
    ```

- **e_CoverageBuffer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates usage of software coverage buffer.
1 - camera culling only
2 - camera culling and light-to-object check
    ```

- **e_CoverageBufferAABBExpand**:

  - **Default Value:** `-0.1`

  - **Description:**

    ```text
expanding the AABB's of the objects to test to avoid z-fighting issues in the Coverage buffer
    ```

- **e_CoverageBufferBias**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Coverage buffer z-biasing
    ```

- **e_CoverageBufferCullIndividualBrushesMaxNodeSize**:

  - **Default Value:** `16`

  - **Description:**

    ```text
128 - cull only nodes of scene tree and very big brushes
0 - cull all brushes individually
    ```

- **e_CoverageBufferDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display content of main camera coverage buffer
    ```

- **e_CoverageBufferDebugFreeze**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Freezes view matrix/-frustum 
    ```

- **e_CoverageBufferDrawOccluders**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw of occluders for coverage buffer
    ```

- **e_CoverageBufferEarlyOut**:

  - **Default Value:** `1`

  - **Description:**

    ```text
preempting occluder rasterization to avoid stalling in the main thread if rendering is faster
    ```

- **e_CoverageBufferEarlyOutDelay**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Time in ms that rasterizer is allowed to continue working after early out request
    ```

- **e_CoverageBufferOccludersViewDistRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug
    ```

- **e_CoverageBufferRastPolyLimit**:

  - **Default Value:** `60000`

  - **Description:**

    ```text
maximum amount of polys to rasterize cap, 0 means no limit
default is 500000
    ```

- **e_CoverageBufferReproj**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Selects occlusion culling mode
  1 - Simple reprojection
  2 - Reprojection with hole filling
  4 - Rasterized occlusion meshes
  6 - Reprojection and occlusion meshes
    ```

- **e_CoverageBufferShowOccluder**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 show only meshes used as occluder, 2 show only meshes not used as occluder
    ```

- **e_CoverageBufferTerrain**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates usage of coverage buffer for terrain
    ```

- **e_CoverageBufferTerrainExpand**:

  - **Default Value:** `0.025`

  - **Description:**

    ```text
expanding the AABB Z axis of terrain to avoid flat terrain flickering
    ```

- **e_CullVegActivation**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Vegetation activation distance limit; 0 disables visibility-based culling (= unconditional activation)
    ```

- **e_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** ``

  - **Description:**

    ```text
Show a specified text on DebugDraw
    ```

- **e_DebugDrawMaxDistance**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Draw distance for e_debugDraw text
    ```

- **e_DebugDrawShowOnlyCompound**:

  - **Default Value:** `0`

  - **Description:**

    ```text
e_DebugDraw shows only Compound (less efficient) static meshes
    ```

- **e_DebugDrawShowOnlyLod**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
e_DebugDraw shows only objects showing lod X
    ```

- **e_DebugGeomPrep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable logging of Geom preparation
    ```

- **e_DebugLights**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use different colors for objects affected by different number of lights
black:0, blue:1, green:2, red:3 or more, blinking yellow: more then the maximum enabled
Obsolete for deferred lights. Use r_DeferredShadingDebug.
    ```

- **e_Decals**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 - Activates drawing of decals (game decals and hand-placed)
2 - Displays debug stats and indicators for decals
    ```

- **e_DecalsAllowGameDecals**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows creation of decals by game (like weapon bullets marks)
    ```

- **e_DecalsClip**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Clip decal geometry by decal bbox
    ```

- **e_DecalsDeferredDynamic**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 - make all game play decals deferred, 2 - make all game play decals non deferred
    ```

- **e_DecalsDeferredDynamicDepthScale**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Scale decal projection depth
    ```

- **e_DecalsForceDeferred**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - force to convert all decals to use deferred ones
    ```

- **e_DecalsHitCache**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use smart hit caching for bullet hits (may cause no decals in some cases)
    ```

- **e_DecalsLifeTimeScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows to increase or reduce decals life time for different specs
    ```

- **e_DecalsMaxTrisInObject**:

  - **Default Value:** `8000`

  - **Description:**

    ```text
Do not create decals on objects having more than X triangles
    ```

- **e_DecalsMaxUpdatesPerFrame**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum number of static decal render mesh updates per frame
    ```

- **e_DecalsMaxValidFrames**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Number of frames after which not visible static decals are removed
    ```

- **e_DecalsMerge**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Combine pieces of decals into one render call
    ```

- **e_DecalsNeighborMaxLifeTime**:

  - **Default Value:** `4`

  - **Description:**

    ```text
If not zero - new decals will force old decals to fade in X seconds
    ```

- **e_DecalsOverlapping**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If zero - new decals will not be spawned if the distance to nearest decals less than X
    ```

- **e_DecalsPlacementTestAreaSize**:

  - **Default Value:** `0.08`

  - **Description:**

    ```text
Avoid spawning decals on the corners or edges of entity geometry
    ```

- **e_DecalsPlacementTestMinDepth**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Avoid spawning decals on the corners or edges of entity geometry
    ```

- **e_DecalsPreCreate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Pre-create decals at load time
    ```

- **e_DecalsRange**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Less precision for decals outside this range
    ```

- **e_DecalsSpawnDistRatio**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Max distance ratio for spawning dynamic decals.
This will be applied on top of e_ViewDistRatio
    ```

- **e_DefaultMaterial**:

  - **Default Value:** `0`

  - **Description:**

    ```text
use gray illumination as default
    ```

- **e_DeferredPhysicsEvents**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable to Perform some physics events deferred as a task/job
    ```

- **e_DeformableObjects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable / Disable morph based deformable objects
    ```

- **e_DisplayMemoryUsageIcon**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Turns On/Off the memory usage icon rendering: 1 on, 0 off.
    ```

- **e_DissolveUsePermanentRenderObjects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates usage of permanent render objects for lod disolving.
    ```

- **e_DynamicDistanceShadows**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable dynamic distance shadows, 0 = disable, 1 = enable only for movable object types, 2 = enable for all object types, -1 = don't render dynamic distance shadows
    ```

- **e_DynamicLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates dynamic light sources
  0 - Disable dynamic lights
  1 - Enable dynamic lights
  2 - Show entity debug info on regular lights
  3 - Show entity debug info on environment probes
    ```

- **e_DynamicLightsConsistentSortOrder**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug
    ```

- **e_DynamicLightsForceDeferred**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Convert all lights to deferred (except sun)
    ```

- **e_DynamicLightsFrameIdVisTest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use based on last draw frame visibility test
    ```

- **e_DynamicLightsMaxCount**:

  - **Default Value:** `512`

  - **Description:**

    ```text
Sets maximum amount of dynamic light sources
    ```

- **e_Entities**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of entities and brushes
    ```

- **e_EntitySuppressionLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Defines the level at which entities are spawned.
Entities marked with lower level will not be spawned - 0 means no level.
Usage: e_EntitySuppressionLevel [0-infinity]
Default is 0 (off)
    ```

- **e_ExecuteRenderAsJobMask**:

  - **Default Value:** `3.32185e+07`

  - **Description:**

    ```text
Each bit specifies object type to render it in jobs
    ```

- **e_Fog**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates global height/distance based fog
    ```

- **e_FogVolumes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates local height/distance based fog volumes
    ```

- **e_FoliageBranchesDamping**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Damping of branch ropes
    ```

- **e_FoliageBranchesStiffness**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Stiffness of branch ropes
    ```

- **e_FoliageBranchesTimeout**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum lifetime of branch ropes (if there are no collisions)
    ```

- **e_FoliageBrokenBranchesDamping**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Damping of branch ropes of broken vegetation
    ```

- **e_FoliageStiffness**:

  - **Default Value:** `3.2`

  - **Description:**

    ```text
Stiffness of the spongy obstruct geometry
    ```

- **e_FoliageWindActivationDist**:

  - **Default Value:** `25`

  - **Description:**

    ```text
If the wind is sufficiently strong, visible foliage in this view dist will be forcefully activated
    ```

- **e_ForceDetailLevelForScreenRes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[DEPRECATED] Force sprite distance and other values used for some specific screen resolution, 0 means current
    ```

- **e_GeomCacheBufferSize**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Geometry cache stream buffer upper limit size in MB. Default: 32, IGNORED if e_GeomCacheUsePoolMemory is set to 0!
    ```

- **e_GeomCacheDecodeAheadTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Time in seconds that data will be decoded ahead for geom cache streaming. Default: 0.5
    ```

- **e_GeomCacheEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable Geom Caches
    ```

- **e_GeomCacheLerpBetweenFrames**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Interpolate between geometry cache frames. Default: 1
    ```

- **e_GeomCacheMaxBufferAheadTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time in seconds maximum that data will be buffered ahead for geom cache streaming. Default: 5.0
    ```

- **e_GeomCacheMaxPlaybackFromMemorySize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum size of geometry cache animated data in MB before always streaming from disk ignoring the memory playback flag. Default: 16
    ```

- **e_GeomCacheMinBufferAheadTime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Time in seconds minimum that data will be buffered ahead for geom cache streaming. Default: 2.0
    ```

- **e_GeomCachePreferredDiskRequestSize**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Preferred disk request size for geometry cache streaming in KB. Default: 1024
    ```

- **e_GeomCacheUsePoolMemory**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specify if should use pool to allocate space for geom caches of just classic malloc. Default: 0 - malloc
    ```

- **e_GeomCaches**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of geometry caches
    ```

- **e_GsmCastFromTerrain**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows sun shadows from terrain to be activated in editor level settings
    ```

- **e_GsmDepthBoundsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug GSM bounds regions calculation
    ```

- **e_GsmLodsNum**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of GSM lods (0..5)
    ```

- **e_GsmSizesWH**:

  - **Default Value:** `2,8,32,120,600`

  - **Description:**

    ```text
Comma separated list of sizes for GSM LODs (in meters)
    ```

- **e_GsmStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show GSM statistics 0=off, 1=enable debug to the screens
    ```

- **e_HwOcclusionCullingWater**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates usage of HW occlusion test for ocean
    ```

- **e_JointStrengthScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales the strength of prebroken objects' joints (for tweaking)
    ```

- **e_LightIlluminanceThreshold**:

  - **Default Value:** `0.004`

  - **Description:**

    ```text
Min illuminance to determine light effect radius
    ```

- **e_LightShadowCastSpecWH**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Only lights with a shadow casting parameter set to less than or equal to this cvar will cast shadows
    ```

- **e_LightVolumes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows deferred lighting for registered alpha blended geometry
0 = Off
1 = Enabled
2 = Enabled just for sun light

    ```

- **e_LightVolumesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display light volumes culling debug info. Setting this to nonzero value will render color-coded AABBs of lights.
	gray   - octree node was visible, but the light was culled (typically by distance)
	blue   - environment probe
	white  - reflex light/area light
	red    - light with shadows
	orange - light without shadows

    ```

- **e_LodCompMaxSize**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Affects LOD selection for big objects, small number will switch more objects into lower LOD
    ```

- **e_LodFaceArea**:

  - **Default Value:** `2`

  - **Description:**

    ```text
LOD selection method:
0 - [deprecated] Use mesh size, adjusted by e_LodRatio
1 - [current] Use geometric mean face area of base mesh only, e_LodFaceAreaTargetSize specifies radians per base-mesh vertex
2 - [experimental] Use geometric mean face area of all mesh LODs, e_LodFaceAreaTargetSize specifies radians per vertex
3 - [experimental] Use geometric mean face area of all mesh LODs, e_LodFaceAreaPixels specifies pixels per vertex

    ```

- **e_LodFaceAreaPixels**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Target pixel distance for LOD vertices.
    ```

- **e_LodFaceAreaTargetSize**:

  - **Default Value:** `0.005`

  - **Description:**

    ```text
Target radian span for LOD vertices.
    ```

- **e_LodFaceAreaTargetSizeVegetationMult**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Ability to tweak vegetation LODs separately from environment.
This value multiplies e_LodFaceAreaTargetSize for vegetation render nodes.
    ```

- **e_LodMax**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Max LOD for objects
    ```

- **e_LodMin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Min LOD for objects
    ```

- **e_LodMinTtris**:

  - **Default Value:** `300`

  - **Description:**

    ```text
LODs with less triangles will not be used
    ```

- **e_LodRatio**:

  - **Default Value:** `6`

  - **Description:**

    ```text
LOD distance ratio for objects
    ```

- **e_LodTransitionTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
If non 0 - use dissolve for smooth LOD transition
    ```

- **e_Lods**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Load and use LOD models for static geometry
    ```

- **e_LodsForceUse**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Force using LODs even if triangle count do not suit
    ```

- **e_MaxDrawCalls**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Will not render CGFs past the given amount of drawcalls
(<=0 off (default), >0 draw calls limit)
    ```

- **e_MaxViewDistFullDistCamHeight**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Debug
    ```

- **e_MaxViewDistSpecLerp**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 - use max view distance set by designer for very high spec
0 - for very low spec
Values between 0 and 1 - will lerp between high and low spec max view distances
    ```

- **e_MaxViewDistance**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Far clipping plane distance
    ```

- **e_MergedMeshes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Show runtime merged meshes
0: Disabled
1: Enabled
2: Enabled even when vegetation is disabled
    ```

- **e_MergedMeshesActiveDist**:

  - **Default Value:** `250`

  - **Description:**

    ```text
Active distance up until merged mesh patches will be streamed in
    ```

- **e_MergedMeshesBufferWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles merged meshes buffer type
0: eRMT_Dynamic
1: eRMT_Static
    ```

- **e_MergedMeshesBulletLifetime**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
MergedMesh Bullet approximations lifetime
    ```

- **e_MergedMeshesBulletScale**:

  - **Default Value:** `35`

  - **Description:**

    ```text
MergedMesh Bullet approximations size scale
    ```

- **e_MergedMeshesBulletSpeedFactor**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
MergedMesh Bullet approximations speed factor
    ```

- **e_MergedMeshesCullingLodRatioWH**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Adjusts LOD distance for culling merged meshes.
    ```

- **e_MergedMeshesDebug**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `27000`

  - **Description:**

    ```text
First value (BLUE->GREEN) for gradient used by e_MergedMeshesDebug=128
    ```

- **e_MergedMeshesDebugMaxCnt1**:

  - **Default Value:** `40000`

  - **Description:**

    ```text
Second value (GREEN->RED) for gradient used by e_MergedMeshesDebug=128
    ```

- **e_MergedMeshesDebugMaxCnt2**:

  - **Default Value:** `60000`

  - **Description:**

    ```text
Third value (MAGENTA) for gradient used by e_MergedMeshesDebug=128
    ```

- **e_MergedMeshesDedicatedCullingJob**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When enabled render of merged mesh creates dedicated job for culling.
When disabled culling is ran in the same job (unless render inside job is disabled elsewhere).
    ```

- **e_MergedMeshesDeformViewDistMod**:

  - **Default Value:** `0.45`

  - **Description:**

    ```text
distance modifier applied to view dist ratios after which deformables stop updating
    ```

- **e_MergedMeshesDissolveRangeShadowWH**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Sets how long the dissolve for shadows is (in meters).
    ```

- **e_MergedMeshesDissolveRangeWH**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Sets how long the dissolve is (in meters).
    ```

- **e_MergedMeshesForceUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
MergedMeshes will be updated even with zero dt
    ```

- **e_MergedMeshesInitialIterationsWH**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Number of iteration simulated on splines that was just loaded. Significantly affects performance
    ```

- **e_MergedMeshesInitialLongIterationWH**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Number of iteration simulated on FIRST spline that was just loaded. Used as baseline for other splines
    ```

- **e_MergedMeshesInitialPlasticityWH**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Remaining plasticity after initial update at [0,1]. It shrinks velocity.
    ```

- **e_MergedMeshesInitialSimulationWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable initial simulation - after turns and camera cuts
    ```

- **e_MergedMeshesInitialUpdateDistanceLodWH**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Number of meters after which we decrease the number of iteration. Should be low to prevent further MM from causing visual artifacts.
    ```

- **e_MergedMeshesInitialVelocityMultWH**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Multiplier for velocity after initial simulation .
    ```

- **e_MergedMeshesInstanceDist**:

  - **Default Value:** `4.5`

  - **Description:**

    ```text
Distance fudge factor at which merged meshes turn off animation
    ```

- **e_MergedMeshesLodRatio**:

  - **Default Value:** `3`

  - **Description:**

    ```text
merged meshes lod ratio
    ```

- **e_MergedMeshesMaxStreamingInProgress**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum MergedMesh streaming tasks in progress
    ```

- **e_MergedMeshesMaxTriangles**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Do not merge meshes containing too many triangles. It's more efficient to render them without merging
    ```

- **e_MergedMeshesOutdoorOnly**:

  - **Default Value:** `0`

  - **Description:**

    ```text
MergedMeshes will recieve ERF_OUTDOORONLY by default
    ```

- **e_MergedMeshesPool**:

  - **Default Value:** `2750`

  - **Description:**

    ```text
amount of mainmeory (in kb) that merged meshes are allowed to sustain
    ```

- **e_MergedMeshesPoolSpines**:

  - **Default Value:** `32`

  - **Description:**

    ```text
percentage of the pool for spines
    ```

- **e_MergedMeshesTesselationSupport**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable or disable support for tesselation on mergedmeshes
    ```

- **e_MergedMeshesUseDissolveWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables distance based dissolve for merged meshes.
    ```

- **e_MergedMeshesUseSpines**:

  - **Default Value:** `1`

  - **Description:**

    ```text
MergedMeshes use touchbending
    ```

- **e_MergedMeshesViewDistRatio**:

  - **Default Value:** `30`

  - **Description:**

    ```text
merged meshes view dist ratio
    ```

- **e_MinMassDistanceCheckRenderMeshCollision**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Minimum mass to check for e_DecalsRange as distance in a RenderMesh Collision check
    ```

- **e_ObjFastRegister**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug
    ```

- **e_ObjQuality**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Object detail quality
    ```

- **e_ObjShadowCastSpec**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Object shadow casting spec. Only objects with Shadow Cast Spec <= e_ObjShadowCastSpec will cast shadows
    ```

- **e_ObjStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show instances count
    ```

- **e_ObjectLayersActivation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow game to activate/deactivate object layers
    ```

- **e_ObjectLayersActivationPhysics**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow game to create/free physics of objects: 0: Disable; 1: All; 2: Water only.
    ```

- **e_Objects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Render or not all objects
    ```

- **e_ObjectsTreeBBoxes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw of object tree bboxes.0 - off1 - draw node boxes2 - draw objects boxes3 - draw node boxes and color them by being loaded or not, also draw, counts on top.
    ```

- **e_ObjectsTreeLevelsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If non 0 - render only octree nodes of specified size
    ```

- **e_ObjectsTreeNodeMinSize**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Controls objects tree balancing
    ```

- **e_ObjectsTreeNodeSizeRatio**:

  - **Default Value:** `0.0625`

  - **Description:**

    ```text
Controls objects tree balancing
    ```

- **e_OcclusionCullingViewDistRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Skip per object occlusion test for very far objects - culling on tree level will handle it
    ```

- **e_OcclusionLazyHideFrames**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Makes less occluson tests, but it takes more frames to detect invisible objects
    ```

- **e_OcclusionVolumes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable occlusion volumes(antiportals)
    ```

- **e_OcclusionVolumesViewDistRatio**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Controls how far occlusion volumes starts to occlude objects
    ```

- **e_OnDemandMaxSize**:

  - **Default Value:** `100000`

  - **Description:**

    ```text
Specifies the maximum size of vegetation objects that are physicalized on-demand
    ```

- **e_OnDemandPhysics**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Turns on on-demand physicalization (0=off, 1=vegetation only[default], 2=brushes only, 3=brushes&vegetation
    ```

- **e_ParticleShadowsNumGSMs**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Number of shadow GSMs used for particle shadows
    ```

- **e_Particles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of particles
    ```

- **e_ParticlesAllowRuntimeLoad**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow loading of dynamic particle effects at runtime
    ```

- **e_ParticlesAnimBlend**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Blend between animated texture frames
Usage: e_ParticlesAnimBlend [0/1/2]
0 = Off
1 = On
2 = Force
    ```

- **e_ParticlesAudio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles audio on particles on or off.
Usage: e_ParticlesAudio [0/1]
0 = Off
1 = On (Default)

    ```

- **e_ParticlesCollisions**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Enable collisions for non-physical particles:
  1 = terrain only, 2 = static objects also, 3 = dynamic objects also
    ```

- **e_ParticlesConvertPfx1**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Convert pfx1 to pfx2 when loaded. Combinable options:
  1 = Convert if pfx2 version doesn't exist.
  2 = Convert and overwrite pfx2 version.
  4 = Replace loaded pfx1 effects with pfx2 version.

    ```

- **e_ParticlesCullAgainstOcclusionBuffer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Cull Particles against the Occlusion Buffer
    ```

- **e_ParticlesCullAgainstViewFrustum**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Cull Particles against the view-frustum
    ```

- **e_ParticlesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Particle debug flags: <flags> to set, <flags>+ to add, <flags>- to remove 1 = show basic stats m = show memory usage r = show reiteration, rejection, and collision stats b = draw bounding boxes and labels, show bounding box stats x = show bounding box stats d = force dynamic bounds and update for all emitters c = disable clipping against water and vis area bounds z = freeze particle system t = used by developers to debug test algorithms
    ```

- **e_ParticlesDumpMemoryAfterMapLoad**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to 1 to dump particle memory informations after map load
    ```

- **e_ParticlesForceSeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 - every emitter is random unless a seed is specified
n - uses this value as seed for all emitters without specified seed
    ```

- **e_ParticlesGI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Apply global illumination to appropriate particle effects
Usage: e_ParticlesGI [0/1/2]
0 = Off
1 = On
2 = Force
    ```

- **e_ParticlesIndexPoolSize**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Memory Size of Index Pool between Particle and Render Thread
    ```

- **e_ParticlesLayeredUpdateMul**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier for layered particle update.
    ```

- **e_ParticlesLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows to have light source attached to every particle
0 = Off
1 = Deferred lights

    ```

- **e_ParticlesLightsViewDistRatio**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Set particles lights view distance ratio
    ```

- **e_ParticlesLod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier to particle count
    ```

- **e_ParticlesMaxDrawScreen**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Screen size max per particle -- fade out earlier
    ```

- **e_ParticlesMaxScreenFill**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Screen size max of total particles to draw
    ```

- **e_ParticlesMinDrawAlpha**:

  - **Default Value:** `0.004`

  - **Description:**

    ```text
Alpha cutoff for rendering particles
    ```

- **e_ParticlesMinDrawPixels**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Pixel size min per particle -- fade out earlier
    ```

- **e_ParticlesMinPhysicsDynamicBounds**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Min particle PhysicsType to force dynamic bounds computation:
  0 = never force, 1 = SimpleCollision, 2 = SimplePhysics, 3 = RigidBody
    ```

- **e_ParticlesMotionBlur**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Motion blur for particles
Usage: e_ParticlesMotionBlur [0/1/2]
0 = Off
1 = On
2 = Force
    ```

- **e_ParticlesObjectCollisions**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enable particle/object collisions for SimpleCollision:
  1 = against static objects only, 2 = dynamic also
    ```

- **e_ParticlesPrecacheAssets**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Precache particle textures and meshes instead of streaming
    ```

- **e_ParticlesPreload**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable preloading of all particle effects at the beginning
    ```

- **e_ParticlesProfile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
PFx1 only:
1 - always show statistics about particle pools usage
2 - disable the warning message when running out of pool memory
    ```

- **e_ParticlesProfiler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Wavicle only:
1 - Display performance profiler on screen
2 - Display memory profiler on screen
f - Output statistics to a csv file
    ```

- **e_ParticlesProfilerCountBudget**:

  - **Default Value:** `80000`

  - **Description:**

    ```text
Particle counts budget to be shown during profiling
    ```

- **e_ParticlesProfilerOutputFolder**:

  - **Default Value:** `%USER%/ParticlesProfiler/`

  - **Description:**

    ```text
Folder to output particle profiler
    ```

- **e_ParticlesProfilerOutputName**:

  - **Default Value:** `frame`

  - **Description:**

    ```text
Name of the particle statistics file name
    ```

- **e_ParticlesProfilerTimingBudget**:

  - **Default Value:** `10000`

  - **Description:**

    ```text
Particle processing time budget (in nanoseconds) to be shown during profiling
    ```

- **e_ParticlesQuality**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Particles detail quality
    ```

- **e_ParticlesSerializeNamedFields**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Save effects libraries with named fields for future compatibility (compatible with versions >= 24)
    ```

- **e_ParticlesShadows**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shadows on particles
Usage: e_ParticlesShadows [0/1/2]
0 = Off
1 = On
2 = Force
    ```

- **e_ParticlesSoftIntersect**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Render appropriate particles with soft intersection
Usage: e_ParticlesSoftIntersect [0/1/2]
0 = Off
1 = On
2 = Force
    ```

- **e_ParticlesSortQuality**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimum sort quality for new particle insertion:
  0 = basic, 1 = better, 2 = best
    ```

- **e_ParticlesUseLevelSpecificLibs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows searching for level-specific version of effects files
0 = Off
1 = Enabled

    ```

- **e_ParticlesVertexPoolSize**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Memory Size of Vertex Pool between Particle and Render Thread
    ```

- **e_PermanentRenderObjectReserveTime**:

  - **Default Value:** `4`

  - **Description:**

    ```text
A permanent render objects will be freed after this time plus e_LodTransitionTime since its last usage.
    ```

- **e_PermanentRenderObjects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates usage of permanent render objects
2 = skip level objects where permanent render objects are used
    ```

- **e_PhysFoliage**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables physicalized foliage
1 - only for dynamic objects
2 - for static and dynamic)
    ```

- **e_PhysMinCellSize**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Min size of cell in physical entity grid
    ```

- **e_PhysOceanCell**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Cell size for ocean approximation in physics, 0 assumes flat plane
    ```

- **e_PhysProxyTriLimit**:

  - **Default Value:** `5000`

  - **Description:**

    ```text
Maximum allowed triangle count for phys proxies
    ```

- **e_Portals**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of visareas content (indoors), values 2,3,4 used for debugging
    ```

- **e_PortalsBigEntitiesFix**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables special processing of big entities like 1p vehicles intersecting portals
    ```

- **e_PortalsBlend**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Blend lights and cubemaps of vis areas connected to portals 0=off, 1=on
    ```

- **e_PortalsMaxRecursion**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Maximum number of visareas and portals to traverse for indoor rendering
    ```

- **e_PrecacheLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pre-render objects right after level loading
    ```

- **e_PreloadDecals**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Preload all materials for decals
    ```

- **e_PreloadMaterials**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Preload level materials from level cache pak and resources list
    ```

- **e_PrepareDeformableObjectsAtLoadTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable to Prepare deformable objects at load time instead on demand, prevents peaks but increases memory usage
    ```

- **e_ProcVegetation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show procedurally distributed vegetation
    ```

- **e_ProcVegetationMaxCacheLevels**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Number of heightmap quad-tree levels used for vegetation spawning
    ```

- **e_ProcVegetationMaxObjectsPerSector**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Maximum number of procedural instances in level
    ```

- **e_ProcVegetationMaxSectorsInCache**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Maximum number of 64x64 meter sectors cached in memory
    ```

- **e_ProcVegetationMaxViewDistance**:

  - **Default Value:** `128`

  - **Description:**

    ```text
Maximum distance where procedural objects may be spawn for heightmap quad-tree level 0, every next level multiply it by 2
    ```

- **e_RNTmpDataPoolMaxFrames**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Cache RNTmpData at least for X framres
    ```

- **e_Recursion**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If 0 - will skip recursive render calls like render into texture
    ```

- **e_RecursionViewDistRatio**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Set all view distances shorter by factor of X
    ```

- **e_Render**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable engine rendering
    ```

- **e_RenderMeshCollisionLod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Lod for render mesh collision check test
    ```

- **e_RenderMeshCollisionTolerance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Min distance between physics-proxy and rendermesh before collision is considered a hole
    ```

- **e_RenderMeshUpdateAsync**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables async updating of dynamically updated rendermeshes
0 - performs a synchronous update
1 - performs the update in an async job (default))
    ```

- **e_Roads**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of road objects
    ```

- **e_Ropes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Turn Rendering of Ropes on/off
    ```

- **e_SQTestBegin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If not zero - start streaming latency unit test
    ```

- **e_SQTestCount**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If not zero - restart test X times
    ```

- **e_SQTestDelay**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time to stabilize the system before camera movements
    ```

- **e_SQTestDistance**:

  - **Default Value:** `80`

  - **Description:**

    ```text
Distance to travel
    ```

- **e_SQTestExitOnFinish**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If not zero - shutdown when finished testing
    ```

- **e_SQTestMip**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Mip to wait during test
    ```

- **e_SQTestMoveSpeed**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Camera speed during test (meters/sec)
    ```

- **e_SQTestTextureName**:

  - **Default Value:** `strfrn_advrt_boards_screen`

  - **Description:**

    ```text
Reference texture name for streaming latency test
    ```

- **e_ScissorDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug
    ```

- **e_ScreenShot**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
0 off
1 show stitching borders
2 show overlapping areas
    ```

- **e_ScreenShotFileFormat**:

  - **Default Value:** `tga`

  - **Description:**

    ```text
Set output image file format for hires screen shots. Can be JPG or TGA
    ```

- **e_ScreenShotHeight**:

  - **Default Value:** `1080`

  - **Description:**

    ```text
used for all type highres screenshots made by e_ScreenShot to define the
height of the destination image, 1080 default [1-4096]
    ```

- **e_ScreenShotMapCamHeight**:

  - **Default Value:** `4000`

  - **Description:**

    ```text
param for top-down-view screenshot creation, defining the camera height for screenshots,
see e_ScreenShotMap defines the y position of the bottom right corner of the
screenshot-area on the terrain,
0.0 - 1.0 (1.0 is default)
    ```

- **e_ScreenShotMapCenterX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
param for the centerX position of the camera, see e_ScreenShotMap
defines the x position of the top left corner of the screenshot-area on the terrain,
0.0 - 1.0 (0.0 is default)
    ```

- **e_ScreenShotMapCenterY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
param for the centerX position of the camera, see e_ScreenShotMap
defines the y position of the top left corner of the screenshot-area on the terrain,
0.0 - 1.0 (0.0 is default)
    ```

- **e_ScreenShotMapOrientation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
param for rotating the orientation through 90 degrees so the screen shot width is along the X axis
see e_ScreenShotMap
0 - 1 (0 is default)
    ```

- **e_ScreenShotMapResolution**:

  - **Default Value:** `512`

  - **Description:**

    ```text
used for mini map screenshots to define the
resolution of the destination image, 512 default [1-4096]
    ```

- **e_ScreenShotMapSizeX**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
param for the size in worldunits of area to make map screenshot, see e_ScreenShotMap
defines the x position of the bottom right corner of the screenshot-area on the terrain,
0.0 - 1.0 (1.0 is default)
    ```

- **e_ScreenShotMapSizeY**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
param for the size in worldunits of area to make map screenshot, see e_ScreenShotMap
defines the x position of the bottom right corner of the screenshot-area on the terrain,
0.0 - 1.0 (1.0 is default)
    ```

- **e_ScreenShotMinSlices**:

  - **Default Value:** `1`

  - **Description:**

    ```text
used for all type highres screenshots made by e_ScreenShot to define the amount
of sub-screenshots for the width and height to generate the image,
 the min count
will be automatically raised if not sufficient (per screenshot-based)
    ```

- **e_ScreenShotQuality**:

  - **Default Value:** `30`

  - **Description:**

    ```text
used for all type highres screenshots made by e_ScreenShot to define the quality
0=fast, 10 .. 30 .. 100 = extra border in percent (soften seams), negative value to debug
    ```

- **e_ScreenShotWidth**:

  - **Default Value:** `1920`

  - **Description:**

    ```text
used for all type highres screenshots made by e_ScreenShot to define the
width of the destination image, 1920 default [1-4096]
    ```

- **e_Shadows**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls rendering of shadows
  0=off,
  1=on,
  2=sun shadows only,
  3=point light shadows only

    ```

- **e_ShadowsAdaptScale**:

  - **Default Value:** `2.72`

  - **Description:**

    ```text
Shadows slope bias for shadowgen
    ```

- **e_ShadowsAutoBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Attempts to compute an optimal shadow bias, ignoring all other bias settings (Experimental)
  0: Deactivated
  1.0: Good default value
  Other values scale bias relative to default

    ```

- **e_ShadowsAutoBiasLodScaleWH**:

  - **Default Value:** `1,1,3,2,2`

  - **Description:**

    ```text
Comma separated relative bias for cascades
    ```

- **e_ShadowsBlendCascades**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Blend between shadow cascades: 0=off, 1=on
    ```

- **e_ShadowsBlendCascadesVal**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Size of cascade blend region
    ```

- **e_ShadowsCacheExtendLastCascade**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Always render full extent of last cached shadow cascade. 0=disabled, 1=enabled
    ```

- **e_ShadowsCacheJobs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Jobify gathering of shadow casters for the shadow cache
    ```

- **e_ShadowsCacheMaxNodesPerFrame**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Maximum number of octree nodes to visit during incremental update. default: 50
    ```

- **e_ShadowsCacheObjectLod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The lod used for rendering objects into the shadow cache. Set to -1 to disable
    ```

- **e_ShadowsCacheRenderCharacters**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Render characters into the shadow cache. 0=disabled, 1=enabled
    ```

- **e_ShadowsCacheUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Trigger updates of the shadow cache: 0=no update, 1=one update, 2=continuous updates
    ```

- **e_ShadowsCascadesCentered**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force shadow cascades to be centered 0=disable 1=enable 
    ```

- **e_ShadowsCascadesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=off, 1=visualize sun shadow cascades on screen
    ```

- **e_ShadowsCastFadeOutRatioLightsWH**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Start of the shadow fade out, relative to the shadow view distance.
Please note that the distance is measured from the light radius/aabb.
  1: disable the fade out
  0: smoothest transition
    ```

- **e_ShadowsCastViewDistRatio**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
View dist ratio for shadow maps casting from objects
    ```

- **e_ShadowsCastViewDistRatioLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
View dist ratio for shadow maps casting for light sources
    ```

- **e_ShadowsCastViewDistRatioMulInvis**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Muls the view dist ratio for any objects rendered only to shadows
    ```

- **e_ShadowsClouds**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Cloud shadows
    ```

- **e_ShadowsConstBias**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shadows slope bias for shadowgen
    ```

- **e_ShadowsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=off,
2=visualize shadow maps on the screen,
4=visualize shadow frustums as spheres and cones

    ```

- **e_ShadowsDoubleSidedBias**:

  - **Default Value:** `1`

  - **Description:**

    ```text
For local light sources this controlls additional bias for materials that cannot be rendered with the front-face culling
  0: Deactivated
  1.0: Good default value
  Other values scale bias relative to default

    ```

- **e_ShadowsFrustums**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug
    ```

- **e_ShadowsLodBiasFixed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Simplifies mesh for shadow map generation by X LOD levels
    ```

- **e_ShadowsLodBiasInvis**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Simplifies mesh for shadow map generation by X LOD levels, if object is not visible in main frame
    ```

- **e_ShadowsMaxTexRes**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Set maximum resolution of shadow map
256(faster), 512(medium), 1024(better quality)
    ```

- **e_ShadowsMaxTexResSunWH**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Sets the texture resolution for sun shadow cascades
    ```

- **e_ShadowsPerObject**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Per object shadow maps 0=off, 1=on, -1=don't draw object shadows
    ```

- **e_ShadowsPerObjectResolutionScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Global scale for per object shadow texture resolution
NOTE: individual texture resolution is rounded to next power of two 
    ```

- **e_ShadowsPoolSize**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Set size of shadow pool (e_ShadowsPoolSize*e_ShadowsPoolSize)
    ```

- **e_ShadowsResScale**:

  - **Default Value:** `2.8`

  - **Description:**

    ```text
Shadows slope bias for shadowgen
    ```

- **e_ShadowsSlopeBias**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shadows slope bias for shadowgen
    ```

- **e_ShadowsTessellateCascades**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximum cascade number to render tessellated shadows (0 = no tessellation for sun shadows)
    ```

- **e_ShadowsTessellateDLights**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable/enable tessellation for local lights shadows
    ```

- **e_ShadowsUpdateViewDistRatio**:

  - **Default Value:** `128`

  - **Description:**

    ```text
View dist ratio for shadow maps updating for shadowpool
    ```

- **e_SkipInFrustumOptimizationWH**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Skip completely in frustum optimization for n cascades
  0=off,
  1=apply only on 1st shadow cascade,
  2=apply only on 1st and 2nd shadow cascade,
  n=apply only on up to n-th shadow cascade,

    ```

- **e_SkyBox**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of skybox and moving cloud layers
    ```

- **e_SkyQuality**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Quality of dynamic sky: 1 (very high), 2 (high).
    ```

- **e_SkyType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Type of sky used: 0 (low-spec), 1 (default-spec).
    ```

- **e_SkyUpdateRate**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text
Percentage of a full dynamic sky update calculated per frame (0..100].
    ```

- **e_Sleep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sleep X in C3DEngine::Draw
    ```

- **e_StatObjBufferRenderTasks**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 - occlusion test on render node level, 2 - occlusion test on render mesh level
    ```

- **e_StatObjMerge**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable CGF sub-objects meshes merging
    ```

- **e_StatObjMergeMaxTrisPerDrawCall**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Skip merging of meshes already having acceptable number of triangles per draw call
    ```

- **e_StatObjPreload**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Load level CGF's in efficient way
    ```

- **e_StatObjStoreMesh**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Store the mesh if enabled, used for cheat detection purposes (they will be stored by default on the dedi server)
    ```

- **e_StatObjTessellationMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set they way pre-tessellated version of meshes is created: 0 = no pre-tessellation, 1 = load from disk, 2 = generate from normal mesh on loading
    ```

- **e_StatObjValidate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable CGF mesh validation during loading
    ```

- **e_StaticInstancing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Prepare and cache instancing info (mostly for vegetation)
2 = Show only instanced objects
3 = Show only instanced objects and bounding boxes
4 = Show only non instanced objects

    ```

- **e_StaticInstancingMinInstNum**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Minimum number of objects for grouping
    ```

- **e_StreamAutoMipFactorMax**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug
    ```

- **e_StreamAutoMipFactorMaxDVD**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Debug
    ```

- **e_StreamAutoMipFactorMin**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Debug
    ```

- **e_StreamAutoMipFactorSpeedThreshold**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug
    ```

- **e_StreamCgf**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable streaming of static render meshes
    ```

- **e_StreamCgfDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw helpers and other debug information about CGF streaming
 1: Draw color coded boxes for objects taking more than e_StreamCgfDebugMinObjSize,
    also shows are the LOD's stored in single CGF or were split into several CGF's
 2: Trace into console every loading and unloading operation
 3: Print list of currently active objects taking more than e_StreamCgfDebugMinObjSize KB 4: Draw a graph showing (un)loaded objects and their importance
    ```

- **e_StreamCgfDebugFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Show only items containing specified text
    ```

- **e_StreamCgfDebugHeatMap**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Generate and show mesh streaming heat map
 1: Generate heat map for entire level
 2: Show last heat map
    ```

- **e_StreamCgfDebugMinObjSize**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Threshold for objects debugging in KB
    ```

- **e_StreamCgfFastUpdateMaxDistance**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Update streaming priorities for near objects every second frame
    ```

- **e_StreamCgfGridUpdateDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Update streaming priorities when camera moves more than this value
    ```

- **e_StreamCgfMaxNewTasksPerUpdate**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Maximum number of files requested from streaming system per update
    ```

- **e_StreamCgfMaxTasksInProgress**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Maximum number of files simultaneously requested from streaming system
    ```

- **e_StreamCgfPoolSize**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Render mesh cache size in MB
    ```

- **e_StreamCgfUpdatePerNodeDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use node distance as entity distance for far nodex 
    ```

- **e_StreamCgfVisObjPriority**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Priority boost for visible objects
0 - visible objects has no priority over invisible objects, camera direction does not affect streaming
1 - visible objects has highest priority, in case of trashing will produce even more trashing
    ```

- **e_StreamInstances**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable streaming of static world instances (usually vegetation and decals, not used in editor)
    ```

- **e_StreamInstancesDistRatio**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Controls streaming distance
    ```

- **e_StreamInstancesMaxTasks**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum allowed number of file streaming requests for instances streaming (one request reads single octree node)
    ```

- **e_StreamInstancesMinLoadedNodes**:

  - **Default Value:** `128`

  - **Description:**

    ```text
Minimum number of octree-nodes to keep in memory
    ```

- **e_StreamPredictionAhead**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Use preducted camera position for streaming priority updates
    ```

- **e_StreamPredictionAheadDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw ball at predicted position
    ```

- **e_StreamPredictionAlwaysIncludeOutside**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Always include outside octrees in streaming
    ```

- **e_StreamPredictionBoxRadius**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Radius of stream prediction box
    ```

- **e_StreamPredictionDistanceFar**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Prediction distance for streaming, affects far objects
    ```

- **e_StreamPredictionDistanceNear**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Prediction distance for streaming, affets LOD of objects
    ```

- **e_StreamPredictionMaxVisAreaRecursion**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Maximum number visareas and portals to traverse.
    ```

- **e_StreamPredictionMinFarZoneDistance**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Debug
    ```

- **e_StreamPredictionMinReportDistance**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Debug
    ```

- **e_StreamPredictionTexelDensity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use mesh texture mapping density info for textures streaming
    ```

- **e_StreamPredictionUpdateFarTimeSlice**:

  - **Default Value:** `0.18`

  - **Description:**

    ```text
Maximum amount of time to spend for scene streaming priority update of far objects in milliseconds
    ```

- **e_StreamSaveStartupResultsIntoXML**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save basic information about streaming performance on level start into XML
    ```

- **e_Sun**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates sun light source
    ```

- **e_SunAngleSnapDot**:

  - **Default Value:** `0.99999`

  - **Description:**

    ```text
Sun dir snap control
    ```

- **e_SunAngleSnapMinLodWH**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum shadow cascade (LOD) to apply sun dir snapping.
    ```

- **e_SunAngleSnapSec**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Sun dir snap control
    ```

- **e_SunElevationClamp**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Sets minimum elevation of the Sun for shadow map genration.
    ```

- **e_Terrain**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of terrain ground
    ```

- **e_TerrainAutoGenerateBaseTexture**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Instead of manually painting the base texture - just build it automatically based on terrain materials info painted
    ```

- **e_TerrainAutoGenerateBaseTextureTiling**:

  - **Default Value:** `0.0625`

  - **Description:**

    ```text
Controls tiling of baked diffuse textures
    ```

- **e_TerrainBBoxes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show terrain nodes bboxes
    ```

- **e_TerrainBlendingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Options:
0 = Only blend objects that have FOB_ALLOW_TERRAIN_LAYER_BLEND set (default)
1 = Disable blending on all objects
2 = Enable blending on all objects
    ```

- **e_TerrainDeformations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows in-game terrain surface deformations
    ```

- **e_TerrainDetailMaterials**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of detail materials on terrain ground
    ```

- **e_TerrainDetailMaterialsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows number of materials in use per terrain sector
    ```

- **e_TerrainDetailMaterialsViewDistXY**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Max view distance of terrain XY materials
    ```

- **e_TerrainDetailMaterialsViewDistZ**:

  - **Default Value:** `128`

  - **Description:**

    ```text
Max view distance of terrain Z materials
    ```

- **e_TerrainDetailMaterialsWeightedBlending**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable advanced weighted blending between terrain detail materials
    ```

- **e_TerrainDrawThisSectorOnly**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - render only sector where camera is and objects registered in sector 00
2 - render only sector where camera is
    ```

- **e_TerrainEditPostponeTexturesUpdate**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Controls the postpone of terrain normal and elevation textures update during terrain sculpting in the editor
    ```

- **e_TerrainIntegrateObjectsMaxHeight**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Take only trianglses close to terrain for objects integration
    ```

- **e_TerrainIntegrateObjectsMaxVertices**:

  - **Default Value:** `30000`

  - **Description:**

    ```text
Preallocate specified number of vertices to be used for objects integration into terrain (per terrain sector)
0 - disable the feature completelly
    ```

- **e_TerrainLodDistanceRatio**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Controls heightmap LOD by comparing sector distance with a sector size
    ```

- **e_TerrainLodErrorRatio**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Controls heightmap LOD by comparing sector distance with the maximum elevation difference between the sector and its childs
    ```

- **e_TerrainMeshInstancingMinLod**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Mesh instancing is used for distant terrain sectors and for shadow map generation
    ```

- **e_TerrainMeshInstancingShadowBias**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
During shadow map generation render distant terrain sectors little lower for less problems with terrain self-shadowing
    ```

- **e_TerrainMeshInstancingShadowLodRatio**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Smaller values produce less draw calls and less polygons for terrain shadow map generation
    ```

- **e_TerrainOcclusionCulling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
heightmap occlusion culling with time coherency 0=off, 1=on
    ```

- **e_TerrainOcclusionCullingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw sphere on every terrain height sample
    ```

- **e_TerrainOcclusionCullingMaxDist**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Max length of ray (for version 1)
    ```

- **e_TerrainOcclusionCullingMaxSteps**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Max number of tests per ray (for version 0)
    ```

- **e_TerrainOcclusionCullingPrecision**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Density of rays
    ```

- **e_TerrainOcclusionCullingPrecisionDistRatio**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Controls density of rays depending on distance to the object
    ```

- **e_TerrainOcclusionCullingStepSize**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Initial size of single step (in heightmap units)
    ```

- **e_TerrainOcclusionCullingStepSizeDelta**:

  - **Default Value:** `1.05`

  - **Description:**

    ```text
Step size scale on every next step (for version 1)
    ```

- **e_TerrainTextureLodRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Adjust terrain base texture resolution on distance
    ```

- **e_TerrainTextureStreamingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug
    ```

- **e_TerrainTextureStreamingPoolItemsNum**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Specifies number of textures in terrain base texture streaming pool
    ```

- **e_Tessellation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
HW geometry tessellation  0 = not allowed, 1 = allowed
    ```

- **e_TessellationMaxDistance**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum distance from camera in meters to allow tessellation, also affects distance-based displacement fadeout
    ```

- **e_TimeOfDay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Current Time of Day
    ```

- **e_TimeOfDayDebug**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Display time of day current values on screen
    ```

- **e_TimeOfDaySpeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Time of Day change speed
    ```

- **e_Vegetation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of distributed objects like trees
    ```

- **e_VegetationBending**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enable vegetation bending (does not affect merged grass)
    ```

- **e_VegetationBillboards**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow replacing distant vegetation with billboards
Billboard textures must be prepared by ed_GenerateBillboardTextures command in the editor
    ```

- **e_VegetationBoneInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs information about number of bones in each vegetation object loaded
    ```

- **e_VegetationMinSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimal size of static object, smaller objects will be not rendered
    ```

- **e_VegetationUseTerrainColor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow blend with terrain color for vegetations
    ```

- **e_VegetationUseTerrainColorDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls distance of fading into terrain color
 0 = Use 30% of maximum view distance of each vegetation instance (old default way)
<0 = Maximum view distance value is calculated using vegetation mesh size (non scaled CGF size) and then multiplied by this cvar
>0 = This value used directly as fading distance for all vegetations
    ```

- **e_ViewDistCompMaxSize**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Affects max view distance for big objects, small number will render less objects
    ```

- **e_ViewDistMin**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Min distance on what far objects will be culled out
    ```

- **e_ViewDistRatio**:

  - **Default Value:** `60`

  - **Description:**

    ```text
View distance ratio for objects
    ```

- **e_ViewDistRatioCustom**:

  - **Default Value:** `60`

  - **Description:**

    ```text
View distance ratio for special marked objects (Players,AI,Vehicles)
    ```

- **e_ViewDistRatioDetail**:

  - **Default Value:** `30`

  - **Description:**

    ```text
View distance ratio for detail objects
    ```

- **e_ViewDistRatioInteriorReflexLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
View distance ratio for interior reflex lights. Light must be of area type and have 'affects this area only' enabled to be classified as interior reflex light.
    ```

- **e_ViewDistRatioLargeEnvCubemap**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
View distance ratio for env cubemaps, details in CLightEntity::GetMaxViewDistEnvCubemapsWH
    ```

- **e_ViewDistRatioLights**:

  - **Default Value:** `50`

  - **Description:**

    ```text
View distance ratio for generic light sources (excluding env cubemaps and reflex lights)
    ```

- **e_ViewDistRatioModifierGameDecals**:

  - **Default Value:** `4`

  - **Description:**

    ```text
View distance ratio for dynamically generated decalsThis will be applied on top of e_ViewDistRatio
    ```

- **e_ViewDistRatioPortals**:

  - **Default Value:** `60`

  - **Description:**

    ```text
View distance ratio for portals
    ```

- **e_ViewDistRatioSmallEnvCubemap**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
View distance ratio for env cubemaps, details in CLightEntity::GetMaxViewDistEnvCubemapsWH
    ```

- **e_ViewDistRatioVegetation**:

  - **Default Value:** `30`

  - **Description:**

    ```text
View distance ratio for vegetation
    ```

- **e_VolObjShadowStrength**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Self shadow intensity of volume objects [0..1].
    ```

- **e_VolumetricFog**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates volumetric fog
    ```

- **e_WaterOcean**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates drawing of ocean. 
1: use usual rendering path
2: use fast rendering path with merged fog
    ```

- **e_WaterOceanBottom**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing bottom of ocean
    ```

- **e_WaterOceanFFT**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates fft based ocean
    ```

- **e_WaterRipplesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw water hits that affect water ripple simulation
    ```

- **e_WaterTessellationAmount**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Set tessellation amount
    ```

- **e_WaterTessellationAmountX**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Set tessellation on x axis - 0 means not used
    ```

- **e_WaterTessellationAmountY**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Set tessellation on y axis - 0 means not used
    ```

- **e_WaterTessellationSwathWidth**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Set the swath width for the boustrophedonic mesh stripping
    ```

- **e_WaterVolumes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates drawing of water volumes
1: use usual rendering path
2: use fast rendering path with merged fog
    ```

- **e_WaterWaves**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates drawing of water waves
    ```

- **e_WaterWavesTessellationAmount**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Sets water waves tessellation amount
    ```

- **e_Wind**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable global wind calculations, affects vegetations bending animations and VertexAnim vertex modifier
    ```

- **e_WindAreas**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable wind areas
    ```

- **e_WindBendingAreaStrength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal size of static object, smaller objects will be not rendered
    ```

- **e_WindBendingDistRatio**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Wind cutoff distance for bending (linearly attentuated to that distance)
    ```

- **e_WindBendingStrength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal size of static object, smaller objects will be not rendered
    ```

- **e_levelStartupFrameDelay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to number of frames to wait after level load before beginning fps measuring
    ```

- **e_levelStartupFrameNum**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to number of frames to capture for avg fps computation
    ```

- **e_surfaceTypesFile**:

  - **Default Value:** `Libs/MaterialEffects/SurfaceTypes.xml`

  - **Description:**

    ```text
Location in the game folder of the list of surface types
    ```

- **e_svoDVR**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activate Direct Volume Rendering of SVO (trace and output results to the screen)
    ```

- **e_svoDVR_DistRatio**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls voxels LOD ratio for streaming and tracing
    ```

- **e_svoDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
6 = Visualize voxels, different colors shows different LOD
7 = Visualize postponed nodes and not ready meshes
    ```

- **e_svoDispatchX**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Controls parameters of SVO compute shaders execution
    ```

- **e_svoDispatchY**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Controls parameters of SVO compute shaders execution
    ```

- **e_svoEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates SVO subsystem
    ```

- **e_svoLoadTree**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Start SVO generation or loading from disk
    ```

- **e_svoMaxAreaMeshSizeKB**:

  - **Default Value:** `65536`

  - **Description:**

    ```text
Maximum number of KB per area allowed to allocate for voxelization mesh
    ```

- **e_svoMaxAreaSize**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum SVO node size for detailed voxelization
    ```

- **e_svoMaxBrickUpdates**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Limits the number of bricks uploaded from CPU to GPU per frame
    ```

- **e_svoMaxBricksOnCPU**:

  - **Default Value:** `8192`

  - **Description:**

    ```text
Maximum number of voxel bricks allowed to cache on CPU side
    ```

- **e_svoMaxNodeSize**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum SVO node size for voxelization (bigger nodes stays empty)
    ```

- **e_svoMaxStreamRequests**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Limits the number of brick streaming or building requests per frame
    ```

- **e_svoMinNodeSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Smallest SVO node allowed to create during level voxelization
Smaller values helps getting more detailed lighting but may work slower and use more memory in pool
It may be necessary to increase VoxelPoolResolution in order to prevent running out of voxel pool
    ```

- **e_svoRender**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables CPU side (every frame) SVO traversing and update
    ```

- **e_svoRootless**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Limits the area covered by SVO. Limits number of tree levels and speedup the tracing.
    ```

- **e_svoStreamVoxels**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable steaming of voxel data from disk instead of run-time voxelization
0 - disabled, 1 - stream only in launcher/game, 2 - both editor and game
If enabled, level export will include voxels pre-computation process which may take up to one hour for big complex levels
    ```

- **e_svoTI_Active**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates voxel GI for the level
    ```

- **e_svoTI_AnalyticalGI**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Completely replace voxel tracing with analytical shapes tracing
Light bouncing is supported only in integration mode 0
    ```

- **e_svoTI_AnalyticalOccluders**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable basic support for hand-placed occlusion shapes like box, cylinder and capsule
This also enables indirect shadows from characters (shadow capsules are defined in .chrparams file)
    ```

- **e_svoTI_AnalyticalOccludersRange**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Shadow length
    ```

- **e_svoTI_AnalyticalOccludersSoftness**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Shadow softness
    ```

- **e_svoTI_Apply**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows to temporary deactivate GI for debug purposes
    ```

- **e_svoTI_AsyncCompute**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use asynchronous compute for SVO updates
    ```

- **e_svoTI_ConeMaxLength**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum length of the tracing rays (in meters)
Shorter rays work faster
    ```

- **e_svoTI_ConstantAmbientDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Replace GI computations with constant ambient color for GI debugging
    ```

- **e_svoTI_DiffuseAmplifier**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts the output brightness of cone traced indirect diffuse component
    ```

- **e_svoTI_DiffuseConeWidth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls wideness of diffuse cones
Wider cones work faster but may cause over-occlusion and more light leaking
Narrow cones are slower and may bring more noise
    ```

- **e_svoTI_Diffuse_Cache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pre-bake lighting in SVO and use it instead of cone tracing
    ```

- **e_svoTI_Diffuse_Spr**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts the kernel of diffuse tracing; big value will merge all cones into single vector
    ```

- **e_svoTI_DualTracing**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Double the number of rays per fragment
1 = Always ON; 2 = Active only in multi-GPU mode
    ```

- **e_svoTI_DynLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow single real-time indirect bounce from marked dynamic lights
    ```

- **e_svoTI_EmissiveMultiplier**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Modulates emissive materials light injection
Allows controlling emission separately from post process glow
    ```

- **e_svoTI_ForceGIForAllLights**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force dynamic GI for all lights except ambient lights and sun
This allows to quickly get dynamic GI working in unprepared scenes
    ```

- **e_svoTI_GsmCascadeLod**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Sun shadow cascade LOD for RSM GI
    ```

- **e_svoTI_HalfresKernelPrimary**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use less rays for first bounce and AO
This gives faster frame rate and sharper lighting but may increase noise and GI aliasing
    ```

- **e_svoTI_HalfresKernelSecondary**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use less rays for secondary bounce
This gives faster update of cached lighting but may reduce the precision of secondary bounce
Difference is only visible with number of bounces more than 1
    ```

- **e_svoTI_HighGlossOcclusion**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Normally specular contribution of env probes is corrected by diffuse GI
This parameter controls amount of correction (usually darkening) for very glossy and reflective surfaces
    ```

- **e_svoTI_IndoorFadeInTime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Time in seconds to fully apply the indoor multipliers when entering interior
    ```

- **e_svoTI_IndoorFadeOutTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time in seconds to fade out the multipliers to unity when exiting interior
    ```

- **e_svoTI_IndoorSkyMultiplier**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Injection multiplier for sky when camera is indoors
    ```

- **e_svoTI_IndoorSunMultiplier**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Injection multiplier for sun when camera is indoors
    ```

- **e_svoTI_InjectionMultiplier**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Modulates light injection (controls the intensity of bounce light)
    ```

- **e_svoTI_IntegrationMode**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `20`

  - **Description:**

    ```text
Update blocks that are closer to the camera more often. The unit is frames.
    ```

- **e_svoTI_LightingUpdateInViewPriorityBonus**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Update blocks that are in the camera view frustum more often. The unit is frames.
    ```

- **e_svoTI_LowSpecMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set low spec mode
Values greater than 0 scale down internal render targets and simplify shaders
If set to -2 it will be initialized by value specified in sys_spec_Shading.cfg (on level load or on spec change)
    ```

- **e_svoTI_MaxSyncUpdateTime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Limit the time (in seconds) allowed for synchronous voxelization (usually happens on level start)
    ```

- **e_svoTI_MinLightEffectiveRadius**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal effective radius of a light to be registered by SVOTI
    ```

- **e_svoTI_MinReflectance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Controls light bouncing from very dark surfaces (and from surfaces missing in RSM)
    ```

- **e_svoTI_MinVoxelOpacity**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Voxelize only geometry with opacity higher than specified value
    ```

- **e_svoTI_NumStreamingThreads**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set number of voxelization data streaming threads
    ```

- **e_svoTI_NumberOfBounces**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum number of indirect bounces (from 0 to 2)
First indirect bounce is completely dynamic
The rest of the bounces are cached in SVO and mostly static
    ```

- **e_svoTI_ObjectsLod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Mesh LOD used for voxelization
Changes are visible only after re-voxelization (click <Update geometry> or restart)
    ```

- **e_svoTI_ObjectsMaxViewDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Voxelize only objects with maximum view distance greater than this value (only big and important objects)
If set to 0 - disable this check and also disable skipping of too small triangles
Changes are visible after full re-voxelization (click <Update geometry> or restart)
    ```

- **e_svoTI_ObjectsMaxViewDistanceScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales e_svoTI_ObjectsMaxViewDistance, so it can be different on consoles.
    ```

- **e_svoTI_PointLightsBias**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Modulates non shadowed injection from point light (helps simulating multiple bounces)
    ```

- **e_svoTI_PointLightsMaxDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximum distance at which point lights produce light bounces
    ```

- **e_svoTI_PointLightsMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Modulates point light injection (controls the intensity of bounce light)
    ```

- **e_svoTI_PortalsDeform**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts the sky light tracing kernel so that more rays are cast in direction of portals
This helps getting more detailed sky light indoor but may cause distortion of all other indirect lighting
    ```

- **e_svoTI_PortalsInject**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Inject portal lighting into SVO
This helps getting better indoor sky light even with single bounce
    ```

- **e_svoTI_PropagationBooster**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls fading of the light during in-SVO propagation
Values greater than 1 help propagating light further but may bring more light leaking artifacts
    ```

- **e_svoTI_RT_Active**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates mesh ray tracing for reflections
It is necessary to re-voxelize the scene after activation
    ```

- **e_svoTI_RT_MaxDistCam**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum camera distance for mesh tracing
    ```

- **e_svoTI_RT_MaxDistRay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum ray distance for mesh tracing
    ```

- **e_svoTI_RT_MaxTexRes**:

  - **Default Value:** `512`

  - **Description:**

    ```text
Maximum texture size for GPU tracing
    ```

- **e_svoTI_RT_MaxTrisPerVoxel**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum number of triangles registered per voxel
    ```

- **e_svoTI_RT_MinGloss**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimum surface glossiness for mesh tracing
    ```

- **e_svoTI_RT_MinRefl**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimum surface reflectance for mesh tracing
    ```

- **e_svoTI_RT_SafetyBorder**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Extend the area of voxel to triangle intersection. This makes sure the ray finds all necessary triangles
    ```

- **e_svoTI_Reflect_Vox_Max**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Controls amount of voxels allowed to refresh every frame
    ```

- **e_svoTI_Reflect_Vox_Max_Overhead**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Controls amount of voxels allowed to refresh every frame
    ```

- **e_svoTI_ResScaleAir**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Defines resolution of GI cone-tracing targets; 2=half res
    ```

- **e_svoTI_ResScaleBase**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines resolution of GI cone-tracing targets; 2=half res
    ```

- **e_svoTI_ResScaleSpecular**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Defines resolution of specular targets; 2=half res
    ```

- **e_svoTI_RsmConeMaxLength**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Maximum length of the RSM rays (in meters)
Shorter rays work faster
    ```

- **e_svoTI_RsmConeMaxLengthFOVMaxMul**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Max multiplier of e_svoTI_RsmConeMaxLength for 10 deg FOV.
    ```

- **e_svoTI_RsmConeMaxLengthFOVMulEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables e_svoTI_RsmConeMaxLengthFOVMul
    ```

- **e_svoTI_SSAOAmount**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows to scale down SSAO (SSDO) amount and radius when GI is active
    ```

- **e_svoTI_SSDepthTrace**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use SS depth tracing together with voxel tracing
    ```

- **e_svoTI_Saturation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls color saturation of propagated light
    ```

- **e_svoTI_ShadowsFromHeightmap**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Include terrain heightmap (whole level) into ray-traced sun shadows
    ```

- **e_svoTI_ShadowsFromSun**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Calculate sun shadows using SVO ray tracing
Normally supposed to be used in combination with normal shadow maps and screen space shadows
    ```

- **e_svoTI_ShadowsSoftness**:

  - **Default Value:** `1.25`

  - **Description:**

    ```text
Controls softness of ray traced shadows
    ```

- **e_svoTI_SkipNonGILights**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable all lights except sun and lights marked to be used for GI
This mode ignores all local environment probes and ambient lights
    ```

- **e_svoTI_SkyColorMultiplier**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls amount of the sky light
This value may be multiplied with TOD fog color
    ```

- **e_svoTI_SpecularAmplifier**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts the output brightness of specular component
    ```

- **e_svoTI_SpecularFromDiffuse**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Compute simplified specular lighting using intermediate results of diffuse SVO tracing
In this mode environment probes are not used. It works fine for materials with low smoothness but works wrong for mirrors
    ```

- **e_svoTI_Specular_Sev**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls severity of specular cones; this value limits the material glossiness
    ```

- **e_svoTI_SyncUpdateLighting**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to number of frames you want full radiance update to happen. This cvar is automaticly reset to 0.
    ```

- **e_svoTI_TemporalFilteringBase**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Controls amount of temporal smoothing
0 = less noise and aliasing, 1 = less ghosting
    ```

- **e_svoTI_TraceVoxels**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Include voxels into tracing
Allows to exclude voxel tracing if only proxies are needed
    ```

- **e_svoTI_TranslucentBrightness**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts the brightness of semi translucent surfaces
Affects mostly vegetation leaves and grass
Setting this parameter to zero disables custom GI processing for translucent surfaces
    ```

- **e_svoTI_Troposphere_Active**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates SVO atmospheric effects (completely replaces default fog computations)
It is necessary to re-voxelize the scene after activation
    ```

- **e_svoTI_Troposphere_Brightness**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls intensity of atmospheric effects.
    ```

- **e_svoTI_Troposphere_CloudGenTurb_Freq**:

  - **Default Value:** `0`

  - **Description:**

    ```text
CloudsGen magic number
    ```

- **e_svoTI_Troposphere_CloudGenTurb_Scale**:

  - **Default Value:** `0`

  - **Description:**

    ```text
CloudsGen magic number
    ```

- **e_svoTI_Troposphere_CloudGen_Freq**:

  - **Default Value:** `0`

  - **Description:**

    ```text
CloudsGen magic number
    ```

- **e_svoTI_Troposphere_CloudGen_FreqStep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
CloudsGen magic number
    ```

- **e_svoTI_Troposphere_CloudGen_Height**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Maximum height for atmospheric effects
    ```

- **e_svoTI_Troposphere_CloudGen_Scale**:

  - **Default Value:** `0`

  - **Description:**

    ```text
CloudsGen magic number
    ```

- **e_svoTI_Troposphere_Density**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Density of the atmosphere
    ```

- **e_svoTI_Troposphere_Ground_Height**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimum height for atmospheric effects
    ```

- **e_svoTI_Troposphere_Layer0_Dens**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Layered fog Density
    ```

- **e_svoTI_Troposphere_Layer0_Height**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Layered fog level
    ```

- **e_svoTI_Troposphere_Layer0_Rand**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Layered fog randomness
    ```

- **e_svoTI_Troposphere_Layer1_Dens**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Layered fog Density
    ```

- **e_svoTI_Troposphere_Layer1_Height**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Layered fog level
    ```

- **e_svoTI_Troposphere_Layer1_Rand**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Layered fog randomness
    ```

- **e_svoTI_Troposphere_Snow_Height**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Snow on objects height
    ```

- **e_svoTI_Troposphere_Subdivide**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Build detailed SVO also in areas not filled by geometry
    ```

- **e_svoTI_UpdateGeometry**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When switched from OFF to ON - forces single complete re-voxelization of the scene
This is needed if terrain, brushes or vegetation were modified
    ```

- **e_svoTI_UpdateLighting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When switched from OFF to ON - forces single full update of cached lighting
If stays enabled - automatically updates lighting if some light source was modified
    ```

- **e_svoTI_UseLightProbes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If enabled - environment probes lighting is multiplied with GI
If disabled - diffuse contribution of environment probes is replaced with GI
In modes 1-2 it enables usage of global env probe for sky light instead of TOD fog color
    ```

- **e_svoTI_VegetationMaxOpacity**:

  - **Default Value:** `0.18`

  - **Description:**

    ```text
Limits the opacity of vegetation voxels
    ```

- **e_svoTI_VoxelOpacityMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows making voxels more opaque, helps reducing light leaks
    ```

- **e_svoTI_VoxelizationLODRatio**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls distance LOD ratio for voxelization
Bigger value helps getting more detailed lighting at distance but may work slower and will use more memory in pool
It may be necessary to increase VoxelPoolResolution parameter in order to prevent running out of voxel pool
    ```

- **e_svoTI_VoxelizationMapBorder**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Skip voxelization of geometry close to the edges of the map
In case of offline voxelization this will speedup the export process and reduce data size on disk.
    ```

- **e_svoTI_VoxelizationPostpone**:

  - **Default Value:** `2`

  - **Description:**

    ```text
1 - Postpone voxelization until all needed meshes are streamed in
2 - Postpone voxelization and request streaming of missing meshes
Use e_svoDebug = 7 to visualize postponed nodes and not ready meshes
    ```

- **e_svoTI_VoxelizeHiddenObjects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 = Skip hidden objects during voxelization
    ```

- **e_svoTI_VoxelizeUnderTerrain**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 = Skip underground triangles during voxelization
    ```

- **e_svoVoxDistRatio**:

  - **Default Value:** `14`

  - **Description:**

    ```text
Limits the distance where real-time GPU voxelization used
    ```

- **e_svoVoxGenRes**:

  - **Default Value:** `512`

  - **Description:**

    ```text
GPU voxelization dummy render target resolution
    ```

- **e_svoVoxNodeRatio**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Limits the real-time GPU voxelization only to leaf SVO nodes
    ```

- **e_svoVoxelPoolResolution**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Size of volume textures (x,y,z dimensions) used for SVO data storage
Valid values are 128 and 256
Engine has to be restarted if this value was modified
Too big pool size may cause long stalls when some GI parameter was changed
    ```

- **es_AreaManagerUpdateBudget**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Entity updates per frame in area manager
    ```

- **es_CharZOffsetSpeed**:

  - **Default Value:** `2`

  - **Description:**

    ```text
sets the character Z-offset change speed (in m/s), used for IK
    ```

- **es_ClearPoolBookmarksOnLayerUnload**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Clear pool bookmarks when a layer is unloaded (saves memory and makes smaller saves)
    ```

- **es_DebrisLifetimeScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: es_DebrisLifetimeScale 1.0
    ```

- **es_DebugEntityUsage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws information to the screen to show how entities are being used, per class, including total, active and hidden counts and memory usage
Usage: es_DebugEntityUsage update_rate
update_rate - Time in ms to refresh memory usage calculation or 0 to disable
    ```

- **es_DebugEntityUsageFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter entity usage debugging to classes which have this string in their name
    ```

- **es_DebugEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables logging of entity events
    ```

- **es_DebugInvalidRemoveEntity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable debug checks for invalid RemoveEntity calls.

    ```

- **es_DebugPool**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable debug drawing of entity pools
    ```

- **es_DebugPoolFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter entity pool debugging for just this pool and draw more info about it
    ```

- **es_DebugTimers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This is for profiling and debugging (for game coders and level designer)
By enabling this you get a lot of console printouts that show all entities that receive OnTimer
events - it's good to minimize the call count. Certain entities might require this feature and
using less active entities can often be defined by the level designer.
Usage: es_DebugTimers 0/1
    ```

- **es_DisableTriggers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable enter/leave events for proximity and area triggers
    ```

- **es_DrawAreaDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug drawing of Areas, set 2 for log details
    ```

- **es_DrawAreaGrid**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables drawing of Area Grid
    ```

- **es_DrawAreas**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables drawing of Areas
    ```

- **es_DrawAudioProxyZRay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables drawing of Z ray on check for Z visibility
    ```

- **es_DrawProximityTriggers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows Proximity Triggers.
Usage: es_DrawProximityTriggers [0-255].  The parameter sets the transparency (alpha) level.
Value 1 will be changed to 70.
Default is 0 (off)

    ```

- **es_EnablePoolUse**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Force toggle the use of entity pools on/off.
Usage: es_EnablePoolUse 1
Default is -1, or normal behavior. 0 forces system off. 1 forces system on.
    ```

- **es_EntityUpdatePosDelta**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Indicates the position delta by which an entity must move before the AreaManager updates position relevant data.
Default: 0.1 (10 cm)
    ```

- **es_ExcludeUnusedNames**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Don't use names in entities that don't require them (currently prefabs)
    ```

- **es_FarPhysRagdollTimeout**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Timeout for faraway physics forceful deactivation
    ```

- **es_FarPhysTimeout**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Timeout for faraway physics forceful deactivation
    ```

- **es_HitCharacters**:

  - **Default Value:** `1`

  - **Description:**

    ```text
specifies whether alive characters are affected by bullet hits (0 or 1)
    ```

- **es_HitDeadBodies**:

  - **Default Value:** `1`

  - **Description:**

    ```text
specifies whether dead bodies are affected by bullet hits (0 or 1)
    ```

- **es_ImpulseScale**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Usage: es_ImpulseScale 0.0
    ```

- **es_LayerDebugInfo**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Switches layer entity serialization: 
0 - serialize all 
1 - automatically ignore entities on disabled layers 
2 - only ignore entities on non-save layers.
    ```

- **es_MaxImpulseAdjMass**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Usage: es_MaxImpulseAdjMass 2000.0
    ```

- **es_MaxPhysDist**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Physical entities farther from the camera than this are forcefully deactivated
    ```

- **es_MaxPhysDistCloth**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Cloth entities farther from the camera than this are forcefully deactivated
    ```

- **es_MaxPhysDistInvisible**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Invisible physical entities farther from the camera than this are forcefully deactivated
    ```

- **es_MinImpulseVel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Usage: es_MinImpulseVel 0.0
    ```

- **es_ParallelComponentUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable parallel component update.

    ```

- **es_ParallelEntityUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable parallel entity update.

    ```

- **es_PerInstanceStreaming**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable entity per instance streaming.

    ```

- **es_PerInstanceStreamingClassSpawnBudget**:

  - **Default Value:** `2`

  - **Description:**

    ```text
How many entities can be spawned in a frame per streamable class.
The same budget is used for despawning.
    ```

- **es_PerInstanceStreamingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - Show debug.

    ```

- **es_PerInstanceStreamingDespawnHysteresis**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Relative to spawn distance.

    ```

- **es_PerInstanceStreamingForceRemove**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force remove all unobserver entities (without waiting for AI).

    ```

- **es_SaveLoadUseLUANoSaveFlag**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save&Load optimization : use lua flag to not serialize entities, for example rigid bodies.
    ```

- **es_SortUpdatesByClass**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sort entity updates by class (possible optimization)
    ```

- **es_SplashThreshold**:

  - **Default Value:** `1`

  - **Description:**

    ```text
minimum instantaneous water resistance that is detected as a splashUsage: es_SplashThreshold 200.0
    ```

- **es_SplashTimeout**:

  - **Default Value:** `3`

  - **Description:**

    ```text
minimum time interval between consecutive splashesUsage: es_SplashTimeout 3.0
    ```

- **es_TestPoolSignatures**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable signature testing on entity classes the first time they're prepared from an entity pool
    ```

- **es_UpdateAI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles updating of AI entities.
Usage: es_UpdateAI [0/1]
Default is 1 (on). Set to 0 to prevent AI entities from updating.
    ```

- **es_UpdateCollision**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles updating of entity collisions.
Usage: es_UpdateCollision [0/1]
Default is 1 (on). Set to 0 to disable entity collision updating.
    ```

- **es_UpdateCollisionScript**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: es_UpdateCollisionScript [0/1]
Default is 1 (on).
    ```

- **es_UpdateContainer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: es_UpdateContainer [0/1]
Default is 1 (on).
    ```

- **es_UpdateEntities**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles entity updating.
Usage: es_UpdateEntities [0/1]
Default is 1 (on). Set to 0 to prevent all entities from updating.
    ```

- **es_UpdatePhysics**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles updating of entity physics.
Usage: es_UpdatePhysics [0/1]
Default is 1 (on). Set to 0 to prevent entity physics from updating.
    ```

- **es_UpdateScript**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: es_UpdateScript [0/1]
Default is 1 (on).
    ```

- **es_UpdateTimer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: es_UpdateTimer [0/1]
Default is 1 (on).
    ```

- **es_UsePhysVisibilityChecks**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates physics quality degradation and forceful sleeping for invisible and faraway entities
    ```

- **es_VisCheckForUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: es_VisCheckForUpdate [0/1]
Default is 1 (on).
    ```

- **es_activateEntity**:

  - **Default Value:** ``

  - **Description:**

    ```text
Activates an entity
    ```

- **es_bboxes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles entity bounding boxes.
Usage: es_bboxes [0/1]
Default is 0 (off). Set to 1 to display bounding boxes.
    ```

- **es_deactivateEntity**:

  - **Default Value:** ``

  - **Description:**

    ```text
Deactivates an entity
    ```

- **es_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable entity debugging info
Usage: es_debug [0/1]
Default is 0 (on).
    ```

- **es_debugDrawEntityIDs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays the EntityId of all entities.
Default is 0 (off), any other number enables it.
Note: es_debug must be set to 1 also (or else the EntityId won't be displayed)
    ```

- **es_debugEntityLifetime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug entities creation and deletion time
    ```

- **es_debug_not_seen_timeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if true, log messages when entities undergo not seen timeout
    ```

- **es_enable_full_script_save**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable (experimental) full script save functionality
    ```

- **es_helpers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles helpers.
Usage: es_helpers [0/1]
Default is 0 (off). Set to 1 to display entity helpers.
    ```

- **es_log_collisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables collision events logging
    ```

- **es_not_seen_timeout**:

  - **Default Value:** `30`

  - **Description:**

    ```text
number of seconds after which to cleanup temporary render buffers in entity
    ```

- **es_profileentities**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Usage: es_profileentities 1,2,3
Default is 0 (off).
    ```

- **es_removeEntity**:

  - **Default Value:** ``

  - **Description:**

    ```text
Removes an entity
    ```

- **es_updateType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Defines how we update type for the entities
    ```

- **fg_SystemEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles FlowGraph System Updates.
Usage: fg_SystemEnable [0/1]
Default is 1 (on).
    ```

- **fg_abortOnLoadError**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Abort on load error of flowgraphs
2:abort, 1:dialog, 0:log only
    ```

- **fg_debugmodules**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display Module debug info.
0=Disabled1=Modules only2=Modules + Module Instances
    ```

- **fg_debugmodules_filter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Only debug modules with this name
    ```

- **fg_iDebugNextStep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Update flowgraph debug by one step.
    ```

- **fg_iEnableFlowgraphNodeDebugging**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles visual flowgraph debugging.
    ```

- **fg_inspectorLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log inspector on console.
    ```

- **fg_noDebugText**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Don't show debug text [0/1]
Default is 0 (show debug text).
    ```

- **fg_profile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Flow graph profiling enable/disable
    ```

- **g_ColorGradingBlendTime**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Time to blend from the last color grading chart to the next.
    ```

- **g_DebugTimeWarp**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug information from time warp.
    ```

- **g_EnableLoadSave**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables saving and loading of savegames
    ```

- **g_LedgeGrabManager_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles debug rendering on ledges: 0 - Disabled / 1 - Enabled
    ```

- **g_LedgeGrabManager_DebugDrawInEditor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles debug rendering on ledges in editor: 0 - Disabled / 1 - Enabled in editing mode / 2 - Enabled in game mode / 3 - Visualize only deprecated ledge entities
    ```

- **g_LedgeGrabManager_DebugDrawInEditor_Distance**:

  - **Default Value:** `35`

  - **Description:**

    ```text
Max distance from camera at which ledges are rendered
    ```

- **g_LedgeGrabManager_DebugDrawInEditor_ToleranceMax**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Max ledge height.
    ```

- **g_LedgeGrabManager_DebugDrawInEditor_ToleranceMin**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Min ledge height.
    ```

- **g_LedgeGrabManager_DebugDrawInEditor_UseTerrain**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles usage of terrain only in ledge debug!
    ```

- **g_LedgeGrabManager_DebugDraw_Distance**:

  - **Default Value:** `35`

  - **Description:**

    ```text
Max distance from camera at which ledges are rendered
    ```

- **g_ProjectilePathDebugGfx**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays projectile trace debug.
    ```

- **g_XMLCPBAddExtraDebugInfoToXmlDebugFiles**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When the xml debug files are activated, this option adds the name and entity class name to every entity reference in the .xml .
    ```

- **g_XMLCPBBlockQueueLimit**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Limits the number of blocks to queue for saving, causes a main thread stall if exceeded. 0 for no limit.
    ```

- **g_XMLCPBGenerateXmlDebugFiles**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Activates the generation, for debug purposes, of a text xml file each time that there is a binary save (LastBinarySaved.xml) or load (LastBinaryLoaded.xml).
    ```

- **g_XMLCPBSizeReportThreshold**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
defines the minimun size needed for nodes to be shown in the xml report file
    ```

- **g_XMLCPBUseExtraZLibCompression**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables an extra zlib compression pass on the binary saves.
    ```

- **g_aimdebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable debug drawing for aiming direction
    ```

- **g_alignQuadruped**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable quadruped alignment.
    ```

- **g_alignQuadrupedDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable quadruped alignment debug outputs.
    ```

- **g_alignQuadrupedRotation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable rotational alignment for quadrupeds in the X axis. Value above 1 will turn on debugging.
    ```

- **g_alignSkeletonVertical**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable vertical offseting of the skeleton when ground aligning.
    ```

- **g_allowDisconnectIfUpdateFails**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **g_asynclevelload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable asynchronous level loading
    ```

- **g_autoteambalance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables auto team balance.
    ```

- **g_battleDust_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0: off, 1: text, 2: text+gfx
    ```

- **g_battleDust_effect**:

  - **Default Value:** `misc.battledust.light`

  - **Description:**

    ```text
Sets the effect to use for battledust
    ```

- **g_battleDust_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable battledust
    ```

- **g_battleRange**:

  - **Default Value:** `50`

  - **Description:**

    ```text
sets the battle range in meters 
    ```

- **g_breakImpulseScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How big do explosions need to be to break things?
    ```

- **g_breakageFadeDelay**:

  - **Default Value:** `6`

  - **Description:**

    ```text

    ```

- **g_breakageFadeTime**:

  - **Default Value:** `6`

  - **Description:**

    ```text

    ```

- **g_breakageMinAxisInertia**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Set this to 1.0 to force broken trees to have spherical inertia
    ```

- **g_breakageNoDebrisCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns off all collisions for debris, apart from coltype_solid
    ```

- **g_breakageTreeDec**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Please see comments in ActionGame.cpp
    ```

- **g_breakageTreeInc**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Please see comments in ActionGame.cpp
    ```

- **g_breakageTreeIncGlass**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Please see comments in ActionGame.cpp
    ```

- **g_breakageTreeMax**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Please see comments in ActionGame.cpp
    ```

- **g_breakage_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on debug rendering for broken objects counted against g_breakage_mem_limit
    ```

- **g_breakage_mem_limit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets a budget for procedurally breakable objects (in KBs)
    ```

- **g_breakage_particles_limit**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Imposes a limit on particles generated during 2d surfaces breaking
    ```

- **g_breakagelog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log break events
    ```

- **g_breaktimeoutframes**:

  - **Default Value:** `140`

  - **Description:**

    ```text

    ```

- **g_buddyMessagesIngame**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Output incoming buddy messages in chat while playing game.
    ```

- **g_combatFadeTime**:

  - **Default Value:** `17`

  - **Description:**

    ```text
sets the battle fade time in seconds 
    ```

- **g_combatFadeTimeDelay**:

  - **Default Value:** `7`

  - **Description:**

    ```text
waiting time before the battle starts fading out, in seconds 
    ```

- **g_cutsceneSkipDelay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Skip Delay for Cutscenes.
    ```

- **g_deathCam**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables / disables the MP death camera (shows the killer's location)
    ```

- **g_debugCollisionDamage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log collision damage
    ```

- **g_debugDialogBuffers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the on screen debug info for flownode dialog buffers.
    ```

- **g_debugDirectMPMenu**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Jump directly to MP menu on application start.
    ```

- **g_debugHits**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log hits
    ```

- **g_debugNetPlayerInput**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show some debug for player input
    ```

- **g_debugSaveLoadMemory**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Print debug information about save/load memory usage
    ```

- **g_debug_fscommand**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Print incoming fscommands to console
    ```

- **g_debug_stats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabled massive gameplay events debug
    ```

- **g_debugaimlook**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug aim/look direction
    ```

- **g_detachCamera**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Detach camera
    ```

- **g_difficultyHintSystem**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Lower difficulty hint system (0 is off, 1 is radius based, 2 is save-game based)
    ```

- **g_difficultyLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Difficulty level
    ```

- **g_difficultyRadius**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Radius in which player needs to die to display lower difficulty level hint.
    ```

- **g_difficultyRadiusThreshold**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of times player has to die within radius to trigger difficulty hint.
    ```

- **g_difficultySaveThreshold**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of times player has to die with same savegame active to trigger difficulty hint.
    ```

- **g_disableInputKeyFlowNodeInDevMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
disables input Key flownodes even in dev mode. Pure game only, does not affect editor.
    ```

- **g_disableSequencePlayback**:

  - **Default Value:** `0`

  - **Description:**

    ```text
disable movie sequence playback
    ```

- **g_disableWinKeys**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Determines if Windows keys are disabled
    ```

- **g_disable_grab**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable NPC grabbing
    ```

- **g_disable_pickup**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable picking objects up
    ```

- **g_disable_throw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable object throwing
    ```

- **g_displayIgnoreList**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Display ignore list in chat tab.
    ```

- **g_distanceForceNoIk**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Distance at which to disable ground alignment IK
    ```

- **g_distanceForceNoLegRaycasts**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Distance at which to disable ground alignment IKs raycasts
    ```

- **g_distanceForceNoLegRaycastsQuadrupeds**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Distance at which to disable ground alignment IKs raycasts
    ```

- **g_dof_averageAdjustSpeed**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Speed that the average between min and max can be approached. Default = 20
    ```

- **g_dof_distAppart**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimum distance that max and min can be apart. Default = 10
    ```

- **g_dof_ironsight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable ironsight dof. Default = 1
    ```

- **g_dof_maxAdjustSpeed**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Speed that DoF can adjust the max value with. Default = 200
    ```

- **g_dof_maxHitScale**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Scale of ray hit distance which Max tries to approach. Default = 2.0f
    ```

- **g_dof_minAdjustSpeed**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Speed that DoF can adjust the min value with. Default = 100
    ```

- **g_dof_minHitScale**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Scale of ray hit distance which Min tries to approach. Default = 0.25
    ```

- **g_dof_sampleAngle**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Sample angle in degrees. Default = 5
    ```

- **g_dofset_limitScale**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Scale Dof_FocusLimit param when it gets set Default = 9
    ```

- **g_dofset_maxScale**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Scale Dof_FocusMax param when it gets set Default = 3
    ```

- **g_dofset_minScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scale Dof_FocusMin param when it gets set Default = 1
    ```

- **g_ec_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable explosion culling of small objects. Default = 1
    ```

- **g_ec_extent**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Explosion culling length of an AABB side which needs to be exceed for objects to not be culled.
    ```

- **g_ec_radiusScale**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Explosion culling scale to apply to explosion radius for object query.
    ```

- **g_ec_removeThreshold**:

  - **Default Value:** `20`

  - **Description:**

    ```text
At how many items in exploding area will it start removing items.
    ```

- **g_ec_volume**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Explosion culling volume which needs to be exceed for objects to not be culled.
    ```

- **g_empStyle**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **g_enableAlternateIronSight**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/Disable alternate ironsight mode
    ```

- **g_enableFriendlyFallAndPlay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables fall&play feedback for friendly actors.
    ```

- **g_enableMPStealthOMeter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the stealth-o-meter to detect enemies in MP matches.
    ```

- **g_enableMergedMeshRuntimeAreas**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the Merged Mesh cluster generation and density precalculations at game/level load
    ```

- **g_enablePoolCache**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable the caching of data associated with entities pooled e.g., equipment pack, body damage, etc.
    ```

- **g_enableSlimCheckpoints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable the use of console style checkpoints instead of full save.
    ```

- **g_enableSpeedLean**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables player-controlled curve leaning in speed mode.
    ```

- **g_enableTracers**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable tracers.
    ```

- **g_enableitems**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable the item system
    ```

- **g_enableloadingscreen**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable the loading screen
    ```

- **g_energy_scale_income**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales incoming energy.
    ```

- **g_energy_scale_price**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Scales energy prices.
    ```

- **g_fallAndPlayThreshold**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Minimum damage for fall and play.
    ```

- **g_footstepSoundMaxDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximum distance for footstep sounds / fx spawned by Actors.
    ```

- **g_footstepSoundMinInterval**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Minimum time between footsteps events.
    ```

- **g_footstepSoundsFollowEntity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles moving of footsteps sounds with it's entity.
    ```

- **g_forceFastUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
GameObjects IsProbablyVisible->TRUE && IsProbablyDistant()->FALSE
    ```

- **g_fpDbaManagementDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug information about currently loaded fp dbas
    ```

- **g_fpDbaManagementEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable fp dbas load/unload management
    ```

- **g_fraglead**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Number of frags a player has to be ahead of other players once g_fraglimit is reached. Default is 1.
    ```

- **g_fraglimit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Number of frags before a round restarts. Default is 0, 0 means no frag-limit.
    ```

- **g_friendlyfireratio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets friendly damage ratio.
    ```

- **g_gameplayAnalyst**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/Disable Gameplay Analyst
    ```

- **g_glassAutoShatter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Always smash the whole pane, and spawn fracture effect
    ```

- **g_glassAutoShatterMinArea**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If the area of glass is below this, then autoshatter
    ```

- **g_glassAutoShatterOnExplosions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Just smash the whole pane, and spawn fracture effect for explosions
    ```

- **g_glassForceTimeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Make all glass break after a given time, overrides art settings
    ```

- **g_glassForceTimeoutSpread**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Add a random amount to forced glass shattering
    ```

- **g_glassMaxPanesToBreakPerFrame**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Max glass breaks, before auto-shattering is forced
    ```

- **g_glassNoDecals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns off glass decals
    ```

- **g_glassSystemEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the new dynamic breaking system for glass
    ```

- **g_godMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
God Mode
    ```

- **g_grabLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
verbosity for grab logging (0-2)
    ```

- **g_groundAlignAll**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable ground alignment for every character that supports it.
    ```

- **g_groundeffectsdebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable logging for GroundEffects (2 = use non-deferred ray-casting)
    ```

- **g_handleEvents**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates the registration requirement for GameObjectEvents
    ```

- **g_hitDeathReactions_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/Disables visual debug information for hit and death reactions system
    ```

- **g_hitDeathReactions_disableRagdoll**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables switching to ragdoll at the end of animations
    ```

- **g_hitDeathReactions_disable_ai**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If enabled, it'll not allow to execute any AI instruction during the hit/death reaction
    ```

- **g_hitDeathReactions_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables Hit/Death reaction system
    ```

- **g_hitDeathReactions_logReactionAnimsOnLoading**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Non-Release only CVar: Enables logging of animations used by non-animation graph-based reactions. 0: don't log, 1: log anim names, 2: log filepaths
    ```

- **g_hitDeathReactions_streaming**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables reactionAnims streaming. 0: Disabled, 1: DBA Registering-based, 2: Entity lifespan-based
    ```

- **g_hitDeathReactions_useLuaDefaultFunctions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If enabled, it'll use the default lua methods inside HitDeathReactions script instead of the default c++ version
    ```

- **g_hitDeathReactions_usePrecaching**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables precaching of of hitreactions: Requires game restart.
    ```

- **g_immersive**:

  - **Default Value:** `1`

  - **Description:**

    ```text
If set, multiplayer physics will be enabled
    ```

- **g_interactiveObjectDebugRender**:

  - **Default Value:** `0`

  - **Description:**

    ```text
InteractiveObject debug render.
    ```

- **g_joint_breaking**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles jointed objects breaking
    ```

- **g_landingBobLandTimeFactor**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Fraction of the bob time to be at full compression
    ```

- **g_landingBobTimeFactor**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Fraction of the bob time to release full compression
    ```

- **g_language**:

  - **Default Value:** ``

  - **Description:**

    ```text
Defines which language pak is loaded
    ```

- **g_languageAudio**:

  - **Default Value:** ``

  - **Description:**

    ```text
Will automatically match g_language setting unless specified otherwise
    ```

- **g_ledgeGrabClearHeight**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Distance a player must clear a ledge grab entity by to avoid doing a ledge grab
    ```

- **g_ledgeGrabMovingledgeExitVelocityMult**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
On exiting a grab onto a moving ledge a movement will be added to the players exit velocity in the direction of the ledge movement
    ```

- **g_loadPlayerModelOnLoad**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets if the client player's model should be loaded on level load
    ```

- **g_localPacketRate**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Packet rate locally on faked network connection
    ```

- **g_meleeWhileSprinting**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables option to melee while sprinting, using left mouse button.
    ```

- **g_minplayerlimit**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum number of players to start a match.
    ```

- **g_minteamlimit**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimum number of players in each team to start a match.
    ```

- **g_movementTransitions_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/Disables on-screen debugging of movement transitions
    ```

- **g_movementTransitions_debugFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Substring name filter for g_movementTransitions_debug (in mode 1)
    ```

- **g_movementTransitions_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables special movement transitions system
    ```

- **g_movementTransitions_log**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/Disables logging of special movement transitions
    ```

- **g_multiplayerEnableVehicles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable vehicles in multiplayer
    ```

- **g_no_breaking_by_objects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Prevents procedural breaking caused by rigid bodies
    ```

- **g_no_secondary_breaking**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Prevents secondary procedural breaks (to keep down memory usage)
    ```

- **g_playerFallAndPlay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When enabled, the player doesn't die from direct damage, but goes to fall and play.
    ```

- **g_playerHealthValue**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum player health.
    ```

- **g_playerInteractorRadius**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Maximum radius at which player can interact with other entities
    ```

- **g_playerLowHealthThreshold**:

  - **Default Value:** `40`

  - **Description:**

    ```text
The player health threshold when the low health effect kicks in.
    ```

- **g_playerRespawns**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the player lives.
    ```

- **g_pp_scale_income**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales incoming PP.
    ```

- **g_pp_scale_price**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales PP prices.
    ```

- **g_preroundtime**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Frozen time before round starts. Default is 8, 0 Disables freeze time.
    ```

- **g_procedural_breaking**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles procedural mesh breaking (except explosion-breaking)
    ```

- **g_proneAimAngleRestrict_Enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Test fix for matching aim restrictions between 1st and 3rd person
    ```

- **g_proneNotUsableWeapon_FixType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Test various fixes for not selecting hurricane while prone
    ```

- **g_punishFriendlyDeaths**:

  - **Default Value:** `1`

  - **Description:**

    ```text
The player gets punished by death when killing a friendly unit.
    ```

- **g_radialBlur**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Radial blur on explosions. Default = 1, 0 to disable
    ```

- **g_resetActionmapOnStart**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Resets Keyboard mapping on application start.
    ```

- **g_revivetime**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Revive wave timer.
    ```

- **g_roundlimit**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum numbers of rounds to be played. Default is 0, 0 means no limit.
    ```

- **g_roundtime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Duration of a round (in minutes). Default is 0, 0 means no time-limit.
    ```

- **g_saveLoadBasicEntityOptimization**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Switch basic entity data optimization
    ```

- **g_saveLoadExtendedLog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the generation of detailed log information regarding saveloads
    ```

- **g_saveLoadUseExportedEntityList**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Only save entities in the editor-generated save list (if available). 0 is the previous behavior
    ```

- **g_setActorModelFromLua**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggle if the actor model should be set from Lua or internally
    ```

- **g_showBitmapUi**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Show or hide the bitmap user interface.
    ```

- **g_showIdleStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **g_showPlayerState**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display all CPlayer entities (0=disabled, 1=only players, 2=also AI)
    ```

- **g_showUpdateState**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show the game object update state of any activated entities; 3-4 -- AI objects only
    ```

- **g_show_crosshair**:

  - **Default Value:** `1`

  - **Description:**

    ```text
show crosshair
    ```

- **g_show_crosshair_tp**:

  - **Default Value:** `1`

  - **Description:**

    ```text
keep crosshair in third person
    ```

- **g_show_fullscreen_info**:

  - **Default Value:** `0`

  - **Description:**

    ```text
show fullscreen info (and which one to show)
    ```

- **g_skipIntro**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Skip all the intro videos.
    ```

- **g_spectatorCollisions**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Collide against the geometry in spectator mode
    ```

- **g_stanceTransitionSpeed**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Set speed of camera transition from stance to stance
    ```

- **g_startFirstTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 before the game was started first time ever.
    ```

- **g_statisticsMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Statistics mode
 0 - disabled
 1 - enabled crysis mode
 2 - enabled K01 mode

    ```

- **g_stereoFrameworkEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the processing of the game stereo framework. (2=extra debug output)
    ```

- **g_stereoIronsightEyeDistance**:

  - **Default Value:** `0.0064`

  - **Description:**

    ```text
Distance of eyes when in ironsight
    ```

- **g_stereoIronsightWeaponDistance**:

  - **Default Value:** `0.375`

  - **Description:**

    ```text
Distance of convergence plane when in ironsight
    ```

- **g_suddendeathtime**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Number of seconds before round end to start sudden death. Default if 30. 0 Disables sudden death.
    ```

- **g_syncClassRegistry**:

  - **Default Value:** `0`

  - **Description:**

    ```text
synchronize class registry from server to clients
    ```

- **g_teamlock**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Number of players one team needs to have over the other, for the game to deny joining it. 0 disables.
    ```

- **g_timelimit**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Duration of a time-limited game (in minutes). Default is 0, 0 means no time-limit.
    ```

- **g_tk_punish**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Turns on punishment for team kills
    ```

- **g_tk_punish_limit**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of team kills user will be banned for
    ```

- **g_tpview_control**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables control of 3rd person view switching through cvar (F1 will be disabled!)
    ```

- **g_tpview_enable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables 3rd person view if precedent cvar is true
    ```

- **g_tpview_force_goc**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces 'Gears of Crysis' (tm) when in 3rd person view
    ```

- **g_tree_cut_reuse_dist**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum distance from a previously made cut that allows reusing
    ```

- **g_useSinglePosition**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates the new Single Position update order
    ```

- **g_useXMLCPBinForSaveLoad**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use XML compressed binary format for save and loads. DON'T CHANGE THIS DURING RUNTIME!
    ```

- **g_vaultMinAnimationSpeed**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
When vaulting at slow speeds the resulting animation speed will never go beneath this value
    ```

- **g_vaultMinHeightDiff**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Minimum height difference between a player and a ledge for a vault to be possible
    ```

- **g_visibilityTimeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adds visibility timeout to IsProbablyVisible() calculations
    ```

- **g_visibilityTimeoutTime**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Visibility timeout time used by IsProbablyVisible() calculations
    ```

- **g_walkMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Modify movement speed
    ```

- **g_waterHitOnly**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Bullet hit FX appears on water and not what's underneath
    ```

- **gfx_ampserver**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables AMP flash profiling
    ```

- **gfx_debugdraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display UI Elements debug info.
0=Disabled1=UIElements2=UIActions4=UIActions12=UIStack per UI FG
    ```

- **gfx_draw**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Draw UI Elements
    ```

- **gfx_enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the general FlashUI.
    ```

- **gfx_inputevents_triggerrepeat**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Time in seconds to wait between each input key trigger
    ```

- **gfx_inputevents_triggerstart**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Time in seconds to wait until input key triggering starts
    ```

- **gfx_loadtimethread**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables threaded rendering while loading
    ```

- **gfx_reloadonlanguagechange**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Automatically reloads all UIElements on language change
    ```

- **gfx_uiaction_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables UI Actions
    ```

- **gfx_uiaction_folder**:

  - **Default Value:** `Libs/UI/`

  - **Description:**

    ```text
Default folder for UIActions
    ```

- **gfx_uiaction_log**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log UI Actions
    ```

- **gfx_uiaction_log_filter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter for logging
<string> only log messages
-<string> don't log message
<filter1>|<filter2> to use more filters
    ```

- **gfx_uievents_editorenabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enabled UI->System events in editor (Disabled per default! handle with care!)
    ```

- **goc_enable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
gears of crysis
    ```

- **goc_targetx**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
target position of camera
    ```

- **goc_targety**:

  - **Default Value:** `-2.5`

  - **Description:**

    ```text
target position of camera
    ```

- **goc_targetz**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
target position of camera
    ```

- **gpu_particle_physics**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable GPU physics if available (0=off / 1=enabled).
    ```

- **hit_assistMultiplayerEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable minimum damage hit assistance in multiplayer games
    ```

- **hit_assistSingleplayerEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable minimum damage hit assistance
    ```

- **hr_dotAngle**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
max angle for FOV change
    ```

- **hr_fovAmt**:

  - **Default Value:** `0.03`

  - **Description:**

    ```text
goal FOV when hit
    ```

- **hr_fovTime**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
fov time
    ```

- **hr_rotateFactor**:

  - **Default Value:** `-0.1`

  - **Description:**

    ```text
rotate factor
    ```

- **hr_rotateTime**:

  - **Default Value:** `0.07`

  - **Description:**

    ```text
rotate time
    ```

- **http_password**:

  - **Default Value:** `password`

  - **Description:**

    ```text
Password for http administration
    ```

- **i_bufferedkeys**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles key buffering.
Usage: i_bufferedkeys [0/1]
Default is 0 (off). Set to 1 to process buffered key strokes.
    ```

- **i_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles input event debugging.
Usage: i_debug [0/1]
Default is 0 (off). Set to 1 to spam console with key events (only press and release).
    ```

- **i_debugDigitalButtons**:

  - **Default Value:** `0`

  - **Description:**

    ```text
render controller's digital button pressed info
Usage: 0 (off), 1(on)Default is 0. Value must be >=0
    ```

- **i_debug_mp_flowgraph**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays info on the MP flowgraph node
    ```

- **i_debug_projectiles**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays info about projectile status, where available.
    ```

- **i_debug_sounds**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable item sound debugging
    ```

- **i_debug_zoom_mods**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use zoom mode spread/recoil mods
    ```

- **i_debuggun_1**:

  - **Default Value:** `ai_statsTarget`

  - **Description:**

    ```text
Command to execute on primary DebugGun fire
    ```

- **i_debuggun_2**:

  - **Default Value:** `ag_debug`

  - **Description:**

    ```text
Command to execute on secondary DebugGun fire
    ```

- **i_forcefeedback**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable force feedback output.
    ```

- **i_inventory_capacity**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Players inventory capacity
    ```

- **i_itemSystemDebugMemStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display item memory stats on screen
    ```

- **i_kinGlobalExpCorrectionFactor**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Trend correction factor for double exponential smoothing.
    ```

- **i_kinGlobalExpDeviationRadius**:

  - **Default Value:** `0.04`

  - **Description:**

    ```text
Maximum deviation radius from prediction for double exponential smoothing.
    ```

- **i_kinGlobalExpJitterRadius**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Radius to determine jitter correction for double exponential smoothing.
    ```

- **i_kinGlobalExpPredictionFactor**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Prediction factor for double exponential smoothing.
    ```

- **i_kinGlobalExpSmoothFactor**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Smoothing factor for double exponential smoothing.
    ```

- **i_kinSkeletonMovedDistance**:

  - **Default Value:** `0.125`

  - **Description:**

    ```text
Distance used to determine if kinect skeleton has moved in the play space.
    ```

- **i_kinSkeletonSmoothType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Kinect skeleton tracking smooth type: 0 = not smoothed, 1 = using Double Exponential Smoothing
    ```

- **i_lighteffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable lights spawned during item effects.
    ```

- **i_lying_item_limit_mp**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Max number of items lying around in a level (<= 0 means no limit). Only works in multiplayer.
    ```

- **i_lying_item_limit_sp**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Max number of items lying around in a level (<= 0 means no limit). Only works in singleplayer.
    ```

- **i_mouse_accel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set mouse acceleration, 0.0 means no acceleration.
Usage: i_mouse_accel [float number] (usually a small number, 0.1 is a good one)
Default is 0.0 (off)
    ```

- **i_mouse_accel_max**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Set mouse max mouse delta when using acceleration.
Usage: i_mouse_accel_max [float number]
Default is 100.0
    ```

- **i_mouse_buffered**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles mouse input buffering.
Usage: i_mouse_buffered [0/1]
Default is 0 (off). Set to 1 to process buffered mouse input.
    ```

- **i_mouse_inertia**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set mouse inertia. It is disabled (0.0) by default.
Usage: i_mouse_inertia [float number]
Default is 0.0
    ```

- **i_mouse_scroll_coordinate_origin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls the origin of mouse coordinates sent for mouse wheel scrolling events.
0 = Top-left of screen space (Windows default behavior), 1 = Top-left of client area, 2 = Top-left of client area, clamped to client area
    ```

- **i_mouse_sensitivity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Changes mouse sensitivity.
Usage: i_mouse_sensitivity [float number]
Default is 1 (raw movement), Set to 0 for no movement, [0/1] for slower movement and [1/n] for faster movement
    ```

- **i_mouse_smooth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set mouse smoothing value, also if 0 (disabled) there will be a simple average
between the old and the actual input.
Usage: i_mouse_smooth [float number]
(1.0 = very very smooth, 30 = almost instant)
Default is 0.0
    ```

- **i_particleeffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable particles spawned during item effects.
    ```

- **i_postScePadTrackingEvent**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Defines which Sce Game Pad tracking events should be posted by the Input System: 
0=None
1=Touch
2=Orientation
4=Acceleration

    ```

- **i_precache**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables precaching of items during level loading.
    ```

- **i_soundeffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable playing item sound effects.
    ```

- **i_staticfiresounds**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable static fire sounds. Static sounds are not unloaded when idle.
    ```

- **i_useKinect**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use Kinect
    ```

- **i_xinput_deadzone_handling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
deadzonehandling
Usage: i_xinput_deadzone_handling 0/1 (0 - old deadzone/ 1 - new deadzone)
Default is 1. Value must be >=0.
    ```

- **int_moveZoomTime**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Number of seconds it takes to zoom out when moving. Default = 0.2
    ```

- **int_zoomAmount**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Maximum zoom, between 0.0 and 1.0. Default = .75
    ```

- **int_zoomInTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of seconds it takes to zoom in. Default = 5.0
    ```

- **int_zoomOutTime**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Number of seconds it takes to zoom out when you stop firing. Default = 0.5
    ```

- **log_EnableRemoteConsole**:

  - **Default Value:** `1`

  - **Description:**

    ```text
enables/disables the remote console
    ```

- **log_Filter**:

  - **Default Value:** ``

  - **Description:**

    ```text
defines general filter for log events
log_Filter="Foo" - will only log events that matches this filter ("Foo")log_Filter="-Foo" - all events that matches this filter ("Foo") will be droppedlog_Filter="Foo|-Bar" - combine more filters
    ```

- **log_IncludeTime**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** ``

  - **Description:**

    ```text
Only show warnings from specified module
    ```

- **log_SpamDelay**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the minimum time interval between messages classified as spam
    ```

- **log_UseFilter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
toggle to use filter (0=disabled, 1=filter console, 2=filter file, 3=filter console and file)
    ```

- **log_Verbosity**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
when enabled, setting log_verbosity to 0 will stop all logging including writing to file
    ```

- **log_WriteToFile**:

  - **Default Value:** `1`

  - **Description:**

    ```text
toggle whether to write log to file (game.log)
    ```

- **log_WriteToFileVerbosity**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
When not 0, writes tick log entry into the log file, every N seconds
    ```

- **lua_CodeCoverage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables code coverage
    ```

- **lua_StopOnError**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Stops on error
    ```

- **lua_debugger**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the script debugger.
1 to trigger on breakpoints and errors
2 to only trigger on errors
Usage: lua_debugger [0/1/2]
    ```

- **lua_stackonmalloc**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/disables logging of the called lua functions and respective callstacks, whenever a new lua object is instantiated.
    ```

- **m_wh_demo_positionOverride**:

  - **Default Value:** ``

  - **Description:**

    ```text
Override player position by this value during timeDemo.
    ```

- **mfx_Debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on MaterialEffects debug messages. 1=Collisions, 2=Breakage, 3=Both
    ```

- **mfx_DebugFlowGraphFX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on Material FlowGraph FX manager debug messages.
    ```

- **mfx_DebugVisual**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off visual debugging for MFX system
    ```

- **mfx_DebugVisualFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **mfx_Enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables MaterialEffects.
    ```

- **mfx_EnableAttachedEffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable attached effects (characters, entities...)
    ```

- **mfx_EnableFGEffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enabled Flowgraph based Material effects. Default: On
    ```

- **mfx_ParticleImpactThresh**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Impact threshold for particle effects. Default: 2.0
    ```

- **mfx_RaisedSoundImpactThresh**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Impact threshold for sound effects if we're rolling. Default: 3.5
    ```

- **mfx_SerializeFGEffects**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Serialize Flowgraph based effects. Default: Off
    ```

- **mfx_SoundImpactThresh**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Impact threshold for sound effects. Default: 1.5
    ```

- **mfx_Timeout**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Timeout (in seconds) to avoid playing effects too often
    ```

- **mfx_pfx_maxDist**:

  - **Default Value:** `35`

  - **Description:**

    ```text
Max dist (how far away before scale is clamped)
    ```

- **mfx_pfx_maxScale**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Max scale (when particle is far)
    ```

- **mfx_pfx_minScale**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Min scale (when particle is close)
    ```

- **mn_LogToFile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Dumps all mann event logging to the file
    ```

- **mn_allowEditableDatabasesInPureGame**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Do not store editable databases
    ```

- **mov_NoCutscenes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable playing of Cut-Scenes
    ```

- **mov_cameraPrecacheTime**:

  - **Default Value:** `4`

  - **Description:**

    ```text

    ```

- **mov_enableFakeProjection**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabled fake projection in cutscenes.
    ```

- **mov_maxTimeStepForMovieSystem**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Caps the time step for the movie system so that a cut-scene won't be jumped in the case of an extreme stall.
    ```

- **mov_overrideCam**:

  - **Default Value:** ``

  - **Description:**

    ```text
Set the camera used for the sequence which overrides the camera track info in the sequence.
    ```

- **movie_physicalentity_animation_lerp**:

  - **Default Value:** `0.85`

  - **Description:**

    ```text
Lerp value for animation-driven physical entities
    ```

- **movie_timeJumpTransitionTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Jump transition time
    ```

- **net_active_http_connections**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Number of active http connections
    ```

- **net_debugVerboseLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **net_disconnect_on_rmi_error**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disconnect remote connections on script exceptions during RMI calls
    ```

- **net_inactivitytimeout**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Sets how many seconds without receiving a packet a connection will stay alive for (can only be set on server)
    ```

- **net_inactivitytimeoutDevmode**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Sets how many seconds without receiving a packet a connection will stay alive for while in devmode (can only be set on server)
    ```

- **net_lan_scanport_first**:

  - **Default Value:** `64087`

  - **Description:**

    ```text
Starting port for LAN games scanning
    ```

- **net_lan_scanport_num**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Num ports for LAN games scanning
    ```

- **net_lanbrowser**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable lan games browser
    ```

- **net_log**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logging level of network system
    ```

- **net_log_remote_methods**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log remote method invocations
    ```

- **net_numNetIDHighBitBits**:

  - **Default Value:** `11`

  - **Description:**

    ```text
Number of bits used for high bit NetIDs. By default static entities start allocating from high bit NetIDs.
    ```

- **net_numNetIDLowBitBits**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of bits used for low bit NetIDs. By default players start allocating from low bit NetIDs.
    ```

- **net_numNetIDMediumBitBits**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Number of bits used for medium bit NetIDs. By default dynamic entities start allocating from medium bit NetIDs.
    ```

- **net_phys_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **net_phys_lagsmooth**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text

    ```

- **net_phys_pingsmooth**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text

    ```

- **net_receiveQueueSize**:

  - **Default Value:** `2.09715e+07`

  - **Description:**

    ```text

    ```

- **net_sendQueueSize**:

  - **Default Value:** `5.24288e+06`

  - **Description:**

    ```text

    ```

- **net_stats_login**:

  - **Default Value:** ``

  - **Description:**

    ```text
Login for reporting stats on dedicated server
    ```

- **net_stats_pass**:

  - **Default Value:** ``

  - **Description:**

    ```text
Password for reporting stats on dedicated server
    ```

- **nvAnselDisallow**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Does Nvidia Ansel allow to be activated
    ```

- **osm_enabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/disables overload scene manager
    ```

- **osm_fbMinScale**:

  - **Default Value:** `0.66`

  - **Description:**

    ```text
The minimum scale factor the overload scene manager will drop to
    ```

- **osm_fbScaleDeltaDown**:

  - **Default Value:** `5`

  - **Description:**

    ```text
The speed multiplier for the overload scene manager frame buffer scaling down
    ```

- **osm_fbScaleDeltaUp**:

  - **Default Value:** `1`

  - **Description:**

    ```text
The speed multiplier for the overload scene manager frame buffer scaling up
    ```

- **osm_historyLength**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Overload scene manager number of frames to record stats for
    ```

- **osm_targetFPS**:

  - **Default Value:** `28`

  - **Description:**

    ```text
Overload scene manager target frame rate
    ```

- **osm_targetFPSTolerance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
The overload scene manager will make adjustments if fps is outside targetFPS +/- this value
    ```

- **p_CharacterIK**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles character IK.
Usage: p_characterik [0/1]
Default is 1 (on). Set to 0 to disable inverse kinematics.
    ```

- **p_DLCDRegionCount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Num of regions enumerated when searching for DLC's
    ```

- **p_DLCDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable debug for DLC manager.
    ```

- **p_GEB_max_cells**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Specifies the cell number threshold after which GetEntitiesInBox issues a warning
    ```

- **p_accuracy_LCPCG**:

  - **Default Value:** `0.005`

  - **Description:**

    ```text
Desired accuracy of LCP CG solver (velocity-related, m/s)
    ```

- **p_accuracy_LCPCG_no_improvement**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Required LCP CG accuracy that allows to stop if there was no improvement after p_max_LCPCG_fruitless_iters
    ```

- **p_accuracy_MC**:

  - **Default Value:** `0.002`

  - **Description:**

    ```text
Desired accuracy of microcontact solver (velocity-related, m/s)
    ```

- **p_approx_caps_len**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Breakable trees are approximated with capsules of this length (0 disables approximation)
    ```

- **p_break_on_validation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles break on validation error.
Usage: p_break_on_validation [0/1]
Default is 0 (off). Issues CryDebugBreak() call in case of
a physics parameter validation error.
    ```

- **p_check_out_of_bounds**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Check for physics entities outside world (terrain) grid:
1 - Enable raycasts; 2 - Enable proximity checks; 3 - Both
    ```

- **p_climbable_offset**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Maximal climbable offset in z on non-climbable slopes.
Usage: p_climbable_offset 0.25
    ```

- **p_collision_mode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This variable is obsolete.
    ```

- **p_cull_distance**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Culling distance for physics helpers rendering
    ```

- **p_damping_group_size**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Sets contacting objects group size
before group damping is used.Usage: p_damping_group_size 3
Used for internal tweaking only.
    ```

- **p_debug_explosions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on explosions debug mode
    ```

- **p_debug_joints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set, breakable objects will log tensions at the weakest spots
    ```

- **p_do_step**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Steps physics system forward when in single step mode.
Usage: p_do_step 1
Default is 0 (off). Each 'p_do_step 1' instruction allows
the physics system to advance a single step.
    ```

- **p_draw_cells**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles display of physical cells. The value is a bitmask : 
bit 0  - show cells
bit 1  - show dephysicalization timer
bit 2  - show cell index numbers
Examples: disabled - 0, show cells with timers - 3, show cells with indexes - 5
    ```

- **p_draw_helpers**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
This variable is obsolete.
    ```

- **p_ent_grid_use_obb**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Whether to use OBBs rather than AABBs for the entity grid setup for brushes
    ```

- **p_fixed_timestep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles fixed time step mode.Usage: p_fixed_timestep [0/1]
Forces fixed time step when set to 1. When set to 0, the
time step is variable, based on the frame rate.
    ```

- **p_fly_mode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles fly mode.
Usage: p_fly_mode [0/1]
    ```

- **p_force_sync**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Forces main thread to wait on physics if not completed in time
    ```

- **p_gravity_z**:

  - **Default Value:** `-9.81`

  - **Description:**

    ```text

    ```

- **p_group_damping**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Toggles damping for object groups.
Usage: p_group_damping [0/1]
Default is 1 (on). Used for internal tweaking only.
    ```

- **p_joint_damage_accum**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Default fraction of damage (tension) accumulated on a breakable joint
    ```

- **p_joint_damage_accum_threshold**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Default damage threshold (0..1) for p_joint_damage_accum
    ```

- **p_joint_gravity_step**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Time step used for gravity in breakable joints (larger = stronger gravity effects)
    ```

- **p_jump_to_profile_ent**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Move the local player next to the corresponding entity in the p_profile_entities list
    ```

- **p_lattice_max_iters**:

  - **Default Value:** `100000`

  - **Description:**

    ```text
Limits the number of iterations of lattice tension solver
    ```

- **p_limit_simple_solver_energy**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Specifies whether the energy added by the simple solver is limited (0 or 1)
    ```

- **p_list_active_objects**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **p_log_lattice_tension**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set, breakable objects will log tensions at the weakest spots
    ```

- **p_max_LCPCG_contacts**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum number of contacts that LCPCG solver is allowed to handle
    ```

- **p_max_LCPCG_fruitless_iters**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum number of LCP CG iterations w/o improvement (defined by p_min_LCPCGimprovement)
    ```

- **p_max_LCPCG_iters**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximum number of LCP CG iterations
    ```

- **p_max_LCPCG_microiters**:

  - **Default Value:** `12000`

  - **Description:**

    ```text
Limits the total number of per-contact iterations during one LCP CG iteration
(number of microiters = number of subiters * number of contacts)
    ```

- **p_max_LCPCG_microiters_final**:

  - **Default Value:** `25000`

  - **Description:**

    ```text
Same as p_max_LCPCG_microiters, but for the final LCP CG iteration
    ```

- **p_max_LCPCG_subiters**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Limits the number of LCP CG solver inner iterations (should be of the order of the number of contacts)
    ```

- **p_max_LCPCG_subiters_final**:

  - **Default Value:** `250`

  - **Description:**

    ```text
Limits the number of LCP CG solver inner iterations during the final iteration (should be of the order of the number of contacts)
    ```

- **p_max_MC_iters**:

  - **Default Value:** `6000`

  - **Description:**

    ```text
Specifies the maximum number of microcontact solver iterations *per contact*
    ```

- **p_max_MC_mass_ratio**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum mass ratio between objects in an island that MC solver is considered safe to handle
    ```

- **p_max_MC_vel**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximum object velocity in an island that MC solver is considered safe to handle
    ```

- **p_max_approx_caps**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Maximum number of capsule approximation levels for breakable trees
    ```

- **p_max_bone_velocity**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Clamps character bone velocities estimated from animations
    ```

- **p_max_contact_gap**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Sets the gap, enforced whenever possible, between
contacting physical objects.Usage: p_max_contact_gap 0.01
This variable is used for internal tweaking only.
    ```

- **p_max_contact_gap_player**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Sets the safe contact gap for player collisions with
the physical environment.Usage: p_max_contact_gap_player 0.01
This variable is used for internal tweaking only.
    ```

- **p_max_contact_gap_simple**:

  - **Default Value:** `0.03`

  - **Description:**

    ```text
Specifies the maximum contact gap for objects that use the simple solver
    ```

- **p_max_contacts**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Maximum contact number, after which contact reduction mode is activated
    ```

- **p_max_debris_mass**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Broken pieces with mass<=this limit use debris collision settings
    ```

- **p_max_entity_cells**:

  - **Default Value:** `300000`

  - **Description:**

    ```text
Limits the number of entity grid cells an entity can occupy
    ```

- **p_max_object_splashes**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Specifies how many splash events one entity is allowed to generate
    ```

- **p_max_plane_contacts**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Maximum number of contacts lying in one plane between two rigid bodies
(the system tries to remove the least important contacts to get to this value)
    ```

- **p_max_plane_contacts_distress**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Same as p_max_plane_contacts, but is effective if total number of contacts is above p_max_contacts
    ```

- **p_max_player_velocity**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Clamps players' velocities to this value
    ```

- **p_max_substeps**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Limits the number of substeps allowed in variable time step mode.
Usage: p_max_substeps 5
Objects that are not allowed to perform time steps
beyond some value make several substeps.
    ```

- **p_max_substeps_large_group**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Limits the number of substeps large groups of objects can make
    ```

- **p_max_unproj_vel**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Limits the maximum unprojection velocity request
    ```

- **p_max_velocity**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Clamps physicalized objects' velocities to this value
    ```

- **p_max_world_step**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Specifies the maximum step physical world can make (larger steps will be truncated)
    ```

- **p_min_LCPCG_improvement**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Defines a required residual squared length improvement, in fractions of 1
    ```

- **p_min_MC_iters**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Specifies the minmum number of microcontact solver iterations *per contact set* (this has precedence over p_max_mc_iters)
    ```

- **p_min_separation_speed**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Used a threshold in some places (namely, to determine when a particle
goes to rest, and a sliding condition in microcontact solver)
    ```

- **p_net_debugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw some debug graphics to help diagnose issues (requires p_draw_helpers to be switch on to work, e.g. p_draw_helpers rR_b)
    ```

- **p_net_extrapmax**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
The maximum amount of time the client is allowed to extrapolate the position based on last received packet.
    ```

- **p_net_interp**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
The amount of time which the client will lag behind received packet updates. High values result in smoother movement but introduces additional lag as a trade-off.
    ```

- **p_net_sequencefrequency**:

  - **Default Value:** `256`

  - **Description:**

    ```text
The frequency at which sequence numbers increase per second, higher values add accuracy but go too high and the sequence numbers will wrap round too fast
    ```

- **p_num_bodies_large_group**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Group size to be used with p_max_substeps_large_group, in bodies
    ```

- **p_num_startup_overload_checks**:

  - **Default Value:** `20`

  - **Description:**

    ```text
For this many frames after loading a level, check if the physics gets overloaded and freezes non-player physicalized objects that are slow enough
    ```

- **p_num_threads**:

  - **Default Value:** `1`

  - **Description:**

    ```text
The number of internal physics threads
    ```

- **p_penalty_scale**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Scales the penalty impulse for objects that use the simple solver
    ```

- **p_players_can_break**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Whether living entities are allowed to break static objects with breakable joints
    ```

- **p_predicted_slope_distance_in**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Distance for surface material predition when living is before the slope.
    ```

- **p_predicted_slope_distance_out**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Distance for surface material predition when living is on the slope.
    ```

- **p_profile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables group profiling of physical entities
    ```

- **p_profile_entities**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables per-entity time step profiling
    ```

- **p_profile_functions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables detailed profiling of physical environment-sampling functions
    ```

- **p_prohibit_unprojection**:

  - **Default Value:** `1`

  - **Description:**

    ```text
This variable is obsolete.
    ```

- **p_proxy_highlight_range**:

  - **Default Value:** `800`

  - **Description:**

    ```text
Physics proxies with triangle counts >= p_proxy_highlight_threshold+p_proxy_highlight_range will get the maximum highlight
    ```

- **p_proxy_highlight_threshold**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Physics proxies with triangle counts large than this will be highlighted
    ```

- **p_pumploggedevents_parallel**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **p_ray_fadeout**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Fade-out time for ray physics helpers
    ```

- **p_ray_peak_time**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Rays that take longer then this (in ms) will use different color
    ```

- **p_rope_collider_size_limit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables rope collisions with meshes having more triangles than this (0-skip the check)
    ```

- **p_single_step_mode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles physics system 'single step' mode.Usage: p_single_step_mode [0/1]
Default is 0 (off). Set to 1 to switch physics system (except
players) to single step mode. Each step must be explicitly
requested with a 'p_do_step' instruction.
    ```

- **p_skip_redundant_colldet**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Specifies whether to skip furher collision checks between two convex objects using the simple solver
when they have enough contacts between them
    ```

- **p_sliding_time_mult**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Higher values will make sliding reach top speed faster (also depends on the slope)
    ```

- **p_splash_dist0**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Range start for splash event distance culling
    ```

- **p_splash_dist1**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Range end for splash event distance culling
    ```

- **p_splash_force0**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimum water hit force to generate splash events at p_splash_dist0
    ```

- **p_splash_force1**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Minimum water hit force to generate splash events at p_splash_dist1
    ```

- **p_splash_vel0**:

  - **Default Value:** `4.5`

  - **Description:**

    ```text
Minimum water hit velocity to generate splash events at p_splash_dist0
    ```

- **p_splash_vel1**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimum water hit velocity to generate splash events at p_splash_dist1
    ```

- **p_tick_breakable**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Sets the breakable objects structure update interval
    ```

- **p_time_granularity**:

  - **Default Value:** `0.0001`

  - **Description:**

    ```text
Sets physical time step granularity.
Usage: p_time_granularity [0..0.1]
Used for internal tweaking only.
    ```

- **p_unproj_vel_scale**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Requested unprojection velocity is set equal to penetration depth multiplied by this number
    ```

- **p_use_distance_contacts**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows to use distance-based contacts (is forced off in multiplayer)
    ```

- **p_use_unproj_vel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
internal solver tweak
    ```

- **p_wireframe_distance**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Maximum distance at which wireframe is drawn on physics helpers
    ```

- **pl_DebugFootstepSounds**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles debug messages of footstep sounds.
    ```

- **pl_clientInertia**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Override the interia of clients
    ```

- **pl_curvingSlowdownSpeedScale**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Player only slowdown speedscale when curving/leaning extremely.
    ```

- **pl_debugFallDamage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables console output of fall damage information.
    ```

- **pl_debugInterpolation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug interpolation
    ```

- **pl_debug_filter**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **pl_debug_jumping**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **pl_debug_movement**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **pl_fallDamage_Normal_SpeedFatal**:

  - **Default Value:** `13.7`

  - **Description:**

    ```text
Fatal fall speed in armor mode (13.5 m/s after falling freely for ca 20m).
    ```

- **pl_fallDamage_Normal_SpeedSafe**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Safe fall speed (in all modes, including strength jump on flat ground).
    ```

- **pl_fallDamage_SpeedBias**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Damage bias for medium fall speed: =1 linear, <1 more damage, >1 less damage.
    ```

- **pl_fallHeight**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
The height above the ground at which the player starts to fall
    ```

- **pl_inputAccel**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Movement input acceleration
    ```

- **pl_jump_control.air_control_scale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales base air control while in air
    ```

- **pl_jump_control.air_inertia_scale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales inertia while in air
    ```

- **pl_jump_control.air_resistance_scale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scales base air resitance while in air
    ```

- **pl_ledgeClamber.cameraBlendWeight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
FP camera blending weight when performing ledge grab action. Do NOT change this from 1.0f lightly!
    ```

- **pl_ledgeClamber.debugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turn on debug drawing of Ledge Clamber
    ```

- **pl_ledgeClamber.enableVaultFromStanding**:

  - **Default Value:** `2`

  - **Description:**

    ```text
0 = No vault from standing; 1 = Vault when push towards obstacle and press jump; 2 = Vault when press jump; 3 = Vault when push towards obstacle
    ```

- **pl_lookAccel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Look input acceleration (0=disabled acceleration)
    ```

- **pl_movement.crouch_SpeedScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Crouch speed scale
    ```

- **pl_movement.ground_timeInAirToFall**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Amount of time (in seconds) the player/ai can be in the air and still be considered on ground
    ```

- **pl_movement.ground_velocityToFall**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Minimal Z velocity to enable falling
    ```

- **pl_movement.mp_slope_speed_multiplier_downhill**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Changes how drastically slopes affect a players movement speed when moving downhill. Lower = less effect.
    ```

- **pl_movement.mp_slope_speed_multiplier_minHill**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimum threshold for the slope steepness before speed is affected (in degrees).
    ```

- **pl_movement.mp_slope_speed_multiplier_uphill**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Changes how drastically slopes affect a players movement speed when moving uphill. Lower = less effect.
    ```

- **pl_movement.power_sprint_targetFov**:

  - **Default Value:** `55`

  - **Description:**

    ```text
Fov while sprinting in power mode
    ```

- **pl_movement.speedScale**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
General speed scale
    ```

- **pl_movement.sprintStamina_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
For MP characters (eg. Assault defenders). Display debug values for the sprint stamina
    ```

- **pl_movement.sprint_SpeedScale**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Sprint speed scale
    ```

- **pl_movement.strafe_SpeedScale**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Strafe speed scale
    ```

- **pl_netAimLerpFactor**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Factor to lerp the remote aim directions by
    ```

- **pl_netSerialiseMaxSpeed**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum char speed, used by interpolation
    ```

- **pl_nightvisionModeBinocular**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Sets the default nightvision mode for binocular item
    ```

- **pl_playerErrorSnapDistSquare**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximum distance between local and remote player pos to perform error snapping
    ```

- **pl_scaledMovement**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Movement is scaled directly by the gamepad stick offset
    ```

- **pl_serialisePhysVel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Serialise the physics vel rathe rthan the stick
    ```

- **pl_swimBackSpeedMul**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Swimming backwards speed mul.
    ```

- **pl_swimBaseSpeed**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Swimming base speed.
    ```

- **pl_swimJumpSpeedBaseMul**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Swimming speed normal jump velocity mul (dolphin rocket).
    ```

- **pl_swimJumpSpeedCost**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Swimming speed shift+jump energy cost (dolphin rocket).
    ```

- **pl_swimJumpSpeedSprintMul**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Swimming speed shift+jump velocity mul (dolphin rocket).
    ```

- **pl_swimJumpStrengthBaseMul**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Swimming strength normal jump velocity mul (dolphin rocket).
    ```

- **pl_swimJumpStrengthCost**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Swimming strength shift+jump energy cost (dolphin rocket).
    ```

- **pl_swimJumpStrengthSprintMul**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Swimming strength shift+jump velocity mul (dolphin rocket).
    ```

- **pl_swimNormalSprintSpeedMul**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Swimming Non-Speed sprint speed mul.
    ```

- **pl_swimSideSpeedMul**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Swimming sideways speed mul.
    ```

- **pl_swimSpeedSprintSpeedMul**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Swimming Speed sprint speed mul.
    ```

- **pl_swimUpSprintSpeedMul**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Swimming sprint while looking up (dolphin rocket).
    ```

- **pl_swimVertSpeedMul**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Swimming vertical speed mul.
    ```

- **pl_velocityInterpAirControlScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use velocity based interpolation method with gravity adjustment
    ```

- **pl_velocityInterpAirDeltaFactor**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Interpolation air motion damping factor (0-1)
    ```

- **pl_velocityInterpAlwaysSnap**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to true to continually snap the remote player to the desired position, for debug usage only
    ```

- **pl_velocityInterpPathCorrection**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Percentage of velocity to apply tangentally to the current velocity, used to reduce oscillation
    ```

- **pl_velocityInterpSynchJump**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Velocity interp jump velocity synching
    ```

- **pp_LoadOnlineAttributes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Load online attributes
    ```

- **pp_RSFDebugWrite**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When RichSaveGames are enabled, save plain XML Data alongside for debugging
    ```

- **pp_RSFDebugWriteOnLoad**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When RichSaveGames are enabled, save plain XML Data alongside for debugging when loading a savegame
    ```

- **pp_RichSaveGames**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable RichSaveGame Format for SaveGames
    ```

- **profile**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Profiles streaming of different assets.
Usage: profileStreaming [0/1/2]
	1: Graph displayed as points.	2: Graph displayed as lines.Default is 0 (off).
    ```

- **profile_additionalsub**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable displaying additional sub-system profiling.
Usage: profile_additionalsub #
Where where # may be:
	0: no additional subsystem information
	1: display additional subsystem information
Default is 0 (off)
    ```

- **profile_allthreads**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables profiling of non-main threads.

    ```

- **profile_filter**:

  - **Default Value:** ``

  - **Description:**

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

  - **Default Value:** ``

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable drawing of profiling graph.
    ```

- **profile_graphScale**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Sets the scale of profiling histograms.
Usage: profileGraphScale 100
    ```

- **profile_network**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables network profiling
    ```

- **profile_pagefaults**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable drawing of page faults graph.
    ```

- **profile_peak**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Profiler Peaks Tolerance in Milliseconds
    ```

- **profile_peak_display**:

  - **Default Value:** `8`

  - **Description:**

    ```text
hot to cold time for peak display
    ```

- **profile_sampler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set to 1 to start sampling profiling
    ```

- **profile_sampler_max_samples**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Number of samples to collect for sampling profiler
    ```

- **profile_smooth**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Profiler exponential smoothing interval (seconds)
    ```

- **profile_weighting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Profiler smoothing mode: 0 = legacy, 1 = average, 2 = peak weighted, 3 = peak hold
    ```

- **q_Renderer**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Defines the quality of Renderer
Usage: q_Renderer 0=low/1=med/2=high/3=very high (default)
    ```

- **q_ShaderFX**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of FX
Usage: q_ShaderFX 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderGeneral**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of General
Usage: q_ShaderGeneral 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderGlass**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Glass
Usage: q_ShaderGlass 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderHDR**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of HDR
Usage: q_ShaderHDR 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderIce**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Ice
Usage: q_ShaderIce 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderMetal**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Metal
Usage: q_ShaderMetal 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderPostProcess**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of PostProcess
Usage: q_ShaderPostProcess 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderShadow**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Shadow
Usage: q_ShaderShadow 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderTerrain**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Terrain
Usage: q_ShaderTerrain 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderVegetation**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Vegetation
Usage: q_ShaderVegetation 0=low/1=med/2=high/3=very high
    ```

- **q_ShaderWater**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines the shader quality of Water
Usage: q_ShaderWater 0=low/1=med/2=high/3=very high
    ```

- **r_3MonHack**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables 3 monitor hack hud in center
    ```

- **r_3MonHackHUDFOVX**:

  - **Default Value:** `28`

  - **Description:**

    ```text
3 monitor hack hud in center - X FOV
    ```

- **r_3MonHackHUDFOVY**:

  - **Default Value:** `60`

  - **Description:**

    ```text
3 monitor hack hud in center - Y FOV
    ```

- **r_3MonHackLeftCGFOffsetX**:

  - **Default Value:** `0.93`

  - **Description:**

    ```text
3 monitor hack hud in center - Adds position offset in X direction to all left CGF planes
    ```

- **r_3MonHackRightCGFOffsetX**:

  - **Default Value:** `-0.93`

  - **Description:**

    ```text
3 monitor hack hud in center - Adds position offset in X direction to all right CGF planes
    ```

- **r_3PLAverageIlluminanceAttenuationMin**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Minimal value of attenuation caused by low average illuminance.
	0 -> 3pl can have zero intensity in the dark
	1 -> illumination of the scene won't attenuate 3pl at all
    ```

- **r_3PLAverageIlluminanceMultiplier**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Multiplies average illuminance of the previous frame to get the 3pl attenuation. This cannot make 3pl brighter, it only attenuates the lights in the dark.
    ```

- **r_3PLFalloffBegin**:

  - **Default Value:** `0.0001`

  - **Description:**

    ```text
Depth buffer value at which Three-Point Lighting falloff begins. Everything closer than this will fully receive TPL.
    ```

- **r_3PLFalloffEnd**:

  - **Default Value:** `0.0015`

  - **Description:**

    ```text
Depth buffer value at which Three-Point Lighting falloff ends. Everything farther than this will have no TPL.
    ```

- **r_3PLFillDirStr**:

  - **Default Value:** `0, 0, -130`

  - **Description:**

    ```text
Three Point Lighting - Fill light dir written as a string
    ```

- **r_3PLGradientAngle**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Direction of the gradient.
	0: top -> down
	90: left -> right

    ```

- **r_3PLGradientEnd**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
This is the value of the gradient at the bottom of the screen. There is a screen-space gradient going from top to bottom that is used to darken the 3pl.
Setting this to 1 effectivelly disables this feature.
    ```

- **r_3PLKeyDirStr**:

  - **Default Value:** `0, 40, 130`

  - **Description:**

    ```text
Three Point Lighting - Key light dir written as a string
    ```

- **r_3PLMaxRelativeIlluminanceRatio**:

  - **Default Value:** `2`

  - **Description:**

    ```text
We modulate 3PL intensity using pixel relative illuminance (using the regular lights, probes and GI).
This bounds the effect. Setting this to 1 effectivelly disables this feature.
Setting this to 2 will clamp the ratio between 0.5 and 2.
    ```

- **r_3PLRimDirStr**:

  - **Default Value:** `0, 10, -50`

  - **Description:**

    ```text
Three Point Lighting - Rim light dir written as a string
    ```

- **r_AllowLiveMoCap**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Offers the LiveCreate MoCap Editor on Editor Startup when 1
    ```

- **r_AntialiasingMode**:

  - **Default Value:** `3`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables AA debugging views
Usage: r_AntialiasingModeDebug [zoom-factor]
    ```

- **r_AntialiasingModeEditor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets antialiasing modes to editing mode (disables jitter on modes using camera jitter which can cause flickering of helper objects)
Usage: r_AntialiasingModeEditor [0/1]
    ```

- **r_AntialiasingModeSCull**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables post processed based aa modes stencil culling optimization

    ```

- **r_AntialiasingSMAAThreshold**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Specifies threshold (in normalized brightness) when SMAA considers edge-detection. Default 0.1
Bigger values requires larger brightness differences to trigger edge-detection, which is faster but antialiases less.
Smaller value allows smaller brightness differences to trigger edge-detection, which is slower but antialiases more.
    ```

- **r_AntialiasingTAAFalloffHiFreq**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Set TAA falloff for high frequencies (high contrast regions). Default 10.0
Bigger value increases temporal stability but also overall image blurriness
Smaller value decreases temporal stability but gives overall sharper image
    ```

- **r_AntialiasingTAAFalloffLowFreq**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set TAA falloff for low frequencies (low contrast regions). Default 2.0
Bigger value increases temporal stability but also overall image blurriness
Smaller value decreases temporal stability but gives overall sharper image
    ```

- **r_AntialiasingTAAPattern**:

  - **Default Value:** `1`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables TAA sharpening.

    ```

- **r_AntialiasingTSAAMipBias**:

  - **Default Value:** `-0.25`

  - **Description:**

    ```text
Sets mimap lod bias for TSAA (negative values for sharpening).

    ```

- **r_AntialiasingTSAASmoothness**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Adjusts smoothness of image under motion.

    ```

- **r_AntialiasingTSAASubpixelDetection**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Adjusts metric for detecting subpixel changes (higher: less flickering but more ghosting)

    ```

- **r_AuxGeomAutoScaleOver1080pWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable aux geom text scale for high resolutions. Values in-between 0 and 1 changes how much the text is scaled.
    ```

- **r_AuxGeomFontAutoScaleMultiplierOver1080pWH**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Multiplier for aux geom font auto scaling on high resolutions. Value 0.8 means the font is only scaled 80% of what it should based on the ratio between actual resolution and 1080p
    ```

- **r_BreakOnError**:

  - **Default Value:** `0`

  - **Description:**

    ```text
calls debugbreak on illegal behaviour
    ```

- **r_Brightness**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Sets the display brightness.
Usage: r_Brightness 0.5
Default is 0.5.
    ```

- **r_CBufferUseNativeDepth**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1= enable, 0 = disable
Usage: r_CBufferUseNativeDepth [0/1]
    ```

- **r_CROConstantBufferPreallocationAmount**:

  - **Default Value:** `45000`

  - **Description:**

    ```text
Specify the number of constant buffers that will be preallocated (actual GPU buffers) during compiled render object pool creation.
0 - none
>0 - amount of buffers.
    ```

- **r_Character_NoDeform**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_ChromaticAberration**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Chromatic aberration amount
Usage: r_ChromaticAberration [Value]
    ```

- **r_ColorBits**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Sets the color resolution, in bits per pixel. Default is 32.
Usage: r_ColorBits [32/24/16/8]
    ```

- **r_ColorGrading**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables color grading.
Usage: r_ColorGrading [0/1]
    ```

- **r_ColorGradingCharts**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables color grading via color charts.
Usage: r_ColorGradingCharts [0/1]
    ```

- **r_ColorGradingChartsCache**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Enables color grading charts update caching.
Usage: r_ColorGradingCharts [0/1/2/etc]
Default is 4 (update every 4 frames), 0 - always update, 1- update every other frame
    ```

- **r_ColorGradingFilters**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables color grading.
Usage: r_ColorGradingFilters [0/1]
    ```

- **r_ColorGradingLevels**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables color grading.
Usage: r_ColorGradingLevels [0/1]
    ```

- **r_ColorGradingSelectiveColor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables color grading.
Usage: r_ColorGradingSelectiveColor [0/1]
    ```

- **r_ColorRangeCompression**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables color range compression to account for the limited RGB range of TVs.
  0: Disabled (full extended range)
  1: Range 16-235

    ```

- **r_ComputeMipMapGen**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enagle mip map generation using compute pipeline: 0-false, 1-true
    ```

- **r_ComputeSkinning**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activate skinning via compute shaders (0=disabled, 1=enabled, 2=forced)
    ```

- **r_ComputeSkinningDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable debug draw mode for geometry deformation
    ```

- **r_ComputeSkinningMorphs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Apply morphs before skinning (0=disabled, 1=enabled, 2=forced)
    ```

- **r_ComputeSkinningTangents**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Calculate new tangents after skinning is computed (0=disabled, 1=enabled, 2=forced)
    ```

- **r_Contrast**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Sets the display contrast.
Usage: r_Contrast 0.5
Default is 0.5.
    ```

- **r_CubemapGenerationAdditionalWaitFramesWH**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Additional frames to wait before generating cubemap.
    ```

- **r_CubemapGenerationTimeout**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum number of frames cubemap generation waits for streaming operations to complete.

    ```

- **r_CustomResHeight**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Height of custom resolution rendering
    ```

- **r_CustomResMaxSize**:

  - **Default Value:** `4096`

  - **Description:**

    ```text
Maximum resolution of custom resolution rendering
    ```

- **r_CustomResPreview**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable preview of custom resolution rendering in viewport(0 - no preview, 1 - scaled to match viewport, 2 - custom resolution clipped to viewport
    ```

- **r_CustomResWidth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Width of custom resolution rendering
    ```

- **r_CustomVisions**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Enables custom visions, like heatvision, binocular view, etc.
Usage: r_CustomVisions [0/1/2/3]
Default is 0 (disabled). 1 enables. 2 - cheaper version, no post processing. 3 - cheaper post version
    ```

- **r_D3D12AsynchronousCompute**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables batching of resource barriers.
0=Off,
1=On,
2=On + actively rewrite redundant barriers
Usage: r_D3D12BatchResourceBarriers [0-2]
    ```

- **r_D3D12DebugLayerBreakpoints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables breakpoints when the debuglayer reports a message.0: All breakpoints are off+1: Break on Corruption+2: Break on Error+4: Break on Warning+8: Break on Info+16: Break on Message
    ```

- **r_D3D12EnableDRED**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables DRED (Device Removed Extended Data), which is triggered when an error causes a device removed event.0: DRED is disabled1: DRED is enabled
    ```

- **r_D3D12EnablePIXCaptureRuntime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When enabled the PIX capture runtime is loaded into the application which enables PIX captures without starting the application from PIX.0: Engine does not load the PIX capture runtime1: Engine loads the PIX capture runtime
    ```

- **r_D3D12EnablePlacedResources**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable the use of placed resources0: Placed resources are disabled1: Placed resources are enabled
    ```

- **r_D3D12EnableResourceTracking**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables tracking of GPU-resources which can be used to find faulting resources during a device removed event.0: Tracking is disabled1: Tracking is enabled
    ```

- **r_D3D12EnableTiledResources**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable the use of tiled resources0: Tiled resources are disabled1: Tiled resources are enabled
    ```

- **r_D3D12HardwareComputeQueue**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the compute hardware queue.
0=Uses Direct Queue,
1=Uses Compute Queue
Usage: r_D3D12HardwareComputeQueue [0-1]
    ```

- **r_D3D12HardwareCopyQueue**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables the copy hardware queue.
0=Uses Direct Queue,
1=Uses Copy Queue
Usage: r_D3D12HardwareCopyQueue [0-1]
    ```

- **r_D3D12MaxCreatedCommandLists**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Maximum number of created Commandlists per CommandlistPool.
    ```

- **r_D3D12MaxGarbageResourceDescriptors**:

  - **Default Value:** `700000`

  - **Description:**

    ```text
Maximum number of descriptors waiting to be freed for reuse.
    ```

- **r_D3D12MaxGarbageSamplerDescriptors**:

  - **Default Value:** `512`

  - **Description:**

    ```text
Maximum number of sampler-descriptors waiting to be freed for reuse.
    ```

- **r_D3D12MaxHeapDecommitLatency**:

  - **Default Value:** `512`

  - **Description:**

    ```text
Maximum number of frames to delay decommiting D3D12 memory heaps.
    ```

- **r_D3D12MaxLiveCommandLists**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum number of total live commandlists currently being executed by the GPU.
    ```

- **r_D3D12PIXGPUCapturerPath**:

  - **Default Value:** ``

  - **Description:**

    ```text
Path to the WinPixGpuCapturer.dll, which must be of the same version as the installed PIX application.
    ```

- **r_D3D12RecycleHeapMaxSize**:

  - **Default Value:** `128`

  - **Description:**

    ```text
Maximum size(in megabytes) of the resource recycle heap. When this size is reached the system will wait for some resources to be released.
    ```

- **r_D3D12ReleaseHeapMaxSize**:

  - **Default Value:** `256`

  - **Description:**

    ```text
Maximum size(in megabytes) of the resource release heap. When this size is reached the system will wait for some resources to be released.
    ```

- **r_D3D12SubmissionThread**:

  - **Default Value:** `15`

  - **Description:**

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

  - **Default Value:** `2`

  - **Description:**

    ```text
Size (in megabytes) of the upload allocator.
    ```

- **r_D3D12WaitableSwapChain**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables highest performance in windowed mode (does not allow switching to fullscreen).
    ```

- **r_DebugFontRendering**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=off, 1=display various features of the font rendering to verify function and to document usage
    ```

- **r_DebugGBuffer**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug mode (independent from game code) for layer effects
Usage: r_DebugLayerEffect [0/1/2/3/etc]
Default is 0 (disabled). 1: 1st layer mode, etc
    ```

- **r_DebugLightVolumes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Disable
1=Enable
Usage: r_DebugLightVolumes[0/1]
    ```

- **r_DebugLights**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display dynamic lights for debugging.
Usage: r_DebugLights [0/1/2/3]
Default is 0 (off). Set to 1 to display centers of light sources,
or set to 2 to display light centers and attenuation spheres, 3 to get light properties to the screen
    ```

- **r_DebugRefraction**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug refraction usage. Displays red instead of refraction
Usage: r_DebugRefraction
Default is 0 (off)
    ```

- **r_DebugRenderMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_DeferredDecals**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles deferred decals.
Usage: r_DeferredDecals [0/1]
Default is 1 (enabled), 0 Disabled. 
    ```

- **r_DeferredShading3PL**:

  - **Default Value:** `3`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables ambient lights.
Usage: r_DeferredShadingAmbientLights [0/1]
Default is 1 (enabled)
    ```

- **r_DeferredShadingAreaLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables more complex area lights processing.
Usage: r_DeferredShadingAreaLights [-1/0/1]
-1 prevents loading of area lights
Default is 1 (enabled)
    ```

- **r_DeferredShadingEnvProbes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles deferred environment probes rendering.
Usage: r_DeferredShadingEnvProbes [0/1]
Default is 1 (enabled)
    ```

- **r_DeferredShadingFilterGBuffer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables filtering of GBuffer to reduce specular aliasing.

    ```

- **r_DeferredShadingLightLodRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets deferred shading light intensity threshold.
Usage: r_DeferredShadingLightLodRatio [value]
Default is 0.1
    ```

- **r_DeferredShadingLightStencilRatio**:

  - **Default Value:** `0.21`

  - **Description:**

    ```text
Sets screen ratio for deferred lights to use stencil (eg: 0.2 - 20% of screen).
Usage: r_DeferredShadingLightStencilRatio [value]
Default is 0.2
    ```

- **r_DeferredShadingLightVolumes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles Light volumes for deferred shading.
Usage: r_DeferredShadingLightVolumes [0/1]
Default is 1 (enabled)
    ```

- **r_DeferredShadingLights**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/Disables lights processing.
Usage: r_DeferredShadingLights [0/1]
Default is 1 (enabled)
    ```

- **r_DeferredShadingSSS**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles deferred subsurface scattering (requires full deferred shading)
    ```

- **r_DeferredShadingSortLights**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sorts light by influence
Usage: r_DeferredShadingSortLights [0/1]
Default is 0 (off)
    ```

- **r_DeferredShadingTiled**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Toggles tile based shading.
0 - Off1 - Tiled forward shading for transparent objects
2 - [OBSOLETE, see KCD2-90063] Tiled deferred and forward shading
3 - Tiled deferred and forward shading using volume rasterization for light list generation
4 - Tiled forward shading for opaque and transparent objects (using volume rasterization)

    ```

- **r_DeferredShadingTiledDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - Display debug info
2 - Light coverage visualization
3 - Shadow caster info
4 - Dynamic light info
5 - Shadow maps per frame info
    ```

- **r_DeferredShadingTiledHairQuality**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Tiled shading hair quality
0 - Regular forward shading
1 - Tiled shading on selected assets and more accurate probe blending
2 - Full tiled shading with high quality shadow filter

    ```

- **r_DepthBits**:

  - **Default Value:** `24`

  - **Description:**

    ```text
Sets the depth precision, in bits per pixel. Default is 24.
Usage: r_DepthBits [32/24/16]
    ```

- **r_DepthOfField**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables depth of field.
Usage: r_DepthOfField [0/1/2]
Default is 0 (disabled). 1 enables, 2 hdr time of day dof enabled
    ```

- **r_DepthOfFieldBokehQuality**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets depth of field bokeh quality (samples multiplier).
Usage: r_DepthOfFieldBokeh [0/1/etc]
Default is 0: ingame quality, 1: high quality mode
    ```

- **r_DepthOfFieldMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Selects DOF implementation (0: sprite-based, 1: gather-based).

    ```

- **r_DetailDistance**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Distance used for per-pixel detail layers blending.
Usage: r_DetailDistance (1-20)
Default is 6.
    ```

- **r_DetailTextures**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles detail texture overlays.
Usage: r_DetailTextures [0/1]
Default is 1 (detail textures on).
    ```

- **r_DisplayInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles debugging information display.
Usage: r_DisplayInfo [0=off/1=show/2=enhanced/3=minimal/4=fps bar/5=heartbeat]
    ```

- **r_DisplayInfoFontScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Applies a scaling to the font size for r_displayInfo's content.
    ```

- **r_DisplayInfoOffsetX**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Applies an right side offset to the r_displayInfo's content, default 5.0
    ```

- **r_DisplayInfoTargetDrawCalls**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies the max draw call count where display info will highlight a warning
0 disables the warning
    ```

- **r_DisplayInfoTargetPolygons**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies the max polygon count where display info will highlight a warning
0 disables the warning
    ```

- **r_DrawNearFarPlane**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Default is 40.
    ```

- **r_DrawNearFoV**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Sets the FoV for drawing of near objects.
Usage: r_DrawNearFoV [n]
Default is 60.
    ```

- **r_DrawNearShadows**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable shadows for near objects.
Usage: r_DrawNearShadows [0/1]

    ```

- **r_DrawNearZRange**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text
Default is 0.1.
    ```

- **r_Driver**:

  - **Default Value:** `Auto`

  - **Description:**

    ```text
Sets the renderer driver ( DX11/DX12/GL/VK/AUTO ).
Specify in system.cfg like this: r_Driver = "DX11"
    ```

- **r_DuplicateLastFrameOnCameraChangeWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Trigger last frame duplication when camera change is detected.
    ```

- **r_DuplicateLastFrameWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables last frame duplication feature
0=Disable
Other=Number of frames last frame is duplicated for

    ```

- **r_DynTexSourceSharedRTHeight**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Height override of shared RT for dynamic texture sources. Takes effect when bigger than 0.
    ```

- **r_DynTexSourceSharedRTWidth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Width override for shared RT for dynamic texture sources. Takes effect when bigger than 0.
    ```

- **r_DynTexSourceUseSharedRT**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Defines if dynamic flash textures are rendered into shared RT
Usage: r_DynTexSourceUseSharedRT [0/1].
0: Use Unique RT for each dynamic flash texture (with alpha support)
1: Use Shared RT for all dynamic flash textures (no alpha support!)
Disabled by default. Requires level reload to change.
    ```

- **r_EnableDebugLayer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Graphics API specific debug layer0: Debug layers disabled1: Debug layers enabled2: (DX12 specific) Enable GBV (GPU-Based Validation) in addition to debug layers
    ```

- **r_EnableFramePacing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable frame pacing code.0: Disabled1: Enabled
    ```

- **r_EnableNvidiaAftermath**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Nvidia Aftermath0: Nvidia Aftermath disabled1: Nvidia Aftermath enabled
    ```

- **r_EnableNvidiaAftermathCallstackCollection**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Collect command list callstacks, when GPU crash happens0: Callstack collection disabled1: Callstack collection enabled
    ```

- **r_EnableNvidiaAftermathShaderDumps**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable Nvidia Aftermath Shader dumps. This saves a debug file related to the shader. 0: Shader dumps disabled1: Shader dumps enabled
    ```

- **r_EnableRSCResourceTrimming**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If true, resource trimming will also remove trimmed entries from RSC
    ```

- **r_EnvCMResolution**:

  - **Default Value:** `1`

  - **Description:**

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

  - **Default Value:** `3`

  - **Description:**

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

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Sets the interval between environmental 2d texture updates.
Usage: r_EnvTexUpdateInterval 0.001
Default is 0.001.
    ```

- **r_ExcludeMesh**:

  - **Default Value:** ``

  - **Description:**

    ```text
Exclude or ShowOnly the named mesh from the render list.
Usage: r_ExcludeShader Name
Usage: r_ExcludeShader !Name
Sometimes this is useful when debugging.
    ```

- **r_ExcludeShader**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Exclude the named shader from the render list.
Usage: r_ExcludeShader ShaderName
Sometimes this is useful when debugging.
    ```

- **r_FlareHqShafts**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles high quality mode for point light shafts.
Usage: r_FlareHqShafts [0/1]
Default is 1 (on).
    ```

- **r_Flares**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles lens flare effect.
Usage: r_Flares [0/1]
Default is 1 (on).
    ```

- **r_FlaresChromaShift**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Set flares chroma shift amount.
Usage: r_FlaresChromaShift [n]
Default is 6
0 Disables
    ```

- **r_FlaresEnableColorGrading**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles color grading on lens flares.
Usage : r_FlaresEnableColorGrading [n]
Default is 1 (on).
    ```

- **r_FlaresIrisShaftMaxPolyNum**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Set the maximum number of polygon of IrisShaft.
Usage : r_FlaresIrisShaftMaxPolyNum [n]
Default is 200
0 Infinite
    ```

- **r_FlaresTessellationRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set the tessellation rate of flares. 1 is the original mesh.
Usage : r_FlaresTessellationRatio 0.5
Default is 1.0
Range is from 0 to 1
    ```

- **r_FlashDynTextureResQuality**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Texture resolution quality of flash materials.
 0: Texture is used in original resolution independent of screen resolution.
	1: Texture is used in proper resolution in relation to screen resolution.	2 and more: Texture is used in resolution divided by value and in relation to screen resolution.Default is 1.
    ```

- **r_FlushToGPU**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Configure gpu-work flushing behaviour0: Flush at end-frame only1: Flush at positions where the character of the work changes drastically (Flash vs. Scene vs. Post vs. Uploads etc.)
    ```

- **r_FogDepthTest**:

  - **Default Value:** `-0.0005`

  - **Description:**

    ```text
Enables per-pixel culling for deferred volumetric fog pass.
Fog computations for all pixels closer than a given depth value will be skipped.
Usage: r_FogDepthTest z with...
  z = 0, culling disabled
  z > 0, fixed linear world space culling depth
  z < 0, optimal culling depth will be computed automatically based on camera direction and fog settings
    ```

- **r_FogShadows**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables deferred volumetric fog shadows
Usage: r_FogShadows [0/1/2]
  0: off
  1: standard resolution
  2: reduced resolution

    ```

- **r_FogShadowsMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Ray-casting mode for shadowed fog
Usage: r_FogShadowsMode [0/1]
  0: brute force shadowmap sampling
  1: optimized shadowmap sampling

    ```

- **r_FogShadowsWater**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables volumetric fog shadows for watervolumes
    ```

- **r_Fullscreen**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles fullscreen mode. Default is 1 in normal game and 0 in DevMode.
Usage: r_Fullscreen [0=window/1=fullscreen]
    ```

- **r_FullscreenNativeRes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles native resolution upscaling.
If enabled, scene gets upscaled from specified resolution while UI is rendered in native resolution.
    ```

- **r_Gamma**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Adjusts the graphics card gamma correction (fast, needs hardware support, affects also HUD and desktop)
Usage: r_Gamma 1.0
1 off (default)
    ```

- **r_GeomCacheInstanceThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Threshold after which instancing is used to draw geometry cache pieces
    ```

- **r_GetScreenShot**:

  - **Default Value:** `0`

  - **Description:**

    ```text
To capture one screenshot (variable is set to 0 after capturing)
0=do not take a screenshot (default), 1=save a screenshot (together with .HDR if enabled), 2=save a screenshot
    ```

- **r_GpuParticles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables processing of GPU particles (Default: 1).
0 - Disabled.
1 - Enabled.

    ```

- **r_GpuParticlesGpuBoundingBox**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Compute bounding boxes on GPU (Default: 0).
0 - Bounding box estimated on CPU.
1 - Bounding box taken from GPU particles.

    ```

- **r_GpuPhysicsFluidDynamicsDebug**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Draw GPU Fluid Particles for debugging purposes. This drastically decreases simulation performance. (Default: 1).
0 - Don't draw any debug information.
1 - Draw acceleration structure bounds and fluid particle positions.

    ```

- **r_GrainEnableExposureThreshold**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/Disable Legacy Exposure-based grain threshold
Usage: r_GrainEnableExposureThreshold [Value]
Default is 0
    ```

- **r_GraphicsPipelineMobile**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Run limited pipeline specifically optimized for mobile devices.
  1: Using compressed micro GBuffer
  2: Using standard GBuffer  3: Mobile VR pipeline
    ```

- **r_GraphicsPipelinePassScheduler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles render pass scheduler that submits passes in a deferred way, allowing improved multithreading and barrier scheduling.
    ```

- **r_HDRBloom**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables bloom/glare.
Usage: r_HDRBloom [0/1]

    ```

- **r_HDRBloomQuality**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set bloom quality (0: low, 1: medium, 2: high)

    ```

- **r_HDRDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles HDR debugging info (to debug HDR/eye adaptation)
Usage: r_HDRDebug
0 off (default)
1 display avgerage luminance, estimated luminance, and exposure values
2 show gamma-corrected scene target without tone-mapping processing
3 identify illegal colors (grey=normal, red=NotANumber, green=negative)

    ```

- **r_HDRDithering**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles hdr dithering.
  0: disabled
  1: enabled

    ```

- **r_HDREyeAdaptationMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set the eye adaptation (auto exposure) mode.
  1: Standard auto exposure (using EV values)
  2: Legacy auto exposure for backwards compatibility (CE 3.6 to 3.8.1)
    ```

- **r_HDREyeAdaptationSpeed**:

  - **Default Value:** `1`

  - **Description:**

    ```text
HDR rendering eye adaptation speed
Usage: r_EyeAdaptationSpeed [Value]
    ```

- **r_HDRGrainAmount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
HDR camera grain amount
Usage: r_HDRGrainAmount [Value]
Modulates the grain configured in FlowGraph or TimeOfDay.
    ```

- **r_HDRRangeAdapt**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/Disable HDR range adaptation (improve precision - minimize banding) 
Usage: r_HDRRangeAdapt [Value]
Default is 1
    ```

- **r_HDRRangeAdaptLBufferMax**:

  - **Default Value:** `0.125`

  - **Description:**

    ```text
Set range adaptation max adaptation for light buffers (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptLBufferMax [Value]
Default is 0.25f
    ```

- **r_HDRRangeAdaptLBufferMaxRange**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set range adaptation max range adaptation for light buffers (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptLBufferMaxRange [Value]
Default is 2.0f
    ```

- **r_HDRRangeAdaptMax**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set HDR range adaptation max adaptation (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptMax [Value]
Default is 1.0f
    ```

- **r_HDRRangeAdaptMaxRange**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Set HDR range adaptation max adaptation (improve precision - minimize banding) 
Usage: r_HDRRangeAdaptMaxRange [Value]
Default is 4.0f
    ```

- **r_HDRRangeAdaptationSpeed**:

  - **Default Value:** `4`

  - **Description:**

    ```text
HDR range adaption speed
Usage: r_HDRRangeAdaptationSpeed [Value]
    ```

- **r_HDRTexFormat**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets HDR render target precision. Default is 1.
Usage: r_HDRTexFormat [Value]
  0: (lower precision)
  1: (standard precision)
  2: (extended precision)

    ```

- **r_HDRVignetting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
HDR viggneting
Usage: r_HDRVignetting [Value]
Default is 1 (enabled)
    ```

- **r_HeadlessStartup**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow creating the render device without any connected monitors.
    ```

- **r_Height**:

  - **Default Value:** `719`

  - **Description:**

    ```text
Sets the display height, in pixels.
Usage: r_Height [600/768/..]
    ```

- **r_HeightMapAO**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Large Scale Ambient Occlusion based on height map approximation of the scene
0=off
1=quarter resolution
2=half resolution
3=full resolution
    ```

- **r_HeightMapAOAmount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Height Map Ambient Occlusion Amount
    ```

- **r_HeightMapAORange**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Range of height map AO around viewer in meters
    ```

- **r_HeightMapAOResolution**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Texture resolution of the height map used for HeightMapAO
    ```

- **r_HideFogVolumesInCubemaps**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stops fog volumes being drawn during cubemap generation.

    ```

- **r_HideSSReflectionsInCubemaps**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stops screen-space-reflections being drawn during cubemap generation.

    ```

- **r_HideSunInCubemaps**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stops the sun being drawn during cubemap generation.

    ```

- **r_HideVolumetricFogInCubemaps**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stops volumetric fog being drawn during cubemap generation.

    ```

- **r_InitialWindowSizeRatio**:

  - **Default Value:** `0.666`

  - **Description:**

    ```text
Sets the size ratio of the initial application window in relation to the primary monitor resolution.
Usage: r_InitialWindowSizeRatio [1.0/0.666/..]
    ```

- **r_Log**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs shaders info to Direct3DLogShaders.txt
0: off
1: normal
2: extended
    ```

- **r_LogTexStreaming**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs streaming info to Direct3DLogStreaming.txt
0: off
1: normal
2: extended
    ```

- **r_LogVBuffers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs vertex buffers in memory to 'LogVBuffers.txt'.
Usage: r_LogVBuffers [0/1]
Default is 0 (off).
    ```

- **r_LogVidMem**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs vid mem information to VidMemLog.txt.
    ```

- **r_MaterialsBatching**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles materials batching.
Usage: r_MaterialsBatching [0/1]
Default is 1 (on). Set to 0 to disable.
    ```

- **r_MaxFrameGCLatency**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum number of frames that unused resources are not garbage collection and available for reuse (in frames).
    ```

- **r_MaxFrameGCReuseSize**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Maximum size for unused resources being made available available for reuse (in MB).
    ```

- **r_MaxFrameLatency**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximum number of frames that can be in-flight on the GPU
    ```

- **r_MeasureOverdrawScale**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text

    ```

- **r_MergeShadowDrawcalls**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enabled Merging of RenderChunks for ShadowRendering
Default is 1 (enabled). 0 disabled
    ```

- **r_MeshInstancePoolSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The size of the pool for volatile render data in kilobytes. Disabled by default on PC (mesh data allocated on heap).Enabled by default on consoles. Requires app restart to change.
    ```

- **r_MeshPoolForceFreeAfterUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force mesh pool (malloc) allocations to free after the GPU buffer update.Fixes allocations not being freed when RENDERMESH_BUFFER_ENABLE_DIRECT_ACCESS is off on consoles.Disabled by default on PC.Enabled by default on consoles. Requires app restart to change.
    ```

- **r_MeshPoolSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
The size of the pool for render data in kilobytes. Disabled by default on PC (mesh data allocated on heap).Enabled by default on consoles. Requires app restart to change.
    ```

- **r_MeshPrecache**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_MobilePipelineHDRMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set the mobile pipeline HDR mode.
  0: Using fixed exposure, and use ACES Filmic Curve.
  1: Measure luminance, apply exposure, and use Hable Filmic Curve.
    ```

- **r_MobilePipelineLumMeasMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies where to do the mobile pipeline luminance measurement.
  0: Standard graphics pipeline tone mapping pipeline on the hdr output.
  1: Sample HDR target and calculate average luminance for tone mapping on the CPU.

    ```

- **r_MobilePipelineLumMeasSampleCount**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Specifies number of samples taken from hdr output to calculate average luminance.
This cvar is only considered when r_MobilePipelineLumMeasMode=1.

    ```

- **r_MotionBlur**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables per object and camera motion blur.
Usage: r_MotionBlur [0/1/2/3]
Default is 1 (camera motion blur on).
1: camera motion blur
2: camera and object motion blur
3: debug mode

    ```

- **r_MotionBlurCameraMotionScale**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Reduces motion blur for camera movements to account for a fixed focus point of the viewer.
Default: 0.2
    ```

- **r_MotionBlurGBufferVelocity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Pack velocity output in g-buffer.
Usage: r_MotionBlurGBufferVelocity [0/1]
Default is 1 (enabled). 0 - disabled

    ```

- **r_MotionBlurInlineWithAutoExposure**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Inlines the motion blur computation with the auto-exposure pass to reduce on memory bandwidth usage.
Default is enabled.
    ```

- **r_MotionBlurMaxViewDist**:

  - **Default Value:** `160`

  - **Description:**

    ```text
Sets motion blur max view distance for objects.
Usage: r_MotionBlurMaxViewDist [0...1]
Default is 16 meters
    ```

- **r_MotionBlurQuality**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set motion blur sample count.
Usage: r_MotionBlurQuality [0/1]
0 - low quality, 1 - medium quality, 2 - high quality

    ```

- **r_MotionBlurShutterSpeed**:

  - **Default Value:** `125`

  - **Description:**

    ```text
Sets camera exposure time for motion blur as 1/x seconds.
Default: 250 (1/250 of a second)
    ```

- **r_MotionBlurThreshold**:

  - **Default Value:** `0.0001`

  - **Description:**

    ```text
Object motion blur velocity threshold.
Usage: r_MotionBlurThreshold (val)
Default is 0.0001.  0 - disabled

    ```

- **r_MotionBlurTileFastGatherDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Visualize motion blur fast gather tile optimization for debugging.
Usage: r_MotionBlurTileFastGatherDebug [0/1].
Default is 0 - Disabled. 1 - enabled.
    ```

- **r_MotionBlurTileFastGatherThreshold**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Tile max-min velocity threshold for fast gather that skips velocity/depth samples.
Higher values allow more pixels to use the fast path, but too high values may lead to artifacts.
Usage: r_MotionBlurTileFastGatherThreshold [0-1].
Default: 0.15
    ```

- **r_MotionBlurTileSize**:

  - **Default Value:** `32`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables generation of motion vectors for dynamic objects

    ```

- **r_MouseControllerEmulation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should the controller be used to emulate mouse input?
    ```

- **r_MouseCursorOffsetX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
X offset for the mouse cursor to render at
    ```

- **r_MouseCursorOffsetY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Y offset for the mouse cursor to render at
    ```

- **r_MouseCursorTexture**:

  - **Default Value:** `%ENGINE%/EngineAssets/Textures/Cursor_Green.dds`

  - **Description:**

    ```text
Sets the image (dds file) to be displayed as the mouse cursor
    ```

- **r_MouseUseSystemCursor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should the application use the hardware mouse cursor?
    ```

- **r_MultiGPU**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles MGPU support. Should usually be set before startup.
  0: force off
  1: automatic detection (reliable with SLI, does not respect driver app profiles with Crossfire)

    ```

- **r_MultiSampleCount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sample count used when MSAA is enabled.

    ```

- **r_MultiThreaded**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables dedicated render thread in game.
  0: disabled
  1: enabled
  2: automatic detection
    ```

- **r_MultiThreadedDrawing**:

  - **Default Value:** `-2`

  - **Description:**

    ```text
Enables submission of render items in dedicated jobs.
  0: disabled
  N: use specified number of concurrent draw recording jobs
 -1: automatically choose optimal number of recording jobs
 -2: number of recording jobs equal to the half of job worker threads

    ```

- **r_MultiThreadedDrawingMinJobSize**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Specifies threshold for creation of recording jobs.
  0: no threshold
  N: minimum number of render items per job

    ```

- **r_NightVision**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Toggles nightvision enabling.
Usage: r_NightVision [0/1]
Default is 2 (HDR). Set to 1 (older version - kept for backward compatibility)Set to 3 to enable debug mode (force enabling).Set to 0 to completely disable nightvision. 
    ```

- **r_NightVisionBrightLevel**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Set nightvision bloom brightlevel.

    ```

- **r_NightVisionCamMovNoiseAmount**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Set nightvision noise amount based on camera movement.

    ```

- **r_NightVisionCamMovNoiseBlendSpeed**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set nightvision noise amount blend speed.

    ```

- **r_NightVisionFinalMul**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Set nightvision final color multiplier for fine tunning.

    ```

- **r_NightVisionSonarLifetime**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Set nightvision sonar hints lifetime.

    ```

- **r_NightVisionSonarMultiplier**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Set nightvision sonar hints color multiplier.

    ```

- **r_NightVisionSonarRadius**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Set nightvision sonar hints radius.

    ```

- **r_NoDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable submitting of certain draw operations: 1-(Do not process render objects at all), 2-(Do not submit individual render objects), 3-(No DrawIndexed) 4-Disable entire GraphicsPipeline execution.
    ```

- **r_NoDrawNear**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable drawing of near objects.
Usage: r_NoDrawNear [0/1]
Default is 0 (near objects are drawn).
    ```

- **r_NoHWGamma**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets renderer to ignore hardware gamma correction.
Usage: r_NoHWGamma [0/1/2]
0 - allow hardware gamma correction
1 - disable hardware gamma correction
2 - disable hardware gamma correction in Editor

    ```

- **r_NormalsLength**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Sets the length of displayed vectors.
r_NormalsLength 0.2
Default is 0.2 (meters). Used with r_ShowTangents and r_ShowNormals.
    ```

- **r_OverdrawComplexity**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `4`

  - **Description:**

    ```text
Specifies which integer count is anchored at dark blue (2,25,147). Default is 4.
Usage: r_OverdrawComplexityBluePoint [n]

    ```

- **r_OverdrawComplexityCompression**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Amount of compression applied after logarithmic mapping (linear divisor).
Usage: r_OverdrawComplexityCompression [n]

    ```

- **r_OverdrawComplexitySmoothness**:

  - **Default Value:** `1.25`

  - **Description:**

    ```text
Smoothness of the logarithmic mapping of the counts (the value is the log-base).
Smaller values produce a steeper mapping than larger values.
Usage: r_OverdrawComplexitySmoothness [n]

    ```

- **r_OverscanBorderScaleX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the overscan border width scale
Usage: r_OverscanBorderScaleX [0.0->0.25]
    ```

- **r_OverscanBorderScaleY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the overscan border height scale
Usage: r_OverscanBorderScaleY [0.0->0.25]
    ```

- **r_OverscanBordersDrawDebugView**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles drawing overscan borders.
Usage: r_OverscanBordersDrawDebugView [0=off/1=show]
    ```

- **r_PSOCompilationWorkerThreads**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Number of PSO compilation workers
    ```

- **r_ParticleMaxVerticePoolSize**:

  - **Default Value:** `1.04858e+06`

  - **Description:**

    ```text

    ```

- **r_ParticleVerticePoolSize**:

  - **Default Value:** `131072`

  - **Description:**

    ```text

    ```

- **r_ParticlesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Particles debugging
Usage: 
0 disabled
1 particles screen coverage (red = bad, blue = good)
2 particles overdraw (white = really bad, red = bad, blue = good)
    ```

- **r_ParticlesHalfRes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables (1) or forces (2) rendering of particles in a half-resolution buffer.
Usage: r_ParticlesHalfRes [0/1/2]
    ```

- **r_ParticlesHalfResAmount**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets particle half-res buffer to half (0) or quarter (1) screen size.
Usage: r_ParticlesHalfResForce [0/1]
    ```

- **r_ParticlesHalfResBlendMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies which particles can be rendered in half resolution.
Usage: r_ParticlesHalfResBlendMode [0=alpha / 1=additive]
    ```

- **r_ParticlesInstanceVertices**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable instanced-vertex rendering.
Usage: r_ParticlesInstanceVertices [0/1]
    ```

- **r_ParticlesMaxVertexPoolSize**:

  - **Default Value:** `1.04858e+06`

  - **Description:**

    ```text
Max size of Particles' buffers
    ```

- **r_ParticlesRefraction**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables refractive particles.
Usage: r_ParticlesRefraction [0/1]
    ```

- **r_ParticlesSoftIsec**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables particles soft intersections.
Usage: r_ParticlesSoftIsec [0/1]
    ```

- **r_ParticlesTessellation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables particle tessellation for higher quality lighting. (DX11 only)
    ```

- **r_ParticlesTessellationTriSize**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Sets particles tessellation triangle screen space size in pixels (DX11 only)
    ```

- **r_ParticlesVertexPoolSize**:

  - **Default Value:** `131072`

  - **Description:**

    ```text
Initial size Particles' buffers
    ```

- **r_PipelineResourceDiscardAfterFrame**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Off,
1=Allow for CharacterToolPipeline only,
2=Allow for all graphics pipelines
    ```

- **r_PipelineStateCollectionMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable collection of information for pipeline state precaching (see r_PipelineStatePrecacheMode)Usage: r_PipelineStateCollectionMode [0/1/2]
0 - Off
1 - Store pipeline state information in USER folder
2 - Send pipeline state information to remote shader compiler
3 - (default) Store pipeline state information in USER folder AND send to remote shader compiler
    ```

- **r_PipelineStatePrecacheMode**:

  - **Default Value:** `2`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Changes post processing special effects debug mode.
Usage: r_PostProcessDebugMode [0/1/2]
0: Disabled
1: Enables and displays active effects
2: Additional debugging
    ```

- **r_PostProcessEffects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables post processing special effects.
Usage: r_PostProcessEffects [0/1]
    ```

- **r_PostProcessFilters**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables post processing special effects filters.
Usage: r_PostProcessEffectsFilters [0/1]
Default is 1 (enabled). 0 disabled
    ```

- **r_PostProcessGameFx**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables post processing special effects game fx.
Usage: r_PostProcessEffectsGameFx [0/1]
Default is 1 (enabled). 0 disabled
    ```

- **r_PostProcessHUD3D**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles 3d hud post processing.
Usage: r_PostProcessHUD3D [0/1]
Default is 1 (post process hud enabled). 0 Disabled
    ```

- **r_PostProcessHUD3DCache**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables 3d hud caching overframes.
Usage: r_PostProcessHUD3DCache [0/1/2/3]
Default is 0 (disabled). 1 Cache every 1 frame. 2 Every 2 frames. Etc
    ```

- **r_PostProcessHUD3DDebugView**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug views for 3d hud post processing.
Usage: CV_r_PostProcessHUD3DDebugView [0/1/2/3]
Default is 0 (disabled). 1 Solid fill. 2 Wire frame. 3 Unwrap mesh onto flash texture
    ```

- **r_PostProcessHUD3DGlowAmount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls 3D HUD 'Glow' Amount.
Usage: r_PostProcessHUD3DGlowAmount [> 0.0]
Default is 1.0f, higher = more glow
    ```

- **r_PostProcessHUD3DShadowAmount**:

  - **Default Value:** `1.7`

  - **Description:**

    ```text
Controls 3D HUD 'Shadow' Amount.
Usage: r_PostProcessHUD3DShadowAmount [> 0.0]
Default is 1.7f, higher = darker
    ```

- **r_PostProcessHUD3DStencilClear**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables stencil clears for flash masks when rendering HUD in 3D post process.
Usage: r_PostProcessHUD3DNoStencilClear [0/1]
Default is 1 (enabled), 0 disabled
    ```

- **r_PostProcessNanoGlassDebugView**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug views for Nano Glass post processing.
Usage: CV_r_PostProcessNanoGlassDebugView [0/1]
Default is 0 (disabled). 1 Wire frame.
    ```

- **r_PostProcessParamsBlending**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables post processing effects parameters smooth blending
Usage: r_PostProcessEffectsParamsBlending [0/1]
Default is 1 (enabled).
    ```

- **r_PostProcessReset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables post processing special effects reset.
Usage: r_PostProcessEffectsReset [0/1]
Default is 0 (disabled). 1 enabled
    ```

- **r_PostprocessParamsBlendingTimeScale**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Sets post processing effects parameters smooth blending time scale
Usage: r_PostprocessParamsBlendingTimeScale [scale]
Default is 12.0f.
    ```

- **r_PrintMemoryLeaks**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_RC_AutoInvoke**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable calling the resource compiler (rc.exe) to compile assets at run-time if the date check
shows that the destination is older or does not exist.
Usage: r_RC_AutoInvoke 0 (default is 1)
    ```

- **r_Rain**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables rain rendering
Usage: r_Rain [0/1/2]
0 - disabled1 - enabled2 - enabled with rain occlusion
    ```

- **r_RainAmount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets rain amount
Usage: r_RainAmount
    ```

- **r_RainDistMultiplier**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Rain layer distance from camera multiplier
    ```

- **r_RainDropsEffect**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable RainDrops effect.
Usage: r_RainDropEffect [0/1/2]
0: force off
1: on (default)
2: on (forced)
    ```

- **r_RainIgnoreNearest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Disables rain wet/reflection layer for nearest objects
Usage: r_RainIgnoreNearest [0/1]

    ```

- **r_RainMaxViewDist**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Sets rain max view distance
Usage: r_RainMaxViewDist
    ```

- **r_RainMaxViewDist_Deferred**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Sets maximum view distance (in meters) for deferred rain reflection layer
Usage: r_RainMaxViewDist_Deferred [n]
    ```

- **r_RainOccluderSizeTreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Only objects bigger than this size will occlude rain
    ```

- **r_RainPuddleWindSpeedWH**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Speed of puddle movement affected by wind
    ```

- **r_ReflectTextureSlots**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Reflect texture slot information from shader
    ```

- **r_Reflections**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles reflections.
Usage: r_Reflections [0/1]
Default is 1 (reflects).
    ```

- **r_ReflectionsOffset**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_ReflectionsQuality**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Toggles reflections quality.
Usage: r_ReflectionsQuality [0/1/2/3]
Default is 0 (terrain only), 1 (terrain + particles), 2 (terrain + particles + brushes), 3 (everything)
    ```

- **r_Refraction**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables refraction.
Usage: r_Refraction [0/1]
Default is 1 (on). Set to 0 to disable.
    ```

- **r_RefractionPartialResolveMaxResolveCount**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Provides an upper limit on partial screen resolves per render-items list.
(Unlimited if a non-positive integer is provided)
    ```

- **r_RefractionPartialResolveMinResolveAreaWH**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Minimal resolve screen area in percentage which is required to execute a partial resolve
    ```

- **r_RefractionPartialResolveMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Specifies mode of operation of partial screen resolves before refraction
Usage: r_RefractionPartialResolveMode [0/1/2]
0: Static approach: Single resolve pass before transparent forward pass.
1: Simple iterative approach: Resolve pass before every refractive render items that requires resolve.
2: Topological sorting of overlaping resolve regions (default)
    ```

- **r_RefractionPartialResolvesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggle refraction partial resolves debug display
Usage: r_RefractionPartialResolvesDebug
0: disable 
1: Statistics 
2: Bounding boxes 

    ```

- **r_ReleaseAllResourcesOnExit**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_ReloadShaders**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Reloads shaders.
Usage: r_ReloadShaders [0/1]
Default is 0. Set to 1 to reload shaders.
    ```

- **r_RemappedBoneIndicesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - Enable debug draw mode for remapped tables (show all mesh-skeleton pairs in memory)
    ```

- **r_RemappedBoneIndicesDebugFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter for r_RemappedBoneIndicesDebug
    ```

- **r_RenderMeshHashGridUnitSize**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Controls density of render mesh triangle indexing structures
    ```

- **r_RenderTargetPoolSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Size of pool for render targets in MB.
Default is 50(MB).
    ```

- **r_ReprojectOnlyStaticObjects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Forces a split in the zpass, to prevent moving object from beeing reprojected
    ```

- **r_SSReflDistance**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Maximum distance of SS raytrace in relation to far-plane.
Usage: r_SSReflDistance [0...1]
Default is 0.15 (further away content is fetched from cube-maps)
    ```

- **r_SSReflEnvBRDFMultWH**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Controlls the overall intensity of the SS reflections. 1 is neutral.
    ```

- **r_SSReflEnvBRDFPowWH**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Exponent of the BRDF. 1 is neutral,
>1 extend range of the SS reflections (glossy materials will have more prominent reflections)
<1 'desaturate' reflections
    ```

- **r_SSReflHalfRes**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles rendering reflections in half resolution

    ```

- **r_SSReflSamples**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Maximum number of samples taken within allowed distance, in addition to 4 always taken samples.
Usage: r_SSReflSamples [0...inf]
Default is 4+28, which is about 1 sample every 15m (with default distance of 500m)
    ```

- **r_SSReflections**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Glossy screen space reflections
0 - Disabled (Cubemaps only)
1 - SSR enabled (General only) 
2 - SSR enabled (General + WaterVolumes)
    ```

- **r_ShaderCompilerDontCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables caching on server side.
Usage: r_ShaderCompilerDontCache 0 #
Default is 0
    ```

- **r_ShaderCompilerFolderName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Usage: r_ShaderCompilerFolderName foldername 
Default is empty. This overwrites the default path of using the game directory name when storing shader caches.
    ```

- **r_ShaderCompilerFolderSuffix**:

  - **Default Value:** ``

  - **Description:**

    ```text
Usage: r_ShaderCompilerFolderSuffix suffix 
Default is empty. Set to some other value to append this suffix to the sys_game_folder when compiling shaders
    ```

- **r_ShaderCompilerPort**:

  - **Default Value:** `31671`

  - **Description:**

    ```text
set user defined port of the shader compile server.
Usage: r_ShaderCompilerPort 61453 #
Default is 61453
    ```

- **r_ShaderCompilerServer**:

  - **Default Value:** `localhost`

  - **Description:**

    ```text
Usage: r_ShaderCompilerServer <ip;ip;ip;...> 
Default is localhost 
    ```

- **r_ShaderEmailCCs**:

  - **Default Value:** ``

  - **Description:**

    ```text
Adds optional CC addresses to shader error emails
Default is empty 
    ```

- **r_ShaderEmailTags**:

  - **Default Value:** `Build Version: 1.1.2.0`

  - **Description:**

    ```text
Adds optional tags to shader error emails e.g. own name or build run
Usage: r_ShaderEmailTags "some set of tags or text" 
Default is build version 
    ```

- **r_ShaderTarget**:

  - **Default Value:** ``

  - **Description:**

    ```text
Shader cache generation only CVar.Sets the shader generation target ( Orbis/Hercules/Durango/Scarlett/D3D11/D3D12/Vulkan/VulkanMobile ).
Specify in system.cfg like this: r_ShaderTarget = "D3D11"
    ```

- **r_ShadersAllowCompilation**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_ShadersAsyncActivation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable asynchronous shader activation
Usage: r_ShadersAsyncActivation [0/1]
 0 = off, (stalling) synchronous shaders activation
 1 = on, shaders are activated/streamed asynchronously

    ```

- **r_ShadersAsyncCompiling**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Enable asynchronous shader compiling
Usage: r_ShadersAsyncCompiling [0/1/2/3]
 0 = off, (stalling) shaders compiling
 1 = on, shaders are compiled in parallel, missing shaders are rendered in yellow
 2 = on, shaders are compiled in parallel, missing shaders are not rendered
 3 = on, shaders are compiled in parallel in precache mode
    ```

- **r_ShadersAsyncMaxThreads**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_ShadersCacheDeterministic**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Ensures that 2 shaderCaches built from the same source are binary equal
    ```

- **r_ShadersCompileAutoActivate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Automatically reenable shader compilation if outdated shader is detected
    ```

- **r_ShadersCompileCompatible**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_ShadersCompileStrict**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_ShadersDebug**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Force all cvars to settings, which allow shader editing
    ```

- **r_ShadersIgnoreIncludesChanging**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_ShadersLazyUnload**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_ShadersLogCacheMisses**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log all shader caches misses on HD (both level and global shader cache misses).
0 = No logging to disk or TTY
1 = Logging to disk only
2 = Logging to disk and TTY (default)
    ```

- **r_ShadersRemoteCompiler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables remote shader compilation on dedicated machine.
0 - Disabled
1 - Enabled but fallback to local on network error after number of retries (r_ShadersRemoteCompilerNetworkFailRetries)
2 - Enabled
    ```

- **r_ShadersSubmitRequestline**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_ShadowCastingLightsMaxCount**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Maximum number of simultaneously visible shadow casting lights
    ```

- **r_ShadowGenDepthClip**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0=disable shadow gen depth clipping, 1=enable shadow gen depth clipping
    ```

- **r_ShadowJittering**:

  - **Default Value:** `3.4`

  - **Description:**

    ```text
Shadow map jittering radius.
In PC the only use of this cvar is to instantly see the effects of diferent jittering values,
because any value set here will be overwritten by ToD animation (only in PC) as soon as ToD changes.
Usage: r_ShadowJittering [0=off]
    ```

- **r_ShadowJitteringMultiplierWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Jittering multiplier. Use this in specs instead of changing r_ShadowJittering as the r_ShadowJittering cvar is changed every frame from ToD.
    ```

- **r_ShadowMapsUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0=disable shadow map updates, 1=enable shadow map updates
    ```

- **r_ShadowMaskStencilPrepass**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1=Run explicit stencil prepass for shadow mask generation (as opposed to merged stencil/sampling passes)
    ```

- **r_ShadowPoolBaseCostWH**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Base cost for shadow frustum
    ```

- **r_ShadowPoolBudgetPerFrameWH**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Shadow pool budget per frame.
    ```

- **r_ShadowPoolImportanceDistanceMultWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier for shadow frustum update importance based on distance from frustum center.
    ```

- **r_ShadowPoolImportanceFrameDeltaMultWH**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Multiplier for shadow frustum update importance based on age of last update.
    ```

- **r_ShadowPoolImportanceFrameDeltaNeverRenderedValueWH**:

  - **Default Value:** `10000`

  - **Description:**

    ```text
Delta frame value used for importance calculation when frustum was never rendered.
    ```

- **r_ShadowPoolImportanceLightUpdateRateMultWH**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Multiplier for shadow frustum update importance based on ShadowUpdateRate specified on the light instance.
    ```

- **r_ShadowPoolMapSizeCostCoeffWH**:

  - **Default Value:** `26`

  - **Description:**

    ```text
Coefficient used in calculation of shadow frustum update cost based on shadow map size.
    ```

- **r_ShadowPoolMapSizeCostMultWH**:

  - **Default Value:** `0.015`

  - **Description:**

    ```text
Multiplier to the cost of shadow frustum update based on shadow map size.
    ```

- **r_ShadowPoolMaxFrames**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum number of frames a shadow can exist in the pool
    ```

- **r_ShadowPoolShadowCastersCostMultWH**:

  - **Default Value:** `0.025`

  - **Description:**

    ```text
Multiplier to the cost of shadow frustum update based on number its shadow casters.
    ```

- **r_ShadowTexFormat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=use D32 texture format for depth map
1=use D16 texture format for depth map
2=use D24S8 texture format for depth map
Usage: r_ShadowTexFormat [0-2]
    ```

- **r_ShadowsAdaptionMin**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
starting kernel size, to avoid blocky shadows.
Usage: r_ShadowsAdaptionMin [0.0 for blocky - 1.0 for blury], 0.35 is default
    ```

- **r_ShadowsAdaptionRangeClamp**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
maximum range between caster and reciever to take into account.
Usage: r_ShadowsAdaptionRangeClamp [0.0 - 1.0], default 0.01
    ```

- **r_ShadowsAdaptionSize**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Select shadow map blurriness if r_ShadowsBias is activated.
Usage: r_ShadowsAdaptoinSize [0 for none - 10 for rapidly changing]
    ```

- **r_ShadowsCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Replace all sun cascades above cvar value with cached (static) shadow map:
0=no cached shadows,
1=replace first cascade and up
2=replace second cascade and up,...
    ```

- **r_ShadowsCacheFormat**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0=use D32 texture format for shadow cache
1=use D16 texture format for shadow cache

    ```

- **r_ShadowsCacheResolutions**:

  - **Default Value:** ``

  - **Description:**

    ```text
Shadow cache resolution per cascade.

    ```

- **r_ShadowsGridAligned**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Selects algorithm to use for shadow mask generation:
0 - Disable shadows snapping
1 - Enable shadows snapping
    ```

- **r_ShadowsLocalLightsFaceCullingWH**:

  - **Default Value:** `2`

  - **Description:**

    ```text
select between front, back and both faces to render to local light shadow maps
  0 = no culling (slow, little to no light leaking)
  1 = front (faster, little to no self-shadowing, prone to light leaking)
  2 = back (faster, compromise between leaking and self-shadowing)

    ```

- **r_ShadowsLocalLightsLinearizeDepth**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Usage: e_ShadowsLocalLightsLinearizeDepth [0-1]
Changes how depth by local lights will be output for shadow mapping
0=output non-linear depth
1=output linear depth (default)

    ```

- **r_ShadowsMask**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls screen space calculation of shadow contribution0=off
1=all shadow casting lights
2=sun only
3=point lights only
Usage: r_ShadowsMask [0/1/2/3]
    ```

- **r_ShadowsMaskResolution**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=per pixel shadow mask
1=horizontal half resolution shadow mask
2=horizontal and vertical half resolution shadow mask
Usage: r_ShadowsMaskResolution [0/1/2]
    ```

- **r_ShadowsMotionBiasConstWH**:

  - **Default Value:** `0.0001`

  - **Description:**

    ```text
Motion shadow bias const term.
    ```

- **r_ShadowsMotionBiasDirWH**:

  - **Default Value:** `1e-07`

  - **Description:**

    ```text
Motion shadow bias all directions term.
    ```

- **r_ShadowsMotionBiasDirZWH**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Motion shadow bias away from light direction term.
    ```

- **r_ShadowsMotionBiasLocalCostWH**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Motion bias coeficient for local light's cost.
    ```

- **r_ShadowsMotionBiasWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Motion shadow bias strength.
    ```

- **r_ShadowsNearestMapResolution**:

  - **Default Value:** `4096`

  - **Description:**

    ```text
Nearest shadow map resolution. Default: 4096
    ```

- **r_ShadowsPCFiltering**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1=use PCF for shadows
Usage: r_ShadowsPCFiltering [0/1]
    ```

- **r_ShadowsParticleAnimJitterAmount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Amount of animated jittering for particles shadows.
Usage: r_ShadowsParticleJitterAmount [x], 1. is default
    ```

- **r_ShadowsParticleJitterAmount**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Amount of jittering for particles shadows.
Usage: r_ShadowsParticleJitterAmount [x], 0.5 is default
    ```

- **r_ShadowsParticleKernelSize**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Blur kernel size for particles shadows.
Usage: r_ShadowsParticleKernelSize [0.0 hard edge - x for blur], 1. is default
    ```

- **r_ShadowsParticleNormalEffect**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shadow taps on particles affected by normal and intensity (breaks lines and uniformity of shadows).
Usage: r_ShadowsParticleNormalEffect [x], 1. is default
    ```

- **r_ShadowsScreenSpace**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Include screen space tracing into shadow computations
Helps reducing artifacts caused by limited shadow map resolution and biasing
    ```

- **r_ShadowsScreenSpaceFadeoutBegin**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Depth of Screen Space Shadows fadeout begin (full intensity).
    ```

- **r_ShadowsScreenSpaceFadeoutEnd**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Depth of Screen Space Shadows fadeout end (zero intensity).
    ```

- **r_ShadowsScreenSpaceLength**:

  - **Default Value:** `0.015`

  - **Description:**

    ```text
Controls the tracing length of Screen Space Shadows
    ```

- **r_ShadowsScreenSpaceStrength**:

  - **Default Value:** `0.85`

  - **Description:**

    ```text
Controls the intensity of Screen Space Shadows
    ```

- **r_Sharpening**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Image sharpening amount
Usage: r_Sharpening [Value]
    ```

- **r_ShowDynTextures**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display a dyn. textures, filtered by r_ShowDynTexturesFilter
Usage: r_ShowDynTextures 0/1/2
Default is 0. Set to 1 to show all dynamic textures or 2 to display only the ones used in this frame
Textures are sorted by memory usage
    ```

- **r_ShowDynTexturesFilter**:

  - **Default Value:** `*`

  - **Description:**

    ```text
Usage: r_ShowDynTexturesFilter *end
Usage: r_ShowDynTexturesFilter *mid*
Usage: r_ShowDynTexturesFilter start*
Default is *. Set to 'pattern' to show only specific textures (activate r_ShowDynTextures)
    ```

- **r_ShowDynTexturesMaxCount**:

  - **Default Value:** `36`

  - **Description:**

    ```text
Allows to adjust number of textures shown on the screen
Usage: r_ShowDynTexturesMaxCount [1...36]
Default is 36
    ```

- **r_ShowLightBounds**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display light bounds - for debug purpose
Usage: r_ShowLightBounds [0=off/1=on]
    ```

- **r_ShowLines**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles visibility of wireframe overlay.
Usage: r_ShowLines [0/1]
Default is 0 (off).
    ```

- **r_ShowNormals**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles visibility of normal vectors.
Usage: r_ShowNormals [0/1]Default is 0 (off).
    ```

- **r_ShowTangents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles visibility of three tangent space vectors.
Usage: r_ShowTangents [0/1]
Default is 0 (off).
    ```

- **r_ShowTexture**:

  - **Default Value:** ``

  - **Description:**

    ```text
Displays loaded texture - for debug purpose

    ```

- **r_ShowTimeGraph**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Configures graphic display of frame-times.
Usage: r_ShowTimeGraph [0/1/2]
	1: Graph displayed as points.	2: Graph displayed as lines.Default is 0 (off).
    ```

- **r_ShowVideoMemoryStats**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_SilhouettePOM**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables use of silhouette parallax occlusion mapping.
Usage: r_SilhouettePOM [0/1]
    ```

- **r_SkipAlphaTested**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables rendering of alpha-tested objects.

    ```

- **r_Snow**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables snow rendering
Usage: r_Snow [0/1/2]
0 - disabled
1 - enabled
2 - enabled with snow occlusion
    ```

- **r_SnowDisplacement**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables displacement for snow accumulation
Usage: r_SnowDisplacement [0/1]
0 - disabled
1 - enabled
    ```

- **r_SnowFlakeClusters**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Number of snow flake clusters.
Usage: r_SnowFlakeClusters [n]
    ```

- **r_SnowHalfRes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When enabled, snow renders at half resolution to conserve fill rate.
Usage: r_SnowHalfRes [0/1]
0 - disabled
1 - enabled

    ```

- **r_SonarVision**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles sonar vision enabling.
Usage: r_SonarVision [0/1]
Default is 1 (on). Set to 2 to enable debug mode (force enabling). Set to 0 to completely disable sonar vision modes.
    ```

- **r_Stats**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `8`

  - **Description:**

    ```text
Sets the stencil precision, in bits per pixel. Default is 8.

    ```

- **r_StereoEnableMgpu**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets support for multi GPU stereo rendering.
Usage: r_StereoEnableMgpu [0=disabled/else=enabled]
0: Disable multi-GPU for dual rendering
 1: Enable multi-GPU for dual rendering
-1: Enable multi-GPU for dual rendering, but run on only one GPU (simulation)

    ```

- **r_StereoEyeDist**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
[For 3D TV] Maximum separation between stereo images in percentage of the screen.
    ```

- **r_StereoFlipEyes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Flip eyes in stereo mode.
Usage: r_StereoFlipEyes [0=off/1=on]
0: don't flip
1: flip

    ```

- **r_StereoGammaAdjustment**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text
Additional adjustment to the graphics card gamma correction when Stereo is enabled.
Usage: r_StereoGammaAdjustment [offset]0: off
    ```

- **r_StereoHudScreenDist**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Distance to plane where hud stereo parallax converges to zero.
If not zero, HUD needs to be rendered two times.
    ```

- **r_StereoNearGeoScale**:

  - **Default Value:** `0.65`

  - **Description:**

    ```text
Scale for near geometry (weapon) that gets pushed into the screen
    ```

- **r_StereoScreenDist**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Distance to plane where stereo parallax converges to zero.
    ```

- **r_StereoStrength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier which influences the strength of the stereo effect.
    ```

- **r_SuperResolution_AMD_FSR_CustomReactiveMaskScaleWH**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
A value to scale custom reactive mask [0, 1] (Default: 0.5)
    ```

- **r_SuperResolution_AMD_FSR_CustomResolutionScaleWH**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
A custom value to scale the render resolution [0.4, 1]
    ```

- **r_SuperResolution_AMD_FSR_QualityMode**:

  - **Default Value:** `1`

  - **Description:**

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

  - **Default Value:** `0.5`

  - **Description:**

    ```text
A value to set for the binary reactive mask [0, 1] (Default: 1.0)
    ```

- **r_SuperResolution_AMD_FSR_ReactiveMask_CutoffThreshold**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
A threshold value to generate a binary reactive mask [0, 1] (Default: 1.0)
    ```

- **r_SuperResolution_AMD_FSR_ReactiveMask_Scale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
A value to scale the output [0, 1] (Default: 1.0)
    ```

- **r_SuperResolution_AMD_FSR_TransparencyAndCompositionMask**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjust temporal stability of pixels [0, 1] (Default: 0.1)
Usage: 0 (Off) = most stable but more ghosting, 1 = least stable but less ghosting
Default: 0.0 (similar to default DLSS stability)
    ```

- **r_SuperResolution_Mode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Super Resolution Mode
 0 - Off
 1 - AMD FidelityFX SuperResolution
 2 - NVIDIA DLSS
 3 - SONY PSSR
    ```

- **r_SuperResolution_NVIDIA_APP_ID**:

  - **Default Value:** `0`

  - **Description:**

    ```text
NVIDIA APP ID (only for testing purposes, needs to be set by buildengineer)

    ```

- **r_SuperResolution_NVIDIA_DLSS_ExposureCompensation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts Frame Exposure input to DLSS (Not recommended unless it helps with visual artifacts)
Usage [0, 1] (Default: 0.0)
0 = Best temporal stability / more ghosting
1 = Worst temporal stability / less ghosting
    ```

- **r_SuperResolution_NVIDIA_DLSS_Preset**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `2`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Reactive Mask Mode (Default: 1)
 0 - Off
 1 - On
 2 - On (Auto generated if supported)
    ```

- **r_SuperResolution_SONY_PSSR_ResolutionScale**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
A value to scale the render resolution [0.4, 1] (Default: 0.5)
    ```

- **r_SuperResolution_Sharpness**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Sharpness adjustment for super resolution modes [0, 1] (Default: 0.0)
    ```

- **r_SuperResolution_TextureMipBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjusts texture mip bias for super resolution [-8, 8] (Default: 0.0)
    ```

- **r_Supersampling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use supersampled antialiasing(1 - 1x1 no SSAA, 2 - 2x2, 3 - 3x3 ...)
    ```

- **r_SupersamplingFilter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Filter method to use when resolving supersampled output
0 - Box filter
1 - Tent filter
2 - Gaussian filter
3 - Lanczos filter
    ```

- **r_SyncToFrameFence**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stall the render thread until GPU finished processing previous frame
    ```

- **r_TessellationDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - Factor visualizing.
Default is 0
    ```

- **r_TessellationTriangleSize**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Desired triangle size for screen-space tessellation.
Default is 10.
    ```

- **r_TexBindMode**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `8`

  - **Description:**

    ```text
Specifies the maximum level allowed for anisotropic texture filtering.
    ```

- **r_TexMinAnisotropy**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies the minimum level allowed for anisotropic texture filtering.
0(default) means abiding by the filtering setting in each material, except possibly being capped by r_TexMaxAnisotropy.
    ```

- **r_TexNoLoad**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables loading of textures.
Usage:	r_TexNoLoad [0/1]
When 1 texture loading is disabled.
    ```

- **r_TexPostponeLoading**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_TexPreallocateAtlases**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_TexelsPerMeter**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables visualization of the color coded "texels per meter" ratio for objects in view.
The checkerboard pattern displayed represents the mapping of the assigned diffuse
texture onto the object's uv space. One block in the pattern represents 8x8 texels.
Usage: r_TexelsPerMeter [n] (where n is the desired number of texels per meter; 0 = off)
    ```

- **r_TextureCompiling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Run-time compilation and subsequent injection of changed textures from disk during editing.
Usage: r_TextureCompiling [0/1]
Default is 1 (on). Changes are tracked and passed through to the rendering.
Compilation can also be muted by the r_RC_AutoInvoke config.
    ```

- **r_TextureCompilingIndicator**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Replaces the textures which are currently compiled by a violet indicator-texture.
Usage: r_TextureCompilingIndicator [-1/0/1]
Default is 0 (off). Textures are silently replaced by their updated versions without any indication.
Negative values will also stop show indicators for compilation errors.
Positive values will show indicators whenever a texture is subject to imminent changes.

    ```

- **r_TextureLodDistanceRatio**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Controls dynamic LOD system for textures used in materials.
Usage: r_TextureLodDistanceRatio [-1, 0 and bigger]
Default is -1 (completely off). Value 0 will set full LOD to all textures used in frame.
Values bigger than 0 will activate texture LOD selection depending on distance to the objects.
    ```

- **r_TexturesAllowDynamicSampler**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow dynamic sampler in resource layouts.

    ```

- **r_TexturesStreamDynamicPool**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Dynamically compute texture streaming pool size based on the available VRam and other allocations.

    ```

- **r_TexturesStreamDynamicPoolMaxSizeWH**:

  - **Default Value:** `8192`

  - **Description:**

    ```text
Maximum texture streaming pool size in MB.

    ```

- **r_TexturesStreamDynamicPoolMinSize**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Minimum texture streaming pool size in MB.

    ```

- **r_TexturesStreamDynamicPoolTargetVramUsage**:

  - **Default Value:** `80`

  - **Description:**

    ```text
Percentage of OS specified VRam budget used for texture streaming pool size calculation.

    ```

- **r_TexturesStreamPoolSize**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Size of texture streaming pool in MB.

    ```

- **r_TexturesStreaming**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables direct streaming of textures from disk during game.
Usage: r_TexturesStreaming [0/1/2]
Default is 0 (off). All textures save in native format with mips in a
cache file. Textures are then loaded into texture memory from the cache.
1 - stream only mesh/material textures on-demand
2 - stream also cube textures on-demand
    ```

- **r_TexturesStreamingDebug**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Dump content of current texture streaming debug screen into log
    ```

- **r_TexturesStreamingDebugFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filters displayed textures by name in texture streaming debug mode 1-6

    ```

- **r_TexturesStreamingDebugMinMip**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Filters displayed textures by loaded mip in texture streaming debug mode
    ```

- **r_TexturesStreamingDebugMinSize**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Filters displayed textures by size in texture streaming debug mode
    ```

- **r_TexturesStreamingDisableNoStreamDuringLoad**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Load time optimisation. When enabled, textures flagged as non-streaming will still be streamed during level load, but will have a high priority stream request added in RT_Precache. Once streamed in, the texture will remain resident

    ```

- **r_TexturesStreamingLowestPrefetchBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Clamping texture prefetch to at most fetch this many more mips than requested if there's free pool memory.
Usage: r_TexturesStreamingLowestPrefetchBias [-0...-inf]
Default is 0 (don't prefetch).
    ```

- **r_TexturesStreamingMaxRequestedJobs**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum number of tasks submitted to streaming system.
Usage: r_TexturesStreamingMaxRequestedJobs [jobs number]
Default is 32 jobs
    ```

- **r_TexturesStreamingMaxRequestedMB**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum amount of texture data requested from streaming system per frame in MB.
Usage: r_TexturesStreamingMaxRequestedMB [size]
Default is 2.0(MB)
    ```

- **r_TexturesStreamingMaxUpdateRate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Clamping texture stream in to at most fetch this many mips at the same time.
Usage: r_TexturesStreamingMaxUpdateRate [1...inf]
Default is 1 (stream in at most 1 mip per frame per texture).
    ```

- **r_TexturesStreamingMinReadSizeKB**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Minimal streaming request size in KB.
Usage: r_TexturesStreamingMinReadSizeKB [size]
Default is 64KiBi
    ```

- **r_TexturesStreamingMipBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls how texture LOD depends from distance to the objects.
Increasing this value will reduce amount of memory required for textures.
Usage: r_TexturesStreamingMipBias [-4..0..4]
Default is 0.
    ```

- **r_TexturesStreamingMipClampDVD**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Clamp the texture mip level to certain value when streaming from DVD. 1 will never allow highest mips to be loaded for example.
Usage: r_TexturesStreamingMipClampDVD [0..4]
Default is 1.
    ```

- **r_TexturesStreamingMipFading**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Controls how the new texture MIP appears after being streamed in.
This variable influences only a visual quality of appearing texture details.
Usage: r_TexturesStreamingMipFading [0/1...N]
Default is 8 (fade-in in 8 frames time). N is the number of frames needed to fade-in all mips
    ```

- **r_TexturesStreamingNoUpload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable uploading data into texture from system memory. Useful for debug purposes.
Usage: r_TexturesStreamingNoUpload [0/1]
Default is 0 (off).
    ```

- **r_TexturesStreamingOnlyVideo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Don't store system memory copy of texture. Applicable only for PC.
Usage: r_TexturesStreamingOnlyVideo [0/1]
Default is 0 (off).
    ```

- **r_TexturesStreamingPostponeMips**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Postpone loading of high res mipmaps to improve resolution ballance of texture streaming.
Usage: r_TexturesStreamingPostponeMips [0/1]
Default is 1 (on).
    ```

- **r_TexturesStreamingPostponeThresholdKB**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Threshold used to postpone high resolution mipmap loads in KB.
Usage: r_TexturesStreamingPostponeThresholdKB [size]
Default is 1024(KB)
    ```

- **r_TexturesStreamingPrecacheRounds**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Number of precache rounds to include in active streamed texture lists.
Default is 1
    ```

- **r_TexturesStreamingSuppress**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force unloading of all textures and suppress new stream tasks.
Default is 0
    ```

- **r_TexturesStreamingUpdateType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Texture streaming update type.
Default is 0
0 - Unavailable (maps to 1)
1 - Use planning texture streamer
    ```

- **r_ThermalVision**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles termal vision enabling.
Usage: r_ThermalVision [0/1]
Default is 1 (on). Set to 2 to enable debug mode (force enabling). Set to 0 to completely disable termal vision modes.
    ```

- **r_ThermalVisionViewDistance**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Toggles thermal vision distance attenuation.
Default is 150 (meters)
    ```

- **r_TranspDepthFixup**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Write approximate depth for certain transparent objects before post effects
Usage: r_TranspDepthFixup [0/1]
Default is 1 (enabled)

    ```

- **r_TransparentPasses**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles rendering of transparent/alpha blended objects.

    ```

- **r_UpdateInstances**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabling runtime instancing CB updatings each frame
    ```

- **r_UseDisplacementFactor**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Global displacement amount.
Default is 0.4f.
    ```

- **r_UseHWSkinning**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles HW skinning.
Usage: r_UseHWSkinning [0/1]
Default is 1 (on). Set to 0 to disable HW-skinning.
    ```

- **r_UseMaterialLayers**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables material layers rendering.
Usage: r_UseMaterialLayers [0/1/2]
Default is 2 (optimized). Set to 1 for enabling but with optimization disabled (for debug).
    ```

- **r_UseZPass**:

  - **Default Value:** `2`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles vertical sync.
0: Disabled
1: Enabled

    ```

- **r_ValidateDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=disabled, 1=validate each DIP (meshes consistency, shaders, declarations, etc)
    ```

- **r_VisAreaClipLightsPerPixel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Per pixel light/cubemap culling for vis areas: 0=off, 1=on
    ```

- **r_VolumetricClouds**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables procedural volumetric clouds (experimental feature, data compatibility may break in a future release.).
0 - Disabled.
1 - Enabled (1/2x Res).
2 - Enabled (1/4x Res).
    ```

- **r_VolumetricCloudsPipeline**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set the pipeline mode of procedural volumetric clouds.
0 - Monolithic shader pipeline, using less memory.
1 - Multiple shaders pipeline, using more memory, faster when using Cloud Blocker.
    ```

- **r_VolumetricCloudsRaymarchStepNum**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Set the step number of ray-marching for procedural volumetric clouds.
Acceptable number is from 16 to 256, and it should be multiple of 16.
    ```

- **r_VolumetricCloudsShadowResolution**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Set the resolution of volumetric clouds shadow map for casting shadow on the terrain and low shading-LOD clouds.
    ```

- **r_VolumetricCloudsStereoReprojection**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables stereoscopic reprojection for procedural volumetric clouds to accelerate the rendering.
0 - Disabled.
1 - Enabled.

    ```

- **r_VolumetricCloudsTemporalReprojection**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set temporal reprojection mode for procedural volumetric clouds.
0 - faster but prone to flickering artifacts.
1 - a bit slower but less flickering artifacts.

    ```

- **r_VolumetricFogDownscaledSunShadow**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Enable replacing sun shadow maps with downscaled shadow maps or static shadow map if possible.
-1: sync with number of sun shadow map cascades currently active
 0: disabled
 1: replace first and second cascades with downscaled shadow maps. the others are replaced with static shadow map if possible.
 2: replace first, second, and third cascades with downscaled shadow maps. the others are replaced with static shadow map if possible.
 3: replace first, second, third, and fourth cascades with downscaled shadow maps. the others are replaced with static shadow map if possible.

    ```

- **r_VolumetricFogDownscaledSunShadowRatio**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set downscale ratio for sun shadow maps
0: 1/4 downscaled sun shadow maps
1: 1/8 downscaled sun shadow maps
2: 1/16 downscaled sun shadow maps

    ```

- **r_VolumetricFogMinimumLightBulbSize**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Adjust the minimum size threshold for light attenuation bulb size. Small bulb size causes the light flicker.
    ```

- **r_VolumetricFogReprojectionBlendFactor**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Adjust the blend factor of temporal reprojection.
Acceptable value is between 0 and 1.
0 means temporal reprojecton is off.

    ```

- **r_VolumetricFogReprojectionMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set the mode of ghost reduction for temporal reprojection.
0: conservative
1: advanced
    ```

- **r_VolumetricFogSample**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adjust number of sample points.
0: 1 sample point in a voxel
1: 2 sample points in a voxel
2: 4 sample points in a voxel

    ```

- **r_VolumetricFogShadow**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Adjust shadow sample count per sample point.
0: 1 shadow sample per sample point
1: 2 shadow samples per sample point 
2: 3 shadow samples per sample point
3: 4 shadow samples per sample point

    ```

- **r_VolumetricFogSunLightCorrection**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the correction of sun light luminance. Volumetric fog gets brighter but it's consistent with other lighting.
0: Disabled.
1: Enabled.

    ```

- **r_VolumetricFogTexDepth**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Depth resolution of volume texture.
Huge value runs out of performance and video memory.

    ```

- **r_VolumetricFogTexScale**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Width and height scale factor (divided by screen resolution) for volume texture.
Acceptable value is more than equal 2.

    ```

- **r_VrProjectionPreset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Selects the quality preset for the modified projection
Usage: r_VrProjectionPreset [0..8]
0: full-resolution preset, can be used for quality testing
1,2: desktop high and low quality presets
3..5: Oculus Rift high..low quality presets
6..8: HTC Vive high..low quality presets
    ```

- **r_VrProjectionType**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Selects which modified projection to use for rendering
Usage: r_VrProjectionType [0/1/2]
0: none/planar (default)
1: Nvidia Multi-Res Shading
2: NVidia Lens-Matched Shading
    ```

- **r_WaterCaustics**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles under water caustics.
Usage: r_WaterCaustics [0/1]
Default is 1 (enabled).
    ```

- **r_WaterCausticsDeferred**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Toggles under water caustics deferred pass.
Usage: r_WaterCausticsDeferred [0/1/2]
Default is 0 (disabled). 1 - enables. 2 - enables with stencil pre-pass
    ```

- **r_WaterCausticsDistance**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Toggles under water caustics max distance.
Usage: r_WaterCausticsDistance
Default is 100.0 meters
    ```

- **r_WaterGodRays**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables under water god rays.
Usage: r_WaterGodRays [0/1]
Default is 1 (enabled).
    ```

- **r_WaterGodRaysDistortion**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set the amount of distortion when underwater.
Usage: r_WaterGodRaysDistortion [n]
Default is 1.
    ```

- **r_WaterReflections**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles water reflections.
Usage: r_WaterReflections [0/1]
Default is 1 (water reflects).
    ```

- **r_WaterReflectionsMGPU**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles water reflections.multi-gpu support
Usage: r_WaterReflectionsMGPU [0/1/2]
Default is 0 (single render update), 1 (multiple render updates)
    ```

- **r_WaterReflectionsMinVisUpdateDistanceMul**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Activates update distance multiplier when water mostly occluded.
    ```

- **r_WaterReflectionsMinVisUpdateFactorMul**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Activates update factor multiplier when water mostly occluded.
    ```

- **r_WaterReflectionsMinVisiblePixelsUpdate**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Activates water reflections if visible pixels above a certain threshold.
    ```

- **r_WaterReflectionsQuality**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Activates water reflections quality setting.
Usage: r_WaterReflectionsQuality [0/1/2/3]
Default is 0 (terrain only), 1 (terrain + particles), 2 (terrain + particles + brushes), 3 (everything)
    ```

- **r_WaterReflectionsUseMinOffset**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Activates water reflections use min distance offset.
    ```

- **r_WaterUpdateDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **r_WaterUpdateFactor**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Distance factor for water reflected texture updating.
Usage: r_WaterUpdateFactor 0.01
Default is 0.01. 0 means update every frame
    ```

- **r_WaterUpdateThread**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Enables water updating on separate thread (when MT supported).
Usage: r_WaterUpdateThread [0/1/2/3/4/n]
Default is 5 (enabled and on 5 hw thread).
    ```

- **r_WaterVolumeCaustics**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles advanced water caustics for watervolumes.
Usage: r_WaterVolumeCaustics [0/1]
Default is 0 (disabled). 1 - enables.
    ```

- **r_WaterVolumeCausticsDensity**:

  - **Default Value:** `128`

  - **Description:**

    ```text
Density/resolution of watervolume caustic grid.
Usage: r_WaterVolumeCausticsDensity [16/256]
Default is 256
    ```

- **r_WaterVolumeCausticsMaxDist**:

  - **Default Value:** `35`

  - **Description:**

    ```text
Maximum distance in which caustics are visible.
Usage: r_WaterVolumeCausticsMaxDist [n]
Default is 35
    ```

- **r_WaterVolumeCausticsSnapFactor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Distance in which to snap the vertex grid/projection (to avoid aliasing).
Usage: r_WaterVolumeCausticsSnapFactor [n]
Default is 1.0
    ```

- **r_Width**:

  - **Default Value:** `1278`

  - **Description:**

    ```text
Sets the display width, in pixels.
Usage: r_Width [800/1024/..]
    ```

- **r_WinPosX**:

  - **Default Value:** `-10000`

  - **Description:**

    ```text
Sets window position, in pixels.
Usage: r_WinPosX 0-10000 means auto position
    ```

- **r_WinPosY**:

  - **Default Value:** `-10000`

  - **Description:**

    ```text
Sets window position, in pixels.
Usage: r_WinPosY 100-10000 means auto position
    ```

- **r_WindowIconTexture**:

  - **Default Value:** `%ENGINE%/EngineAssets/Textures/default_icon.dds`

  - **Description:**

    ```text
Sets the image (dds file) to be displayed as the window and taskbar icon
    ```

- **r_WindowTopMost**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles WS_EX_TOPMOST window flag.
    ```

- **r_WindowType**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Changes the type of window for the rendered viewport.
Usage: r_WindowType [0=normal window/1=borderless window/2=borderless full screen/3=exclusive full screen]
    ```

- **r_XboxEnableInstrumented**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Xbox Specific. Enables Instrumentation.
0=Disabled,
1=Enabled
    ```

- **r_XboxGpuHangDetectionThreshold**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Xbox Specific. Triggers generation of an xhit dump file when the GPU hasn't 
completed any work within r_XboxGpuHangDetectionThreshold milliseconds.
Set to negative value to disable
    ```

- **r_XboxImmediateThresholdPercent**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Percentage of the screen where we allow tearing

    ```

- **r_ZFightingDepthScale**:

  - **Default Value:** `0.995`

  - **Description:**

    ```text
Controls anti z-fighting measures in shaders (scaling homogeneous z).
    ```

- **r_ZFightingExtrude**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Controls anti z-fighting measures in shaders (extrusion along normal in world units).
    ```

- **r_ZPassDepthSorting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles Z pass depth sorting.
Usage: r_ZPassDepthSorting [0/1/2]
0: No depth sorting
1: Sort by depth layers (default)
2: Sort by distance

    ```

- **r_ZPassOnly**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **r_ZPrepassMaxDist**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Set ZPrepass max dist.
Usage: r_ZPrepassMaxDist (16.0f default) [distance in meters]

    ```

- **r_ZPrepassVegetation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables Z-Prepass for Vegetation shader. Currently doesn't work with vegetation bending until we fix shader differences in depth result between ZPrepass and ZPass.

    ```

- **r_auxGeom**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **r_buffer_banksize**:

  - **Default Value:** `4`

  - **Description:**

    ```text
the bank size in MB for buffer pooling
    ```

- **r_buffer_banksize_small**:

  - **Default Value:** `1`

  - **Description:**

    ```text
the bank size in MB for buffer pooling in small pools
    ```

- **r_buffer_enable_lockless_updates**:

  - **Default Value:** `1`

  - **Description:**

    ```text
enable/disable lockless buffer updates on platforms that support them
    ```

- **r_buffer_pool_debug_log**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable debug logging of buffer pool allocations
    ```

- **r_buffer_pool_defrag_dynamic**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable/disable runtime defragmentation of dynamic buffers
    ```

- **r_buffer_pool_defrag_max_moves**:

  - **Default Value:** `64`

  - **Description:**

    ```text
maximum number of moves the defragmentation system is allowed to perform per frame
    ```

- **r_buffer_pool_defrag_static**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable/disable runtime defragmentation of static buffers
    ```

- **r_buffer_pool_max_allocs**:

  - **Default Value:** `65520`

  - **Description:**

    ```text
the maximum number of allocations per buffer pool if defragmentation is enabled
    ```

- **r_buffer_sli_workaround**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable SLI workaround for buffer pooling
    ```

- **r_buffer_staged_update_max_size**:

  - **Default Value:** `4`

  - **Description:**

    ```text
maximum size in MB of a buffer update via staging
    ```

- **r_debugGBufferCaptions**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Onscreen caption for r_DebugGBuffer
  0 - Disabled
  1 - Enabled

    ```

- **r_deferredDecalsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display decals debug info.
Usage: r_deferredDecalsDebug [0/1]
    ```

- **r_deferredDecalsMaxLimit**:

  - **Default Value:** `1280`

  - **Description:**

    ```text
Sets the max limit for decals that cane be rendered in a single frame (default 1024)
    ```

- **r_displayinfoTargetFPS**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Specifies the aimed number of FPS that is considered ideal for the game.
The value must be positive and is used to display budgeting information with r_DisplayInfo=3
    ```

- **r_dofMinZ**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set dof min z distance, anything behind this distance will get out focus. (good default value 0.4) 

    ```

- **r_dofMinZBlendMult**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set dof min z blend multiplier (bigger value means faster blendind transition)

    ```

- **r_dofMinZScale**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set dof min z out of focus strenght (good default value - 1.0f)

    ```

- **r_durango_async_dips**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enables async dip submission on durango
    ```

- **r_durango_async_dips_sync**:

  - **Default Value:** `9999`

  - **Description:**

    ```text
enables async dip submission sync on durango
    ```

- **r_enableAltTab**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles alt tabbing in and out of fullscreen when the game is not in devmode.
Usage: r_enableAltTab [toggle]
Notes: Should only be added to system.cfg and requires a restart
    ```

- **r_enableAuxGeom**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables aux geometry rendering.
    ```

- **r_enable_full_gpu_sync**:

  - **Default Value:** `0`

  - **Description:**

    ```text
enable full gpu synchronization for debugging purposes on the every buffer I/O operation (debugging only)
    ```

- **r_overrideDXGIAdapter**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Specifies index of the preferred video adapter to be used for rendering (-1=off, loops until first suitable adapter is found).
Use this to resolve which video card to use if more than one DX11 capable GPU is available in the system.
    ```

- **r_overrideRefreshRate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enforces specified refresh rate when running in fullscreen (0=off).
    ```

- **r_overrideScanlineOrder**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enforces specified scanline order when running in fullscreen.
0=off,
1=progressive,
2=interlaced (upper field first),
3=interlaced (lower field first)
Usage: r_overrideScanlineOrder [0/1/2/3]
    ```

- **r_profiler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display render pipeline profiler.
  0: Disabled
  1: Basic overview
  2: Detailed pass stats
  3: Detailed immediate and deferred pass stats (Scheduler only)

    ```

- **r_profilerSmoothingWeight**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Set how much the current time measurement weights into the previous one.
  Single Exponential Smoothing -> (1-a)*oldVal + a*newVal
  Range: [0.0, 1.0]
    ```

- **r_profilerTargetFPS**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Target framerate for application.
    ```

- **r_resizableWindow**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turn on resizable window borders. Changes are only applied after changing the window style once.
    ```

- **r_shadersCacheClearOnVersionChange**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 off, 1 locally cached compiled shader folder is deleted if a new game version is detected.
    ```

- **r_shadersWarningsAsErrorsWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set this to 1 if you are brave enough. All compilation warnings will be treated as errors.
    ```

- **r_ssdo**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Screen Space Directional Occlusion
-1 - Debug Mode
 0 - Off
 1 - On
    ```

- **r_ssdoAmountAmbient**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Strength of occlusion applied to probe irradiance
    ```

- **r_ssdoAmountDirect**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Strength of occlusion applied to light sources
    ```

- **r_ssdoAmountReflection**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Strength of occlusion applied to probe specular
    ```

- **r_ssdoColorBleeding**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Enables AO color bleeding to avoid overly dark occlusion on bright surfaces (requires tiled deferred shading)
Usage: r_ssdoColorBleeding [0-1]

    ```

- **r_ssdoFadeoutBegin**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Starting depth of the fadeout.
    ```

- **r_ssdoFadeoutEnd**:

  - **Default Value:** `4000`

  - **Description:**

    ```text
Ending depth of the fadeout.
    ```

- **r_ssdoHalfRes**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Apply SSDO bandwidth optimizations
0 - Full resolution (not recommended)
1 - Use lower resolution depth
2 - Low res depth except for small camera FOVs to avoid artifacts
3 - Half resolution output
    ```

- **r_ssdoRadius**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
SSDO radius
    ```

- **r_ssdoRadiusMax**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Max clamped SSDO radius
    ```

- **r_ssdoRadiusMin**:

  - **Default Value:** `0.04`

  - **Description:**

    ```text
Min clamped SSDO radius
    ```

- **r_ssdoSecondaryBandRadius**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Using two bands of samples to capture both large and small scale features
    ```

- **r_statsMinDrawCalls**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimum drawcall amount to display for use with r_Stats 6
    ```

- **r_stereoScaleCoefficient**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier which influences the perceived scale of the world in VR (1.f = no effect, 0.25 = you are about 1/4th the size).
    ```

- **r_sunshafts**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables sun shafts.
Usage: r_sunshafts [0/1]
Default is 1 (on). Set to 0 to disable.
    ```

- **r_texturesstreamingJobUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable texture streaming update job
    ```

- **r_texturesstreamingMinUsableMips**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Minimum number of mips a texture should be able to use after applying r_texturesstreamingSkipMips.

    ```

- **r_texturesstreamingPostponeThresholdMip**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Threshold used to postpone high resolution mipmaps.
Usage: r_texturesstreamingPostponeThresholdMip [count]
Default is 1
    ```

- **r_texturesstreamingSkipMips**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Number of top mips to ignore when streaming.

    ```

- **r_texturesstreampooldefragmentation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabled CPU (1), GPU(2) and disable (0) textures stream pool defragmentation.

    ```

- **r_texturesstreampooldefragmentationmaxamount**:

  - **Default Value:** `524288`

  - **Description:**

    ```text
Specify the limit (in bytes) that defrag update will stop
    ```

- **r_texturesstreampooldefragmentationmaxmoves**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Specify the maximum number of blocks to move per defragmentation update
    ```

- **r_transient_pool_size**:

  - **Default Value:** `4`

  - **Description:**

    ```text
the bank size in MB for the transient pool
    ```

- **r_window_fullscreen_to_desktop_mode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Behavior for the window when losing/re-gaining focus (ALT+TAB, etc) in fullscreen exclusive mode
Usage: r_window_fullscreen_to_desktop_mode [1=minimize,restore/2=revert to windowed mode]
    ```

- **r_wireframe**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles wireframe rendering mode
    ```

- **rc_debugVerboseLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **rcon_password**:

  - **Default Value:** ``

  - **Description:**

    ```text
Sets password for the RCON system
    ```

- **s_ATLPoolSize**:

  - **Default Value:** `8192`

  - **Description:**

    ```text
Specifies the size (in KiB) of the memory pool to be used by the ATL.
Usage: s_ATLPoolSize [0/...]
Default PC: 8192 (8 MiB), XboxOne: 8192 (8 MiB), PS4: 8192 (8 MiB), Mac: 8192 (8 MiB), Linux: 8192 (8 MiB), iOS: 8192 (8 MiB), Android: 4096 (4 MiB)

    ```

- **s_AudioEventPoolSize**:

  - **Default Value:** `4096`

  - **Description:**

    ```text
Sets the number of preallocated audio events.
Usage: s_AudioEventPoolSize [0/...]
Default PC: 256, XboxOne: 256, PS4: 256, Mac: 256, Linux: 256, iOS: 256, Android: 256

    ```

- **s_AudioObjectPoolSize**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Sets the number of preallocated audio objects and corresponding audio proxies.
Usage: s_AudioObjectPoolSize [0/...]
Default PC: 256, XboxOne: 256, PS4: 256, Mac: 256, Linux: 256, iOS: 256, Android: 256

    ```

- **s_AudioProxiesInitType**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `512`

  - **Description:**

    ```text
Sets the number of preallocated audio standalone files.
Usage: s_AudioStandaloneFilePoolSize [0/...]
Default PC: 0, XboxOne: 0, PS4: 0, Mac: 0, Linux: 0, iOS: 0, Android: 0

    ```

- **s_AudioSystemImplementationName**:

  - **Default Value:** `CryAudioImplWwise`

  - **Description:**

    ```text
Holds the name of the AudioSystemImplementation library to be used.
Usage: s_AudioSystemImplementationName <name of the library without extension>
Default: CryAudioImplWwise

    ```

- **s_FileCacheManagerSize**:

  - **Default Value:** `16384`

  - **Description:**

    ```text
Sets the size in KiB the AFCM will allocate on the heap.
Usage: s_FileCacheManagerSize [0/...]
Default PC: 393216 (384 MiB), XboxOne: 393216 (384 MiB), PS4: 393216 (384 MiB), Mac: 393216 (384 MiB), Linux: 393216 (384 MiB), iOS: 2048 (2 MiB), Android: 73728 (72 MiB)

    ```

- **s_FmodPrimaryPoolSize**:

  - **Default Value:** `143360`

  - **Description:**

    ```text
Specifies the size (in KiB) of the memory pool to be used by the Fmod audio system implementation.
Usage: s_FmodPrimaryPoolSize [0/...]
Default PC: 131072 (128 MiB), XboxOne: 131072 (128 MiB), PS4: 131072 (128 MiB), Mac: 131072 (128 MiB), Linux: 131072 (128 MiB), iOS: 8192 (8 MiB), Android: 32768 (32 MiB)

    ```

- **s_FullObstructionMaxDistance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
for the sounds, whose distance to the listener is greater than this value, the obstruction is value gets attenuated with distance.
Usage: s_FullObstructionMaxDistance [0/...]
Default: 5 m

    ```

- **s_LanguageToCheckForMissingFiles**:

  - **Default Value:** `english`

  - **Description:**

    ```text
When this language is set in g_LanguageAudio then warning about missing standalone files are produced.
Usage: s_LanguageToCheckForMissingFiles = english 

    ```

- **s_MasterVolume**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Simulates volume_voice rtpc.
    ```

- **s_MusicVolume**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Simulates volume_music rtpc.
    ```

- **s_OcclusionMaxDistance**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Obstruction/Occlusion is not calculated for the sounds, whose distance to the listener is greater than this value. Setting this value to 0 disables obstruction/occlusion calculations.
Usage: s_OcclusionMaxDistance [0/...]
Default: 500 m

    ```

- **s_OcclusionMaxSyncDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Physics rays are processed synchronously for the sounds that are closer to the listener than this value, and asynchronously for the rest (possible performance optimization).
Usage: s_OcclusionMaxSyncDistance [0/...]
Default: 10 m

    ```

- **s_PositionUpdateThreshold**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
An audio object has to move by at least this amount to issue a position update request to the audio system.
This kind of optimization should ideally be done by the parent system so this is here for convenience.Usage: s_PositionUpdateThreshold [0/...]
Default: 0.1 (10 cm)

    ```

- **s_SoundVolume**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Simulates volume_sfx rtpc.
    ```

- **s_VelocityTrackingThreshold**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
An audio object has to change its velocity by at least this amount to issue an "object_speed" RTPC update request to the audio system.
Usage: s_VelocityTrackingThreshold [0/...]
Default: 0.1 (10 cm/s)

    ```

- **steam_appId**:

  - **Default Value:** `1.7713e+06`

  - **Description:**

    ```text
Override Steam application id, only possible during development! Requires application restart.
    ```

- **steam_editor_support**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Defines whether the Steam integration is enabled in Sandbox. Requires application restart.
    ```

- **sv_AISystem**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Load and use the AI system on the server
    ```

- **sv_DedicatedCPUPercent**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets the target CPU usage when running as a dedicated server, or disable this feature if it's zero.
Usage: sv_DedicatedCPUPercent [0..100]
Default is 0 (disabled).
    ```

- **sv_DedicatedCPUVariance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Sets how much the CPU can vary from sv_DedicateCPU (up or down) without adjusting the framerate.
Usage: sv_DedicatedCPUVariance [5..50]
Default is 10.
    ```

- **sv_DedicatedMaxRate**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Sets the maximum update rate when running as a dedicated server.
Usage: sv_DedicatedMaxRate [5..500]
Default is 30.
    ```

- **sv_LoadAllLayersForResList**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Bypasses game object layer filtering to load all layers of objects for a multiplayer level
    ```

- **sv_autoconfigurl**:

  - **Default Value:** ``

  - **Description:**

    ```text
Automatically download configuration data from a URL
    ```

- **sv_bandwidth**:

  - **Default Value:** `50000`

  - **Description:**

    ```text
Bit rate on server
    ```

- **sv_bind**:

  - **Default Value:** `0.0.0.0`

  - **Description:**

    ```text
Bind the server to a specific IP address
    ```

- **sv_dumpstats**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables dumping of level and player statistics, positions, etc. to files
    ```

- **sv_dumpstatsperiod**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Time period of statistics dumping in milliseconds
    ```

- **sv_gamerules**:

  - **Default Value:** `SinglePlayer`

  - **Description:**

    ```text
The game rules that the server should use
    ```

- **sv_gamerulesdefault**:

  - **Default Value:** `SinglePlayer`

  - **Description:**

    ```text
The game rules that the server default to when disconnecting
    ```

- **sv_input_timeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Experimental timeout in ms to stop interpolating client inputs since last update.
    ```

- **sv_lanonly**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set for LAN games
    ```

- **sv_levelrotation**:

  - **Default Value:** `levelrotation`

  - **Description:**

    ```text
Sequence of levels to load after each game ends
    ```

- **sv_map**:

  - **Default Value:** `nolevel`

  - **Description:**

    ```text
The map the server should load
    ```

- **sv_maxplayers**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum number of players allowed to join server.
    ```

- **sv_maxspectators**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Maximum number of players allowed to be spectators during the game.
    ```

- **sv_pacifist**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pacifist mode (only works on dedicated server)
    ```

- **sv_packetRate**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Packet rate on server
    ```

- **sv_password**:

  - **Default Value:** ``

  - **Description:**

    ```text
Server password
    ```

- **sv_port**:

  - **Default Value:** `64087`

  - **Description:**

    ```text
Server address
    ```

- **sv_requireinputdevice**:

  - **Default Value:** `dontcare`

  - **Description:**

    ```text
Which input devices to require at connection (dontcare, none, gamepad, keyboard)
    ```

- **sv_servername**:

  - **Default Value:** ``

  - **Description:**

    ```text
Server name will be displayed in server list. If empty, machine name will be used.
    ```

- **sv_timeofdayenable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables time of day simulation.
    ```

- **sv_timeofdaylength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets time of day changing speed.
    ```

- **sv_timeofdaystart**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Sets time of day start time.
    ```

- **sv_timeout_disconnect**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Timeout for fully disconnecting timeout connections
    ```

- **sv_votingCooldown**:

  - **Default Value:** `180`

  - **Description:**

    ```text
Voting cooldown
    ```

- **sv_votingRatio**:

  - **Default Value:** `0.51`

  - **Description:**

    ```text
Part of player's votes needed for successful vote.
    ```

- **sv_votingTeamRatio**:

  - **Default Value:** `0.67`

  - **Description:**

    ```text
Part of team member's votes needed for successful vote.
    ```

- **sv_votingTimeout**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Voting timeout
    ```

- **sw_debugInfo**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Segmented World Debug Info (0=disable, 1=grid, 2=position, 3=memory, 4=color-coded object, 5=seg index, 6=seg index with layer info)
    ```

- **sw_draw_bbox**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Draw bounding box for segments.
Default is 1.

    ```

- **sw_gridSize**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Number of active grids in both column and line for segmented world
    ```

- **sys_AI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables AI Update
    ```

- **sys_DeactivateConsole**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0: normal console behavior
1: hide the console
    ```

- **sys_LoadFrontendShaderCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Load frontend shader cache (on/off)
    ```

- **sys_MaxFPS**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Limits the frame rate to specified number n (if n>0 and if vsync is disabled).
 0 = on PC if vsync is off auto throttles fps while in menu or game is paused (default)
-1 = off
    ```

- **sys_MaxFPSThrotteled**:

  - **Default Value:** `60`

  - **Description:**

    ```text
The FPS limit that applies when sys_MaxFPS is set to 0 and the game is in menu, loading screen or unfocused
    ```

- **sys_MemoryDeadListSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Keep upto size bytes in a "deadlist" of allocations to assist in capturing tramples
    ```

- **sys_PakDisableNonLevelRelatedPaks**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Disables all paks that are not required by specific level; This is used with per level splitted assets.
    ```

- **sys_PakInMemorySizeLimit**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Individual pak size limit for being loaded into memory (MB)
    ```

- **sys_PakLoadCache**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Load in memory paks from _LoadCache folder
    ```

- **sys_PakLoadModePaks**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Load mode switching paks from modes folder
    ```

- **sys_PakLogInvalidFileAccess**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Log synchronous file access when in game
    ```

- **sys_PakLogMissingFiles**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If non-0, missing file names go to mastercd/MissingFilesX.log.
1) only resulting report
2) run-time report is ON, one entry per file
3) full run-time report
    ```

- **sys_PakMessageInvalidFileAccess**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Message Box synchronous file access when in game
    ```

- **sys_PakPriority**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0: not-in pak file first, 1: pak file first, 2: pak file only, 3: not-in pak mod file first
    ```

- **sys_PakReadSlice**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If non-0, means number of kilobytes to use to read files in portions. Should only be used on Win9x kernels
    ```

- **sys_PakSaveFastLoadResourceList**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save resource list during initial loading
    ```

- **sys_PakSaveLevelResourceList**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save resource list when loading level
    ```

- **sys_PakSaveMenuCommonResourceList**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save resource list during front end menu flow
    ```

- **sys_PakSaveTotalResourceList**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save resource list
    ```

- **sys_PakStreamCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Load in memory paks for faster streaming (cgf_cache.pak,dds_cache.pak)
    ```

- **sys_PakTotalInMemorySizeLimit**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Total limit (in MB) for all in memory paks
    ```

- **sys_PakValidateFileHash**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Validate file hashes in pak files for collisions
    ```

- **sys_ProfileLevelLoading**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Output level loading stats into log
0 = Off
1 = Output basic info about loading time per function
2 = Output full statistics including loading time and memory allocations with call stack info
    ```

- **sys_ProfileLevelLoadingDump**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Output level loading dump stats into log

    ```

- **sys_SSInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show SourceSafe information (Name,Comment,Date) for file errors.Usage: sys_SSInfo [0/1]
Default is 0 (off)
    ```

- **sys_Scale3DMouseYPR**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Scales rotation speed of supported 3DMouse devices.
    ```

- **sys_SimulateTask**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Simulate a task in System:Update which takes X ms
    ```

- **sys_SleepIfInactiveWH**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When enabled and game window is inactive, sleep the main thread for 25ms every frame.
    ```

- **sys_TaskThread0_CPU**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Specifies the physical CPU index taskthread0 will run on
    ```

- **sys_TaskThread1_CPU**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Specifies the physical CPU index taskthread1 will run on
    ```

- **sys_TaskThread2_CPU**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Specifies the physical CPU index taskthread2 will run on
    ```

- **sys_TaskThread3_CPU**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Specifies the physical CPU index taskthread3 will run on
    ```

- **sys_TaskThread4_CPU**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Specifies the physical CPU index taskthread4 will run on
    ```

- **sys_TaskThread5_CPU**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Specifies the physical CPU index taskthread5 will run on
    ```

- **sys_UncachedStreamReads**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable stream reads via an uncached file handle
    ```

- **sys_affinity**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **sys_audio_disable**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies whether to use the NULLAudioSystem in place of the regular AudioSystem
Usage: sys_audio_disable [0/1]
0: use regular AudioSystem.
1: use NullAudioSystem (disable all audio functionality).
Default: 0 (enable audio functionality)
    ```

- **sys_auto_detect_spec_override**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Whether to override the spec value during spec auto detect.
0 = Disabled
1 = Low
2 = Medium
3 = High
4 = Ultra

    ```

- **sys_budget_frametime**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Sets the upper limit for frame time (in ms) when monitoring budget.
    ```

- **sys_budget_numdrawcalls**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Sets the upper limit for number of draw calls per frame.
    ```

- **sys_budget_numpolys**:

  - **Default Value:** `500000`

  - **Description:**

    ```text
Sets the upper limit for number of polygons per frame.
    ```

- **sys_budget_soundCPU**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Sets the upper limit for sound CPU (in Percent) when monitoring budget.
    ```

- **sys_budget_soundchannels**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Sets the upper limit for sound channels playing when monitoring budget.
    ```

- **sys_budget_soundmem**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Sets the upper limit for sound memory (in MB) when monitoring budget.
    ```

- **sys_budget_streamingthroughput**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Sets the upper limit for streaming throughput(KB/s).
    ```

- **sys_budget_sysmem**:

  - **Default Value:** `512`

  - **Description:**

    ```text
Sets the upper limit for system memory (in MB) when monitoring budget.
    ```

- **sys_budget_videomem**:

  - **Default Value:** `90`

  - **Description:**

    ```text
Sets the upper limit for video memory (in MB) when monitoring budget.
    ```

- **sys_build_folder**:

  - **Default Value:** ``

  - **Description:**

    ```text
Optionally specifies external full path to the build folder to read pak files from. Can be a full path to an external folder or a relative path to a folder inside of the local build.
    ```

- **sys_deferAudioUpdateOptim**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 - disable optimisation
1 - enable optimisation
Default is 1
    ```

- **sys_display_threads**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays Thread info
    ```

- **sys_dll_ai**:

  - **Default Value:** `CryAISystem`

  - **Description:**

    ```text
Specifies the DLL to load for the AI system
    ```

- **sys_dll_game**:

  - **Default Value:** `WHGame`

  - **Description:**

    ```text
Specifies the game DLL to load
    ```

- **sys_dll_response_system**:

  - **Default Value:** ``

  - **Description:**

    ```text
Specifies the DLL to load for the dynamic response system
    ```

- **sys_dump_aux_threads**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Dumps callstacks of other threads in case of a crash
    ```

- **sys_dump_type**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Specifies type of crash dump to create - see MINIDUMP_TYPE in dbghelp.h for full list of values
0: Do not create a minidump
1: Create a small minidump (stacktrace)
2: Create a medium minidump (+ some variables)
3: Create a full minidump (+ all memory)

    ```

- **sys_enable_budgetmonitoring**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables budget monitoring. Use #System.SetBudget( sysMemLimitInMB, videoMemLimitInMB,
frameTimeLimitInMS, soundChannelsPlaying ) or sys_budget_sysmem, sys_budget_videomem
or sys_budget_fps to set budget limits.
    ```

- **sys_entities**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Entities Update
    ```

- **sys_error_debugbreak**:

  - **Default Value:** `0`

  - **Description:**

    ```text
__debugbreak() if a VALIDATOR_ERROR_DBGBREAK message is hit
    ```

- **sys_filesystemCaseSensitivity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 = Ignore letter casing mismatches, 1 = Show warning on mismatch, 2 = Show error on mismatch
    ```

- **sys_firstlaunch**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Indicates that the game was run for the first time.
    ```

- **sys_flash**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables execution of flash files.
    ```

- **sys_flash_address_space**:

  - **Default Value:** `49152`

  - **Description:**

    ```text
Specifies the size (in kilo bytes) of the address space used for flash objects.

    ```

- **sys_flash_allow_reset_mesh_cache**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow programmatic mesh cache resets.
    ```

- **sys_flash_check_filemodtime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Respect file modification time for Flash internal resource sharing.
Cached resources with same filepath but different file modification time are treated as unique entities.
    ```

- **sys_flash_curve_tess_error**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls curve tessellation. Larger values result in coarser, more angular curves.
    ```

- **sys_flash_debugdraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug drawing of Flash assets (1). Canvas area is drawn in bright green.
Also draw masks (2).
    ```

- **sys_flash_edgeaa**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables edge anti-aliased rendering of flash files.
    ```

- **sys_flash_frame_catchup_count**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximum number of frames a movieclip can advance each frame.
    ```

- **sys_flash_log_options**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables mipmap support for flash ui icons
    ```

- **sys_flash_reset_mesh_cache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Reset mesh cache through console (once).
    ```

- **sys_flash_static_pool_size**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies the size (in kb) of the static memory pool for flash objects.
Set to zero to turn it off and use a dynamic pool instead.
    ```

- **sys_flash_stereo_maxparallax**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Maximum parallax when viewing Flash content in stereo 3D
    ```

- **sys_flash_use_arenas**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables creation of Flash asset instances through designated memory arenas.
    ```

- **sys_flash_video_soundvolume**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets volume of video's main sound track(0..1). Has no effect if video support is not compiled in.
    ```

- **sys_flash_video_subaudiovolume**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets volume of video's sub audio sound track (0..1). Has no effect if video support is not compiled in.
    ```

- **sys_flash_warning_level**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets verbosity level for CryEngine related warnings...
0) Omit warning
1) Log warning
2) Log warning and display message box
    ```

- **sys_force_installtohdd_mode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces install to HDD mode even when doing DVD emulation
    ```

- **sys_game_folder**:

  - **Default Value:** `Data`

  - **Description:**

    ```text
Specifies the game folder to read all data from. Can be fully pathed for external folders or relative path for folders inside the root.
    ```

- **sys_game_name**:

  - **Default Value:** `Kingdom Come: Deliverance II`

  - **Description:**

    ```text
Specifies the name to be displayed in the Launcher window title bar
    ```

- **sys_gamertag**:

  - **Default Value:** ``

  - **Description:**

    ```text
Gamertag displayed instead of user name
    ```

- **sys_ime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 = IME disabled, 1 = IME enabled (if supported)
    ```

- **sys_initpreloadpacks**:

  - **Default Value:** ``

  - **Description:**

    ```text
Specifies the paks for an engine initialization
    ```

- **sys_intromoviesduringinit**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Render the startup video during game initialization
    ```

- **sys_job_system_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable the JobSystem.
Usage: sys_job_system_enable 0/1
0: The Jobsystem is disabled, each job is executed in its invoking thread.
1: The JobSystem is enabled, each job is invoked in one of the worker threads.
    ```

- **sys_job_system_filter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filters a Job.
Usage: sys_job_system_filter name1,name2,..
Where 'name' refers to the exact name of the job, 0 disables it
More than one job can be specified by using a comma separated list
    ```

- **sys_job_system_max_worker**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Sets the number of threads to use for the job systemDefaults to 10 on consoles and 16 threads an PCSet to 0 to create as many threads as cores are available
    ```

- **sys_job_system_process_wait_on_jobs_wh**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow waiting thread to steal and process jobs on which it waits
    ```

- **sys_job_system_profiler**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `2`

  - **Description:**

    ```text
Max scale for sys_job_system_profiler debug draw
    ```

- **sys_job_system_worker_queue_ratio_wh**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Queue sharing factor. 1 means every worker has its own queue, 2 means there is a queue for every pair of workers and so on. Higher numbers usually improve scheduler fairness and distrubution of jobs to workers, but increase scheduler overhead via higher thread contention.
    ```

- **sys_keyboard**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables keyboard.
Usage: sys_keyboard [0/1]
Default is 1 (on).
    ```

- **sys_keyboard_break**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables keyboard break handler
    ```

- **sys_languages**:

  - **Default Value:** ``

  - **Description:**

    ```text
String list of enabled languages
    ```

- **sys_languagesAvailable**:

  - **Default Value:** ``

  - **Description:**

    ```text
String list of available languages
    ```

- **sys_languagesAvailable_audio**:

  - **Default Value:** ``

  - **Description:**

    ```text
String list of available audio languages
    ```

- **sys_languages_audio**:

  - **Default Value:** ``

  - **Description:**

    ```text
String list of enabled audio languages
    ```

- **sys_limit_phys_thread_count**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Limits p_num_threads to physical CPU count - 1
    ```

- **sys_livecreate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable LiveCreate. Values: 0-disabled, use Null implementation, 1-fully enabled, 2-disabled (but initialized)
    ```

- **sys_localization_folder**:

  - **Default Value:** `Localization`

  - **Description:**

    ```text
Sets the folder where to look for localized data.
This cvar allows for backwards compatibility so localized data under the game folder can still be found.
Usage: sys_localization_folder <folder name>
Default: Localization

    ```

- **sys_logallocations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Save allocation call stack
    ```

- **sys_main_CPU**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies the physical CPU index main will run on
    ```

- **sys_max_step**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Specifies the maximum physics step in a separate thread
    ```

- **sys_memory_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables to activate low memory situation is specific places in the code (argument defines which place), 0=off
    ```

- **sys_menupreloadpacks**:

  - **Default Value:** ``

  - **Description:**

    ```text
Specifies the paks for a main menu loading
    ```

- **sys_min_step**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Specifies the minimum physics step in a separate thread
    ```

- **sys_no_crash_dialog**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **sys_no_jobs_inlining**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Dont use jobs inline execution.
    ```

- **sys_noupdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles updating of system with sys_script_debugger.
Usage: sys_noupdate [0/1]
Default is 0 (system updates during debug).
    ```

- **sys_parallel_processing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles advanced parallel processing.
Usage: sys_parallel_processing [0/1]
Default is 1 (on).
    ```

- **sys_physics**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Physics Update
    ```

- **sys_physics_CPU**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Specifies the physical CPU index physics will run on
    ```

- **sys_preload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Preload Game Resources
    ```

- **sys_root**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **sys_scale3DMouseTranslation**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Scales translation speed of supported 3DMouse devices.
    ```

- **sys_scaleform_shared_font_tex_size**:

  - **Default Value:** `2048`

  - **Description:**

    ```text
Additional flash/scaleform font texture raster size for both width and height.
    ```

- **sys_spec**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Tells the system cfg spec. (0=custom, 1=low, 2=med, 3=high, 4=very high, 5=ultra, 13=Xbox One, 6=Xbox One X, 7=PS4, 10=PS5, 11=Xbox Series X, 12=Xbox Series S)
    ```

- **sys_spec_characters**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Console variable group to apply settings to multiple variables

sys_spec_light [1/2/3/4/5/12/16/17/default] [current]:
 ... e_ShadowsCastFadeOutRatioLightsWH = 0.6/0.5/0.4/0.3/0.2/0.5/0.5/0.5/0.4
 ... e_ShadowsCastViewDistRatioLights = 0.04/0.055/0.075/0.1/0.15/0.055/0.07/0.07/0.075
 ... e_ViewDistRatioInteriorReflexLights = 0.6/0.7/0.8/0.9/1/0.8/0.8/0.8/0.8
 ... e_ViewDistRatioLights = 9/12/16/24/30/12/12/12/16

    ```

- **sys_spec_objectdetail**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Console variable group to apply settings to multiple variables

sys_spec_textureresolution [0/1/2/3/4/5/6/7/8/9/10/default] [current]:
 ... r_TexturesStreamPoolSize = 256/384/1024/1536/2048/2536/4096/5120/8192/10240/16384/256

    ```

- **sys_spec_vegetation**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Console variable group to apply settings to multiple variables

sys_spec_volumetriceffects [1/2/3/4/5/10/11/12/15/16/17/default] [current]:
 ... r_VolumetricFogSample = 0/1/2/2/2/1/1/1/1/1/1/2
 ... r_VolumetricFogTexDepth = 16/32/48/64/64/32/32/24/32/32/32/48
 ... r_volumetricClouds = 2/2/2/2/1/2/2/2/2/2/2/2
 ... r_volumetricfogtexscale = 16/12/12/10/10/12/12/16/12/12/12/12

    ```

- **sys_ssd_warning**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable warning box when engine is not running on SSD drive.
    ```

- **sys_streaming_CPU**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Specifies the physical CPU file IO thread run on
    ```

- **sys_streaming_CPU_worker**:

  - **Default Value:** `5`

  - **Description:**

    ```text
(unused) Specifies the physical CPU file IO worker thread/s run on
    ```

- **sys_streaming_debug**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** ``

  - **Description:**

    ```text
Set streaming debug information filter
    ```

- **sys_streaming_debug_filter_min_time**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show only slow items.
    ```

- **sys_streaming_in_blocks**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Streaming of large files happens in blocks
    ```

- **sys_streaming_max_bandwidth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables capping of max streaming bandwidth in MB/s
    ```

- **sys_streaming_max_finalize_per_frame**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximum stream finalizing calls per frame to reduce the CPU impact on main thread (0 to disable)
    ```

- **sys_streaming_memory_budget**:

  - **Default Value:** `32768`

  - **Description:**

    ```text
Temp memory streaming system can use in KB
    ```

- **sys_streaming_requests_grouping_time_period**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Streaming requests are grouped by request time and then sorted by disk offset
    ```

- **sys_streaming_resetstats**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Reset all the streaming stats
    ```

- **sys_streaming_use_optical_drive_thread**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow usage of an extra optical drive thread for faster streaming from 2 medias
    ```

- **sys_telemetry_keep_alive**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Telemetry stream keep-alive time
    ```

- **sys_telemetry_stream_file**:

  - **Default Value:** ``

  - **Description:**

    ```text
Telemetry stream file name
    ```

- **sys_telemetry_stream_ip**:

  - **Default Value:** ``

  - **Description:**

    ```text
Telemetry stream ip address
    ```

- **sys_trackview**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables TrackView Update
    ```

- **sys_update_profile_time**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Time to keep updates timings history for.
    ```

- **sys_usePlatformSavingAPI**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use the platform APIs for saving and loading (complies with TRCs, but allocates lots of memory)
    ```

- **sys_user_folder**:

  - **Default Value:** `KingdomCome2`

  - **Description:**

    ```text
Specifies the name of the user folder inside the 'Users/<username>/Saved Games/' folder. Empty string means 'User_APPNAME' in the root folder
    ```

- **sys_user_subfolder**:

  - **Default Value:** ``

  - **Description:**

    ```text
Specifies the name of the subfolder in sys_user_folder. It is used for savegames and profiles
    ```

- **sys_vtune**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **sys_warnings**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggles printing system warnings.
Usage: sys_warnings [0/1]
Default is 0 (off).
    ```

- **t_Debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Timer debug: 0 = off, 1 = events, 2 = verbose
    ```

- **t_FixedStep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Game updated with this fixed frame time
0=off, number specifies the frame time in seconds
e.g. 0.033333(30 fps), 0.1(10 fps), 0.01(100 fps)
    ```

- **t_GameScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Game time scaled by this - for variable slow motion
    ```

- **t_MaxStep**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Game systems clamped to this frame time
    ```

- **t_Scale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
All times scaled by this - for variable slow motion
    ```

- **t_Smoothing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
time smoothing
0=off, 1=on
    ```

- **tracer_max_count**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Max number of active tracers.
    ```

- **tracer_max_distance**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Distance at which to stop scaling/lengthening tracers.
    ```

- **tracer_max_scale**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Scale at max distance.
    ```

- **tracer_min_distance**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Distance at which to start scaling/lengthening tracers.
    ```

- **tracer_min_scale**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Scale at min distance.
    ```

- **tracer_player_radiusSqr**:

  - **Default Value:** `400`

  - **Description:**

    ```text
Sqr Distance around player at which to start decelerate/acelerate tracer speed.
    ```

- **v_altitudeLimit**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Used to restrict the helicopter and VTOL movement from going higher than a set altitude.
If set to zero, the altitude limit is disabled.
    ```

- **v_altitudeLimitLowerOffset**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Used in conjunction with v_altitudeLimit to set the zone when gaining altitude start to be more difficult.
    ```

- **v_debugSounds**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable/disable vehicle sound debug drawing
    ```

- **v_draw_slip**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw wheel slip status
    ```

- **v_draw_suspension**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables/disables display of wheel suspension, for the vehicle that has v_profileMovement enabled
    ```

- **v_dumpFriction**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Dump vehicle friction status
    ```

- **v_invertPitchControl**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Invert the pitch control for driving some vehicles, including the helicopter and the vtol
    ```

- **v_pa_surface**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables/disables vehicle surface particles
    ```

- **v_profileMovement**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Used to enable profiling of the current vehicle movement (1 to enable)
    ```

- **v_rockBoats**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable boats idle rocking
    ```

- **v_sprintSpeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set speed for acceleration measuring
    ```

- **v_stabilizeVTOL**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Specifies if the air movements should automatically stabilize
    ```

- **v_wind_minspeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If non-zero, vehicle wind areas always set wind >= specified value
    ```

- **watch_enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
On-screen watch text is enabled/disabled
    ```

- **watch_text_render_fxscale**:

  - **Default Value:** `13`

  - **Description:**

    ```text
Draw2d label to IFFont x scale value (for calcing sizes).
    ```

- **watch_text_render_lineSpacing**:

  - **Default Value:** `9.3`

  - **Description:**

    ```text
On-screen watch text line spacing (to cram more text on screen without shrinking the font)
    ```

- **watch_text_render_size**:

  - **Default Value:** `1.75`

  - **Description:**

    ```text
On-screen watch text render size
    ```

- **watch_text_render_start_pos_x**:

  - **Default Value:** `35`

  - **Description:**

    ```text
On-screen watch text render start x position
    ```

- **watch_text_render_start_pos_y**:

  - **Default Value:** `180`

  - **Description:**

    ```text
On-screen watch text render start y position
    ```

- **wh_ArrowTrailEffectStartDistance**:

  - **Default Value:** `3`

  - **Description:**

    ```text

    ```

- **wh_HitReaction_CollisionCacheEvictionInterval**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Interval in which a collision from the same entity is rejected
    ```

- **wh_HitReaction_CollisionsEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables collision hit reactions.
    ```

- **wh_HitReaction_Debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show hit reaction debug information.
    ```

- **wh_HitReaction_DebugIgnorePlayer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Just for debugging nonplayer HR on the player which is very handy
    ```

- **wh_HitReaction_Enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables hit reaction system.
    ```

- **wh_HitReaction_EnvironmentCollisionScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scale for impulses to environment
    ```

- **wh_HitReaction_PhysicalHitCoef**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Coefficient for physical hit impulses.
    ```

- **wh_RecordFrameTimesIncludeMemory**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Include memory snapshots in the frametimes recording
    ```

- **wh_aa_DBQueryProfiling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable debug output profiling queries
    ```

- **wh_aa_DebugEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable debug output for action actor
    ```

- **wh_aa_DebugEventsTarget**:

  - **Default Value:** ``

  - **Description:**

    ```text
Setup target for actor actions debug events
    ```

- **wh_aa_PreprocessVerbosity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable verbosity during preprocessing assets
    ```

- **wh_ac_UpdateBBoxByHipsDebugDraw**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables debug draw for updating bbox by hips on anim chars for given entity name.
    ```

- **wh_actor_ActorTargetDefaultPrepareRadius**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Default prepare radius for exact positioning
    ```

- **wh_actor_DebugGhosting**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **wh_actor_DefaultPitchAngleLimit**:

  - **Default Value:** `1.39626`

  - **Description:**

    ```text
Default pitch limiting
    ```

- **wh_actor_EnableActionNaturalLogicalEnd**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Support natural logical end mode in mannequin actions. 0 - off (action is never logically ended due to the natural end mode), 1 - on
    ```

- **wh_actor_FallSpeedHeavyLand**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Heavy land animation will play when landing over this fall speed
    ```

- **wh_actor_GhostingBumpDelay**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Maximal delay between two bumps that will not cancel ghosting timer. If frame time is higher it is used instead.
    ```

- **wh_actor_GhostingEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables ghosting
    ```

- **wh_actor_GhostingEnterTimer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Time after which ghosting is enabled
    ```

- **wh_actor_GhostingExitTimer**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Time after which ghosting is disabled after exiting last collision
    ```

- **wh_actor_GroundNormalBlendMultiplier**:

  - **Default Value:** `10`

  - **Description:**

    ```text

    ```

- **wh_actor_IdleStateUseStanceObjectTransform**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables using the object's transform as TargetPos procclip parameter for stance idle state animations
    ```

- **wh_actor_JumpCapsuleAdditionalRadius**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Radius added to a capsule when an actor jumps
    ```

- **wh_actor_JumpHeight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Default jump height
    ```

- **wh_actor_JumpHeightAnimBlendTime**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Time until change in height will propagate into blend weight in jump blendspace
    ```

- **wh_actor_JumpInPlaceMovementSmoothingTime**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Time until the change in movement when air controlling jump in place will propagate
    ```

- **wh_actor_LandCheckDelay**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Delay from jump start until land check is started
    ```

- **wh_actor_LipSyncStartTransitionTime**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Fade-in time (seconds) into a facial animation
    ```

- **wh_actor_LipSyncStopTransitionTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Fade-out time (seconds) from a facial animation
    ```

- **wh_actor_MovementSpeedMultDefault**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Default value of the movement speed multiplier. Used when the multiplier is not defined for the surface or the surface is unknown
    ```

- **wh_actor_MovementSpeedMultEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the movement speed multiplier updated from surface type underneath the actor?
    ```

- **wh_actor_MovementSpeedMultSmoothingRate**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximum rate of change of the surface speed movement multiplier. Used to smooth out sudden changes of materials
    ```

- **wh_actor_MovementSpeedMultSmoothingRateForHorse**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Maximum rate of change of the surface speed movement multiplier. Used to smooth out sudden changes of materials (exclusive for horses).
    ```

- **wh_actor_ParallelPrePhysicsUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable parallel pre physic actor update
    ```

- **wh_actor_SimplifiedPhysicsBodySubPartId**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Body subpart Id definition for simplified actor physics.
    ```

- **wh_actor_SlidingPreventsJumping**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Jump is disabled when sliding
    ```

- **wh_actor_UnderTerrainTestOffset**:

  - **Default Value:** `2`

  - **Description:**

    ```text
C_Actor::IsUnderTerrain method uses this variable as offset when checking height relative to the terrain. The top actor's head needs to be under the terrain when standing.
    ```

- **wh_actor_UnstuckJumpTimeout**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Timeout until unstuck exit is activated in jump mode when speed is under wh_actor_UnstuckSpeed
    ```

- **wh_actor_UnstuckSpeed**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Speed (squared) under which when flying unstuck mode is activated(AirControl=1)
    ```

- **wh_actor_UpdateStopLeg**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_actor_WaterRippleInjectionDistance**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Actor position difference [m] to add ripple.
    ```

- **wh_actor_WaterRippleScale**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Ripple scale/size simulation parameter.
    ```

- **wh_actor_WaterRippleStrength**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Ripple strength/intensity/height simulation parameter.
    ```

- **wh_actor_info**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw mask for actor:
1 - model
2 - actions
4 - mannequin
8 - human blood debug
    ```

- **wh_actor_info_filter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter for wh_actor_info with name of actor.
    ```

- **wh_actor_model**:

  - **Default Value:** ``

  - **Description:**

    ```text
Debug draw of actor model, 1 for all or entity name
    ```

- **wh_ai_ActivitySystemSleepOutsideMLOD**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables sleeping of activity system ouside of MLOD if there is nothing to do
    ```

- **wh_ai_AdvancedNavMeshSpanMerge**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use advanced voxel span merge when building navmesh
    ```

- **wh_ai_AfterMoveTargetCosAngleTolerance**:

  - **Default Value:** `0.98`

  - **Description:**

    ```text
Controls the angle tolerance that is considere to be roughly a straight line when determining the after move target. The value is in cos of angle!
    ```

- **wh_ai_AfterMoveTargetLookAhead**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Controls the look ahead distance past the navigation element end when determining the after move target. Value is in meters
    ```

- **wh_ai_AllowPathFollowShortcuting**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow smart path follower shortcuts when the MNM override is enabled
    ```

- **wh_ai_AllowPathFollowShortcutingFlee**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow smart path follower shortcuts for flee movement!
    ```

- **wh_ai_AnimalPoint_EatingCheckOffset**:

  - **Default Value:** `1.15`

  - **Description:**

    ```text
Distance (in direction of NPC) from the NPC origin, where terrain is checked when testing spot for eating.
    ```

- **wh_ai_AnimalPoint_MaxEatingSlopeDeg**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximal slope (in degrees) of terrain for places suitable for eating.
    ```

- **wh_ai_AnimalPoint_MaxSleepingNormalDeg**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximal angle (in degrees) of normals at front and back checked points, when checked for a sleeping spot
    ```

- **wh_ai_AnimalPoint_MaxSleepingNormalDifferenceDeg**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Maximal angle (in degrees) between terrain normals on back and front checked points, when checking for a sleeping spot.
    ```

- **wh_ai_AnimalPoint_MaxSleepingSlopeDeg**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximal slope (in degrees) between front and back checked point for sleeping.
    ```

- **wh_ai_AnimalPoint_SleepingCheckOffset**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Distance from the NPC origin (in both directions - to front and to back), where terrain is checked when testing spot for sleeping.
    ```

- **wh_ai_AnimalSpawner_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Animal spawner statistics.
    ```

- **wh_ai_AnimalSpawner_MinDespawnDistance**:

  - **Default Value:** `250`

  - **Description:**

    ```text
Animal will not despawn until it is further away from player than this distance.
    ```

- **wh_ai_AreaProximity_FarThreshold**:

  - **Default Value:** `275`

  - **Description:**

    ```text
Distance from area that triggers the callback. Near distance for hysteresis.
    ```

- **wh_ai_AreaProximity_NearThreshold**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Distance from area that triggers the callback. Near distance for hysteresis.
    ```

- **wh_ai_AreaToNavSOAllowedLinkNames**:

  - **Default Value:** `entrance`

  - **Description:**

    ```text
Allowed link tag names for mapping between smart areas and navigation smart objects.
    ```

- **wh_ai_AttrEditWindowSizeX**:

  - **Default Value:** `640`

  - **Description:**

    ```text
Width of the window used to edit all text node attributes.
    ```

- **wh_ai_AttrEditWindowSizeY**:

  - **Default Value:** `480`

  - **Description:**

    ```text
Height of the window used to edit all text node attributes.
    ```

- **wh_ai_AutomaticMNMRebuild**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables automatic rebuilding of nav mesh when a change in level is detected
    ```

- **wh_ai_BehaviorTreeCachePreload**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should the behavior tree cache preload all tree on runtime. 0 - off, 1 - preload in game, 2 - preload in editor too
    ```

- **wh_ai_BehaviorTreeImmediateChildReset**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows immediate child reset for nodes supporting it (sequence, selector):
			0 - off (never reset the child during execution)
			1 - on in game, turned off in editor, Off in configurations with replay tool (default behavior)
			2 - always on
    ```

- **wh_ai_BehaviorTreeRuntimeCacheUnusedTimeout**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Removal timeout for caches with unused objects
    ```

- **wh_ai_BoidReachablePointHorExtent**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Horizontal extent when finding reachable point in the Boid node
    ```

- **wh_ai_BoidReachablePointMaxSearchDistanceMin**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimal value used for max search distance when finding reachable point in the Boid node.
    ```

- **wh_ai_BoidReachablePointMaxSearchEuclidDistanceMult**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Multiplier of euclidean distance between start and target is used as max search distance when finding reachable point in the Boid move
    ```

- **wh_ai_BoidReachablePointVertExtent**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Vertical extent when finding reachable point in the Boid node
    ```

- **wh_ai_BoidTimeoutLODMult**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Timeout multiplier for the Boid node used when NPC is in LOD
    ```

- **wh_ai_BrainMultiSubbBudgetSplitMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Mode for splitting budget among subbrains in multi subbrain brain.
			0 - remaining budget is split among remaning subbrains (if first subbrain takes too long, other subbrains have to compensate).
			1 - incoming budget is split equally before updating and each subbrain will get equal budget
    ```

- **wh_ai_BrainMultiSubbSleep**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allows multi subb brain to report sleeping
    ```

- **wh_ai_ChangeCrouchActionInstantDeferredSuccess**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls if instant version of change crouch action disables the mannequin transitions.
			-1 - feature is disabled (i.e. mannequin transitions are kept enabled)
			0 - feature is enabled (i.e. mannequin transitions are diabled in the action)
			>0 - feature is enabled and the action waits for the selected amount of updates
    ```

- **wh_ai_ChangeStanceActionNoReplanThreshold**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Controls the proximity of the target in which the replan checking is no longer performed!
    ```

- **wh_ai_ChangeStanceActionReplanCloseInterval**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shorter replan checking interval. Used when npc is closer to the end than wh_ai_ChangeStanceActionReplanCloseThreshold
    ```

- **wh_ai_ChangeStanceActionReplanCloseThreshold**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Controls the distance from target when the replanning check is switched to the shorter interval
    ```

- **wh_ai_ChangeStanceActionReplanInterval**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Controls the replan checking interval for Change stance action. When NPC moves by more than interval length, the target is recalculated.
    ```

- **wh_ai_CollisionAvoidanceCandidatesMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Modes for selecting candidates for ORCA. 0 - all agents (i.e. only sorting) 1 - use circular query 2 - use non hidden NPCs
    ```

- **wh_ai_CollisionAvoidanceCircularQueryRadius**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Radius for the circular query used to select potential candidates for collision avoidance participation
    ```

- **wh_ai_CollisionAvoidanceConsistentCandidate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the selection of avoidance velocity that is consistent with one chosen in previous frame
    ```

- **wh_ai_CollisionAvoidanceConsistentCandidatePrevMaxDif**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Maximal dot product difference from previous frame velocity. Candidate velocities pointing further away are not considered for consistent candidate promotion
    ```

- **wh_ai_CollisionAvoidanceFallenActorRadiusExtra**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Added to the radius of obstacles created for fallen actors. Radius used for actors doesn't approximate actors in ragdoll very well
    ```

- **wh_ai_CollisionAvoidanceObstacleTravel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use travel of obstacles created for non moving agents
    ```

- **wh_ai_CollisionAvoidanceObstacleTravelMultiplier**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Multiplier used to scale the obstacle travel
    ```

- **wh_ai_CollisionAvoidanceOutputHalfspace**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the collision avoidance output velocity clamped into the the same halfspace as the ai actor's velocity
    ```

- **wh_ai_CollisionAvoidanceSameFloorThreshold**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Threshold for deciding if two objects in collision avoidance are on the same floor
    ```

- **wh_ai_CollisionAvoidanceSameFloorThresholdMin**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal threshold for deciding if two objects are on the same floor. Used when the objects are within each other radius in XY plane.
		Added to solve cases of one object standing on the other
    ```

- **wh_ai_CollisionAvoidanceShrinkOthersDecreaseRate**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Rate of decreasing the will of going trough borders (and how deep) of obstacle in collision avoidance, when the path is already clear
    ```

- **wh_ai_CollisionAvoidanceShrinkOthersIncreaseRate**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Rate of increasing the will of going trough borders (and how deep) of obstacle in collision avoidance, when there is nowhere to go
    ```

- **wh_ai_CollisionAvoidanceSmoothingDotLimit**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Smoothing limit by dot product between avoidance dir and entity dir. Dot products lower then the limit enables smoothing.
    ```

- **wh_ai_CollisionAvoidanceSmoothingTimeHi**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Time value for smoothing collision avoidance result in high speed - delay after raw result
    ```

- **wh_ai_CollisionAvoidanceSmoothingTimeLow**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Time value for smoothing collision avoidance result in low speed - delay after raw result
    ```

- **wh_ai_CollisionAvoidanceTimeScale**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Time scale used in collision avoidance
    ```

- **wh_ai_CollisionAvoidanceTimeScaleFallback**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Shortened fallback time scale used in collision avoidance
    ```

- **wh_ai_ConditionUpdateOnWrite**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Condition update on write
    ```

- **wh_ai_CrimeSearchingFilteringMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls the filtering node used in GetCrimSearchingPoints node (and in CrimeSearching debug draw).
		0 - Per sector filtering
		1 - Subtract increased ideal point ratio
    ```

- **wh_ai_CrimeSearchingPolyFilteringIdealPointBase**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Controls the base distance for ideal point ratio within the filtering of crime searching points
    ```

- **wh_ai_CrimeSearchingPolyFilteringIdealPointIncrement**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Controls the increment of the base distance for ideal point ration within the filtering of crime searching points. Used when filtering in SubtractIdealPoints mode
    ```

- **wh_ai_CryAIObjectMovementNotifications**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off the notifications from AI Objects into AI system
    ```

- **wh_ai_CryNavigationSystemEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off the updates of Cry navigation system enabled
    ```

- **wh_ai_CryPipeUserUpdateCoverAndSpecial**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off the update of cover and special objects related stuff in CPipeUser
    ```

- **wh_ai_CryPuppetCalculatePriority**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off the computation of AI puppets update priority. When off, the lowest priority is used
    ```

- **wh_ai_CryPuppetUpdateAllParts**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on update of all parts from CPuppet. When off, update of some parts is skipped
    ```

- **wh_ai_CrySmartObjectsEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off Cry SmartObjects.
    ```

- **wh_ai_CrySmartObjectsEntitySystemSinkEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off Cry SmartObjects EventSystemSink notifications.
    ```

- **wh_ai_DataFolder**:

  - **Default Value:** `Libs/AI/`

  - **Description:**

    ```text
Path to the root of AI data files. Intended for backwards compatibility when the location changes
    ```

- **wh_ai_DeltaMovementComputer**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables/disables using the delta rotation computer when generating CMovementRequest for AI objects (in AI proxy)
		0 - disabled
		1 - enabled
		2 - enabled only when the attached entity was recently rendered.
    ```

- **wh_ai_DeltaMovementComputerAlwaysReload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables reloading the params for angle computer within delta movement computer. Intended to use when tuning the database settings.
    ```

- **wh_ai_DeltaMovementComputerDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Level of debug draw for delta movement computer. Works as bit map, thus the values must be added to the value of the cvar.
		0 - off.
		1 - default data for the delta movement computer.
		2 - additional data for forward speed.
		4 - settings for the rotation computer.
		8 - draws the directions.
    ```

- **wh_ai_DeltaMovementComputerDebugDrawName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of entity for debugging of the delta movement
    ```

- **wh_ai_DeltaMovementComputerSurroundingsRapidRecalculationDelta**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Entity movement distance required for surroundings recalculation when using the rapid recalculation
    ```

- **wh_ai_DeltaMovementComputerSurroundingsRapidRecalculationMoveTargetDistanceThreshold**:

  - **Default Value:** `2`

  - **Description:**

    ```text
When distance to move target is below this threshold, surroundings are recalculated more often 
    ```

- **wh_ai_DeltaMovementComputerSurroundingsRecalculateMoveTargetDirectionThreshold**:

  - **Default Value:** `0.99`

  - **Description:**

    ```text
Threshold controlling when the surroundings usage is required. If the dot product between entity forward dir and		direction to move target is above the threshold, the surroundings are not used to limit the logical speed.
    ```

- **wh_ai_DeltaMovementComputerSurroundingsRecalculateMoveTargetDistanceThreshold**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Threshold that control the surroundings recalculation in the delta movement computer. Entity has to move at least		the given distance in order to surroundings to be recalculated
    ```

- **wh_ai_DeltaMovementComputerUseSurroundings**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables using the surroundings information when limiting the speed in delta movement computer.
    ```

- **wh_ai_DetourPolyBoundsCacheSize**:

  - **Default Value:** `256000`

  - **Description:**

    ```text
Size of the cache for detour poly bounds. Use -1 to disable the cache altogether
    ```

- **wh_ai_DetourRayCastEndPointTolerance**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Controls the tolerance used in detour ray cast to compensate for floating point precision when computing intersections between ray and polygons
    ```

- **wh_ai_DetourTileCacheContoursUseZ**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use Z coordinate when searching for tile cache contours.
    ```

- **wh_ai_DetourTileCacheKeepTileBoundaryVertices**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Vertices at tile boundaries are never removed from polys.
    ```

- **wh_ai_DetourTileCacheRemoveVertexTolerance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Tolerance used during final vertex removal in tile cache mesh build. Value is in voxels.
    ```

- **wh_ai_DetourTileCacheTriangulationBetweenTestUseZ**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use z test when determining if a point is in between other 2 points, if all three points are colinear. Used to filter out false positive edge intersections in triangulation
    ```

- **wh_ai_DisableMissingBehaviorErrors**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables errors when a behavior references tree which does't exist
    ```

- **wh_ai_DisableORCAInBattle**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is ORCA disabled during battle game context
    ```

- **wh_ai_DistanceBasedMovementPlanFail**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Number of allowed movement plan fails is not limited but depends on the actual distance of the path
    ```

- **wh_ai_DistanceBasedMovementPlanFailDistance**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Distance between movement plan fails that will result in movement failure
    ```

- **wh_ai_DogPointNpcCourtSniffTimeout**:

  - **Default Value:** `480`

  - **Description:**

    ```text
Timeout for dog NPC court sniffing behavior.
    ```

- **wh_ai_DogPointNpcDrinkTimeout**:

  - **Default Value:** `240`

  - **Description:**

    ```text
Timeout for dog NPC drink (from puddles) behavior.
    ```

- **wh_ai_DogPointNpcMarkTimeout**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Timeout for dog NPC mark behavior.
    ```

- **wh_ai_DogPointNpcSniffTimeout**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Timeout for dog NPC sniff behavior.
    ```

- **wh_ai_DogPointNpcWaterTupDringTimeout**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Timeout for dog NPC tub drinking behavior.
    ```

- **wh_ai_DogPointRecentlyMarkedTimeout**:

  - **Default Value:** `30`

  - **Description:**

    ```text
When point is marked by NPC dog, for this period of time it will be remembered and companions will tend to mark it as well.
    ```

- **wh_ai_DogPointRecentlyUsedTimeout**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Dog point will not be used for this long after being used.
    ```

- **wh_ai_DrawPathFollowerLimitSpeed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw of limit speed param when ai_DrawPathFollower is turned on
    ```

- **wh_ai_EntitySpawnerTimeBudget**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximal amount of time that can be spent spawning and despawning spawned entities (i.e. from random events, animal spawners) per frame, in ms.
    ```

- **wh_ai_ExactPositioningOnFailedMoveTransitionBuffer**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Small buffer used when determining that movement transition won't be played and the exact positioning should be run
    ```

- **wh_ai_FillPathFindingGapWithHistory**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the gap between path finding start and end filled using NPC's movement history
    ```

- **wh_ai_FindPathFleeCostMultiplier**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Cost multiplier for flee path find across forbidden circle
    ```

- **wh_ai_FindPathFleeUseFallbackRawPath**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Is the fallback for using raw path used when the straight path crosses the forbidden cirle
    ```

- **wh_ai_FindPathGeneratedNSOCostDistanceMax**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Distance between path start and path end above which the maximal cost multiplier (wh_ai_FindPathGeneratedNSOCostMultiplierMax) is used
		In between wh_ai_FindPathGeneratedNSOCostDistanceMin and wh_ai_FindPathGeneratedNSOCostDistanceMax the multiplier is interpolated between 
		wh_ai_FindPathGeneratedNSOCostMultiplierMin and wh_ai_FindPathGeneratedNSOCostMultiplierMax
    ```

- **wh_ai_FindPathGeneratedNSOCostDistanceMin**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Distance between path start and path end below which the minimal cost multiplier (wh_ai_FindPathGeneratedNSOCostMultiplierMin) is used
		In between wh_ai_FindPathGeneratedNSOCostDistanceMin and wh_ai_FindPathGeneratedNSOCostDistanceMax the multiplier is interpolated between 
		wh_ai_FindPathGeneratedNSOCostMultiplierMin and wh_ai_FindPathGeneratedNSOCostMultiplierMax
    ```

- **wh_ai_FindPathGeneratedNSOCostMultiplierMax**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal multiplier used in path finding for generated NSO. Tweak to allow avoiding generated NSO when it is reasonable to go around
    ```

- **wh_ai_FindPathGeneratedNSOCostMultiplierMin**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal multiplier used in path finding for generated NSO. Tweak to allow avoiding generated NSO when it is reasonable to go around
    ```

- **wh_ai_FindPathNavPathEndpointsMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls the heuristic used to find end points for navigation using nav paths. 0 - random points, 1 - closest points.
    ```

- **wh_ai_FindPathObstaclesMultiplier**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Distance multiplier that is added as extra cost to the part of paths within obstacles
    ```

- **wh_ai_FindPathShortcutCoef**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
The formula 1+Coef/PathLenghtWhenUsingRoads yields ratio representing maximal euclidean dist multiplier, when roads are allowed to take. Otherwise raw mnm path is be used
    ```

- **wh_ai_FindPathUseObstacles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Include obstacles when computing costs within the nav mesh search
    ```

- **wh_ai_FormationSpineShortcuttingEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables shortcutting of spine for the formation. 0 - disabled, 1 - enabled
    ```

- **wh_ai_FormationSpineShortcuttingStraightLineThreshold**:

  - **Default Value:** `0.95`

  - **Description:**

    ```text
Threshold for considering the points on spine to be in straight line. The value is in cosine of angle.
    ```

- **wh_ai_HelperAnimValidationMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Mode of anim validation used for NPC state actions.
			0 - default, uses precomputed data if available and relevant. If not fallback using runtime checks is used (i.e.the same as for value 1).
			1 - always fallbacks to using the runtime checks 
			2 - always fallbacks to using the KCD1 runtime checks
    ```

- **wh_ai_IgnorePathsWhenDistToPathIsMoreThan**:

  - **Default Value:** `150`

  - **Description:**

    ```text
wh_ai_IgnorePathsWhenDistToPathIsMoreThan
    ```

- **wh_ai_IgnorePathsWhenEuclDistIsLessThan**:

  - **Default Value:** `15`

  - **Description:**

    ```text
wh_ai_IgnorePathsWhenEuclDistIsLessThan
    ```

- **wh_ai_IgnoreShortcutEuclidZMultiplier**:

  - **Default Value:** `11`

  - **Description:**

    ```text
When calculating Euclid dist between start and end when considering path shortcut, this multiplier artificially modify the Z offset. We can achieve large (fake) distance, when traversing hills
    ```

- **wh_ai_IgnoreShortcutWhenEuclidDistIsAtLeast**:

  - **Default Value:** `150`

  - **Description:**

    ```text
In meters. Sometimes path navigationmay fallback to mnm one (see wh_ai_FindPathShortcutCoef), this cvar limits distance when it apply
    ```

- **wh_ai_ItemHandlingActionGenericStoppingDistance**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Controls the stopping distance for item handling NPC state action (pick up, place) when using generic items - i.e. the animation isn't or can't be aligned
    ```

- **wh_ai_LOD_HideBudgetFrameThresholdToDecrease**:

  - **Default Value:** `3`

  - **Description:**

    ```text
If processing all of the pending hide switches would take at most this many frames with current budget, decrease the budget.
    ```

- **wh_ai_LOD_HideBudgetFrameThresholdToIncrease**:

  - **Default Value:** `7`

  - **Description:**

    ```text
If processing all of the pending hide switches would take at least this many frames with current budget, increase the budget.
    ```

- **wh_ai_LOD_HideBudgetMax**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Maximal budget (number of NPCs) to change lod in one update. Used to prevent peaks if too many NPCs change lod at once
    ```

- **wh_ai_LOD_HideBudgetMin**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal budget (number of NPCs) to change lod in one update.
    ```

- **wh_ai_LandSmartAreaTemplateName**:

  - **Default Value:** `sa_land`

  - **Description:**

    ```text
Name of the smart entity template that is considered the land area. Land area is found using this template.
    ```

- **wh_ai_LedgeSOTemplateName**:

  - **Default Value:** `so_nav_ledge`

  - **Description:**

    ```text
Name of the SO template used for generated ledge navigation smart objects
    ```

- **wh_ai_LimitSpeedAboveWalkEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables limit speed for running, sprinting NPCs
    ```

- **wh_ai_LimitSpeedDashBoundary**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Controls the boundary where the logical speed is clamped down to lower
    ```

- **wh_ai_LimitSpeedDirectionCriticalDistance**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Distance in which the influence of direction limit is boosted
    ```

- **wh_ai_LimitSpeedDirectionCurveMaxDeadZone**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Above the value of cvar the curve factor from forward direction is ignored and the speed is not limited.
    ```

- **wh_ai_LimitSpeedDirectionCurveMinDeadZone**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Below this value of cvar the curve factor from forward direction is clamped to minimum.
    ```

- **wh_ai_LimitSpeedDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Controls distance from followed point in which the path limit is applied.
    ```

- **wh_ai_LimitSpeedLookAheadDistance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Distance to look ahead when limiting the movement speed depending on the path
    ```

- **wh_ai_LimitSpeedPathCurveMaxDeadZone**:

  - **Default Value:** `0.96`

  - **Description:**

    ```text
Above this value the curve factor from path is clamped and the speed is not limited
    ```

- **wh_ai_LimitSpeedSprintBoundary**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Controls the boundary where the logical speed is clamped down to lower
    ```

- **wh_ai_LogBodiesFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Comma separated list of bodies that produce log messages. When empty, all bodies are logged.
    ```

- **wh_ai_LoopAnimWaitingTimeLimit**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Controls the limit when the remaning time for loop is considered tolerable and out animations wait until the loop end. Used only for selected action urgencies
    ```

- **wh_ai_MailboxDiscardsOldestMessage**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables FIFO behavior for message inboxes. 
		0 - LIFO (newest messages are not delivered to full mailboxes)
		1 - FIFO (oldest messages are discarded from full mailboxes)
    ```

- **wh_ai_MessageStatisticsCollectInUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces statistics collect in each update. May be performance consuming, use wisely.
    ```

- **wh_ai_MessageStatisticsDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draws the collected message statistics. Uses bit flags:
0 - off
1 - basic draw
2 - message by type
4 - message by intellect
    ```

- **wh_ai_MessageStatisticsDebugDrawOffset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Line offset of the statistics draw
    ```

- **wh_ai_MinPortEditZoomLevel**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
The minimum zoom level at which a double-click on a Graph port will start to edit the port value.
    ```

- **wh_ai_MovementActorAdapterLimitUrgencyFrequency**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Frequence of actually limiting the urgency within the movement actor adapter
    ```

- **wh_ai_MovementActorSleep**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the (partially) passive update of the movement actors
    ```

- **wh_ai_MovementBlockDoorLeaveOpenedPlayerDistanceHor**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Horizontal distance of player (from the door) when the door are left opened. Applied only for door that are public - both navigation end points are not in private area
    ```

- **wh_ai_MovementBlockDoorLeaveOpenedPlayerDistanceVert**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Vertical distance of player (from the door) when the door are left opened. Applied only for door that are public - both navigation end points are not in private area
    ```

- **wh_ai_MovementBlockDoorOpenInMaxDistanceForLateralTest**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Distance for lateral distance test where lateral tolerance is maximal.
    ```

- **wh_ai_MovementBlockDoorOpenInMaxLateralDistance**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Lateral distance tolerance when distance from the door is maximal.
    ```

- **wh_ai_MovementBlockDoorOpenInMinDistanceForLateralTest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Distance for lateral distance test where lateral tolerance is mininal.
    ```

- **wh_ai_MovementBlockDoorOpenInMinLateralDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Lateral distance tolerance when distance from the door is minimal.
    ```

- **wh_ai_MovementBlockDoorOpenInMinRotationDif**:

  - **Default Value:** `0.85`

  - **Description:**

    ```text
Minimal allowed difference of rotation between vector actor->door and rotation of starting point.
    ```

- **wh_ai_MovementBlockDoorOutputDirectionDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Distance on following path that determines output direction.
    ```

- **wh_ai_MovementBlockLadderApproachDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Distance in which the NPC stops and waits when approaching the ladder that can't be yet used
    ```

- **wh_ai_MovementBlockLadderApproachDistanceVariation**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Random component of the distance in which the NPC stops and waits when approaching the ladder that can't be yet used
    ```

- **wh_ai_MovementBlockLadderClimbSpeed**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Climb speed used for NPC climbing the ladders
    ```

- **wh_ai_MovementBlockLedgeAlignBoneOffsetBuffer**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Small buffer added to the align bone offset when delaying the ledge grab in movemen block for ledges.
    ```

- **wh_ai_MovementBlockLedgeUseAlignBoneOffset**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use delaying of the ledge grab base on the align bone offset
    ```

- **wh_ai_MovementSpeedThrottleAlertedWalk**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleDash**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleFastRun**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleModerateDash**:

  - **Default Value:** `0.82`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleModerateSprint**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleRelaxedWalk**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleRun**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleSlowDash**:

  - **Default Value:** `0.55`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleSlowSprint**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleSlowestDash**:

  - **Default Value:** `0.27`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleSprint**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementSpeedThrottleWalk**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text

    ```

- **wh_ai_MovementTaskMovingFarArivalDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Minimum
    ```

- **wh_ai_MovementTaskMovingFarMinimumDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Minimum path lenth to activate MovingFar context during the NPC's movement
    ```

- **wh_ai_MovementTaskRainSpeedUpDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Controls the minimal distance for movement to consider speed up in rain
    ```

- **wh_ai_MovementTaskSkipRequestExactDirectionTolerance**:

  - **Default Value:** `0.995`

  - **Description:**

    ```text
Direction tolerance for skipping the movement altogether. Movement is skipped when request contains exact positioning and NPC is closer to the exact direction then the specified cvar value. Value is in cosine of an angle (i.e. dot product)
    ```

- **wh_ai_MovementTaskSkipRequestExactDistanceTolerance**:

  - **Default Value:** `0.08`

  - **Description:**

    ```text
Distance tolerance for skipping the movement altogether. Movement is skipped when request contains exact positioning and NPC is closer to the exact pos then the specified cvar value. Value is in meters.
    ```

- **wh_ai_MovementTeleportWhenStuck**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Turn on/off the system of automatic teleport when the agent is stuck.
		0 - off
		1 - on, teleports immediately when stuck
		2 - waits with teleport until the actor pos and teleport target are not visible from the camera
    ```

- **wh_ai_NPCBoundaryLayer2**:

  - **Default Value:** `5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCBoundaryLayer3**:

  - **Default Value:** `50`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCBoundaryLayer4**:

  - **Default Value:** `10000`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCContextGameLoadExecuteStateChange**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the change into loaded npc state executed or skipped
    ```

- **wh_ai_NPCContextGameLoadUpdatesBudget**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Budget for the game load updates to get the npc into loaded state. Used as a multiplier of actions count to compute the final budget
    ```

- **wh_ai_NPCContextStateSearchPostProcess**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the post process for NPC state search request from NPC context enabled
    ```

- **wh_ai_NPCDryUpdateMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Mode of executing dry update for NPCs 0 - all NPCs are dry updated, 1 - only registered NPCs are dry updated, 2 - only registered NPCs are update (but extra assert code for validation is executed)
    ```

- **wh_ai_NPCLookTarget**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables NPC look callback
    ```

- **wh_ai_NPCLookTargetDirectionFilter**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Filter to avoid trying to look backwards and other not very natural angles. The value is minimum allowed value of dot product between NPC forward direction and look target position
		Overrides (explicitly given look targets) won't use this filter.
    ```

- **wh_ai_NPCLookTargetDisableAnimVariations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls if anim variations are disabled by the automatically selected NPC look target. 0 - never disabled, 1 - disabled when player is selected as look target
    ```

- **wh_ai_NPCLookTargetDistanceFilterXY**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Filter to avoid trying to look too far (max distance). Used only for the automatic look target selection.
		Overrides (explicitly given look targets) won't use this filter.
    ```

- **wh_ai_NPCLookTargetDistanceFilterZ**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Filter to avoid trying to look too high up or down (e.g. other floor in the building).
		Used only for the automatic look target selection. Overrides (explicitly given look targets) won't use this filter.
    ```

- **wh_ai_NPCLookTargetEyeOffsetMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls the mode how the eye offset is computed for NPC. 0 - using the static value from stance manager, 1 - using the bone position when both the looker and lookee are visible, 2 - always using bone position
    ```

- **wh_ai_NPCLookTargetHistoryTimeOutMax**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximal time of randomized look target history time out
    ```

- **wh_ai_NPCLookTargetHistoryTimeOutMin**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimal time of randomized look target history time out
    ```

- **wh_ai_NPCLookTargetInYourFaceDistanceSQ**:

  - **Default Value:** `6.25`

  - **Description:**

    ```text
Distance of player npc in which the player is considered to be too close to the NPC (i.e. in NPC's comfort zone). The longer minimal looking time is used
    ```

- **wh_ai_NPCLookTargetMinTime**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Minimal time of NPC perception look target to be set. After this time (or after the target is recognized if the recognition takes longer) the look target is ignored. Use negative values for infinite time.
    ```

- **wh_ai_NPCLookTargetMinTimeInYourFace**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Minimal time of NPC perception look target with the InYourFace perceived state. After this time (or after the target is recognized if the recognition takes longer) the look target is ignored. Use negative values for infinite time
    ```

- **wh_ai_NPCLookTargetRandomPointDirectionFilter**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Direction filter for mode 1 of wh_ai_NPCLookTargetUseRandomPoint. The value is minimum allowed value of dot product between NPC forward direction and look target position
    ```

- **wh_ai_NPCLookTargetRandomPointHistoryTimeOutMax**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximal timeout for random generated point used as a NPC look target
    ```

- **wh_ai_NPCLookTargetRandomPointHistoryTimeOutMin**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Minimal timeout for random generated point used as a NPC look target
    ```

- **wh_ai_NPCLookTargetRandomPointMinTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal time spent looking used for random generated point used as a NPC look target. After this time the look target is ignored for a timeout period. Use negative values for infinite time
    ```

- **wh_ai_NPCLookTargetRandomPointPhi**:

  - **Default Value:** `0.392699`

  - **Description:**

    ```text
Phi range used for generating random point as a look target. The poins is generated in [-phi, phi] range
    ```

- **wh_ai_NPCLookTargetRandomPointRadiusMax**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximum radius for generating random point as a look target
    ```

- **wh_ai_NPCLookTargetRandomPointRadiusMin**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimum radius for generating random point as a look target
    ```

- **wh_ai_NPCLookTargetRandomPointTheta**:

  - **Default Value:** `0.785398`

  - **Description:**

    ```text
Theta range used for generating random point as a look target. The point is generated in [-theta, theta] range
    ```

- **wh_ai_NPCLookTargetUseRandomPoint**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Enables using the random generated point as a lowest priority automatic look target
			0 - off
			1 - using generated world coordinates as a look target. May be filtered using	wh_ai_NPCLookTargetRandomDirectionFilter
			2 - using generated local coordinates as a look target. Effectively always looking in a generated direction.
    ```

- **wh_ai_NPCLookTargetUseSpatialFilterForPerceptionTargets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables the spatial filter for look targets taken from perception. For the filtering setting (when enabled) see wh_ai_NPCLookTargetDirectionFilter, wh_ai_NPCLookTargetDistanceFilterXY, wh_ai_NPCLookTargetDistanceFilterZ
    ```

- **wh_ai_NPCMovementRandomThrottle**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Limits the random factor in NPC movement throttle control
    ```

- **wh_ai_NPCNavMeshPosCheckLastPoly**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the optimization that first checks the nav mesh polygon from last update
    ```

- **wh_ai_NPCNavMeshPosRefreshToleranceSQ**:

  - **Default Value:** `0.0625`

  - **Description:**

    ```text
Squared distance for which the npc must move to refresh the nav mesh position.
    ```

- **wh_ai_NPCNavMeshPosUpdateBudget**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Number of NPCs for which the nav mesh position is update in each frame
    ```

- **wh_ai_NPCPriorityBoostSchedulerActivityHighThreshold**:

  - **Default Value:** `24`

  - **Description:**

    ```text
Threshold value for assigning budget boost (into layer 1) to NPCs with activity priority equal to or above this threshold. The budget is assigned if the NPC is executing the activity, has upcoming result or has scheduled interrupt.
    ```

- **wh_ai_NPCPriorityBoostSchedulerActivityLowThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Threshold value for assigning budget boost (into layer 2) to NPCs with activity priority equal to or above this threshold. The budget is assigned if the NPC is executing the activity, has upcoming result or has scheduled interrupt.
    ```

- **wh_ai_NPCPriorityLayerBoostSchedulerActivityDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Distance in which NPCs boosted by the priority of scheduler activity are boosted even further to highest layer
    ```

- **wh_ai_NPCPriorityLayerHysteresis**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Hysteresis used when assigning NPCs to the update priority layers
    ```

- **wh_ai_NPCStateActionSubsequentPathFindDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Max search distance used in path finding when trying to find the action's subsequent path
    ```

- **wh_ai_NPCStateActionSubsequentPathLength**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Lenght of the subsequent path found in NPC state action post process
    ```

- **wh_ai_NPCStateActionSubsequentPathReachableTest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should the reachable test be executed in order to use the action's subsequent path for actual movement?
    ```

- **wh_ai_NPCStateActionSubsequentPathReachableTestTolerance**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Tolerance used when testing if the subsequent path is reachable
    ```

- **wh_ai_NPCStateActionSubsequentPathShortTrendLength**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Length of the subsequent path included when computing the short (or immediate) path trend
    ```

- **wh_ai_NPCStateActionSubsequentPathTrendLength**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Length of the subsequent path included when computing the trend
    ```

- **wh_ai_NPCStateAnimActionNameAligned**:

  - **Default Value:** `AlignedAnimAction`

  - **Description:**

    ```text
Name of the action that is used for the aligned animations.
    ```

- **wh_ai_NPCStateAnimActionNameNoMovement**:

  - **Default Value:** `NonAlignedAnimAction`

  - **Description:**

    ```text
Name of the action that is used for the non aligned animations.
    ```

- **wh_ai_NPCStateSearchActiveRequests**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of requests being processed in parallel.
    ```

- **wh_ai_NPCStateSearchActiveRequestsPostLoad**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Number of requests being processed in parallel used when post load budgets are enabled.
    ```

- **wh_ai_NPCStateSearchCenterPosMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Mode of the center position for sorting the priority queue of the requests.
		0 - default mode - center position depents on the wh_ai_ObserverAdapterMode value
		1 - player observer's position
		2 - camera observer's position
    ```

- **wh_ai_NPCStateSearchCenterPosThresholdSQ**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Squared distance threshold for updating the center position
    ```

- **wh_ai_NPCStateSearchImmediateSuccessEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the immediate success request processing.
    ```

- **wh_ai_NPCStateSearchSliceUpdateCount**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Number of internal updates used in each sliced update.
    ```

- **wh_ai_NPCStateSearchSliceUpdateCountPostLoad**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Number of internal updates used in each sliced update used when post load budgets are enabled.
    ```

- **wh_ai_NPCStateSearchUpdatesLimit**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Limit for allowed internal update per NPC state search. Each search must be completed within this limit.
    ```

- **wh_ai_NPCStateSearchUsePostLoadBudgets**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the usage of different (larger) budgets in post load and related situations allowed
    ```

- **wh_ai_NPCStateUnstanceDatabaseUseGenericFastOuts**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables the usage of generic animations as unstance outs. Reguires restart or script reload after changed
    ```

- **wh_ai_NPCUpdateBudgetLowerBound**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateBudgetRatioLayer0**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateBudgetRatioLayer1**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateBudgetRatioLayer2**:

  - **Default Value:** `0.27`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateBudgetRatioLayer3**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateBudgetRatioLayer4**:

  - **Default Value:** `0.11`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountAdditionLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountAdditionLayer1**:

  - **Default Value:** `5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountAdditionLayer2**:

  - **Default Value:** `15`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountAdditionLayer3**:

  - **Default Value:** `25`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountAdditionLayer4**:

  - **Default Value:** `180`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountLayer0**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountLayer1**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountLayer2**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountLayer3**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateCountLayer4**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateFixedBudget**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateJobBudgetLayer0**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateJobBudgetLayer1**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateJobBudgetLayer2**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateJobBudgetLayer3**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateJobBudgetLayer4**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer1**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer2**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer3**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetAdditionLayer4**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetLayer1**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetLayer2**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetLayer3**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateMinimalBudgetLayer4**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdateNonMasterBudgetLowerBoundMultiplier**:

  - **Default Value:** `1.6`

  - **Description:**

    ```text

    ```

- **wh_ai_NPCUpdatePostLoadBudget**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Budget used for each layer during post load reconstruction
    ```

- **wh_ai_NPCUpdatePostLoadJobBudget**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Per job budget used during post load reconstruction
    ```

- **wh_ai_NavMeshInUserData**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Saves the tile cache file into the user data
    ```

- **wh_ai_NavigationElementPathSideOffsetMult**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Multiplier when using the side offest -1.0f using the right side, 1.0 - using the left side
    ```

- **wh_ai_NavigationRequestCutterDensity**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Sampling density for the navigation request cutter
    ```

- **wh_ai_NavigationRequestCutterEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables cutting the start of navigation request when movement history is prepended
    ```

- **wh_ai_NavigationRequestCutterLookAhead**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Maximal look ahead distance where navigation requsted is cut
    ```

- **wh_ai_NavigationRequestCutterPointDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximum distance from NPC where the sampling point must be from the NPC pos
    ```

- **wh_ai_NavigationRequestCutterSegmentMinLenght**:

  - **Default Value:** `1e-05`

  - **Description:**

    ```text
Minimal lenght limit for segment. Avoids division by small numbers or even zero
    ```

- **wh_ai_NonCircleCollisionAvoidance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use non circle shapes in collision avoidance
    ```

- **wh_ai_ObserverAdapterMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Master switch for ai observer mode. Used when the user's override mode is left to default.
		0 - default observer
		1 - player observer
		2 - camera observer
    ```

- **wh_ai_ObstaclesAddToCollisionAvoidance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Add static obstacles to the collision avoidance. 0 - no, 1 - yes
    ```

- **wh_ai_OverrideMNM**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Recast navmesh and detour pathfinding are used in the movement.
    ```

- **wh_ai_OverrideMovementSpeed**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Override NPCs movement speed control. Plugs the RPG into the movement
    ```

- **wh_ai_PathDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for roads
    ```

- **wh_ai_PathDebugDrawSegmentSize**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Segment size for debugging the roads
    ```

- **wh_ai_PathFinderAdditionalUpdateThresholdDefault**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderAdditionalUpdateThresholdHigh**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderAdditionalUpdateThresholdPathsOnly**:

  - **Default Value:** `60`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderAdditionalUpdateThresholdReachablePoint**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderCenterPosChangeThresholdSQ**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Squared threshold for recomputation of distances to prioritize the path finding requests
    ```

- **wh_ai_PathFinderCenterPosMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls the mode to get center position for path finder (and thus controls the sorting of path finding requests)
		0 - uses default - the observer depends on wh_ai_ObserverAdapterMode value 
		1 - uses player observer's position
		2 - uses camera observer's position
    ```

- **wh_ai_PathFinderEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Disables the pathfinding. Used for debug only!
    ```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsDefault**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsHigh**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsPathsOnly**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPostLoadBudgetPrioritySlotsReachablePoint**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPostLoadBudgetUpdateCountMultiplier**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Multiplier of updates count for each request when enlarged budgets are applied.
    ```

- **wh_ai_PathFinderPriorityPromotionThresholdDefault**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPriorityPromotionThresholdHigh**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPriorityPromotionThresholdPathsOnly**:

  - **Default Value:** `30`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPriorityPromotionThresholdReachablePoint**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPrioritySlotsDefault**:

  - **Default Value:** `8`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPrioritySlotsHigh**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPrioritySlotsPathsOnly**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderPrioritySlotsReachablePoint**:

  - **Default Value:** `4`

  - **Description:**

    ```text

    ```

- **wh_ai_PathFinderReuseFreeBudgetLimit**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Maximum number of updates used from free update slot
    ```

- **wh_ai_PathFindingBlockPathSearchExpectedNodesCount**:

  - **Default Value:** `25000`

  - **Description:**

    ```text
Expected count of the nodes withing the path graph. Used to initialize containers
    ```

- **wh_ai_PathFindingRequestSortingPenalty**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Penalty distance added for each accumulated failed path finding request
    ```

- **wh_ai_PathFollowResultSmootherDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draws the path follow result smoother
    ```

- **wh_ai_PathFollowResultSmootherDistToEndThreshold**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Distance to path end threshold for path follower results smoother. If AI is closer to the end than this threshold
		there will be no smoothing.
    ```

- **wh_ai_PathFollowResultSmootherEndDirThreshold**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Dot product threshold between body dir and direction to move target thet ENDS the smoothing. Once started when dot product,
		raises above this threshold, the smoothing will stop
    ```

- **wh_ai_PathFollowResultSmootherMinSpeedThreshold**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Speed threshold for smoothing of the path follower results. When the actual velocity of the AI is below the threshold 
		there will be no smoothing.
    ```

- **wh_ai_PathFollowResultSmootherOppositeSideThreshold**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Threshold to stabilize the smoothed direction when body direction and target direction are almost opposite.
		If the dot product of smoothed dir and smoothed dir from last frame is below this threshold, the new smoothed dir
		will be adjusted
    ```

- **wh_ai_PathFollowResultSmootherStartDirThreshold**:

  - **Default Value:** `-0.1`

  - **Description:**

    ```text
Dot product threshold between body dir and direction to move target that STARTS the path follow result smoothing
		Dot product lower than this threshold will be smoothed. Set the cvar to lower than -1.0 to disable the smoothing altogether.
		The smoothing only happens for run and faster speeds.
    ```

- **wh_ai_PathFollowResultSmootherStartSpeedLimitDirThreshold**:

  - **Default Value:** `-0.1`

  - **Description:**

    ```text
Dot product threshold to start gradually limiting the speed
    ```

- **wh_ai_PathFollowerEndBodyDirDist**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Distance at the end of the path in which path follower sets end body direction
    ```

- **wh_ai_PathGridDebugDrawMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug draw mode for path manager grid
    ```

- **wh_ai_PathGridStatsDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draws the statistics for path manager grid. Computes statistics in every frame and may be slow
    ```

- **wh_ai_PathMaxConnectionLength**:

  - **Default Value:** `3.4`

  - **Description:**

    ```text
wh_ai_PathMaxConnectionLength
    ```

- **wh_ai_PathMaxConnectionLengthOffmesh**:

  - **Default Value:** `2`

  - **Description:**

    ```text
wh_ai_PathMaxConnectionLengthOffmesh
    ```

- **wh_ai_PathStraightForDashCheckDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draws the information for checking the straightness of the path ahead. 0 - disabled (default), 1 - enabled
    ```

- **wh_ai_PathStraightForDashCheckDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Distance threshold for reevaluating the path ahead to determine if it is straight enough to use Dash speed
    ```

- **wh_ai_PathStraightForDashFullDistanceRequired**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is it required to reach the end of distance when checking the straightness of a path.
		Effectively it means that at the end of a path the dash will be limited.
    ```

- **wh_ai_PathUseOldHeuristic**:

  - **Default Value:** `0`

  - **Description:**

    ```text
wh_ai_PathUseOldHeuristic
    ```

- **wh_ai_PathfindingAutoAllowedSmartObjects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use only the auto allowed smart object - the ones linked to the source or target area (or their parent areas)			0 - use all smart objects			1 - use auto allowed smart objects
    ```

- **wh_ai_PathfindingIgnoreIncludeFlags**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 - paths and  navigation smart objects are included, depending on path finding params in the specified variable		1 - ignores the pathfidning params variable and excludes the paths and navigation smart object from pathfinding.		2 - disables the second path finding attemp with generated NSO
    ```

- **wh_ai_PlayerHorseSchedulerProxy**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of entity to be used as player's horse's scheduler proxy.
    ```

- **wh_ai_PlayerSchedulerProxy**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of entity to be used as player's scheduler proxy.
    ```

- **wh_ai_PlayerStateHandlerCameraLimitHorizontalDeg**:

  - **Default Value:** `75`

  - **Description:**

    ```text
Default value for horizontal camera limit used in player state handler
    ```

- **wh_ai_PlayerStateHandlerCameraLimitVerticalMaxDeg**:

  - **Default Value:** `70`

  - **Description:**

    ```text
Default value for maximal vertical camera limit used in player state handler
    ```

- **wh_ai_PlayerStateHandlerCameraLimitVerticalMinDeg**:

  - **Default Value:** `-75`

  - **Description:**

    ```text
Default value for minimal vertical camera limit used in player state handler
    ```

- **wh_ai_PlayerStateHandlerFreeSpotForPlayerInterruptPriority**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Priority of interrupt scheduled to NPC blocking the minigame for player
    ```

- **wh_ai_PositioningDurationWarningThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Duration of the NPC positioning (teleport/fastforward) to be considered suspiciously long.
    ```

- **wh_ai_PostLoadBudgetsInPrecacheMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables enlarged (post load) budgets during precache mode. The budgets are enlarged only for selected subsystems
    ```

- **wh_ai_PostLoadBudgetsInSkipTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables enlarged (post load) budgets during precache mode. The budgets are enlarged only for selected subsystems
    ```

- **wh_ai_PreferClosesPathOverRaycastedIfXTimesCloser**:

  - **Default Value:** `2`

  - **Description:**

    ```text
wh_ai_PreferClosesPathOverRaycastedIfXTimesCloser
    ```

- **wh_ai_RepeatedRayCastOffMeshTolerance**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Controls the tolerance used when raycasting towards an off mesh connection point.
		Tolerance allows the hits to be interpreted as no hits (when hit is within the tolerance from the end point).
    ```

- **wh_ai_SituationGameTimeMinInterval**:

  - **Default Value:** `3000`

  - **Description:**

    ```text
Minimal interval between the participation in situations in game time. Practically min value of the cooldown
    ```

- **wh_ai_SituationInterruptPriority**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Priority used for the situation interrupts passed to NPC scheduler
    ```

- **wh_ai_SituationInterruptUrgency**:

  - **Default Value:** `Slow`

  - **Description:**

    ```text
Urgency used for situation interrupts.
    ```

- **wh_ai_SituationManagerSearchBudget**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximal budget in search steps during one update
    ```

- **wh_ai_SituationSubsystemDebugDraw**:

  - **Default Value:** ``

  - **Description:**

    ```text
Debug draw of the NPC's situation subsystem. Set name of the NPC as value to draw.
    ```

- **wh_ai_SituationWorldTimeMinInterval**:

  - **Default Value:** `120000`

  - **Description:**

    ```text
Minimal interval between the participation in situations in world time. Practically min value of the cooldown
    ```

- **wh_ai_SkipTimeJobBudgetMultiplier**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Multiplier of job budget skip time
    ```

- **wh_ai_SkipTimeLayerBudgetMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier of layer budget during skip time
    ```

- **wh_ai_SkipTimePathFindingBudgetMultiplier**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Pathfinding budget multiplier during skip time
    ```

- **wh_ai_SkipTimeUpdateMinimalCountAdditionMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier used for additional count added to the minimal update count within layer during skip time
    ```

- **wh_ai_SkiptTimeLayerBudgetAdditionMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier of layer budget extra addition during skip time
    ```

- **wh_ai_SmartAreaUpdateBudgetLowerBound**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateBudgetRatioLayer0**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateBudgetRatioLayer1**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateBudgetRatioLayer2**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateCountAdditionLayer0**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateCountAdditionLayer1**:

  - **Default Value:** `4`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateCountAdditionLayer2**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateCountLayer0**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateCountLayer1**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateCountLayer2**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateFixedBudget**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateJobBudgetLayer0**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateJobBudgetLayer1**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateJobBudgetLayer2**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateMinimalBudgetAdditionLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateMinimalBudgetAdditionLayer1**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateMinimalBudgetAdditionLayer2**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateMinimalBudgetLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateMinimalBudgetLayer1**:

  - **Default Value:** `0.21`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateMinimalBudgetLayer2**:

  - **Default Value:** `0.49`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdateNonMasterBudgetLowerBoundMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartAreaUpdatePostLoadBudget**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Budget used for each layer during post load reconstruction
    ```

- **wh_ai_SmartAreaUpdatePostLoadJobBudget**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Per job budget used during post load reconstruction
    ```

- **wh_ai_SmartObjectBoundaryLayer1SQ**:

  - **Default Value:** `625`

  - **Description:**

    ```text
Boundary distance for smart object priority. Value is squared distance
    ```

- **wh_ai_SmartObjectBrainLoadOptimization**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Doesn't load the brains without any logic for smart objects
    ```

- **wh_ai_SmartObjectDatabaseLoadValidAnimations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Are the valid animations loaded into smart object animations database. 0 - not load, only invalid results are loaded. 1 - all animation results are loaded
    ```

- **wh_ai_SmartObjectDatabaseSaveValidAnimations**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Are the valid animations saved into smart object animations database. 0 - do not save, only invalid results are saved. 1 - all animation results are saved
    ```

- **wh_ai_SmartObjectHelpers_DrawHelperValidityPerActorClass**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Displays the actor class names with helper name in helper animations debug draw
    ```

- **wh_ai_SmartObjectPriorityLayerHysteresisSQ**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Hysteresis used when sorting the smart object into priority layers. Value is squared distance
    ```

- **wh_ai_SmartObjectUpdateAll**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Updates all smart objects or skips the smart objects without any internal logic
    ```

- **wh_ai_SmartObjectUpdateBudgetLowerBound**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateBudgetRatioLayer0**:

  - **Default Value:** `-1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateBudgetRatioLayer1**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateBudgetRatioLayer2**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateCountAdditionLayer0**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateCountAdditionLayer1**:

  - **Default Value:** `4`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateCountAdditionLayer2**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateCountLayer0**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateCountLayer1**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateCountLayer2**:

  - **Default Value:** `2`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateFixedBudget**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateJobBudgetLayer0**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateJobBudgetLayer1**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateJobBudgetLayer2**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateMinimalBudgetAdditionLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateMinimalBudgetAdditionLayer1**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateMinimalBudgetAdditionLayer2**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateMinimalBudgetLayer0**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateMinimalBudgetLayer1**:

  - **Default Value:** `0.21`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateMinimalBudgetLayer2**:

  - **Default Value:** `0.49`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdateNonMasterBudgetLowerBoundMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_SmartObjectUpdatePostLoadBudget**:

  - **Default Value:** `250`

  - **Description:**

    ```text
Budget used for each layer during post load reconstruction
    ```

- **wh_ai_SmartObjectUpdatePostLoadJobBudget**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Per job budget used during post load reconstruction
    ```

- **wh_ai_SmartPathFollowerShortcuttingLimitedDistance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal tolerated distance between the path follower position and the look ahead position when limited short cutting is used
    ```

- **wh_ai_StuckDetectionAllowAnyMovement**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Stuck detection allows any movement (not only advancing along the path
    ```

- **wh_ai_SubsystemBudgetsDurationSmoother**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Smoother value for computing the smoothed duration within subsystem budgets. Values from [0,1) range. 
		0 - non smoothed, 1 - would always use last smoothed value.
    ```

- **wh_ai_SubsystemBudgetsFixedRenderDurationMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Interprets the value of wh_ai_SubsystemBudgetsFixedRenderDurationMs
		0 - off - always use the actual render duration
		1 - fixed - always use wh_ai_SubsystemBudgetsFixedRenderDurationMs as render duration
		2 - cap - use wh_ai_SubsystemBudgetsFixedRenderDurationMs as upper limit on render duration
    ```

- **wh_ai_SubsystemBudgetsFixedRenderDurationMs**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Cvar value controlling the perceived render duration. See also wh_ai_SubsystemBudgetsFixedRenderDurationMode
    ```

- **wh_ai_SubsystemBudgetsRenderRatio**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Ratio used to compute available budget according to render. Ratio creates a small safety buffer not to exceed render time
    ```

- **wh_ai_TeleportBehaviorName**:

  - **Default Value:** `teleport`

  - **Description:**

    ```text
Name of smart behavior that will be used for scheduler interrupt during NPC teleport.
    ```

- **wh_ai_TeleportToPlayerInterruptPriority**:

  - **Default Value:** `255`

  - **Description:**

    ```text
Priority of the interrupt that teleports (horse) to the player
    ```

- **wh_ai_TileCacheAsBuildBuffer**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Use tile cache only during building nav mesh. In that case, the tile cache is initialized with minimal tile count.		The Value of cvar is used as the number of tiles in buffer. If 0 full tile cache is used
    ```

- **wh_ai_TooltipZoomThreshold**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
The zoom level at which the MBT nodes will start to display their tooltips. The nodes will always display their tooltips when zoomed out so far that their representation is switched to an icon.
    ```

- **wh_ai_TrackDisabledAIActors**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Keeps track of disabled AI actors
    ```

- **wh_ai_TreeUpdaterUpdatesPerFrame**:

  - **Default Value:** `5`

  - **Description:**

    ```text

    ```

- **wh_ai_TurnNodeIgnoreThresholdRad**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Skip turn body threshold. For small angles (below this threshold value) the turn body is skipped altogether.
		Normally the value 'minimumAngleForTurnWithoutDelay' from actor's params i used. The value of this cvar is used as a lower bound to clamp the value
		from actor params
    ```

- **wh_ai_TurnNodeThresholdRad**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Value controlling the internal precission threshold within Turn node. Value 0.2 corresponds with roughly 11 degrees when tolerance in node attribute is 0.
    ```

- **wh_ai_TurnTowardsPositionMinimalCorrectTime**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Minimal required time of correct NPC direction after which the TurnTowardsPosition movement block succeeds
    ```

- **wh_ai_TurnTowardsPositionTimeout**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Timouet for TurnTowardsPosition movement block. If the NPC doesn't have correct direction after the timout period, the movement block fails
    ```

- **wh_ai_TurnTowardsPositionTolerance**:

  - **Default Value:** `17`

  - **Description:**

    ```text
Tolerance (in degrees) when the NPCs direction is considered correct within the TurnTowardsPosition movement block
    ```

- **wh_ai_UnstanceInActionNoReplanThreshold**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Threshold for disabling the replaning in Unstance in action
    ```

- **wh_ai_UnstanceInActionReplanCloseInterval**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Shored replan internal for Unstance in action
    ```

- **wh_ai_UnstanceInActionReplanCloseThreshold**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Distance in which the shorter replan interval is applied for Unstance in action
    ```

- **wh_ai_UnstanceInActionReplanInterval**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Controls the replan checking internval for Unstance in action.
    ```

- **wh_ai_UpdateEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls XGenAI module update. 1 - on, 0 - off, negative values - number of updates being incremented until 0 is reached (can be used for stepping one update at a time using value -1)
    ```

- **wh_ai_UpdateSuspenderEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables update suspension during profile steaming
    ```

- **wh_ai_UseBehaviorTreeCache**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is cache for loading behavior trees used. 0 - unused, 1 - used.
    ```

- **wh_ai_UseEdgeCrossingPrediction**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Uses crossing between edge and line segment to the endpoint as the enter point instead of mid edge point.
    ```

- **wh_ai_ZoomOnBreakpointHits**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Set to 1 to center and zoom the Tree Editor view around the node when its breakpoint is hit (default); set to 0 to disable.
    ```

- **wh_ai_informationBroadcastFactionLabel**:

  - **Default Value:** `settlement`

  - **Description:**

    ```text
All members of a faction subtree with this label will share information periodically.
    ```

- **wh_ai_pathSlicedDebugCurrentIterationCount**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Current number of iteration when new debug sliced query is performed
    ```

- **wh_ai_pathSlicedDebugEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables sliced debug query, pathfind is stoped after x iterations
    ```

- **wh_ai_pathSlicedDebugNextIterations**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Performs new pathfind query, which has 'CurrentIterationCount' + arg iterations
    ```

- **wh_ai_perception_bypass_rpg**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set recognition speed for everyone to 0.5
    ```

- **wh_ai_perception_cone_bias_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable a logarithmic 'spring' that pulls view direction towards body direction.
    ```

- **wh_ai_perception_cone_bias_log_base**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Bias angle of head direction from body direction through logarithm of this base.
    ```

- **wh_ai_perception_cone_hysteresis**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Symmetric tolerance for crossing from the inner to the outer cone and vice versa. Set to 0 to cross the border immediately (not recommended).
    ```

- **wh_ai_perception_enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ai_perception_ignore_fov_cylinder_back_section_deg**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Angular size of peripheral vision Pacman -- the complement is where NPCs don' see
    ```

- **wh_ai_perception_ignore_fov_cylinder_height**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Peripheral vision Pacman is actually a cylinder
    ```

- **wh_ai_perception_ignore_fov_cylinder_weight_direction**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Weight the direction of peripheral vision Pacman between head (0) and body (1)
    ```

- **wh_ai_perception_ignore_fov_radius**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Radius of peripheral vision Pacman -- perceive in immediate vicinity
    ```

- **wh_ai_perception_jobs_per_frame**:

  - **Default Value:** `7`

  - **Description:**

    ```text

    ```

- **wh_ai_perception_lod_enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Must not be changed at runtime
    ```

- **wh_ai_perception_perceived_states_parallel_update**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables parallel update of perceived states
    ```

- **wh_ai_perception_perceived_states_parallel_update_size**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Set number of objects in a job
    ```

- **wh_ai_perception_recognizing_threshold**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Add perception threshold of this level to everyone with crimeEnableRecognizingThreshold context.
    ```

- **wh_ai_perception_target_filtering_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Eliminate targets that are not interesting right at the start.
    ```

- **wh_ai_schedulerExplicitInterruptWarningPriorityThreshold**:

  - **Default Value:** `200`

  - **Description:**

    ```text
When the current activity is interrupted explicitly, if it had this or higher priority, warning is produced.
    ```

- **wh_ai_schedulerInvalidSearchTimeout**:

  - **Default Value:** `300000`

  - **Description:**

    ```text
Timeout after an unsuccessful search in scheduler [ms world time].
    ```

- **wh_ai_scheduler_SkipBehaviorNearCorpseMaxPriority**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Maximum top-level priority of links, that are disabled when a corpse is nearby.
    ```

- **wh_ai_scheduler_SkipOnFailMaxPriority**:

  - **Default Value:** `9`

  - **Description:**

    ```text
Maximum top-level priority of scheduler result, where behavior is skipped once when it failed.
    ```

- **wh_ai_suppressAddingActorsIntoCryAI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
don't change at runtime
    ```

- **wh_ai_triggerAreas_debugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 to draw all areas
2 to highlight areas with player presence
3 to draw trespass labeled areas only
    ```

- **wh_ai_validatePathsOnMnmOnProfileSwitch**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Should validate paths on mnm, can be costly!
    ```

- **wh_ai_z_axis_diff_lower**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Z-axis Difference functionality used for AI sounds. Lower bound of the linear slope from min to max attenuation.
    ```

- **wh_ai_z_axis_diff_upper**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Z-axis Difference functionality used for AI sounds. Upper bound of the linear slope from min to max attenuation.
    ```

- **wh_al_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Alignment debug draw
    ```

- **wh_al_DisableAlignment**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables alignment in combat.
    ```

- **wh_al_DisableGroundAlignment**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables ground alignment in combat.
    ```

- **wh_al_GroundAlignmentFade**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Ground alignment fadeout in case of interruption
    ```

- **wh_al_GroundAlignmentMaxAngle**:

  - **Default Value:** `0.872665`

  - **Description:**

    ```text
Maximal angle for ground alignment.
    ```

- **wh_al_PosAlignment_AdaptiveInterruptionThreshold**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Max allowed movement error preventing alignment positioning - (collisions).
    ```

- **wh_al_PosAlignment_EndStifness**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Stifness of spring at the end of blend - it's the 'lag time', how many seconds actor lags behind target.
    ```

- **wh_al_PosAlignment_Interruption**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables possition alignmnet interruption when opponent is moving away.
    ```

- **wh_al_PosAlignment_InterruptionDistance**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Error distance limit defining possition alignmnet interruption when opponent is moving away.
    ```

- **wh_al_PosAlignment_InterruptionMinDistance**:

  - **Default Value:** `0.45`

  - **Description:**

    ```text
Min pos error allowing alignmnet interruption when opponent is moving away.
    ```

- **wh_al_PosAlignment_ModeBlendTime**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Time of blend between alignment modes - alignemnt by attacker, by defender, static, etc.
    ```

- **wh_al_PosAlignment_RatioStifness**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Stifness of spring for ratio between actor-opponent during combined alignment.
    ```

- **wh_al_PosAlignment_StartStifness**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Stifness of spring at the start of blend - it's the 'lag time', how many seconds actor lags behind target.
    ```

- **wh_al_PosCombinedAlignment_EndStifness**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Stifness of spring at the end of blend - it's the 'lag time', how many seconds actor lags behind target.
    ```

- **wh_al_PosCombinedAlignment_InterruptionFrames**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Number of frames which combatants can be blocked during combined alignment.
    ```

- **wh_am_AnimationControllerManagerUpdateAll**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Force update of all registered controllers. Regardless of the actual pre physics update duration!
			0 - do not force update all
			1 - force update all controllers during skiptime
			2 - force update all controllers (at all times)
    ```

- **wh_am_AnimationControllerManagerUpdateEndsBeforeStartAnimProc**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Force update of all registered controller during skiptime. Regardless of the actual pre physics update duration!
    ```

- **wh_am_BoneCameraDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws collision primitives for each camera of BoneCameraSelector (3rd person camera used in herb picking etc.)
Colliding are red, non-colliding in green.
    ```

- **wh_am_CCDFPS**:

  - **Default Value:** `800`

  - **Description:**

    ```text
CCD frame rate.
    ```

- **wh_am_CCDPredCoef**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Angular forces coefficient
    ```

- **wh_am_CCDPredLength**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Prediction overlook.
    ```

- **wh_am_DebugAttachments**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug attachments position
    ```

- **wh_am_DebugAttachmentsFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
filter for wh_am_DebugAttachments
    ```

- **wh_am_DebugCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug collisions
    ```

- **wh_am_DebugHandIK**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug hand ik in AnimatedHuman
1: left hand
2: right hand
3: both hands
    ```

- **wh_am_DebugHandIKMode**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Debug hand ik mode
1: IK target positions
2: actual positions
3: both
    ```

- **wh_am_DrawCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for collisions
    ```

- **wh_am_DrawIntersections**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for intersections
    ```

- **wh_am_ForceCCD**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force continuous collision detection.
    ```

- **wh_am_JointPoseMorphDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for joint-based morphs (facial animation)
.  Respects ca_FilterJoints.
    ```

- **wh_am_LOD_Debug**:

  - **Default Value:** ``

  - **Description:**

    ```text
Debug animation controller and anim LODs for given entities (comma separated)
    ```

- **wh_am_LOD_ForceEmitAllAnimEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces to emit all anim events. Not just important for lod
    ```

- **wh_am_LOD_LocatorPeriodicalUpdate**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Time period for updating estimated entity location
    ```

- **wh_am_LOD_Test**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Test animation controller
    ```

- **wh_ansel_enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Master switch of Nvidia Ansel
    ```

- **wh_autoDemo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
WH[JM]: Cvar for automated profiling. If set to 1, automatically starts time demo without user interaction after the game starts (from the main menu).
    ```

- **wh_boid_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables boid debug draw.
    ```

- **wh_boid_KillAngle**:

  - **Default Value:** `0.89`

  - **Description:**

    ```text
Dot product tolerance which enable to murder a boid.
    ```

- **wh_boid_KillDistance**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
SQ Distance to boid to enable murder.
    ```

- **wh_boid_MaxDistFromPlayerForRaycasts**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Only allow boids shooting raycasts for obstacle avoidance if the boid is at least this close to player.
    ```

- **wh_boid_RatScareTime**:

  - **Default Value:** `4`

  - **Description:**

    ```text
If a rat was scared for longer than this time, it will hide. If it is not scared, accumulated time goes linearly down again.
    ```

- **wh_boid_RoosterCrowTimeEnd**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Time of day, when roosters stops crowing.
    ```

- **wh_boid_RoosterCrowTimeStart**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Time of day, when roosters starts crowing.
    ```

- **wh_bridle_DebugInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows horse briddle debug info
    ```

- **wh_ca_AnimationComputationJobBatchSize**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Sets the size of job batches that are used for animation calculations
    ```

- **wh_ca_BlendSimulationDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables text debug draw for blending of simulation (pendula, vcloth)
    ```

- **wh_ca_CacheSkinValidation**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Caches result of skin LOD test (msg. 'LOD0 and LOD1 have different bones'), reduces log spamming
    ```

- **wh_ca_CharStreamLodAll**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces all LODs to be streamed in.
    ```

- **wh_ca_CharStreamLodOverride**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Force only the specified LOD (or the closest available) to be streamed in. Disabled with -1
    ```

- **wh_ca_ClothBudgetAdaptivePriority**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When enabled, priority cutoff for vcloth budgeting (see wh_ca_ClothDefaultPriorityCutoff) 
will be adapted each frame based on whether there was time left in the frame within which VCloth can be simulated without stalling main thread
    ```

- **wh_ca_ClothBudgetAdjustmentPerFrame**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Budget cutoff is increased by this per frame if CommandBuffer computation stalled main thread or  decreased by this if it did not stall and some vcloths were skipped because of low budget last frame.
    ```

- **wh_ca_ClothBudgetDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for VCloth budgeting. Bitwise - sum them to turn on multiple modes:
1 - draws histogram of vcloths based on how many frames each of them skipped. Only shows VCloth with simulation enabled
2 - averages over the last 50 frames how many each vcloth skipped
 and renders a sphere that is: Red if none skipped, Blue if all of them, interpolated in between.
4 - draws bounding boxes used for determining size on screen, along with screen percentage they cover and vcloth's priority
(last non-max, the priority is in grey when maximum priority is assigned this frame)
    ```

- **wh_ca_ClothBudgetDefaultPriorityCutoff**:

  - **Default Value:** `0`

  - **Description:**

    ```text
VCloths with priority less than cutoff will not be fully simulated.
    ```

- **wh_ca_ClothBudgetIncreaseBudgetWhenMainThreadIsIdling**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When enabled, priority cutoff for vcloth budgeting (see wh_ca_ClothDefaultPriorityCutoff) 
will be allowed to decrease even if it prolongs main thread time (see wh_ca_ClothBudgetAdaptivePriority) as long as the main thread 
was waiting for render thread/GPU for at least wh_ca_ClothBudgetMinTimeToConsiderAsMainThreadIdling ms.

    ```

- **wh_ca_ClothBudgetMaxCutoff**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum value of budget priority cutoff. Is never increased above this by wh_ca_ClothBudgetAdjustmentPerFrame and vcloths get assigned at best this (except for cases when we want to force their simulation).
    ```

- **wh_ca_ClothBudgetMaxFramesToSkip**:

  - **Default Value:** `4`

  - **Description:**

    ```text
If budgeting system skipped skipped simulation for more than this many frames, 
the VCloth will be simulated regardless of priority.
    ```

- **wh_ca_ClothBudgetMaxSSaxisSizePercToSkipFrames**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
If char with vcloth covers more than this portion of the screen (vertically or horizontally, whichever is bigger), it will get infinite budget - never skip frames.
 Amount of frames allowed to skip for smaller sizes is interpolated based on this and wh_ca_ClothEnableSimulationSSaxisSizePerc from 1 to wh_ca_ClothBudgetMaxFramesToSkip.
    ```

- **wh_ca_ClothBudgetMinTimeToConsiderAsMainThreadIdling**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Time to consider as idling for wh_ca_ClothBudgetIncreaseBudgetWhenMainThreadIsIdling.
    ```

- **wh_ca_ClothCollisionMaxExpectedSlideDist**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Only relevant for wh_ca_ClothProxyCollisionMode 2.Distance in default pose from particle to collider - particles farther away are not expected to slide onto that collider.
If it collides, it is treated as collider being outside the cloth, not inside.
    ```

- **wh_ca_ClothCollisionNormalSmoothing**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Only relevant for wh_ca_ClothProxyCollisionMode 2.
Smoothing of skinned normals by averaging normals of each particle's neighbor. Value is the number of smoothing iterations.
    ```

- **wh_ca_ClothDisableSimulationAtDistance**:

  - **Default Value:** `22`

  - **Description:**

    ```text
Distance at which cloth simulation is disabled (see also wh_ca_ClothEnableSimulationSSaxisSizePerc)
    ```

- **wh_ca_ClothEnableSimulationSSaxisSizePerc**:

  - **Default Value:** `0.04`

  - **Description:**

    ```text
If size of characters bounding box exceeds provided percentage of viewport size, simulation is enabled
(even when beyond distance of wh_ca_ClothDisableSimulationAtDistance)
    ```

- **wh_ca_ClothLimitedModeMinFramesOn**:

  - **Default Value:** `2`

  - **Description:**

    ```text
When limited mode is turned on, it will be on for at least this many consecutive frames.
Prevents oscillations between full and limited mode, as the positions of particles will change a bit when switching to limited
 and it could be recognized as motion, even when the character is not moving.
Recommended minimum 2 - 1 was proven to be not enough.
    ```

- **wh_ca_ClothLimitedModeNumIterations**:

  - **Default Value:** `3`

  - **Description:**

    ```text
See wh_ca_ClothLimitedModeThreshold. Less than 3 typically leads to oscillations in cloth.
    ```

- **wh_ca_ClothLimitedModeThreshold**:

  - **Default Value:** `0.03`

  - **Description:**

    ```text
If maximum movement (in meters) of vcloth nodes since last frame is less than this,
will do only wh_ca_ClothLimitedModeNumIterations instead of numIterations specified in asset's config and only one collision resolve at the end.
    ```

- **wh_ca_ClothMaxProxiesTranslateThreshold**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
If one of cloth colliders moves by more than this between two frames, simulation will be restarted (from skinning).
    ```

- **wh_ca_ClothProxyCollisionMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 - Use mode as defined in asset config
1 - Force IterativeShortest on all clothing:
iteratively move particle towards closest point on proxy surface, see also wh_ca_ClothProxyResolveFactor 
2 - Force AlongSkinnedNormals on all clothing:
instantly move particle in the direction of it's skinned normal to the proxy surface
    ```

- **wh_ca_ClothProxyResolveFactor**:

  - **Default Value:** `0.85`

  - **Description:**

    ```text
Factor used when resolving vcloth collisions, higher values means faster (in fewer iterations) towards surface
    ```

- **wh_ca_ClothRagdollSkinningBlendFactor**:

  - **Default Value:** `0.85`

  - **Description:**

    ```text
In ragdoll, cloth simulation is blended with skinning. 0 = full skinning, 1 = full simulation.
    ```

- **wh_ca_ClothSimulationRestartDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Writes out chars that were restarted (because of too large translation of collision proxies, see wh_ca_ClothMaxProxiesTranslateThreshold). Bitwise:1 restarts that had to be done from main thread (cloth was not simulated before)2 restarts that were done from job.
    ```

- **wh_ca_DebugCloth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug for simulation sub steps for VCloth
    ```

- **wh_ca_DebugDrawCloth**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for VCloth:1 - stretch links2 - shear links3 - bend links4 - all links6 - all positions (white: sim pos., green: previous pos., blue: old pos., red: skinned pos.7 to 10 - normals of sim. mesh with progressively smaller scale16 (bitwise) - sim mesh normals (cyan: initial, magenta: current)32 (bitwise) - skinned mesh normals (red: current). Valid only with AlongSkinnedNormal collision mode (see wh_ca_ClothProxyCollisionMode).
    ```

- **wh_ca_DebugDrawClothNNDC**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for VCloth Nearest Neighbor Distance Constraints
    ```

- **wh_ca_DebugDrawClothProxies**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for VCloth proxies
    ```

- **wh_ca_DebugSkinLODs**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** ``

  - **Description:**

    ```text
Filter for which entity should the debug draw be displayed.
    ```

- **wh_ca_DebugSkinLODsMaxDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Max distance for wh_ca_DebugSkinLODs.
    ```

- **wh_ca_DebugSkinLODsSkeletonFilterList**:

  - **Default Value:** `humans`

  - **Description:**

    ```text
List of skeleton substrings for which the debug draw should be displayed, eg. 'humans animals'
    ```

- **wh_ca_DeleteDBAOnLevelUnload**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Should the DBAs be unloaded when clearing character resources on level unload?
    ```

- **wh_ca_ExtendSkeletonOnAttachmentAdd**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow default skeleton to be extended when a skin attachment requires it.
    ```

- **wh_ca_GeometricMeanOverride**:

  - **Default Value:** `0.0002`

  - **Description:**

    ```text
Replaces GeometricMean calculation with constant value
    ```

- **wh_ca_PendulumDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
When turned on (1), will write out pendula that ignored translation in the past 5 seconds (cinematic cuts).
    ```

- **wh_ca_PendulumJointCollisionMinSpeed**:

  - **Default Value:** `0.07`

  - **Description:**

    ```text
Minimum speed (m/s) at which are wh_ca_PendulumResolveJointCollisions resolved.
Large values can cause the pendulums to start bouncing a little,
with small values the collisions will not be resolved as well as the resolution won't be able to overcome gravity.
    ```

- **wh_ca_PendulumResolveJointCollisions**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When turned on, if joints of the pendulum is inside a collider with which the pendulum collides,
the collision is still resolved, although the resolved position is rather random.
    ```

- **wh_ca_SkinLodBonesMismatchAction**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Changes what happens when higher LODs of skin have incompatible skeleton.
0 - Don't load skin
1 - Skip incompatible LOD when in Editor
2 - Always skip incompatible LOD
    ```

- **wh_ca_SkinningTypeOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force skinning type
0 - Default
1 - Linear skinning
2 - Dual quaternion
    ```

- **wh_ca_SocketsBypassSimulation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
if this is 1 socket simulation is disabled
    ```

- **wh_ca_WarnOnUnmappedJoints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Warn when skin joint was not found in characters current skeleton.
    ```

- **wh_cam_DumpLocation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Dumps camera location to log and clipboard (useful for a QA bug report). Use "ed_goto" for a later reconstruction.
    ```

- **wh_cart_ActorDependentUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables dependent actor PPU update. If disabled it updates in parallel during actor PPU.
    ```

- **wh_cart_CaravanBlendDist**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Stopping distance before cart obstacles in caravan.
    ```

- **wh_cart_CaravanMaxBackDist**:

  - **Default Value:** `14`

  - **Description:**

    ```text
Maximum distance from cart behind in caravan for free movement.
    ```

- **wh_cart_CaravanMinFrontDist**:

  - **Default Value:** `11`

  - **Description:**

    ```text
Minimum distance from front cart in caravan for free movement.
    ```

- **wh_cart_Debug**:

  - **Default Value:** ``

  - **Description:**

    ```text
Selects cart entity to display debug info.
    ```

- **wh_cart_DisableAuxPhysics**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable cart physics for debugging.
    ```

- **wh_cart_DisableTestNotSeenByPlayer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This can bypass check that postpone horse mounting if player is watching them.
    ```

- **wh_cart_DozerObstacleOffset**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Offset of the collision avoidance created for the cart's dozer
    ```

- **wh_cart_DozerObstacleOffsetStep**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Step between the collision avoidance obstacles create for the cart's dozer
    ```

- **wh_cart_DozerObstacleRadius**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Radius of the collision avoidance created for the cart's dozer
    ```

- **wh_cart_DozerObstacleRadiusDecrement**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Decrement of the radius used for the collision avoidance created for the cart's dozer
    ```

- **wh_cart_DozerObstaclesCount**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Count of the obstacles created for a cart's dozer
    ```

- **wh_cart_ForceEnablePlayerSeat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
This can bypass cart seat setting from script.
    ```

- **wh_cart_MainObstacleOffset**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Offset of the obstacle created for the cart's body
    ```

- **wh_cart_MainObstacleRadius**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Radius of the obstacle created for the cart's body
    ```

- **wh_cart_MovementPitchFactor**:

  - **Default Value:** `1.3`

  - **Description:**

    ```text
How much cart slowdown or speedup on slopes - X * <-pi/2, pi/2>
    ```

- **wh_cart_MovementPitchMinLimit**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum speed which is not influenced by slopes.
    ```

- **wh_cart_MovementSmoothingStiffness**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Stiffness of cart movement - how fast is cart slowing down.
    ```

- **wh_cart_MovementSpeedNormal**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Global normal cart movement speed on straight terrain.
    ```

- **wh_cart_NavigationPlatzPadding**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Padding around the stopped card to create navigation platz
    ```

- **wh_cart_ObstacleSpeedMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier of the speed used for cart obstacle
    ```

- **wh_cart_ReplanMoveAreaPadding**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Padding around the stopped cart to create replan move area.
    ```

- **wh_cart_SlowdownPlayerInProximity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should the player be slowed down in the proximity of a cart?
    ```

- **wh_cat_AlwaysSpawn**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Spawn cats always, no metter the day, weather, etc
    ```

- **wh_cat_AttackTriggerDist**:

  - **Default Value:** `15`

  - **Description:**

    ```text
How close player has to attack (not free attack) something to scare a cat
    ```

- **wh_cat_FreeAttackTriggerDist**:

  - **Default Value:** `3`

  - **Description:**

    ```text
How close player has to free attack something to scare a cat
    ```

- **wh_cat_MaxVisibilityDistance**:

  - **Default Value:** `60`

  - **Description:**

    ```text
At this distance the cat is de/spawned
    ```

- **wh_cat_MinRunAnimationSpeed**:

  - **Default Value:** `0.65`

  - **Description:**

    ```text
Do not slow run animations below this speed
    ```

- **wh_cat_PathSmoothingPeriod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximal distance to next point, at which curvature of path begins (in time seconds, how far cat runs in this time)
    ```

- **wh_cat_ProximityScareDist**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How close player has be to scare a cat
    ```

- **wh_cat_RollBlendTime**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
How fast cat change it's roll.
    ```

- **wh_cat_RollLimit**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
How much and how fast cat leans to sides when turning
    ```

- **wh_cat_RollPerRadianPerSecond**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
How much cat change it's roll, depending on direction change delta
    ```

- **wh_cat_RunRotationInterpolationSpeed**:

  - **Default Value:** `30`

  - **Description:**

    ```text
How fast cat model rotates
    ```

- **wh_cat_TerrainFollowingBlendTime**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
How fast cats sticks to terrain and back
    ```

- **wh_cat_TimeScaleChangeTime**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
How fast time speed changes
    ```

- **wh_cat_TurnTimeSpeedupRatio**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
How much time speeds up in slowdowns in turns
    ```

- **wh_cat_debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Cat debug draw.
    ```

- **wh_cc_AnimCharBloodOverrideRandomness**:

  - **Default Value:** `0`

  - **Description:**

    ```text
how random will the blood on animchars be generated
    ```

- **wh_cc_AttachmentSlotPoseModifier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
enables morphing of attachment slots through a pose modifier:
  0 - off, 1 - blend with anim, 2 - override anim, 3 - identity for debug
    ```

- **wh_cc_BleedingSpeed**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
how fast is bleeding spreading [intensity/s]
    ```

- **wh_cc_ClothingAM**:

  - **Default Value:** `1`

  - **Description:**

    ```text
select clothing attachment manager, 0 - dummy/turn off, 1 - turn on
    ```

- **wh_cc_CutsceneManagerPriorityBoost**:

  - **Default Value:** `100`

  - **Description:**

    ```text
how much is the priority increased when the owner entity is in cutscene
    ```

- **wh_cc_DirtSystem**:

  - **Default Value:** `1`

  - **Description:**

    ```text
enabled/disable dirt system
    ```

- **wh_cc_HiddenInvisibleManagerPriorityDecrease**:

  - **Default Value:** `100`

  - **Description:**

    ```text
how much is the priority decreased when the owner entity is hidden or invisible
    ```

- **wh_cc_LRUCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
ability to turn on/off LRU cache for clothing system
    ```

- **wh_cc_LodForUberlod**:

  - **Default Value:** `4`

  - **Description:**

    ```text
a LOD number from where we start showing the uberlod (-1 disables the feature)
    ```

- **wh_cc_MaxSkinLoaderJobQueueSize**:

  - **Default Value:** `20`

  - **Description:**

    ```text
maximal count of queued jobs
    ```

- **wh_cc_MaxSkinLoaderJobs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
maximum count of simultaneously running loader jobs
    ```

- **wh_cc_MaxSkinLoadingInProgress**:

  - **Default Value:** `40`

  - **Description:**

    ```text
maximum count of scheduled skin jobs. Limits the amount of temp memory allocated
    ```

- **wh_cc_PreloadMaterials**:

  - **Default Value:** `1`

  - **Description:**

    ```text
controls material pre-loading
  0 - do not preload
  1 - preload in game
  2 - always preload (game and editor)
    ```

- **wh_cc_RequiredPostLoadReadyManagers**:

  - **Default Value:** `35`

  - **Description:**

    ```text
how many priority managers must be ready
    ```

- **wh_cc_RequiredPostLoadReadyTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
how long we must be ready [s]
    ```

- **wh_cc_SchedulerBudgetPerLayer**:

  - **Default Value:** `2`

  - **Description:**

    ```text
how many jobs are update in the 0th layer
    ```

- **wh_cc_SchedulerDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
debug draw of the update scheduler, 1 - per layer debug, 2 - sorted jobs
    ```

- **wh_cc_SchedulerLayer0Count**:

  - **Default Value:** `2`

  - **Description:**

    ```text
job count in the 0th layer
    ```

- **wh_cc_SchedulerMaxSortIterations**:

  - **Default Value:** `2`

  - **Description:**

    ```text
max job sorting iterations
    ```

- **wh_cc_SchedulerPostLoadBudgetPerLayer**:

  - **Default Value:** `40`

  - **Description:**

    ```text
how many jobs are update in the 0th layer during the load
    ```

- **wh_cc_SkinAttachmentFlags**:

  - **Default Value:** `32`

  - **Description:**

    ```text
flags set to the newly created body/clothing skin attachment (AttachmentFlags enum; same as in the cdf file; 8 for the SW skinning, 32 for linear skinning)
    ```

- **wh_cc_TotalUpdateBudget**:

  - **Default Value:** `10`

  - **Description:**

    ```text
per-manager budget, zero and negative values will disable the update
    ```

- **wh_cc_UberlodLoadDistRatio**:

  - **Default Value:** `1.1`

  - **Description:**

    ```text
ratio of max view distance where uberlods are loaded [%]
    ```

- **wh_cc_UberlodMaterial**:

  - **Default Value:** `uberlod_mat_generic`

  - **Description:**

    ```text
material name used by character uberlods (without path and extension)
    ```

- **wh_cc_UnloadHysteresisDist**:

  - **Default Value:** `3`

  - **Description:**

    ```text
hysteresis distance for unloading uberlod and attachments [m]
    ```

- **wh_cc_visorAnimDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
duration of opening / closing visor
    ```

- **wh_cl_DofMinZ**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
distance of the close bluring of dof
    ```

- **wh_cl_DofMinZScale**:

  - **Default Value:** `2.2`

  - **Description:**

    ```text
intensity of the close bluring of dof
    ```

- **wh_cl_NearDof**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles near depth of field
    ```

- **wh_cl_invertControllerHorizontal**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controller look Left-Right invert (horizontal)
    ```

- **wh_cl_invertControllerHorizontalCombat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
invert X axis in combat [0 - no invert / 1 - inverted]
    ```

- **wh_cl_invertControllerVertical**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controller look Up-Down invert (vertical)
    ```

- **wh_cl_invertControllerVerticalCombat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
invert Y axis in combat [0 - no invert / 1 - inverted]
    ```

- **wh_cl_sensitivityHorizontal**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Controller sensitivity Left-Right (horizontal)
    ```

- **wh_cl_sensitivityVertical**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Controller look sensitivity Up-Down (vertical)
    ```

- **wh_con_expr_prefix**:

  - **Default Value:** `!`

  - **Description:**

    ```text
Prefix for printing the value of script expressions.
    ```

- **wh_con_unix**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0=full complete mode / 1=Unix auto complete mode
    ```

- **wh_concept_Debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows graph loaded state (value >= 1) and concept nodes state (value >= 2)
    ```

- **wh_concept_DebugFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filters the output of wh_concept_Debug by substring. Empty value means no filter.
    ```

- **wh_concept_DebugShowOnlyChanged**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Filters the output of wh_concept_Debug. When value > 0,it shows only states witch are changed from default and are going to be serialized into save game.
    ```

- **wh_concept_DefinitionFile**:

  - **Default Value:** `Definitions.xml`

  - **Description:**

    ```text
Concept definition xml file.
    ```

- **wh_concept_MaxNestedDataFetchThreshold**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Node infinite loop detection limit (data fetch request count per frame). The number is determined by max estimated callstack depth.
    ```

- **wh_concept_MaxNestedTriggerThreshold**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Node infinite loop detection limit (triggers). The number is determined by max estimated callstack depth.
    ```

- **wh_concept_MemorySavingDoNotLoadOtherLevel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Determines whether unimportant nodes from other level should be skiped from loading to save memory.
    ```

- **wh_concept_Path**:

  - **Default Value:** `Libs/Concept/`

  - **Description:**

    ```text
Concept folder
    ```

- **wh_concept_RandomEventStreaming**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Determines whether random events place concept nodes should be ommited to save memory on game start and streamed back during game when needed.
0 = present at start, streaming off 
1 = missing at start, streaming on (in editor, it behaves as 0)
2 = missing at start, streaming off (event places disabled)

    ```

- **wh_concept_RandomEventStreamingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for random event concepts graphs
    ```

- **wh_concept_ReloadOnGameModeStart**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Automatically reloads concept graph on editor game mode enter.
    ```

- **wh_concept_ReloadOnlyModified**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Only modified concept files are being reloaded on wh_concept_Reload
    ```

- **wh_cs_AIAttackFiglProb**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Probability that AI will be making figl when AIForceAttack=5.
    ```

- **wh_cs_AIAttackInterval**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Time interval between opponent's attacks
    ```

- **wh_cs_AIDistanceTolerance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Attack distance tolerance for AI.
    ```

- **wh_cs_AIForceBlockMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force AI block mode trigger
    ```

- **wh_cs_AIForceProfile**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Force AI brain profile from table.
    ```

- **wh_cs_AIForceSymetric**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force AI to get symetric force zone.
    ```

- **wh_cs_AIMoveDistance**:

  - **Default Value:** `2.6`

  - **Description:**

    ```text
AI Move distance for 'Pusuit' mode - opp will stop at this distance.
    ```

- **wh_cs_AIMoveMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
AI Move mode: 1-None, 2-Around, 3-Pursuit
    ```

- **wh_cs_AIMoveSpeed**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
AI Move speed
    ```

- **wh_cs_AIMoveTimer**:

  - **Default Value:** `4`

  - **Description:**

    ```text
AI Move time for 'Around' mode - duration of one half-cycle.
    ```

- **wh_cs_AIReblockMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
AI reblock mode: 0 - never, 1 - always, 2 - random 50% chance
    ```

- **wh_cs_AISkillProfile**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Skill profile for AI.
    ```

- **wh_cs_AISlotDurationMod**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Custom RPG Mod of riposte slot - 0 = lama, 0.5 = standard, 1 = profa
    ```

- **wh_cs_ArmWeaponRadius**:

  - **Default Value:** `0.13`

  - **Description:**

    ```text
Radius of unarmed weapon (sphere).
    ```

- **wh_cs_AttackTimeToHitEst**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Average duration of attack time to hit.
    ```

- **wh_cs_Automation1_ClinchActionDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time for delayed clinch action
    ```

- **wh_cs_Automation1_ClinchActionDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time for delayed clinch action
    ```

- **wh_cs_Automation1_ClinchAlternativeProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Probability of use of alternative guard in clinch.
    ```

- **wh_cs_Automation1_ComboHitCancelProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: prob that normal combo is cancelled when hit opponent.
    ```

- **wh_cs_Automation1_ComboProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: prob of normal combo.
    ```

- **wh_cs_Automation1_ComboSteps**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: max number of steps for natural combo.
    ```

- **wh_cs_Automation1_Dodge**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for dodge
    ```

- **wh_cs_Automation1_GuardAbilityLevel**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard ability level.
    ```

- **wh_cs_Automation1_GuardBorderHystDiameter**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard border hysteresis diameter.
    ```

- **wh_cs_Automation1_GuardBorderLevel0**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard border distance for begginer.
    ```

- **wh_cs_Automation1_GuardBorderLevel1**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard border distance for master.
    ```

- **wh_cs_Automation1_Mode**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Allows to specify whitch automation will be started after selecting target: 0..none, 1..defense, 2..offense, 3..guard, 4..all
    ```

- **wh_cs_Automation1_NB**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for normal block
    ```

- **wh_cs_Automation1_NoAction**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for no defense action
    ```

- **wh_cs_Automation1_PB**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for perfect block
    ```

- **wh_cs_Automation1_PeriodicalAttackTime**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: time for periodical attacking.
    ```

- **wh_cs_Automation1_RiposteProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: riposte probability <0,1>.
    ```

- **wh_cs_Automation1_SPB**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for special perfect block
    ```

- **wh_cs_Automation1_StaticPreblock**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI: enables static preblock
    ```

- **wh_cs_Automation1_Target**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables debug AI on given entity.
    ```

- **wh_cs_Automation1_TrickActionDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max delay for selected trick action.
    ```

- **wh_cs_Automation1_TrickActionDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min delay for selected trick action.
    ```

- **wh_cs_Automation1_TrickAttackProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Probability for attack from trick.
    ```

- **wh_cs_Automation1_TrickChangeZoneProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Probability for changing zone during trick.
    ```

- **wh_cs_Automation1_TrickEndAttackProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Probability for terminating trick step without attack.
    ```

- **wh_cs_Automation1_TrickNewQueryTimeoutMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max delay for next trick step decision.
    ```

- **wh_cs_Automation1_TrickNewQueryTimeoutMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min delay for next trick step decision.
    ```

- **wh_cs_Automation1_TrickReactionDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max time between opponent's trick and reblock.
    ```

- **wh_cs_Automation1_TrickReactionDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time between opponent's trick and reblock.
    ```

- **wh_cs_Automation1_WeaponMissileDistRangeMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Overrides bow limits
    ```

- **wh_cs_Automation1_ZoneAdaptationDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
    ```

- **wh_cs_Automation1_ZoneAdaptationDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
    ```

- **wh_cs_Automation1_ZoneChangeDefenseModeWeight**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Weight for blending between random selection and best defense fighter decisions
    ```

- **wh_cs_Automation1_ZoneChangeOffenseModeWeight**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Weight for blending between random selection and best offense fighter decisions
    ```

- **wh_cs_Automation1_ZoneChangeTimeoutMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max time between changes of zones.
    ```

- **wh_cs_Automation1_ZoneChangeTimeoutMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time between changes of zones.
    ```

- **wh_cs_Automation2_ClinchActionDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time for delayed clinch action
    ```

- **wh_cs_Automation2_ClinchActionDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time for delayed clinch action
    ```

- **wh_cs_Automation2_ClinchAlternativeProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Probability of use of alternative guard in clinch.
    ```

- **wh_cs_Automation2_ComboHitCancelProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: prob that normal combo is cancelled when hit opponent.
    ```

- **wh_cs_Automation2_ComboProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: prob of normal combo.
    ```

- **wh_cs_Automation2_ComboSteps**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: max number of steps for natural combo.
    ```

- **wh_cs_Automation2_Dodge**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for dodge
    ```

- **wh_cs_Automation2_GuardAbilityLevel**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard ability level.
    ```

- **wh_cs_Automation2_GuardBorderHystDiameter**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard border hysteresis diameter.
    ```

- **wh_cs_Automation2_GuardBorderLevel0**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard border distance for begginer.
    ```

- **wh_cs_Automation2_GuardBorderLevel1**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Guard border distance for master.
    ```

- **wh_cs_Automation2_Mode**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Allows to specify whitch automation will be started after selecting target: 0..none, 1..defense, 2..offense, 3..guard, 4..all
    ```

- **wh_cs_Automation2_NB**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for normal block
    ```

- **wh_cs_Automation2_NoAction**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for no defense action
    ```

- **wh_cs_Automation2_PB**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for perfect block
    ```

- **wh_cs_Automation2_PeriodicalAttackTime**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: time for periodical attacking.
    ```

- **wh_cs_Automation2_RiposteProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: riposte probability <0,1>.
    ```

- **wh_cs_Automation2_SPB**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI probability for special perfect block
    ```

- **wh_cs_Automation2_StaticPreblock**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI: enables static preblock
    ```

- **wh_cs_Automation2_Target**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables debug AI on given entity.
    ```

- **wh_cs_Automation2_TrickActionDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max delay for selected trick action.
    ```

- **wh_cs_Automation2_TrickActionDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min delay for selected trick action.
    ```

- **wh_cs_Automation2_TrickAttackProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Probability for attack from trick.
    ```

- **wh_cs_Automation2_TrickChangeZoneProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Probability for changing zone during trick.
    ```

- **wh_cs_Automation2_TrickEndAttackProb**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Probability for terminating trick step without attack.
    ```

- **wh_cs_Automation2_TrickNewQueryTimeoutMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max delay for next trick step decision.
    ```

- **wh_cs_Automation2_TrickNewQueryTimeoutMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min delay for next trick step decision.
    ```

- **wh_cs_Automation2_TrickReactionDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max time between opponent's trick and reblock.
    ```

- **wh_cs_Automation2_TrickReactionDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time between opponent's trick and reblock.
    ```

- **wh_cs_Automation2_WeaponMissileDistRangeMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Overrides bow limits
    ```

- **wh_cs_Automation2_ZoneAdaptationDelayMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
    ```

- **wh_cs_Automation2_ZoneAdaptationDelayMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: When 'opponentZone' mode is selected then zone is adapted after this timeout.
    ```

- **wh_cs_Automation2_ZoneChangeDefenseModeWeight**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Weight for blending between random selection and best defense fighter decisions
    ```

- **wh_cs_Automation2_ZoneChangeOffenseModeWeight**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: <0,1> Weight for blending between random selection and best offense fighter decisions
    ```

- **wh_cs_Automation2_ZoneChangeTimeoutMax**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Max time between changes of zones.
    ```

- **wh_cs_Automation2_ZoneChangeTimeoutMin**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug AI automation: Min time between changes of zones.
    ```

- **wh_cs_AutomationAction_AttackAfterComboTime**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
Combat automation - defines time after combo end before new normal attack.
    ```

- **wh_cs_AutomationAction_AttackImmediateDistance**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Combat automation - defines distance when NPC does immediate attack to keep distance from player.
    ```

- **wh_cs_AutomationAction_AttackUpdateInterval**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Combat automation - defines frequency for updating attacking params.
    ```

- **wh_cs_AutomationAction_BattlementQueryRadius**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Radius for battlement query.
    ```

- **wh_cs_AutomationAction_BattlementShootingAngleHorizontal**:

  - **Default Value:** `80`

  - **Description:**

    ```text
Horizontal angle range for battlement shooting in degrees.
    ```

- **wh_cs_AutomationAction_BattlementShootingAngleVertical**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Vertical angle range for battlement shooting in degrees.
    ```

- **wh_cs_AutomationAction_BattlementShootingElevationTolerance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Tolerance in z-axis for position of battlement and combatant that wants to use it.
    ```

- **wh_cs_AutomationAction_BattlementShootingMaxRange**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Maximal distance for battlement range.
    ```

- **wh_cs_AutomationAction_BattlementShootingMinRange**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Minimal distance for battlement range.
    ```

- **wh_cs_AutomationAction_BattlementUpdateInterval**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Default update interval for battlement automation.
    ```

- **wh_cs_AutomationAction_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug AI automation: Enables debug draw.
    ```

- **wh_cs_AutomationAction_DebugDrawTarget**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables debug automation on given entity.
    ```

- **wh_cs_AutomationAction_DefenseMoveReactionVelocityLim**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
AI defense automation: forward velocity limit for move reaction
    ```

- **wh_cs_AutomationAction_DelayedEnd**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Combat automation - when an opponent is not threat any more than defense actions (preblock) must be terminated with given delay.
    ```

- **wh_cs_AutomationAction_DogAttackAngleLimit**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Combat automation - dog angle limitation for attack.
    ```

- **wh_cs_AutomationAction_ForceUnarmedHealthThreshold**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Health threshold when forced unarmed combat vs. player expired.
    ```

- **wh_cs_AutomationAction_GuardApproachHystTimer**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Hysteresis timer to hold approach mode after real aiming ended to survive firing
    ```

- **wh_cs_AutomationAction_GuardDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug AI automation: Guard automation debug draw.
    ```

- **wh_cs_AutomationAction_GuardEscapeMinDuration**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug AI automation: Min actor speed for escape mode selection.
    ```

- **wh_cs_AutomationAction_GuardFOV**:

  - **Default Value:** `360`

  - **Description:**

    ```text
FOV angle in degrees along actor dir that limits guard automation
    ```

- **wh_cs_AutomationAction_GuardFOVHyst**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Hysteresis diameter for FOV angle in degrees along actor dir that limits guard automation
    ```

- **wh_cs_AutomationAction_GuardFOVVertical**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Maximum possible angle to opponent before npc is unlocked from combat.
    ```

- **wh_cs_AutomationAction_GuardInjuredDistanceMod**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
Guard distance is modified with mod in the injured state.
    ```

- **wh_cs_AutomationAction_GuardMaxSpeed**:

  - **Default Value:** `2.9`

  - **Description:**

    ```text
Debug AI automation: Max speed in combat guard.
    ```

- **wh_cs_AutomationAction_GuardMinAtkDist**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Debug AI automation: Min atk dist for guard automation.
    ```

- **wh_cs_AutomationAction_GuardRotDisableOnDodgeCooldown**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Timeout after opponent makes dodge to disable disabling guard by rot.
    ```

- **wh_cs_AutomationAction_GuardUpdateInterval**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Debug AI automation: Update interval for guard autmation decision.
    ```

- **wh_cs_AutomationAction_HigherComboStepBias**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Combo automation - max prob for first combo step. Prob is increased with combo step count.
    ```

- **wh_cs_AutomationAction_HuntAttackDist**:

  - **Default Value:** `10`

  - **Description:**

    ```text
AI automation: Distance for hunt attack decision based on unreached move event.
    ```

- **wh_cs_AutomationAction_HuntAttackDistRand**:

  - **Default Value:** `2`

  - **Description:**

    ```text
AI automation: Random offset for hunt attack distance.
    ```

- **wh_cs_AutomationAction_HuntAttackTimeLimit**:

  - **Default Value:** `5`

  - **Description:**

    ```text
AI automation: Max time limit for hunt attack attempt.
    ```

- **wh_cs_AutomationAction_MaxDistanceForTarget**:

  - **Default Value:** `60`

  - **Description:**

    ```text
AI automation: Maximum distance to target - preventing targeting of too far targets.
    ```

- **wh_cs_AutomationAction_MissileAimingFailureCooldown**:

  - **Default Value:** `6`

  - **Description:**

    ```text
AI automation: Shooting will fail if firing is not executed until this limit.
    ```

- **wh_cs_AutomationAction_MissileCylRaycastOffset**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
AI automation: Offset of shape cast from the attacker weapon.
    ```

- **wh_cs_AutomationAction_MissileCylRaycastRadius**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
AI automation: Radius of cylindrical raycast for missile obstacle detection.
    ```

- **wh_cs_AutomationAction_MissileDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
AI automation: debug draw for missile automation.
    ```

- **wh_cs_AutomationAction_MissileHuntAttackCooldown**:

  - **Default Value:** `5`

  - **Description:**

    ```text
AI automation: Cooldown for hunt attacks against ranged opponent.
    ```

- **wh_cs_AutomationAction_MissileUpdateInterval**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
AI automation: Update interval for missile automation.
    ```

- **wh_cs_AutomationAction_MoveProblem_AfterHuntAttackDuration**:

  - **Default Value:** `0`

  - **Description:**

    ```text
AI automation: Defines duration after hunt attack to give a change to solve move problem.
    ```

- **wh_cs_AutomationAction_MoveProblem_BypassUncertainOnIsAimedDuration**:

  - **Default Value:** `10`

  - **Description:**

    ```text
AI automation: Cooldown duration for uncertain state triggered by is aimed state.
    ```

- **wh_cs_AutomationAction_MoveProblem_DebugForceUncertain**:

  - **Default Value:** `0`

  - **Description:**

    ```text
AI automation: Total duration to resolve move problem. Then report to script.
    ```

- **wh_cs_AutomationAction_MoveProblem_DistanceFlee**:

  - **Default Value:** `60`

  - **Description:**

    ```text
AI automation: Defines flee distance for move problem decision.
    ```

- **wh_cs_AutomationAction_MoveProblem_DistanceThreat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
AI automation: Defines threat distance for move problem decision.
    ```

- **wh_cs_AutomationAction_MoveProblem_DistanceThreatForcedUncertain**:

  - **Default Value:** `7`

  - **Description:**

    ```text
AI automation: Defines threat distance for move problem decision (in forced uncertain state).
    ```

- **wh_cs_AutomationAction_MoveProblem_EstimatingMoveCooldown**:

  - **Default Value:** `10`

  - **Description:**

    ```text
AI automation: Cooldown for estimating move before automation sent problem to the skirmish.
    ```

- **wh_cs_AutomationAction_MoveProblem_EventFilteringTreshold**:

  - **Default Value:** `1`

  - **Description:**

    ```text
AI automation: Defines init filtering time for filtering of unreachable event.
    ```

- **wh_cs_AutomationAction_MoveProblem_NoPathMissileAttemptCooldown**:

  - **Default Value:** `4`

  - **Description:**

    ```text
When pathfind files the npc try to change to missile after this cooldown.
    ```

- **wh_cs_AutomationAction_MoveProblem_SlowPursuitDuration**:

  - **Default Value:** `40`

  - **Description:**

    ```text
AI automation: Defines duration for slow pursuit state.
    ```

- **wh_cs_AutomationAction_MoveProblem_TotalDuration**:

  - **Default Value:** `60`

  - **Description:**

    ```text
AI automation: Total duration to resolve move problem. Then report to script.
    ```

- **wh_cs_AutomationAction_MoveProblem_UncertainDuration**:

  - **Default Value:** `10`

  - **Description:**

    ```text
AI automation: Defines duration for uncertain state of movement problem.
    ```

- **wh_cs_AutomationAction_MoveProblem_UnreachableFilterDuration**:

  - **Default Value:** `2`

  - **Description:**

    ```text
AI automation: Defines init duration for filtering of unreachable event.
    ```

- **wh_cs_AutomationAction_MoveProblem_UnreachedFilterDuration**:

  - **Default Value:** `10`

  - **Description:**

    ```text
AI automation: Duration of filtering for unreached event after 'Uncertain' state.
    ```

- **wh_cs_AutomationAction_MoveProblem_WeaponChangeDuration**:

  - **Default Value:** `6`

  - **Description:**

    ```text
AI automation: Defines duration for weapon change attempt at solve move event.
    ```

- **wh_cs_AutomationAction_MovementRestrictionOverlapTime**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Period for movement restriction overlap after action or change of zone.
    ```

- **wh_cs_AutomationAction_ShoutActionGuardCooldown**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Debug AI automation: Action shouts are not palyed during this cooldown starting on enter to guard.
    ```

- **wh_cs_AutomationAction_ShoutActionGuardCooldownVariation**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Debug AI automation: Action shouts are not palyed during this cooldown starting on enter to guard.
    ```

- **wh_cs_AutomationAction_ShoutClinchGuardCooldown**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Debug AI automation: Clinch shouts are not palyed during this cooldown starting on enter to guard.
    ```

- **wh_cs_AutomationAction_ShoutDistanceLimitMax**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Debug AI automation: Distance limiting combat idle shouting.
    ```

- **wh_cs_AutomationAction_ShoutIdleGuardCooldown**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Debug AI automation: Idle shouts are not palyed during this cooldown starting on enter to guard.
    ```

- **wh_cs_AutomationAction_ShoutIdleGuardCooldownVariation**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Debug AI automation: Idle shouts are not palyed during this cooldown starting on enter to guard.
    ```

- **wh_cs_AutomationAction_ShoutIdleUpdateInterval**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug AI automation: Update interval for idle shout autmation decision.
    ```

- **wh_cs_AutomationAction_StaticPreblockEnabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Combat automation - enables static preblock.
    ```

- **wh_cs_AutomationAction_StaticPreblockRateHistoryDuration**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Combat automation - defines history duration for computing rate between preblocks and blocks.
    ```

- **wh_cs_AutomationAction_StaticPreblockUpdateInterval**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Combat automation - defines time interval between static preblock decision.
    ```

- **wh_cs_AutomationAction_TemporaryGuardStarterPeriod**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time for temporary start of guard after StartCombat procclip.
    ```

- **wh_cs_AutomationAction_WeaponAttackDistTimeTolerance**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Debug AI automation: Weapon automation - non precise attack distance hysteresis over time.
    ```

- **wh_cs_AutomationAction_WeaponChangeViaSignal**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Changing weapon from automation is done via NPC state combat helper or via signal. 0 - npc state combat helper, 1 - signal
    ```

- **wh_cs_AutomationAction_WeaponMissileInitRandCoef**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Debug AI automation: Weapon automation - rand coef for missile weapon init decision.
    ```

- **wh_cs_AutomationAction_WeaponMissileLoadingMinDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimal range from attacker to allow loading of ranged werapon (without autoload).
    ```

- **wh_cs_AutomationAction_WeaponOversizedAttackProblemDuration**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Debug AI automation: Weapon automation - drop oversized weapon after given duration from last attack.
    ```

- **wh_cs_AutomationAction_WeaponUnreachedTest**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug AI automation: Weapon automation - testing of movement enevent unreached.
    ```

- **wh_cs_AutomationAction_WeaponsUpdateInterval**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Debug AI automation: Weapon automation - update interval.
    ```

- **wh_cs_AutomationAction_ZoneChangeAdaptationHysteresis**:

  - **Default Value:** `1.1`

  - **Description:**

    ```text
Hysteresis period when adaption (from zone change) is done before next adaption.
    ```

- **wh_cs_AutomationAction_ZoneChangeAttackSequenceMaxCount**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Combat automation - maximum preattack sequence changes.
    ```

- **wh_cs_AutomationAction_ZoneChangeAttackSequenceMinCount**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Combat automation - minimal preattack sequence changes.
    ```

- **wh_cs_AutomationAction_ZoneChangeComboOppositeStanceWeight**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Combo zone weight when stances are opposite.
    ```

- **wh_cs_AutomationAction_ZoneChangeComboSameStanceWeight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Combo zone weight when stances are same.
    ```

- **wh_cs_AutomationAction_ZoneChangeComboSameZoneWeight**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Combo zone weight when zones are same.
    ```

- **wh_cs_AutomationAction_ZoneChangeDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug AI automation: Enables zone selection debug draw.
    ```

- **wh_cs_AutomationAction_ZoneChangePhysicalZoneTimer**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Delay for physical zone behind guard zone.
    ```

- **wh_cs_AutomationAction_ZoneChangeQualityTimingCoef**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Debug AI automation: Coef <0, 1> for maximal speedup of zone timing for whorse combinations.
    ```

- **wh_cs_AutomationAction_ZoneChangeRestrictionTimer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Checking period of zone validity by restriction.
    ```

- **wh_cs_AutomationAction_ZoneChangeRestrictionWeight**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Weight multiplier for restricted zone by enviro.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceChangeGap**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Combat automation - time gap between changes.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceMaxCount**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Combat automation - maximum sequence changes.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceMaxTimeMax**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Combat automation - max time between natural sequences for max fencing.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceMaxTimeMin**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Combat automation - max time between natural sequences for min fencing.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceMinCount**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Combat automation - minimal sequence changes.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceMinTimeMax**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Combat automation - min time between natural sequences for max fencing.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceMinTimeMin**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Combat automation - min time between natural sequences for min fencing.
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceSkillBonus**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Combat automation - skill bonus for change zone timing (lower skill longer time).
    ```

- **wh_cs_AutomationAction_ZoneChangeSequenceTime**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Combat automation - safe time between sequence changes.
    ```

- **wh_cs_AutomationAction_ZoneChangeToAttackMinDelay**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Combat automation - min time between zone change and attack (for visual quality).
    ```

- **wh_cs_AutomationAction_ZoneChangeUpdateInterval**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Combat automation - defines frequency for updating zone change params.
    ```

- **wh_cs_BattleDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw fot battle manager.
    ```

- **wh_cs_BattleDebugDrawFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filtering for battle debug draw by control entity.
    ```

- **wh_cs_BattleMaxIdleAnimationTimeOffset**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Maximum time offset of idle animation when creating a idle sequence.
    ```

- **wh_cs_BattleMaxIdleAnimationTimeScale**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Maximum time scale of idle animation when creating a idle sequence.
    ```

- **wh_cs_BattleMaximumDeadNPC**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Maximum count of dead NPCs on the scene. When there is more the oldest will disappear.
    ```

- **wh_cs_BattleMaximumNPC**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum full and alive NPC on the battle field excluding player.
    ```

- **wh_cs_BattleMaximumShooterAngle**:

  - **Default Value:** `70`

  - **Description:**

    ```text
Maximum angle deviation of shooter directed to his target.
    ```

- **wh_cs_BattleMaximumShooterDistance**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Maximum distance for shooter targeting.
    ```

- **wh_cs_BattleShooterAngleWeight**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Weight for angle priority component.
    ```

- **wh_cs_BattleShooterDistanceWeight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Weight for distance priority component.
    ```

- **wh_cs_BattleShootingAimingMultiplier**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Multiplier of aiming period for battle shooters.
    ```

- **wh_cs_BattleShootingAimingVariation**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Variation for aiming period for battle shooters.
    ```

- **wh_cs_BehindCollisionIgnoreThreshold**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Ignores all collision that y-coord is lesser than the value.
    ```

- **wh_cs_BigTurnThreshold**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Big turn animation is used to turn a character above this angle.
    ```

- **wh_cs_BlockCooldown**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Cooldown for player block trigger.
    ```

- **wh_cs_BlockWithdrawalBlendWeightLoss**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Blendweight loss for blocking move back when obstacle found.
    ```

- **wh_cs_BrokenBlockInterruptWhenDestroyedWeapon**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Broken block is interrupted when weapon is destroyed after this time.
    ```

- **wh_cs_BrokenBlockOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Override for broken blocks for testing purposes 0 - by rpg, 1 - broken, 2 - normal blocks.
    ```

- **wh_cs_CanAlmostHitOffset**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Offset from max attack distance limiting area for potential threat.
    ```

- **wh_cs_ChargedAttackOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Override for charged RPG state used for testing purposes.
    ```

- **wh_cs_ClenchedHandOverlapTime**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Overlap in seconds for clenched hand action after request ends.
    ```

- **wh_cs_Combat3PCameraFOV**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Combat 3P camera default FOV.
    ```

- **wh_cs_CombatAnimCameraBlendOut**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Combat anim camera blend out [s].
    ```

- **wh_cs_CombatAnimCameraSmooth**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Combat anim camera smoothing.
    ```

- **wh_cs_CombatCameraStyle**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Combat camera style [0] - Fixed at opponent, [1] - Dynamic
    ```

- **wh_cs_CombatCapsulePosZ**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Position above the ground of additional combat capsule.
    ```

- **wh_cs_CombatCapsuleWidth**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Width of additional combat capsule.
    ```

- **wh_cs_CombatCursorMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Cursor mode in combat - 0 - completely hidden, 1 - normal mode, 2 - HC mode (only dot)
    ```

- **wh_cs_CombatCursorSmoothing**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Smoothing for opponent UI in combat.
    ```

- **wh_cs_ComboSlotDuration**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Duration of combo slot
    ```

- **wh_cs_CombosEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Combo mechanic is enabled.
    ```

- **wh_cs_CursorOffsetDog**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Z offset of combat cursor for dog.
    ```

- **wh_cs_CursorOffsetNPC**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Z offset of combat cursor for NPC.
    ```

- **wh_cs_DBQueryCache**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables cache for database queries.
    ```

- **wh_cs_DBQueryProfiling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables profiling of database queries.
    ```

- **wh_cs_DeadBodyDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for dead body manager.
    ```

- **wh_cs_DeadBodyDebugDrawFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filtering for deadbody debug draw by control entity.
    ```

- **wh_cs_DeathSyncHitHPTolerance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Threshold when resting HP is considered as fatal and opponent dies.
    ```

- **wh_cs_DebugAI**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug AI
    ```

- **wh_cs_DebugAnimDebug**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables animation debug draw for defined battle soul.
    ```

- **wh_cs_DebugAttackStart**:

  - **Default Value:** `0`

  - **Description:**

    ```text
AttackStart activation for debug wioth cvar. 1 for activation, 2 for deactivation
    ```

- **wh_cs_DebugCameraOverride**:

  - **Default Value:** ``

  - **Description:**

    ```text
Override for combat camera. Allows incarnate camera to the npc in the combat.
    ```

- **wh_cs_DebugCombatActions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Detailed information about combat actions in the log.
    ```

- **wh_cs_DebugCombatGroups**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Debug draw for combat groups. 1 - dumping history when some safe check fails, 2 - osd debug draw of the groups
    ```

- **wh_cs_DebugDrawAttackActions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable visual debug of attack actions.
    ```

- **wh_cs_DebugDrawLods**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables lod manager debug draw
    ```

- **wh_cs_DebugDrawPlayerInput**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable visual debug of player input.
    ```

- **wh_cs_DebugDrawQuery**:

  - **Default Value:** ``

  - **Description:**

    ```text
Show query debug for specified actor.
    ```

- **wh_cs_DebugFilter**:

  - **Default Value:** `BASIC|MODEL|TIME_COP|ACTOR_ACTION|ACTOR_ACTION_HELPER|PROCEDURAL_CLIP|ALIGNMENT|MODIFIER|COMBO_MANAGER|CAMERA_CONTROL|DEBUG_AI_BRAIN|WEAPON_SOLVER|OPPONENT_MANAGER|MANNEQUIN|GUARD_VARIATION_SYSTEM|CLENCHED_HAND`

  - **Description:**

    ```text

    ```

- **wh_cs_DebugHitStrength**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug hit strength overriding rpg for debuggin weak and strong hits.
    ```

- **wh_cs_DebugIdleTurns**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug idle turns.
    ```

- **wh_cs_DebugInfo**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enable combat system debug info. You can provide entity name or 1.
    ```

- **wh_cs_DebugInfoPosY**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Define combat system debug info position in Y
    ```

- **wh_cs_DebugIsAimedOff**:

  - **Default Value:** ``

  - **Description:**

    ```text
Disables state IsAimed on given actor.
    ```

- **wh_cs_DebugIsAimedOn**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables state IsAimed on given actor.
    ```

- **wh_cs_DebugObstacleMask**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow filter obstacle test to debug draw.
    ```

- **wh_cs_DebugObstacleTestTarget**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for obstacles test on given entity.
    ```

- **wh_cs_DebugOpponent**:

  - **Default Value:** ``

  - **Description:**

    ```text
Set debug opponent which can then controlled with a keyboard.
    ```

- **wh_cs_DebugPhys**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable combat system debug info for physics
    ```

- **wh_cs_DebugPlayer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force debug AI to select player as opponent
    ```

- **wh_cs_DebugShowCombatDebugInTests**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Indicates when debug draw should be visible during tests.
    ```

- **wh_cs_DelayedBlock**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Delay for AI blocks in s.
    ```

- **wh_cs_DelayedMasterStrikeInSlot**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Delay for auto master strike in slot <0, 1>. Enabled with with in master strike slot
    ```

- **wh_cs_DelayedPerfectBlockInSlot**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Delay for AI blocks in slot <0, 1>. Enabled with PB blocks.
    ```

- **wh_cs_DelayedRiposteInSlot**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Delay for auto riposte in slot <0, 1>. -1 for disable
    ```

- **wh_cs_DisableCombatCamera**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables combat camera.
    ```

- **wh_cs_DisablePlayerOpponentSelection**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable standard selection of opponent for player for tests.
    ```

- **wh_cs_DisableScripts**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables Lua scripts - movement.
    ```

- **wh_cs_DisableWeakBlock**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables weak block feature.
    ```

- **wh_cs_DisabledAttackDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces interrupted attacks for debugging.
    ```

- **wh_cs_DisabledAttackTimeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Timeout to interrupt attack after R2S.
    ```

- **wh_cs_Dodge_DistanceFactorOverride**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Override dodge distance factor for debugging.
    ```

- **wh_cs_Dodge_Duration**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Duration of entity dodge movement (player value).
    ```

- **wh_cs_Dodge_IgnoreCollision**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When nonzero dodging actor will ignore weapon collision with his attacker.
    ```

- **wh_cs_Dodge_MaxDistance**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Max distance (m) for dodge movement (player value).
    ```

- **wh_cs_Dodge_SpatialTimeLimit**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Time limit in percent from dodge animation to get spatial data.
    ```

- **wh_cs_Dodge_WindowMod**:

  - **Default Value:** `0.65`

  - **Description:**

    ```text
Mod of Dodge slot window - determined as (t_hit - t_dodgeslot) from attack x this value.
    ```

- **wh_cs_DogClinchOpponentAlignmentOffset**:

  - **Default Value:** `-0.5`

  - **Description:**

    ```text
Alignment offset when my opponent is in clinch with a dog.
    ```

- **wh_cs_DonotUseDatabaseIndices**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Bypass database optimization indices in combat databases.
    ```

- **wh_cs_EnableCollisionResizing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables to enlarge capsule collision in combat mode.
    ```

- **wh_cs_EnableCombatGroups**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable combat groups for combat.
    ```

- **wh_cs_EnableNavmeshTest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables navmesh tests for some action types.
    ```

- **wh_cs_EnableStealthActions**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables stealth actions
    ```

- **wh_cs_EnvSpatialGridRefreshRate**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Determines how often is updated environmental spatial grid (in sec)
    ```

- **wh_cs_EventIdleCooldown**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Cooldown for idle event when both combatants are in guard.
    ```

- **wh_cs_EventIdleCooldownVar**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Variation for idle event.
    ```

- **wh_cs_EventIdleFollowingCooldown**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Cooldown for idle event when actor stays in the guard longer.
    ```

- **wh_cs_EventIdleFollowingCooldownVar**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Variation for EventIdleFollowingCooldown.
    ```

- **wh_cs_FixedCombatCursor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Combat cursor is fixed in the middle of the screen.
    ```

- **wh_cs_ForceAttack**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force AI to Attack by: 0 - disabled, 1 - riposte, 2 - attack every 8s and, riposte,  3 - no attack, 4 - riposte, player riposte, 5 - attack with figl
    ```

- **wh_cs_ForceBlock**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force AI to block by: 0 - disabled, 1 - normal block, 2 - perfect block, 3 - no block, 4 - broken block, 5 - master strike
    ```

- **wh_cs_ForceDodge**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force AI to dodge by: 0 - disabled, 1 - back, 2 - right, 3 - left
    ```

- **wh_cs_ForceLod**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forces combat LOD: 0..high, 1..med, 2..low
    ```

- **wh_cs_ForceZone**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Force combat zone selection by: -1 - disabled, 0-4 zones z0-z4
    ```

- **wh_cs_FreeBlockPreparingDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Delay before actor set PARRY_IN_PLACE in free blocks.
    ```

- **wh_cs_GuardVariationActionTimer**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Delay for idle var after combat action.
    ```

- **wh_cs_GuardVariationNonPrimaryTargetMinDistance**:

  - **Default Value:** `2.8`

  - **Description:**

    ```text
Minimal distance to target (which is not targetting me) when idle var is allowed to start.
    ```

- **wh_cs_GuardVariationOneShotPeriod**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Average time for planning one shot animation in Guard variation system.
    ```

- **wh_cs_GuardVariationOneShotVar**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Variation time for planning one shot animation in Guard variation system.
    ```

- **wh_cs_GuardVariationOpponentActionTimer**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Delay when threat is about to do some action.
    ```

- **wh_cs_GuardVariationPrimaryTargetMinDistance**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Minimal distance to target (which is targetting me) when idle var is allowed to start.
    ```

- **wh_cs_GuardVariationStartCombatTimer**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Delay for idle var after combat start.
    ```

- **wh_cs_GuardVariationUpdatePeriod**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Period [s] for updating variation system.
    ```

- **wh_cs_HitReactions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables combat hit reactions
    ```

- **wh_cs_HorsePullDownAngle**:

  - **Default Value:** `55`

  - **Description:**

    ```text
Defines max XY angle to do pulling down action. It is half angle from the center of horse.
    ```

- **wh_cs_HorsePullDownForce**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forse horse pulldown action to always succeeded (=1) of fail (=2).
    ```

- **wh_cs_HorsePullDownZAngle**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Defines max Z angle to do pulling down action.
    ```

- **wh_cs_HorsePullDownZeroAngle**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Zero angle for computation during pull down from horse. The result angle limit is HorsePullDownZeroAngle +/- HorsePullDownAngle.
    ```

- **wh_cs_HuntAttackAttackerMinLogical**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimal pseudospeed of attacker to enable hung attack.
    ```

- **wh_cs_HuntAttackDebugMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug mode that all input conditions are skipped.
    ```

- **wh_cs_HuntAttackDisableVelocity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable velocity checks for debugging.
    ```

- **wh_cs_HuntAttackFwdAngleLimit**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Angle limit in deg for forward hunt attack selection
    ```

- **wh_cs_HuntAttackMoveWeight**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Weight for movement compensation of actors.
    ```

- **wh_cs_HuntAttackOppFwdMovementAngleLimit**:

  - **Default Value:** `90`

  - **Description:**

    ```text
Angle limit in deg for forward movement of victim to prevent hunt attack during backward movement
    ```

- **wh_cs_HuntAttackVictimMinLogical**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal pseudospeed of victim to enable hung attack.
    ```

- **wh_cs_IdleTurnDuration**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Threshold angle to requeue idle turn animations with trumping.
    ```

- **wh_cs_IdleTurnInterruptionThreshold**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Threshold angle to requeue idle turn animations with trumping.
    ```

- **wh_cs_IdleTurnPredictionTimeout**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Small amount of time to postpone turn angle prediction.
    ```

- **wh_cs_IgnoreHitDuringDeathTimer**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Cooldown for preventing hits during death reactions.
    ```

- **wh_cs_IntentionalTargetAngleDefault**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Angle to detect intentional hit for non-player-actors.
    ```

- **wh_cs_IntentionalTargetAngleLimitOpponentCount**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of actors near target actos as threshold for lerp <min,max> angle.
    ```

- **wh_cs_IntentionalTargetAngleMax**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Max angle to detect intentional hit when in radius around actor is 0 actors.
    ```

- **wh_cs_IntentionalTargetAngleMin**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Minimal angle to detect intentional hit when in radius around actor is IntentionalTargetAngleLimitOpponentCount+ actors.
    ```

- **wh_cs_IntentionalTargetAngleRadius**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
Radius around actor to detect other actors.
    ```

- **wh_cs_LegWeaponRadius**:

  - **Default Value:** `0.14`

  - **Description:**

    ```text
Radius of unarmed leg (sphere).
    ```

- **wh_cs_LockedAttackDistanceTolerance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Max distance from optimal hit distance to approximate angle in that distance.
    ```

- **wh_cs_LockedAttackMaxAngle**:

  - **Default Value:** `1.0472`

  - **Description:**

    ```text
Maximal angle between combatants for locked attacks.
    ```

- **wh_cs_LockedAttackMaxAngleDogVsNPC**:

  - **Default Value:** `0.349066`

  - **Description:**

    ```text
Maximal angle between combatants for locked attacks when attacker is dog and opponent NPC.
    ```

- **wh_cs_LockedAttackMaxAngleDogVsPlayer**:

  - **Default Value:** `0.698132`

  - **Description:**

    ```text
Maximal angle between combatants for locked attacks  when attacker is dog and opponent player.
    ```

- **wh_cs_LockedAttackZAngle**:

  - **Default Value:** `1.0472`

  - **Description:**

    ```text
Maximal Z angle between combatants for locked attacks.
    ```

- **wh_cs_LockedAttackZTolerance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Max Z difference between combatants to ignore angle test.
    ```

- **wh_cs_LodAmbientDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Distance limit for ambient lod.
    ```

- **wh_cs_LodBattleDistanceModifier**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Distance modifier for lod distances in battle.
    ```

- **wh_cs_LodFarDistance**:

  - **Default Value:** `14`

  - **Description:**

    ```text
Distance limit for far lod.
    ```

- **wh_cs_LodNearDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Distance limit for near lod.
    ```

- **wh_cs_LogicalBlockMaxAngle**:

  - **Default Value:** `1.0472`

  - **Description:**

    ```text
Maximal angle between combatants logical block.
    ```

- **wh_cs_MasterStrikeOnRiposteTimeOffset**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Time offset of the seek when MS is made against riposte which is shorter.
    ```

- **wh_cs_MaxAttackDistanceDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for max attack distance.
    ```

- **wh_cs_MaxAttackDistanceMoveOffset**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Max offset for dynamic move part of attack distance computation.
    ```

- **wh_cs_MaxAttackDistanceMoveOffsetStiffness**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Spring stiffness for smotting of max attack distance.
    ```

- **wh_cs_MaxAttackRotationDeviation**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Max angle deviation from direct dir to opponent [degrees].
    ```

- **wh_cs_MaxFakeCollisionDistance**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Maximum distance to player when fake collision can appear.
    ```

- **wh_cs_MaxIdleTurnTimeout**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximal timeout before automatic idle turns.
    ```

- **wh_cs_MinIdleTurnTimeout**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimal timeout before automatic idle turns.
    ```

- **wh_cs_MinimalTurnThreshold**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Minimal angle required to initiate turning.
    ```

- **wh_cs_MinimalTurnThresholdByTime**:

  - **Default Value:** `14`

  - **Description:**

    ```text
Minimal angle required to initiate turning after time.
    ```

- **wh_cs_MinimalTurnThresholdWhenTurning**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Minimal angle required finish tutning when already turning.
    ```

- **wh_cs_MoveCooldown**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Cooldown for player move (dodge).
    ```

- **wh_cs_NoCombatArmedAlignmentOffset**:

  - **Default Value:** `-0.2`

  - **Description:**

    ```text
Alignment offset in unarmed combat when one combatant is not in combat.
    ```

- **wh_cs_NoCombatUnarmedAlignmentOffset**:

  - **Default Value:** `-0.3`

  - **Description:**

    ```text
Alignment offset in unarmed combat when one combatant is not in combat.
    ```

- **wh_cs_OnlyBigTurns**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use only big turns animations during combat.
    ```

- **wh_cs_OpenSlotFOVBiasNPC**:

  - **Default Value:** `45`

  - **Description:**

    ```text
FOV bias for opening slot when blocker is NPC.
    ```

- **wh_cs_OpenSlotFOVBiasPlayer**:

  - **Default Value:** `35`

  - **Description:**

    ```text
FOV bias for opening slot when blocker is player.
    ```

- **wh_cs_OpponentManagerBruteForce**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Iterate through all actors! (AI grid wont be used)
    ```

- **wh_cs_PLSkillProfile**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Skill profile for player.
    ```

- **wh_cs_PLSlotDurationMod**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Custom RPG Mod of riposte slot - 0 = lama, 0.5 = standard, 1 = profa
    ```

- **wh_cs_PerfectBlock_RetargetAngleFOVBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Bias to camera FOV for PB which reacts to attacks from different actor to retarget to this actor.
    ```

- **wh_cs_PerfectBlock_SpatialVolumeRadius**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Radius for spatial test limiting perfect block possibility.
    ```

- **wh_cs_PhysHitReaction_ImpactCoef**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Physical hit reaction simulation - impact coefficient.
    ```

- **wh_cs_PhysSim**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Physical simulation.
    ```

- **wh_cs_PhysWeaponColSim_ImpactCoef**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Physical weapon collision simulation - impact coefficient.
    ```

- **wh_cs_PhysWeaponHitReaction_ImpactCoef**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Physical weapon hit reaction simulation - impact coefficient.
    ```

- **wh_cs_PlayerAttackInactivityDuration**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Duration to detect player inactivity (healing enabled in battles)
    ```

- **wh_cs_PlayerAttackInactivityDurationVsDog**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Duration to detect player inactivity when last opponent is a dog
    ```

- **wh_cs_PlayerDistanceTolerance**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Attack distance tolerance for Player.
    ```

- **wh_cs_PlayerFreeAttackMinDistance**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Min distance for uninterrupted free attack in front of an obstacle.
    ```

- **wh_cs_PlayerFreeAttackPrepareTime**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Time in sec for prepare attack during free attack. The attack action is started after that time.
    ```

- **wh_cs_PlayerFreeAttackStabMinDistance**:

  - **Default Value:** `1.3`

  - **Description:**

    ```text
Min distance for uninterrupted free attack in front of an obstacle for stabbing.
    ```

- **wh_cs_PlayerFreeCameraModeGamepadDeadZone**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Dead zone in free camera mode for gamepad
    ```

- **wh_cs_PlayerFreeCameraModeMouseDeadZone**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Dead zone in free camera mode for mouse
    ```

- **wh_cs_PlayerHorizontalUnlockDelay**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Delay before player unlocks from opponent when moving in horizontal direction.
    ```

- **wh_cs_PlayerInputBypass**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables combat input
    ```

- **wh_cs_PlayerInputCombatAngleAfterKill**:

  - **Default Value:** `-0.698132`

  - **Description:**

    ```text
Limit X-axis angle when player is unlocked from opponent after kill.
    ```

- **wh_cs_PlayerInputCombatDelayAfterKill**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Time in sec to end combat for player when he destroys the opponent.
    ```

- **wh_cs_PlayerInputCombatDelayAfterKillWithOtherOpponent**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Time in sec to end combat for player when he destroys the opponent and different opponent is near.
    ```

- **wh_cs_PlayerInputCombatUnlockDelay**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Time in sec to unlock from combat when player changes target with mouse.
    ```

- **wh_cs_PlayerInputCursorUnlockDistance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Minimal angle to unlock cursor.
    ```

- **wh_cs_PlayerInputGamepadSensitivity**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Camera movement minimal sensitivity when lock on opponent for gamepad.
    ```

- **wh_cs_PlayerInputGamepadUnlockMinDistanceToUnlock**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Minimal distance to process unlock with gamepad.
    ```

- **wh_cs_PlayerInputGamepadUnlockMinTime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimal time to allow unlocking from selected opponent with gamepad.
    ```

- **wh_cs_PlayerInputGamepadUnlockMinTimeSameZone**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Minimal time to allow unlocking from selected opponent with gamepad.
    ```

- **wh_cs_PlayerInputGamepadUnlockReturnTime**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Time spent in unlock mode when gamepad movement is still before return to lock mode.
    ```

- **wh_cs_PlayerInputIndicator**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Indicator of unlocking is visible in combat.
    ```

- **wh_cs_PlayerInputLockAreaWidth**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Distance from opponent in metres to start locking (X axis).
    ```

- **wh_cs_PlayerInputLockAreaWidthNoCombat**:

  - **Default Value:** `1.9`

  - **Description:**

    ```text
Distance from opponent in metres to start locking (X axis) when player is not in combat.
    ```

- **wh_cs_PlayerInputLockingTolerance**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Player input - Screen distance vertical tolerance from target defining locking area. (in percentage of vertical screenspace
    ```

- **wh_cs_PlayerInputMouseSensitivity**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Camera movement minimal sensitivity when lock on opponent for mouse.
    ```

- **wh_cs_PlayerInputMouseUnlockMinDistanceToUnlock**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Minimal distance to process unlock with mouse.
    ```

- **wh_cs_PlayerInputMouseUnlockMinOppAngle**:

  - **Default Value:** `35`

  - **Description:**

    ```text
Angle to opponent which will reset total distance to unlock.
    ```

- **wh_cs_PlayerInputMouseUnlockMinTime**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Minimal time to allow unlocking from selected opponent with mouse.
    ```

- **wh_cs_PlayerInputMouseUnlockReturnTime**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Time spent in unlock mode when mouse movement is still before return to lock mode.
    ```

- **wh_cs_PlayerInputMouseUnlockXThreshold**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Angle X-axis that limits view in camera unlocked mode.
    ```

- **wh_cs_PlayerInputMouseUnlockZThreshold**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Angle Z-axis that limits view in camera unlocked mode.
    ```

- **wh_cs_PlayerInputMouseUnlocking**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable mouse movement unlocking for player
    ```

- **wh_cs_PlayerInputMouseZoneChangeMinDistance**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Minimal distance to allow zone change with mouse.
    ```

- **wh_cs_PlayerInputMouseZoneChangeMinTime**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Minimal time to allow zone change with mouse.
    ```

- **wh_cs_PlayerInputMouseZoneChangePreventionAfterAction**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Safety cooldown after action where attack zone change is forbidden.
    ```

- **wh_cs_PlayerInputMouseZoneChangeSensitivity**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Sensitivity for change zone with mouse. 20 - super sensitive, 0 - minimal sensitivity
    ```

- **wh_cs_PlayerInputUnlockAreaWidthHyst**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Unlock hysterezis distance. PlayerInputLockAreaWidth + PlayerInputUnlockAreaWidthHyst gives unlock distance
    ```

- **wh_cs_PlayerLockDisabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables player locking functionality.
    ```

- **wh_cs_PlayerLockOpponentAngleBias**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Bias of FOV angle to lock to opponent.
    ```

- **wh_cs_PlayerMaxOpponentAngleToLock**:

  - **Default Value:** `0.785398`

  - **Description:**

    ```text
Maximum possible angle to opponent to lock to combat.
    ```

- **wh_cs_PlayerMaxOpponentAngleToUnlock**:

  - **Default Value:** `0.872665`

  - **Description:**

    ```text
Maximum possible angle to opponent before player is unlocked from combat.
    ```

- **wh_cs_PlayerMaxOpponentDistanceToLock**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum distance to player lock.
    ```

- **wh_cs_PlayerMaxOpponentDistanceToUnlock**:

  - **Default Value:** `7`

  - **Description:**

    ```text
Maximum distance to player unlock.
    ```

- **wh_cs_PlayerMaxThreatDistance**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Range for IsThreatNearby detection of threat.
    ```

- **wh_cs_PlayerNormalAttackOffset**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Relative time offset for player's normal attacks.
    ```

- **wh_cs_PlayerTutorialStep**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debugger trigger of combat tutorial step. [1-?, 0 disabled]
    ```

- **wh_cs_PlayerUnlockTimeout**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Timeout to unlock player from opp when his visibility is lost.
    ```

- **wh_cs_PlayerVIPTargetAttackDot**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Maximum dot product that allows attack even when VIP target is closer than opponent.
    ```

- **wh_cs_PlayerVerticalUnlockDelay**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Delay before player unlocks from opponent when moving in vertical direction.
    ```

- **wh_cs_PosAlignmentInterruptionZAngleThreshold**:

  - **Default Value:** `50`

  - **Description:**

    ```text
When z angle between two combatants reach this level position alignment is interrupted.
    ```

- **wh_cs_PreBlockRestartCooldown**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Preblocks delay after a block action.
    ```

- **wh_cs_ProcessSyncHits**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabled update sync hits. It is disabled by default since this operation should do only databuilder.
    ```

- **wh_cs_Profiling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enabled profiling in combat -> disables all code which is not in master.
    ```

- **wh_cs_RepeatHitTimeout**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Timeout for repeated hit to the same entity.
    ```

- **wh_cs_RiderWeaponCollisionLen**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Lenght of extra collision for weapon held by rider to have better range.
    ```

- **wh_cs_RipostePerfectBlockZoneDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allowed distance from blocking zone when searching for attack part of riposte perfect block.
    ```

- **wh_cs_RiposteSlotDuration**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Basic riposte slot duration.
    ```

- **wh_cs_ShowCombatUI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enabled combat UI for testing purposes.
    ```

- **wh_cs_ShowComboZonesUI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Show combo zones on combat cross.
    ```

- **wh_cs_ShowEnvSpatialGrid**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable visual debug of environment.
    ```

- **wh_cs_ShowLiveSpatialGrid**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show runtime spatial grid for debugging.
    ```

- **wh_cs_ShowPreprocessedSpatialGrid**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show preprocessed spatial grid for debugging.
    ```

- **wh_cs_ShowRiposteUI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable riposte slot UI.
    ```

- **wh_cs_SignificantDeviationAngle**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Allow idle turn when deviation is greater than this value even when movement restriction is set in the guard.
    ```

- **wh_cs_SlotEndHitOffset**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Delay of slot to automatic start from action.
    ```

- **wh_cs_SpatialGridBlendSpace**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Determines blendspace of debug spatial grid to show.
    ```

- **wh_cs_SpatialGridBlendSpaceDistance**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Distance between blendspace samples for grid array (in metres).
    ```

- **wh_cs_SpatialGridDisection**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Spatial grid disections (333 or 332 etc)
    ```

- **wh_cs_SpatialGridDisectionPlayerAddition**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Spatial grid suffix used for player (333 or 332 etc)
    ```

- **wh_cs_SpatialGridPreprocess**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables spatial analyzation during preprocessing.
    ```

- **wh_cs_SpatialGridRadius**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Spatial grid radius.
    ```

- **wh_cs_SpatialGridWeaponLength**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Length of weapon to consider in spatial grid.
    ```

- **wh_cs_StandardSlotDuration**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Standard slot duration.
    ```

- **wh_cs_StaticAttackCooldown**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Cooldown for player static attack.
    ```

- **wh_cs_StealthActionAngle**:

  - **Default Value:** `135`

  - **Description:**

    ```text
Defines max victim view angle (in degrees) enabling a stealth action.
    ```

- **wh_cs_StealthActionDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Defines max distance from victim alowing a stealth action.
    ```

- **wh_cs_StealthActionLyingAngle**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Defines frustrum angle next to laying victim limiting stealth actions.
    ```

- **wh_cs_StealthActionMaxAngle**:

  - **Default Value:** `0.523599`

  - **Description:**

    ```text
Maximal angle between combatants for stealth kills.
    ```

- **wh_cs_StealthAlwaysSuccess**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Stealth kill action always succeeds.
    ```

- **wh_cs_StealthDisableAIBackoff**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disabling backoff for AI during stealth kill.
    ```

- **wh_cs_StealthDisableAIPerfectBlock**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disabling PB for AI during stealth kill.
    ```

- **wh_cs_StealthTimewarpDurationOverride**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug stealth slot duration.
    ```

- **wh_cs_StealthTimewarpSpeed**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Stealth kill timewarp speed.
    ```

- **wh_cs_SyncGuardAutoTriggerMaxVelocity**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Max velocity for autotriggering sync guards.
    ```

- **wh_cs_SyncGuardAutoTriggerMinVelocity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Min velocity for autotriggering sync guards.
    ```

- **wh_cs_SyncGuardAutoTriggerMoveWeight**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Coef for movement part pushing limit of auto sync guards.
    ```

- **wh_cs_SyncGuardBackoffTimer**:

  - **Default Value:** `2`

  - **Description:**

    ```text
After this time from start of sync guard will be backoff action available.
    ```

- **wh_cs_SyncGuardMaxXYAngle**:

  - **Default Value:** `0.698132`

  - **Description:**

    ```text
Maximal XY angle between combatants for sync guards.
    ```

- **wh_cs_SyncGuardMaxZAngle**:

  - **Default Value:** `0.698132`

  - **Description:**

    ```text
Maximal Z angle between combatants for sync guards.
    ```

- **wh_cs_SyncGuardkDistanceTolerance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Max distance from optimal sync distance to approximate angle in that distance.
    ```

- **wh_cs_SyncSlotEndHitOffset**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Delay of slot to automatic start from action.
    ```

- **wh_cs_TargetUseSpineBone**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Uses spine3 for targeting opponent.
    ```

- **wh_cs_ThreatenedTargetsSelectionDistanceBias**:

  - **Default Value:** `-0.1`

  - **Description:**

    ```text
Distance bias which is added to max attack distance to limit free attack threatening.
    ```

- **wh_cs_ThreatenedTargetsSelectionDistanceOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Override distance when free attacks are considered as threatening. 0 = off, max attack distance is used
    ```

- **wh_cs_ThreatenedTargetsSelectionFOV**:

  - **Default Value:** `80`

  - **Description:**

    ```text
FOV angle along player dir that limits selection of threatened actors.
    ```

- **wh_cs_TimeAlignment_BlockSpeedMod**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Modifier for blocking time alignment to right state switch
    ```

- **wh_cs_TimeAlignment_ImpulseMinSpeed**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Minimal const speed bias for time addition by impulse solver.
    ```

- **wh_cs_TimeAlignment_MaxAnimAddition**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Maximal time which can be added to running animation to move sync point.
    ```

- **wh_cs_TimeAlignment_MaxAttackSpeedBias**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximal value of speed bias for time dilatation in attacks
    ```

- **wh_cs_TimeAlignment_MaxBlockSpeedBias**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximal value of speed bias for time dilatation in blocks
    ```

- **wh_cs_TimeAlignment_MinAttackSpeedBias**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Minimal value of speed bias for time dilatation in attacks
    ```

- **wh_cs_TimeAlignment_MinBlockSpeedBias**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Minimal value of speed bias for time dilatation in blocks
    ```

- **wh_cs_TimeAlignment_MinConstSpeedBias**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Minimal const speed bias for time addition in timing.
    ```

- **wh_cs_TimeAlignment_SlotDelayDuration**:

  - **Default Value:** `0.07`

  - **Description:**

    ```text
This slowdown animation around place defined by 'SlotDelay' combat event proc clip.
    ```

- **wh_cs_TimeWarpDurationOpp**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Time of fade out during PB time warp defined relative to hit point.
    ```

- **wh_cs_TimeWarpDurationPlayer**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Time of fade out during PB time warp defined relative to hit point.
    ```

- **wh_cs_TimeWarpFadeIn**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Time of fade in during PB time warp defined relative to hit point.
    ```

- **wh_cs_TimeWarpFadeOut**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Time of fade out during PB time warp defined relative to hit point.
    ```

- **wh_cs_TimeWarpMSFadeSpeedForOpp**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Timewarp speed during oppponent MS action.
    ```

- **wh_cs_TimeWarpPBFadeSpeedForOpp**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Speed of PB time warp when player has opened PB slot on riposte. 1 - disabled
    ```

- **wh_cs_TimeWarpPBFadeSpeedForPlayer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Speed of PB time warp when player is doing PB. 1 - disabled
    ```

- **wh_cs_TimeWarpSyncPBFadeIn**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Timewarp fade in for sync guards.
    ```

- **wh_cs_TimewarpStealthPBSpeedForOpp**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Timewarp speed during sync PB slot in sync guards.
    ```

- **wh_cs_TimewarpSyncPBSpeedForOpp**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Timewarp speed during sync PB slot in sync guards.
    ```

- **wh_cs_TraceMNDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Trace mn_debugs of all CA in combat to trace.
    ```

- **wh_cs_TutorialSlotActionFadeIn**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Tutorial slot action - fade in of time warp effect.
    ```

- **wh_cs_TutorialSlotActionFadeOut**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Tutorial slot action - fade out of time warp effect.
    ```

- **wh_cs_UnarmedTargetToHeadBone**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Rotation alignment target headbone instead of reference.
    ```

- **wh_cs_UnarmedVsArmedAlignmentOffsetOppositeStance**:

  - **Default Value:** `-0.14`

  - **Description:**

    ```text
Alignment offset in unarmed combat when opponent is armed.
    ```

- **wh_cs_UnarmedVsArmedAlignmentOffsetSameStance**:

  - **Default Value:** `-0.12`

  - **Description:**

    ```text
Alignment offset in unarmed combat when opponent is armed.
    ```

- **wh_cs_UseDudeInTests**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Replace one soul in tests with dude. 1 - for first soul, 2 - for second soul
    ```

- **wh_cs_WeaponCollisionCCDPosBias**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Collidion weapon position bias value used to eliminate CCD error.
    ```

- **wh_cs_WeaponDisableOffhand**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Forces disabled offhand for weapon solver
    ```

- **wh_cs_WeaponProcDisableOffhand**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Forces disabled offhand for weapon solver
    ```

- **wh_cs_WeaponProcSolver**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Procedural weapon impact solver.
    ```

- **wh_cs_WeaponProcSolverColBlendLimiter**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - blend limit for accepting collisions
    ```

- **wh_cs_WeaponProcSolverColExtraOffset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - extra offset to avoid physical touch between weapon collision and collision point
    ```

- **wh_cs_WeaponProcSolverColFilterFOVOBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - bias for fov angle filtering collisions
    ```

- **wh_cs_WeaponProcSolverDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for procedural weapon impact solver
    ```

- **wh_cs_WeaponProcSolverDebugCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver- enables collision debug draw
    ```

- **wh_cs_WeaponProcSolverForceLOD**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces LOD - 0 disabled, 1 limited colliding time, 2 no collision
    ```

- **wh_cs_WeaponProcSolverImpactArea**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - impact area that is used for computation of impactTime = impactArea / velocity 
    ```

- **wh_cs_WeaponProcSolverLod1Duration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Limits solver simulation for given duration before expected hit
    ```

- **wh_cs_WeaponProcSolverMethod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Switches solver mode = 0 - 1. first collision, 2. continous collisions
    ```

- **wh_cs_WeaponProcSolverNearColDist**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be logically skipped
    ```

- **wh_cs_WeaponProcSolverNearColDistVisualFilter**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be skipped for weapon reaction
    ```

- **wh_cs_WeaponProcSolverPosOffhandFade**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - fade in/out time of offhand position change
    ```

- **wh_cs_WeaponProcSolverProfiling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables profiling of weapon solver.
    ```

- **wh_cs_WeaponProcSolverRecoilEffectDist**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - distance for first recoil effect
    ```

- **wh_cs_WeaponProcSolverRecoilEffectTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - time for first recoil effect
    ```

- **wh_cs_WeaponProcSolverRecoveryIKBlendThreshold**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - rotation recovery blend threshold for IK blend start (in range (0,1)).
    ```

- **wh_cs_WeaponProcSolverRecoveryTime**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - recovery time.
    ```

- **wh_cs_WeaponProcSolverRotAnimDelaySharpness**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - sharpness of delay of anim controlling rot recovery - coef K in x^K.. - 1 means no delay
    ```

- **wh_cs_WeaponProcSolverRotInterpolatorSel**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - weight betwen two interpolators - following orig anim [0], direct target [1].
    ```

- **wh_cs_WeaponProcSolverRotMaxAnimDeviationAng**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - max delay of targeting animation to real animation in degrees
    ```

- **wh_cs_WeaponProcSolverRotRecoverySharpness**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - sharpness of rot recovery - coef K in x^K..
    ```

- **wh_cs_WeaponProcSolverRotRecoveryTimeMax**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - rotation recovery time min.
    ```

- **wh_cs_WeaponProcSolverRotRecoveryTimeMin**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - rotation recovery time max.
    ```

- **wh_cs_WeaponProcSolverRotSmoothTime**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - start rotation recovery time of smoother [lag in degrees in unit circle 'stiffness'].
    ```

- **wh_cs_WeaponSolver**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Procedural weapon impact solver.
    ```

- **wh_cs_WeaponSolverColBlendLimiter**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - blend limit for accepting collisions
    ```

- **wh_cs_WeaponSolverColExtraOffset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - extra offset to avoid physical touch between weapon collision and collision point
    ```

- **wh_cs_WeaponSolverColFilterFOVOBias**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - bias for fov angle filtering collisions
    ```

- **wh_cs_WeaponSolverDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug draw for procedural weapon impact solver
    ```

- **wh_cs_WeaponSolverDebugCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver- enables collision debug draw
    ```

- **wh_cs_WeaponSolverEnableMultipleCollisions**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables multicollision detection.
    ```

- **wh_cs_WeaponSolverForceEnableMultipleCollisionsOnWeapon**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force enables multicollision detection into weapon.
    ```

- **wh_cs_WeaponSolverForceLOD**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces LOD - 0 disabled, 1 limited colliding time, 2 no collision
    ```

- **wh_cs_WeaponSolverForceMode**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forced procedural weapon mode. -1 means no force.
    ```

- **wh_cs_WeaponSolverForcePenetration**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forces penetration of weapon into body - given number: -1 = disabled force, 0 = force no penetration, >0 = penetration deep [m]
    ```

- **wh_cs_WeaponSolverForceRecoilDuration**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Procedural weapon impact solver forced parameter - recoil effect duration
    ```

- **wh_cs_WeaponSolverForceRecoilIntensityPos**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Procedural weapon impact solver forced parameter - pos intensity of recoil effect (how much anim time is rollbacked
    ```

- **wh_cs_WeaponSolverForceRecoilIntensityRot**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Procedural weapon impact solver forced parameter - rot intensity of recoil effect (how much anim time is rollbacked
    ```

- **wh_cs_WeaponSolverForceStuckDelaySharpness**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Procedural weapon impact solver forced parameter - sharpness of delay of anim controlling pos recovery - coef K in x^K.. - 1 means disabled forcing
    ```

- **wh_cs_WeaponSolverImpactArea**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - impact area that is used for computation of impactTime = impactArea / velocity 
    ```

- **wh_cs_WeaponSolverLod1Duration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Limits solver simulation for given duration before expected hit
    ```

- **wh_cs_WeaponSolverMethod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Switches solver mode = 0 - 1. first collision, 2. continous collisions
    ```

- **wh_cs_WeaponSolverNearColDist**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be logically skipped
    ```

- **wh_cs_WeaponSolverNearColDistVisualFilter**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - distance from weapon bone where all collisions will be skipped for weapon reaction
    ```

- **wh_cs_WeaponSolverPosOffhandFade**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - fade in/out time of offhand position change
    ```

- **wh_cs_WeaponSolverProfiling**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables profiling of weapon solver.
    ```

- **wh_cs_WeaponSolverRecoilEffectDist**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - distance for first recoil effect
    ```

- **wh_cs_WeaponSolverRecoveryDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Duration of weapon recovery phase.
    ```

- **wh_cs_WeaponSolverRecoveryIKBlendThreshold**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - rotation recovery blend threshold for IK blend start (in range (0,1)).
    ```

- **wh_cs_WeaponSolverRecoveryTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - recovery time.
    ```

- **wh_cs_WeaponSolverRotAnimDelaySharpness**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - sharpness of delay of anim controlling rot recovery - coef K in x^K.. - 1 means no delay
    ```

- **wh_cs_WeaponSolverRotInterpolatorSel**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - weight betwen two interpolators - following orig anim [0], direct target [1].
    ```

- **wh_cs_WeaponSolverRotMaxAnimDeviationAng**:

  - **Default Value:** `120`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - max delay of targeting animation to real animation in degrees
    ```

- **wh_cs_WeaponSolverRotRecoverySharpness**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - sharpness of rot recovery - coef K in x^K..
    ```

- **wh_cs_WeaponSolverRotRecoveryTimeMax**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - rotation recovery time min.
    ```

- **wh_cs_WeaponSolverRotRecoveryTimeMin**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - rotation recovery time max.
    ```

- **wh_cs_WeaponSolverRotSmoothTime**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Procedural weapon impact solver parameter - start rotation recovery time of smoother [lag in degrees in unit circle 'stiffness'].
    ```

- **wh_cs_WeaponSolverSlidingDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Duration of weapon sliding phase.
    ```

- **wh_cs_WindowMinWeight**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Weight <0, 1> to minimal window computation. For PB and Riposte.
    ```

- **wh_db_AllowPatching**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allow duplicate primary keys in database parts. Duplicate rows will replace previous rows with same IDs.
    ```

- **wh_dbg_EntityDistanceStats**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `10`

  - **Description:**

    ```text
Sets bracket size.
    ```

- **wh_dbg_EntityDistanceStatsFilter**:

  - **Default Value:** `NPC, NPC_Female, AnimChar`

  - **Description:**

    ```text
Sets which entity classes should be shown. Input a comma separated list of entity class names.
    ```

- **wh_dbg_LabelDistance**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Distance from player where debug labels are showed
    ```

- **wh_dbg_LabelFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter debug labels, separated by commas
    ```

- **wh_dbg_ShowLabels**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show debug labels
    ```

- **wh_de_Enabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug events.
    ```

- **wh_de_Layer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Select layer: 0 - Actor action system.
    ```

- **wh_de_Target**:

  - **Default Value:** `Dude`

  - **Description:**

    ```text
Sets debug events for given entity.
    ```

- **wh_demo_enabledInputEvents**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables input events during timeDemo (both recording and playing)
    ```

- **wh_demo_profile_peak**:

  - **Default Value:** `150`

  - **Description:**

    ```text
WH[VP]: Crytek use 50 as default peak value.
    ```

- **wh_demo_skipLogInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
WH[VP]: We don't want use LogInfo because it write to file on main thread.
    ```

- **wh_demo_variableTime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
WH[VP]: Used for profiling with budgets. Demo is time driven and demo_fixed_timestep is ignored.
    ```

- **wh_dlc_FakeLicense**:

  - **Default Value:** ``

  - **Description:**

    ```text
comma separated numeric IDs of DLCs. Or use * to fake all licenses. If empty real license is used.
    ```

- **wh_dlg_ActorSoundDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws all currently playing actor sounds.
    ```

- **wh_dlg_AutoSkip**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Automatically skips dialog responses.
    ```

- **wh_dlg_CamParam1**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Common camera parameter.
    ```

- **wh_dlg_CamParam2**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Common camera parameter.
    ```

- **wh_dlg_ChatBubbles**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Turns on chat bubbles.
    ```

- **wh_dlg_ChatBubblesDistance**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Chat bubbles visible 
    ```

- **wh_dlg_ChatBubblesMaxOffset**:

  - **Default Value:** `0.16`

  - **Description:**

    ```text
Max offset above eyes.
    ```

- **wh_dlg_ChatBubblesMinOffset**:

  - **Default Value:** `0.12`

  - **Description:**

    ```text
Min offset above eyes.
    ```

- **wh_dlg_ChatBubblesMinScale**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Min scale of buble in default fov.
    ```

- **wh_dlg_ChatBubblesSmoothingSpeed**:

  - **Default Value:** `0.68`

  - **Description:**

    ```text
Smoothing speed for vertical bubble position above NPC head, higher value means faster (less noticeable) smoothing
    ```

- **wh_dlg_ChatBubblesSmoothingThreshold**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
When vertical bubble distance between 2 frames is greater than the specified threshold in meters, the bubble will immediately appear in new position without smoothing
    ```

- **wh_dlg_ChatResponsesLeadTime**:

  - **Default Value:** `3`

  - **Description:**

    ```text
How long (in seconds) chat responses will be available before last response is finished
    ```

- **wh_dlg_CollisionRadius**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Collision capsule radius for head visibility test.
    ```

- **wh_dlg_CreateObstacle**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Creates obstacle around dialog that includes player
    ```

- **wh_dlg_CreateObstacleForIngameNpcDialogues**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Creates obstacle around ingame dialogues between npcs
    ```

- **wh_dlg_DBARoot**:

  - **Default Value:** `Animations/humans/facials/dialog`

  - **Description:**

    ```text
Root folder for DBA archives containing dialogue facial animations
    ```

- **wh_dlg_DebugDrawCamera**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Dialog camera manager debug draw.
    ```

- **wh_dlg_DefaultChatTimeLimit**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Default time limit for chat (in seconds)
    ```

- **wh_dlg_DefaultMaxDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Default max distance of dialogue (in meters), zero means disabled.
    ```

- **wh_dlg_DialogDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Prints list of active dialogs.
    ```

- **wh_dlg_DisplayDecisionIdleTimeout**:

  - **Default Value:** `0`

  - **Description:**

    ```text
How long (seconds) before last used subtitle is displayed on select decision screen.
    ```

- **wh_dlg_Enable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable dialog system. If disabled all NPC's have nothing to say.
    ```

- **wh_dlg_EnableFallbackVoice**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls usage of generated dialogue voiceovers when the actual ones are not dubbed yet
    ```

- **wh_dlg_FacialStreamTimeout**:

  - **Default Value:** `10`

  - **Description:**

    ```text
How long we wait for facial animations to be loaded before we start dialog response.
    ```

- **wh_dlg_ForceCamera**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forced camera mode:
0: disabled
1: Side camera
2: Half detail camera
3: Full detail camera

    ```

- **wh_dlg_ForcePOV**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force POV camera.
    ```

- **wh_dlg_ForcedDecision**:

  - **Default Value:** ``

  - **Description:**

    ```text
Force every dialog to use this decision. Use to test specific decision.
    ```

- **wh_dlg_HeightCoef**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Height correction coefficient.
    ```

- **wh_dlg_IngameDialogueObstacleDistanceThreshold**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When a NPC travels more than this threshold ingame-dialogue obstacle is removed (meters).
    ```

- **wh_dlg_IngameDialogueObstacleRadiusAddition**:

  - **Default Value:** `-0.5`

  - **Description:**

    ```text
Change of the ingame dialog obstacle radius which is calculated from the positions of the NPC.
    ```

- **wh_dlg_LODRatio**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Sets LOD ratio for dialog actors.
    ```

- **wh_dlg_LookAtTransitionDurationMax**:

  - **Default Value:** `0.375`

  - **Description:**

    ```text
Maximum time in seconds that turning to speaker will take
    ```

- **wh_dlg_LookAtTransitionDurationMin**:

  - **Default Value:** `0.275`

  - **Description:**

    ```text
Minimal time in seconds that turning to speaker will take
    ```

- **wh_dlg_MaxAnimDurationScale**:

  - **Default Value:** `1.3`

  - **Description:**

    ```text
Maximum duration scale for animations that arent blendspaces
    ```

- **wh_dlg_MinAnimDurationScale**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Minimum duration scale for animations that arent blendspaces
    ```

- **wh_dlg_MinCutTime**:

  - **Default Value:** `60000`

  - **Description:**

    ```text
Time until next cut should not occure on same actor.
    ```

- **wh_dlg_MinTimeToCut**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Minimum time (in seconds) needed for camera to cut in case both speakers are visible.
    ```

- **wh_dlg_NoCameras**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables dialog cameras.
    ```

- **wh_dlg_RecordDialog**:

  - **Default Value:** `0`

  - **Description:**

    ```text
At the end of each dialog list of sequences used during this dialog will be printed.
    ```

- **wh_dlg_RequestMaxAxisAngle**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Max angle (degree) between dialog axis and one of speakers direction.
    ```

- **wh_dlg_RequestMaxDistance**:

  - **Default Value:** `6.25`

  - **Description:**

    ```text
Max distance (squared) between entities to start dialog.
    ```

- **wh_dlg_RequestMaxTotalAngle**:

  - **Default Value:** `90`

  - **Description:**

    ```text
Max angle (degree) between entities to start dialog.
    ```

- **wh_dlg_RequestTimeout**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Max time in seconds upon the request is canceled.
    ```

- **wh_dlg_RestrictDialogHeightDifference**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Maximal height difference between actors in order to have dialogue interactor.
    ```

- **wh_dlg_RestrictDialogHeightHorseDifference**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximal height difference between actors in order to have dialogue interactor. The coeficient is used whenever one of the actors is riding a horse.
    ```

- **wh_dlg_ShowOrigActor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Do not hide original actor when freezing its twin.
    ```

- **wh_dlg_SkipCooldown**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
The time from the beginning of the response during which it cannot be skipped (unless using autoskip)
    ```

- **wh_dlg_SkipPhysPosAdjustment**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Skip physically based position adjustment. The adjustment takes some time so skipping it should make dialogue fader faster.
    ```

- **wh_dlg_SmoothTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time to smooth camera positions at max rate.
    ```

- **wh_dlg_TestMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Switch dialog system into testing mode allowing some special behavior.
    ```

- **wh_dlg_TestPreselectedSequences**:

  - **Default Value:** ``

  - **Description:**

    ```text
Defines which sequences may be used by NPC during dialogue.
    ```

- **wh_dlg_TwinDismountedHorseFrustumConeAngle**:

  - **Default Value:** `320`

  - **Description:**

    ```text
Half-angle (half of the cone) of the frustum for positioning horse when dismounting when switching into dialog twins.
    ```

- **wh_dlg_TwinDismountedHorseFrustumMaxDistance**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximal distance for positioning horse when dismounting when switching into dialog twins.
    ```

- **wh_dlg_TwinDismountedHorseFrustumMinDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimal distance for positioning horse when dismounting when switching into dialog twins
    ```

- **wh_dlg_TwinKeepPoseFrontConeAngle**:

  - **Default Value:** `180`

  - **Description:**

    ```text
Half-angle (half of the cone) in which the NPC will cancel its pose when creating dialog twin.
    ```

- **wh_dlg_TwinPlayerOverlapQueryCount**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Number of location queries around the NPC when handling NPC-player twin overlap.
    ```

- **wh_dlg_Verbosity**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Dialog verbosity.
    ```

- **wh_dlg_VisibleSequence**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Renders ids of sequences when visible in dialog.
    ```

- **wh_dlg_VoiceCategoryPriorityCoef**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
The probability of NPCs selecting a sequence with a voice category is multiplied by this coef
    ```

- **wh_dlg_VoiceRoot**:

  - **Default Value:** `Localization/dialog`

  - **Description:**

    ```text
Root folder for dialogue voiceovers
    ```

- **wh_dlg_WaitForCloth**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When creating dialog twin. This cvar turns waiting on clothing system to finish ray-casting.
    ```

- **wh_dlg_WordDelay**:

  - **Default Value:** `0.45`

  - **Description:**

    ```text
Delay for each space used to compute speech duration when voice over is missing.
    ```

- **wh_dog_DebugAction**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debugging dog actions
    ```

- **wh_dog_PetMaxAngle**:

  - **Default Value:** `75`

  - **Description:**

    ```text
Maximum angle for dog pet action. Calculated in 2D. Angle between dog direction and dog-to-player direction. In degrees.
    ```

- **wh_dog_PetMaxDistance**:

  - **Default Value:** `1.85`

  - **Description:**

    ```text
Maximum distance from dog for pet action
    ```

- **wh_dog_SmoothTerrainTraversal**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Terrain smooting for the dog.
0 = turned off
1 = turned on
    ```

- **wh_e_AllowPersistentRenderObjectsForEntities**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow EntitySlotObjects to use Persistent RenderObjects
    ```

- **wh_e_AreaLightShadowCameraOffsetBias**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Additional offset applied to the camera frustum position. Increase if objects in a close proximity fail to cast shadows.
Relative to the size of the light source.
    ```

- **wh_e_AreaLightShadowClampSmoothing**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Area lights can cast shadows only inside their frustum. Outside of the frustum is always lit. This cvar controls the width of the transition in the shadow map space.
    ```

- **wh_e_ClipVolumesGrid**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable accelerating structure for finding clip volumes
    ```

- **wh_e_ClipVolumesPrepareJob**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable clip volumes prepare to run on a job
    ```

- **wh_e_CloudMapSpeed**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Wind speed used in cloud map simulation, in m/s
    ```

- **wh_e_CoverageBufferReprojIgnoreDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
objects closer than this value is ignored for cullbuffer occlusion
    ```

- **wh_e_CoverageBufferReprojMethod**:

  - **Default Value:** `1`

  - **Description:**

    ```text
  0 - use inverse matrix for reprojection(CryEngine way)
  1 - use camera position and frustum vectors for reprojection

    ```

- **wh_e_DebugDrawBadFaceArea**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Screen area in px^2 taken up by a single face which is considered unoptimal, used in e_DebugDraw 30.
    ```

- **wh_e_DebugDrawGoodFaceArea**:

  - **Default Value:** `400`

  - **Description:**

    ```text
Screen area in px^2 taken up by a single face which is considered optimal, used in e_DebugDraw 30.
    ```

- **wh_e_DebugDrawTextureMemoryLimit**:

  - **Default Value:** `32768`

  - **Description:**

    ```text
Texture memory limit in KB used in e_DebugDraw 4. Objects with larger texture memory usage will be red.
    ```

- **wh_e_FullGSMUpdateAfterCameraChange**:

  - **Default Value:** `0`

  - **Description:**

    ```text
  1 = force rendering of all GSM cascades after a cut (lenghty frame),
  0 = reset round-robin selection, render only nearest cascades aftera a cut (shadow pop-ins).
    ```

- **wh_e_HDREyeAdaptationEVMin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force EVMin value for HDR eye adaptation. Value 0.0f means disabled
    ```

- **wh_e_HLodClusterSwitchingDistanceExponent**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Switching distance for cluster, layer and prefab Lods is calculated from this number.
    ```

- **wh_e_HLodClusterSwitchingDistanceMin**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Minimal switching distance for brush HLods.
    ```

- **wh_e_HLodClusterSwitchingDistanceMultiplier**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Switching distance for cluster, layer and prefab Lods is calculated from this number.
    ```

- **wh_e_HLodDebugColoring**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies debug coloring scheme: 0=HLod level, 1=Random color, 2=Type.
    ```

- **wh_e_HLodDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw HLod debug: 0=Disabled, 1=Enabled.
    ```

- **wh_e_HLodDebugLabel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies what is shown on debug: 0=Level+Name, 1=Level+Name+Size, 2=Path, 3=Geometry, 4=Radius-SwitchingDistance-CurrentDistance-ParentSwitchingDistance.
    ```

- **wh_e_HLodDebugSelectedOnly**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show debug only for selected HLods: 0=Show all, 1=Show selected only.
    ```

- **wh_e_HLodDebugSwitchingDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw switching distance radius on ground: 0=Disabled, 1=Enabled.
    ```

- **wh_e_HLodDebugTypeFilter**:

  - **Default Value:** `14`

  - **Description:**

    ```text
Bit mask for filtering debug draw by HLod type: 0=All, 1=Vegetation, 2=Cluster, 4=Layer, 8=Prefab, 16=Interior.
    ```

- **wh_e_HLodHysteresisDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Hysteresis distance in meters between switching from near to far state.
    ```

- **wh_e_HLodInteriorSwitchingDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Switching distance for interior Lods in meters.
    ```

- **wh_e_HLodSignificantObjectRatio**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Ratio between HLod radius and significant object radius.
    ```

- **wh_e_HLodSimulateSlowStreamingFrameCount**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Delays streaming by given number of frames. Works only in game because streaming is disabled in editor.
    ```

- **wh_e_HLodStreamBrushInstances**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables instance streaming for brushes 0=Disabled, 1=Enabled.
    ```

- **wh_e_HLodStreamingFramesUntilObjectLoadingTimeout**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Number of frames which must pass until object loading times out.
After this the HLod gets switched to Near state no matter what.
This can help when objects get stuck in NotLoaded state for example when cgf pool is full.
    ```

- **wh_e_HLodStreamingFramesUntilUnload**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Number of frames until a HLod is unloaded.
    ```

- **wh_e_HLodStreamingMaxReleasedPerFrame**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Limits maximum number of hlods released each frame.
    ```

- **wh_e_HLodStreamingMaxUpdatedPerFrame**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Limits maximum number of hlods updated each frame.
    ```

- **wh_e_HLodSwitchingDistanceIn2D**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Switching distance calculation dimension: 0=3D, 1=2D (KCD2-81329).
    ```

- **wh_e_HLodSystemEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables Hierarchical Level of Detail System.
    ```

- **wh_e_HLodUpdatePaused**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pauses update of HLods for debugging.
    ```

- **wh_e_HLodUseDissolve**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable dissolve for HLods.
    ```

- **wh_e_HLodVegetationSwitchingDistances**:

  - **Default Value:** `8000 800 500 255`

  - **Description:**

    ```text
Switching distances for vegetation Lods in meters.
    ```

- **wh_e_HLodViewDistRatioOverride**:

  - **Default Value:** `254`

  - **Description:**

    ```text
ViewDistRatio of objects in HLods will be overridden to this value.
    ```

- **wh_e_HLodViewDistRatioOverrideRadiusThreshold**:

  - **Default Value:** `0`

  - **Description:**

    ```text
ViewDistRatio override will affect only HLods with smaller radius than this threshold in meters.
    ```

- **wh_e_HlodMaxStreamingTasks**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximum number of hlod streaming tasks at any given time. Good for limiting peaks caused by brush creation
    ```

- **wh_e_IgnorePerInstanceLodRatio**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows you to ignore per instance LodRatio which was saved in the level
    ```

- **wh_e_IgnorePerInstanceViewDistRatio**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Allows you to ignore per instance ViewDistRatio which was saved in the level
    ```

- **wh_e_MaterialBufferDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug material instances
    ```

- **wh_e_MaterialBufferUnassignedFeatureDebug**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Display unassigned character features in bright pink color
    ```

- **wh_e_MaterialFeatureBufferSize**:

  - **Default Value:** `55296`

  - **Description:**

    ```text
Max number of material features
    ```

- **wh_e_MaterialInstanceBufferSize**:

  - **Default Value:** `2560`

  - **Description:**

    ```text
Max number of material instances
    ```

- **wh_e_MaxCompiledRoadsPerFrame**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Defines maximum compiled roads per frame. Value zero or lower forces immediate compilation.
    ```

- **wh_e_ObjectsTreeRenderNodeListTypeDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies object type to debug in e_ObjectsTreeBBoxes mode 3, eRNListType_Unknown (0) - means all list types
    ```

- **wh_e_ObjectsTreeRenderNodeTypeDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Specifies object type to debug in e_ObjectsTreeBBoxes mode 3eERType_NotRenderNode (0) - means all render node types
    ```

- **wh_e_ObserverDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[int] Enables observer system debug draw. Default: 0
    ```

- **wh_e_ObserverMinDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
[float] Min. distance (in meters) an observer has to move for the observer system to react. Default: 2.0 (m)
    ```

- **wh_e_ObserverMinFOVChange**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
[float] Min. FOV change (in radians) the observer system to reacts to. Default: 0.2f (rad) (= ~11.5 deg)
    ```

- **wh_e_ObserverMinTeleportDistance**:

  - **Default Value:** `16`

  - **Description:**

    ```text
[float] Min. distance (in meters) an observer has to move to count as a teleport. Default: 16.0 (m)
    ```

- **wh_e_ObserverMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
[int] Observer system mode. Deault: 0.
    ```

- **wh_e_ObserverTeleportWarning**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Displays onscreen warning when observer was teleported outside of PrecacheMode. Default: 1
    ```

- **wh_e_ParticlesAudioFarDistSq**:

  - **Default Value:** `625`

  - **Description:**

    ```text
CameraMust be at most this many units from the particle for audio to keep playing, once started (squared length).
Must be less than (wh_e_ParticlesAudioMaxDistance^2)
Example: wh_e_ParticlesAudioNearDistSq 625 ... sets the near distance to be 20

    ```

- **wh_e_ParticlesAudioMaxDistance**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Specifies the maximum distance at which the emitters with sounds are updated
    ```

- **wh_e_ParticlesAudioNearDistSq**:

  - **Default Value:** `400`

  - **Description:**

    ```text
CameraMust be at least this many units from the particle for audio to start playing (squared length).
Must be less than (wh_e_ParticlesAudioMaxDistance^2)
Example: wh_e_ParticlesAudioNearDistSq 400 ... sets the near distance to be 20

    ```

- **wh_e_ParticlesLimitPerContainer**:

  - **Default Value:** `600`

  - **Description:**

    ```text
Max number of particles which can be spawned by a container
    ```

- **wh_e_ParticlesProfileToplist**:

  - **Default Value:** `-1`

  - **Description:**

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

  - **Default Value:** `3`

  - **Description:**

    ```text
Specifies after how many frames the emitter is removed from the update collection if it is not rendered.
    ```

- **wh_e_ParticlesViewDistMul**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Artificially multiplies the view distance for particles
    ```

- **wh_e_PernamentPhysicalization**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables pernament physicalization of brushes
    ```

- **wh_e_PernamentPhysicalizationSyncLoad**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables synchronized load of pernament physicalization instead of streaming of physical files
    ```

- **wh_e_RoadRenderNodeBBoxes**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0/1 - show/hide Bouding boxes of RoadRenderNodes
    ```

- **wh_e_ScreenShotFileName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Set output image file name for hires screen shots.
    ```

- **wh_e_ShadowsSparseGSMUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1=enables interleaved rendering of GSM levels 2, 3 and 4.
2=force interleaved for editor.
Usage: wh_e_ShadowsSparseGSMUpdate [0/1/2]
    ```

- **wh_e_StatObjDsStreaming**:

  - **Default Value:** `0`

  - **Description:**

    ```text
WH[PD] Set to 1 to enable DirectStorage style of StatObj streaming.
    ```

- **wh_e_StreamCgfHeaders**:

  - **Default Value:** `1`

  - **Description:**

    ```text
CGF headers are loaded asynchronously during level load.
    ```

- **wh_e_StreamCgfSizePenality**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
How much does size decrease streaming importance
    ```

- **wh_e_StreamPredictionUpdateNearTimeSlice**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Maximum amount of time to spend for scene streaming priority update of near objects in milliseconds
    ```

- **wh_e_TimeOfDayMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Current Time of Day mode (0 - default, 1 - real sun position)
    ```

- **wh_e_VerticalLightCulling**:

  - **Default Value:** `3`

  - **Description:**

    ```text
WH[TBa] Enables Z distance based light culling (note: it also has to be enabled per-light in the entity properties).
	1 - uses Z difference to turn off the light (after the standard occlusion and view distance culling), bounding boxes are not modified
	2 - modifies Z component of AABBs, relies on the standard view-distance and occlussion culling
	3 - both modes together
See E_VerticalLightCullingModeWH.
    ```

- **wh_e_ViewDistRatioRoad**:

  - **Default Value:** `28`

  - **Description:**

    ```text
View distance ratio for roads
    ```

- **wh_e_WindDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable wind calculations debug draw. Bit flags:
1 - Draw arrows
2 - Display wind grid values
4 - Display global wind value

    ```

- **wh_e_surfaceTypeDebugColoring**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Coloring mode of surfaces in 'p_draw_helpers st_g'. Must be set in user.cfg before launching the game!
0 = Using dbg_color in SurfaceTypes.xml
1 = Based on movementSpeedMult (1=blue, 1>green, 0.5=yellow, 0=red)
    ```

- **wh_e_svoTI_UseProbe**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use global probe in SVOTI
    ```

- **wh_ed_editorAreaDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug editor areas (bitflags):
1 - list areas camera is in.
2 - list AI areas camera is in - display editor areas
    ```

- **wh_ed_reloadFlashOnGameModeStart**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 = reload flash UI from files, 0 = reset only
    ```

- **wh_ent_AnimSynchronizerForceUpdateAnimController**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables forced update of animation controllers when anim synchronization is required
    ```

- **wh_ent_AutoRuntimePrefabsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Auto phase change runtime prefabs debug draw. Flags:
1 - Show all planned phase changes
2 - Display message when phase changes
    ```

- **wh_ent_AutoRuntimePrefabsMinDistanceSqr**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Minimum distance squared that player must be away from a prefab for it to change phase
    ```

- **wh_ent_CarryItemHeadAngleCap**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Maximum allowed +/- vertical angle (in deg) player can turn their head while carrying a CarryableItem. Edit only when not carrying to see the difference.
    ```

- **wh_ent_CarryItemHintsVisibilityTimeout**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time for which "drop item" hint remains visible after picking up an item.
    ```

- **wh_ent_CarryItemPileMaxDistance**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Maximum distance to interact with CarryItemPile.
    ```

- **wh_ent_DebugAreaSpawn**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows area spawning debug info
    ```

- **wh_ent_DebugLogActorActions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Logs actor action lifetime.
    ```

- **wh_ent_DisappearingObjectDespawnDistance**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Distance needed for this entity to disappear.
    ```

- **wh_ent_EquipmentSlotsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows equipment slots and equipped items
    ```

- **wh_ent_EquipmentSlotsDebugSoul**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of soul for which equipment slot debug is shown. Use empty string to show it for player.
    ```

- **wh_ent_GameProfileManagerDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 = list pending profiles, 2 = list all profiles, 3 = list active profiles, 4 = detailed layer description, list of profiles etc. Use Filter for select specific layer.
    ```

- **wh_ent_GameProfileManagerDebugDrawFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Substring name filter for the debug draw. Used for both profiles and layers
    ```

- **wh_ent_LedgeContinuousBlendWeight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Is the blend weight continuously updated for selected ledges. Currently for VaultOver and VaultWindow
    ```

- **wh_ent_PhysicsDebugDraw**:

  - **Default Value:** ``

  - **Description:**

    ```text
Draw physics debug info for this entity
    ```

- **wh_ent_RestockPerFrameBudget**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximum number of milliseconds to spend on restock in a single frame.
    ```

- **wh_ent_RestockStartTimeMinutes**:

  - **Default Value:** `180`

  - **Description:**

    ```text
Restock time of day in minutes (3:00 = 180 min). Changing it mid-game has no effect (must be in config, or you have to re-enter game mode).
    ```

- **wh_ent_ShowHelperObjects**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Changes when helper objects of entities are shown (used in lua). Game mode start/stop is needed for change to take effect.
0 - Never shown
1 - Shown in editor (but not game mode)
2 - Shown always
    ```

- **wh_env_CloudDensitySaturationValue**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Clouds are considered to be fully dense at this raw volumetric density. Used in rain calculation.
    ```

- **wh_env_DirtCreationSpeed**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Speed of the ground getting wet
    ```

- **wh_env_DirtDryupSpeed**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Speed of the ground drying up
    ```

- **wh_env_DisableRainController**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disables raincontroller to make Rain Entity work
    ```

- **wh_env_GridInsertDistanceSquared**:

  - **Default Value:** `400`

  - **Description:**

    ```text
Distance from player where instances are inserted to the grid (squared value).
    ```

- **wh_env_LightningThreshold**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Lightning is enabled when lightningThreshold < rainIntensity
    ```

- **wh_env_ParallelUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables parallel update of Environment module.
    ```

- **wh_env_PuddleCreationDelay**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Delay from rain start, when puddles start appearing
    ```

- **wh_env_PuddleCreationSpeed**:

  - **Default Value:** `0.017`

  - **Description:**

    ```text
Speed of puddles appearing
    ```

- **wh_env_PuddleDryupDelay**:

  - **Default Value:** `400`

  - **Description:**

    ```text
Delay after rain end, when puddles start disappearing
    ```

- **wh_env_PuddleDryupSpeed**:

  - **Default Value:** `0.0008`

  - **Description:**

    ```text
Speed of puddles drying up
    ```

- **wh_env_PuddleMaskMax**:

  - **Default Value:** `0.95`

  - **Description:**

    ```text
Maximal threshold for puddle mask
    ```

- **wh_env_PuddleMaskMin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Minimal threshold for puddle mask
    ```

- **wh_env_PuddlesRippleAmountMul**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Multiplier in calculation (PuddlesRippleAmount = rainIntensity * puddlesRippleAmountMul)
    ```

- **wh_env_RainCurrentAmount**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Affects most of the rain parameters, we should leave it set to 1
    ```

- **wh_env_RainDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows debug info about rain
    ```

- **wh_env_RainDiffuseDarkening**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Diffuse darkening of wet surfaces when raining
    ```

- **wh_env_RainDropsAmountMul**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Multiplier in calculation (RainDropsAmount = rainIntensity * rainDropsAmountMul)
    ```

- **wh_env_RainDropsSpeedBase**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Base in calculation (RainDropsSpeed = rainDropsSpeedBase + rainIntensity * rainDropsSpeedMul + windStrength * rainDropsSpeedWindMul)
    ```

- **wh_env_RainDropsSpeedMul**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Multiplier in calculation (RainDropsSpeed = rainDropsSpeedBase + rainIntensity * rainDropsSpeedMul + windStrength * rainDropsSpeedWindMul)
    ```

- **wh_env_RainDropsSpeedWindMul**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Multiplier in calculation (RainDropsSpeed = rainDropsSpeedBase + rainIntensity * rainDropsSpeedMul + windStrength * rainDropsSpeedWindMul)
    ```

- **wh_env_RainFilterFreq**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Crosover frequency for rain intensity low pass filter, in Hz
    ```

- **wh_env_RainIntensityOverride**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Debug cvar to override rain intensity (0.0-1.0). Default: -1 (don't override)
    ```

- **wh_env_RainLayers**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Number of rain capsule layers (1-3), 3 looks best
    ```

- **wh_env_RainMoveBlend**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Smoothing player movement affecting rain direction
    ```

- **wh_env_RainMoveStrength**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
How much player movement affects rain direction
    ```

- **wh_env_RainThreshold**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
It starts raining when rainThreshold < localCloud * rainProbability
    ```

- **wh_env_RainWindStrength**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Sets how wind affects rain direction (if this == windStrength, then the rain will fall at 45deg)
    ```

- **wh_env_RandomPresetDelay**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Time in game hours after which random TOD preset will be selected.
    ```

- **wh_env_RespawnDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If 1, some debugging info is shown.
    ```

- **wh_env_RespawnDebugIntervalSec**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug interval for respawning in sec (WT).
    ```

- **wh_env_RespawnDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Distance from player when items respawn.
    ```

- **wh_env_RespawnHerbBboxScale**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Scale multiplier of herb AABB scale. Used for interactor.
    ```

- **wh_env_RespawnPickDistance**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Radius for picking herbs.
    ```

- **wh_env_RespawnRaycastUpdateDelta**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
When pointing with interactor, shoot raycast only when the ray target moves this distance from the last raycast.
    ```

- **wh_env_RespawnTypicalHerbHeight**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Typical (average) height of the herb to offset picking point.
    ```

- **wh_env_SplashesAmountMul**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Multiplier in calculation (SplashesAmount = rainIntensity * splashesAmountMul)
    ```

- **wh_env_WeatherLayerProfileDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug for weather layer profiles
    ```

- **wh_env_WeatherLayerProfileHidingDelay**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Timeout until the weather profile is disabled after disabling the last particle emitter
    ```

- **wh_env_WeatherLayerProfileProcessingBudget**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Budget for number of entities processed per frame
    ```

- **wh_env_WeatherUpdateEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables update of weather system.
    ```

- **wh_env_WetDryThreshold**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Amount of rain intensity at which weather transitions from DRY to RAINING or from RAINING to DRYING
    ```

- **wh_env_debugTod**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns time of day blend debug draw.
    ```

- **wh_env_moon**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables moon update
    ```

- **wh_es_SlicedLoading**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables sliced loading of entities. 0 = never, 1 = without fader (default), 2 = always
    ```

- **wh_es_SlicedLoadingDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables debug info of sliced loading. 0 = disabled, 1 = debug draw if active, 2 = debug draw, 3 = debug draw + log
    ```

- **wh_es_SlicedLoadingTimeBudget**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Time budget for sliced loading [msec]
    ```

- **wh_fmod_with_liveupdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Initialize FMOD Studio using FMOD_STUDIO_INIT_LIVEUPDATE (profiling) as opposed to FMOD_STUDIO_INIT_NORMAL
    ```

- **wh_frameStatsClampValues**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should FrameStats get clamped upon requesting them?
    ```

- **wh_g_showHelp**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables help display.
    ```

- **wh_game_pauseDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows info about game pause sources.
    ```

- **wh_gfx_useSWF**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Loads .SWF if .GFX not found
    ```

- **wh_horse_CameraSmoothing**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Camera smoothing timevalue used by road magnetizer.
    ```

- **wh_horse_DebugStaminaBuff**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug effects of stamina buff applied to player's horse.
    ```

- **wh_horse_FollowInnerCircleRadius**:

  - **Default Value:** `3.2`

  - **Description:**

    ```text
Radius of the inner circle used in follow (ideal distance between NPC and Player)
    ```

- **wh_horse_FollowInnerCircleRadiusBias**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Inner circle radius bias used when interpolating between player and target speed when catching up to target
    ```

- **wh_horse_FollowInputMovementScaleX**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Scale of player input in X axis
    ```

- **wh_horse_FollowInputMovementScaleY**:

  - **Default Value:** `0.33`

  - **Description:**

    ```text
Scale of player input in Y axis
    ```

- **wh_horse_FollowMaxStartDistance**:

  - **Default Value:** `12`

  - **Description:**

    ```text
Maximum distance at which can player start following NPC that he can't chat with
    ```

- **wh_horse_FollowMinDistance**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Distance between NPC and player when speed is zero (min distance between NPC and Player)
    ```

- **wh_horse_FollowNPCSpeedForMaximumOffset**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum NPC speed at which specified offset values are used
    ```

- **wh_horse_FollowOffsetX**:

  - **Default Value:** `1.7`

  - **Description:**

    ```text
Follow NPC offset on the X axis in NPC local space
    ```

- **wh_horse_FollowOffsetY**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Follow NPC offset on the Y axis in NPC local space
    ```

- **wh_horse_FollowOffsetYWhenCenter**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Follow NPC offset on the Y axis in NPC local space when using 'Center' offset
    ```

- **wh_horse_FollowOuterCircleMinSpeed**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Minimum player speed when outside outer circle (useful when NPC is moving very slowly)
    ```

- **wh_horse_FollowOuterCircleRadius**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Radius of the outer circle used in follow (max distance between NPC and Player before Follow turns off)
    ```

- **wh_horse_FollowOuterCircleTargetSpeedScale**:

  - **Default Value:** `3`

  - **Description:**

    ```text
When outside outer circle player never moves slower than this multiple of NPC speed (used to keep NPC and player speed similar when catching up to NPC)
    ```

- **wh_horse_RoadMagnetism**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Should horse road magnetism be enabled? 0 = no, 1 = on press, 2 = auto
    ```

- **wh_horse_UseBridleParamsFromLua**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use bridle physics params from Horse.lua instead of defaults from code.
    ```

- **wh_human_DebugLadder**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **wh_iLogMaxTraceLevel**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximum level of game event that is automatically traced.
Default is LEVEL 3.
    ```

- **wh_i_Debug**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable trigger effects for DualSense controller (PS5).
    ```

- **wh_i_controllerVibrations**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable controller vibrations. (Note: The behavior of DualSense on PS5 differs from other platform/controller combos.)
    ```

- **wh_i_deadZone**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Represents how much of a controller input on sticks should be ignored, default value 0.2f = 10%.
    ```

- **wh_i_defaultDeadZone**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
if someone changes wh_i_deadZone this cvar is used to restore the deadzone to default.
    ```

- **wh_i_immersiveTriggerEffect**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable trigger effects for Xbox Series controller (XBOX).
    ```

- **wh_i_lightBarEffect**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/Disable lightBar effects.
    ```

- **wh_i_thumbstickButtonThreshold**:

  - **Default Value:** `0.76`

  - **Description:**

    ```text
Value that is used to determine of the stick position is or is not considered as pushed button into given direction(up/down/left/right). This cvars default value is based on threshold from XInputDevice where it is (25000 / 32768)
    ```

- **wh_i_vibrationIgnoreFocus**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Ignores focus so we can debug old school haptics (use wh_osh_play).
    ```

- **wh_item_AllowPatching**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Allow inventory and item patching.
    ```

- **wh_item_DropHeightOffset**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Height offset from eye position to use when spawning dropped items
    ```

- **wh_item_DroppedAmmoMaxCount**:

  - **Default Value:** `10`

  - **Description:**

    ```text
How many older dropped ammo is left in wh_item_DroppedAmmoRadius around current ammo drop.
    ```

- **wh_item_DroppedAmmoRadius**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Radius in which older dropped ammo is removed if new drops in (see wh_item_DroppedAmmoMaxCount)
    ```

- **wh_item_DroppedBrokenAmmoBonusTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Broken ammo is considered by this many seconds older when searching for oldest ammo to remove (see wh_item_DroppedAmmoMaxCount)
    ```

- **wh_item_DroppedItemsDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draw items held by the world inventory which can be picked by NPCs.
    ```

- **wh_item_HomeSlotAutoReturnInitialTimeout**:

  - **Default Value:** `10000`

  - **Description:**

    ```text
Controls the initial timeout when the return of the slot is returned automatically. The value is in miliseconds
    ```

- **wh_item_HomeSlotAutoReturnMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls the mode of auto returning item to its home slot. 
		0 - off
		1 - on with all conditions
		2 - on but the visibility conditions are ignored. Intended for debug
    ```

- **wh_item_HomeSlotPhaseReset**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Controls auto reseting of the item phase when the item returns to its home slot or is abandones while SetAside. 
		0 - off
		1 - on with all conditions
		2 - on but the visibility conditions are ignored. Intended for debug
    ```

- **wh_item_ItemSlotDynSpawning**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Controls how ItemSlot item entities are spawned:
		0 - all slots are always spawned
		1 - dynamically spawned when player is nearby
		2 - dynamically spawned when player is nearby and visible by VisibilityArea check
    ```

- **wh_item_ItemSlotDynSpawning_DespawnBudgetMax**:

  - **Default Value:** `3`

  - **Description:**

    ```text
How many ItemSlots can be despawned per frame at maximum (when spawn budget is not too high)
    ```

- **wh_item_ItemSlotDynSpawning_DespawnBudgetMin**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How many ItemSlots can be despawned per frame at minimum.
    ```

- **wh_item_ItemSlotDynSpawning_Parallel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables parallelization of algorithm that decides which item slots should be currently despawned.
    ```

- **wh_item_ItemSlotDynSpawning_Radius**:

  - **Default Value:** `80`

  - **Description:**

    ```text
How far from the observer should be item slots spawned.
    ```

- **wh_item_ItemSlotDynSpawning_RadiusHysteresis**:

  - **Default Value:** `30`

  - **Description:**

    ```text
How further from the observer should be item slots despawned, than they are spawned.
    ```

- **wh_item_ItemSlotDynSpawning_SearchSizePerFrame**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
How many ItemSlots should be searched for spawning / despawning each frame.
    ```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetFrameThresholdToDecrease**:

  - **Default Value:** `40`

  - **Description:**

    ```text
If the spawn queue would take at most this many frames to deplete with current budget, decrease the budget.
    ```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetFrameThresholdToIncrease**:

  - **Default Value:** `100`

  - **Description:**

    ```text
If the spawn queue would take at least this many frames to deplete with current budget, increase the budget.
    ```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetMax**:

  - **Default Value:** `10`

  - **Description:**

    ```text
If bigger than spawn budget, the budget can be boosted up to this value, if the spawning queue is too big
    ```

- **wh_item_ItemSlotDynSpawning_SpawnBudgetMin**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How many ItemSlots can be spawned per frame (can be boosted).
    ```

- **wh_item_MapBottomHeight**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Items below this height will be considered "fallen through terrain"
    ```

- **wh_item_PreloadItemModels**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Keep models of all items preloaded
    ```

- **wh_item_PreloadItemPhaseModels**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Keep models of all items phases preloaded
    ```

- **wh_item_TagPoached**:

  - **Default Value:** `poached`

  - **Description:**

    ```text
Items with this tag will be considered poached.
    ```

- **wh_item_ViewDistRatio**:

  - **Default Value:** `100`

  - **Description:**

    ```text
ViewDistRatio used for spawned items and weapons on characters.
    ```

- **wh_loco_DebugInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows loco debug info
    ```

- **wh_lua_better_print**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on (1) or off (0) improved print command in lua.
    ```

- **wh_map_CompassPOIDistanceRatio**:

  - **Default Value:** `3`

  - **Description:**

    ```text
ratio of the POI discovery distance at which the POI appears in UI compass
    ```

- **wh_map_MoveCursorSens**:

  - **Default Value:** `10`

  - **Description:**

    ```text
How cursor move input is sensitive.
    ```

- **wh_map_ShowFastTravelPoints**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 enables fast travel points, 0 disables them
    ```

- **wh_map_StickDeadZone**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Controller stick dead zone.
    ```

- **wh_mod_ShowUsedModsInSaveTooltip**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Disabled, 1=Shows which mods were used in saves
    ```

- **wh_osh_DebugDistance**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display the current distance from the sound. Works in the game mode only.
Default: 0 (i.e. off)

    ```

- **wh_osh_DrawDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display the current output of the OSH synthesizer. Works in the game mode only.
Default: 0 (i.e. off)

    ```

- **wh_osh_enabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable the fallback implementation of haptic feedback.
    ```

- **wh_osh_xml_filename**:

  - **Default Value:** `libs/GameAudio/oldschool_haptics.xml`

  - **Description:**

    ```text
Filename of fallback implementation of haptic feedback.
    ```

- **wh_photomode_CameraSize**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
The size of the camera for physical collisions.
    ```

- **wh_photomode_MaxDistance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal distance of photomode camera from player.
    ```

- **wh_photomode_debugCamCollisions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug the collisions of photomode camera
    ```

- **wh_pl_AlchemyDistileryFireLightColor**:

  - **Default Value:** `115.0 63.0 23.0`

  - **Description:**

    ```text
Color of light from fire under distilery on alchemy table
    ```

- **wh_pl_AlchemyDistileryFireLightIntensity**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Intensity of light from fire under distilery on alchemy table
    ```

- **wh_pl_AlchemyFinishFaderLength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Lenght of the finishing fader in alchemy minigame.
    ```

- **wh_pl_AlchemyPotFireLightColor**:

  - **Default Value:** `115.0 63.0 23.0`

  - **Description:**

    ```text
Color of light from fire under pot on alchemy table
    ```

- **wh_pl_AlchemyPotFireLightIntensity**:

  - **Default Value:** `0.22`

  - **Description:**

    ```text
Intensity of light from fire under pot on alchemy table
    ```

- **wh_pl_AnimatedCameraBone**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **wh_pl_AutoAcceptChat**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Chat is always automatically accepted.
    ```

- **wh_pl_BattleArcheryEntryPointOffset**:

  - **Default Value:** `-0.35`

  - **Description:**

    ```text
Offset of entry point against ref point
    ```

- **wh_pl_BattleArcheryExitPointOffset**:

  - **Default Value:** `-0.5`

  - **Description:**

    ```text
Offset of exit point against ref point
    ```

- **wh_pl_BattleArcheryKeyboardSensitivity**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Keyboard sensitivity of the movement in battle archery
    ```

- **wh_pl_BattleArcheryLookingPointOffset**:

  - **Default Value:** `-0.2`

  - **Description:**

    ```text
Offset of looking point against ref point
    ```

- **wh_pl_BattleArcheryMaxHAngle**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Maximum angle of rotation in battle archery
    ```

- **wh_pl_BattleArcheryMinHAngle**:

  - **Default Value:** `-25`

  - **Description:**

    ```text
Minimum angle of rotation in battle archery
    ```

- **wh_pl_BattleArcheryMouseSensitivity**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Mouse sensitivity of the movement in battle archery
    ```

- **wh_pl_BattleArcheryPalisadeCenterDistance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Distance (m) from the entity to the center of rotation
    ```

- **wh_pl_BattleArcheryPalisadeShootingPointOffset**:

  - **Default Value:** `-0.2`

  - **Description:**

    ```text
Offset of shooting point against ref point (override)
    ```

- **wh_pl_BattleArcheryPlayerUseLeaningOut**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Indicates if player uses 'npc' minigame variant with leaning out animation.
    ```

- **wh_pl_BattleArcheryShootingMaxVAngle**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximum angle of rotation in battle archery
    ```

- **wh_pl_BattleArcheryShootingMinVAngle**:

  - **Default Value:** `-50`

  - **Description:**

    ```text
Minimum angle of rotation in battle archery
    ```

- **wh_pl_BattleArcheryUnlockDistanceOffset**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Unlock offset to unlock from the minigame with backward movement 
    ```

- **wh_pl_BattleArcheryUseAngle**:

  - **Default Value:** `0.95`

  - **Description:**

    ```text
Minimum dot product of forward vector (entity and slot)
    ```

- **wh_pl_BattleArcheryUseDistance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Distance XY (m) for start battle archery from entry point
    ```

- **wh_pl_BattleArcheryUseMaxZDistance**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Max distance in Z axis (m) for start battle archery from entry point
    ```

- **wh_pl_BattleArcheryUseMinZDistance**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Min distance in Z axis (m) for start battle archery from entry point
    ```

- **wh_pl_BattleArcheryUseRadius**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Radius (m) for using the battlement slot
    ```

- **wh_pl_BattleArcheryWallCenterDistance**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Distance (m) from the entity to the center of rotation
    ```

- **wh_pl_BattleArcheryWallShootingPointOffset**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Offset of shooting point against ref point (override)
    ```

- **wh_pl_BattlementDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for battlement minigame
    ```

- **wh_pl_BellowsUseCountToDistill**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Count of bellows use in distillation action.
    ```

- **wh_pl_BlacksmithAlmostFinishedWorkpieceCompletition**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Completion value for barking (level 2).
    ```

- **wh_pl_BlacksmithAnvilMovementGamepad**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Sensitivity of movement on the anvil with gamepad.
    ```

- **wh_pl_BlacksmithAnvilMovementMouse**:

  - **Default Value:** `0.09`

  - **Description:**

    ```text
Sensitivity of movement on the anvil with mouse.
    ```

- **wh_pl_BlacksmithAnvilParticlesEfficiencyMax**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Max effectivity for wh_pl_BlacksmithAnvilParticlesMax.
    ```

- **wh_pl_BlacksmithAnvilParticlesEfficiencyMin**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Min effectivity for wh_pl_BlacksmithAnvilParticlesMin.
    ```

- **wh_pl_BlacksmithAnvilParticlesMax**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Scale of particles count on the anvil at maximal efficiency.
    ```

- **wh_pl_BlacksmithAnvilParticlesMin**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Scale of particles count on the anvil at minimal efficiency.
    ```

- **wh_pl_BlacksmithAnvilRotation**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Anvil rotation for input.
    ```

- **wh_pl_BlacksmithBarkSupressCooldownAfterSinging**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Time period after singing when barks are still supressed.
    ```

- **wh_pl_BlacksmithColdWorkpieceCount**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of strokes to the cold workpiece to bark.
    ```

- **wh_pl_BlacksmithColdWorkpieceTemperature**:

  - **Default Value:** `650`

  - **Description:**

    ```text
Critical temperature for cold workpiece. Bellow this value is workpiece considered as cold.
    ```

- **wh_pl_BlacksmithCompletionGainMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Completion gain of blacksmith workpiece multiplier.
    ```

- **wh_pl_BlacksmithDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for blacksmithing minigame			1 - minigame state			2 - draw potential map			4 - draw workpiece raycast grid			8 - draw hammer raycast on workpiece
    ```

- **wh_pl_BlacksmithDisableHeatLoss**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set, disable all sources of heat loss for all the zones.
    ```

- **wh_pl_BlacksmithForcedSongId**:

  - **Default Value:** ``

  - **Description:**

    ```text
Force specified song to play during blacksmith minigame.
    ```

- **wh_pl_BlacksmithForgeBag**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable using forge bag in blacksmithing minigame forge.
    ```

- **wh_pl_BlacksmithForgeCoalMaxIntensity**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Max value for emissive intensity for forge coal.
    ```

- **wh_pl_BlacksmithForgeCoalMinIntensity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Min value for emissive intensity for forge coal.
    ```

- **wh_pl_BlacksmithForgeCoolingSpeed**:

  - **Default Value:** `-5`

  - **Description:**

    ```text
Cooling of the blacksmithing forge in Celsius/sec when blowing is not active.
    ```

- **wh_pl_BlacksmithForgeExtraCoalMaxIntensity**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Max value for emissive intensity for forge coal.
    ```

- **wh_pl_BlacksmithForgeExtraCoalMinIntensity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Min value for emissive intensity for forge coal.
    ```

- **wh_pl_BlacksmithForgeHeatingSpeed**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Heating of the blacksmithing forge in Celsius/sec when blowing is active.
    ```

- **wh_pl_BlacksmithForgeLightMaxIntensity**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Max value for diffuse intensity for forge light.
    ```

- **wh_pl_BlacksmithForgeLightMinIntensity**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Min value for diffuse intensity for forge light.
    ```

- **wh_pl_BlacksmithForgeMovementGamepad**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Gamepad threshold of the movement in the forge.
    ```

- **wh_pl_BlacksmithForgeMovementMouse**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Sensitivity of movement in the forge.
    ```

- **wh_pl_BlacksmithForgeOtherHeatFactor**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Heating speed for other zones in the forge.
    ```

- **wh_pl_BlacksmithForgeOtherTemperatureFactor**:

  - **Default Value:** `0.65`

  - **Description:**

    ```text
Target temperature factor for other zones in the forge.
    ```

- **wh_pl_BlacksmithForgePowerFactor**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Heating effectiveness in the forge (energy gain).
    ```

- **wh_pl_BlacksmithForgeTemperatureLightFactor**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Maximum intensity of light that is given from coal without heating.
    ```

- **wh_pl_BlacksmithHalfFinishedWorkpieceCompletition**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Completion value for barking (level 1).
    ```

- **wh_pl_BlacksmithHardeningCoolingPower**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Speed of cooling during hardening in the bucket.
    ```

- **wh_pl_BlacksmithHardeningHeatingPower**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Speed of heating during hardening in the forge.
    ```

- **wh_pl_BlacksmithHardeningWorkpieceTemperature**:

  - **Default Value:** `850`

  - **Description:**

    ```text
Target temperature of the hardening process in the forge.
    ```

- **wh_pl_BlacksmithIneffectiveStrokingCount**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Number of strokes to the same place on the workpiece to bark.
    ```

- **wh_pl_BlacksmithIneffectiveStrokingTolerance**:

  - **Default Value:** `0.01`

  - **Description:**

    ```text
Spatial tolerance of the ineffective stroking to the same place.
    ```

- **wh_pl_BlacksmithInitialForgeTemperature**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Initial forge temperature when minigame starts in Celsius.
    ```

- **wh_pl_BlacksmithMaxForgeTemperature**:

  - **Default Value:** `1800`

  - **Description:**

    ```text
Maximal temperature of the forge in Celsius.
    ```

- **wh_pl_BlacksmithMinForgeTemperature**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Minimal temperature of the forge in Celsius.
    ```

- **wh_pl_BlacksmithNormalHeatLossFactor**:

  - **Default Value:** `-0.016`

  - **Description:**

    ```text
Energy loss out of forge.
    ```

- **wh_pl_BlacksmithNormalTemperature**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Normal/Initial temperature of the workpiece.
    ```

- **wh_pl_BlacksmithPerfectStroke**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable perfect stroking in blacksmithing minigame.
    ```

- **wh_pl_BlacksmithPotentialFadeOutTime**:

  - **Default Value:** `53`

  - **Description:**

    ```text
Time of complete fading of potential to 0.
    ```

- **wh_pl_BlacksmithQualityLossMultiplier**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Quality loss of blacksmith workpiece.
    ```

- **wh_pl_BlacksmithReturnIngredientCoef**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Percentual coefficient of ingredients that are returned to the inventory when minigame fails.
    ```

- **wh_pl_BlacksmithSelectedRecipe**:

  - **Default Value:** ``

  - **Description:**

    ```text
Debug selected recipe Id for blacksmithing.
    ```

- **wh_pl_BlacksmithSingingPause**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Pause after singing when one song ends before next song starts.
    ```

- **wh_pl_BlacksmithStroke**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable stroking in blacksmithing minigame.
    ```

- **wh_pl_BlacksmithStrokeMoveCount**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Workpiece move count after stroke.
    ```

- **wh_pl_BlacksmithStrokeMoveIntensityCoef**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Intensity of movement of the workpiece after stroke.
    ```

- **wh_pl_BlacksmithTimingMaxDuration**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Maximal duration of rhythmic period [s].
    ```

- **wh_pl_BlacksmithTimingMinCount**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimal count for consider rhythmic bonus is active.
    ```

- **wh_pl_BlacksmithTimingTolerance**:

  - **Default Value:** `0.28`

  - **Description:**

    ```text
Time tolerance for rhythmic bonus [s].
    ```

- **wh_pl_BlacksmithUseDistance**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Maximal distance for using smithery (at starting point).
    ```

- **wh_pl_BlacksmithVoxelSize**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Size of voxel.
    ```

- **wh_pl_BlacksmithWorkpieceCannotBreak**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Do not break the workpiece when reaching its critical quality.
    ```

- **wh_pl_BlacksmithWorkpieceIntensityCoef**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Multiplier for workpiece color intensity.
    ```

- **wh_pl_BlacksmithZoneTemperatureCap**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Temporary maximum cap for workpiece zone temperature. Is not applied if the value is negative.
    ```

- **wh_pl_ButcheringFaderLength**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Duration for which the screen is faded when butchering animal (first time looting).
    ```

- **wh_pl_CameraFollowEntity**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Entity id for debug camera to follow
    ```

- **wh_pl_DebugAlchemy**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns alchemy debugging.
    ```

- **wh_pl_DebugFPC**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows first person camera bones
    ```

- **wh_pl_DebugHoleDigging**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns on/off hole digging debugging.
    ```

- **wh_pl_DebugHudMask**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns hud mask debugging.
    ```

- **wh_pl_DebugIKLimbs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables IK Limbs debug draw
    ```

- **wh_pl_DebugInteractor**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns lock picking debugging. (0 = none, 1 = debug info, 2 = debug info and debug behaviour)
    ```

- **wh_pl_DebugMovementDirs**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables movement directions debugging
    ```

- **wh_pl_DebugPicking**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug item picking (bitwise - sum to turn multiple modes on):
1: draws all picking slots, green are item slot helpers, red are animation picking asset slots.
H/D/R/S are priority components (Height, Distance, Rotation, Side), P is the final priority, last is hand angle.
2: priority vector (deprecated)
4: same as 1, but draws only the best picking slots, in blue
8: drawn at the beggining of the pick, draws the a violet sphere at the slot location + axes.

    ```

- **wh_pl_DebugPickpocketing**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns pickpocketing debugging.
    ```

- **wh_pl_DebugPitchYaw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows player yaw pitch
    ```

- **wh_pl_DebugView**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables view debug draw.
    ```

- **wh_pl_DiceAIAllBadges**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Adds all badges to NPC inventory, so it can choose from them all.
    ```

- **wh_pl_DiceAIHoldingDelay**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Delay between AI is holding dice in seconds
    ```

- **wh_pl_DiceAIPlayerTurnDelay**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Delay before AI starts playing its turn in seconds
    ```

- **wh_pl_DiceCameraHeight**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Dice camera height (above the board) in meters.
    ```

- **wh_pl_DiceCameraHorizontal**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Dice camera horizontal shift towards the player (in multiples of the inner radius of the cup).
    ```

- **wh_pl_DiceDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Dice minigame debug.
    ```

- **wh_pl_DiceGoldFormationsScore**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Gold Formations badge score.
    ```

- **wh_pl_DiceHighThrowCount**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Number of throws when npc barks.
    ```

- **wh_pl_DiceIdleTimeout**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Define time for idle npc barks.
    ```

- **wh_pl_DiceLookAngleLimitDown**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Down angle of player look limit.
    ```

- **wh_pl_DiceLookAngleLimitLeft**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Left angle of player look limit.
    ```

- **wh_pl_DiceLookAngleLimitRight**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Right angle of player look limit.
    ```

- **wh_pl_DiceLookAngleLimitUp**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Up angle of player look limit.
    ```

- **wh_pl_DicePlumbFormationsScore**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Plumb Formations badge score.
    ```

- **wh_pl_DiceScoreForHighBark**:

  - **Default Value:** `1200`

  - **Description:**

    ```text
Define score for high npc barks.
    ```

- **wh_pl_DiceScoreForLowBark**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Define score for low npc barks.
    ```

- **wh_pl_DiceSilverFormationsScore**:

  - **Default Value:** `400`

  - **Description:**

    ```text
Silver Formations badge score.
    ```

- **wh_pl_DiceTargetScore**:

  - **Default Value:** `2000`

  - **Description:**

    ```text
Default dice target score.
    ```

- **wh_pl_DiggingFaderLength**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Duration for which the screen is faded.
    ```

- **wh_pl_DisableApseOnControllerAfterChatDelay**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
How long the apse wont be enabled after chat has ended (in seconds)
    ```

- **wh_pl_DistractHandOffset**:

  - **Default Value:** `0.25`

  - **Description:**

    ```text
Offset of the hand throwing decoy projectile to correct trajectory.
    ```

- **wh_pl_DogInteractorDayLen**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Set distance for dog interactor
    ```

- **wh_pl_DogInteractorNightLen**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Set distance for dog interactor at night
    ```

- **wh_pl_DrawAnim**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables draw weapon animations
    ```

- **wh_pl_ExactPosDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows exact positioning debug info
    ```

- **wh_pl_FOWEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable fog of war revealing.
    ```

- **wh_pl_FOWVisibilityRadius**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Fog of war visibility radius (meters).
    ```

- **wh_pl_FOWVisibilityRadiusHC**:

  - **Default Value:** `275`

  - **Description:**

    ```text
Fog of war visibility radius in hardcore mode (meters).
    ```

- **wh_pl_FOWVisibilityRadiusQuestLimited**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Fog of war visibility radius for quest needs.
    ```

- **wh_pl_FastTravelDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - show fast travel progress.
    ```

- **wh_pl_FastTravelDismountedHorseFrustumConeAngle**:

  - **Default Value:** `320`

  - **Description:**

    ```text
Half-angle (half of the cone) of the frustum for positioning horse when dismounting is forced by random event option
    ```

- **wh_pl_FastTravelDismountedHorseFrustumMaxDistance**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Maximum distance for positioning horse when dismounting is forced by random event option
    ```

- **wh_pl_FastTravelDismountedHorseFrustumMinDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum distance for positioning horse when dismounting is forced by random event option
    ```

- **wh_pl_FastTravelDistanceTolerance**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Max. allowed distance from FT POI to be able start FT
    ```

- **wh_pl_FastTravelEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0 - disabled, 1 - from anywhere, 2 - only from fast travel mark
    ```

- **wh_pl_FastTravelSkipTimeStepModif**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Fixed fast travel skiptime modif; auto=0; result = wh_pl_SkipTimeStep * wh_pl_FastTravelSkipTimeStepModif
    ```

- **wh_pl_FastTravelSlowDownPerceptionCount**:

  - **Default Value:** `4`

  - **Description:**

    ```text
How many perception objects with relation to player provides the maximum simulation slow down during fast travel
    ```

- **wh_pl_FocusAngleAboveTargetLimit**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Angle that will decide if player is directly above target (in that case focus wont turn left or right)
    ```

- **wh_pl_FocusCancelLimits_Down**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
    ```

- **wh_pl_FocusCancelLimits_Left**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
    ```

- **wh_pl_FocusCancelLimits_Right**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
    ```

- **wh_pl_FocusCancelLimits_Top**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Focus is canceled if target leaves this box.
    ```

- **wh_pl_FocusDampingFactor**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Damping factor used for focus.
    ```

- **wh_pl_FocusDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for player focus
    ```

- **wh_pl_FocusFOVBlendTime**:

  - **Default Value:** `0.55`

  - **Description:**

    ```text
Blend time for focus field of view change.
    ```

- **wh_pl_FocusFOVMaxAngleLength**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Camera angles length at which field of view is changed for focus camera.
    ```

- **wh_pl_FocusFOVMaxDecrease**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum field of view decrease in degrees (at wh_pl_FocusFOVMaxDistance distance) for focus camera.
    ```

- **wh_pl_FocusFOVMaxDistance**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Distance at which focus camera field of view is set to default FOV minus wh_pl_FocusFOVMaxDecrease.
    ```

- **wh_pl_FocusFOVMinAngleLength**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Camera angles length at which focus camera field of view is set to default FOV minus wh_pl_FocusFOVMaxDecrease.
    ```

- **wh_pl_FocusFOVMinDistance**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Minimum distance at which field of view is changed for focus camera.
    ```

- **wh_pl_FocusInChatEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables focus in chat.
    ```

- **wh_pl_FocusInitialLimits_Down**:

  - **Default Value:** `0.55`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Before softbox being reached.
    ```

- **wh_pl_FocusInitialLimits_Left**:

  - **Default Value:** `0.45`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Before softbox being reached.
    ```

- **wh_pl_FocusInitialLimits_Right**:

  - **Default Value:** `0.55`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Before softbox being reached.
    ```

- **wh_pl_FocusInitialLimits_Top**:

  - **Default Value:** `0.45`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space. Before softbox being reached.
    ```

- **wh_pl_FocusLimits_Down**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space.
    ```

- **wh_pl_FocusLimits_Left**:

  - **Default Value:** `0.495`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space.
    ```

- **wh_pl_FocusLimits_Right**:

  - **Default Value:** `0.505`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space.
    ```

- **wh_pl_FocusLimits_Top**:

  - **Default Value:** `0.41`

  - **Description:**

    ```text
Limits for focus box in [%] of screen space.
    ```

- **wh_pl_FocusOnlyHeadTurnTime**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Time until which only head is turned by player focus. It can be shorter due to turn head limits
    ```

- **wh_pl_FocusOutsideCancelBoxDeltaLimit**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Changes how much player needs to move the camera outside the cancel box before focus is canceled.
    ```

- **wh_pl_FocusRotationTime**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Time in which should be body turned to the NPC.
    ```

- **wh_pl_GameMode**:

  - **Default Value:** `1`

  - **Description:**

    ```text
game mode
    ```

- **wh_pl_HerbGatheringFadeInLength**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Fade in length after gathering herbs finishes.
    ```

- **wh_pl_HerbGatheringFadeLength**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Duration for which the screen is black between fade out and fade in.
    ```

- **wh_pl_HerbGatheringFadeOutLength**:

  - **Default Value:** `0.4`

  - **Description:**

    ```text
Fade out length when gathering herbs.
    ```

- **wh_pl_HerbGatheringLength**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
How long the main animation is looped until fader.
    ```

- **wh_pl_HoleHeightIncrement**:

  - **Default Value:** `1.25`

  - **Description:**

    ```text
The height by which the AABB of graves should be incremented. Fixes the problem with difficult selection of a graves (KCD2-311547).
    ```

- **wh_pl_InventoryDebugMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - inventory in debug mode
    ```

- **wh_pl_InventoryDummy**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable/disable inventory dummy player for equipping preview
    ```

- **wh_pl_LockPickedDoorTimeout**:

  - **Default Value:** `86400`

  - **Description:**

    ```text
NPCs will not react to a lock picked more than this amount of seconds ago.
    ```

- **wh_pl_LockPickingDOF**:

  - **Default Value:** `1`

  - **Description:**

    ```text
DOF during lock picking, 0 off, 1 on.
    ```

- **wh_pl_LockPickingForceFeedback**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Force feedback during lock picking, 0 off, 1 max level.
    ```

- **wh_pl_LockPickingLayoutDifficulty**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Overrides lockpicking difficulty in UI layout. [-1]=default, [0]=very easy, [1]=easy, [2]=moderate, [3]=hard, [4]=very hard
    ```

- **wh_pl_LockPickingShakeOverride**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Overrides cursor shaking while lockpicking. [-1]=no overriding
    ```

- **wh_pl_LockPickingShakeStart**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Cursor relative shaking on lockpicking start (angle 0), range is 0 to 1.0 
    ```

- **wh_pl_LockpickingMouseSensitivityCoefficient**:

  - **Default Value:** `0.68`

  - **Description:**

    ```text
Mouse sensitivity set in menu will be multiplied by this while lockpicking
    ```

- **wh_pl_MaxRaycastsPerChatInteractor**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Maximum number of raycasts that chat interactor is allowed to queue per frame
    ```

- **wh_pl_MaxRaycastsPerDogInteractor**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Maximum number of raycasts that dog interactor is allowed to queue per frame
    ```

- **wh_pl_MaxRaycastsPerInteractorTotal**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Total number of raycasts that the interactor is allowed to queue per frame
    ```

- **wh_pl_MaxRaycastsPerPlayerInteractor**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Maximum number of raycasts that player interactor is allowed to queue per frame
    ```

- **wh_pl_NearZ**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
NearZ for the player camera
    ```

- **wh_pl_PickAlways**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pick no matter what goes wrong!
    ```

- **wh_pl_PickDistTolerance**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Picking slot distance tolerance squared.
    ```

- **wh_pl_PickFarMinBlend**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
When picking beyond wh_pl_PickFarThreshold, at least this much of the foot-forward animation will be blended in.
    ```

- **wh_pl_PickFarThreshold**:

  - **Default Value:** `0.65`

  - **Description:**

    ```text
2D distance to item to pickup; after this distance, we start blending in picking animation with foot forward to get closer to item.
    ```

- **wh_pl_PickMaxDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximum 2D distance to item that allows pickup interaction.
    ```

- **wh_pl_PickSlotCanInverseDirection**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Forces all pick slots to behave as if inverse direction was on (1) or off (2).
Picking slots without inverse direction are named pck_xx..., with have an 'i' instead of one of the 'x'.
Show names using wh_pl_DebugPicking
    ```

- **wh_pl_PickingTransformAtAttach**:

  - **Default Value:** `1`

  - **Description:**

    ```text
How is the picked item transformed when attached to hand (only for picking items to inventory):
0: full transformation accodring to the hand slot
1: keeps the transformation it had when it was attached
2: keeps the rotation, but is snapped to the hand slot

    ```

- **wh_pl_PickpocketAssumeBagHasNoDefaultRotation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If turned on, will write trace error for assets that have non-identity rotations.If turned off, will compensate for the default rotation - bag collider will be turned to face forward in NPC's default stance. See KCD2-108597.
    ```

- **wh_pl_PickpocketDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Draws the pickpocketing spheres on each human actor.
    ```

- **wh_pl_PickpocketInteractDepth**:

  - **Default Value:** `0.14`

  - **Description:**

    ```text
Half of height of the capsule around pickpocketing bags, the capsule is oriented back-to-front of the NPC.
    ```

- **wh_pl_PickpocketInteractRadius**:

  - **Default Value:** `0.17`

  - **Description:**

    ```text
Radius of the capsule around pickpocketing bags, the capsule is oriented back-to-front of the NPC.
    ```

- **wh_pl_PickpocketInteractYOffset**:

  - **Default Value:** `0.02`

  - **Description:**

    ```text
Capsules for interactor ray casts for pickpocketing bags are based on top-middle of the bag, center of the capsule is offset forward by this amount, see wh_pl_PickpocketInteractRadius/Depth.
    ```

- **wh_pl_PickpocketInteractZOffset**:

  - **Default Value:** `0.08`

  - **Description:**

    ```text
Capsules for interactor ray casts for pickpocketing bags are based on top-middle of the bag, center of the capsule is offset lower by this amount, should be equal to almost radius to get it roughly to the middle of the bag, see wh_pl_PickpocketInteractRadius/Depth.
    ```

- **wh_pl_PlatformActivitiesDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug screen for platform activities
    ```

- **wh_pl_PopupTutorialDefaultDuration**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Default duration of tutorial popup windows.
    ```

- **wh_pl_PopupTutorialHorseDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
View debug of horse tutorials
    ```

- **wh_pl_PopupTutorialHorseHoldForwardDuration**:

  - **Default Value:** `12.5`

  - **Description:**

    ```text
How long should we hold forward during dash so that a tutorial pops up.
    ```

- **wh_pl_PopupTutorialHorseHoldSpurDuration**:

  - **Default Value:** `5`

  - **Description:**

    ```text
How long do we have to hold spur button so that a tutorial pops up
    ```

- **wh_pl_PopupTutorialHorseOverspurrCount**:

  - **Default Value:** `3`

  - **Description:**

    ```text
How many times do we have to overspurr the horse over the limit so that a tutorial pops up
    ```

- **wh_pl_RandomEventsAutoSpawnEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables automatic spawn of random events when player enters trigger area. Also enables generic random events.
    ```

- **wh_pl_RandomEventsCooldownsEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
enable cooldowns
    ```

- **wh_pl_RandomEventsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows debug info for all active random events.
    ```

- **wh_pl_RandomEventsDefaultMapTimeout**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Default value for timeout of random event encountered in fast travel (value is in seconds)
    ```

- **wh_pl_RandomEventsDefaultNPCCountStandardDeviation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Default value for NPC count normal distribution
    ```

- **wh_pl_RandomEventsDespawnDistance**:

  - **Default Value:** `200`

  - **Description:**

    ```text
Distance for event despawn. Player position is checked against event area and all spawned NPCs.
    ```

- **wh_pl_RandomEventsFastTravelCooldownMult**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Multiplier to all RandomEvent cooldowns when event in encountered during FastTravel. When changing this, consider also changing wh_pl_RandomEventsGlobalCooldownGenericEvents.
    ```

- **wh_pl_RandomEventsGenericEventsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug for generic random events.
1 - Enables wider circular query for debug and prints info about met and missed NPCs when fast travel ends
2 - All trace messages use trace::e_Info level

    ```

- **wh_pl_RandomEventsGenericEventsDebugEntityFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Enables more logging for specific entity for generic random events.

    ```

- **wh_pl_RandomEventsGenericEventsQueryRadius**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Radius for generic random events circular query.
    ```

- **wh_pl_RandomEventsGlobalCooldownCaravan**:

  - **Default Value:** `900`

  - **Description:**

    ```text
Sets global cooldown for caravan random events (value is in seconds)
    ```

- **wh_pl_RandomEventsGlobalCooldownCity**:

  - **Default Value:** `480`

  - **Description:**

    ```text
Sets city global cooldown for spawning random events (value is in seconds)
    ```

- **wh_pl_RandomEventsGlobalCooldownDefault**:

  - **Default Value:** `240`

  - **Description:**

    ```text
Sets default global cooldown for spawning random events (value is in seconds)
    ```

- **wh_pl_RandomEventsGlobalCooldownFast**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets global cooldown for 'fast' random events (value is in seconds)
    ```

- **wh_pl_RandomEventsGlobalCooldownGenericEvents**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Sets global cooldown for generic random events (value is in seconds). Always multiplied by wh_pl_RandomEventsFastTravelCooldownMult.
    ```

- **wh_pl_RandomEventsInFastTravelConceptStreamingAdditionalDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Distance for streaming event place concept nodes in fast travel. Distance is added to the player view rpg value.
    ```

- **wh_pl_RandomEventsSelectEventPlaceOverride**:

  - **Default Value:** ``

  - **Description:**

    ```text
Only specified random event places will spawn when entering trigger area.
[Space separated list of event places names]
    ```

- **wh_pl_RandomEventsSelectVariantOverride**:

  - **Default Value:** ``

  - **Description:**

    ```text
Force specified random event variants to be selected.
[Space separated list of variant names]
    ```

- **wh_pl_RandomEventsTagDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows debug draw for random event tags.
    ```

- **wh_pl_RandomEventsVariantDefaultCooldown**:

  - **Default Value:** `7200`

  - **Description:**

    ```text
Sets the default cooldown for random event variants (value is in seconds)
    ```

- **wh_pl_RefreshInteractorTime**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Set timeout of interactor forced refresh in seconds.
    ```

- **wh_pl_SharpeningCameraRotation**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Camera rotation while sharpening.
    ```

- **wh_pl_SharpeningDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sharpening debug
    ```

- **wh_pl_SharpeningDebugInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows sharpening progress
    ```

- **wh_pl_SharpeningEffDecMult**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Multiplier of efficiency removed from current zone health.
    ```

- **wh_pl_SharpeningEffIncMult**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Multiplier of efficiency added to current zone health.
    ```

- **wh_pl_SharpeningMousePositionMult**:

  - **Default Value:** `0.0004`

  - **Description:**

    ```text
Sensitivity of mouse while setting position.
    ```

- **wh_pl_SharpeningMousePressureSteps**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of steps to max pressure with mouse.
    ```

- **wh_pl_SharpeningMouseRotationMult**:

  - **Default Value:** `0.001`

  - **Description:**

    ```text
Sensitivity of mouse while setting rotation.
    ```

- **wh_pl_SharpeningParticleFailMult**:

  - **Default Value:** `15`

  - **Description:**

    ```text
Multiplier of fail particle scale count.
    ```

- **wh_pl_SharpeningParticleNormalMult**:

  - **Default Value:** `300`

  - **Description:**

    ```text
Multiplier of normal particle scale count.
    ```

- **wh_pl_SharpeningPedalSpeedInc**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Increase of speed per single pedal movement.
    ```

- **wh_pl_SharpeningPerSecSpeedMult**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Decrease of speed per second.
    ```

- **wh_pl_SharpeningPerSecSpeedPressMult**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Decrease of speed per second according to pressure.
    ```

- **wh_pl_SharpeningPositionMult**:

  - **Default Value:** `0.9`

  - **Description:**

    ```text
Sensitivity of stick while setting position.
    ```

- **wh_pl_SharpeningRotationMult**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Sensitivity of stick while setting rotation.
    ```

- **wh_pl_SharpeningUseBothSticks**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use one stick for sword position and another for sword rotation.
    ```

- **wh_pl_ShowFireCursor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show cursor while missile weapon is in hand.
    ```

- **wh_pl_ShowHead**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Overwrite state of player's head /w mouth,eyes,teeth and tongue. Re-enter game for this to take effect! 
 (0 = no overwrite, 1 = force show, 2 = force hide)
    ```

- **wh_pl_SkipTimeAllowInTrespass**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Controls whether player can initiate skip time while in trespass.
0: cannot initiate
1: cannot initiate, except for sleeping
2: can always initiate
    ```

- **wh_pl_SkipTimeEnableOptiCVars**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable turning off render, turning on NoAnim and setting wireframe mode to 2 when skip timing
    ```

- **wh_pl_SkipTimeMaxUpdatesPerFrame**:

  - **Default Value:** `45`

  - **Description:**

    ```text
Game loop is repeated this many times for each frame while time skipping.
    ```

- **wh_pl_SkipTimeMaxWorldTimeRatio**:

  - **Default Value:** `360`

  - **Description:**

    ```text
Max world time ration for skip time. [ration]
    ```

- **wh_pl_SkipTimeMaxWorldTimeRatioHours**:

  - **Default Value:** `48`

  - **Description:**

    ```text
Skip time upper hours for max world time ratio. [hours]
    ```

- **wh_pl_SkipTimeRenderOnEachDialogUpdate**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Force render update when the skip time dialog is updated (turned)
    ```

- **wh_pl_SkipTimeStep**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Fixed update time step when skip time is on, in milliseconds
    ```

- **wh_pl_StateDebug**:

  - **Default Value:** ``

  - **Description:**

    ```text
Displays current state hierarchy for given actor.
    ```

- **wh_pl_StateEventDebug**:

  - **Default Value:** ``

  - **Description:**

    ```text
Displays state machine state history for given actor.
    ```

- **wh_pl_StoneThrowingAngleTolerance**:

  - **Default Value:** `0.65`

  - **Description:**

    ```text
Tolerance rotation (dot) to enable interaction
    ```

- **wh_pl_StoneThrowingDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for stone throwing minigame
    ```

- **wh_pl_StoneThrowingLaunchStrength**:

  - **Default Value:** `1600`

  - **Description:**

    ```text
Strength of impulse applied after stone launch
    ```

- **wh_pl_StoneThrowingLaunchXAngle**:

  - **Default Value:** `85`

  - **Description:**

    ```text
X angle of impulse for stone throwing
    ```

- **wh_pl_StoneThrowingMaxDistance**:

  - **Default Value:** `1.8`

  - **Description:**

    ```text
Maximum distance to pile to enable interaction
    ```

- **wh_pl_StoneThrowingMinDistance**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Minimum distance to pile to enable interaction
    ```

- **wh_pl_StoneThrowingMovementSmoothing**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Smoothing factor for movement in the minigame
    ```

- **wh_pl_SwitchPlayerDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for player switching
    ```

- **wh_pl_TurningAnimOff**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_pl_TutorialActionDismissCooldown**:

  - **Default Value:** `30000`

  - **Description:**

    ```text
Duration for which the reset tutorial action is on the screen.
    ```

- **wh_pl_TutorialOldSaveAgeInSeconds**:

  - **Default Value:** `2.592e+06`

  - **Description:**

    ```text
Save if considered old if it was saved sooner than current time minus this constant (in seconds). Default is 150 days.
    ```

- **wh_pl_UseOldPlayerInteractor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables old player interactor instead of the new one
    ```

- **wh_pl_VisualDebug**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **wh_pl_VisualDebugLayout**:

  - **Default Value:** ``

  - **Description:**

    ```text

    ```

- **wh_pl_cfm_AttackCostCapacity**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Clamps the stamina cost that one attack has.
    ```

- **wh_pl_cfm_AttackCostStrengthTreshold**:

  - **Default Value:** `6`

  - **Description:**

    ```text
If under this treshold, then 0 trigger strength is applied, 
				if the value is set to low it might cause that all wepon attack will have trigger effect applied.
    ```

- **wh_pl_cfm_CriticallyLowStaminaTreshold**:

  - **Default Value:** `5`

  - **Description:**

    ```text
If player's stamina is under this threshold, maximum trigger strength is applied. Determines how strong will the resistance of the trigger be.
    ```

- **wh_pl_cfm_LowStaminaTreshold**:

  - **Default Value:** `30`

  - **Description:**

    ```text
If player's stamina is under this threshold, low trigger strength is applied. Determines how strong will the resistance of the trigger be.
    ```

- **wh_pl_cfm_MaxTriggerStrength**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Trigger strength has to be value between 0-8. Should be higher than wh_pl_cfm_LowTriggerStrength
    ```

- **wh_pl_cfm_MediumTriggerStrength**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Trigger strength has to be value between 0-8, Should be lower than wh_pl_cfm_MaxTriggerStrength.
    ```

- **wh_pl_minigameDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows debug for active minigames.
    ```

- **wh_playerHorse_FollowInnerCircleRadius**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Radius of the inner circle used in follow (ideal distance between NPC and Player)
    ```

- **wh_playerHorse_FollowInnerCircleRadiusBias**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Inner circle radius bias used when interpolating between player and target speed when catching up to target
    ```

- **wh_playerHorse_FollowInputMovementScaleX**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Scale of player input in X axis
    ```

- **wh_playerHorse_FollowInputMovementScaleY**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Scale of player input in Y axis
    ```

- **wh_playerHorse_FollowMaxStartDistance**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Maximum distance at which can player start following NPC that he can't chat with
    ```

- **wh_playerHorse_FollowMinDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Distance between NPC and player when speed is zero (min distance between NPC and Player)
    ```

- **wh_playerHorse_FollowNPCSpeedForMaximumOffset**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum NPC speed at which specified offset values are used
    ```

- **wh_playerHorse_FollowOffsetX**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Follow NPC offset on the X axis in NPC local space
    ```

- **wh_playerHorse_FollowOffsetY**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Follow NPC offset on the Y axis in NPC local space
    ```

- **wh_playerHorse_FollowOffsetYWhenCenter**:

  - **Default Value:** `-2`

  - **Description:**

    ```text
Follow NPC offset on the Y axis in NPC local space when using 'Center' offset
    ```

- **wh_playerHorse_FollowOuterCircleMinSpeed**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum player speed when outside outer circle (useful when NPC is moving very slowly)
    ```

- **wh_playerHorse_FollowOuterCircleRadius**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Radius of the outer circle used in follow (max distance between NPC and Player before Follow turns off)
    ```

- **wh_playerHorse_FollowOuterCircleTargetSpeedScale**:

  - **Default Value:** `2`

  - **Description:**

    ```text
When outside outer circle player never moves slower than this multiple of NPC speed (used to keep NPC and player speed similar when catching up to NPC)
    ```

- **wh_player_BowControlScheme**:

  - **Default Value:** `2`

  - **Description:**

    ```text
0 - old control: lmb press+release
1 - new control: rmb aim, lmb fire
2- hybrid control
    ```

- **wh_player_DashMaxInterval**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Maximum amount of time between consecutive presses of the sprint key for dash to be active
    ```

- **wh_player_DeepWaterLevel**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Deep water level (limit some actions, crouching ..) 
    ```

- **wh_player_DefaultPitchAngleDownLimit**:

  - **Default Value:** `-1.18682`

  - **Description:**

    ```text
Default pitch limiting for player (down direction)
    ```

- **wh_player_DefaultPitchAngleUpLimit**:

  - **Default Value:** `1.39626`

  - **Description:**

    ```text
Default pitch limiting for player (up direction)
    ```

- **wh_player_FollowAlwaysCanFollow**:

  - **Default Value:** `0`

  - **Description:**

    ```text
When enabled player can follow anyone as if they had followable NPC side effect
1 - Center
2 - Left
3 - Right
    ```

- **wh_player_FollowDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables Follow DebugDraw
    ```

- **wh_player_FollowInnerCircleRadius**:

  - **Default Value:** `1.5`

  - **Description:**

    ```text
Radius of the inner circle used in follow (ideal distance between NPC and Player)
    ```

- **wh_player_FollowInnerCircleRadiusBias**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Inner circle radius bias used when interpolating between player and target speed when catching up to target
    ```

- **wh_player_FollowInputMovementScaleX**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Scale of player input in X axis
    ```

- **wh_player_FollowInputMovementScaleY**:

  - **Default Value:** `1.2`

  - **Description:**

    ```text
Scale of player input in Y axis
    ```

- **wh_player_FollowMaxStartDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Maximum distance at which can player start following NPC that he can't chat with
    ```

- **wh_player_FollowMinDistance**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Distance between NPC and player when speed is zero (min distance between NPC and Player)
    ```

- **wh_player_FollowNPCSpeedForMaximumOffset**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Minimum NPC speed at which specified offset values are used
    ```

- **wh_player_FollowOffsetX**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Follow NPC offset on the X axis in NPC local space
    ```

- **wh_player_FollowOffsetY**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
Follow NPC offset on the Y axis in NPC local space
    ```

- **wh_player_FollowOffsetYWhenCenter**:

  - **Default Value:** `-0.8`

  - **Description:**

    ```text
Follow NPC offset on the Y axis in NPC local space when using 'Center' offset
    ```

- **wh_player_FollowOuterCircleMinSpeed**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Minimum player speed when outside outer circle (useful when NPC is moving very slowly)
    ```

- **wh_player_FollowOuterCircleRadius**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Radius of the outer circle used in follow (max distance between NPC and Player before Follow turns off)
    ```

- **wh_player_FollowOuterCircleTargetSpeedScale**:

  - **Default Value:** `2`

  - **Description:**

    ```text
When outside outer circle player never moves slower than this multiple of NPC speed (used to keep NPC and player speed similar when catching up to NPC)
    ```

- **wh_player_FrontCollisionBlendIn**:

  - **Default Value:** `4`

  - **Description:**

    ```text
How fast in 1/s will the front collision move towards maximal offset
    ```

- **wh_player_FrontCollisionCrouchedVerticalOffset**:

  - **Default Value:** `1.05`

  - **Description:**

    ```text
Vertical offset of the front collision sphere
    ```

- **wh_player_FrontCollisionForwardOffset**:

  - **Default Value:** `0.35`

  - **Description:**

    ```text
Maximal forward offset of the front collision sphere
    ```

- **wh_player_FrontCollisionRadius**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Radius of the front collision sphere
    ```

- **wh_player_FrontCollisionVerticalOffset**:

  - **Default Value:** `1.05`

  - **Description:**

    ```text
Vertical offset of the front collision sphere
    ```

- **wh_player_HorseDashShoutTimeout**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Timeout on player's shout before horse starts dashing
    ```

- **wh_player_HorseHintsVisibilityTimeout**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Time for which horse hints would stay visible after mounting
    ```

- **wh_player_InPlaceJumpAirControl**:

  - **Default Value:** `0.75`

  - **Description:**

    ```text
Air control phys value for inplace jump.
    ```

- **wh_player_InteractorChatMagnetismHeight**:

  - **Default Value:** `13`

  - **Description:**

    ```text
Interactor magnetism screen for chat interaction
    ```

- **wh_player_InteractorChatMagnetismWidth**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Interactor magnetism screen for chat interaction
    ```

- **wh_player_InteractorDistance**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Maximum distance at which a player can interact with other entities
    ```

- **wh_player_InteractorDistanceOnHorse**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Maximum distance at which a player can interact with other entities while the player is riding a horse
    ```

- **wh_player_InteractorDistanceSitting**:

  - **Default Value:** `2.3`

  - **Description:**

    ```text
Maximum distance at which a player can interact with other entities while in sitting stance
    ```

- **wh_player_InteractorDogMagnetismHeight**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Interactor magnetism screen height when using dog interaction
    ```

- **wh_player_InteractorDogMagnetismWidth**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Interactor magnetism screen width when using dog interaction
    ```

- **wh_player_InteractorMagnetismHeight**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Interactor magnetism screen height
    ```

- **wh_player_InteractorMagnetismWidth**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Interactor magnetism screen width
    ```

- **wh_player_PickPlaceAngleCap**:

  - **Default Value:** `40`

  - **Description:**

    ```text
Maximum allowed horizontal angle (in deg) for picking and placing items.
    ```

- **wh_player_SlidingDistanceMultForDamage**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Multiplies distance passed to RPG fall damage computation when sliding ends
    ```

- **wh_player_TenseCircumstanceDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables TenseCircumstance DebugDraw (for player)
    ```

- **wh_player_WeaponDrawHolsterHeadAngleCap**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Maximum allowed vertical angle (in deg) at which player can look down while drawing or holstering.
    ```

- **wh_quest_DebugQuestLog**:

  - **Default Value:** ``

  - **Description:**

    ```text
Displays objectives and logs for quest (given by name, use wh_quest_ListQuests). For next page use wh_quest_DebugQuestLogPage.
    ```

- **wh_quest_DebugQuestLogPage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controlls what page of the debug print will be shown. Affects wh_quest_DebugQuestLog.
    ```

- **wh_quest_DebugQuestMarkers**:

  - **Default Value:** ``

  - **Description:**

    ```text
Select quest by name for debug markers
    ```

- **wh_quest_ListQuests**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Lists all quests by name. For next page use wh_quest_ListQuestsPage.
    ```

- **wh_quest_ListQuestsPage**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controlls what page of the debug print will be shown. Affects wh_quest_ListQuests.
    ```

- **wh_r_BillboardAtlasDiffuseConfig**:

  - **Default Value:** `EngineAssets/Textures/BillboardAtlas/Diffuse 2048 2048 8 2DArray BC3`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_BillboardAtlasHeightConfig**:

  - **Default Value:** `EngineAssets/Textures/BillboardAtlas/Height 2048 2048 8 2DArray BC4`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_BillboardAtlasNormalConfig**:

  - **Default Value:** `EngineAssets/Textures/BillboardAtlas/Normal 2048 2048 8 2DArray BC5S`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_BindlessSkinningMaxBoneCount**:

  - **Default Value:** `131072`

  - **Description:**

    ```text
Maximum number of bones which can be rendered on GPU at once. If we run out, remaining characters will be in T-pose.
    ```

- **wh_r_BindlessSkinningMaxMorphCount**:

  - **Default Value:** `4096`

  - **Description:**

    ```text
Maximum number of morphs which can be rendered on GPU at once. If we run out, morph will not be applied.
    ```

- **wh_r_DecalAtlasDiffuseConfig**:

  - **Default Value:** `EngineAssets/Textures/DecalAtlas/Diffuse 512 512 12 2DArray BC3`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_DecalAtlasNormalConfig**:

  - **Default Value:** `EngineAssets/Textures/DecalAtlas/Normal 512 512 12 2DArray BC5S`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_DecalAtlasSmoothnessConfig**:

  - **Default Value:** `EngineAssets/Textures/DecalAtlas/Normal 512 512 12 2DArray BC4`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_DecalAtlasSpecularConfig**:

  - **Default Value:** `EngineAssets/Textures/DecalAtlas/Specular 512 512 12 2DArray BC1`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_DetailAtlasConfig**:

  - **Default Value:** `EngineAssets/Textures/DetailAtlas 512 512 32 2DArray BC7`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_DofLdr**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Use LDR image for DoF calculations
    ```

- **wh_r_DynamicLightTimes**:

  - **Default Value:** `3:40,4:40,5,8,13,18,21,21:20,22:20`

  - **Description:**

    ```text
Default time of day hours/minutes to generate dynamic lightning.
    ```

- **wh_r_MacroAtlasBGSConfig**:

  - **Default Value:** `EngineAssets/Textures/MacroAtlas/BGS 1024 1024 5 2DArray BC7`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MacroAtlasDiffuseConfig**:

  - **Default Value:** `EngineAssets/Textures/MacroAtlas/Diffuse 1024 1024 5 2DArray BC1`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MacroAtlasNormalConfig**:

  - **Default Value:** `EngineAssets/Textures/MacroAtlas/Normal 1024 1024 5 2DArray BC5S`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MacroAtlasSmoothnessConfig**:

  - **Default Value:** `EngineAssets/Textures/MacroAtlas/Normal 1024 1024 5 2DArray BC4`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MaterialAtlasDiffuseConfig**:

  - **Default Value:** `EngineAssets/Textures/MaterialAtlas/Diffuse 256 256 128 2DArray BC3`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MaterialAtlasMaskConfig**:

  - **Default Value:** `EngineAssets/Textures/MaterialAtlas/Mask 256 256 128 2DArray BC7`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MaterialAtlasNormalConfig**:

  - **Default Value:** `EngineAssets/Textures/MaterialAtlas/Normal 256 256 128 2DArray BC5S`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MaterialAtlasSmoothnessConfig**:

  - **Default Value:** `EngineAssets/Textures/MaterialAtlas/Normal 256 256 128 2DArray BC4`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MaterialAtlasSpecularConfig**:

  - **Default Value:** `EngineAssets/Textures/MaterialAtlas/Specular 256 256 128 2DArray BC1`

  - **Description:**

    ```text
[folder] [width] [height] [array size] [type] [format]

folder: all textures in from this folder will be loaded into the array in alphabetical order.
width, height: must be power-of-two.
array size: must be 1-255.
type: 2DArray or CubeArray.
format: BC1-BC7. See https://docs.microsoft.com/en-us/windows/win32/direct3d10/d3d10-graphics-programming-guide-resources-block-compression#compression-algorithms
    ```

- **wh_r_MultiThreadedEditor**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables dedicated render thread in editor.
  0: disabled
  1: enabled
    ```

- **wh_r_PerObjectShadowsDistanceSq**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Sets squared distance from where per-object shadows are enabled on humans.
    ```

- **wh_r_ProbeCubemapTexSize**:

  - **Default Value:** `32`

  - **Description:**

    ```text
Size of one texture in the atlas. You will have to change probe entity properties, rc.ini, re-generate all cubemaps and restart editor after changing this cvar.
    ```

- **wh_r_ProfilerScaleX**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Render profiler window scale. X axis.
    ```

- **wh_r_ProfilerScaleY**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Render profiler window scale. Y axis.
    ```

- **wh_r_ProfilerX**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Render profiler window offset. X axis.
    ```

- **wh_r_ProfilerY**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Render profiler window offset. Y axis.
    ```

- **wh_r_ReflexLightDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Stores reflex light texture into reflexmap.tif file.
    ```

- **wh_r_ReflexLightRes**:

  - **Default Value:** `64`

  - **Description:**

    ```text
Reflex light resolution
    ```

- **wh_r_ScreenShotFile**:

  - **Default Value:** ``

  - **Description:**

    ```text
The filename of capturing screenshot
    ```

- **wh_r_ScreenShotFolder**:

  - **Default Value:** ``

  - **Description:**

    ```text
The folder of capturing screenshot
    ```

- **wh_r_SemiPersistentCompiledObjectsDuration**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Frame count to hold CompiledRenderObjects. -1 to hold indefinitely(most likely will result in crash due to descriptor pool emptying)
    ```

- **wh_r_ShadersRemoteCompilerNetworkFailRetries**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Number of retries on network error before disabling remote shader compiler when r_ShadersRemoteCompiler = 1
    ```

- **wh_r_TexturesStreamingIdleTrimLimitKB**:

  - **Default Value:** `1.04858e+06`

  - **Description:**

    ```text
Max amount to trim each frame when there are no streaming request, KB.
Usage: r_TexturesStreamingIdleTrimLimitKB [size]
Default is 4096KiBi
    ```

- **wh_r_VolumetricCloudsMapOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Behavior of the local cloud map
0 - standard, new cloud config gets gradually blended in
1 - override whole map with current cloud config
2 - override for a single frame only
    ```

- **wh_r_VolumetricFogGlobalDensityOverride**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Override volumetric fog global density. Use -1 to disable override
    ```

- **wh_r_texturesstreamingKickDuringTrimStage**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Moves kicking of textures under balance point to trim stage
Usage: wh_r_texturesstreamingKickDuringTrimStage [0/1]
Default is 1 (on).
    ```

- **wh_r_texturesstreamingScheduleTimeLimitUs**:

  - **Default Value:** `3000`

  - **Description:**

    ```text
Max time to process texture trim, kick and stream per frame, us.
Usage: wh_r_texturesstreamingScheduleTimeLimitUs [time]
Default is 3000us
    ```

- **wh_rd_Debug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Ragdoll debug output
    ```

- **wh_rd_DefaultStiffness**:

  - **Default Value:** `500`

  - **Description:**

    ```text
Default ragdoll stiffness when ragdoll is triggered from code
    ```

- **wh_rd_HitSpeedThreshold**:

  - **Default Value:** `3`

  - **Description:**

    ```text
Default delta speed for ragdoll to evaluate hit
    ```

- **wh_rd_PlayerHeadColliderRescale**:

  - **Default Value:** `3.5`

  - **Description:**

    ```text
Player's head collision capsule upscales by this modifier during ragdoll to prevent camera clipping.
    ```

- **wh_rd_StillDuration**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Duration in seconds of ragdolled actor stillness before stand up
    ```

- **wh_rd_StillSpeedThreshold**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Ragdoll still pose speed limit
    ```

- **wh_rpg_AchievementsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
set to non-zero to debug draw the achievements
    ```

- **wh_rpg_ActorIlluminanceIntervalEndpoints**:

  - **Default Value:** `0.001 0.002`

  - **Description:**

    ```text
Thresholds for player illuminance estimation buff ActorIlluminanceMeter.
Space separated endpoints, number of intervals is the number of floats in this cvar + 1.
The number of intervals must match the numbef of modifier groups in the buff.
    ```

- **wh_rpg_AutoReloadRoles**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Controls whether roles table should be automatically reloaded when roles file is modified
    ```

- **wh_rpg_CombatHistoryExpirationTime**:

  - **Default Value:** `1200`

  - **Description:**

    ```text
Expiration time for combat history. After that time history is discarded.
    ```

- **wh_rpg_ContextOverride_BodyPart**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Override ID of the bodypart RPG context.
    ```

- **wh_rpg_ContextOverride_Health**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Override ID of the health RPG context.
    ```

- **wh_rpg_ContextOverride_SkillLevelRelative**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Override ID of the skill RPG context as relative skill level <0;1>.
    ```

- **wh_rpg_CorpseDisappearAddedDelay**:

  - **Default Value:** `60000`

  - **Description:**

    ```text
If corpse is supposed to be despawned but is not because player is too close, despawn is delayed by this many milliseconds.
    ```

- **wh_rpg_DebugAlcohol**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows rpg debug for alcohol,
the value is a bitmask controlling the display of particular info,
possible bits:
      1 - drunkenees

    ```

- **wh_rpg_DebugFactionId**:

  - **Default Value:** `<INVALID>`

  - **Description:**

    ```text
Shows debug for factions of Id,

    ```

- **wh_rpg_DebugFactions**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Shows rpg debug for factions,
the value is a bitmask controlling the display of particular info,
possible bits:
      1 - show factions with queued reputations

    ```

- **wh_rpg_DebugSouls**:

  - **Default Value:** `0`

  - **Description:**

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

  - **Default Value:** `15`

  - **Description:**

    ```text
Max distance from the player to show in DebugSouls [m]
    ```

- **wh_rpg_DebugSoulsFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of soul to show in DebugSouls
    ```

- **wh_rpg_DebugSoulsStringFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
filter for the output (currently works only for buffs)
    ```

- **wh_rpg_EnableReputationOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable global reputation override,

    ```

- **wh_rpg_EventLogDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Debug disabled, 1=Debug enabled, 2=Enabled with reduced text
    ```

- **wh_rpg_FollowDrainHorseStamina**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Should the horse's stamina be drained (during dash) when it is in follow?
    ```

- **wh_rpg_FollowDrainRiderStamina**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Should the rider's stamina be drained (during dash) when it is in follow?
    ```

- **wh_rpg_GameTimeRatioOn**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 - Enable game time ratio in skiptime
    ```

- **wh_rpg_IgnoreStaticBedPOI**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Bed POI in static level data are not loaded.
    ```

- **wh_rpg_IndulgencePriceCacheExpirationTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal age of indulgance price cache. Value is in seconds
    ```

- **wh_rpg_ItemFullHealthByDefault**:

  - **Default Value:** `0`

  - **Description:**

    ```text
All items will be at full health and quality by default (if not configured).
    ```

- **wh_rpg_LocationReputationCacheExpirationTime**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Maximal age of location reputation cache. Value is in seconds
    ```

- **wh_rpg_LockOnAllTargets**:

  - **Default Value:** `0`

  - **Description:**

    ```text
all souls are treated as enemies during the combat locking
    ```

- **wh_rpg_LogCompression**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Log compression level: 0=No compression, 1=Best speed, 9=Best compression, -1=Default compression (6)
    ```

- **wh_rpg_LogFilepath**:

  - **Default Value:** `%USER%/Logs/`

  - **Description:**

    ```text
Directory path where Log files are saved.
    ```

- **wh_rpg_LogInterval**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Interval between saving logs to file (seconds)
    ```

- **wh_rpg_LogLevel**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Log All events, 1=Log Combat events (same as E_LogLevel)
    ```

- **wh_rpg_LogReasons**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Disable logging Reasons, 1=Enable logging Reasons
    ```

- **wh_rpg_LogSize**:

  - **Default Value:** `32000`

  - **Description:**

    ```text
Preferred size of a log file (bytes). The saved file may be a bit larger because the last event has to be closed properly.
    ```

- **wh_rpg_LogTarget**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Logging disabled, 1=Log to Server, 2=Log to File, 3=Log to Both (same as E_LogTarget
    ```

- **wh_rpg_LogType**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Log GUIDs, 1=Log names, 2=Log both (same as E_LogType)
    ```

- **wh_rpg_MaxSoulUpdateDelta**:

  - **Default Value:** `2`

  - **Description:**

    ```text
max update delta time, all above will be clamped [s]
    ```

- **wh_rpg_OneShotKill**:

  - **Default Value:** `0`

  - **Description:**

    ```text
One shot kill (every, even small, hit is lethal).
    ```

- **wh_rpg_ParallelUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
execute rpg update in a async job
    ```

- **wh_rpg_PerceptionPriorRelationshipFuncType**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Change behaviour of relationship while computing perception priority.
      0 - KCD style, only multiplying constants apply      1 - new style including bonus to neutral and enemy relationship
    ```

- **wh_rpg_ProfilingLog**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 = Log basic profiling data (like CPU and GPU frame times).
    ```

- **wh_rpg_ProfilingLogInterval**:

  - **Default Value:** `30`

  - **Description:**

    ```text
How often we send the profiling data [seconds].
    ```

- **wh_rpg_ProfilingLogSmoothingFactor**:

  - **Default Value:** `0.005`

  - **Description:**

    ```text
Exponential smoothing factor. Value from 0 to 1. 1 -> disables smoothing.
    ```

- **wh_rpg_ReputationLogMaxSize**:

  - **Default Value:** `30`

  - **Description:**

    ```text
A soul or faction forgets the oldest reputation change record after its own log reaches this size.
    ```

- **wh_rpg_ReputationOverride**:

  - **Default Value:** `0`

  - **Description:**

    ```text
All rpg reputations (anything vs. player) are overriden to this value,

    ```

- **wh_rpg_SchedulerBudgetPerLayer**:

  - **Default Value:** `8`

  - **Description:**

    ```text
number of updated souls in each layer
    ```

- **wh_rpg_SchedulerDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
set to non-zero to debug draw the state of the scheduler, 1 - per layer debug, 2 - sorted jobs
    ```

- **wh_rpg_SchedulerSortIterations**:

  - **Default Value:** `3`

  - **Description:**

    ```text
number of bubble sort iterations per frame
    ```

- **wh_rpg_SchedulerSoulsInLayer0**:

  - **Default Value:** `8`

  - **Description:**

    ```text
souls in the first layer, second contains twice the count
    ```

- **wh_rpg_SchedulerUpdate**:

  - **Default Value:** `1`

  - **Description:**

    ```text
1 - use soul priorities, 0 - naive update for each soul
    ```

- **wh_rpg_SkipAll**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable all rpg effects and timers on all souls. Works bad when put in system.cfg.
    ```

- **wh_rpg_SkipEffectsOn**:

  - **Default Value:** ``

  - **Description:**

    ```text
Disable all RPG effects on soul(s) with given name; _all_ stands for all existing souls
    ```

- **wh_rpg_SkipFoodTimers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
disable all food-related timers (like starvation)
    ```

- **wh_rpg_SkipTimersOn**:

  - **Default Value:** ``

  - **Description:**

    ```text
Disable all RPG timers on soul(s) with given name; _all_ stands for all existing souls
    ```

- **wh_rpg_SoulCombatSimulatorDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for soul combat simulator.
    ```

- **wh_rpg_SoulCombatSimulatorMeleeMaxDistance**:

  - **Default Value:** `8`

  - **Description:**

    ```text
Maximal distance for melee fight.
    ```

- **wh_rpg_SoulCombatSimulatorMeleeTimeout**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Minimal timeout between attacks for melee weapon. Value is in seconds
    ```

- **wh_rpg_SoulCombatSimulatorMissileTimeout**:

  - **Default Value:** `16`

  - **Description:**

    ```text
Attack mean time for archers. The value is given by candency of animation.
    ```

- **wh_rpg_StatisticsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
set to non-zero to debug draw the statistics
    ```

- **wh_rpg_TelemetryEnforced**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1= Telemetry errors will appear when connection issues happen and Game will be terminated. wh_rpg_LogTarget must be set to 1
    ```

- **wh_rpg_TelemetryLimitedToPlayer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0=Telemetry logging for all events, 1=Telemetry logging only for events affected by player
    ```

- **wh_rpg_TelemetryLimitedToPlayline**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Telemetry enabled on all playlines, 1-7=Telemetry enabled only on selected playline
    ```

- **wh_rpg_TelemetryMarketingConsent**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set from the UI, Saved in the profile
 0=Publisher/Developer (false) cannot use telemetry data for marketing ,
 1=Publisher/Developer (true)  can use telemetry data for marketing.
    ```

- **wh_rpg_TelemetryMaxRetryCount**:

  - **Default Value:** `30`

  - **Description:**

    ```text
Maximum number of retry attempts when sending telemetry failed
    ```

- **wh_rpg_TelemetryPlaionEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
-1=Disable and free memory, 0=Disable , 1 = Enable (same as E_TelemetryPlaionEnable)
    ```

- **wh_rpg_TelemetryRetryDelay**:

  - **Default Value:** `5000`

  - **Description:**

    ```text
Delay between retry attempts when sending telemetry failed [ms]
    ```

- **wh_rpg_TelemetryServer**:

  - **Default Value:** ``

  - **Description:**

    ```text
Address of the telemetry load balancing server.
    ```

- **wh_rpg_TelemetrySpamFiltering**:

  - **Default Value:** `1`

  - **Description:**

    ```text
0=Log all events, respecting E_LogLevel.
1=Selected frequent events are hard-filtered.
    ```

- **wh_rpg_UnlockAll**:

  - **Default Value:** `0`

  - **Description:**

    ```text
unlock all abilities
    ```

- **wh_s_ObstructionSmoothFloatDefaultAlpha**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
How fast smoothed obstruction reaches its target value.
Usage: wh_s_ObstructionSmoothFloatDefaultAlpha [0/1]
Default: 0.8

    ```

- **wh_s_OcclusionBubbleThreshold**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Hide text bubbles when occlusion is above this value. See also sound_obstruction in SurfaceTypes.xml
Usage: wh_s_OcclusionBubbleThreshold [0/1]
Default: 0.5

    ```

- **wh_s_OcclusionBubbleThresholdEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enable hiding text bubbles on unsuccessful raycasts.
Usage: wh_s_OcclusionBubbleThresholdEnable 0/1
Default: 1

    ```

- **wh_s_OcclusionRayEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables or disables obstruction system using ray casts.Usage: wh_s_OcclusionRayEnabled [0/1]
Default: 1 (enabled)

    ```

- **wh_s_OcclusionRayNPCVerticalOffset**:

  - **Default Value:** `1.4`

  - **Description:**

    ```text
Offset ray start for NPCs. This offset is relative to their feet.
Usage: wh_s_OcclusionRayNPCVerticalOffset [0/...]
Default: 1.4

    ```

- **wh_s_OcclusionSmoothFloatDefaultAlpha**:

  - **Default Value:** `0.8`

  - **Description:**

    ```text
How fast smoothed occlusion reaches its target value.
Usage: wh_s_OcclusionSmoothFloatDefaultAlpha [0/1]
Default: 0.8

    ```

- **wh_sequence_aux_widsh_file**:

  - **Default Value:** `aux_layer.widsh`

  - **Description:**

    ```text
The auxiliary Sequence WIDSH file
    ```

- **wh_sequence_fmod_event_name**:

  - **Default Value:** ``

  - **Description:**

    ```text
The full path of the FMOD Event through which the music is streamed from Sequence Music Engine
    ```

- **wh_sequence_main_widsh_file**:

  - **Default Value:** `main_layer.widsh`

  - **Description:**

    ```text
The principal Sequence WIDSH file
    ```

- **wh_sequence_music_path**:

  - **Default Value:** `Music/kcd/`

  - **Description:**

    ```text
Path to the music assets
    ```

- **wh_sh_DebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Debug draw for combat shouts
    ```

- **wh_sh_HearingWeightMaxHit**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Hearing system weight for maximal hit.
    ```

- **wh_sh_HearingWeightMinHit**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Hearing system weight for minimal hit.
    ```

- **wh_sh_HearingWeightScreams**:

  - **Default Value:** `0.7`

  - **Description:**

    ```text
Hearing system weight for combat screams.
    ```

- **wh_sh_HearingWeightShouts**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Hearing system weight for combat shouts.
    ```

- **wh_shop_MinDistToPlayerToUpdateDisplayed**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Displayed goods are updated only when player is at least this far (to avoid player seeing item dis/appearing).
    ```

- **wh_shotgun_numProjectiles**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Number of extra projectiles for shotguns.
    ```

- **wh_shotgun_spreadAngle**:

  - **Default Value:** `0.1`

  - **Description:**

    ```text
Spread angle of shotgun.
    ```

- **wh_situations_PreventMultipleSearchRequest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Prevents starting multiple search request for a single situation in one situation controller. This prevents stalling the search reqeust queue
    ```

- **wh_snd_audio_request_queue_dump_cooldown**:

  - **Default Value:** `60`

  - **Description:**

    ```text
Minimum number of seconds since the last overload ATL dump before another one can happen
    ```

- **wh_snd_audio_request_queue_dump_enabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable dumping the ATL queues to a file. 0 = disabled, 1 = enabled; see similar CVars
    ```

- **wh_snd_audio_request_queue_dump_threshold_size**:

  - **Default Value:** `1024`

  - **Description:**

    ```text
Dump ATL queues to a file when there are more than this many
    ```

- **wh_snd_audio_request_queue_max_size**:

  - **Default Value:** `16384`

  - **Description:**

    ```text
Maximum size of a single ATL request queue. Excess pushRequests will be ignored
    ```

- **wh_snd_audio_xmls_dir**:

  - **Default Value:** `/libs/GameAudio/`

  - **Description:**

    ```text
Path to the sound XMLs
    ```

- **wh_snd_buffer_length**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Length of FMOD Studio mixing buffer in samples. 0 = use default by FMOD Studio.
    ```

- **wh_snd_enable_audio_backchannel**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggle the WH-specific audio backchannel
    ```

- **wh_snd_fmod_maxchannels_consoles**:

  - **Default Value:** `512`

  - **Description:**

    ```text
First parameter of initialize(), must be in config file to work.
    ```

- **wh_snd_fmod_maxchannels_windows**:

  - **Default Value:** `512`

  - **Description:**

    ```text
First parameter of initialize(), must be in config file to work.
    ```

- **wh_snd_ignore_focus**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 1, OnLoseFocus and OnGetFocus will not do anything
    ```

- **wh_snd_muteall**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If set to 1, will cause the FMOD to override all volume settings to silence.
    ```

- **wh_snd_num_buffers**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Number of FMOD Studio mixing buffers. 0 = use default by FMOD Studio.
    ```

- **wh_snd_sound_behavior_xml**:

  - **Default Value:** `libs/GameAudio/sound_behavior.xml`

  - **Description:**

    ```text
Performance culling options configuration file. None or invalid = empty list.
    ```

- **wh_snd_underground_rtpc_name**:

  - **Default Value:** `player_underground`

  - **Description:**

    ```text
The ATL name of the RTPC to set when player is underground (as determined by PlayableCharacterProbe)
    ```

- **wh_snd_underground_snapshot_name**:

  - **Default Value:** `player_underground_snapshot`

  - **Description:**

    ```text
The ATL name of the shapshot to trigger when player is underground (as determined by PlayableCharacterProbe)
    ```

- **wh_snd_volctrl_mastermax**:

  - **Default Value:** `0`

  - **Description:**

    ```text
dB value at RTPC = 1.0 for master volume slider
    ```

- **wh_snd_volctrl_mastermin**:

  - **Default Value:** `-24`

  - **Description:**

    ```text
dB value at RTPC = 0.0 for master volume slider
    ```

- **wh_snd_volctrl_musicmax**:

  - **Default Value:** `-0`

  - **Description:**

    ```text
dB value at RTPC = 1.0 for music
    ```

- **wh_snd_volctrl_musicmin**:

  - **Default Value:** `-24`

  - **Description:**

    ```text
dB value at RTPC = 0.0 for music
    ```

- **wh_snd_volctrl_sfxmax**:

  - **Default Value:** `0`

  - **Description:**

    ```text
dB value at RTPC = 1.0 for SFX
    ```

- **wh_snd_volctrl_sfxmin**:

  - **Default Value:** `-24`

  - **Description:**

    ```text
dB value at RTPC = 0.0 for SFX
    ```

- **wh_snd_volctrl_silence**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Volume RTPC less than this value will result in complete silence (regardless of other wh_snd_volctrl CVars)
    ```

- **wh_snd_z_axis_diff_lower**:

  - **Default Value:** `4`

  - **Description:**

    ```text
Z-axis Difference functionality. Lower bound of the linear slope from min to max attenuation.
    ```

- **wh_snd_z_axis_diff_upper**:

  - **Default Value:** `6`

  - **Description:**

    ```text
Z-axis Difference functionality. Upper bound of the linear slope from min to max attenuation.
    ```

- **wh_sqc_log_enabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0 = no log written; 1 = log written. Filename is sqc-<unixtime>.log
    ```

- **wh_storm_DebugOperationTypeFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter storm debug by task class
    ```

- **wh_storm_DebugSoul**:

  - **Default Value:** ``

  - **Description:**

    ```text
Name of soul to show in storm debug
    ```

- **wh_storm_DebugSubstringFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filter storm debug by substring
    ```

- **wh_storm_ProgramLocation**:

  - **Default Value:** `Libs\Storm\storm.xml`

  - **Description:**

    ```text
Location from where load storm program
    ```

- **wh_sys_AutoLoadLastSave**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Newest game is auto loaded on game start
    ```

- **wh_sys_AutoPatchDB**:

  - **Default Value:** `1`

  - **Description:**

    ```text
autopatching of tables by XML
    ```

- **wh_sys_BaseLevelId**:

  - **Default Value:** `3`

  - **Description:**

    ```text
ID of initial level
    ```

- **wh_sys_BuildInfo**:

  - **Default Value:** ``

  - **Description:**

    ```text
Build info displayed in menu
    ```

- **wh_sys_CheckResourcesInRuntime**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Check animation resources in runtime.
    ```

- **wh_sys_CollectResources**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Collects resources and checks resources modifications when data is needed.
    ```

- **wh_sys_CollectResourcesAtStartup**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Collects resources and checks resources modifications during start of editor or game on non-master configuration.
    ```

- **wh_sys_CompilerInfo**:

  - **Default Value:** `release_1_1_938305_544 [Feb 17 2025 15:16:44] MasterMasterSteamPGO RACK-BUILD35`

  - **Description:**

    ```text
Executable info, stored by compiler
    ```

- **wh_sys_ConsoleMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Sets console mode
0 = Fidelity
1 = Performance
    ```

- **wh_sys_ContentFilter**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filters displayed game content (e.g. Nudity, Gore).
    ```

- **wh_sys_DebugLevelInfo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show debug info of level system and level switching
    ```

- **wh_sys_DebugMouseEvents**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Writes mouse events to console/log
    ```

- **wh_sys_DebugPlayline**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
on-screen debug info, Index of playline. -1 = disabled
    ```

- **wh_sys_DebugSaveLock**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables message to console on save lock change. Lists current active locks.
    ```

- **wh_sys_DoCrash**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Intentional crash
    ```

- **wh_sys_DoFatalError**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Intentional fatal error
    ```

- **wh_sys_ExcludedTableParts**:

  - **Default Value:** ``

  - **Description:**

    ```text
Substrings for table part exclusion, comma separated
    ```

- **wh_sys_ExprReportMissingVariables**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Expressions: missing variables are reported (instead of silent evaluation to 0)
    ```

- **wh_sys_ExtraRewardsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
List ExtraRewards. 1=all, 2=ulocked, 3=ready to consume, 4=consumed
    ```

- **wh_sys_FakeExtraRewards**:

  - **Default Value:** ``

  - **Description:**

    ```text
Comma separated IDs of rewards. Or use * to fake all. If empty real rewards are used.
    ```

- **wh_sys_ForceMainMenu**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Main menu is displayed if game is launched with +map option
    ```

- **wh_sys_ForceUserName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Empty string means no name is forced. Must be in system.cfg
    ```

- **wh_sys_FreezePlayline**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Saved games are not changed, playline is not deleted for New game
    ```

- **wh_sys_FullDumpPath**:

  - **Default Value:** `\\buildresults.warhorse.local\gamefulldumps\Unsorted\`

  - **Description:**

    ```text
Sets the path where Full dump will be uploaded upon crash (only if is in unattended mode and has test session id set)
    ```

- **wh_sys_GameReleaseVersion**:

  - **Default Value:** `ver_01_01_02`

  - **Description:**

    ```text
Current version of the game.
Used in script to maintain save compatibility.
    ```

- **wh_sys_GameSaveForceLoadingError**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forces error while loading saved game. -1=not forced, 0=suppress err, 1=description err, 2=cry data err, 3=wh data err, 4=level switch err
    ```

- **wh_sys_GameSaveId**:

  - **Default Value:** ``

  - **Description:**

    ```text
Forces ID of gamesave
    ```

- **wh_sys_GameSaveInstallCompleted**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Forces state of StreamingInstallCompleted in savegame system. -1=not forced, 0=force false, 1=force true
    ```

- **wh_sys_GameSaveName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Forces name of gamesave
    ```

- **wh_sys_HideIntroVideo**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hides the intro video during game startup
    ```

- **wh_sys_HideLoadingScreen**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Hides the loading screen when loading a saved game
    ```

- **wh_sys_LastLoadedSave**:

  - **Default Value:** ``

  - **Description:**

    ```text
Filename of last loaded savegame
    ```

- **wh_sys_LoadGameFilter**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
controls list of saved games. Combination of 1(manual save), 2(quick save), 4(auto save), 8(permanent point), 16(new game), 32(exit save), 64(level switch). Negative value means default behaviour
    ```

- **wh_sys_LogFlushInterval**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Flush log to file every N seconds. 0 means flush every message, negative means flush never.
    ```

- **wh_sys_MainMenuVideoName**:

  - **Default Value:** ``

  - **Description:**

    ```text
If not empty - name of video played in main menu
    ```

- **wh_sys_MenuBuildInfo**:

  - **Default Value:** ``

  - **Description:**

    ```text
Build info displayed in menu
    ```

- **wh_sys_NestedGameSaveId**:

  - **Default Value:** ``

  - **Description:**

    ```text
Forces ID of nested gamesave
    ```

- **wh_sys_NoPlaylineDeleting**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Playline savegames are not deleted for New game
    ```

- **wh_sys_NoSavePotion**:

  - **Default Value:** `0`

  - **Description:**

    ```text
No save potion is needed in menu
    ```

- **wh_sys_PakExportAlignmentUsingZlibHeader**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When exporting paks, use zlib header embedding to maintain a 16bit data alignment.
    ```

- **wh_sys_PakExportEmbedZlibHeader**:

  - **Default Value:** `1`

  - **Description:**

    ```text
When exporting paks, embed Zlib headers into PKZip headers.
    ```

- **wh_sys_PlaylineSavegameCount**:

  - **Default Value:** `100`

  - **Description:**

    ```text
Number of save slots for each save type
    ```

- **wh_sys_PrecacheModeDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables PrecacheMode debug
    ```

- **wh_sys_PrefabsDir**:

  - **Default Value:** `Prefabs`

  - **Description:**

    ```text
Path to prefabs in 'Data'
    ```

- **wh_sys_PreferredDB**:

  - **Default Value:** `XML`

  - **Description:**

    ```text
Comma separated list of DB serializers (XML, TBL)
    ```

- **wh_sys_ProfilingMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Used during profiling to indicate disabled credits etc.
    ```

- **wh_sys_ProsDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1=log + render Pros debug info, 2=log update
    ```

- **wh_sys_ProsEnable**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Pros master switch
    ```

- **wh_sys_ProsFakeEntitlements**:

  - **Default Value:** ``

  - **Description:**

    ```text
Comma separated IDs of entitlements. If empty real entitlements are used.
    ```

- **wh_sys_ProsMode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pros 0=normal, 1=developer, 2 = developer online, 3 = developer linked, 4 = developer not linked
    ```

- **wh_sys_ProsUseStagingServer**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pros uses 'staging' server instead of 'production' server
    ```

- **wh_sys_RandomSeed**:

  - **Default Value:** `-1`

  - **Description:**

    ```text
Seed for random generator. If seed < 0, seed is generated from time
    ```

- **wh_sys_ReadinessObserverDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables ReadinessObserver debug
    ```

- **wh_sys_ReadinessObserverEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables ReadinessObserver
    ```

- **wh_sys_ReadinessObserverProfiler**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables ReadinessObserver profiler
    ```

- **wh_sys_ReadinessObserverTimeoutDuration**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Max duration of ReadinessObserver in seconds
    ```

- **wh_sys_ReadinessTaskProfiler**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Shows Readiness Tasks in ReadinessProfiler and FaderProfiler. 1: show only tasks which are observed, 2: show all tasks
    ```

- **wh_sys_ShowDlcInSaveTooltip**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Disabled, 1=Shows DLCs used in selected savegame
    ```

- **wh_sys_ShowInfoInSaveTooltip**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=Disabled, 1=Shows info in selected savegame tooltip
    ```

- **wh_sys_SkipStartupVideoWhenPossible**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Skip all the startup videos (with logos) while initial loading as soon as game is ready.
    ```

- **wh_sys_StartupVideoFileName**:

  - **Default Value:** `Videos/startup/startup_01/startup_01.bk2`

  - **Description:**

    ```text
File name of video played while initial loading
    ```

- **wh_sys_allow_screensaver**:

  - **Default Value:** `0`

  - **Description:**

    ```text
1 - screen saver allowed, 0 - screen saver NOT allowed
    ```

- **wh_sys_assembly_date**:

  - **Default Value:** ``

  - **Description:**

    ```text
From file 'whdlversions.json', value of 'Assembly::DateTestedData'
    ```

- **wh_sys_game_polite_exit**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Slow exit, proper cleanup. Ignored in editor.
    ```

- **wh_sys_ipl_mode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Mode of Initial PayLoad packs. 0=use both IPL and nonIPL, 1=IPL only mode, ignore nonIPL if IPL exists
    ```

- **wh_sys_keybind_profile**:

  - **Default Value:** ``

  - **Description:**

    ```text
loads specified keybinding from that file
    ```

- **wh_sys_lowMemoryLimitMB**:

  - **Default Value:** `24576`

  - **Description:**

    ```text
Limit for available page file memory and free windows drive memory for warning message box
    ```

- **wh_sys_lowMemoryMessageBox**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Show message box on PC when out of memory crash could occur
    ```

- **wh_sys_noExitWithoutUser**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Game is not terminated (exit code 258=USER_LOGIN_FAILED) in case the user login fails
    ```

- **wh_sys_noUserWithoutController**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=user can log in without controller
    ```

- **wh_sys_outOfMemoryMessageBox**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Show message box on PC out of memory crashes
    ```

- **wh_sys_publishing**:

  - **Default Value:** `steam`

  - **Description:**

    ```text
Publishing platform name
    ```

- **wh_sys_specVersion**:

  - **Default Value:** `master_master`

  - **Description:**

    ```text
Script can read this to modify its behavior for E3, Gamescom etc.
    ```

- **wh_sys_streaming_directstorage_enabled**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Use direct storage stream engine.
    ```

- **wh_sys_version**:

  - **Default Value:** `unknown`

  - **Description:**

    ```text
Version from system.cfg
    ```

- **wh_tvr_OptimizeRawAnimKeys**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Track view recorder: Is trying to optimize duplicity.
    ```

- **wh_tvr_PosVelocityThreshold**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Track view recorder: Defines minimal velocity [m/s] threshold for movement recognition
    ```

- **wh_tvr_RecBonesFromAnims**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Track view recorder: Enables to record joints dynamically detected from running anims
    ```

- **wh_tvr_RecBufferSize**:

  - **Default Value:** `1800`

  - **Description:**

    ```text
Track view recorder: Size of recording buffer (in frames -> 30fps * 60s = 1m recoding)
    ```

- **wh_tvr_RecRawAnim**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Track view recorder: Enables to record raw anims. Otherwise it is trying to reconstruct scene by existing anims in track view.
    ```

- **wh_tvr_RotVelocityThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Track view recorder: Defines minimal radial velocity [deg/s] threshold for rotation recognition
    ```

- **wh_tvr_SessionName**:

  - **Default Value:** ``

  - **Description:**

    ```text
Track view recorder: Prefix for recorded entities, track view sequence and root point.
    ```

- **wh_tvr_SessionNameOutputSuffix**:

  - **Default Value:** ``

  - **Description:**

    ```text
Track view recorder: Output extra suffix for track view session and anim.
    ```

- **wh_tvr_SessionRootDir**:

  - **Default Value:** `recorded`

  - **Description:**

    ```text
Track view recorder: Output main anim for recorded anims (i_cafs).
    ```

- **wh_tw_CameraShakeCharacter**:

  - **Default Value:** `objects/characters/assets/cs_shake/cs_shake.cdf`

  - **Description:**

    ```text
Used character for animated camera shake in TW.
    ```

- **wh_tw_editmode**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables track view edit mode
    ```

- **wh_ui_ActivateDof**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables DOF ingame.
    ```

- **wh_ui_ApseCameraChangeTime**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Set time in sec to move on next panel
    ```

- **wh_ui_ApseCameraPosOffset**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Change y pos of camera anchor. Positive number is more close to panel, negative is far from panel.
    ```

- **wh_ui_ApseLightsDebugDraw**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Turns UI lights debug draw on/off.
    ```

- **wh_ui_ApseLightsMoving**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Turns UI lights moving in different views.
    ```

- **wh_ui_ApseLightsProlong**:

  - **Default Value:** `0.15`

  - **Description:**

    ```text
Set delay of lights.
    ```

- **wh_ui_ApseLightsShieldDebug**:

  - **Default Value:** ``

  - **Description:**

    ```text
todo
    ```

- **wh_ui_ApsePauseRatio**:

  - **Default Value:** `1000`

  - **Description:**

    ```text
Inverse ratio of the inventory pause. The game time scale will get divided by this number when the inventory is entered.
    ```

- **wh_ui_ApseShieldActivateAnimationDuration**:

  - **Default Value:** `0.05`

  - **Description:**

    ```text
Set duration of light activate.
    ```

- **wh_ui_ApseShieldDeactivateAnimationDuration**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Set duration of light deactivate.
    ```

- **wh_ui_ApseShieldLightModalIntensity**:

  - **Default Value:** `0.2`

  - **Description:**

    ```text
Relative intensity of lights of focused shield.
    ```

- **wh_ui_ApseUnloadMode**:

  - **Default Value:** `2`

  - **Description:**

    ```text
0 = no unload flash, 1 = unload flash elements after close apse, 2 = unload f.e. when hide except map, 3 = unload when f. e. when hide
    ```

- **wh_ui_BubbleDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Bubble maker debug mode.
    ```

- **wh_ui_BubblesEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles bark subtitles. Default is 1.
Usage: wh_ui_BubblesEnabled [0=disabled/1=enabled]
    ```

- **wh_ui_CompassFarThreshold**:

  - **Default Value:** `150`

  - **Description:**

    ```text
Set maximum meters when  markers stop be smaller.
    ```

- **wh_ui_CompassFarThresholdHC**:

  - **Default Value:** `20`

  - **Description:**

    ```text
Set maximum meters when markers stop be smaller.
    ```

- **wh_ui_CompassLayerThreshold**:

  - **Default Value:** `50`

  - **Description:**

    ```text
Set from which meters compass marker show in front layer and maximum of meters when show arrow for marker.
    ```

- **wh_ui_CompassNearThreshold**:

  - **Default Value:** `25`

  - **Description:**

    ```text
Set from which meters compass marker has scale and alpha 1.
    ```

- **wh_ui_CompassPitchAngleThreshold**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Set abs angle between player and object in degrees when show arrow on compass.
    ```

- **wh_ui_CompassPitchMinZThreshold**:

  - **Default Value:** `2.5`

  - **Description:**

    ```text
Set minimum of z diff meters when show arrow on  compass.
    ```

- **wh_ui_ControllerLightBarHealthEffectFrequency**:

  - **Default Value:** `10`

  - **Description:**

    ```text
Set R value by which the update of controller lightbar jump in a frame.
    ```

- **wh_ui_CopyrightMsgLeft**:

  - **Default Value:** ``

  - **Description:**

    ```text
Copyright string - left corner
    ```

- **wh_ui_CopyrightMsgRight**:

  - **Default Value:** ``

  - **Description:**

    ```text
Copyright string - right corner
    ```

- **wh_ui_DebugApse**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ui_DebugItemSelection**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ui_DebugItemTransfer**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ui_DebugShop**:

  - **Default Value:** `0`

  - **Description:**

    ```text

    ```

- **wh_ui_DebugShowHiddenActionHints**:

  - **Default Value:** `0`

  - **Description:**

    ```text
If action hints that are set as invisible by default should be visible. Values: 0=hide them, 1=show them.
    ```

- **wh_ui_DisableNewGameDebugFader**:

  - **Default Value:** `0`

  - **Description:**

    ```text
0=New Game (debug) with fader, 1=New Game (debug) without fader
    ```

- **wh_ui_DisablePros**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Disable PROS in main menu.
    ```

- **wh_ui_EnableSubtitleBg**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show subtitle background.
    ```

- **wh_ui_EnableSubtitleSpeakerName**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Show name of speaker before subtitle.
    ```

- **wh_ui_ExitToMainMenu**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable <Save and exit to main menu>
    ```

- **wh_ui_FPS**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display FPS counter
    ```

- **wh_ui_FaderAutoDebug**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Automatically show debug when the fader is stuck
    ```

- **wh_ui_FaderDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Fader debug: 0=disabled, 1=list of active faders
    ```

- **wh_ui_FaderDebugAlpha**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Sets fader transparency for debug (0.0-1.0)
    ```

- **wh_ui_FaderDebugStuckDetectorTimerDuration**:

  - **Default Value:** `55`

  - **Description:**

    ```text
Duration until stuck detection debug appears (in seconds)
    ```

- **wh_ui_FaderFadeInDefaultDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Default duration of FadeIns (in seconds)
    ```

- **wh_ui_FaderFadeOutDefaultDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Default duration of FadeOuts (in seconds)
    ```

- **wh_ui_FaderProfiler**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Fader debug: 0=disabled, 1=enable profiler
    ```

- **wh_ui_FaderProfilerSaveDuration**:

  - **Default Value:** `2`

  - **Description:**

    ```text
Duration of fader for which profile will be saved (in seconds)
    ```

- **wh_ui_FaderProfilerSavePath**:

  - **Default Value:** `%USER%/FaderProfiler/`

  - **Description:**

    ```text
Directory path where profiling results are saved
    ```

- **wh_ui_FaderProgressIndicatorTimerDuration**:

  - **Default Value:** `5`

  - **Description:**

    ```text
Duration until progress indicator appears (in seconds)
    ```

- **wh_ui_FaderSuspend**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Suspends all faders. Use only for debugging!
    ```

- **wh_ui_GameEventLogLevel**:

  - **Default Value:** `2`

  - **Description:**

    ```text
maximal level of game events that is shown in the UI (lower level=more important)
    ```

- **wh_ui_HoldCursorDuration**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Duration of hold cursor until it is triggered.
    ```

- **wh_ui_InputDevice**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Input device type displayed in UI, [1=keyboard+mouse, 2=XBOX controller, 4=PlayStation controller].
    ```

- **wh_ui_ListShieldMemoryTimeLimit**:

  - **Default Value:** `30`

  - **Description:**

    ```text
seconds how long we will save which tab is focused in apse
    ```

- **wh_ui_NewGameDebugInMenu**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enable <New Game Debug>
    ```

- **wh_ui_PauseGameOnFocusLoss**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Pause game when player switches focus to another window. Default true.
    ```

- **wh_ui_PreferredInputDevice**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Preferred input device type displayed in UI, [0=auto, 1=keyboard+mouse, 2=XBOX controller, 16=PlayStation controller].
    ```

- **wh_ui_PublicTimer**:

  - **Default Value:** `1200`

  - **Description:**

    ```text
In sec. Can be change during runtime. If it is set to number less zero it switch off feature.
    ```

- **wh_ui_ReadinessObserverProfilerSavePath**:

  - **Default Value:** `%USER%/ReadinessProfiler/`

  - **Description:**

    ```text
Directory path where profiling results are saved
    ```

- **wh_ui_ScreenFaderDebug**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Enables ScreenFader node debug
    ```

- **wh_ui_ShowBubbles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowBubbles [0=hide/1=show]
    ```

- **wh_ui_ShowBuffs**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowBuffs [0=hide/1=show]
    ```

- **wh_ui_ShowCommonEvent**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCommonEvent [0=hide/1=show]
    ```

- **wh_ui_ShowCompass**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCompass [0=hide/1=show]
    ```

- **wh_ui_ShowCrime**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCrime [0=hide/1=show]
    ```

- **wh_ui_ShowCursor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowCursor [0=hide/1=show]
    ```

- **wh_ui_ShowDialogLeft**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDialogLeft [0=hide/1=show]
    ```

- **wh_ui_ShowDialogRight**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDialogRight [0=hide/1=show]
    ```

- **wh_ui_ShowDiceContainer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDiceContainer [0=hide/1=show]
    ```

- **wh_ui_ShowDiceCursor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowDiceCursor [0=hide/1=show]
    ```

- **wh_ui_ShowFancyEvent**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowFancyEvent [0=hide/1=show]
    ```

- **wh_ui_ShowGameLog**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowGameLog [0=hide/1=show]
    ```

- **wh_ui_ShowHints**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowHints [0=hide/1=show]
    ```

- **wh_ui_ShowHud**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles HUD visibility. Default is 1.
Usage: wh_ui_ShowHud [0=hide/1=show]
    ```

- **wh_ui_ShowInfoText**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowInfoText [0=hide/1=show]
    ```

- **wh_ui_ShowItemTransfer**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowItemTransfer [0=hide/1=show]
    ```

- **wh_ui_ShowNormalCursor**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Show cursor dot.
    ```

- **wh_ui_ShowPopUpBackground**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowPopUpBackground [0=hide/1=show]
    ```

- **wh_ui_ShowQAMFood**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowQAMFood [0=hide/1=show]
    ```

- **wh_ui_ShowQAMWeapon**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowQAMWeapon [0=hide/1=show]
    ```

- **wh_ui_ShowRatioStrips**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowRatioStrips [0=hide/1=show]
    ```

- **wh_ui_ShowSequenceNotice**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Display notice while sequence is playing
    ```

- **wh_ui_ShowShootingContest**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowShootingContest [0=hide/1=show]
    ```

- **wh_ui_ShowSkillCheck**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowSkillCheck [0=hide/1=show]
    ```

- **wh_ui_ShowStats**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowStats [0=hide/1=show]
    ```

- **wh_ui_ShowSubtitles**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowSubtitles [0=hide/1=show]
    ```

- **wh_ui_ShowTrespassing**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowTrespassing [0=hide/1=show]
    ```

- **wh_ui_ShowTutorialInDialog**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowTutorialInDialog [0=hide/1=show]
    ```

- **wh_ui_ShowTutorialMessage**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowTutorialMessage [0=hide/1=show]
    ```

- **wh_ui_ShowVignette**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowVignette [0=hide/1=show]
    ```

- **wh_ui_ShowWanted**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles element visibility. Default is 1.
Usage: wh_ui_ShowWanted [0=hide/1=show]
    ```

- **wh_ui_SubtitleSize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Set size of subtitles.
    ```

- **wh_ui_SubtitlesEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles subtitles. Default is 1.
Usage: wh_ui_SubtitlesEnabled [0=disabled/1=enabled]
    ```

- **wh_ui_TutorialOverlayEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Enables overlay tutorials.
    ```

- **wh_ui_TutorialsEnabled**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Toggles tutorials. Default is 1.
Usage: wh_ui_TutorialsEnabled [0=disabled/1=enabled]
    ```

- **wh_ui_consoleModeChosen**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Say if you see console mode overlay and made decision.
    ```

- **wh_ui_creditsSecondPartStart**:

  - **Default Value:** `5000`

  - **Description:**

    ```text

    ```

- **wh_ui_eulaConfirmedVersion**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Say if you confirm eula and which version.
    ```

- **wh_ui_eulaCurrentVersion**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Version 
    ```

- **wh_ui_notLocalize**:

  - **Default Value:** `0`

  - **Description:**

    ```text
bit mask: 0 = localize all, 1 = not subtitles, 2 = not bubbles, 4 = not messages, 8 = not item hint, 1024 = not localize
    ```

- **wh_ui_showFirstTimeOverlays**:

  - **Default Value:** `1`

  - **Description:**

    ```text

    ```

- **wh_ui_telemetryConfirmed**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Say if you see telemetry overlay and made decision.
    ```

- **wh_w_AimByProjectile**:

  - **Default Value:** `1`

  - **Description:**

    ```text
Weapons shoot in the direction of the physical projectile.
    ```

- **wh_w_AlertCosinus**:

  - **Default Value:** `-0.25`

  - **Description:**

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

  - **Default Value:** `2`

  - **Description:**

    ```text
Sets up alert radius in which player's flying projectiles notifies itself to NPC.
    ```

- **wh_w_DebugTrajectory**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggle trajectory prediction draw.
    ```

- **wh_w_SensitivityMod**:

  - **Default Value:** `0.6`

  - **Description:**

    ```text
Sensitivity of mouse and gamepad stick is lowered when weapon is charged.
    ```

- **wh_w_ShotTest**:

  - **Default Value:** `0`

  - **Description:**

    ```text
Toggle shot test.
    ```

- **wh_w_TrajectoryDashes**:

  - **Default Value:** `0.5`

  - **Description:**

    ```text
Trajectory debug dash length.
    ```

- **wh_w_TrajectoryGaps**:

  - **Default Value:** `0.3`

  - **Description:**

    ```text
Trajectory debug gaps length.
    ```

- **wh_w_TrajectoryResolution**:

  - **Default Value:** `0.03`

  - **Description:**

    ```text
Trajectory debug resolution.
    ```

