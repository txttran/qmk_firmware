#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Qwerty
[0] = LAYOUT(
    // Home row
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5,                    KC_6, KC_7, KC_8,    KC_9,  KC_0,     KC_EQL,
    // Upper row
    KC_TAB,  KC_Q, KC_W, KC_E, KC_R, KC_T,                    KC_Y, KC_U, KC_I,    KC_O,   KC_P,    KC_BSLS,
    // Home row
    KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                    KC_H, KC_J, KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    // Bottom row
    KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_SPC, KC_SFTENT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_MINS,
    // Thumb row
                    KC_LGUI, LT(2, KC_NO), KC_SPC, KC_SFTENT, LT(3, KC_NO), KC_BSPC
),

// Coleman
[1] = LAYOUT(
    // Number row
    KC_GESC, KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                    KC_6, KC_7,         KC_8,         KC_9,         KC_0,         KC_EQL,
    // Upper row
    KC_TAB,  KC_Q,         KC_W,         KC_F,         KC_P,         KC_B,                    KC_J, KC_L,         KC_U,         KC_Y,         KC_SCLN,      KC_BSLS,
    // Home row
    KC_LSFT, LCTL_T(KC_A), LALT_T(KC_R), LSFT_T(KC_S), LGUI_T(KC_T), KC_G,                    KC_K, LGUI_T(KC_N), LSFT_T(KC_E), LALT_T(KC_I), LCTL_T(KC_O), KC_QUOT,
    // Bottom row
    KC_LCTL, KC_Z,         KC_X,         KC_C,         KC_D,         KC_V, KC_SPC, KC_SFTENT, KC_M, KC_H,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_MINS,
    // Thumb row
                                                    KC_LGUI, LT(2, KC_NO), KC_SPC, KC_SFTENT, LT(3, KC_NO), KC_BSPC
),



// Numpad
[2] = LAYOUT(
    // Number row
    KC_GRV,  KC_NO, KC_NO, KC_NO,    KC_NO,  KC_LT,                     KC_GT,   KC_P7, KC_P8, KC_P9, KC_NO, KC_NO,
    // Upper row
    KC_TRNS, KC_NO, KC_NO,  KC_NO,   KC_NO,  KC_LCBR,                   KC_RCBR, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO,
    // Home row
    KC_TRNS, KC_NO, KC_EQL, KC_PPLS, KC_PAST, KC_LPRN,                  KC_RPRN, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO,
    // Bottom row
    KC_TRNS, KC_NO, KC_NO,  KC_PMNS, KC_PSLS, KC_LBRC, KC_TRNS, KC_ENT, KC_RBRC, KC_BSLS, KC_P0, KC_PDOT, KC_SLSH, KC_MINS,
    // Thumb row
                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT, LT(4, KC_NO), KC_BSPC
),

// Navigation
[3] = LAYOUT(
    // Number row
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LT,                    KC_GT,   KC_PSCR,       KC_SLCK,    KC_PAUS,       KC_NO,        KC_NO,
    // Upper row
    KC_CAPS, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_LCBR,                  KC_RCBR, KC_INS,        KC_NO,      KC_NO,         KC_NO,        KC_NO,
    // Home row
    KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_LPRN,                  KC_RPRN, KC_NO,         KC_NO,      KC_NO,         LALT(KC_SPC), KC_NO,
    // Lower row
    KC_TRNS, KC_LALT, KC_CUT, KC_COPY,  KC_PSTE, KC_LBRC, KC_ENT, KC_TRNS, KC_RBRC, LCAG(KC_LEFT), LCAG(KC_M), LCAG(KC_RGHT), LGUI(KC_SPC), OSM(MOD_LALT | MOD_LGUI),
    // Thumb row
                                    KC_TRNS, LT(4, KC_NO),  KC_ENT, KC_TRNS, KC_TRNS, KC_DEL
),

// Misc
[4] = LAYOUT(
    // Number row
    KC_F12,  KC_F1,   KC_F2,    KC_F3,   KC_F4, KC_F5,               KC_F6,   KC_F7,  KC_F8,   KC_F9,  KC_F10,   KC_F11,
    // Upper row
    KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO, KC_NO,               KC_ASDN, KC_ASUP, KC_ASRP, KC_NO,  KC_NO,    KC_NO,
    // Home row
    KC_ASTG, RGB_TOG, RGB_MOD,  RGB_SPI, KC_NO, KC_NO,               KC_MUTE, KC_MPLY, KC_MFFD, KC_VOLU, KC_MNXT, KC_NO,
    // Bottom row
    CG_TOGG,   KC_NO,   RGB_RMOD, RGB_SPD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_VOLD, KC_MPRV, TG(1),
    // Thumb row
                                       KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO
)};

const rgblight_segment_t PROGMEM off_layer[]         = RGBLIGHT_LAYER_SEGMENTS(
    {0, 64, 0, 0, 0}
);
const rgblight_segment_t PROGMEM left_side_layer[]   = RGBLIGHT_LAYER_SEGMENTS(
    {0, 34, HSV_GOLD}
);
const rgblight_segment_t PROGMEM right_side_layer[]  = RGBLIGHT_LAYER_SEGMENTS(
    {34, 34, HSV_RED}
);
const rgblight_segment_t PROGMEM both_sides_layer[]  = RGBLIGHT_LAYER_SEGMENTS(
    {0, 64, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {34, 2, HSV_GREEN}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    off_layer,
    left_side_layer,
    right_side_layer,
    both_sides_layer,
    my_capslock_layer);

void keyboard_post_init_user(void) { rgblight_layers = my_rgb_layers; }

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 1));
    rgblight_set_layer_state(1, layer_state_cmp(state, 2));
    rgblight_set_layer_state(2, layer_state_cmp(state, 3));
    rgblight_set_layer_state(3, layer_state_cmp(state, 4));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(4, led_state.caps_lock);
    return true;
}