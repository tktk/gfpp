#ifndef FGPP_DEF_WINDOW_KEY_H
#define FGPP_DEF_WINDOW_KEY_H

namespace fg {
    enum Key
    {
        KEY_INVALID = 0x0,

        KEY_SPACE = 0x20,

        KEY_EXCLAMATION,    // !
        KEY_DOUBLE_QUOTES,  // "
        KEY_NUMBER_SIGN,    // #
        KEY_DOLLAR, // $
        KEY_PARCENT,    // %
        KEY_AMPERSAND,  // &
        KEY_APOSTROPHE, // '
        KEY_PAREN_LEFT, // (
        KEY_PAREN_RIGHT,    // )
        KEY_ASTERISK,   // *
        KEY_PLUS,   // +
        KEY_COMMA,  // ,
        KEY_MINUS,  // -
        KEY_PERIOD, // .
        KEY_SLASH,  // /

        KEY_0,
        KEY_1,
        KEY_2,
        KEY_3,
        KEY_4,
        KEY_5,
        KEY_6,
        KEY_7,
        KEY_8,
        KEY_9,

        KEY_COLON,  // :
        KEY_SEMICOLON,  // ;
        KEY_LESS,   // <
        KEY_EQUAL,  // =
        KEY_GREATER,    // >
        KEY_QUESTION,   // ?
        KEY_AT, // @

        KEY_A,
        KEY_B,
        KEY_C,
        KEY_D,
        KEY_E,
        KEY_F,
        KEY_G,
        KEY_H,
        KEY_I,
        KEY_J,
        KEY_K,
        KEY_L,
        KEY_M,
        KEY_N,
        KEY_O,
        KEY_P,
        KEY_Q,
        KEY_R,
        KEY_S,
        KEY_T,
        KEY_U,
        KEY_V,
        KEY_W,
        KEY_X,
        KEY_Y,
        KEY_Z,

        KEY_BRACKET_LEFT,   // [
        KEY_BACK_SLASH, // ＼

        KEY_BRACKET_RIGHT,  // ]
        KEY_CIRCUM_FLEX,    // ^
        KEY_UNDER_SCORE,    // _
        KEY_GRAVE,  // `

        KEY_a,
        KEY_b,
        KEY_c,
        KEY_d,
        KEY_e,
        KEY_f,
        KEY_g,
        KEY_h,
        KEY_i,
        KEY_j,
        KEY_k,
        KEY_l,
        KEY_m,
        KEY_n,
        KEY_o,
        KEY_p,
        KEY_q,
        KEY_r,
        KEY_s,
        KEY_t,
        KEY_u,
        KEY_v,
        KEY_w,
        KEY_x,
        KEY_y,
        KEY_z,

        KEY_BRACE_LEFT, // {
        KEY_VERTICAL_BAR,   // |
        KEY_BRACE_RIGHT,    // }
        KEY_TILDE,  // ~

        // テンキー
        KEY_KP_SPACE = 0x1000,

        KEY_KP_EQUAL,   // =
        KEY_KP_ASTERISK,    // *
        KEY_KP_PLUS,    // +
        KEY_KP_COMMA,   // ,
        KEY_KP_MINUS,   // -
        KEY_KP_PERIOD,  // .
        KEY_KP_SLASH,   // /

        KEY_KP_0,
        KEY_KP_1,
        KEY_KP_2,
        KEY_KP_3,
        KEY_KP_4,
        KEY_KP_5,
        KEY_KP_6,
        KEY_KP_7,
        KEY_KP_8,
        KEY_KP_9,

        // 特殊キー
        KEY_LEFT = 0x2000,
        KEY_UP,
        KEY_RIGHT,
        KEY_DOWN,

        KEY_PAGE_UP,
        KEY_PAGE_DOWN,

        KEY_HOME,
        KEY_END,

        KEY_SHIFT_LEFT,
        KEY_SHIFT_RIGHT,

        KEY_CONTROL_LEFT,
        KEY_CONTROL_RIGHT,

        KEY_ALT_LEFT,
        KEY_ALT_RIGHT,

        KEY_SUPER_LEFT,
        KEY_SUPER_RIGHT,

        KEY_BACK_SPACE,
        KEY_TAB,
        KEY_ENTER,
        KEY_ESCAPE,
        KEY_DELETE,
        KEY_INSERT,
        KEY_BREAK,
        KEY_CAPS_LOCK,
        KEY_NUM_LOCK,
        KEY_SCROLL_LOCK,
        KEY_PRINT_SCREEN,
        KEY_PAUSE,
        KEY_APPLICATION,
        KEY_BEGIN,
        KEY_EISU,   // 英数
        KEY_MUHENKAN,   // 無変換
        KEY_HENKAN, // 変換
        KEY_HIRAGANA_KATAKANA,  // ひらがな/カタカナ
        KEY_ZENKAKU_HANKAKU,    // 全角/半角

        // テンキーの特殊キー
        KEY_KP_LEFT = 0x3000,
        KEY_KP_UP,
        KEY_KP_RIGHT,
        KEY_KP_DOWN,

        KEY_KP_PAGE_UP,
        KEY_KP_PAGE_DOWN,

        KEY_KP_HOME,
        KEY_KP_END,

        KEY_KP_TAB,
        KEY_KP_ENTER,
        KEY_KP_DELETE,
        KEY_KP_INSERT,
        KEY_KP_BEGIN,

        // ファンクションキー
        KEY_F1 = 0x4000,
        KEY_F2,
        KEY_F3,
        KEY_F4,
        KEY_F5,
        KEY_F6,
        KEY_F7,
        KEY_F8,
        KEY_F9,
        KEY_F10,
        KEY_F11,
        KEY_F12,
    };
}

#endif  // FGPP_DEF_WINDOW_KEY_H
