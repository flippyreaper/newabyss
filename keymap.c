#include QMK_KEYBOARD_H

/*Keycodes I guess*/
//Cesky znaky
#define CZ_PLUS KC_1
#define CZ_ES KC_2
#define CZ_SS KC_3
#define CZ_CC KC_4
#define CZ_RR KC_5
#define CZ_ZZ KC_6
#define CZ_YY KC_7
#define CZ_AA KC_8
#define CZ_II KC_9
#define CZ_EE KC_0

//FN
#define CZ_LSFT MO(1)
#define CZ_NUMB MO(3)
#define CZ_CZ   MO(2)
#define CZ_FN   LT(9, KC_TAB)
#define CZ_SYS  MO(9)


//Default
#define CZ_MINS KC_SLSH
#define CZ_CARK KC_EQL
#define CZ_LBRC RALT(KC_F)
#define CZ_RBRC RALT(KC_G)
#define CZ_SCLN KC_GRV
#define CZ_APOS LSFT(KC_BSLS)
#define CZ_BSLS RALT(KC_Q)
#define CZ_SLSH LSFT(KC_LBRC)

//Shift US
#define CZ_TILD RALT(KC_1)
#define CZ_EXLM KC_DQUO
#define CZ_AT   RALT(KC_V)
#define CZ_HASH RALT(KC_X)
#define CZ_DLR  RALT(KC_SCLN)
#define CZ_PERC KC_UNDS
#define CZ_CIRC RALT(KC_6) //Upravit delay
#define CZ_AMPR RALT(KC_C)
#define CZ_ASTR RALT(KC_SLSH)
#define CZ_LPRN LSFT(KC_RBRC)
#define CZ_RPRN KC_RBRC
#define CZ_UNDS LSFT(KC_SLSH)
#define CZ_HACK LSFT(KC_EQL)

#define CZ_LCBR RALT(KC_B)
#define CZ_RCBR RALT(KC_N)
#define CZ_COLN LSFT(KC_DOT)
#define CZ_DQT  LSFT(KC_SCLN)
#define CZ_PIPE RALT(KC_W)
#define CZ_LABK RALT(KC_COMM)
#define CZ_RABK RALT(KC_DOT)
#define CZ_QUES LSFT(KC_COMM)


//number layer
#define CZ_EQLS KC_MINS
#define CZ_USHC KC_LBRC
#define CZ_USKR KC_SCLN




const uint16_t PROGMEM keymaps[][MATRICZ_ROWS][MATRICZ_COLS] = {
	//Default Layer
	//Layer 0
	
	[0] = LAYOUT_60_tsangan_hhkb(
		KC_ESC,	    CZ_PLUS,     CZ_ES,       CZ_SS,       CZ_CC,       CZ_RR,       CZ_ZZ,       CZ_YY,       CZ_AA,       CZ_II,       CZ_EE,       CZ_MINS,     CZ_CARK,     CZ_BSLS,     KC_X,
		CZ_FN,       KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       CZ_LBRC,     CZ_RBRC,     KC_BSPC,
		MO(1),      KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       CZ_SCLN,     CZ_APOS,                 KC_ENT,
		MO(1),      KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     CZ_SLSH,                 KC_RSFT,    MO(1),
		KC_LCTL, 	KC_LGUI,	KC_LALT,										KC_SPC,													    KC_RALT,    KC_RGUI, 	KC_RCTL
	),
	
	
	//Shift + US layer
	//Shift
	//Layer 1
	
	[1] = LAYOUT_60_tsangan_hhkb(
		CZ_TILD,     CZ_EXLM,     CZ_AT,       CZ_HASH,     CZ_DLR,      CZ_PERC,     CZ_CIRC,     CZ_AMPR,     CZ_ASTR,     CZ_LPRN,     CZ_RPRN,     CZ_UNDS,     CZ_HACK,     CZ_PIPE,     KC_X,
		_______,    LSFT(KC_Q), LSFT(KC_W), LSFT(KC_E), LSFT(KC_R), LSFT(KC_T), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_I), LSFT(KC_O), LSFT(KC_P), CZ_LCBR,     CZ_RCBR,     KC_BSPC,
		_______,    LSFT(KC_A), LSFT(KC_S), LSFT(KC_D), LSFT(KC_F), LSFT(KC_G), LSFT(KC_H), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), CZ_COLN,     CZ_DQT,                  KC_ENT, 
		_______,    LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), LSFT(KC_B), LSFT(KC_N), LSFT(KC_M), CZ_LABK,     CZ_RABK,     CZ_QUES,                 KC_RSFT,    _______,
		KC_TRNS, 	KC_TRNS,	KC_TRNS,											KC_TRNS,												KC_TRNS,    KC_TRNS, 	KC_TRNS
	)
};
