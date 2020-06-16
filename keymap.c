#include QMK_KEYBOARD_H

/*Keycodes I guess*/
//Cesky znaky
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

//FN
#define X_LSFT MO(1)
#define X_NUMB MO(3)
#define X_CZ   MO(2)
#define X_FN   LT(9, KC_TAB)
#define X_SYS  MO(9)


//Default
#define X_MINS KC_SLSH
#define X_CARK KC_EQL
#define X_LBRC RALT(KC_F)
#define X_RBRC RALT(KC_G)
#define X_SCLN KC_GRV
#define X_APOS LSFT(KC_BSLS)
#define X_BSLS RALT(KC_Q)
#define X_SLSH LSFT(KC_LBRC)

//Shift US
#define X_TILD RALT(KC_1)
#define X_EXLM KC_DQUO
#define X_AT   RALT(KC_V)
#define X_HASH RALT(KC_X)
#define X_DLR  RALT(KC_SCLN)
#define X_PERC KC_UNDS
#define X_CIRC RALT(KC_6) //Upravit delay
#define X_AMPR RALT(KC_C)
#define X_ASTR RALT(KC_SLSH)
#define X_LPRN LSFT(KC_RBRC)
#define X_RPRN KC_RBRC
#define X_UNDS LSFT(KC_SLSH)
#define X_HACK LSFT(KC_EQL)

#define X_LCBR RALT(KC_B)
#define X_RCBR RALT(KC_N)
#define X_COLN LSFT(KC_DOT)
#define X_DQT  LSFT(KC_SCLN)
#define X_PIPE RALT(KC_W)
#define X_LABK RALT(KC_COMM)
#define X_RABK RALT(KC_DOT)
#define X_QUES LSFT(KC_COMM)


//number layer
#define X_EQLS KC_MINS
#define X_USHC KC_LBRC
#define X_USKR KC_SCLN




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
