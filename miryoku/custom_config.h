// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_WM, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_WM \
U_MT(LG(LS(Q)), LG(Q)),     U_MT(LG(LS(W)), LG(W)),     U_MT(LG(LS(E)), LG(E)),     U_MT(LG(LS(R)), LG(R)),     U_MT(LG(LS(T)), LG(T)),     U_MT(LG(LS(Z)), LG(Z)),     U_MT(LG(LS(U)), LG(U)),     U_MT(LG(LS(I)), LG(I)),     U_MT(LG(LS(O)), LG(O)),     U_MT(LG(LS(P)), LG(P)),    \
U_MT(LG(LS(A)), LG(A)),     U_MT(LG(LS(S)), LG(S)),     U_MT(LG(LS(D)), LG(D)),     U_MT(LG(LS(F)), LG(F)),     U_MT(LG(LS(G)), LG(G)),     U_MT(LG(LS(H)), LG(H)),     U_MT(LG(LS(J)), LG(J)),     U_MT(LG(LS(K)), LG(K)),     U_MT(LG(LS(L)), LG(L)),     U_MT(LG(LS(RA(p))), LG(RA(p))),    \
U_MT(LG(LS(Y)), LG(Y)),     U_MT(LG(LS(X)), LG(X)),     U_MT(LG(LS(C)), LG(C)),     U_MT(LG(LS(V)), LG(V)),     U_MT(LG(LS(B)), LG(B)),     U_MT(LG(LS(N)), LG(N)),     U_MT(LG(LS(M)), LG(M)),     U_MT(LG(SEMI), LG(COMMA)),     U_MT(LG(PERIOD), LG(COLON)),     U_MT(LG(UNDERSCORE), LG(MINUS)),    \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP




// config outer columns on corne
#define MIRYOKU_LAYOUTMAPPING_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
ESC  K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  Y \
LSHFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  Q \
LCTRL  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  P \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTPINKIE 2 3
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_LEFTINNERINDEX 3 4
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTINNERINDEX 7 8
#define MIRYOKU_KLUDGE_TOPROWCOMBOS_RIGHTPINKIE 8 9

#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTPINKIE 26 27
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_LEFTINNERINDEX 27 28
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTINNERINDEX 31 32
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS_RIGHTPINKIE 32 33

#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 37 38
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 39 40
