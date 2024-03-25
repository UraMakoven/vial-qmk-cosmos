// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define RP2040_FLASH_AT25SF128A

#define VIAL_KEYBOARD_UID \
    { 0x80, 0x41, 0x59, 0xF5, 0x4B, 0xF3, 0x50, 0x97 }
#define VIAL_UNLOCK_COMBO_ROWS \
    { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS \
    { 0, 1 }

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
#define SPLIT_USB_DETECT
#define NO_USB_STARTUP_CHECK

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// #define SPLIT_TRANSPORT_MIRROR
// #define SPLIT_OLED_ENABLE
// #define SPLIT_ACTIVITY_ENABLE

// #define SPLIT_OLED_ENABLE

#define RGBLIGHT_LIMIT_VAL 100
#define RGBLIGHT_SLEEP          // enable rgblight_suspend() and rgblight_wakeup() in keymap.c
#define RGBLIGHT_TIMEOUT 120000 // ms to wait until rgblight time out, 900K ms is 15min.

#define DYNAMIC_KEYMAP_LAYER_COUNT 2
#define TAP_CODE_DELAY 25

#undef TRI_LAYER_ENABLE

// #define JOYSTICK_BUTTON_COUNT 1
// #define JOYSTICK_AXIS_COUNT 2
// #define JOYSTICK_AXIS_RESOLUTION 10
// #define ANALOG_JOYSTICK_AUTO_AXIS

// #define ANALOG_JOYSTICK_X_AXIS_PIN GP29
// #define ANALOG_JOYSTICK_Y_AXIS_PIN GP28

#define I2C1_SCL_PIN GP15
#define I2C1_SDA_PIN GP14

#define ENCODERS_PAD_A \
    { GP29 }
#define ENCODERS_PAD_B \
    { GP28 }
