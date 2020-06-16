#include QMK_KEYBOARD_H
#include "config.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//Default Layer
	//Layer 0
	
	[0] = LAYOUT_60_tsangan_hhkb(
		KC_ESC,	    X_PLUS,     X_ES,       X_SS,       X_CC,       X_RR,       X_ZZ,       X_YY,       X_AA,       X_II,       X_EE,       X_MINS,     X_CARK,     X_BSLS,     KC_X,
		X_FN,       KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       X_LBRC,     X_RBRC,     KC_BSPC,
		MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       X_SCLN,     X_APOS,                 KC_ENT,
		MO(1),      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     X_SLSH,                 KC_RSFT,    MO(1),
		KC_LCTL, 	KC_LGUI,	KC_LALT,										KC_SPC,													    KC_RALT,    KC_RGUI, 	KC_RCTL
	),
	
	
	//Shift + US layer
	//Shift
	//Layer 1
	
	[1] = LAYOUT_60_tsangan_hhkb(
		X_TILD,     X_EXLM,     X_AT,       X_HASH,     X_DLR,      X_PERC,     X_CIRC,     X_AMPR,     X_ASTR,     X_LPRN,     X_RPRN,     X_UNDS,     X_HACK,     X_PIPE,     KC_X,
		_______,    LSFT(KC_Q), LSFT(KC_W), LSFT(KC_E), LSFT(KC_R), LSFT(KC_T), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_I), LSFT(KC_O), LSFT(KC_P), X_LCBR,     X_RCBR,     KC_BSPC,
		_______,    LSFT(KC_A), LSFT(KC_S), LSFT(KC_D), LSFT(KC_F), LSFT(KC_G), LSFT(KC_H), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), X_COLN,     X_DQT,                  KC_ENT, 
		_______,    LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), LSFT(KC_B), LSFT(KC_N), LSFT(KC_M), X_LABK,     X_RABK,     X_QUES,                 KC_RSFT,    _______,
		KC_TRNS, 	KC_TRNS,	KC_TRNS,											KC_TRNS,												KC_TRNS,    KC_TRNS, 	KC_TRNS
	)
};
