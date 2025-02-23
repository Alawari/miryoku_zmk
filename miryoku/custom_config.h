/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
/* #pragma once */

/* #include <dt-bindings/zmk/hid_usage.h> */
/* #include <dt-bindings/zmk/hid_usage_pages.h> */
/* #include <dt-bindings/zmk/modifiers.h> */
/* #include <dt-bindings/zmk/keys.h> */

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¸ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ' │ + │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Š │ Đ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Č │ Ć │ Ž │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
/* #define SI_CEDL GRAVE // ¸ (dead) */
#define SI_N1 N1      // 1
#define SI_N2 N2      // 2
#define SI_N3 N3      // 3
#define SI_N4 N4      // 4
#define SI_N5 N5      // 5
#define SI_N6 N6      // 6
#define SI_N7 N7      // 7
#define SI_N8 N8      // 8
#define SI_N9 N9      // 9
#define SI_N0 N0      // 0
#define SI_SQT EQUAL  // '
#define SI_PLUS RBKT // +
// Row 2
#define SI_Q Q       // Q
#define SI_W W       // W
#define SI_E E       // E
#define SI_R R       // R
#define SI_T T       // T
#define SI_Z Y       // Z
#define SI_U U       // U
#define SI_I I       // I
#define SI_O O       // O
#define SI_P P       // P
#define SI_UE LBKT // Ü
/* #define SI_DSTR RBKT // Đ */
// Row 3
#define SI_A A       // A
#define SI_S S       // S
#define SI_D D       // D
#define SI_F F       // F
#define SI_G G       // G
#define SI_H H       // H
#define SI_J J       // J
#define SI_K K       // K
#define SI_L L       // L
#define SI_OE SEMI // Ö
#define SI_AE SQT  // Ä
#define SI_ZCAR NUHS // Ž
// Row 4
#define SI_LT NUBS     // <
#define SI_Y Z         // Y
#define SI_X X         // X
#define SI_C C         // C
#define SI_V V         // V
#define SI_B B         // B
#define SI_N N         // N
#define SI_M M         // M
#define SI_COMMA COMMA // ,
#define SI_DOT DOT     // .
#define SI_MINUS FSLH  // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¨ │ ! │ " │ # │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ * │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SI_DIAE S(SI_CEDL)   // ¨ (dead)
#define SI_EXCL LS(SI_N1)    // !
#define SI_DQT LS(SI_N2)     // "
/* #define SI_HASH LS(SI_N3)    // # */
#define SI_HASH BACKSLASH    // #
#define SI_DLLR LS(SI_N4)    // $
#define SI_PRCNT LS(SI_N5)   // %
#define SI_AMPS LS(SI_N6)    // &
#define SI_FSLH LS(SI_N7)    // /
#define SI_LPAR LS(SI_N8)    // (
#define SI_RPAR LS(SI_N9)    // )
#define SI_EQUAL LS(SI_N0)   // =
#define SI_QMARK LS(SI_SQT)  // ?
#define SI_ASTRK LS(SI_PLUS) // *
// Row 4
#define SI_GT LS(SI_LT)       // >
#define SI_SEMI LS(SI_COMMA)  // ;
#define SI_COLON LS(SI_DOT)   // :
#define SI_UNDER LS(SI_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ~ │ ˇ │ ^ │ ˘ │ ° │ ˛ │ ` │ ˙ │ ´ │ ˝ │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ \ │ | │ € │   │   │   │   │   │   │   │ ÷ │ × │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │ [ │ ] │   │   │ ł │ Ł │   │ ß │ ¤ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ @ │ { │ } │ § │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 AltGr
#define SI_TILDE RA(SI_PLUS) // ~
#define SI_CARN RA(SI_N2)  // ˇ (dead)
#define SI_BREV RA(SI_N4)  // ˘ (dead)
#define SI_RNGA RA(SI_N5)  // ° (dead)
#define SI_OGON RA(SI_N6)  // ˛ (dead)
#define SI_GRAVE RA(SI_N7) // `
#define SI_DOTA RA(SI_N8)  // ˙ (dead)
#define SI_ACUT RA(SI_N9)  // ´ (dead)
#define SI_DACU RA(SI_N0)  // ˝ (dead)
#define SI_CARET GRAVE // ^ (dead)
// Row 2 (only AltGr)
#define SI_BSLH RA(SI_Q)   // (backslash)
#define SI_PIPE RA(SI_GT)   // |
#define SI_EURO RA(SI_E)   // €
#define SI_DIV RA(SI_UE) // ÷
/* #define SI_MUL RA(SI_DSTR) // × */
// Row 3 (only AltGr)
#define SI_LBKT RA(SI_N8)    // [
#define SI_RBKT RA(SI_N9)    // ]
#define SI_LLST RA(SI_K)    // ł
#define SI_CLST RA(SI_L)    // Ł
#define SI_SS RA(SI_AE)   // ß
#define SI_CURR RA(SI_ZCAR) // ¤
// Row 4 (only AltGr)
#define SI_AT RA(SI_Q)   // @
#define SI_LBRC RA(SI_N7) // {
#define SI_RBRC RA(SI_N0) // }
#define SI_SECT RA(SI_M) // §
// special keys
#define SI_LGUI LALT	// super
#define SI_LG LA	// super func
#define SI_LALT LGUI	// left alt
#define SI_LA LG	// left alt func



/*
 ***************************************************************************************************
 * Base layer:
 ***************************************************************************************************
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | TAB    |  q  Q  |  w  W  |  f  F  |  p  P  |  b  B  |             |  j  J  |  l  L  |  u  U  |  y  Y  |  '     |  =  +  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | EXT1   |  a  A  |  r  R  |  s  S  |  t  T  |  g  G  |             |  m  M  |  n  N  |  e  E  |  i  I  |  o  O  |  '  "  |
 *  +--------+--------+--------+--------+--------+--------+             +--------+--------+--------+--------+--------+--------+
 *  | Shift  |  z  Z  |  x  X  |  c  C  |  d  D  |  v  V  |             |  k  K  |  h  H  |  ,  <  |  .  >  |  /  ?  | Shift  |
 *  +--------+--------+--------+----+---+----+---+----+---+----+   +----+---+----+---+----+---+----+--------+--------+--------+
 *                                  | Esc    | Space   | Tab   |   | Enter  | BSPC    | DEL   |
 *                                  +--------+--------+--------+   +--------+--------+--------+
*/
#define XXX &none
#define MIRYOKU_LAYER_BASE \
&kp SI_Q,             &kp SI_W,             &kp SI_F,             &kp SI_P,             &kp SI_B,             &kp SI_J,             &kp SI_L,             &kp SI_U,             &kp SI_Y,             &kp SI_PLUS,           \
U_MT(SI_LGUI, SI_A),     U_MT(SI_LALT, SI_R),     U_MT(LCTRL, SI_S),    U_MT(LSHFT, SI_T),    &kp SI_G,             &kp SI_M,             U_MT(LSHFT, SI_N),    U_MT(LCTRL, SI_E),    U_MT(SI_LALT, SI_I),     U_MT(SI_LGUI, SI_O),     \
U_LT(U_BUTTON, SI_Z), U_MT(RALT, SI_X),     &kp SI_C,             &kp SI_D,             &kp SI_V,             &kp SI_K,             &kp SI_H,             &kp SI_COMMA,         U_MT(RALT, SI_DOT),   U_LT(U_BUTTON, SI_HASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_MOUSE, SPACE), U_LT(U_NAV, TAB), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP




/* #define MIRYOKU_LAYER_NAV \ */
/* U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \ */
/* &kp SI_LGUI,          &kp SI_LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \ */
/* U_NA,              &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \ */
/* U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP */




/* #define MIRYOKU_LAYER_MOUSE \ */
/* U_MT(SI_LG(LS(SI_Q)), SI_LG(SI_Q)),     &kp LA(W),     &kp LA(E),     &kp LA(R),     &kp LA(T),     &kp LA(SI_Z),     &kp LA(U),     &kp LA(I),     &kp LA(O),     &kp LA(P),    \ */
/*  &kp LA(A),     &kp LA(S),     &kp LA(D),     &kp LA(F),     &kp LA(G),     &kp LA(H),     &kp LA(J),     &kp LA(K),     &kp LA(L),     &kp LA(SI_OE),    \ */
/* &kp LA(SI_Y),     &kp LA(X),     &kp LA(C),    &kp LA(V),     U_MT(SI_LG(LS(SI_B)), SI_LG(SI_B)),     &kp LA(N),     U_MT(SI_LG(LS(SI_M)), SI_LG(SI_M)),     &kp LA(SI_COMMA),    &kp LA(SI_DOT),     &kp LA(SI_MINUS),    \ */
/* U_NP,              U_NP,              U_NA, U_NA, U_NA, U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP */

#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_MT(LG(LS(SI_SS)),LG(SI_SS)),     U_MT(LG(LS(SI_N7)),LG(SI_N7)),     U_MT(LG(LS(SI_N8)),LG(SI_N8)),     U_MT(LG(LS(SI_N9)),LG(SI_N9)),     U_MT(LG(LS(SI_N0)),LG(SI_N0)),            \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_MT(LG(LS(SI_SS)),LG(SI_SS)),     U_MT(LG(LS(SI_N4)),LG(SI_N4)),     U_MT(LG(LS(SI_N5)),LG(SI_N5)),     U_MT(LG(LS(SI_N6)),LG(SI_N6)),     U_MT(LG(LS(SI_CARET)),LG(SI_CARET)),     	 \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_MT(LG(LS(SI_SS)),LG(SI_SS)),     U_MT(LG(LS(SI_N1)),LG(SI_N1)),     U_MT(LG(LS(SI_N2)),LG(SI_N2)),     U_MT(LG(LS(SI_N3)),LG(SI_N3)),     U_MT(LG(LS(SI_SQT)),LG(SI_SQT)),           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                   U_NA,              U_NA,              U_NA,              U_NP,              U_NP


/* #define MIRYOKU_LAYER_NUM \ */
/* &kp SI_LBKT,     &kp SI_N7,     &kp SI_N8,     &kp SI_N9,     &kp SI_RBKT,     &kp LA(SI_SS),     &kp LA(SI_N7),     &kp LA(SI_N8),     &kp LA(SI_N9),     &kp LA(SI_N0),    \ */
/* &kp SI_SEMI,     &kp SI_N4,     &kp SI_N5,     &kp SI_N6,     &kp SI_EQUAL,    &kp LA(SI_SS),     &kp LA(SI_N4),     &kp LA(SI_N5),     &kp LA(SI_N6),     &kp LA(SI_CARET),    \ */
/* &kp SI_FSLH,     &kp SI_N1,     &kp SI_N2,     &kp SI_N3,     &kp SI_BSLH,     &kp LA(SI_SS),     &kp LA(SI_N1),     &kp LA(SI_N2),     &kp LA(SI_N3),     &kp LA(SI_SQT),    \ */
/* U_NP,            U_NP,          &kp SI_DOT,    &kp SI_N0,     &kp SI_MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP        */

#define MIRYOKU_LAYER_NUM \
&kp SI_LBKT,     &kp SI_N7,     &kp SI_N8,     &kp SI_N9,     &kp SI_RBKT,     U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SI_SEMI,     &kp SI_N4,     &kp SI_N5,     &kp SI_N6,     &kp SI_EQUAL,    U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp SI_FSLH,     &kp SI_N1,     &kp SI_N2,     &kp SI_N3,     &kp SI_BSLH,     U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,            U_NP,          &kp SI_DOT,    &kp SI_N0,     &kp SI_MINUS,    U_NA,              U_NA,              U_NA,              U_NP,              U_NP




/* #define MIRYOKU_LAYER_SYM \ */
/* &kp SI_LBRC,          &kp SI_AMPS,          &kp SI_ASTRK,         &kp SI_LPAR,          &kp SI_RBRC,          &kp LA(LS(SI_SS)),     &kp LA(LS(SI_N7)),     &kp LA(LS(SI_N8)),     &kp LA(LS(SI_N9)),     &kp LA(LS(SI_N0)),              \ */
/* &kp SI_COLON,         &kp SI_DLLR,          &kp SI_PRCNT,         &kp SI_CARET,         &kp SI_PLUS,          &kp LA(LS(SI_SS)),     &kp LA(LS(SI_N4)),     &kp LA(LS(SI_N5)),     &kp LA(LS(SI_N6)),     &kp LA(LS(SI_CARET)),           \ */
/* &kp SI_TILDE,         &kp SI_EXCL,          &kp SI_AT,            &kp SI_HASH,          &kp SI_PIPE,          &kp LA(LS(SI_SS)),     &kp LA(LS(SI_N1)),     &kp LA(LS(SI_N2)),     &kp LA(LS(SI_N3)),     &kp LA(LS(SI_SQT)),             \ */
/* U_NP,              U_NP,              &kp SI_LPAR,          &kp SI_RPAR,          &kp SI_UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP */

#define MIRYOKU_LAYER_SYM \
&kp SI_LBRC,          &kp SI_AMPS,          &kp SI_ASTRK,         &kp SI_LPAR,          &kp SI_RBRC,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SI_COLON,         &kp SI_DLLR,          &kp SI_PRCNT,         &kp SI_CARET,         &kp SI_PLUS,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp SI_TILDE,         &kp SI_EXCL,          &kp SI_AT,            &kp SI_HASH,          &kp SI_PIPE,         U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp SI_LPAR,          &kp SI_RPAR,          &kp SI_UNDER,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP
