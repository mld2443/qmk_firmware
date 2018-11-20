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
  _RAISE,
  _LOWER,
  _UNLOCK,
  _NUMPAD,
  _FUNCTN
};

// Layer key-code names.
enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  DVORAK,
  NUMPAD,
  LOCK
};

// Custom key-code names
#define RAISE   LT(_RAISE, KC_VOLU)
#define LOWER   LT(_LOWER, KC_VOLD)


///////////////////////
// LAYOR DEFINITIONS //
///////////////////////
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid(
/* Qwerty keyboard layout.
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |  Q   |  W   |  E   |  R   |  T   |  Y   |  U   |  I   |  O   |  P   | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |  A   |  S   |  D   |  F   |  G   |  H   |  J   |  K   |  L   |  ;   |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|  Z   |  X   |  C   |  V   |  B   |  N   |  M   |  ,   |  .   |  Up  |SftEnt|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl | Alt  |  [   |  ]   |Vol-/L|    Space    |Vol+/R|  /   | Left | Down | Left |
 * `-----------------------------------------------------------------------------------'
 */
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SFTENT,
  KC_LCTL, KC_LALT, KC_LBRC, KC_RBRC, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
),

[_DVORAK] = LAYOUT_planck_grid(
/* Dvorak keyboard layout.
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |  '   |  ,   |  .   |  P   |  Y   |  F   |  G   |  C   |  R   |  L   | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |  A   |  O   |  E   |  U   |  I   |  D   |  H   |  T   |  N   |  S   |  Z   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|  ;   |  Q   |  J   |  K   |  X   |  B   |  M   |  W   |  V   | Up   |SftEnt|
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Ctrl | Alt  |  [   |  ]   |Vol-/L|    Space    |Vol+/R|  /   | Left | Down | Left |
 * `-----------------------------------------------------------------------------------'
 */
  KC_ESC,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC,
  KC_TAB,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_Z,
  KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_UP,   KC_SFTENT,
  KC_LCTL, KC_LALT, KC_LBRC, KC_RBRC, LOWER,   KC_SPC,  KC_SPC,  RAISE,   KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
),

[_RAISE] = LAYOUT_planck_grid(
/* Numbers and punctuation.
 * ,-----------------------------------------------------------------------------------.
 * |      |  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   ~  | NULL | NULL | NULL | NULL |  _   |  +   |  <   |  >   |  |   |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |   `  | NULL | NULL | NULL | NULL |  -   |  =   |  ,   |  .   |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | NULL | NULL |      |     NULL    |      | NULL |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
  _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  _______, KC_TILD, XXXXXXX, XXXXXXX, XXXXXXX, KC_QUES, KC_UNDS, KC_PLUS, KC_LT,   KC_GT,   KC_PIPE, KC_BSLS,
  _______, KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, KC_SLSH, KC_MINS, KC_EQL,  KC_COMM, KC_DOT,  _______, _______,
  _______, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, _______, _______, _______
),

[_LOWER] = LAYOUT_planck_grid(
/* Actions and additional punctuation.
 * ,-----------------------------------------------------------------------------------.
 * |      |  !   |  @   |  #   |  $   |  %   |  ^   |  &   |  *   |  (   |  )   | Del  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |PrtScr| NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CAPS | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | NULL | PgUp | Ent  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      | NULL | NULL |      |     NULL    |      | NULL | Home | PgDn | End  |
 * `-----------------------------------------------------------------------------------'
 */
  _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
  KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, KC_ENT,
  _______, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, _______, XXXXXXX, KC_HOME, KC_PGDN, KC_END
),

[_UNLOCK] = LAYOUT_planck_grid(
/* Unlocks use of GUI button.
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | GUI  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_RGUI, _______, _______, _______
),

[_NUMPAD] = LAYOUT_planck_grid(
/* Numpad layout.
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |      | Up   |      |      |      | Nmlk |  *   |  7   |  8   |  9   | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Left | Down | Right|      |      |      |  /   |  4   |  5   |  6   | -    |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |  =   |  1   |  2   |  3   | +    |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Exit |      |      |      |      |    Space    |      |  0   |  0   |  .   | Ent  |
 * `-----------------------------------------------------------------------------------'
 */
  KC_ESC,  XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, KC_NLCK, KC_PAST, KC_P7,   KC_P8,   KC_P9,   KC_BSPC,
  XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSLS, KC_P4,   KC_P5,   KC_P6,   KC_PMNS,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PEQL, KC_P1,   KC_P2,   KC_P3,   KC_PPLS,
  NUMPAD,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  KC_SPC,  XXXXXXX, KC_P0,   KC_P0,   KC_PDOT, KC_PENT
),

[_FUNCTN] = LAYOUT_planck_grid(
/* F-keys and Keyboard functions.
 * ,-----------------------------------------------------------------------------------.
 * | F1   | F2   | F3   | F4   | F5   | F6   | F7   | F8   | F9   | F10  | F11  | F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | F13  | F14  | F15  | F16  | F17  | F18  | F19  | F20  | F21  | F22  | F23  | F24  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | NULL | NULL | NULL | NULL | NULL |QWERTY|DVORAK|NUMPAD| NULL | NULL | NULL | NULL |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Reset| NULL | NULL | NULL |      |     NULL    |      | LOCK | NULL | NULL | Sleep|
 * `-----------------------------------------------------------------------------------
 */
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QWERTY,  DVORAK,  NUMPAD,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  RESET,   XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_MUTE, KC_MUTE, _______, LOCK,    XXXXXXX, XXXXXXX, KC_SLEP
)
};


///////////
// TONES //
///////////
#ifdef AUDIO_ENABLE
float tone_numpad_on[][2] = SONG(NUMPAD_ON_SOUND);
float tone_numpad_off[][2] = SONG(NUMPAD_OFF_SOUND);
float tone_lock[][2] = SONG(GAME_LOCK_ON_SOUND);
float tone_unlock[][2] = SONG(GAME_LOCK_OFF_SOUND);
#endif


///////////////
// FUNCTIONS //
///////////////
uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _FUNCTN);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode)
  {
  case QWERTY:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_QWERTY);
    }
    return false;

  case DVORAK:
    if (record->event.pressed) {
      set_single_persistent_default_layer(_DVORAK);
    }
    return false;

  case NUMPAD:
    if (record->event.pressed) {
      if (IS_LAYER_ON(_NUMPAD)) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(tone_numpad_off);
#endif
        layer_off(_NUMPAD);
      } else {
#ifdef AUDIO_ENABLE
        PLAY_SONG(tone_numpad_on);
#endif
        layer_on(_NUMPAD);
      }
    }
    return false;

  case LOCK:
    if (record->event.pressed) {
      if (IS_LAYER_ON(_UNLOCK)) {
#ifdef AUDIO_ENABLE
        PLAY_SONG(tone_lock);
#endif
        layer_off(_UNLOCK);
      } else {
#ifdef AUDIO_ENABLE
        PLAY_SONG(tone_unlock);
#endif
        layer_on(_UNLOCK);
      }
    }
    return false;
  }

  return true;
}
