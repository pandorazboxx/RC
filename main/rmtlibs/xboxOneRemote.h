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
 * File:   xboxOneRemote.h
 * Author: mmigliaccio
 *
 * Created on February 8, 2018, 8:09 PM
 */

#ifndef XBOXONEREMOTE_H
#define XBOXONEREMOTE_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * The format for the Xbox One remote is an identifying header of
 * 9.0 milliseconds ON, then 4.5 milliseconds off before the start of
 * the message. Following the header are 32 bits of information then
 * a high bit to indicate the end of message. 
 * 
 * Each bit of data is indicated by a 560 microsecond pulse, then some amount 
 * of time before the next pulse. The amount of time between the pulses 
 * determines if the bit is a '1' or '0'. A '1' is indicated by the time between
 * the start of pulses as 2.25 milliseconds. A '0' is indicated by the time
 * between the start of pulses as 1.12 milliseconds.
 * 
 * The information is divided into an address or preamble of 16 bits. 
 * Then the next byte is the command (or button press) followed by one more
 * byte of the logical inverse (or NOT) of the command.
 * 
 * The enumerations below are captures of the addresses and data captured
 * from a sample remote control.
 */
    
#define XBOXONE_REMOTE_ADDR = 0xd880;
#define XBONE_HEADER_HIGH_US    9000        /*!< NEC protocol header: positive 9ms */
#define XBONE_HEADER_LOW_US     4500        /*!< NEC protocol header: negative 4.5ms*/


typedef enum {
    CMD_VIEW        = 0x91,
    CMD_MENU        = 0x90,
    CMD_XBOX        = 0x9b,
    CMD_REWIND      = 0xea,
    CMD_PLAY        = 0x8f,
    CMD_FFORWARD    = 0xeb,
    CMD_SKIP_BACK   = 0xe4,
    CMD_REC         = 0xe8,
    CMD_STOP        = 0xe6,
    CMD_SKIP_FWD    = 0xe5,
    CMD_UP          = 0xe1,
    CMD_DOWN        = 0xe0,
    CMD_LEFT        = 0xdf,
    CMD_RIGHT       = 0xde,
    CMD_OK          = 0xdd,
    CMD_X           = 0x97,
    CMD_Y           = 0x98,
    CMD_A           = 0x99,
    CMD_B           = 0x9a,
    CMD_BACK        = 0xdc,
    CMD_GUIDE       = 0xd9,
    CMD_CAPTIONS    = 0xb2,
    CMD_VOL_UP      = 0xef,
    CMD_VOL_DOWN    = 0xee,
    CMD_CH_UP       = 0xed,
    CMD_CH_DOWN     = 0xec,
    CMD_RECALL      = 0xda,
    CMD_MUTE        = 0xf1,
    CMD_DIG0        = 0xff,
    CMD_DIG1        = 0xfe,
    CMD_DIG2        = 0xfd,
    CMD_DIG3        = 0xfc,
    CMD_DIG4        = 0xfb,
    CMD_DIG5        = 0xfa,
    CMD_DIG6        = 0xf9,
    CMD_DIG7        = 0xf8,
    CMD_DIG8        = 0xf7,
    CMD_DIG9        = 0xf6,
    CMD_DOT         = 0xe2,
    CMD_CLEAR       = 0xf5
}xboxOne_remote_cmd_t;


#ifdef __cplusplus
}
#endif

#endif /* XBOXONEREMOTE_H */

