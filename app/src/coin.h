/*******************************************************************************
*  (c) 2019-2021 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define CLA                  0x55

#define HDPATH_LEN_DEFAULT   5

#define HDPATH_0_DEFAULT     (0x80000000u | 0x2cu)
#define HDPATH_1_DEFAULT     (0x80000000u | 0x211u)
#define HDPATH_2_DEFAULT     (0x80000000u | 0u)
#define HDPATH_3_DEFAULT     (0u)

#define PK_LEN_SECP256K1     33u

typedef enum {
    addr_secp256k1 = 0,
} address_kind_e;

#define VIEW_ADDRESS_OFFSET_SECP256K1       PK_LEN_SECP256K1
#define VIEW_ADDRESS_LAST_PAGE_DEFAULT      0

#define MENU_MAIN_APP_LINE1                "Secret"
#define MENU_MAIN_APP_LINE2                "ready"
#define APPVERSION_LINE1                   "Version:"
#define APPVERSION_LINE2                   ("v" APPVERSION)

#define COIN_DEFAULT_CHAINID                "secret-4"

// In non-expert mode, the app will convert from uscrt to SCRT
#define COIN_DEFAULT_DENOM_BASE             "uscrt"
#define COIN_DEFAULT_DENOM_REPR             "SCRT"
#define COIN_DEFAULT_DENOM_FACTOR           6
#define COIN_DEFAULT_DENOM_TRIMMING         6

#define COIN_DENOM_MAXSIZE                  70
#define COIN_AMOUNT_MAXSIZE                 50

#define MENU_MAIN_APP_LINE2_SECRET         "?"
#define COIN_SECRET_REQUIRED_CLICKS         0

#ifdef __cplusplus
}
#endif
