/*****************************************************************************\
     Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.
                This file is licensed under the Snes9x License.
   For further information, consult the LICENSE file in the root directory.
\*****************************************************************************/

/***********************************************************************************
  SNES9X for Mac OS (c) Copyright John Stiles

  Snes9x for Mac OS X

  (c) Copyright 2001 - 2011  zones
  (c) Copyright 2002 - 2005  107
  (c) Copyright 2002         PB1400c
  (c) Copyright 2004         Alexander and Sander
  (c) Copyright 2004 - 2005  Steven Seeger
  (c) Copyright 2005         Ryan Vogt
  (c) Copyright 2019         Michael Donald Buckley
 ***********************************************************************************/


#ifndef _mac_controls_h_
#define _mac_controls_h_

#define KeyIsPressed(km, bm, k)    (km[k] || bm[k])

enum
{
	k_HD = 0x80000000,

	k_JP = 0x01000000,
	k_MO = 0x02000000,
	k_SS = 0x04000000,
	k_LG = 0x08000000,

	k_BT = 0x00100000,
	k_PT = 0x00200000,
	k_PS = 0x00400000,

	k_C1 = 0x00000100,
	k_C2 = 0x00000200,
	k_C3 = 0x00000400,
	k_C4 = 0x00000800,
	k_C5 = 0x00001000,
	k_C6 = 0x00002000,
	k_C7 = 0x00004000,
	k_C8 = 0x00008000
};

enum
{
	kMacCMapPad1PX            = k_HD | k_BT | k_JP | k_C1,
	kMacCMapPad1PA,
	kMacCMapPad1PB,
	kMacCMapPad1PY,
	kMacCMapPad1PL,
	kMacCMapPad1PR,
	kMacCMapPad1PSelect,
	kMacCMapPad1PStart,
	kMacCMapPad1PUp,
	kMacCMapPad1PDown,
	kMacCMapPad1PLeft,
	kMacCMapPad1PRight,

	kMacCMapPad2PX            = k_HD | k_BT | k_JP | k_C2,
	kMacCMapPad2PA,
	kMacCMapPad2PB,
	kMacCMapPad2PY,
	kMacCMapPad2PL,
	kMacCMapPad2PR,
	kMacCMapPad2PSelect,
	kMacCMapPad2PStart,
	kMacCMapPad2PUp,
	kMacCMapPad2PDown,
	kMacCMapPad2PLeft,
	kMacCMapPad2PRight,

	kMacCMapPad3PX            = k_HD | k_BT | k_JP | k_C3,
	kMacCMapPad3PA,
	kMacCMapPad3PB,
	kMacCMapPad3PY,
	kMacCMapPad3PL,
	kMacCMapPad3PR,
	kMacCMapPad3PSelect,
	kMacCMapPad3PStart,
	kMacCMapPad3PUp,
	kMacCMapPad3PDown,
	kMacCMapPad3PLeft,
	kMacCMapPad3PRight,

	kMacCMapPad4PX            = k_HD | k_BT | k_JP | k_C4,
	kMacCMapPad4PA,
	kMacCMapPad4PB,
	kMacCMapPad4PY,
	kMacCMapPad4PL,
	kMacCMapPad4PR,
	kMacCMapPad4PSelect,
	kMacCMapPad4PStart,
	kMacCMapPad4PUp,
	kMacCMapPad4PDown,
	kMacCMapPad4PLeft,
	kMacCMapPad4PRight,

	kMacCMapPad5PX            = k_HD | k_BT | k_JP | k_C5,
	kMacCMapPad5PA,
	kMacCMapPad5PB,
	kMacCMapPad5PY,
	kMacCMapPad5PL,
	kMacCMapPad5PR,
	kMacCMapPad5PSelect,
	kMacCMapPad5PStart,
	kMacCMapPad5PUp,
	kMacCMapPad5PDown,
	kMacCMapPad5PLeft,
	kMacCMapPad5PRight,

	kMacCMapPad6PX            = k_HD | k_BT | k_JP | k_C6,
	kMacCMapPad6PA,
	kMacCMapPad6PB,
	kMacCMapPad6PY,
	kMacCMapPad6PL,
	kMacCMapPad6PR,
	kMacCMapPad6PSelect,
	kMacCMapPad6PStart,
	kMacCMapPad6PUp,
	kMacCMapPad6PDown,
	kMacCMapPad6PLeft,
	kMacCMapPad6PRight,

	kMacCMapPad7PX            = k_HD | k_BT | k_JP | k_C7,
	kMacCMapPad7PA,
	kMacCMapPad7PB,
	kMacCMapPad7PY,
	kMacCMapPad7PL,
	kMacCMapPad7PR,
	kMacCMapPad7PSelect,
	kMacCMapPad7PStart,
	kMacCMapPad7PUp,
	kMacCMapPad7PDown,
	kMacCMapPad7PLeft,
	kMacCMapPad7PRight,

	kMacCMapPad8PX            = k_HD | k_BT | k_JP | k_C8,
	kMacCMapPad8PA,
	kMacCMapPad8PB,
	kMacCMapPad8PY,
	kMacCMapPad8PL,
	kMacCMapPad8PR,
	kMacCMapPad8PSelect,
	kMacCMapPad8PStart,
	kMacCMapPad8PUp,
	kMacCMapPad8PDown,
	kMacCMapPad8PLeft,
	kMacCMapPad8PRight,

	kMacCMapMouse1PL          = k_HD | k_BT | k_MO | k_C1,
	kMacCMapMouse1PR,
	kMacCMapMouse2PL          = k_HD | k_BT | k_MO | k_C2,
	kMacCMapMouse2PR,

	kMacCMapScopeOffscreen    = k_HD | k_BT | k_SS | k_C1,
	kMacCMapScopeFire,
	kMacCMapScopeCursor,
	kMacCMapScopeTurbo,
	kMacCMapScopePause,

	kMacCMapLGun1Offscreen    = k_HD | k_BT | k_LG | k_C1,
	kMacCMapLGun1Trigger,
	kMacCMapLGun1Start,
	kMacCMapLGun2Offscreen    = k_HD | k_BT | k_LG | k_C2,
	kMacCMapLGun2Trigger,
	kMacCMapLGun2Start,

	kMacCMapMouse1Pointer     = k_HD | k_PT | k_MO | k_C1,
	kMacCMapMouse2Pointer     = k_HD | k_PT | k_MO | k_C2,
	kMacCMapSuperscopePointer = k_HD | k_PT | k_SS | k_C1,
	kMacCMapJustifier1Pointer = k_HD | k_PT | k_LG | k_C1,

	kMacCMapPseudoPtrBase     = k_HD | k_PS | k_LG | k_C2	// for Justifier 2P
};

typedef enum
{
    k1PUp,
    k1PDown,
    k1PLeft,
    k1PRight,
    k1PY,
    k1PB,
    k1PX,
    k1PA,
    k1PL,
    k1PR,
    k1PStart,
    k1PSelect,

    k2PUp,
    k2PDown,
    k2PLeft,
    k2PRight,
    k2PY,
    k2PB,
    k2PX,
    k2PA,
    k2PL,
    k2PR,
    k2PStart,
    k2PSelect,

    k3PUp,
    k3PDown,
    k3PLeft,
    k3PRight,
    k3PY,
    k3PB,
    k3PX,
    k3PA,
    k3PL,
    k3PR,
    k3PStart,
    k3PSelect,

    k4PUp,
    k4PDown,
    k4PLeft,
    k4PRight,
    k4PY,
    k4PB,
    k4PX,
    k4PA,
    k4PL,
    k4PR,
    k4PStart,
    k4PSelect,

    k5PUp,
    k5PDown,
    k5PLeft,
    k5PRight,
    k5PY,
    k5PB,
    k5PX,
    k5PA,
    k5PL,
    k5PR,
    k5PStart,
    k5PSelect,

    k6PUp,
    k6PDown,
    k6PLeft,
    k6PRight,
    k6PY,
    k6PB,
    k6PX,
    k6PA,
    k6PL,
    k6PR,
    k6PStart,
    k6PSelect,

    k7PUp,
    k7PDown,
    k7PLeft,
    k7PRight,
    k7PY,
    k7PB,
    k7PX,
    k7PA,
    k7PL,
    k7PR,
    k7PStart,
    k7PSelect,

    k8PUp,
    k8PDown,
    k8PLeft,
    k8PRight,
    k8PY,
    k8PB,
    k8PX,
    k8PA,
    k8PL,
    k8PR,
    k8PStart,
    k8PSelect,

    k1PKeyFastForward,
    k1PKeyFreeze,
    k1PKeyDefrost,
    k1PKeyScreenshot,
    k1PKeySPC,
    k1PKeyScopeTurbo,
    k1PKeyScopePause,
    k1PKeyScopeCursor,
    k1PKeyOffScreen,
    k1PKeyFunction,
    k1PKeyAlt,
    k1PKeyFFDown,
    k1PKeyFFUp,
    k1PKeyEsc,
    k1PKeyTC,
    k1PKeyMouseLeft,
    k1PKeyMouseRight,

    k2PKeyFastForward,
    k2PKeyFreeze,
    k2PKeyDefrost,
    k2PKeyScreenshot,
    k2PKeySPC,
    k2PKeyScopeTurbo,
    k2PKeyScopePause,
    k2PKeyScopeCursor,
    k2PKeyOffScreen,
    k2PKeyFunction,
    k2PKeyAlt,
    k2PKeyFFDown,
    k2PKeyFFUp,
    k2PKeyEsc,
    k2PKeyTC,
    k2PKeyMouseLeft,
    k2PKeyMouseRight,

    k3PKeyFastForward,
    k3PKeyFreeze,
    k3PKeyDefrost,
    k3PKeyScreenshot,
    k3PKeySPC,
    k3PKeyScopeTurbo,
    k3PKeyScopePause,
    k3PKeyScopeCursor,
    k3PKeyOffScreen,
    k3PKeyFunction,
    k3PKeyAlt,
    k3PKeyFFDown,
    k3PKeyFFUp,
    k3PKeyEsc,
    k3PKeyTC,
    k3PKeyMouseLeft,
    k3PKeyMouseRight,

    k4PKeyFastForward,
    k4PKeyFreeze,
    k4PKeyDefrost,
    k4PKeyScreenshot,
    k4PKeySPC,
    k4PKeyScopeTurbo,
    k4PKeyScopePause,
    k4PKeyScopeCursor,
    k4PKeyOffScreen,
    k4PKeyFunction,
    k4PKeyAlt,
    k4PKeyFFDown,
    k4PKeyFFUp,
    k4PKeyEsc,
    k4PKeyTC,
    k4PKeyMouseLeft,
    k4PKeyMouseRight,

    k5PKeyFastForward,
    k5PKeyFreeze,
    k5PKeyDefrost,
    k5PKeyScreenshot,
    k5PKeySPC,
    k5PKeyScopeTurbo,
    k5PKeyScopePause,
    k5PKeyScopeCursor,
    k5PKeyOffScreen,
    k5PKeyFunction,
    k5PKeyAlt,
    k5PKeyFFDown,
    k5PKeyFFUp,
    k5PKeyEsc,
    k5PKeyTC,
    k5PKeyMouseLeft,
    k5PKeyMouseRight,

    k6PKeyFastForward,
    k6PKeyFreeze,
    k6PKeyDefrost,
    k6PKeyScreenshot,
    k6PKeySPC,
    k6PKeyScopeTurbo,
    k6PKeyScopePause,
    k6PKeyScopeCursor,
    k6PKeyOffScreen,
    k6PKeyFunction,
    k6PKeyAlt,
    k6PKeyFFDown,
    k6PKeyFFUp,
    k6PKeyEsc,
    k6PKeyTC,
    k6PKeyMouseLeft,
    k6PKeyMouseRight,

    k7PKeyFastForward,
    k7PKeyFreeze,
    k7PKeyDefrost,
    k7PKeyScreenshot,
    k7PKeySPC,
    k7PKeyScopeTurbo,
    k7PKeyScopePause,
    k7PKeyScopeCursor,
    k7PKeyOffScreen,
    k7PKeyFunction,
    k7PKeyAlt,
    k7PKeyFFDown,
    k7PKeyFFUp,
    k7PKeyEsc,
    k7PKeyTC,
    k7PKeyMouseLeft,
    k7PKeyMouseRight,

    k8PKeyFastForward,
    k8PKeyFreeze,
    k8PKeyDefrost,
    k8PKeyScreenshot,
    k8PKeySPC,
    k8PKeyScopeTurbo,
    k8PKeyScopePause,
    k8PKeyScopeCursor,
    k8PKeyOffScreen,
    k8PKeyFunction,
    k8PKeyAlt,
    k8PKeyFFDown,
    k8PKeyFFUp,
    k8PKeyEsc,
    k8PKeyTC,
    k8PKeyMouseLeft,
    k8PKeyMouseRight,

    kNumButtons
} S9xKey;

typedef enum {
    kISpFastForward,
    kISpFreeze,
    kISpDefrost,
    kISpScreenshot,
    kISpSPC,
    kISpScopeTurbo,
    kISpScopePause,
    kISpScopeCursor,
    kISpOffScreen,
    kISpFunction,
    kISpAlt,
    kISpFFDown,
    kISpFFUp,
    kISpEsc,
    kISpTC,
    kISpMouseLeft,
    kISpMouseRight
} ISpKey;

void ControlPadFlagsToS9xReportButtons (int, uint32);
void ControlPadFlagsToS9xPseudoPointer (uint32);

long ISpKeyIsPressed (bool8 keys[kNumButtons], bool8 gamepadButtons[kNumButtons], ISpKey key);

#endif
