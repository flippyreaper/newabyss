#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//Default Layer
	//Layer 0
	KEYMAP(
		KC_ESC,  X_PLUS,  X_ES,    X_SS,    X_CC,     X_RR,   X_ZZ,   X_YY,  //8
		X_FN,    KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,   KC_Y,		//7
		X_NUMB,  KC_A,    KC_S,    KC_D,    KC_F,     KC_G,   KC_H,		//7
		X_LSFT,  KC_X, KC_Z,    KC_X,    KC_C,     KC_V,   KC_B,   KC_N, //8
		KC_LCTL, KC_LGUI, KC_LALT,  KC_SPC,						//4
		
		X_AA,   X_II,    X_EE,    X_MINS,  X_CARK, KC_BSPC,			//6
		KC_U,   KC_I,   KC_O,    KC_P,    X_LBRC,  X_RBRC, 				//6
		KC_J,   KC_K,   KC_L,    X_SCLN,  X_APOS,   X_BSLS, KC_ENT, 	//7
		KC_M,   KC_COMM, KC_DOT,  X_SLSH, 	KC_LSFT,				//5
		KC_RALT, X_SYS, X_CZ),								//3
		
		
//Shift + US layer
	//Shift
	//Layer 1
	KEYMAP(
		X_TILD, X_EXLM, X_AT , X_HASH, X_DLR, X_PERC, X_CIRC, X_AMPR, //8
		_______, LSFT(KC_Q), LSFT(KC_W), LSFT(KC_E), LSFT(KC_R), LSFT(KC_T), LSFT(KC_Y), //7
		_______, LSFT(KC_A), LSFT(KC_S), LSFT(KC_D), LSFT(KC_F), LSFT(KC_G), LSFT(KC_H), //7
		_______, KC_TRNS, LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), LSFT(KC_B), LSFT(KC_N), //8
		_______, _______, _______, _______,  //4
		
		X_ASTR, X_LPRN, X_RPRN, X_UNDS, X_HACK, X_PIPE, //6
		LSFT(KC_U), LSFT(KC_I), LSFT(KC_O), LSFT(KC_P), X_LCBR, X_RCBR, //6
		LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), X_COLN, X_DQT, KC_X, KC_ENT,  
		 LSFT(KC_M), X_LABK, X_RABK, X_QUES, KC_RSFT,
		_______, _______, _______), //3
		
		
//Czech Layer
	//Layer 2
		KEYMAP(
		KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,  //8
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, 		//7
		X_NUMB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H,  		//7
		KC_LSFT, KC_X, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, //8
		KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, 				//4
		
		KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,				//6
		KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, 				//6
		KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,	//7
		KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LSFT, 					//5
		KC_RALT, X_SYS, X_CZ),	
	
	
//Second Layer / Number layer
	//Caps
	//Layer 3
		KEYMAP(
		KC_GRV, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7),  //8
		_______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______,		//7
		_______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME,		//7
		_______, _______, _______, _______, _______, _______, _______,KC_END, //8
		_______, _______, _______, _______,						//4
		
		
		LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), X_EQLS, X_PLUS, KC_DEL,			//6
		KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, X_USHC, _______,				//6
		KC_LEFT, KC_DOWN, KC_RGHT, X_USKR, _______,  _______, KC_X, 	//7
		_______, _______, _______, _______, _______,  					//5
		KC_RALT, X_SYS, X_CZ),								//3
		


//F-Row layer
	//Layer 18

	KEYMAP(
		KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, //8
		TO(0), TO(1), TO(2), TO(3), TO(4), KC_TRNS, KC_TRNS, //7
		KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, //7
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, //8
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  //4
		KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS,  //6
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, //6
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, //5
		KC_TRNS, X_SYS, KC_TRNS), //3
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}