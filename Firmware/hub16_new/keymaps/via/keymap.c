/* Copyright 2019 Josh Johnson
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
      KC_MUTE,   KC_MPLY,
    KC_7, KC_8, KC_9, KC_PAST,
    KC_4, KC_5, KC_6, KC_PMNS,
    KC_1, KC_2, KC_3, KC_PPLS,
    MO(1), KC_0, KC_PDOT, KC_PENT
  ),

  [1] = LAYOUT( /* LED Control */
        _______,           _______,
    _______, UG_NEXT, UG_PREV,  UG_TOGG,
    UG_VALD, UG_VALU, UG_HUED,  UG_HUEU,
    UG_SATD, UG_SATU, _______,  _______,
    _______, _______, QK_BOOT,  _______
  ),

  [2] = LAYOUT(
        _______,           _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______
  ),

  [3] = LAYOUT(
        _______,           _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, _______, _______, _______
  ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),  ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif