/* Copyright 2018 MakotoKurauchi
 * Copyright 2023 6ppng <@6ppng>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/* Basic keys */
#define a KC_A
#define b KC_B
#define c KC_C
#define d KC_D
#define e KC_E
#define f KC_F
#define g KC_G
#define h KC_H
#define i KC_I
#define j KC_J
#define k KC_K
#define l KC_L
#define m KC_M
#define n KC_N
#define o KC_O
#define p KC_P
#define q KC_Q
#define r KC_R
#define s KC_S
#define t KC_T
#define u KC_U
#define v KC_V
#define w KC_W
#define x KC_X
#define y KC_Y
#define z KC_Z

#define bspc KC_BSPC
#define comm KC_COMM
#define scln KC_SCLN
#define slsh KC_SLSH
#define bsls KC_BSLS
#define lbrc KC_LBRC
#define rbrc KC_RBRC
#define spc KC_SPC
#define tab KC_TAB
#define del KC_DEL
#define dot KC_DOT
#define ent KC_ENT
#define mins KC_MINS
#define equal KC_EQUAL
#define quot KC_QUOT
#define esc KC_ESC
#define grave KC_GRAVE
#define app KC_APP
#define undo KC_UNDO

/* Arrows */
#define home KC_HOME
#define end KC_END
#define pgup KC_PGUP
#define pgdn KC_PGDN
#define up KC_UP
#define down KC_DOWN
#define rght KC_RGHT
#define left KC_LEFT

/* Mouse */
#define ms_u KC_MS_U
#define ms_d KC_MS_D
#define ms_l KC_MS_L
#define ms_r KC_MS_R
#define btn1 KC_BTN1
#define btn2 KC_BTN2
#define wh_u KC_WH_U
#define wh_d KC_WH_D
#define wh_l KC_WH_L
#define wh_r KC_WH_R

/* Number */
#define n0 KC_0
#define n1 KC_1
#define n2 KC_2
#define n3 KC_3
#define n4 KC_4
#define n5 KC_5
#define n6 KC_6
#define n7 KC_7
#define n8 KC_8
#define n9 KC_9

/* Function */
#define f1 KC_F1
#define f2 KC_F2
#define f3 KC_F3
#define f4 KC_F4
#define f5 KC_F5
#define f6 KC_F6
#define f7 KC_F7
#define f8 KC_F8
#define f9 KC_F9
#define f10 KC_F10
#define f11 KC_F11
#define f12 KC_F12

/* Special */
#define ctl_bspc CTL_T(bspc)
#define ctl_del CTL_T(del)
#define gui_ent GUI_T(ent)
#define sft_equal SFT_T(equal)
#define sft_mins SFT_T(mins)
#define alt_tab ALT_T(tab)
#define app_1 LT(1,app)
#define spc_2 LT(2,spc)
#define esc_3 LT(3,esc)

enum custom_keycodes {
  qc = SAFE_RANGE,
  zkhk_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        esc_3,       q,       v,       y,       c,    slsh,                         scln,       g,       h,       m,       j,    quot,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     ctl_bspc,       u,       o,       i,       a,       l,                            d,       t,       n,       s,       r, gui_ent,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     sft_equal,   comm,     dot,       f,       e,       x,                            b,       k,       w,       z,       p,sft_mins,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, alt_tab,   spc_2,   app_1,     zkhk_1,   spc_2, alt_tab, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  ),

  [1] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,      f1,      f2,      f3,     f10,                      XXXXXXX,      n1,      n2,      n3, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      ctl_del, XXXXXXX,      f4,      f5,      f6,     f11,                         bsls,      n4,      n5,      n6,    lbrc,    rbrc,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX,      f7,      f8,      f9,     f12,                        grave,      n7,      n8,      n9,      n0, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  ),

  [2] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX,    pgup,      up,    pgdn, XXXXXXX,                      XXXXXXX,    wh_u,    ms_u,    wh_d, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      ctl_del,    home,    left,    down,    rght,     end,                         wh_l,    ms_l,    ms_d,    ms_r,    wh_r, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX,    undo, XXXXXXX,                      XXXXXXX,    btn1,    btn2, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,    btn1,    btn2,       btn2,    btn1, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  ),

  [3] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,   TO(4),   TO(5), XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  ),

  [4] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        TO(0),  KC_TAB,       q,       w,       e,       r,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCTL,       a,       s,       d,       f,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LSFT,       z,       x,       c,       v,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,  KC_SPC, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  ),

  [5] = LAYOUT(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        TO(0),      qc,      qc,      qc,      qc,      qc,                           qc,      qc,      qc,      qc,      qc,      qc,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           qc,      qc,      qc,      qc,      qc,      qc,                           qc,      qc,      qc,      qc,      qc,      qc,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           qc,      qc,      qc,      qc,      qc,      qc,                           qc,      qc,      qc,      qc,      qc,      qc,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      qc,      qc,      qc,         qc,      qc,      qc, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  )
};

bool is_any_key_tapped_while_zkhk_pressed = false;
bool is_zkhk_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (is_zkhk_pressed && !is_any_key_tapped_while_zkhk_pressed && (keycode != zkhk_1)){
    is_any_key_tapped_while_zkhk_pressed = true;
  }

  switch (keycode) {
    case qc:
      if (record->event.pressed) {
        tap_code(btn1);
      } else {
        // Do something else when release
      }
      return false;
    case zkhk_1:
      if (record->event.pressed) {
        is_zkhk_pressed = true;
        layer_on(1);

      } else {
        is_zkhk_pressed = false;
        layer_off(1);

        if (!is_any_key_tapped_while_zkhk_pressed){
          bool already_pressed_alt = (get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT);
          if (!already_pressed_alt) register_code(KC_LALT);
          tap_code(KC_GRAVE);
          if (!already_pressed_alt) unregister_code(KC_LALT);
        }
        is_any_key_tapped_while_zkhk_pressed = false;
      }
      return false;
    default:
      return true; // Process all other keycodes normally
  }
}

