#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
// #include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
// #include "keymap_norwegian.h"
#include "keymap_portuguese.h"
// #include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  HSV_215_255_128,
  HSV_172_255_255,
  HSV_27_255_255,
  HSV_0_255_255,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TT(4),                                          TT(1),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPACE,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_BSPACE,                                      TT(2),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    LCTL_T(KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           LT(2,KC_SCOLON),RCTL_T(KC_ENTER),
    KC_LSHIFT,      LGUI_T(KC_Z),   KC_X,           KC_C,           KC_V,           KC_B,           KC_LALT,                                        KC_HYPR,        KC_N,           KC_M,           KC_COMMA,       KC_DOT,         LT(3,KC_SLASH), LSFT_T(KC_QUOTE),
    KC_LALT,        KC_LCTRL,       LSFT(KC_LGUI),  KC_LGUI,        LT(1,KC_GRAVE),                                                                                                 LT(1,KC_MINUS), KC_LGUI,        KC_LBRACKET,    KC_RBRACKET,    KC_RALT,
                                                                                                    KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_PGDOWN,      KC_PGUP,
                                                                                                                    OSL(4),         KC_END,
                                                                                    LT(3,KC_SPACE), KC_HYPR,        TT(5),          LT(1,KC_HOME),  MT(MOD_MEH, KC_BSPACE),SCMD_T(KC_ENTER)
  ),
  [1] = LAYOUT_ergodox_pretty(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F13,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_EQUAL,       KC_F11,
    KC_F8,          KC_F7,          KC_F6,          KC_UP,          KC_PLUS,        KC_MINUS,       KC_F15,                                         KC_TRANSPARENT, KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_PERC,        KC_F12,
    LCTL_T(KC_F10), LSFT_T(KC_F9),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_EQUAL,                                                                       KC_KP_MINUS,    KC_4,           KC_5,           KC_6,           KC_KP_ASTERISK, KC_KP_ENTER,
    LSFT_T(KC_F12), LGUI_T(KC_F11), KC_LBRACKET,    KC_RBRACKET,    KC_LPRN,        KC_RPRN,        KC_F14,                                         HSV_215_255_128,KC_CIRC,        KC_1,           KC_2,           KC_3,           KC_KP_SLASH,    KC_EQUAL,
    KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_KP_0,        KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    RGB_MOD,        RGB_SLD,        HSV_172_255_255,HSV_27_255_255,
                                                                                                                    RGB_VAI,        HSV_0_255_255,
                                                                                    KC_TRANSPARENT, KC_LGUI,        RGB_VAD,        KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI
  ),
  [2] = LAYOUT_ergodox_pretty(
    TO(0),          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,                                KC_SYSTEM_SLEEP,KC_ASTR,        KC_SLASH,       KC_PLUS,        KC_MINUS,       KC_EQUAL,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MS_BTN4,     KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_BTN5,     KC_PGUP,                                        KC_AUDIO_VOL_UP,KC_HOME,        KC_END,         KC_UP,          KC_LBRACKET,    KC_RBRACKET,    KC_MEDIA_PREV_TRACK,
    KC_LCTRL,       KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_UP,                                                                    KC_AUDIO_MUTE,  KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_LSHIFT,      KC_TRANSPARENT, KC_LGUI,        KC_MS_BTN3,     KC_MS_BTN1,     KC_MS_WH_DOWN,  KC_PGDOWN,                                      KC_AUDIO_VOL_DOWN,KC_PGUP,        KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_NEXT_TRACK,
    KC_LALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_RALT,
                                                                                                    KC_MS_BTN1,     KC_MS_BTN3,     KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_MS_BTN2,     KC_TRANSPARENT,
                                                                                    KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_BTN1,     KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MINUS,       KC_EQUAL,       KC_TRANSPARENT,
    KC_CAPSLOCK,    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_PGUP,                                        KC_INSERT,      KC_HOME,        KC_END,         KC_UP,          KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT,
    KC_LCTRL,       LSFT_T(KC_MINUS),KC_EQUAL,       KC_LBRACKET,    LSFT_T(KC_RBRACKET),KC_HOME,                                                                        KC_PGUP,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_QUOTE,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_UNDS,        KC_PLUS,        KC_LCBR,        KC_RCBR,        KC_END,         KC_PGDOWN,                                      KC_DELETE,      KC_PGDOWN,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,                                                                                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_HYPR,        KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_MEH,
                                                                                    KC_TRANSPARENT, KC_LSHIFT,      KC_TRANSPARENT, LSFT(KC_LGUI),  LGUI(KC_LCTRL), LGUI(KC_LALT)
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_BSPACE,      KC_0,           KC_9,           KC_8,           KC_7,           KC_6,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_BSLASH,      KC_P,           KC_O,           KC_I,           KC_U,           KC_Y,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    RCTL_T(KC_ENTER),KC_SCOLON,      KC_L,           KC_K,           KC_J,           KC_H,                                                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    SFT_T(KC_QUOTE),KC_SLASH,       KC_DOT,         KC_COMMA,       KC_M,           KC_N,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_RALT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    RCTL_T(KC_SPACE),GUI_T(KC_ENTER),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_6,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCREEN,     KC_TRANSPARENT, KC_PAUSE,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F2,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_INSERT,      KC_HOME,        KC_PGUP,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_F1,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DELETE,      KC_END,         KC_PGDOWN,      KC_TRANSPARENT, KC_ENTER,
    KC_LSHIFT,      KC_Z,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_UP,          KC_MS_BTN2,     KC_TRANSPARENT, RGUI(KC_RSHIFT),
    KC_LALT,        KC_LCTRL,       KC_LSHIFT,      KC_F5,          KC_F4,                                                                                                          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, RGUI(KC_RALT),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, LCTL(LGUI(LSFT(KC_LALT))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
  uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
