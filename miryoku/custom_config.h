#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
* ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define DE_CIRC GRAVE  // ^ (dead)
#define DE_1    N1    // 1
#define DE_2    N2    // 2
#define DE_3    N3    // 3
#define DE_4    N4    // 4
#define DE_5    N5    // 5
#define DE_6    N6    // 6
#define DE_7    N7    // 7
#define DE_8    N8    // 8
#define DE_9    N9    // 9
#define DE_0    N0    // 0
#define DE_SS   MINUS // ß
#define DE_ACUT EQUAL  // ´ (dead)
// Row 2
#define DE_Q    Q    // Q
#define DE_W    W    // W
#define DE_E    E    // E
#define DE_R    R    // R
#define DE_T    T    // T
#define DE_Z    Y    // Z
#define DE_U    U    // U
#define DE_I    I    // I
#define DE_O    O    // O
#define DE_P    P    // P
#define DE_UDIA LBKT // Ü
#define DE_PLUS RBKT // +
// Row 3
#define DE_A    A    // A
#define DE_S    S    // S
#define DE_D    D    // D
#define DE_F    F    // F
#define DE_G    G    // G
#define DE_H    H    // H
#define DE_J    J    // J
#define DE_K    K    // K
#define DE_L    L    // L
#define DE_ODIA SEMI // Ö
#define DE_ADIA SQT // Ä
#define DE_HASH NUHS // #
// Row 4
#define DE_LABK NUBS // <
#define DE_Y    Z    // Y
#define DE_X    X    // X
#define DE_C    C    // C
#define DE_V    V    // V
#define DE_B    B    // B
#define DE_N    N    // N
#define DE_M    M    // M
#define DE_COMMA COMMA // ,
#define DE_DOT  DOT  // .
#define DE_MINS SLSH // -

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
#define DE_DEG  S(SI_CEDL)   // °
#define DE_EXLM LS(SI_N1)    // !
#define DE_DQT LS(SI_N2)    // "
#define DE_SECT LS(SI_N3)    // §
#define DE_DLR  LS(SI_N4)    // $
#define DE_PERC LS(SI_N5)    // %
#define DE_AMPR LS(SI_N6)    // &
#define DE_SLASH LS(SI_N7)    // /
#define DE_LPRN LS(SI_N8)    // (
#define DE_RPRN LS(SI_N9)    // )
#define DE_EQL  LS(SI_N0)    // =
#define DE_QUES LS(SI_SQT)   // ?
#define DE_GRV  LS(SI_PLUS)  // ` (dead)
#define DE_ASTR LS(SI_LT)    // *
#define DE_SQT LS(SI_COMMA) // '
#define DE_RABK LS(SI_DOT)   // >
#define DE_SCLN LS(SI_MINUS) // ;
#define DE_COLN S(DE_DOT)  // :
#define DE_UNDS S(DE_MINS) // _
// Row 2
#define DE_SUP2 ALGR(DE_2)    // ²
#define DE_SUP3 ALGR(DE_3)    // ³
#define DE_LCBR ALGR(DE_7)    // {
#define DE_LBRC ALGR(DE_8)    // [
#define DE_RBRC ALGR(DE_9)    // ]
#define DE_RCBR ALGR(DE_0)    // }
#define DE_BSLS ALGR(DE_SS)   // (backslash)
#define DE_AT   ALGR(DE_Q)    // @
#define DE_EURO ALGR(DE_E)    // €
#define DE_TILD ALGR(DE_PLUS) // ~
#define DE_PIPE ALGR(DE_LABK) // |
#define DE_MICR ALGR(DE_M)    // µ
// special keys
#define DE_LGUI LALT	// super
#define DE_LALT LGUI	// left alt




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
&kp DE_Q,             &kp DE_W,             &kp DE_F,             &kp DE_P,             &kp DE_B,             &kp DE_J,             &kp DE_L,             &kp DE_U,             &kp DE_Y,             &kp DE_SQT,           \
U_MT(DE_LGUI, DE_A),     U_MT(DE_LALT, DE_R),     U_MT(LCTRL, DE_S),    U_MT(LSHFT, DE_T),    &kp DE_G,             &kp DE_M,             U_MT(LSHFT, DE_N),    U_MT(LCTRL, DE_E),    U_MT(DE_LALT, DE_I),     U_MT(DE_LGUI, DE_O),     \
U_LT(U_BUTTON, DE_Z), U_MT(RALT, DE_X),     &kp DE_C,             &kp DE_D,             &kp DE_V,             &kp DE_K,             &kp DE_H,             &kp DE_COMMA,         U_MT(RALT, DE_DOT),   U_LT(U_BUTTON, DE_SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPACE), U_LT(U_MOUSE, TAB), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
