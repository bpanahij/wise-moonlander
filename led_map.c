const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [_COLEMAK] = {
        // Left side
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD},  // Row 0
        {HSV_GOLD},  {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 1
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 2
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 3
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 4
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Thumb cluster

        // Right side
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 0
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 1
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 2
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 3
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Row 4
        {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, {HSV_GOLD}, // Thumb cluster
    },
    [_NUMPAD] = {
        // Left side
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},

        // Right side
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
        {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE},
    },
    [_TXT_NAV] = {
        // Left side
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},

        // Right side
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
    },
    [_MOUSE] = {
        // Left side
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},

        // Right side
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
        {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE}, {HSV_PURPLE},
    },
    [_APP] = {
        // Left side
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},

        // Right side
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
        {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN},
    },
    [_FUNC] = {
        // Left side
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},

        // Right side
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
        {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW}, {HSV_YELLOW},
    },
    [_KEYB] = {
        // Left side
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},

        // Right side
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
        {HSV_RED}, {HSV_RED}, {HSV_RED}, {HSV_RED},
    }
};


void set_layer_color(int layer) {
    for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
        HSV hsv = {
            .h = pgm_read_byte(&ledmap[layer][i][0]),
            .s = pgm_read_byte(&ledmap[layer][i][1]),
            .v = pgm_read_byte(&ledmap[layer][i][2]),
        };
        if (!hsv.h && !hsv.s && !hsv.v) {
            rgb_matrix_set_color( i, 0, 0, 0 );
        } else {
            RGB rgb = hsv_to_rgb( hsv );
            float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
            rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
        }
    }
}

bool rgb_matrix_indicators_user(void) {
    if (keyboard_config.disable_layer_led) { return false; }
    switch (biton32(layer_state)) {
        case _COLEMAK:
            set_layer_color(_COLEMAK);
            break;
        case _NUMPAD:
            set_layer_color(_NUMPAD);
            break;
        case _TXT_NAV:
            set_layer_color(_TXT_NAV);
            break;
        case _MOUSE:
            set_layer_color(_MOUSE);
            break;
        case _APP:
            set_layer_color(_APP);
            break;
        case _FUNC:
            set_layer_color(_FUNC);
            break;
        case _KEYB:
            set_layer_color(_KEYB);
            break;
        default:
            break;
    }
    return true;
}
