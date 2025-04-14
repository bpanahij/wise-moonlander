const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [_COLEMAK] = {
        // Left side
        {HSV_YELLOW}, {HSV_BLACK}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLACK}, {HSV_BLACK},  // Row 0
        {HSV_BLACK},  {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_BLACK}, // Row 1
        {HSV_BLUE}, {HSV_CORAL}, {HSV_CORAL}, {HSV_BLUE}, {HSV_BLUE}, {HSV_CORAL}, {HSV_BLACK}, // Row 2
        {HSV_BLUE}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, // Row 3
        {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, // Row 4
        {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, // Thumb cluster

        // Right side
        {HSV_BLACK}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_YELLOW}, {HSV_BLACK}, // Row 0
        {HSV_BLACK}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_BLUE}, {HSV_BLUE}, // Row 1
        {HSV_BLACK}, {HSV_CORAL}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_CORAL}, {HSV_BLUE}, // Row 2
        {HSV_CORAL}, {HSV_CORAL}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, // Row 3
        {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, // Row 4
        {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, // Thumb cluster
    },
    [_NUMPAD] = {
        // Left side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_TEAL}, {HSV_TEAL}, {HSV_TEAL}, {HSV_CORAL}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_TEAL}, {HSV_TEAL}, {HSV_TEAL}, {HSV_CORAL}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_TEAL}, {HSV_TEAL}, {HSV_TEAL}, {HSV_ORANGE},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},

        // Right side
        {HSV_BLACK}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL}, {HSV_CORAL},
        {HSV_CORAL}, {HSV_CORAL}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
    },
    [_TXT_NAV] = {
        // Left side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},

        // Right side
        {HSV_BLACK}, {HSV_GOLD}, {HSV_PINK}, {HSV_GOLD}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_CORAL}, {HSV_BLUE}, {HSV_CORAL}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLUE}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLUE}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
    },
    [_MOUSE] = {
        // Left side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},

        // Right side
        {HSV_BLACK}, {HSV_ORANGE}, {HSV_PINK}, {HSV_ORANGE}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_ORANGE}, {HSV_PINK}, {HSV_PINK}, {HSV_ORANGE}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_ORANGE}, {HSV_PINK}, {HSV_PINK}, {HSV_PINK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_PURPLE}, {HSV_GOLD}, {HSV_BLACK}, {HSV_GOLD}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLUE}, {HSV_PURPLE}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
    },
    [_APP] = {
        // Left side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_ORANGE}, {HSV_CORAL}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_ORANGE}, {HSV_BLACK}, {HSV_BLACK},

        // Right side
        {HSV_BLACK}, {HSV_CORAL}, {HSV_GREEN}, {HSV_CORAL}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_BLACK}, {HSV_GREEN}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_CORAL}, {HSV_BLACK}, {HSV_ORANGE}, {HSV_ORANGE}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_CORAL}, {HSV_AZURE}, {HSV_BLACK}, {HSV_BLACK},
    },
    [_FUNC] = {
        // Left side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_GREEN}, {HSV_GREEN}, {HSV_GREEN}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},

        // Right side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
    },
    [_KEYB] = {
        // Left side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},

        // Right side
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_GOLD}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_GOLD}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
        {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK}, {HSV_BLACK},
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
