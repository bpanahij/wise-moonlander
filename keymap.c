#include QMK_KEYBOARD_H

#include "version.h"

// Include tap dance feature
#include "process_tap_dance.h"

// Include custom header file for definitions
#include "wise_moonlander.h"

enum custom_keycodes {
    RGB_SLD = ML_SAFE_RANGE,
    ESC_COLON = SAFE_RANGE,
};

enum moonlander_layers {
    _COLEMAK=0,
    _NUMPAD,
    _TXT_NAV,
    _MOUSE,
    _APP,
    _FUNC,
    _KEYB,
};

enum {
    GUI_APP,
    ESC_I,
};

typedef struct {
    bool is_press_action;
    int state;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD = 2,
    DOUBLE_SINGLE_TAP = 3,
    DOUBLE_HOLD = 4,
};

static tap ql_tap_state = {
    .is_press_action = true,
    .state = 0
};

int cur_dance (tap_dance_state_t *state);
void gui_app_finished(tap_dance_state_t *state, void *user_data);
void gui_app_reset(tap_dance_state_t *state, void *user_data);

int cur_dance(tap_dance_state_t *state) {
    if(state->count == 1) {
        if (state->interrupted || !state->pressed) {
            return SINGLE_TAP ;
        }
        else {
            return SINGLE_HOLD;
        }
    }
    if(state->count == 2) {
        if (state->interrupted || !state->pressed) {
            return DOUBLE_SINGLE_TAP ;
        }
        else {
            return DOUBLE_HOLD;
        }
    }
    else {
        return 3;
    }
}

// ================================================
// ================================================
// GUI_APP key

void gui_app_finished(tap_dance_state_t *state, void *user_data) {
    ql_tap_state.state = cur_dance(state);
    switch(ql_tap_state.state) {
        case SINGLE_TAP:
            register_mods(MOD_BIT(KC_LSFT));
            break;
        case SINGLE_HOLD:
            register_mods(MOD_BIT(KC_LSFT));
            break;
        case DOUBLE_SINGLE_TAP:
            tap_code16(KC_LPRN);
            break;
        case DOUBLE_HOLD:
            layer_on(_APP);
            break;
    }
}

void gui_app_reset(tap_dance_state_t *state, void *user_data) {
    switch(ql_tap_state.state) {
        case SINGLE_TAP:
            unregister_mods(MOD_BIT(KC_LSFT));
            break;
        case SINGLE_HOLD:
            unregister_mods(MOD_BIT(KC_LSFT));
            break;
        case DOUBLE_SINGLE_TAP:
            break;
        case DOUBLE_HOLD:
            layer_off(_APP);
            break;
    }
    ql_tap_state.state = 0;
}
// ================================================
//

tap_dance_action_t tap_dance_actions[] = {
    [GUI_APP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, gui_app_finished, gui_app_reset)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_COLEMAK] = LAYOUT_moonlander(
//    ┌──────┬────┬────┬───────────┬───────┬─────┬──────┐                 ┌──────┬──────────┬────┬────┬────┬────┬──────┐
//    │ esc  │ no │ no │ FNC_MINUS │  no   │ no  │  no  │                 │  no  │    no    │ `  │ /  │ \  │ %  │ bspc │
//    ├──────┼────┼────┼───────────┼───────┼─────┼──────┤                 ├──────┼──────────┼────┼────┼────┼────┼──────┤
//    │  no  │ q  │ w  │     f     │   p   │  g  │  no  │                 │  no  │    j     │ l  │ u  │ y  │ =  │  :   │
//    ├──────┼────┼────┼───────────┼───────┼─────┼──────┤                 ├──────┼──────────┼────┼────┼────┼────┼──────┤
//    │ lctl │ a  │ r  │  MOUSE_S  │ TXT_T │  d  │  no  │                 │  no  │    h     │ n  │ e  │ i  │ o  │  '   │
//    ├──────┼────┼────┼───────────┼───────┼─────┼──────┘                 └──────┼──────────┼────┼────┼────┼────┼──────┤
//    │ lsft │ z  │ x  │     c     │   v   │  b  │                               │    k     │ m  │ ,  │ .  │ /  │  !   │
//    ├──────┼────┼────┼───────────┼───────┼─────┼──────┐                 ┌──────┼──────────┼────┼────┼────┼────┼──────┤
//    │ lalt │ no │ no │    no     │  no   │     │  no  │                 │ del  │          │ no │ no │ no │ no │  no  │
//    └──────┴────┴────┴───────────┴───────┼─────┼──────┼──────┐   ┌──────┼──────┼──────────┼────┴────┴────┴────┴──────┘
//                                         │ spc │ lsft │ pscr │   │ caps │ lgui │ CTL_ENTR │
//                                         └─────┴──────┴──────┘   └──────┴──────┴──────────┘
  KC_ESC  , KC_NO , KC_NO , FNC_MINUS , KC_NO , KC_NO  , KC_NO   ,                         KC_NO   , KC_NO    , KC_GRAVE , KC_SLASH , KC_BSLS , KC_PERC  , KC_BSPC,
  KC_NO   , KC_Q  , KC_W  , KC_F      , KC_P  , KC_G   , KC_NO   ,                         KC_NO   , KC_J     , KC_L     , KC_U     , KC_Y    , KC_EQL   , KC_COLN,
  KC_LCTL , KC_A  , KC_R  , MOUSE_S   , TXT_T , KC_D   , KC_NO   ,                         KC_NO   , KC_H     , KC_N     , KC_E     , KC_I    , KC_O     , KC_QUOT,
  KC_LSFT , KC_Z  , KC_X  , KC_C      , KC_V  , KC_B   ,                                             KC_K     , KC_M     , KC_COMM  , KC_DOT  , KC_SLASH , KC_EXLM,
  KC_LALT , KC_NO , KC_NO , KC_NO     , KC_NO ,          KC_NO   ,                         KC_DEL  ,            KC_NO    , KC_NO    , KC_NO   , KC_NO    , KC_NO  ,
                                                KC_SPC , KC_LSFT , KC_PSCR ,     KC_CAPS , KC_LGUI , CTL_ENTR
),

[_NUMPAD] = LAYOUT_moonlander(
//    ┌────┬────┬────┬───┬────┬─────┬─────┐               ┌─────┬─────┬────┬────┬────┬────┬──────┐
//    │ no │ no │ no │ 0 │ no │  *  │ no  │               │ no  │ no  │ `  │ /  │ \  │ %  │ bspc │
//    ├────┼────┼────┼───┼────┼─────┼─────┤               ├─────┼─────┼────┼────┼────┼────┼──────┤
//    │ no │ no │ 7  │ 8 │ 9  │  +  │ no  │               │ no  │  @  │ &  │ [  │ ]  │ =  │  ;   │
//    ├────┼────┼────┼───┼────┼─────┼─────┤               ├─────┼─────┼────┼────┼────┼────┼──────┤
//    │ no │ no │ 4  │ 5 │ 6  │  -  │ no  │               │ no  │  $  │ #  │ (  │ )  │ ~  │  '   │
//    ├────┼────┼────┼───┼────┼─────┼─────┘               └─────┼─────┼────┼────┼────┼────┼──────┤
//    │ no │ no │ 1  │ 2 │ 3  │  0  │                           │  ^  │ _  │ no │ no │ no │  no  │
//    ├────┼────┼────┼───┼────┼─────┼─────┐               ┌─────┼─────┼────┼────┼────┼────┼──────┤
//    │ no │ no │ no │ 0 │ no │     │  .  │               │ no  │     │ no │ no │ no │ no │  no  │
//    └────┴────┴────┴───┴────┼─────┼─────┼─────┐   ┌─────┼─────┼─────┼────┴────┴────┴────┴──────┘
//                            │     │     │     │   │     │     │     │
//                            └─────┴─────┴─────┘   └─────┴─────┴─────┘
  KC_NO , KC_NO , KC_NO , KC_0 , KC_NO , KC_ASTR , KC_NO   ,                         KC_NO   , KC_NO   , KC_GRAVE , KC_SLASH , KC_BSLS , KC_PERC , KC_BSPC ,
  KC_NO , KC_NO , KC_7  , KC_8 , KC_9  , KC_PLUS , KC_NO   ,                         KC_NO   , KC_AT   , KC_AMPR  , KC_LBRC  , KC_RBRC , KC_EQL  , KC_SCLN ,
  KC_NO , KC_NO , KC_4  , KC_5 , KC_6  , KC_MINS , KC_NO   ,                         KC_NO   , KC_DLR  , KC_HASH  , KC_LPRN  , KC_RPRN , KC_TILD , KC_QUOTE,
  KC_NO , KC_NO , KC_1  , KC_2 , KC_3  , KC_0    ,                                             KC_CIRC , KC_UNDS  , KC_NO    , KC_NO   , KC_NO   , KC_NO   ,
  KC_NO , KC_NO , KC_NO , KC_0 , KC_NO ,           KC_DOT  ,                         KC_NO   ,           KC_NO    , KC_NO    , KC_NO   , KC_NO   , KC_NO   ,
                                         _______ , _______ , _______ ,     _______ , _______ , _______
),

[_TXT_NAV] = LAYOUT_moonlander(
//    ┌────┬────┬────┬────┬────┬────┬────┐             ┌────┬─────────┬───────────┬────────────────┬─────────────┬────┬────┐
//    │ no │ no │ no │ no │ no │ no │ no │             │ no │   no    │ www_back  │ www_favourites │ www_forward │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┤             ├────┼─────────┼───────────┼────────────────┼─────────────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │ no │             │ no │ pAGE_UP │ LSFT(tab) │       up       │     tab     │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┤             ├────┼─────────┼───────────┼────────────────┼─────────────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │ no │             │ no │  pgdn   │   left    │      down      │    rght     │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┘             └────┼─────────┼───────────┼────────────────┼─────────────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │                       │   no    │    no     │      down      │     no      │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┐             ┌────┼─────────┼───────────┼────────────────┼─────────────┼────┼────┤
//    │ no │ no │ no │ no │ no │    │ no │             │ no │         │    no     │       no       │     no      │ no │ no │
//    └────┴────┴────┴────┴────┼────┼────┼────┐   ┌────┼────┼─────────┼───────────┴────────────────┴─────────────┴────┴────┘
//                             │ no │ no │ no │   │ no │ no │   no    │
//                             └────┴────┴────┘   └────┴────┴─────────┘
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO , KC_NO      , KC_WWW_BACK  , KC_WWW_FAVORITES , KC_WWW_FORWARD , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO , KC_PAGE_UP , LSFT(KC_TAB) , KC_UP            , KC_TAB         , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO , KC_PGDN    , KC_LEFT      , KC_DOWN          , KC_RGHT        , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                                     KC_NO      , KC_NO        , KC_DOWN          , KC_NO          , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,         KC_NO ,                     KC_NO ,              KC_NO        , KC_NO            , KC_NO          , KC_NO , KC_NO,
                                          KC_NO , KC_NO , KC_NO ,     KC_NO , KC_NO , KC_NO
),

[_MOUSE] = LAYOUT_moonlander(
//    ┌────┬────┬────┬────┬────┬────┬────┐             ┌──────┬────────────┬─────────┬──────┬─────────┬────┬────┐
//    │ no │ no │ no │ no │ no │ no │ no │             │  no  │     no     │  wh_l   │ btn3 │  wh_r   │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┤             ├──────┼────────────┼─────────┼──────┼─────────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │ no │             │  no  │    wh_u    │  btn1   │ ms_u │  btn2   │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┤             ├──────┼────────────┼─────────┼──────┼─────────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │ no │             │  no  │    wh_d    │  ms_l   │ ms_d │  ms_r   │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┘             └──────┼────────────┼─────────┼──────┼─────────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │                         │ rght_SHIFT │ LGUI([) │ ms_d │ LGUI(]) │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┐             ┌──────┼────────────┼─────────┼──────┼─────────┼────┼────┤
//    │ no │ no │ no │ no │ no │    │ no │             │  no  │            │   no    │  no  │   no    │ no │ no │
//    └────┴────┴────┴────┴────┼────┼────┼────┐   ┌────┼──────┼────────────┼─────────┴──────┴─────────┴────┴────┘
//                             │ no │ no │ no │   │ no │ btn2 │    btn1    │
//                             └────┴────┴────┘   └────┴──────┴────────────┘
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO   , KC_NO          , KC_MS_WH_LEFT , KC_MS_BTN3 , KC_MS_WH_RIGHT , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO   , KC_WH_U        , KC_BTN1       , KC_MS_U    , KC_BTN2        , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO   , KC_WH_D        , KC_MS_L       , KC_MS_D    , KC_MS_R        , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                                       KC_RIGHT_SHIFT , LGUI(KC_LBRC) , KC_MS_D    , LGUI(KC_RBRC)  , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,         KC_NO ,                     KC_NO   ,                  KC_NO         , KC_NO      , KC_NO          , KC_NO , KC_NO,
                                          KC_NO , KC_NO , KC_NO ,     KC_NO , KC_BTN2 , KC_BTN1
),

[_APP] = LAYOUT_moonlander(
//    ┌────┬────┬─────────┬─────────┬─────────┬────┬──────┐             ┌──────┬─────────┬──────────┬─────────┬─────────┬────┬────┐
//    │ no │ no │   no    │ LALT(0) │   no    │ no │  no  │             │  no  │   no    │ PREV_TAB │ LALT(q) │ NXT_TAB │ no │ no │
//    ├────┼────┼─────────┼─────────┼─────────┼────┼──────┤             ├──────┼─────────┼──────────┼─────────┼─────────┼────┼────┤
//    │ no │ no │ LALT(7) │ LALT(8) │ LALT(9) │ no │  no  │             │  no  │ VOL_UP  │   C(w)   │   no    │   no    │ no │ no │
//    ├────┼────┼─────────┼─────────┼─────────┼────┼──────┤             ├──────┼─────────┼──────────┼─────────┼─────────┼────┼────┤
//    │ no │ no │ LALT(4) │ LALT(5) │ LALT(6) │ no │  no  │             │  no  │ VOL_DN  │    e     │    i    │   no    │ no │ no │
//    ├────┼────┼─────────┼─────────┼─────────┼────┼──────┘             └──────┼─────────┼──────────┼─────────┼─────────┼────┼────┤
//    │ no │ no │ LALT(1) │ LALT(2) │ LALT(3) │ no │                           │   no    │    no    │   no    │   no    │ no │ no │
//    ├────┼────┼─────────┼─────────┼─────────┼────┼──────┐             ┌──────┼─────────┼──────────┼─────────┼─────────┼────┼────┤
//    │ no │ no │   no    │   no    │   no    │    │  no  │             │  no  │         │    no    │   no    │   no    │ no │ no │
//    └────┴────┴─────────┴─────────┴─────────┼────┼──────┼────┐   ┌────┼──────┼─────────┼──────────┴─────────┴─────────┴────┴────┘
//                                            │ no │ lsft │ no │   │ no │ lgui │ PLAY_PS │
//                                            └────┴──────┴────┘   └────┴──────┴─────────┘
  KC_NO , KC_NO , KC_NO      , LALT(KC_0) , KC_NO      , KC_NO , KC_NO   ,                     KC_NO   , KC_NO   , PREV_TAB , LALT(KC_Q) , NXT_TAB , KC_NO , KC_NO,
  KC_NO , KC_NO , LALT(KC_7) , LALT(KC_8) , LALT(KC_9) , KC_NO , KC_NO   ,                     KC_NO   , VOL_UP  , C(KC_W)  , KC_NO      , KC_NO   , KC_NO , KC_NO,
  KC_NO , KC_NO , LALT(KC_4) , LALT(KC_5) , LALT(KC_6) , KC_NO , KC_NO   ,                     KC_NO   , VOL_DN  , KC_E     , KC_I       , KC_NO   , KC_NO , KC_NO,
  KC_NO , KC_NO , LALT(KC_1) , LALT(KC_2) , LALT(KC_3) , KC_NO ,                                         KC_NO   , KC_NO    , KC_NO      , KC_NO   , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO      , KC_NO      , KC_NO      ,         KC_NO   ,                     KC_NO   ,           KC_NO    , KC_NO      , KC_NO   , KC_NO , KC_NO,
                                                         KC_NO , KC_LSFT , KC_NO ,     KC_NO , KC_LGUI , PLAY_PS
),

[_FUNC] = LAYOUT_moonlander(
//    ┌────┬────┬─────┬─────┬─────┬────┬────┐             ┌────┬────┬────┬────┬────┬────┬────┐
//    │ no │ no │ f13 │ f14 │ f15 │ no │ no │             │ no │ no │ no │ no │ no │ no │ no │
//    ├────┼────┼─────┼─────┼─────┼────┼────┤             ├────┼────┼────┼────┼────┼────┼────┤
//    │ no │ no │ f10 │ f11 │ f12 │ no │ no │             │ no │ no │ no │ no │ no │ no │ no │
//    ├────┼────┼─────┼─────┼─────┼────┼────┤             ├────┼────┼────┼────┼────┼────┼────┤
//    │ no │ no │ f7  │ f8  │ f9  │ no │ no │             │ no │ no │ no │ no │ no │ no │ no │
//    ├────┼────┼─────┼─────┼─────┼────┼────┘             └────┼────┼────┼────┼────┼────┼────┤
//    │ no │ no │ f4  │ f5  │ f6  │ no │                       │ no │ no │ no │ no │ no │ no │
//    ├────┼────┼─────┼─────┼─────┼────┼────┐             ┌────┼────┼────┼────┼────┼────┼────┤
//    │ no │ no │ f1  │ f2  │ f3  │    │ no │             │ no │    │ no │ no │ no │ no │ no │
//    └────┴────┴─────┴─────┴─────┼────┼────┼────┐   ┌────┼────┼────┼────┴────┴────┴────┴────┘
//                                │ no │ no │ no │   │ no │ no │ no │
//                                └────┴────┴────┘   └────┴────┴────┘
  KC_NO , KC_NO , KC_F13 , KC_F14 , KC_F15 , KC_NO , KC_NO ,                     KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_F10 , KC_F11 , KC_F12 , KC_NO , KC_NO ,                     KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_F7  , KC_F8  , KC_F9  , KC_NO , KC_NO ,                     KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_F4  , KC_F5  , KC_F6  , KC_NO ,                                     KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_F1  , KC_F2  , KC_F3  ,         KC_NO ,                     KC_NO ,         KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
                                             KC_NO , KC_NO , KC_NO ,     KC_NO , KC_NO , KC_NO
),

[_KEYB] = LAYOUT_moonlander(
//    ┌────┬────┬────┬────┬────┬────┬────┐             ┌────┬──────┬────┬────┬────┬────┬────┐
//    │ no │ no │ no │ no │ no │ no │ no │             │ no │  no  │ no │ no │ no │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┤             ├────┼──────┼────┼────┼────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │ no │             │ no │ bRIU │ no │ no │ no │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┤             ├────┼──────┼────┼────┼────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │ no │             │ no │ bRID │ no │ no │ no │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┘             └────┼──────┼────┼────┼────┼────┼────┤
//    │ no │ no │ no │ no │ no │ no │                       │  no  │ no │ no │ no │ no │ no │
//    ├────┼────┼────┼────┼────┼────┼────┐             ┌────┼──────┼────┼────┼────┼────┼────┤
//    │ no │ no │ no │ no │ no │    │ no │             │ no │      │ no │ no │ no │ no │ no │
//    └────┴────┴────┴────┴────┼────┼────┼────┐   ┌────┼────┼──────┼────┴────┴────┴────┴────┘
//                             │ no │ no │ no │   │ no │ no │  no  │
//                             └────┴────┴────┘   └────┴────┴──────┘
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO , KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO , KC_BRIU , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                     KC_NO , KC_BRID , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,                                     KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
  KC_NO , KC_NO , KC_NO , KC_NO , KC_NO ,         KC_NO ,                     KC_NO ,           KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,
                                          KC_NO , KC_NO , KC_NO ,     KC_NO , KC_NO , KC_NO
)
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MOUSE_S:
            return TAPPING_TERM + 50;
        case TXT_T:
            return TAPPING_TERM + 50;
        case NC_SPACE:
            return TAPPING_TERM + 50;
        default:
            return TAPPING_TERM;
    }
}
//extern rgb_config_t rgb_matrix_config;
void keyboard_post_init_user(void) {
    rgb_matrix_enable();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ESC_COLON:
            if (record->event.pressed) {
                SEND_STRING(SS_TAP(X_ESC) ":");
            }
            return false;
            break;
    }
    return true;
}

const uint16_t PROGMEM punctuation_combo[] = {MOUSE_S, TXT_T, COMBO_END};
const uint16_t PROGMEM app_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM leave_app_combo[] = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM num_layer[] = {KC_E, KC_N, COMBO_END};
const uint16_t PROGMEM func_layer[] = {KC_U, KC_L, COMBO_END};
const uint16_t PROGMEM keyb_layer[] = {KC_F, KC_P, COMBO_END};

combo_t key_combos[] = {
    COMBO(punctuation_combo, MO(_NUMPAD)),
    COMBO(app_combo, TG(_APP)),
    COMBO(leave_app_combo, TG(_APP)),
    COMBO(num_layer, MO(_NUMPAD)),
    COMBO(func_layer, MO(_FUNC)),
    COMBO(keyb_layer, MO(_KEYB)),
};

#include "led_map.c"
