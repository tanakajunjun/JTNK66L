/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
//#include "keymap.h"


//#include "jtu_custom_keycodes.h"

//enum custom_keycodes {
//  CUSTOM_KEY_CODE_A = JTU_SAFE_RANGE, // 変更
//  CUSTOM_KEY_CODE_B,
//  CUSTOM_KEY_CODE_C
//};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, KC_ENTER,        KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_INT1, KC_RSFT,   KC_UP,         KC_VOLU,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_LGUI, KC_LALT,  KC_SPC,                                              KC_RALT,  KC_RCTL ,MO(1),  KC_LEFT, KC_DOWN, KC_RGHT,KC_VOLD
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  ),
  [1] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_DEL,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, RGB_MOD, RGB_RMOD, RGB_VAI, RGB_VAD, RGB_SPI, RGB_SPD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         RGB_TOG,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_PAGE_UP,     RGB_MOD,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______,                                              _______, _______, _______, KC_HOME, KC_PAGE_DOWN, KC_END, RGB_RMOD
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  ),
  [2] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______,                                              _______, _______, _______, _______, _______, _______, _______
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'
  ),
  [3] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______,                                              _______, _______, _______, _______, _______, _______, _______
//|-----------------------------------------------------------------------------------------------------------------------------------------------'
  )
};

#if defined(ENCODER_MAP_ENABLE)
enum layers{
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   {  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [_LOWER] =  {  ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [_RAISE] =  {  ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
    [_ADJUST] = {  ENCODER_CCW_CW(KC_UP, KC_DOWN) },
};
#endif

#ifdef RGB_MATRIX_ENABLE

  //,-----------------------------------------------------------------------------------------------------------------------------------------------.
  //   JU_GRV,    KC_1,    JU_2,    KC_3,    KC_4,    KC_5,    JU_6,    JU_7,    JU_8,    JU_9,    JU_0, JU_MINS,  JU_EQL, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, JU_LBRC, JU_RBRC, JU_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //  KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, JU_SCLN, JU_QUOT, KC_ENTER,        KC_PSCR,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_INT1, KC_RSFT,   KC_UP,         KC_VOL
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
  //    KC_LCTL, KC_LGUI, KC_LALT,  KC_SPC,                                              KC_RALT,   MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT,KC_VOLD
  //|-----------------------------------------------------------------------------------------------------------------------------------------------'


  // Logical Layout
  // Columns
  // Left
  // 0  1  2  3  4  5  6  7 ROWS
  //   60 59 51 50 43 42 34
  //   61 58 52 49 44 41 35
  //   62 57 53 48 45 40 36
  //   63 56 54 47 46 39 37
  //65 64 55 38 __ __ __ __

  //
  // Right
  // 0  1  2  3  4  5  6  7 ROWS
  //33 26 25 16 15  6  5 __
  //32 27 24 17 14  7  4 __
  //31 28 23 18 13  8 __  0
  //30 29 22 19 12  9  3 __
  //__ __ 21 20 11 10  2  1

  //
  // Physical Layout
  //  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 ROWS
  // 60 59 51 50 43 42 34 33 26 25 16 15  6  5 __ __    0
  // 61 58 52 49 44 41 35 32 27 24 17 14  7  4 __ __    1
  // 62 57 53 48 45 40 36 31 28 23 18 13  8 __  0 __    2
  // 63 56 54 47 46 39 37 30 29 22 19 12  9  3 __ __    3
  // 65 64 55 38 __ __ __ __ __ __ 21 20 11 10  2  1    4

led_config_t g_led_config = { {
	{ 60, 59, 51, 50, 43, 42, 34, 33 },
	{ 61, 58, 52, 49, 44, 41, 35, 32 },
	{ 62, 57, 53, 48, 45, 40, 36, 31 },
	{ 63, 56, 54, 47, 46, 39, 37, 30 },
    { 65, 64, 55, 38, NO_LED,NO_LED,NO_LED,NO_LED},

	{ 26, 25, 16, 15,  6,  5,  NO_LED, NO_LED },
	{ 27, 24, 17, 14,  7,  4,  NO_LED, NO_LED },
	{ 28, 23, 18, 13,  8,  NO_LED,  0, NO_LED },
	{ 29, 22, 19, 12,  9,  3, NO_LED, NO_LED },
    { NO_LED, NO_LED, 21, 20, 11,10,  2,  1}

}, {
   	{209, 32},{224, 64},{209, 64},{194, 48},{194, 16},{194,  0},{179,  0},{179, 16},{179, 32},{179, 48},
   	{194, 64},{179, 64},{164, 48},{164, 32},{164, 16},{164,  0},{149,  0},{149, 16},{149, 32},{149, 48},
   	{164, 64},{149, 64},{134, 48},{134, 32},{134, 16},{134,  0},{119,  0},{119, 16},{119, 32},{119, 48},
   	{104, 48},{104, 32},{104, 16},{104,  0},{ 89,  0},{ 89, 16},{ 89, 32},{ 89, 48},{ 89, 64},{ 74, 48},
   	{ 74, 32},{ 74, 16},{ 74,  0},{ 59,  0},{ 59, 16},{ 59, 32},{ 59, 48},{ 44, 48},{ 44, 32},{ 44, 16},
   	{ 44,  0},{ 29,  0},{ 29, 16},{ 29, 32},{ 29, 48},{ 29, 64},{ 14, 48},{ 14, 32},{ 14, 16},{ 14,  0},
   	{  0,  0},{  0, 16},{  0, 32},{  0, 48},{ 14, 64},{  0, 64}
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4
} };

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}

// 以下追加
static bool gs_lshift = false;
// static bool gs_modlshift = false;
static bool gs_rshift = false;
// static bool gs_modrshift = false;

void proc_regist_keycode(keyrecord_t *record, uint16_t regist_keycode_ifshift, bool is_shift_ifshift, uint16_t regist_keycode, bool is_shift){
    // bool shift_now = gs_lshift || gsdlshift || gs_rshift || gs_modrshift;
    bool shift_now = gs_lshift  || gs_rshift;

    if (record->event.pressed) {
        //キーを押した場合

        if(shift_now){
            //今シフトが押されている場合

            if(!is_shift_ifshift){
                //変換先キーがシフト無しの場合、シフトを解除する
                if (gs_lshift) unregister_code(KC_LSFT);
                // if (gs_modlshift) unregister_code(MOD_LSFT);
                if (gs_rshift) unregister_code(KC_RSFT);
                // if (gs_modrshift) unregister_code(MOD_RSFT);
            }

            //変換先キー押下
            register_code(regist_keycode_ifshift);
        }else{
            //今シフトが押されていない場合

            //変換先キーがシフトありの場合、シフトを押下する
            if(is_shift)register_code(KC_LSFT);

            //変換先キー押下
            wait_ms(10);
            register_code(regist_keycode);
        }
    }else{
        //キーを放した場合
        //先にシフト状態が変わっている場合があるため、両方の変換先を放す

        //----シフト側

        if(shift_now && !is_shift_ifshift){
            //変換先キーがシフト無しの場合、シフトを解除する
            if (gs_lshift) unregister_code(KC_LSFT);
            // if (gs_modlshift) unregister_code(MOD_LSFT);
            if (gs_rshift) unregister_code(KC_RSFT);
            // if (gs_modrshift) unregister_code(MOD_RSFT);
        }

        //変換先キーを放す
        unregister_code(regist_keycode_ifshift);

        if(shift_now && !is_shift_ifshift){
            //シフトの状態を戻す
            if (gs_lshift) register_code(KC_LSFT);
            // if (gs_modlshift) register_code(MOD_LSFT);
            if (gs_rshift) register_code(KC_RSFT);
            // if (gs_modrshift) register_code(MOD_RSFT);
        }

        //----シフトしない側

        //変換先キーがシフトありの場合、シフトを押下する
        if(!shift_now && is_shift)register_code(KC_LSFT);

        //変換先キーを放す
        unregister_code(regist_keycode);

        //シフトの状態を戻す
        if(!shift_now && is_shift)unregister_code(KC_LSFT);
    }
}



bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    //シフトが押下または放された場合は、その状態を保持して終了
    switch (keycode) {
        case KC_LSFT:
            if (record->event.pressed) gs_lshift = true;
            else gs_lshift = false;
            return true;
        // case MOD_LSFT:
        //     if (record->event.pressed) gs_modlshift = true;
        //     else gs_modlshift = false;
        //     return true;
        case KC_RSFT:
            if (record->event.pressed) gs_rshift = true;
            else gs_rshift = false;
            return true;
        // case MOD_RSFT:
        //     if (record->event.pressed) gs_modrshift = true;
        //     else gs_modrshift = false;
        //     return true;
    }

    //実際のシフト押下と今のレジスト状態が異なる場合は実際の押下に合わせる
    bool is_reg_lshift = keyboard_report->mods & MOD_BIT(KC_LSFT);
    if(!is_reg_lshift && gs_lshift)register_code(KC_LSFT);
    if(is_reg_lshift && !gs_lshift)unregister_code(KC_LSFT);

    // bool is_reg_modlshift = keyboard_report->mods & MOD_BIT(MOD_LSFT);
    // if(!is_reg_modlshift && gs_modlshift)register_code(MOD_LSFT);
    // if(is_reg_modlshift && !gs_modlshift)unregister_code(MOD_LSFT);

    bool is_reg_rshift = keyboard_report->mods & MOD_BIT(KC_RSFT);
    if(!is_reg_rshift && gs_rshift)register_code(KC_RSFT);
    if(is_reg_rshift && !gs_rshift)unregister_code(KC_RSFT);

    // bool is_reg_modrshift = keyboard_report->mods & MOD_BIT(MOD_RSFT);
    // if(!is_reg_modrshift && gs_modrshift)register_code(MOD_RSFT);
    // if(is_reg_modrshift && !gs_modrshift)unregister_code(MOD_RSFT);

    //JISと異なるキーそれぞれの分岐
    //２，３番目の引数がシフトが押下されている場合の変換先
    //４，５番目の引数がシフト無しの場合の変換先
    //３，５番目の引数は変換先がシフトを必要とするかどうか　true:必要　false:不要
    switch (keycode) {
        case KC_2:
            proc_regist_keycode(record, KC_LBRC, false, KC_2, false);
            return false;
        case KC_6:
            proc_regist_keycode(record, KC_EQL, false, KC_6, false);
            return false;
        case KC_7:
            proc_regist_keycode(record, KC_6, true, KC_7, false);
            return false;
        case KC_8:
            proc_regist_keycode(record, KC_QUOT, true, KC_8, false);
            return false;
        case KC_9:
            proc_regist_keycode(record, KC_8, true, KC_9, false);
            return false;
        case KC_0:
            proc_regist_keycode(record, KC_9, true, KC_0, false);
            return false;
        case KC_MINS:
            proc_regist_keycode(record, KC_INT1, true, KC_MINS, false);
            return false;
        case KC_EQL:
            proc_regist_keycode(record, KC_SCLN, true, KC_MINS, true);
            return false;
        case KC_LBRC:
            proc_regist_keycode(record, KC_RBRC, true, KC_RBRC, false);
            return false;
        case KC_RBRC:
            proc_regist_keycode(record, KC_NUHS, true, KC_NUHS, false);
            return false;
        case KC_BSLS:
            proc_regist_keycode(record, KC_INT3, true, KC_INT1, false);
            return false;
        case KC_SCLN:
            proc_regist_keycode(record, KC_QUOT, false, KC_SCLN, false);
            return false;
        case KC_QUOT:
            proc_regist_keycode(record, KC_2, true, KC_7, true);
            return false;
        case KC_GRV:
            proc_regist_keycode(record, KC_EQL, true, KC_LBRC, true);
            return false;
/*            
        case KC_CAPS:
            proc_regist_keycode(record, KC_CAPS, true, KC_CAPS, true);
            return false;
        case KC_TILD:
            proc_regist_keycode(record, KC_EQL, true, KC_EQL, true);
            return false;
        case KC_AT:
            proc_regist_keycode(record, KC_LBRC, false, KC_LBRC, false);
            return false;
        case KC_CIRC:
            proc_regist_keycode(record, KC_EQL, false, KC_EQL, false);
            return false;
        case KC_AMPR:
            proc_regist_keycode(record, KC_6, true, KC_6, true);
            return false;
        case KC_ASTR:
            proc_regist_keycode(record, KC_QUOT, true, KC_QUOT, true);
            return false;
        case KC_LPRN:
            proc_regist_keycode(record, KC_8, true, KC_8, true);
            return false;
        case KC_RPRN:
            proc_regist_keycode(record, KC_9, true, KC_9, true);
            return false;
        case KC_UNDS:
            proc_regist_keycode(record, KC_INT1, true, KC_INT1, true);
            return false;
        case KC_PLUS:
            proc_regist_keycode(record, KC_SCLN, true, KC_SCLN, true);
            return false;
        case KC_LCBR:
            proc_regist_keycode(record, KC_RBRC, true, KC_RBRC, true);
            return false;
        case KC_RCBR:
            proc_regist_keycode(record, KC_NUHS, true, KC_NUHS, true);
            return false;
        case KC_PIPE:
            proc_regist_keycode(record, KC_INT3, true, KC_INT3, true);
            return false;
        case KC_COLN:
            proc_regist_keycode(record, KC_QUOT, false, KC_QUOT, false);
            return false;
        case KC_DQUO:
            proc_regist_keycode(record, KC_2, true, KC_2, true);
            return false;
        case KC_PEQL:
            proc_regist_keycode(record, KC_MINS, true, KC_MINS, true);
            return false;
        case KC_PCMM:
            proc_regist_keycode(record, KC_COMM, false, KC_COMM, false);
            return false;
            */
    }
    return true;
}
#endif
