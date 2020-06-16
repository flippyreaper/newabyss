#include QMK_KEYBOARD_H
#define X_PLUS KC_1
#define X_ES KC_2
#define X_SS KC_3
#define X_CC KC_4
#define X_RR KC_5
#define X_ZZ KC_6
#define X_YY KC_7
#define X_AA KC_8
#define X_II KC_9
#define X_EE KC_0

#define X_MINS KC_SLSH
#define X_CARK KC_EQL
#define X_BSLS RALT(KC_Q)
#define X_LBRC RALT(KC_F)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_60_tsangan_hhkb(
		KC_ESC,	    X_PLUS,     X_ES,       X_SS,       X_CC,       X_RR,       X_ZZ,       X_YY,       X_AA,       X_II,       X_EE,       X_MINS,     X_CARK,     X_BSLS,     KC_X,
		KC_TAB,		KC_Q,		KC_W,		KC_E,		KC_R,		KC_T,		KC_Y,		KC_U,		KC_I,		KC_O,		KC_P,		KC_LBRC,	KC_RBRC,	KC_BSPC,
		KC_CAPS,	KC_A,		KC_S,		KC_D,		KC_F,		KC_G,		KC_H,		KC_J,		KC_K,		KC_L,		KC_SCLN,	KC_QUOT, 				KC_ENT,
		KC_LSFT,	KC_Z,		KC_X,		KC_C,		KC_V,		KC_B,		KC_N,		KC_M,		KC_COMM,	KC_DOT,		KC_SLSH,				KC_RSFT,	MO(1),
		KC_LCTL, 	KC_LGUI,	KC_LALT,											KC_SPC,													KC_RALT,    KC_RGUI, 	KC_RCTL
	),
	[1] = LAYOUT_60_tsangan_hhkb(
		KC_ESC,		KC_F1,		KC_F2,		KC_F3,		KC_F4,		KC_F5,		KC_F6,		KC_F7,		KC_F8,		KC_F9,		KC_F10,		KC_F11,		KC_F12,		KC_TRNS,	RESET,
		KC_TRNS,	RGB_TOG,	RGB_MOD,	RGB_HUI,	RGB_HUD,	RGB_SAI,	RGB_SAD,	RGB_VAI,	RGB_VAD,	KC_TRNS,	KC_TRNS,	KC_UP,		KC_TRNS,	KC_DEL,
		KC_TRNS,	KC_MPLY,	KC_MPRV,	KC_MNXT,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_LEFT,	KC_RIGHT, 				KC_TRNS,
		KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_TRNS,	KC_DOWN,				KC_TRNS,	KC_TRNS,
		KC_TRNS, 	KC_TRNS,	KC_TRNS,											KC_TRNS,												KC_TRNS,    KC_TRNS, 	KC_TRNS
	)
};
