#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FN 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_625(
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_UP, RGB_MOD,
    KC_GRV, KC_LALT, KC_LGUI, KC_SPC, MO(_FN), KC_LEFT, KC_DOWN, KC_RIGHT
  ),
  [_FN] = LAYOUT_625(
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_UP, KC_1,
    KC_GRV, KC_LALT, KC_LGUI, KC_SPC, _______, KC_LEFT, KC_DOWN, KC_RIGHT
  )
};


#ifdef OLED_DRIVER_ENABLE

void render_layer_state(void) {
    oled_write_ln(PSTR("LAYER"), false);
    oled_write_ln(PSTR("L1"), layer_state_is(1));
    oled_write_ln(PSTR("L2"), layer_state_is(2));
    oled_write_ln(PSTR("L3"), layer_state_is(3));
    oled_write_ln(PSTR(" "), false);
}

void render_keylock_status(led_t led_state) {
    oled_write_ln(PSTR("Lock:"), false);
    oled_write(PSTR("N"), led_state.num_lock);
    oled_write(PSTR("C"), led_state.caps_lock);
    oled_write_ln(PSTR("S"), led_state.scroll_lock);
    oled_write_ln(PSTR(" "), false);
}

void render_mod_status(uint8_t modifiers) {
    oled_write_ln(PSTR("Mods:"), false);
    oled_write(PSTR("S"), (modifiers & MOD_MASK_SHIFT));
    oled_write(PSTR("C"), (modifiers & MOD_MASK_CTRL));
    oled_write(PSTR("A"), (modifiers & MOD_MASK_ALT));
    oled_write_ln(PSTR("G"), (modifiers & MOD_MASK_GUI));
    oled_write_ln(PSTR(" "), false);
}

void oled_task_user(void) {
    oled_clear();
    // void oled_write_pixel(uint8_t x, uint8_t y, bool on);

    render_layer_state();
    render_keylock_status(host_keyboard_led_state());
    render_mod_status(get_mods()|get_oneshot_mods());
}

#endif


void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_PGDN);
    } else {
        tap_code(KC_PGUP);
    }
}

void keyboard_post_init_user(void) {
    eeconfig_init();
}
