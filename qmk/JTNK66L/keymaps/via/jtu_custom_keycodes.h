// Keycodes to use jis keycode in us keymap

#pragma once

#include "action.h"
#include "quantum_keycodes.h"

enum jtu_custom_keycodes {
//  JU_2 = SAFE_RANGE,
  JU_2 = QK_KB, //USER00 Custom(0)
  JU_6,//USER01 Custom(1)
  JU_7,//USER02 Custom(2)
  JU_8,//USER03 Custom(3)
  JU_9,//USER04 Custom(4)
  JU_0,//USER05 Custom(5)
  JU_MINS,//USER06 Custom(6)
  JU_EQL,//USER07 Custom(7)
  JU_LBRC,//USER08 Custom(8)
  JU_RBRC,//USER09 Custom(9)
  JU_BSLS,//USER10 Custom(10)
  JU_SCLN,//USER11 Custom(11)
  JU_QUOT,//USER12 Custom(12)
  JU_GRV,//USER13 Custom(13)
  JU_CAPS,//USER14 Custom(14)
  JTU_SAFE_RANGE
};

bool process_record_user_jtu(uint16_t keycode, keyrecord_t *record);
