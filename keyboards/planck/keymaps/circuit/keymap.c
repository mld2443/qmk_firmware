////////////////////////////////////////////////////////////////////////////////
// Layout Name: Circuit
// Keyboard Type: Planck
////////////////////////////////////////////////////////////////////////////////
#include QMK_KEYBOARD_H

///////////////////
// CONFIGURATION //
///////////////////
extern keymap_config_t keymap_config;


///////////////////
// LAYERS & KEYS //
///////////////////

// Layer names.
enum planck_layers {
    _QWERTY,
    _DVORAK,
    _UNICODE,
    _UNLOCK,
    _RAISE,
    _LOWER,
    _FUNCTN
};

// Layer key-code names.
enum planck_keycodes {
    QWERTY = SAFE_RANGE,
    DVORAK,
    UNICODE
};

// Custom key-code names
#define SFT_ENT RSFT_T(KC_ENT) // Hold for shift, tap for enter.
#define UNCD    TG(_UNICODE)
#define LOCK    TG(_UNLOCK)
#define RAISE   LM(_RAISE, KC_VOLU)
#define LOWER   LM(_LOWER, KC_VOLD)


////////////////////////
// LAYOUT DEFINITIONS //
////////////////////////
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid(/* Qwerty keyboard layout.
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |SftEnt|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl | Alt  | NULL | Vol- | ACTN |    Space    | NUMS | Vol+ | Left | Down | Left |
 * `-----------------------------------------------------------------------------------'*/
    KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   SFT_ENT,
    KC_LCTL, KC_LALT, XXXXXXX, KC_GRV,  LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
),

[_DVORAK] = LAYOUT_planck_grid(/* Dvorak keyboard layout.
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |   Z  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  | Up   |SftEnt|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl | Alt  | NULL | Vol- | Raise|    Space    | Lower| Vol+ | Left | Down | Left |
 * `-----------------------------------------------------------------------------------'*/
    KC_ESC,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
    KC_TAB,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_Z,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_UP,   SFT_ENT,
    KC_LCTL, KC_LALT, XXXXXXX, KC_GRV,  LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
),

[_UNICODE] = LAYOUT_planck_grid(/* Unicode characters and emoji.
 * ,-----------------------------------------------------------------------------------.
 * | Pi   |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'*/
    X(960),  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

[_UNLOCK] = LAYOUT_planck_grid(/* Unlocks use of GUI button.
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | GUI  |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'*/
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, KC_LGUI, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_planck_grid(/* Numbers and punctuation.
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   ~  | NULL | NULL | NULL |   |  |   _  |   +  |   {  |   }  |   ?  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   `  | NULL | NULL | NULL |   \  |   -  |   =  |   [  |   ]  |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |     NULL    |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'*/
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX, KC_PIPE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_QUES, KC_SLSH,
    _______, KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______, _______,
    _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______
),

[_LOWER] = LAYOUT_planck_grid(/* Actions and additional punctuation.
 * ,-----------------------------------------------------------------------------------.
 * |      |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CAPS | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | PgUp | Enter|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      | Mute |      |     NULL    |      | NULL | Home | PgDn |  End |
 * `-----------------------------------------------------------------------------------'*/
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_ENT,
    _______, _______, _______, KC_MUTE, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, _______, _______
),

[_FUNCTN] = LAYOUT_planck_grid(/* F-keys and Keyboard functions.
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  F13 |  F14 |  F15 |  F16 |  F17 |  F18 |  F19 |  F20 |  F21 |  F22 |  F23 |  F24 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | NULL | NULL | NULL | NULL | NULL |QWERTY|DVORAK| NULL | NULL | NULL | NULL | NULL |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Reset| NULL | Lock | NULL |      |     NULL    |      | NULL | NULL | NULL | Sleep|
 * `-----------------------------------------------------------------------------------'*/
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY,  DVORAK,  UNCD,    XXXXXXX, XXXXXXX, KC_PGUP, KC_PSCR,
    KC_SLEP, XXXXXXX, LOCK,    XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, KC_HOME, KC_PGDN, KC_END
)
};


///////////
// TONES //
///////////
//#ifdef AUDIO_ENABLE
//float tone_startup[][2] = SONG(STARTUP_SOUND);
//float tone_qwerty[][2] = SONG(QWERTY_SOUND);
//float tone_dvorak[][2] = SONG(DVORAK_SOUND);
//#endif


///////////////
// FUNCTIONS //
///////////////
uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _FUNCTN);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
            break;

        case DVORAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            return false;
            break;
    }

    return true;
}
