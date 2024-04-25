// Copyright 2021 Joric (@joric)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

#include "analog.h"

enum layers {
    _QWERTY = 0,
    _LOWER,
    //_RAISE,
    //_NUMPAD,
    //_ADJUST,
};

/* beautify preserve:start */
// format-disable
// clang-format off

#undef LAYOUT
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05,           k55, k54, k53, k52, k51, k50, \
    k10, k11, k12, k13, k14, k15,           k65, k64, k63, k62, k61, k60, \
    k20, k21, k22, k23, k24, k25, k45, k95, k75, k74, k73, k72, k71, k70, \
    k30, k31, k32, k33, k34, k35,           k85, k84, k83, k82, k81, k80, \
              k42, k43,                               k93, k92,           \
                        k46, k36, k16,      k86, k96,                     \
                             k06, k26, k76, k56,                 k87,     \
                                                            k67, k97, k57,\
                                                                 k77      \
) { \
    { k00, k01, k02, k03, k04, k05, k06, KC_NO }, \
    { k10, k11, k12, k13, k14, k15, k16, KC_NO }, \
    { k20, k21, k22, k23, k24, k25, k26, KC_NO }, \
    { k30, k31, k32, k33, k34, k35, k36, KC_NO }, \
    { KC_NO, KC_NO, k42, k43, KC_NO, k45, k46, KC_NO }, \
\
    { k50, k51, k52, k53, k54, k55, k56, k57 }, \
    { k60, k61, k62, k63, k64, k65, KC_NO, k67 }, \
    { k70, k71, k72, k73, k74, k75, k76, k77 }, \
    { k80, k81, k82, k83, k84, k85, k86, k87 }, \
    { KC_NO, KC_NO, k92, k93, KC_NO, k95, k96, k97 }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                   KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,                   KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_MUTE, KC_MPLY, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
       KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B,                   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_BSLS,
                   KC_HOME, KC_END,                                         KC_LBRC, KC_RBRC,
                              TT(1), KC_LSFT, KC_LALT,          KC_BSPC, LT(1, KC_ENT),
                                     KC_LCTL, KC_SPC,   KC_SPC, KC_RCTL,                     KC_UP,
                                                                                KC_LEFT, RSFT_T(KC_DEL), KC_RGHT,
                                                                                             KC_DOWN
    ),

    [_LOWER] = LAYOUT(
        _______,   KC_F1, KC_F2, KC_F3, KC_F4,   KC_F5,                     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_F11,
        _______, KC_PAST,  KC_7,  KC_8,  KC_9, KC_PPLS,                   _______, KC_PGUP,   KC_UP, KC_PGDN,  KC_CALC, KC_F12,
        _______, KC_PSLS,  KC_4,  KC_5,  KC_6, KC_PMNS, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT,   KC_INS, KC_APP,
        _______,    KC_0,  KC_1,  KC_2,  KC_3, KC_PDOT,                   _______, KC_HOME, KC_PSCR,  KC_END,  _______, KC_RGUI,
                        _______, _______,                                                   _______, _______,
                                      _______, _______, _______, _______,          _______,
                                               _______ ,_______, _______, _______,             _______,
                                                                                       _______,_______,_______,
                                                                                               _______

    )

//    [_RAISE] = LAYOUT(_______, KC_NUM, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_VOLU, KC_HOME, KC_PSCR, KC_PGUP, KC_SCRL, KC_CAPS, _______, EQL_LCT, KC_PAST, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_MUTE, KC_LEFT, KC_UP, KC_RGHT, KC_INS, APP_RCT, _______, KC_P0, KC_P1, KC_P2, KC_P3, KC_PCMM, KC_VOLD, KC_END, KC_DOWN, KC_PGDN, KC_PAUS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

//    [_NUMPAD] = LAYOUT(_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

//    [_ADJUST] = LAYOUT(QK_BOOT, RGBRST, AS_UP, AS_TOGG, AS_DOWN, _______, _______, _______, _______, AS_DOWN, AS_TOGG, AS_UP, RGBRST, QK_BOOT, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, RGB_VAI, RGB_SAI, RGB_HUI, RGB_TOG, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, RGB_VAD, RGB_SAD, RGB_HUD, RGB_MOD, _______, SH_TOGG, _______, _______, SH_TOGG, _______, _______, _______, _______, _______)
};

#if defined(ENCODER_MAP_ENABLE)
  const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [1] = { ENCODER_CCW_CW(KC_WBAK, KC_WFWD), ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) }
  };
#endif

// clang-format on
// format-enable
/* beautify preserve:end */

// layer_state_t layer_state_set_user(layer_state_t state) {
//     return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif

    switch (keycode) {
#ifdef RGBLIGHT_ENABLE
        case RGBRST:
            if (record->event.pressed) {
                eeconfig_update_rgblight_default();
                rgblight_enable();
            }
            break;
#endif
    }
    return true;
}

#include "transactions.h"
void suspend_power_down_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_suspend();

    rgblight_syncinfo_t rgblight_sync;
    rgblight_get_syncinfo(&rgblight_sync);
    transport_execute_transaction(PUT_RGBLIGHT, &rgblight_sync, sizeof(rgblight_sync), NULL, 0);
#endif

#ifdef OLED_ENABLE
    oled_off();

    bool current_oled_state = false;
    transport_execute_transaction(PUT_OLED, &current_oled_state, sizeof(current_oled_state), NULL, 0);
#endif
}

void suspend_wakeup_init_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_wakeup();
#endif

#ifdef OLED_ENABLE
    oled_on();
#endif
}

#ifdef RGBLIGHT_ENABLE
#    ifdef RGBLIGHT_TIMEOUT
static uint32_t key_timer;               // timer for last keyboard activity, use 32bit value and function to make longer idle time possible
static void     refresh_rgb(void);       // refreshes the activity timer and RGB, invoke whenever any activity happens
static void     check_rgb_timeout(void); // checks if enough time has passed for RGB to timeout
bool            is_rgb_timeout = false;  // store if RGB has timed out or not in a boolean

void refresh_rgb(void) {
    key_timer = timer_read32(); // store time of last refresh
    if (is_rgb_timeout) {
        is_rgb_timeout = false;
        rgblight_wakeup();
    }
}
void check_rgb_timeout(void) {
    if (!is_rgb_timeout && timer_elapsed32(key_timer) > RGBLIGHT_TIMEOUT) // check if RGB has already timeout and if enough time has passed
    {
        rgblight_suspend();
        is_rgb_timeout = true;
    }
}

#        include "split_util.h"
/* Then, call the above functions from QMK's built in post processing functions like so */
/* Runs at the end of each scan loop, check if RGB timeout has occured or not */
void housekeeping_task_user(void) {
    if (is_keyboard_master()) {
        check_rgb_timeout();
    }
}

/* Runs after each key press, check if activity occurred */
void post_process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (is_keyboard_master()) {
        if (record->event.pressed) refresh_rgb();
    }
}

/* Runs after each encoder tick, check if activity occurred */
void post_encoder_update_user(uint8_t index, bool clockwise) {
    if (is_keyboard_master()) {
        refresh_rgb();
    }
}
#    endif
#endif

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    oled_set_brightness(100);
    return OLED_ROTATION_270;
}

inline static void render_mods(uint8_t modifiers) {
    oled_write_ln_P((modifiers & MOD_MASK_CTRL) ? PSTR("Ctrl") : PSTR(" "), false);
    oled_write_ln_P((modifiers & MOD_MASK_ALT) ? PSTR("Alt") : PSTR(" "), false);
    oled_write_ln_P((modifiers & MOD_MASK_SHIFT) ? PSTR("Shft") : PSTR(" "), false);
    oled_write_ln_P((modifiers & MOD_MASK_GUI) ? PSTR("GUI") : PSTR(" "), false);
}

bool oled_task_user(void) {
    oled_write_ln_P(get_highest_layer(layer_state) == _QWERTY ? PSTR("def ") : PSTR("    "), false);
    oled_write_ln_P(PSTR(" "), false);

    oled_write_ln_P(get_highest_layer(layer_state) == _LOWER ? PSTR("lowr") : PSTR("    "), false);
    oled_write_ln_P(PSTR(" "), false);

    render_mods(get_mods());
    oled_write_ln_P(PSTR(" "), false);

    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR(" "), false);
    oled_write_ln_P(led_state.num_lock ? PSTR("num") : PSTR("    "), false);
    oled_write_ln_P(PSTR(" "), false);
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAPS") : PSTR("    "), false);

    return false;
}
#endif

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable = true;
    // debug_matrix = true;
    // debug_keyboard=true;
    // debug_mouse=true;
}

/*
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {JOYSTICK_AXIS_IN(GP29, 0, 512, 1024), JOYSTICK_AXIS_IN(GP28, 0, 512, 1024)};

// joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {JOYSTICK_AXIS_VIRTUAL, JOYSTICK_AXIS_VIRTUAL};

// Contains report from sensor #0 already, need to merge in from sensor #1
report_mouse_t pointing_device_task_kb(report_mouse_t mouse_report) {
    static uint8_t krt = 0;
    static uint8_t klt = 0;
    static uint8_t kup = 0;
    static uint8_t kdn = 0;

    const int8_t th = 100;

    int16_t x = joystick_read_axis(0);
    int16_t y = joystick_read_axis(1);

    if (x > th) {
        if (!krt) {
            krt = 1;
            //            register_code(KC_RIGHT);
        }
    } else if (x < -th) {
        if (!klt) {
            klt = 1;
            //            register_code(KC_LEFT);
        }
    } else {
        if (krt) {
            krt = 0;
            //            unregister_code(KC_RIGHT);
        }
        if (klt) {
            klt = 0;
            //            unregister_code(KC_LEFT);
        }
    }

    if (y > th) {
        if (!kdn) {
            kdn = 1;
            //            register_code(KC_DOWN);
        }
    } else if (y < -th) {
        if (!kup) {
            kup = 1;
            //            register_code(KC_UP);
        }
    } else {
        if (kdn) {
            kdn = 0;
            //            unregister_code(KC_DOWN);
        }
        if (kup) {
            kup = 0;
            //            unregister_code(KC_UP);
        }
    }

    mouse_report.x = 0;
    mouse_report.y = 0;

#ifdef CONSOLE_ENABLE
    // uprintf("xy: x: %d, y: %d, xa: %d \n", x, y, xa);
#endif

    return pointing_device_task_user(mouse_report);
}
*/
