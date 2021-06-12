/* Copyright 2021 KnoblesseOblige
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT_S3T60(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                 KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,   KC_BSLS, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,  KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,                 KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,           KC_ENT, KC_1,
        KC_LSFT, KC_4, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,                 KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                    KC_RSFT, KC_5,
        KC_LCTL, KC_LGUI, KC_LALT,    KC_2,                        KC_SPC,                                   KC_3,       KC_RALT, KC_RGUI, KC_RCTL
    )
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
