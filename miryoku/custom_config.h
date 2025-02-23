/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */


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
#define SI_CEDL GRAVE // ¸ (dead)
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
#define SI_HASH LS(BACKSLASH)    // #
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
#define SI_TILDE RA(SI_N1) // ~
#define SI_CARN RA(SI_N2)  // ˇ (dead)
#define SI_CARET RA(SI_N3) // ^ (dead)
#define SI_BREV RA(SI_N4)  // ˘ (dead)
#define SI_RNGA RA(SI_N5)  // ° (dead)
#define SI_OGON RA(SI_N6)  // ˛ (dead)
#define SI_GRAVE RA(SI_N7) // `
#define SI_DOTA RA(SI_N8)  // ˙ (dead)
#define SI_ACUT RA(SI_N9)  // ´ (dead)
#define SI_DACU RA(SI_N0)  // ˝ (dead)
// Row 2 (only AltGr)
#define SI_BSLH RA(SI_Q)   // (backslash)
#define SI_PIPE RA(SI_W)   // |
#define SI_EURO RA(SI_E)   // €
#define SI_DIV RA(SI_UE) // ÷
#define SI_MUL RA(SI_DSTR) // ×
// Row 3 (only AltGr)
#define SI_LBKT RA(SI_F)    // [
#define SI_RBKT RA(SI_G)    // ]
#define SI_LLST RA(SI_K)    // ł
#define SI_CLST RA(SI_L)    // Ł
#define SI_SS RA(SI_AE)   // ß
#define SI_CURR RA(SI_ZCAR) // ¤
// Row 4 (only AltGr)
#define SI_AT RA(SI_V)   // @
#define SI_LBRC RA(SI_B) // {
#define SI_RBRC RA(SI_N) // }
#define SI_SECT RA(SI_M) // §
// special keys
#define SI_LGUI LALT	// super
#define SI_LALT LGUI	// left alt



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
&kp SI_Q,             &kp SI_W,             &kp SI_F,             &kp SI_P,             &kp SI_B,             &kp SI_J,             &kp SI_L,             &kp SI_U,             &kp SI_Y,             &kp SI_SQT,           \
U_MT(SI_LGUI, SI_A),     U_MT(SI_LALT, SI_R),     U_MT(LCTRL, SI_S),    U_MT(LSHFT, SI_T),    &kp SI_G,             &kp SI_M,             U_MT(LSHFT, SI_N),    U_MT(LCTRL, SI_E),    U_MT(SI_LALT, SI_I),     U_MT(SI_LGUI, SI_O),     \
U_LT(U_BUTTON, SI_Z), U_MT(RALT, SI_X),     &kp SI_C,             &kp SI_D,             &kp SI_V,             &kp SI_K,             &kp SI_H,             &kp SI_COMMA,         U_MT(RALT, SI_DOT),   U_LT(U_BUTTON, SI_FSLH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_MOUSE \
U_MT(LA(LS(Q)), LA(Q)),     U_MT(LA(LS(W)), LA(W)),     U_MT(LA(LS(E)), LA(E)),     U_MT(LA(LS(R)), LA(R)),     U_MT(LA(LS(T)), LA(T)),     U_MT(LA(LS(Z)), LA(Z)),     U_MT(LA(LS(U)), LA(U)),     U_MT(LA(LS(I)), LA(I)),     U_MT(LA(LS(O)), LA(O)),     U_MT(LA(LS(P)), LA(P)),    \
U_MT(LA(LS(A)), LA(A)),     U_MT(LA(LS(S)), LA(S)),     U_MT(LA(LS(D)), LA(D)),     U_MT(LA(LS(F)), LA(F)),     U_MT(LA(LS(G)), LA(G)),     U_MT(LA(LS(H)), LA(H)),     U_MT(LA(LS(J)), LA(J)),     U_MT(LA(LS(K)), LA(K)),     U_MT(LA(LS(L)), LA(L)),     U_MT(LA(LS(RA(P))), LA(RA(P))),    \
U_MT(LA(LS(Y)), LA(Y)),     U_MT(LA(LS(X)), LA(X)),     U_MT(LA(LS(C)), LA(C)),     U_MT(LA(LS(V)), LA(V)),     U_MT(LA(LS(B)), LA(B)),     U_MT(LA(LS(N)), LA(N)),     U_MT(LA(LS(M)), LA(M)),     U_MT(LA(SEMI), LA(COMMA)),     U_MT(LA(PERIOD), LA(COLON)),     U_MT(LA(UNDERSCORE), LA(MINUS)),    \
U_NP,              U_NP,              U_NA, U_NA, U_NA, U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
