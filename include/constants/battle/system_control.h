#ifndef POKEPLATINUM_CONSTANTS_BATTLE_SYSTEM_CONTROL_H
#define POKEPLATINUM_CONSTANTS_BATTLE_SYSTEM_CONTROL_H

#define SYSCTL_CHECK_LOOP_ONLY_ONCE     (1 << 1)
#define SYSCTL_HIT_DURING_FLY           (1 << 2)
#define SYSCTL_HIT_DURING_DIG           (1 << 3)
#define SYSCTL_HIT_DURING_DIVE          (1 << 4)
#define SYSCTL_FIRST_OF_MULTI_TURN      (1 << 5) // this could be a charge-up move or Bide
#define SYSCTL_SKIP_SPRITE_BLINK        (1 << 6)
#define SYSCTL_TRY_SYNCHRONIZE_STATUS   (1 << 7)
#define SYSCTL_LAST_OF_MULTI_TURN       (1 << 9)
#define SYSCTL_NONSTANDARD_ACC_CHECK    (1 << 10) // used by Future Sight and OHKO moves
#define SYSCTL_MOVE_HIT                 (1 << 13) // this indicates that the move hit its target(s)
#define SYSCTL_PLAYED_MOVE_ANIMATION    (1 << 14)
#define SYSCTL_SKIP_TYPE_CHECK          (1 << 15)
#define SYSCTL_HIT_DURING_SHADOW_FORCE  (1 << 19)
#define SYSCTL_REUSE_LAST_MOVE          (1 << 20)
#define SYSCTL_APPLY_SECONDARY_EFFECT   (1 << 22)

#define SYSCTL_UTURN_ACTIVE             (1 << 4)
#define SYSCTL_MOVE_SUCCEEDED           (1 << 6) // this only reflects that the move is executed, not whether it hit or missed

#define SYSCTL_SKIP_OBEDIENCE_CHECK     (1 << 0)
#define SYSCTL_SKIP_TYPE_CHART_CHECK    (1 << 1)
#define SYSCTL_SKIP_STATUS_CHECK        (1 << 2)
#define SYSCTL_SKIP_PP_DECREMENT        (1 << 3)
#define SYSCTL_SKIP_IMMUNITY_TRIGGERS   (1 << 4)
#define SYSCTL_SKIP_ACCURACY_CHECK      (1 << 5)
#define SYSCTL_SKIP_ACCURACY_OVERRIDES  (1 << 6)
#define SYSCTL_SKIP_STOLEN_CHECK        (1 << 7)

#define BATTLER_STATUS_SWITCHING        1

#endif // POKEPLATINUM_CONSTANTS_BATTLE_SYSTEM_CONTROL_H
