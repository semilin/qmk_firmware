#include QMK_KEYBOARD_H

#define NAV MO(1)
#define SYM MO(2)
#define NUM MO(3)
#define OSG OSM(MOD_LGUI)
#define OSA OSM(MOD_LALT)
#define OSC OSM(MOD_LCTL)
#define OSS OSM(MOD_LSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(
        KC_F,    KC_L,    KC_H,    KC_V,    KC_Z,                        KC_QUOT, KC_W,    KC_U,    KC_O,    KC_Y,
        KC_S,    KC_R,    KC_N,    KC_T,    KC_K,                        KC_C,    KC_D,    KC_E,    KC_A,    KC_I,
        KC_X,    KC_J,    KC_B,    KC_M,    KC_Q,                        KC_P,    KC_G,    KC_COMM, KC_DOT,  KC_SLSH,
                                   KC_LCTL, KC_SPC,  MO(1),      MO(2),  OSS,     QK_REP
),
	[1] = LAYOUT_split_3x5_3(
        _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______,
        OSG,     OSA,     OSC,     OSS,     _______,                     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
        KC_ESC,  _______, _______, _______, _______,                     _______, KC_BSPC, _______, KC_TAB,  KC_ENT,
                                   _______, _______, _______,   _______, _______, _______
),
	[2] = LAYOUT_split_3x5_3(
        KC_PIPE, KC_LABK, KC_ASTR, KC_AMPR, KC_RABK,                     KC_BSLS, KC_PERC, KC_EXLM, KC_QUES, KC_COLN,
        KC_LBRC, KC_LCBR, KC_LPRN, KC_MINS, KC_PLUS,                     KC_DLR,  OSS,     OSC,     OSA,     OSG,
        KC_RBRC, KC_RCBR, KC_RPRN, KC_UNDS, KC_GRV,                      KC_AT,   KC_EQL,  KC_CIRC, KC_HASH, KC_SCLN,
                                   _______, NUM,     NUM,       _______, _______, _______
),
	[3] = LAYOUT_split_3x5_3(
        _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, 
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, 
                                   _______, _______, _______,   _______, _______, _______ 
),
};
