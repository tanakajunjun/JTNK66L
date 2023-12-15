// Keycodes to use jis keycode in us keymap

#pragma once

void proc_regist_keycode(keyrecord_t *record, uint16_t regist_keycode_ifshift, bool is_shift_ifshift, uint16_t regist_keycode, bool is_shift);
bool process_record_user_jtu(uint16_t keycode, keyrecord_t *record);
