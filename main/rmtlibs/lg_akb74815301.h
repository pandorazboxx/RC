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
 * File:   lg_akb74815301.h
 * Author: mmigliaccio
 *
 * Created on January 29, 2018, 8:37 PM
 */

#ifndef LG_AKB74815301_H
#define LG_AKB74815301_H

#ifdef __cplusplus
extern "C" {
#endif

#define LG_AKB74815301_ADDR = 0x2c;

typedef enum {
    CMD_POWER       = 0x1e,
    CMD_INPUT       = 0x8a,
    CMD_STANDARD    = 0x36,
    CMD_VOL_UP      = 0x17,
    CMD_VOICE       = 0x96,
    CMD_MUTE        = 0x1f,
    CMD_VOL_DOWN    = 0x16,
    CMD_CINEMA      = 0x90,
    CMD_DRC_ON      = 0xc3,
    CMD_WOOFER_UP   = 0xca,
    CMD_AUTO_ON     = 0xc7,
    CMD_DRC_OFF     = 0xc4,
    CMD_WOOFER_DOWN = 0xc9,
    CMD_AUTO_OFF    = 0xc8
    
}lg_akb74815301_cmd_t;


#ifdef __cplusplus
}
#endif

#endif /* LG_AKB74815301_H */

