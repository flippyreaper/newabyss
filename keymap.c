#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//Default 
	[0] = LAYOUT_60_tsangan_hhkb(
		KC_ESC,	    CZ_PLUS,    CZ_ES,      CZ_SS,      CZ_CC,      CZ_RR,      CZ_ZZ,      CZ_YY,      CZ_AA,      CZ_II,      CZ_EE,      CZ_MINS,     CZ_CARK,     CZ_BSLS,     KC_X,
		CZ_FN,      KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       CZ_LBRC,     CZ_RBRC,     KC_BSPC,
		CZ_NUMB,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       CZ_SCLN,    CZ_APOS,                  KC_ENT,
		CZ_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     CZ_SLSH,                 KC_RSFT,     CZ_SYS,
		KC_LCTL, 	KC_LGUI,	KC_LALT,										KC_SPC,												   	    KC_RALT,     KC_RGUI,     KC_RCTL
	),

	
	//Shift + US layer
	//Shift
	//Layer 1
	
	[1] = LAYOUT_60_tsangan_hhkb(
		CZ_TILD,    CZ_EXLM,    CZ_AT,      CZ_HASH,    CZ_DLR,     CZ_PERC,    CZ_CIRC,    CZ_AMPR,    CZ_ASTR,    CZ_LPRN,    CZ_RPRN,    CZ_UNDS,     CZ_HACK,     CZ_PIPE,     KC_X,
		_______,    LSFT(KC_Q), LSFT(KC_W), LSFT(KC_E), LSFT(KC_R), LSFT(KC_T), LSFT(KC_Y), LSFT(KC_U), LSFT(KC_I), LSFT(KC_O), LSFT(KC_P), CZ_LCBR,     CZ_RCBR,     KC_BSPC,
		_______,    LSFT(KC_A), LSFT(KC_S), LSFT(KC_D), LSFT(KC_F), LSFT(KC_G), LSFT(KC_H), LSFT(KC_J), LSFT(KC_K), LSFT(KC_L), CZ_COLN,    CZ_DQT,                   KC_ENT, 
		_______,    LSFT(KC_Z), LSFT(KC_X), LSFT(KC_C), LSFT(KC_V), LSFT(KC_B), LSFT(KC_N), LSFT(KC_M), CZ_LABK,    CZ_RABK,    CZ_QUES,                KC_RSFT,      _______,
		KC_TRNS, 	KC_TRNS,	KC_TRNS,											KC_TRNS,												KC_TRNS,    KC_TRNS, 	  KC_TRNS
	),
	
	

	//Czech Layer
	//Layer 2
	[2] = LAYOUT_60_tsangan_hhkb(
		KC_ESC, 	KC_1, 	KC_2, 	KC_3, 	KC_4, 	KC_5, 	KC_6, 	KC_7, 	KC_8, 		KC_9, 	KC_0, 		KC_MINS, 	KC_EQL, KC_BSLS,  KC_X,
		KC_TAB, 	KC_Q, 	KC_W, 	KC_E, 	KC_R, 	KC_T, 	KC_Y, 	KC_U, 	KC_I, 		KC_O, 	KC_P, 		KC_LBRC, 	KC_RBRC,KC_BSPC, 
		CZ_NUMB, 	KC_A, 	KC_S, 	KC_D, 	KC_F, 	KC_G, 	KC_H, 	KC_J, 	KC_K, 		KC_L, 	KC_SCLN, 	KC_QUOT, 	KC_ENT, 
		KC_LSFT,  	KC_Z, 	KC_X, 	KC_C, 	KC_V, 	KC_B, 	KC_N,	KC_M, 	KC_COMM, 	KC_DOT, KC_SLSH, 	KC_UP, 		CZ_SYS,  
		KC_TRNS, 	KC_TRNS,	KC_TRNS,											KC_TRNS,    KC_LEFT,    KC_DOWN,    KC_RIGHT), 	
		
	
	//Number layer
	//Caps
	//Layer 3
	[3] = LAYOUT_60_tsangan_hhkb(
		KC_GRV, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5), LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), CZ_EQLS, CZ_PLUS, CZ_PIPE, KC_DEL,
		_______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______,KC_PGUP, KC_UP, KC_PGDN, KC_PSCR, CZ_USHC, _______,  KC_DEL,
		_______, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_HOME,KC_LEFT, KC_DOWN, KC_RGHT, CZ_USKR, _______,  _______, KC_X, 
		_______,  _______, _______, _______, _______,KC_END, _______, _______, _______, _______, _______, _______, 
		KC_TRNS, 	KC_TRNS,	KC_TRNS,											KC_TRNS,												KC_TRNS,    KC_TRNS, 	  KC_TRNS
	),
	
	
	//Unused layer
	//Layer 4
	[4] = LAYOUT_60_tsangan_hhkb(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,   _______,    _______, _______, _______),  
		
		//Unused layer
	//Layer 5
	[5] = LAYOUT_60_tsangan_hhkb(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,   _______,    _______, _______, _______),  
		
		//Unused layer
	//Layer 6
	[6] = LAYOUT_60_tsangan_hhkb(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,   _______,    _______, _______, _______),  
		
		//Unused layer
	//Layer 7
	[7] = LAYOUT_60_tsangan_hhkb(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,   _______,    _______, _______, _______),  
		
		//Unused layer
	//Layer 8
	[8] = LAYOUT_60_tsangan_hhkb(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  
		_______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,   _______,    _______, _______, _______),  

	//F-Row layer
	//Layer 9
	[9] = LAYOUT_60_tsangan_hhkb(
		KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11, KC_F12,  KC_DEL, _______,
		 TO(0), TO(1), TO(2), TO(3), TO(4), TO(5), TO(6), TO(7), TO(8), TO(9), _______, _______, _______, _______, 
KC_CAPS, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,  _______, _______, _______, _______,  
		_______,  BL_DEC, BL_TOGG, BL_INC, BL_STEP, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______,   RESET,  _______,   _______, _______)
	
	
	
	
	
	
	
	
	
	
	
};
