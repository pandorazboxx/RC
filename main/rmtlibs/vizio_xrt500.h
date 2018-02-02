// Copyright 2018 Mark Migliaccio
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* 
 * File:   vizio_xrt500.h
 * Author: mmigliaccio
 *
 * Created on January 28, 2018, 11:58 PM
 */

#ifndef VIZIO_XRT500_H
#define VIZIO_XRT500_H

#ifdef __cplusplus
extern "C" {
#endif
    
#define VIZIO_XRT500_ADDR = 0x04;

typedef enum {
    CMD_CH_UP       = 0x00,
    CMD_CH_DOWN     = 0x01,
    CMD_VOL_UP      = 0x02,
    CMD_VOL_DOWN    = 0x03,
    CMD_INPUT       = 0x2f,
    CMD_POWER       = 0x08,
    CMD_AMAZON      = 0xea,
    CMD_NETFLIX     = 0xeb,
    CMD_IHEART      = 0xee,
    CMD_REWIND      = 0x35,
    CMD_PAUSE       = 0x37,
    CMD_PLAY        = 0x33,
    CMD_FFORWARD    = 0x36,
    CMD_CAPTIONS    = 0x39,
    CMD_REC         = 0x34,
    CMD_STOP        = 0x30,
    CMD_MENU        = 0x4f,
    CMD_EXIT        = 0x49,
    CMD_INFO        = 0x1b,
    CMD_BACK        = 0x4a,
    CMD_GUIDE       = 0x1c,
    CMD_OK          = 0x44,
    CMD_UP          = 0x45,
    CMD_DOWN        = 0x46,
    CMD_LEFT        = 0x47,
    CMD_RIGHT       = 0x48,
    CMD_VIZIO       = 0x2d,
    CMD_MUTE        = 0x09,
    CMD_PSIZE       = 0x77,
    CMD_PIC         = 0x67,
    CMD_RECALL      = 0x1a,
    CMD_DIG0        = 0x10,
    CMD_DIG1        = 0x11,
    CMD_DIG2        = 0x12,
    CMD_DIG3        = 0x13,
    CMD_DIG4        = 0x14,
    CMD_DIG5        = 0x15,
    CMD_DIG6        = 0x16,
    CMD_DIG7        = 0x17,
    CMD_DIG8        = 0x18,
    CMD_DIG9        = 0x19,
    CMD_ENTER       = 0x3a,
    CMD_DASH        = 0xff,
    CMD_A           = 0x5b,
    CMD_B           = 0x75,
    CMD_C           = 0x6e,
    CMD_D           = 0x5d,
    CMD_E           = 0x06,
    CMD_F           = 0x5e,
    CMD_G           = 0x5f,
    CMD_H           = 0x68,
    CMD_I           = 0x57,
    CMD_J           = 0x69,
    CMD_K           = 0x6a,
    CMD_L           = 0x6b,
    CMD_M           = 0x78,
    CMD_N           = 0x76,
    CMD_O           = 0x58,
    CMD_P           = 0x59,
    CMD_Q           = 0x04,
    CMD_R           = 0x0c,
    CMD_S           = 0x5c,
    CMD_T           = 0x0d,
    CMD_U           = 0x29,
    CMD_V           = 0x70,
    CMD_W           = 0x05,
    CMD_X           = 0x6d,
    CMD_Y           = 0x0f,
    CMD_Z           = 0x6c,
    CMD_TAB         = 0xcb,
    CMD_AT          = 0xa9,
    CMD_COLON       = 0xd9,
    CMD_SPACE       = 0xcc,
    CMD_COMMA       = 0xa7,
    CMD_PERIOD      = 0xa8,
    CMD_DOTCOM      = 0xda,
    CMD_BACKSPACE   = 0xca,
    CMD_RETURN      = 0xfe,
    CMD_CURSUP      = 0xe2,
    CMD_CURSDOWN    = 0xe3,
    CMD_CURSLEFT    = 0xe4,
    CMD_CURSRIGHT   = 0xe5,
    CMD_CAPA        = 0x8c,
    CMD_CAPB        = 0x9d,
    CMD_CAPC        = 0x9b,
    CMD_CAPD        = 0x8e,
    CMD_CAPE        = 0x7b,
    CMD_CAPF        = 0x8f,
    CMD_CAPG        = 0x93,
    CMD_CAPH        = 0x94,
    CMD_CAPI        = 0x89,
    CMD_CAPJ        = 0x95,
    CMD_CAPK        = 0x96,
    CMD_CAPL        = 0x97,
    CMD_CAPM        = 0x9f,
    CMD_CAPN        = 0x9e,
    CMD_CAPO        = 0x8a,
    CMD_CAPP        = 0x8b,
    CMD_CAPQ        = 0x79,
    CMD_CAPR        = 0x7c,
    CMD_CAPS        = 0x8d,
    CMD_CAPT        = 0x7d,
    CMD_CAPU        = 0x7f,
    CMD_CAPV        = 0x9c,
    CMD_CAPW        = 0x7a,
    CMD_CAPX        = 0x9a,
    CMD_CAPY        = 0x7e,
    CMD_CAPZ        = 0x99,
    CMD_PERCENT     = 0xad,
    CMD_POUND       = 0xab,
    CMD_DOLLAR      = 0xac,
    CMD_EQUALS      = 0xa5,
    CMD_PLUS        = 0xc4,
    CMD_UNDERSCORE  = 0xd4,
    CMD_KEY_1       = 0xf2,
    CMD_KEY_2       = 0xf3,
    CMD_KEY_3       = 0xf4,
    CMD_KEY_4       = 0xf5,
    CMD_KEY_5       = 0xf6,
    CMD_KEY_6       = 0xf7,
    CMD_KEY_7       = 0xf8,
    CMD_KEY_8       = 0xf9,
    CMD_KEY_9       = 0xfa,
    CMD_KEY_0       = 0xf1,
    CMD_QUESTION    = 0xd3,
    CMD_LBRACKET    = 0xd8,
    CMD_RBRACKET    = 0xc0,
    CMD_BSLASH      = 0xc3,
    CMD_FSLASH      = 0xde,
    CMD_ASTERIX     = 0xd1,
    CMD_AMPERSAND   = 0xaf,
    CMD_EXCLAMATION = 0xaa,
    CMD_DELETE      = 0xcd,
    CMD_LTHAN       = 0xd5,
    CMD_GTHAN       = 0xd7,
    CMD_MINUS       = 0xc9,
    CMD_LPAREN      = 0xc1,
    CMD_RPAREN      = 0xc2,
    CMD_TILDE       = 0xd2,
    CMD_SEMICOLON   = 0xa6,
    CMD_SQUOTE      = 0xc7,
    CMD_DQUOTE      = 0xc8
}vizio_xrt500_cmd_t;


#ifdef __cplusplus
}
#endif

#endif /* VIZIO_XRT500_H */

