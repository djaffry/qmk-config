#include QMK_KEYBOARD_H

enum tap_dances {
  TD_NUM_LAYER_COLN,
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_NUM_LAYER_COLN] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, KC_COLN),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_NO, KC_Q, KC_W, LT(0,KC_F), LT(0,KC_P), KC_B, KC_J, KC_L, KC_U, LT(0,KC_Y), KC_QUOT, KC_NO, KC_NO, KC_A, LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), LGUI_T(KC_G), LGUI_T(KC_M), RSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), KC_O, KC_NO, KC_NO, KC_Z, KC_X, LT(0,KC_C), KC_D, RALT_T(KC_V), RALT_T(KC_K), KC_H, LT(0,KC_COMM), LT(0,KC_DOT), KC_SLSH, KC_NO, LT(3,KC_ESC), LT(2,KC_TAB), LT(1,KC_SPC), LT(4,KC_ENT), LT(5,KC_BSPC), LT(6,KC_DEL)),
	[1] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, KC_BTN5, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN4, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_BTN2, KC_BTN3),
	[3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DM_REC1, DM_PLY1, DM_REC2, DM_PLY2, DM_RSTP, KC_NO, KC_NO, KC_NO, KC_LALT, KC_LCTL, KC_LSFT, KC_LGUI, KC_MUTE, KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPRV, KC_BRID, KC_BRIU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPLY, KC_MSTP, KC_NO),
	[4] = LAYOUT_split_3x6_3(KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TD(TD_NUM_LAYER_COLN), KC_4, KC_5, KC_6, KC_EQL, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, KC_NO, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_BSLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PDOT, KC_MINS, KC_0, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, KC_NO, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_RPRN, KC_NO, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x6_3(KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_LGUI, KC_LSFT, KC_LCTL, KC_LALT, KC_NO, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_APP, KC_APP, KC_NO, KC_NO, KC_NO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_Y):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_MINS);
                return false;
            }
            return true;
        case LT(0,KC_DOT):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_EXLM);
                return false;
            }
            return true;
        case LT(0,KC_COMM):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_UNDS);
                return false;
            }
            return true;
        case LT(0,KC_F):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_SCLN);
                return false;
            }
            return true;
        case LT(0,KC_P):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_COLN);
                return false;
            }
            return true;

        case LT(0,KC_C):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(C(KC_C));
                return false;
            }
            return true;
    }
    return true;
}
