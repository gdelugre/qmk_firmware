#include QMK_KEYBOARD_H
#include "layers.h"
#include "version.h"

enum custom_keycodes {
    PLACEHOLDER = SAFE_RANGE,
    VRSN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   =    |   1  |   2  |   3  |   4  |   5  | Del  |           | Ins  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | T(L1)|           | T(L1)|   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Bspc   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------| L2   |           | L2   |------+------+------+------+------+--------|
     * | LSft   |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RSft   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Ctrl |  Alt |  Gui |   [  |   ] |                                       |   `   | Left | Down |  Up  | Right  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Alt |  L3  |       |  L3  |  Alt   |
     *                                 ,------|------|------|       |------+--------+------.
     *                                 |      |      | Home |       | PgUp |        |      |
     *                                 | Back |  Esc |------|       |------| Enter  |Space |
     *                                 | Space|      | End  |       | PgDn |        |      |
     *                                 `--------------------'       `----------------------'
     */
	[_LAYER_QWERTY] = LAYOUT_ergodox(
            //
            // Left half.
            //
            KC_EQL,         KC_1,       KC_2,       KC_3,       KC_4,       KC_5,   KC_DEL,
            KC_TAB,         KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,   TG(1),
            KC_BSPC,        KC_A,       KC_S,       KC_D,       KC_F,       KC_G,
            KC_LSFT,        KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,   MO(2),
            KC_LCTL,        KC_LGUI,    KC_LALT,    KC_LBRC,    KC_RBRC,

                            KC_LALT,    MO(3),
                                        KC_HOME,
            KC_BSPC,        KC_ESC,     KC_END,

            //
            // Right half.
            //
            KC_INS,         KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,
            TG(1),          KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,
                            KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
            MO(2),          KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
                            KC_GRV,     KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,

            MO(3),          KC_RALT,
            KC_PGUP,
            KC_PGDN,        KC_ENT,     KC_SPC),

    /* Colemak
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   =    |   1  |   2  |   3  |   4  |   5  | Del  |           | Ins  |   6  |   7  |   8  |   9  |   0  |   -    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   F  |   P  |   G  | T(L1)|           | T(L1)|   J  |   L  |   U  |   Y  |   ;  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Bspc   |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
     * |--------+------+------+------+------+------| L2   |           | L2   |------+------+------+------+------+--------|
     * | LSft   |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RSft   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Ctrl |  Alt |  Gui |   [  |   ] |                                       |   `   | Left | Down |  Up  | Right  |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Alt |  L3  |       |  L3  |  Alt   |
     *                                 ,------|------|------|       |------+--------+------.
     *                                 |      |      | Home |       | PgUp |        |      |
     *                                 | Back |  Esc |------|       |------| Enter  |Space |
     *                                 | Space|      | End  |       | PgDn |        |      |
     *                                 `--------------------'       `----------------------'
     */
	[_LAYER_COLEMAK] = LAYOUT_ergodox(
            //
            // Left half.
            //
            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_F,       KC_P,       KC_G,       KC_TRNS,
            KC_TRNS,        KC_TRNS,    KC_R,       KC_S,       KC_T,       KC_D,
            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

                            KC_TRNS,    KC_TRNS,
                                        KC_TRNS,
            KC_TRNS,        KC_TRNS,    KC_TRNS,

            //
            // Right half.
            //
            KC_TRNS,        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
            KC_TRNS,        KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,     KC_TRNS,
                            KC_TRNS,    KC_N,       KC_E,       KC_I,       KC_O,        KC_TRNS,
            KC_TRNS,        KC_K,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,     KC_TRNS,
                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,

            KC_TRNS,        KC_TRNS,
            KC_TRNS,
            KC_TRNS,        KC_TRNS,    KC_TRNS),

    /* Functions
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      | PrSc | ScLk | Pause|        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
	[_LAYER_FUNCTIONS] = LAYOUT_ergodox(
            //
            // Left half.
            //
            KC_NO,          KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,

                            KC_NO,      KC_NO,
                                        KC_NO,
            KC_NO,          KC_NO,      KC_NO,

            //
            // Right half.
            //
            KC_F7,          KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_PSCR,    KC_SLCK,    KC_PAUS,    KC_NO,
                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_TRNS,        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,

            KC_NO,          KC_NO,
            KC_NO,
            KC_NO,          KC_NO,      KC_NO),

    /* Control
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Program|      |      |      |      |      | Vrsn |           | Vrsn |      |      |      |      |      | Program|
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | Led- |T(Led)| Led+ |      |      |                                       |      |      | Led- |T(Led)| Led+ |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
	[_LAYER_CONTROL] = LAYOUT_ergodox(
            //
            // Left half.
            //
            RESET,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      VRSN,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            BL_DEC,         BL_TOGG,    BL_INC,     KC_NO,      KC_NO,

                            KC_NO,      KC_TRNS,
                                        KC_NO,
            KC_NO,          KC_NO,      KC_NO,

            //
            // Right half.
            //
            VRSN,           KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      RESET,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
            KC_NO,          KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
                            KC_NO,      KC_NO,      BL_DEC,     BL_TOGG,    BL_INC,

            KC_TRNS,        KC_NO,
            KC_NO,
            KC_NO,          KC_NO,      KC_NO)

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case VRSN:
            if (record->event.pressed) {
                SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION " (" QMK_BUILDDATE ")" );
            }
            return false;

        case KC_RSFT:
            if (record->event.pressed) {
                ergodox_right_led_2_on();
            } else {
                ergodox_right_led_2_off();
            }
        break;
  }

  return true;
}

void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    switch (layer) {
        case _LAYER_COLEMAK:
            ergodox_right_led_1_on();
            break;

        case _LAYER_FUNCTIONS:
            ergodox_right_led_2_on();
            break;

        case _LAYER_CONTROL:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }
}
