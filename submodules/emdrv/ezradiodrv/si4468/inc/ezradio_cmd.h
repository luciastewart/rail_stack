/***************************************************************************//**
 * @file si4463/inc/ezradio_cmd.h
 * @brief EZRadio Command Header
 *
 * THIS FILE WAS GENERATED FOR SI4463. COPIED FOR SI4468 AS A STUB.
 *
 * Generated from API Version:
 * Interface Version: 1.0
 * Document Version: 2.0.3
 *
 * Relevant to parts:
 * Si4463_revC2A
 *
 * @version 5.3.3
 *******************************************************************************
 * # License
 * <b>(C) Copyright 2015 Silicon Labs, http://www.silabs.com</b>
 *******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Labs has no
 * obligation to support this Software. Silicon Labs is providing the
 * Software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Silicon Labs will not be liable for any consequential, incidental, or
 * special damages, or any other relief, or for any claim by any third party,
 * arising from your use of this Software.
 *
 ******************************************************************************/

#ifndef EZRADIO_CMD_H
#define EZRADIO_CMD_H

//! @cond Doxygen_Suppress

/* This section contains command map declarations */
struct ezradio_reply_GENERIC_map {
        uint8_t  REPLY[16];
};

struct ezradio_reply_PART_INFO_map {
        uint8_t  CHIPREV;
        uint16_t  PART;
        uint8_t  PBUILD;
        uint16_t  ID;
        uint8_t  CUSTOMER;
        uint8_t  ROMID;
};

struct ezradio_reply_FUNC_INFO_map {
        uint8_t  REVEXT;
        uint8_t  REVBRANCH;
        uint8_t  REVINT;
        uint8_t  FUNC;
};

struct ezradio_reply_GET_PROPERTY_map {
        uint8_t  DATA[16];
};

struct ezradio_reply_GPIO_PIN_CFG_map {
        uint8_t  gpIO[4];
        uint8_t  NIRQ;
        uint8_t  SDO;
        uint8_t  GEN_CONFIG;
};

struct ezradio_reply_FIFO_INFO_map {
        uint8_t  RX_FIFO_COUNT;
        uint8_t  TX_FIFO_SPACE;
};

struct ezradio_reply_GET_INT_STATUS_map {
        uint8_t  INT_PEND;
        uint8_t  INT_STATUS;
        uint8_t  PH_PEND;
        uint8_t  PH_STATUS;
        uint8_t  MODEM_PEND;
        uint8_t  MODEM_STATUS;
        uint8_t  CHIP_PEND;
        uint8_t  CHIP_STATUS;
};

struct ezradio_reply_REQUEST_DEVICE_STATE_map {
        uint8_t  CURR_STATE;
        uint8_t  CURRENT_CHANNEL;
};

struct ezradio_reply_READ_CMD_BUFF_map {
        uint8_t  BYTE[16];
};

struct ezradio_reply_FRR_A_READ_map {
        uint8_t  FRR_A_VALUE;
        uint8_t  FRR_B_VALUE;
        uint8_t  FRR_C_VALUE;
        uint8_t  FRR_D_VALUE;
};

struct ezradio_reply_FRR_B_READ_map {
        uint8_t  FRR_B_VALUE;
        uint8_t  FRR_C_VALUE;
        uint8_t  FRR_D_VALUE;
        uint8_t  FRR_A_VALUE;
};

struct ezradio_reply_FRR_C_READ_map {
        uint8_t  FRR_C_VALUE;
        uint8_t  FRR_D_VALUE;
        uint8_t  FRR_A_VALUE;
        uint8_t  FRR_B_VALUE;
};

struct ezradio_reply_FRR_D_READ_map {
        uint8_t  FRR_D_VALUE;
        uint8_t  FRR_A_VALUE;
        uint8_t  FRR_B_VALUE;
        uint8_t  FRR_C_VALUE;
};

struct ezradio_reply_IRCAL_MANUAL_map {
        uint8_t  IRCAL_AMP_REPLY;
        uint8_t  IRCAL_PH_REPLY;
};

struct ezradio_reply_PACKET_INFO_map {
        uint16_t  LENGTH;
};

struct ezradio_reply_GET_MODEM_STATUS_map {
        uint8_t  MODEM_PEND;
        uint8_t  MODEM_STATUS;
        uint8_t  CURR_RSSI;
        uint8_t  LATCH_RSSI;
        uint8_t  ANT1_RSSI;
        uint8_t  ANT2_RSSI;
        uint16_t  AFC_FREQ_OFFSET;
};

struct ezradio_reply_READ_RX_FIFO_map {
        uint8_t  DATA[2];
};

struct ezradio_reply_GET_ADC_READING_map {
        uint16_t  GPIO_ADC;
        uint16_t  BATTERY_ADC;
        uint16_t  TEMP_ADC;
};

struct ezradio_reply_GET_PH_STATUS_map {
        uint8_t  PH_PEND;
        uint8_t  PH_STATUS;
};

struct ezradio_reply_GET_CHIP_STATUS_map {
        uint8_t  CHIP_PEND;
        uint8_t  CHIP_STATUS;
        uint8_t  CMD_ERR_STATUS;
        uint8_t  CMD_ERR_CMD_ID;
};


/* The union that stores the reply written back to the host registers */
typedef union ezradio_cmd_reply_union {
        uint8_t                                                               RAW[16];
        struct ezradio_reply_GENERIC_map                                  GENERIC;
        struct ezradio_reply_PART_INFO_map                                PART_INFO;
        struct ezradio_reply_FUNC_INFO_map                                FUNC_INFO;
        struct ezradio_reply_GET_PROPERTY_map                             GET_PROPERTY;
        struct ezradio_reply_GPIO_PIN_CFG_map                             GPIO_PIN_CFG;
        struct ezradio_reply_FIFO_INFO_map                                FIFO_INFO;
        struct ezradio_reply_GET_INT_STATUS_map                           GET_INT_STATUS;
        struct ezradio_reply_REQUEST_DEVICE_STATE_map                     REQUEST_DEVICE_STATE;
        struct ezradio_reply_READ_CMD_BUFF_map                            READ_CMD_BUFF;
        struct ezradio_reply_FRR_A_READ_map                               FRR_A_READ;
        struct ezradio_reply_FRR_B_READ_map                               FRR_B_READ;
        struct ezradio_reply_FRR_C_READ_map                               FRR_C_READ;
        struct ezradio_reply_FRR_D_READ_map                               FRR_D_READ;
        struct ezradio_reply_IRCAL_MANUAL_map                             IRCAL_MANUAL;
        struct ezradio_reply_PACKET_INFO_map                              PACKET_INFO;
        struct ezradio_reply_GET_MODEM_STATUS_map                         GET_MODEM_STATUS;
        struct ezradio_reply_READ_RX_FIFO_map                             READ_RX_FIFO;
        struct ezradio_reply_GET_ADC_READING_map                          GET_ADC_READING;
        struct ezradio_reply_GET_PH_STATUS_map                            GET_PH_STATUS;
        struct ezradio_reply_GET_CHIP_STATUS_map                          GET_CHIP_STATUS;
} ezradio_cmd_reply_t;

/* boot commands */

#define EZRADIO_CMD_ID_POWER_UP 0x02
/* POWER_UP ARGS */
#define EZRADIO_CMD_ARG_COUNT_POWER_UP 7
        /* macros for entire ARG BOOT_OPTIONS access of type uint8_t */
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_TYPE uint8_t
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_SIZE 8
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_MASK 0xff
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_MSB 7
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_LSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_INDEX 1
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_value (((cmd.arg.POWER_UP.BOOT_OPTIONS)))
        /* macros for field PATCH access */
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_TYPE enum
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_SIZE 1
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_MASK 0x80
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_BIT 0x80
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_MSB 7
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_LSB 7
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_INDEX 1
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_is_true (cmd.arg.POWER_UP.BOOT_OPTIONS & 0x80)
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_value (((cmd.arg.POWER_UP.BOOT_OPTIONS & 0x80)) >> 7)
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_ENUM_NO_PATCH 0
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_PATCH_ENUM_PATCH 1
        /* macros for field FUNC access */
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_TYPE enum
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_SIZE 6
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_MASK 0x3f
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_MSB 5
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_LSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_INDEX 1
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_value (((cmd.arg.POWER_UP.BOOT_OPTIONS & 0x3f)))
        #define EZRADIO_CMD_POWER_UP_ARG_BOOT_OPTIONS_FUNC_ENUM_PRO 1
        /* macros for entire ARG XTAL_OPTIONS access of type uint8_t */
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TYPE uint8_t
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_SIZE 8
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_MASK 0xff
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_MSB 7
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_LSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_INDEX 2
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_value (((cmd.arg.POWER_UP.XTAL_OPTIONS)))
        /* macros for field TCXO access */
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_TYPE enum
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_SIZE 1
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_MASK 0x1
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_BIT 0x1
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_MSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_LSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_INDEX 2
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_is_true (cmd.arg.POWER_UP.XTAL_OPTIONS & 0x1)
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_value (((cmd.arg.POWER_UP.XTAL_OPTIONS & 0x1)))
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_ENUM_XTAL 0
        #define EZRADIO_CMD_POWER_UP_ARG_XTAL_OPTIONS_TCXO_ENUM_TCXO 1
        /* macros for entire ARG XO_FREQ access of type uint32_t */
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_TYPE uint32_t
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_SIZE 32
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_MASK 0xffffffff
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_MSB 31
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_LSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_INDEX 3
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_value (((cmd.arg.POWER_UP.XO_FREQ)))
        /* macros for field XO_FREQ access */
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_TYPE uint32_t
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_SIZE 32
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_MASK 0xffffffff
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_MSB 31
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_LSB 0
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_INDEX 3
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_MIN 0x17d7840
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_MAX 0x1e84800
        #define EZRADIO_CMD_POWER_UP_ARG_XO_FREQ_XO_FREQ_value (((cmd.arg.POWER_UP.XO_FREQ & 0xffffffff)))
/* POWER_UP REPLY */
#define EZRADIO_CMD_REPLY_COUNT_POWER_UP 0
/* common commands */

#define EZRADIO_CMD_ID_NOP 0x00
/* NOP ARGS */
#define EZRADIO_CMD_ARG_COUNT_NOP 1
/* NOP REPLY */
#define EZRADIO_CMD_REPLY_COUNT_NOP 0
#define EZRADIO_CMD_ID_PART_INFO 0x01
/* PART_INFO ARGS */
#define EZRADIO_CMD_ARG_COUNT_PART_INFO 1
/* PART_INFO REPLY */
#define EZRADIO_CMD_REPLY_COUNT_PART_INFO 8
        /* macros for entire REPLY CHIPREV access of type uint8_t */
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_INDEX 1
        /* macros for field CHIPREV access */
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_CHIPREV_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_CHIPREV_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_CHIPREV_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_CHIPREV_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_CHIPREV_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_CHIPREV_CHIPREV_INDEX 1
        /* macros for entire REPLY PART access of type uint16_t */
        #define EZRADIO_CMD_PART_INFO_REP_PART_TYPE uint16_t
        #define EZRADIO_CMD_PART_INFO_REP_PART_SIZE 16
        #define EZRADIO_CMD_PART_INFO_REP_PART_MASK 0xffff
        #define EZRADIO_CMD_PART_INFO_REP_PART_MSB 15
        #define EZRADIO_CMD_PART_INFO_REP_PART_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_PART_INDEX 2
        /* macros for field PART access */
        #define EZRADIO_CMD_PART_INFO_REP_PART_PART_TYPE uint16_t
        #define EZRADIO_CMD_PART_INFO_REP_PART_PART_SIZE 16
        #define EZRADIO_CMD_PART_INFO_REP_PART_PART_MASK 0xffff
        #define EZRADIO_CMD_PART_INFO_REP_PART_PART_MSB 15
        #define EZRADIO_CMD_PART_INFO_REP_PART_PART_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_PART_PART_INDEX 2
        /* macros for entire REPLY PBUILD access of type uint8_t */
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_INDEX 4
        /* macros for field PBUILD access */
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_PBUILD_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_PBUILD_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_PBUILD_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_PBUILD_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_PBUILD_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_PBUILD_PBUILD_INDEX 4
        /* macros for entire REPLY ID access of type uint16_t */
        #define EZRADIO_CMD_PART_INFO_REP_ID_TYPE uint16_t
        #define EZRADIO_CMD_PART_INFO_REP_ID_SIZE 16
        #define EZRADIO_CMD_PART_INFO_REP_ID_MASK 0xffff
        #define EZRADIO_CMD_PART_INFO_REP_ID_MSB 15
        #define EZRADIO_CMD_PART_INFO_REP_ID_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_ID_INDEX 5
        /* macros for field ID access */
        #define EZRADIO_CMD_PART_INFO_REP_ID_ID_TYPE uint16_t
        #define EZRADIO_CMD_PART_INFO_REP_ID_ID_SIZE 16
        #define EZRADIO_CMD_PART_INFO_REP_ID_ID_MASK 0xffff
        #define EZRADIO_CMD_PART_INFO_REP_ID_ID_MSB 15
        #define EZRADIO_CMD_PART_INFO_REP_ID_ID_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_ID_ID_INDEX 5
        /* macros for entire REPLY CUSTOMER access of type uint8_t */
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_INDEX 7
        /* macros for field CUSTOMER access */
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_CUSTOMER_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_CUSTOMER_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_CUSTOMER_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_CUSTOMER_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_CUSTOMER_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_CUSTOMER_CUSTOMER_INDEX 7
        /* macros for entire REPLY ROMID access of type uint8_t */
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_INDEX 8
        /* macros for field ROMID access */
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_ROMID_TYPE uint8_t
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_ROMID_SIZE 8
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_ROMID_MASK 0xff
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_ROMID_MSB 7
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_ROMID_LSB 0
        #define EZRADIO_CMD_PART_INFO_REP_ROMID_ROMID_INDEX 8
#define EZRADIO_CMD_ID_FUNC_INFO 0x10
/* FUNC_INFO ARGS */
#define EZRADIO_CMD_ARG_COUNT_FUNC_INFO 1
/* FUNC_INFO REPLY */
#define EZRADIO_CMD_REPLY_COUNT_FUNC_INFO 6
        /* macros for entire REPLY REVEXT access of type uint8_t */
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_INDEX 1
        /* macros for field REVEXT access */
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_INDEX 1
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_MIN 0x0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVEXT_REVEXT_MAX 0xff
        /* macros for entire REPLY REVBRANCH access of type uint8_t */
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_INDEX 2
        /* macros for field REVBRANCH access */
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_INDEX 2
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_MIN 0x0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVBRANCH_REVBRANCH_MAX 0xff
        /* macros for entire REPLY REVINT access of type uint8_t */
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_INDEX 3
        /* macros for field REVINT access */
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_INDEX 3
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_MIN 0x0
        #define EZRADIO_CMD_FUNC_INFO_REP_REVINT_REVINT_MAX 0xff
        /* macros for entire REPLY FUNC access of type uint8_t */
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_INDEX 6
        /* macros for field FUNC access */
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_FUNC_TYPE uint8_t
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_FUNC_SIZE 8
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_FUNC_MASK 0xff
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_FUNC_MSB 7
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_FUNC_LSB 0
        #define EZRADIO_CMD_FUNC_INFO_REP_FUNC_FUNC_INDEX 6
#define EZRADIO_CMD_ID_SET_PROPERTY 0x11
/* SET_PROPERTY ARGS */
#define EZRADIO_CMD_ARG_COUNT_SET_PROPERTY 16
        /* macros for entire ARG GROUP access of type uint8_t */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_INDEX 1
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_value (((cmd.arg.SET_PROPERTY.GROUP)))
        /* macros for field GROUP access */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_INDEX 1
        #define EZRADIO_CMD_SET_PROPERTY_ARG_GROUP_GROUP_value (((cmd.arg.SET_PROPERTY.GROUP & 0xff)))
        /* macros for entire ARG NUM_PROPS access of type uint8_t */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_INDEX 2
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_value (((cmd.arg.SET_PROPERTY.NUM_PROPS)))
        /* macros for field NUM_PROPS access */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_INDEX 2
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MIN 0x1
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MAX 0xc
        #define EZRADIO_CMD_SET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_value (((cmd.arg.SET_PROPERTY.NUM_PROPS & 0xff)))
        /* macros for entire ARG START_PROP access of type uint8_t */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_INDEX 3
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_value (((cmd.arg.SET_PROPERTY.START_PROP)))
        /* macros for field START_PROP access */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_INDEX 3
        #define EZRADIO_CMD_SET_PROPERTY_ARG_START_PROP_START_PROP_value (((cmd.arg.SET_PROPERTY.START_PROP & 0xff)))
        /* macros for entire ARG DATA access of type uint8_t */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_INDEX 4
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_ARRAY_LEN 12
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_value(i) (((cmd.arg.SET_PROPERTY.DATA[(i)])))
        /* macros for field DATA access */
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_TYPE uint8_t
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_SIZE 8
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_MASK 0xff
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_MSB 7
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_LSB 0
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_INDEX 4
        #define EZRADIO_CMD_SET_PROPERTY_ARG_DATA_DATA_value(i) (((cmd.arg.SET_PROPERTY.DATA[(i)] & 0xff)))
/* SET_PROPERTY REPLY */
#define EZRADIO_CMD_REPLY_COUNT_SET_PROPERTY 0
#define EZRADIO_CMD_ID_GET_PROPERTY 0x12
/* GET_PROPERTY ARGS */
#define EZRADIO_CMD_ARG_COUNT_GET_PROPERTY 4
        /* macros for entire ARG GROUP access of type uint8_t */
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_INDEX 1
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_value (((cmd.arg.GET_PROPERTY.GROUP)))
        /* macros for field GROUP access */
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_INDEX 1
        #define EZRADIO_CMD_GET_PROPERTY_ARG_GROUP_GROUP_value (((cmd.arg.GET_PROPERTY.GROUP & 0xff)))
        /* macros for entire ARG NUM_PROPS access of type uint8_t */
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_INDEX 2
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_value (((cmd.arg.GET_PROPERTY.NUM_PROPS)))
        /* macros for field NUM_PROPS access */
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_INDEX 2
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MIN 0x1
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_MAX 0x10
        #define EZRADIO_CMD_GET_PROPERTY_ARG_NUM_PROPS_NUM_PROPS_value (((cmd.arg.GET_PROPERTY.NUM_PROPS & 0xff)))
        /* macros for entire ARG START_PROP access of type uint8_t */
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_INDEX 3
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_value (((cmd.arg.GET_PROPERTY.START_PROP)))
        /* macros for field START_PROP access */
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_INDEX 3
        #define EZRADIO_CMD_GET_PROPERTY_ARG_START_PROP_START_PROP_value (((cmd.arg.GET_PROPERTY.START_PROP & 0xff)))
/* GET_PROPERTY REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GET_PROPERTY 16
        /* macros for entire REPLY DATA access of type uint8_t */
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_INDEX 1
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_ARRAY_LEN 16
        /* macros for field DATA access */
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_DATA_TYPE uint8_t
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_DATA_SIZE 8
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_DATA_MASK 0xff
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_DATA_MSB 7
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_DATA_LSB 0
        #define EZRADIO_CMD_GET_PROPERTY_REP_DATA_DATA_INDEX 1
#define EZRADIO_CMD_ID_GPIO_PIN_CFG 0x13
/* GPIO_PIN_CFG ARGS */
#define EZRADIO_CMD_ARG_COUNT_GPIO_PIN_CFG 8
        /* macros for entire ARG GPIO access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_INDEX 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_ARRAY_LEN 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_value(i) (((cmd.arg.GPIO_PIN_CFG.GPIO[(i)])))
        /* macros for field PULL_CTL access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_SIZE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_MASK 0x40
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_BIT 0x40
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_MSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_LSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_INDEX 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_is_true(i) (cmd.arg.GPIO_PIN_CFG.GPIO[(i)] & 0x40)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_value(i) (((cmd.arg.GPIO_PIN_CFG.GPIO[(i)] & 0x40)) >> 6)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_ENUM_PULL_DIS 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_PULL_CTL_ENUM_PULL_EN 1
        /* macros for field GPIO_MODE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_SIZE 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_MASK 0x3f
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_MSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_INDEX 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_value(i) (((cmd.arg.GPIO_PIN_CFG.GPIO[(i)] & 0x3f)))
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_DONOTHING 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_TRISTATE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_DRIVE0 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_DRIVE1 3
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_INPUT 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_32K_CLK 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_BOOT_CLK 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_DIV_CLK 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_CTS 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_INV_CTS 9
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_CMD_OVERLAP 10
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_SDO 11
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_POR 12
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_CAL_WUT 13
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_WUT 14
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_EN_PA 15
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_TX_DATA_CLK 16
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_RX_DATA_CLK 17
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_EN_LNA 18
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_TX_DATA 19
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_RX_DATA 20
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_RX_RAW_DATA 21
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_ANTENNA_1_SW 22
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_ANTENNA_2_SW 23
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_VALID_PREAMBLE 24
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_INVALID_PREAMBLE 25
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_SYNC_WORD_DETECT 26
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_CCA 27
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_IN_SLEEP 28
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_TX_RX_DATA_CLK 31
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_TX_STATE 32
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_RX_STATE 33
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_RX_FIFO_FULL 34
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_TX_FIFO_EMPTY 35
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_LOW_BATT 36
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_CCA_LATCH 37
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_HOPPED 38
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GPIO_GPIO_MODE_ENUM_HOP_TABLE_WRAP 39
        /* macros for entire ARG NIRQ access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_INDEX 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_value (((cmd.arg.GPIO_PIN_CFG.NIRQ)))
        /* macros for field PULL_CTL access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_SIZE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_MASK 0x40
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_BIT 0x40
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_MSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_LSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_INDEX 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_is_true (cmd.arg.GPIO_PIN_CFG.NIRQ & 0x40)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_value (((cmd.arg.GPIO_PIN_CFG.NIRQ & 0x40)) >> 6)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_ENUM_PULL_DIS 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_PULL_CTL_ENUM_PULL_EN 1
        /* macros for field NIRQ_MODE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_SIZE 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_MASK 0x3f
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_MSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_INDEX 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_value (((cmd.arg.GPIO_PIN_CFG.NIRQ & 0x3f)))
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_DONOTHING 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_TRISTATE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_DRIVE0 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_DRIVE1 3
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_INPUT 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_DIV_CLK 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_CTS 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_SDO 11
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_POR 12
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_EN_PA 15
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_TX_DATA_CLK 16
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_RX_DATA_CLK 17
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_EN_LNA 18
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_TX_DATA 19
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_RX_DATA 20
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_RX_RAW_DATA 21
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_ANTENNA_1_SW 22
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_ANTENNA_2_SW 23
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_VALID_PREAMBLE 24
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_INVALID_PREAMBLE 25
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_SYNC_WORD_DETECT 26
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_CCA 27
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_TX_RX_DATA_CLK 31
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_NIRQ_NIRQ_MODE_ENUM_NIRQ 39
        /* macros for entire ARG SDO access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_INDEX 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_value (((cmd.arg.GPIO_PIN_CFG.SDO)))
        /* macros for field PULL_CTL access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_SIZE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_MASK 0x40
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_BIT 0x40
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_MSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_LSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_INDEX 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_is_true (cmd.arg.GPIO_PIN_CFG.SDO & 0x40)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_value (((cmd.arg.GPIO_PIN_CFG.SDO & 0x40)) >> 6)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_ENUM_PULL_DIS 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_PULL_CTL_ENUM_PULL_EN 1
        /* macros for field SDO_MODE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_SIZE 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_MASK 0x3f
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_MSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_INDEX 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_value (((cmd.arg.GPIO_PIN_CFG.SDO & 0x3f)))
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_DONOTHING 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_TRISTATE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_DRIVE0 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_DRIVE1 3
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_INPUT 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_32K_CLK 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_DIV_CLK 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_CTS 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_SDO 11
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_POR 12
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_WUT 14
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_EN_PA 15
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_TX_DATA_CLK 16
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_RX_DATA_CLK 17
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_EN_LNA 18
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_TX_DATA 19
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_RX_DATA 20
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_RX_RAW_DATA 21
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_ANTENNA_1_SW 22
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_ANTENNA_2_SW 23
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_VALID_PREAMBLE 24
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_INVALID_PREAMBLE 25
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_SYNC_WORD_DETECT 26
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_SDO_SDO_MODE_ENUM_CCA 27
        /* macros for entire ARG GEN_CONFIG access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_INDEX 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_value (((cmd.arg.GPIO_PIN_CFG.GEN_CONFIG)))
        /* macros for field DRV_STRENGTH access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_SIZE 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_MASK 0x60
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_MSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_LSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_INDEX 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_value (((cmd.arg.GPIO_PIN_CFG.GEN_CONFIG & 0x60)) >> 5)
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_ENUM_HIGH 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_ENUM_MED_HIGH 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_ENUM_MED_LOW 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_ARG_GEN_CONFIG_DRV_STRENGTH_ENUM_LOW 3
/* GPIO_PIN_CFG REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GPIO_PIN_CFG 7
        /* macros for entire REPLY GPIO access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_INDEX 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_ARRAY_LEN 4
        /* macros for field GPIO_STATE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_SIZE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_MASK 0x80
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_BIT 0x80
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_LSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_INDEX 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_ENUM_INACTIVE 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_STATE_ENUM_ACTIVE 1
        /* macros for field GPIO_MODE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_SIZE 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_MASK 0x3f
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_MSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_INDEX 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_DONOTHING 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_TRISTATE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_DRIVE0 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_DRIVE1 3
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_INPUT 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_32K_CLK 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_BOOT_CLK 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_DIV_CLK 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_CTS 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_INV_CTS 9
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_CMD_OVERLAP 10
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_SDO 11
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_POR 12
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_CAL_WUT 13
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_WUT 14
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_EN_PA 15
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_TX_DATA_CLK 16
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_RX_DATA_CLK 17
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_EN_LNA 18
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_TX_DATA 19
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_RX_DATA 20
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_RX_RAW_DATA 21
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_ANTENNA_1_SW 22
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_ANTENNA_2_SW 23
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_VALID_PREAMBLE 24
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_INVALID_PREAMBLE 25
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_SYNC_WORD_DETECT 26
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_CCA 27
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_IN_SLEEP 28
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_TX_RX_DATA_CLK 31
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_TX_STATE 32
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_RX_STATE 33
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_RX_FIFO_FULL 34
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_TX_FIFO_EMPTY 35
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_LOW_BATT 36
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_CCA_LATCH 37
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_HOPPED 38
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GPIO_GPIO_MODE_ENUM_HOP_TABLE_WRAP 39
        /* macros for entire REPLY NIRQ access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_INDEX 5
        /* macros for field NIRQ_STATE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_SIZE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_MASK 0x80
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_BIT 0x80
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_LSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_INDEX 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_ENUM_INACTIVE 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_STATE_ENUM_ACTIVE 1
        /* macros for field NIRQ_MODE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_SIZE 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_MASK 0x3f
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_MSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_INDEX 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_DONOTHING 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_TRISTATE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_DRIVE0 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_DRIVE1 3
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_INPUT 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_DIV_CLK 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_CTS 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_SDO 11
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_POR 12
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_EN_PA 15
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_TX_DATA_CLK 16
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_RX_DATA_CLK 17
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_EN_LNA 18
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_TX_DATA 19
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_RX_DATA 20
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_RX_RAW_DATA 21
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_ANTENNA_1_SW 22
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_ANTENNA_2_SW 23
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_VALID_PREAMBLE 24
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_INVALID_PREAMBLE 25
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_SYNC_WORD_DETECT 26
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_CCA 27
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_TX_RX_DATA_CLK 31
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_NIRQ_NIRQ_MODE_ENUM_NIRQ 39
        /* macros for entire REPLY SDO access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_INDEX 6
        /* macros for field SDO_STATE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_SIZE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_MASK 0x80
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_BIT 0x80
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_LSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_INDEX 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_ENUM_INACTIVE 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_STATE_ENUM_ACTIVE 1
        /* macros for field SDO_MODE access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_SIZE 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_MASK 0x3f
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_MSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_INDEX 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_DONOTHING 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_TRISTATE 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_DRIVE0 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_DRIVE1 3
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_INPUT 4
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_32K_CLK 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_DIV_CLK 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_CTS 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_SDO 11
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_POR 12
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_WUT 14
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_EN_PA 15
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_TX_DATA_CLK 16
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_RX_DATA_CLK 17
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_EN_LNA 18
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_TX_DATA 19
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_RX_DATA 20
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_RX_RAW_DATA 21
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_ANTENNA_1_SW 22
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_ANTENNA_2_SW 23
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_VALID_PREAMBLE 24
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_INVALID_PREAMBLE 25
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_SYNC_WORD_DETECT 26
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_SDO_SDO_MODE_ENUM_CCA 27
        /* macros for entire REPLY GEN_CONFIG access of type uint8_t */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_TYPE uint8_t
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_SIZE 8
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_MASK 0xff
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_MSB 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_LSB 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_INDEX 7
        /* macros for field DRV_STRENGTH access */
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_TYPE enum
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_SIZE 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_MASK 0x60
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_MSB 6
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_LSB 5
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_INDEX 7
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_ENUM_HIGH 0
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_ENUM_MED_HIGH 1
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_ENUM_MED_LOW 2
        #define EZRADIO_CMD_GPIO_PIN_CFG_REP_GEN_CONFIG_DRV_STRENGTH_ENUM_LOW 3
#define EZRADIO_CMD_ID_FIFO_INFO 0x15
/* FIFO_INFO ARGS */
#define EZRADIO_CMD_ARG_COUNT_FIFO_INFO 2
        /* macros for entire ARG FIFO access of type uint8_t */
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TYPE uint8_t
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_SIZE 8
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_MASK 0xff
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_MSB 7
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_LSB 0
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_INDEX 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_value (((cmd.arg.FIFO_INFO.FIFO)))
        /* macros for field RX access */
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_TYPE enum
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_SIZE 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_MASK 0x2
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_BIT 0x2
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_MSB 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_LSB 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_INDEX 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_is_true (cmd.arg.FIFO_INFO.FIFO & 0x2)
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_value (((cmd.arg.FIFO_INFO.FIFO & 0x2)) >> 1)
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_ENUM_FALSE 0
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_RX_ENUM_TRUE 1
        /* macros for field TX access */
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_TYPE enum
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_SIZE 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_MASK 0x1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_BIT 0x1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_MSB 0
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_LSB 0
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_INDEX 1
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_is_true (cmd.arg.FIFO_INFO.FIFO & 0x1)
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_value (((cmd.arg.FIFO_INFO.FIFO & 0x1)))
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_ENUM_FALSE 0
        #define EZRADIO_CMD_FIFO_INFO_ARG_FIFO_TX_ENUM_TRUE 1
/* FIFO_INFO REPLY */
#define EZRADIO_CMD_REPLY_COUNT_FIFO_INFO 2
        /* macros for entire REPLY RX_FIFO_COUNT access of type uint8_t */
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_TYPE uint8_t
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_SIZE 8
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_MASK 0xff
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_MSB 7
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_LSB 0
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_INDEX 1
        /* macros for field RX_FIFO_COUNT access */
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_RX_FIFO_COUNT_TYPE uint8_t
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_RX_FIFO_COUNT_SIZE 8
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_RX_FIFO_COUNT_MASK 0xff
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_RX_FIFO_COUNT_MSB 7
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_RX_FIFO_COUNT_LSB 0
        #define EZRADIO_CMD_FIFO_INFO_REP_RX_FIFO_COUNT_RX_FIFO_COUNT_INDEX 1
        /* macros for entire REPLY TX_FIFO_SPACE access of type uint8_t */
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TYPE uint8_t
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_SIZE 8
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_MASK 0xff
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_MSB 7
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_LSB 0
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_INDEX 2
        /* macros for field TX_FIFO_SPACE access */
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TX_FIFO_SPACE_TYPE uint8_t
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TX_FIFO_SPACE_SIZE 8
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TX_FIFO_SPACE_MASK 0xff
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TX_FIFO_SPACE_MSB 7
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TX_FIFO_SPACE_LSB 0
        #define EZRADIO_CMD_FIFO_INFO_REP_TX_FIFO_SPACE_TX_FIFO_SPACE_INDEX 2
#define EZRADIO_CMD_ID_GET_INT_STATUS 0x20
/* GET_INT_STATUS ARGS */
#define EZRADIO_CMD_ARG_COUNT_GET_INT_STATUS 4
        /* macros for entire ARG PH_CLR_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND)))
        /* macros for field FILTER_MATCH_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_MASK 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_BIT 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_LSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x80)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x80)) >> 7)
        /* macros for field FILTER_MISS_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x40)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x40)) >> 6)
        /* macros for field PACKET_SENT_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x20)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x20)) >> 5)
        /* macros for field PACKET_RX_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x10)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x10)) >> 4)
        /* macros for field CRC_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x8)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x8)) >> 3)
        /* macros for field ALT_CRC_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x4)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x4)) >> 2)
        /* macros for field TX_FIFO_ALMOST_EMPTY_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x2)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x2)) >> 1)
        /* macros for field RX_FIFO_ALMOST_FULL_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x1)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.PH_CLR_PEND & 0x1)))
        /* macros for entire ARG MODEM_CLR_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND)))
        /* macros for field RSSI_LATCH_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_MASK 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_BIT 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_LSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x80)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x80)) >> 7)
        /* macros for field POSTAMBLE_DETECT_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x40)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x40)) >> 6)
        /* macros for field INVALID_SYNC_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x20)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x20)) >> 5)
        /* macros for field RSSI_JUMP_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x10)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x10)) >> 4)
        /* macros for field RSSI_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x8)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x8)) >> 3)
        /* macros for field INVALID_PREAMBLE_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x4)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x4)) >> 2)
        /* macros for field PREAMBLE_DETECT_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x2)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x2)) >> 1)
        /* macros for field SYNC_DETECT_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_INDEX 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x1)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.MODEM_CLR_PEND & 0x1)))
        /* macros for entire ARG CHIP_CLR_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND)))
        /* macros for field CAL_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x40)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x40)) >> 6)
        /* macros for field FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x20)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x20)) >> 5)
        /* macros for field STATE_CHANGE_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x10)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x10)) >> 4)
        /* macros for field CMD_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x8)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x8)) >> 3)
        /* macros for field CHIP_READY_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x4)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x4)) >> 2)
        /* macros for field LOW_BATT_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x2)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x2)) >> 1)
        /* macros for field WUT_PEND_CLR access */
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_INDEX 3
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_is_true (cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x1)
        #define EZRADIO_CMD_GET_INT_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_value (((cmd.arg.GET_INT_STATUS.CHIP_CLR_PEND & 0x1)))
/* GET_INT_STATUS REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GET_INT_STATUS 8
        /* macros for entire REPLY INT_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_INDEX 1
        /* macros for field CHIP_INT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_CHIP_INT_PEND_INDEX 1
        /* macros for field MODEM_INT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_MODEM_INT_PEND_INDEX 1
        /* macros for field PH_INT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_PEND_PH_INT_PEND_INDEX 1
        /* macros for entire REPLY INT_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_INDEX 2
        /* macros for field CHIP_INT_STATUS access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_CHIP_INT_STATUS_INDEX 2
        /* macros for field MODEM_INT_STATUS access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_MODEM_INT_STATUS_INDEX 2
        /* macros for field PH_INT_STATUS access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_INT_STATUS_PH_INT_STATUS_INDEX 2
        /* macros for entire REPLY PH_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_INDEX 3
        /* macros for field FILTER_MATCH_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_MASK 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_BIT 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_LSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_INDEX 3
        /* macros for field FILTER_MISS_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_FILTER_MISS_PEND_INDEX 3
        /* macros for field PACKET_SENT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_SENT_PEND_INDEX 3
        /* macros for field PACKET_RX_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_PACKET_RX_PEND_INDEX 3
        /* macros for field CRC_ERROR_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_CRC_ERROR_PEND_INDEX 3
        /* macros for field ALT_CRC_ERROR_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_INDEX 3
        /* macros for field TX_FIFO_ALMOST_EMPTY_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_INDEX 3
        /* macros for field RX_FIFO_ALMOST_FULL_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_INDEX 3
        /* macros for entire REPLY PH_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_INDEX 4
        /* macros for field FILTER_MATCH access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_MASK 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_BIT 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_LSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MATCH_INDEX 4
        /* macros for field FILTER_MISS access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_FILTER_MISS_INDEX 4
        /* macros for field PACKET_SENT access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_SENT_INDEX 4
        /* macros for field PACKET_RX access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_PACKET_RX_INDEX 4
        /* macros for field CRC_ERROR access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_CRC_ERROR_INDEX 4
        /* macros for field ALT_CRC_ERROR access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_INDEX 4
        /* macros for field TX_FIFO_ALMOST_EMPTY access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_INDEX 4
        /* macros for field RX_FIFO_ALMOST_FULL access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_INDEX 4
        /* macros for entire REPLY MODEM_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INDEX 5
        /* macros for field RSSI_LATCH_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_MASK 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_BIT 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_LSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_INDEX 5
        /* macros for field POSTAMBLE_DETECT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_INDEX 5
        /* macros for field INVALID_SYNC_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_INDEX 5
        /* macros for field RSSI_JUMP_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_INDEX 5
        /* macros for field RSSI_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_RSSI_PEND_INDEX 5
        /* macros for field INVALID_PREAMBLE_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_INDEX 5
        /* macros for field PREAMBLE_DETECT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_INDEX 5
        /* macros for field SYNC_DETECT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_INDEX 5
        /* macros for entire REPLY MODEM_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INDEX 6
        /* macros for field RSSI_LATCH access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_MASK 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_BIT 0x80
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_LSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LATCH_INDEX 6
        /* macros for field POSTAMBLE_DETECT access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_INDEX 6
        /* macros for field INVALID_SYNC access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_SYNC_INDEX 6
        /* macros for field RSSI_JUMP access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_JUMP_INDEX 6
        /* macros for field RSSI access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_RSSI_INDEX 6
        /* macros for field INVALID_PREAMBLE access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_INDEX 6
        /* macros for field PREAMBLE_DETECT access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_INDEX 6
        /* macros for field SYNC_DETECT access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_MODEM_STATUS_SYNC_DETECT_INDEX 6
        /* macros for entire REPLY CHIP_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_INDEX 7
        /* macros for field CAL_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CAL_PEND_INDEX 7
        /* macros for field FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_INDEX 7
        /* macros for field STATE_CHANGE_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_INDEX 7
        /* macros for field CMD_ERROR_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_INDEX 7
        /* macros for field CHIP_READY_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_INDEX 7
        /* macros for field LOW_BATT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_INDEX 7
        /* macros for field WUT_PEND access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_PEND_WUT_PEND_INDEX 7
        /* macros for entire REPLY CHIP_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_MSB 7
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_INDEX 8
        /* macros for field CAL access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_MASK 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_BIT 0x40
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_MSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_LSB 6
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CAL_INDEX 8
        /* macros for field FIFO_UNDERFLOW_OVERFLOW_ERROR access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_MASK 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_BIT 0x20
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_MSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_LSB 5
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_INDEX 8
        /* macros for field STATE_CHANGE access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_MASK 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_BIT 0x10
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_MSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_LSB 4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_STATE_CHANGE_INDEX 8
        /* macros for field CMD_ERROR access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_MASK 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_BIT 0x8
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_MSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_LSB 3
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CMD_ERROR_INDEX 8
        /* macros for field CHIP_READY access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_MASK 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_BIT 0x4
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_MSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_LSB 2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_CHIP_READY_INDEX 8
        /* macros for field LOW_BATT access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_MASK 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_BIT 0x2
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_MSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_LSB 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_LOW_BATT_INDEX 8
        /* macros for field WUT access */
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_TYPE bool
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_SIZE 1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_MASK 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_BIT 0x1
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_MSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_LSB 0
        #define EZRADIO_CMD_GET_INT_STATUS_REP_CHIP_STATUS_WUT_INDEX 8
#define EZRADIO_CMD_ID_REQUEST_DEVICE_STATE 0x33
/* REQUEST_DEVICE_STATE ARGS */
#define EZRADIO_CMD_ARG_COUNT_REQUEST_DEVICE_STATE 1
/* REQUEST_DEVICE_STATE REPLY */
#define EZRADIO_CMD_REPLY_COUNT_REQUEST_DEVICE_STATE 2
        /* macros for entire REPLY CURR_STATE access of type uint8_t */
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_TYPE uint8_t
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_SIZE 8
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MASK 0xff
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MSB 7
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_LSB 0
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_INDEX 1
        /* macros for field MAIN_STATE access */
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_TYPE enum
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_SIZE 4
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_MASK 0xf
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_MSB 3
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_LSB 0
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_INDEX 1
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_SLEEP 1
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_SPI_ACTIVE 2
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_READY 3
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_READY2 4
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_TX_TUNE 5
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_RX_TUNE 6
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_TX 7
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURR_STATE_MAIN_STATE_ENUM_RX 8
        /* macros for entire REPLY CURRENT_CHANNEL access of type uint8_t */
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_TYPE uint8_t
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_SIZE 8
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_MASK 0xff
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_MSB 7
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_LSB 0
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_INDEX 2
        /* macros for field CURRENT_CHANNEL access */
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_CURRENT_CHANNEL_TYPE uint8_t
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_CURRENT_CHANNEL_SIZE 8
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_CURRENT_CHANNEL_MASK 0xff
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_CURRENT_CHANNEL_MSB 7
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_CURRENT_CHANNEL_LSB 0
        #define EZRADIO_CMD_REQUEST_DEVICE_STATE_REP_CURRENT_CHANNEL_CURRENT_CHANNEL_INDEX 2
#define EZRADIO_CMD_ID_CHANGE_STATE 0x34
/* CHANGE_STATE ARGS */
#define EZRADIO_CMD_ARG_COUNT_CHANGE_STATE 2
        /* macros for entire ARG NEXT_STATE1 access of type uint8_t */
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_TYPE uint8_t
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_SIZE 8
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_MASK 0xff
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_MSB 7
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_LSB 0
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_INDEX 1
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_value (((cmd.arg.CHANGE_STATE.NEXT_STATE1)))
        /* macros for field NEW_STATE access */
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_TYPE enum
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_SIZE 4
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_MASK 0xf
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_MSB 3
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_LSB 0
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_INDEX 1
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_value (((cmd.arg.CHANGE_STATE.NEXT_STATE1 & 0xf)))
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_NOCHANGE 0
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_SLEEP 1
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_SPI_ACTIVE 2
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_READY 3
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_TX_TUNE 5
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_RX_TUNE 6
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_TX 7
        #define EZRADIO_CMD_CHANGE_STATE_ARG_NEXT_STATE1_NEW_STATE_ENUM_RX 8
/* CHANGE_STATE REPLY */
#define EZRADIO_CMD_REPLY_COUNT_CHANGE_STATE 0
#define EZRADIO_CMD_ID_READ_CMD_BUFF 0x44
/* READ_CMD_BUFF ARGS */
#define EZRADIO_CMD_ARG_COUNT_READ_CMD_BUFF 1
/* READ_CMD_BUFF REPLY */
#define EZRADIO_CMD_REPLY_COUNT_READ_CMD_BUFF 16
        /* macros for entire REPLY BYTE access of type uint8_t */
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_TYPE uint8_t
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_SIZE 8
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_MASK 0xff
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_MSB 7
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_LSB 0
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_INDEX 1
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_ARRAY_LEN 16
        /* macros for field CMD_BUFF access */
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_CMD_BUFF_TYPE uint8_t
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_CMD_BUFF_SIZE 8
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_CMD_BUFF_MASK 0xff
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_CMD_BUFF_MSB 7
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_CMD_BUFF_LSB 0
        #define EZRADIO_CMD_READ_CMD_BUFF_REP_BYTE_CMD_BUFF_INDEX 1
#define EZRADIO_CMD_ID_FRR_A_READ 0x50
/* FRR_A_READ ARGS */
#define EZRADIO_CMD_ARG_COUNT_FRR_A_READ 1
/* FRR_A_READ REPLY */
#define EZRADIO_CMD_REPLY_COUNT_FRR_A_READ 4
        /* macros for entire REPLY FRR_A_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_INDEX 0
        /* macros for field FRR_A_VALUE access */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_A_VALUE_FRR_A_VALUE_INDEX 0
        /* macros for entire REPLY FRR_B_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_INDEX 1
        /* macros for field FRR_B_VALUE access */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_B_VALUE_FRR_B_VALUE_INDEX 1
        /* macros for entire REPLY FRR_C_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_INDEX 2
        /* macros for field FRR_C_VALUE access */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_C_VALUE_FRR_C_VALUE_INDEX 2
        /* macros for entire REPLY FRR_D_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_INDEX 3
        /* macros for field FRR_D_VALUE access */
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_A_READ_REP_FRR_D_VALUE_FRR_D_VALUE_INDEX 3
#define EZRADIO_CMD_ID_FRR_B_READ 0x51
/* FRR_B_READ ARGS */
#define EZRADIO_CMD_ARG_COUNT_FRR_B_READ 1
/* FRR_B_READ REPLY */
#define EZRADIO_CMD_REPLY_COUNT_FRR_B_READ 4
        /* macros for entire REPLY FRR_B_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_INDEX 0
        /* macros for field FRR_B_VALUE access */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_B_VALUE_FRR_B_VALUE_INDEX 0
        /* macros for entire REPLY FRR_C_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_INDEX 1
        /* macros for field FRR_C_VALUE access */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_C_VALUE_FRR_C_VALUE_INDEX 1
        /* macros for entire REPLY FRR_D_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_INDEX 2
        /* macros for field FRR_D_VALUE access */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_D_VALUE_FRR_D_VALUE_INDEX 2
        /* macros for entire REPLY FRR_A_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_INDEX 3
        /* macros for field FRR_A_VALUE access */
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_B_READ_REP_FRR_A_VALUE_FRR_A_VALUE_INDEX 3
#define EZRADIO_CMD_ID_FRR_C_READ 0x53
/* FRR_C_READ ARGS */
#define EZRADIO_CMD_ARG_COUNT_FRR_C_READ 1
/* FRR_C_READ REPLY */
#define EZRADIO_CMD_REPLY_COUNT_FRR_C_READ 4
        /* macros for entire REPLY FRR_C_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_INDEX 0
        /* macros for field FRR_C_VALUE access */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_C_VALUE_FRR_C_VALUE_INDEX 0
        /* macros for entire REPLY FRR_D_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_INDEX 1
        /* macros for field FRR_D_VALUE access */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_D_VALUE_FRR_D_VALUE_INDEX 1
        /* macros for entire REPLY FRR_A_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_INDEX 2
        /* macros for field FRR_A_VALUE access */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_A_VALUE_FRR_A_VALUE_INDEX 2
        /* macros for entire REPLY FRR_B_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_INDEX 3
        /* macros for field FRR_B_VALUE access */
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_C_READ_REP_FRR_B_VALUE_FRR_B_VALUE_INDEX 3
#define EZRADIO_CMD_ID_FRR_D_READ 0x57
/* FRR_D_READ ARGS */
#define EZRADIO_CMD_ARG_COUNT_FRR_D_READ 1
/* FRR_D_READ REPLY */
#define EZRADIO_CMD_REPLY_COUNT_FRR_D_READ 4
        /* macros for entire REPLY FRR_D_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_INDEX 0
        /* macros for field FRR_D_VALUE access */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_FRR_D_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_FRR_D_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_FRR_D_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_FRR_D_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_D_VALUE_FRR_D_VALUE_INDEX 0
        /* macros for entire REPLY FRR_A_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_INDEX 1
        /* macros for field FRR_A_VALUE access */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_FRR_A_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_FRR_A_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_FRR_A_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_FRR_A_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_A_VALUE_FRR_A_VALUE_INDEX 1
        /* macros for entire REPLY FRR_B_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_INDEX 2
        /* macros for field FRR_B_VALUE access */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_FRR_B_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_FRR_B_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_FRR_B_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_FRR_B_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_B_VALUE_FRR_B_VALUE_INDEX 2
        /* macros for entire REPLY FRR_C_VALUE access of type uint8_t */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_INDEX 3
        /* macros for field FRR_C_VALUE access */
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_FRR_C_VALUE_TYPE uint8_t
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_FRR_C_VALUE_SIZE 8
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MASK 0xff
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_FRR_C_VALUE_MSB 7
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_FRR_C_VALUE_LSB 0
        #define EZRADIO_CMD_FRR_D_READ_REP_FRR_C_VALUE_FRR_C_VALUE_INDEX 3
/* ir_cal commands */

#define EZRADIO_CMD_ID_IRCAL 0x17
/* IRCAL ARGS */
#define EZRADIO_CMD_ARG_COUNT_IRCAL 5
        /* macros for entire ARG SEARCHING_STEP_SIZE access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_SIZE 8
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_MASK 0xff
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INDEX 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_value (((cmd.arg.IRCAL.SEARCHING_STEP_SIZE)))
        /* macros for field INITIAL_PH_AMP access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_MASK 0x40
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_BIT 0x40
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_MSB 6
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_LSB 6
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_INDEX 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_is_true (cmd.arg.IRCAL.SEARCHING_STEP_SIZE & 0x40)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_value (((cmd.arg.IRCAL.SEARCHING_STEP_SIZE & 0x40)) >> 6)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_ENUM_ENUM_0 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_INITIAL_PH_AMP_ENUM_ENUM_1 0
        /* macros for field FINE_STEP_SIZE access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_SIZE 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_MASK 0x30
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_MSB 5
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_LSB 4
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_INDEX 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_FINE_STEP_SIZE_value (((cmd.arg.IRCAL.SEARCHING_STEP_SIZE & 0x30)) >> 4)
        /* macros for field COARSE_STEP_SIZE access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_SIZE 4
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_MASK 0xf
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_MSB 3
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_INDEX 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_STEP_SIZE_COARSE_STEP_SIZE_value (((cmd.arg.IRCAL.SEARCHING_STEP_SIZE & 0xf)))
        /* macros for entire ARG SEARCHING_RSSI_AVG access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SIZE 8
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_MASK 0xff
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_INDEX 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_value (((cmd.arg.IRCAL.SEARCHING_RSSI_AVG)))
        /* macros for field STEP_BY_STEP access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_MASK 0x80
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_BIT 0x80
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_LSB 7
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_INDEX 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_is_true (cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x80)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_value (((cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x80)) >> 7)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_STEP_BY_STEP_ENUM_ENUM_1 1
        /* macros for field SKIP_INIT_SEARCH_STAT access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_MASK 0x40
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_BIT 0x40
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_MSB 6
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_LSB 6
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_INDEX 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_is_true (cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x40)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_value (((cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x40)) >> 6)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_INIT_SEARCH_STAT_ENUM_ENUM_1 1
        /* macros for field RSSI_FINE_AVG access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_SIZE 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_MASK 0x30
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_MSB 5
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_LSB 4
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_INDEX 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_value (((cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x30)) >> 4)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_ENUM_ENUM_1 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_ENUM_ENUM_2 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_FINE_AVG_ENUM_ENUM_3 3
        /* macros for field SKIP_CAL access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_MASK 0x4
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_BIT 0x4
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_MSB 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_LSB 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_INDEX 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_is_true (cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x4)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_value (((cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x4)) >> 2)
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_SKIP_CAL_ENUM_ENUM_1 1
        /* macros for field RSSI_COARSE_AVG access */
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_SIZE 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_MASK 0x3
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_MSB 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_INDEX 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_value (((cmd.arg.IRCAL.SEARCHING_RSSI_AVG & 0x3)))
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_ENUM_ENUM_1 1
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_ENUM_ENUM_2 2
        #define EZRADIO_CMD_IRCAL_ARG_SEARCHING_RSSI_AVG_RSSI_COARSE_AVG_ENUM_ENUM_3 3
        /* macros for entire ARG RX_CHAIN_SETTING1 access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_SIZE 8
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_MASK 0xff
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_INDEX 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING1)))
        /* macros for field EN_HRMNIC_GEN access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_MASK 0x80
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_BIT 0x80
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_LSB 7
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_INDEX 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_is_true (cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x80)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x80)) >> 7)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_EN_HRMNIC_GEN_ENUM_ENUM_1 1
        /* macros for field IRCLKDIV access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_MASK 0x40
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_BIT 0x40
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_MSB 6
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_LSB 6
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_INDEX 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_is_true (cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x40)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x40)) >> 6)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_IRCLKDIV_ENUM_ENUM_1 1
        /* macros for field RF_SOURCE_PWR access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_SIZE 2
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_MASK 0x30
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_MSB 5
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_LSB 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_INDEX 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x30)) >> 4)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_ENUM_ENUM_1 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_ENUM_ENUM_2 2
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_RF_SOURCE_PWR_ENUM_ENUM_3 3
        /* macros for field CLOSE_SHUNT_SWITCH access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_MASK 0x8
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_BIT 0x8
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_MSB 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_LSB 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_INDEX 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_is_true (cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x8)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x8)) >> 3)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_CLOSE_SHUNT_SWITCH_ENUM_ENUM_1 1
        /* macros for field PGA_GAIN access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_SIZE 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_MASK 0x7
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_MSB 2
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_INDEX 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING1 & 0x7)))
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_1 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_2 2
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_3 3
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_4 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_5 5
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_6 6
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING1_PGA_GAIN_ENUM_ENUM_7 7
        /* macros for entire ARG RX_CHAIN_SETTING2 access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_SIZE 8
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_MASK 0xff
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_INDEX 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING2)))
        /* macros for field RSSI_READ_DELAY access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_SIZE 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_MASK 0xf0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_MSB 7
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_LSB 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_INDEX 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING2 & 0xf0)) >> 4)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_ENUM_ENUM_1 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_RSSI_READ_DELAY_ENUM_ENUM_2 15
        /* macros for field ADC_HIGH_GAIN access */
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_TYPE enum
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_SIZE 1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_MASK 0x1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_BIT 0x1
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_MSB 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_LSB 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_INDEX 4
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_is_true (cmd.arg.IRCAL.RX_CHAIN_SETTING2 & 0x1)
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_value (((cmd.arg.IRCAL.RX_CHAIN_SETTING2 & 0x1)))
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_IRCAL_ARG_RX_CHAIN_SETTING2_ADC_HIGH_GAIN_ENUM_ENUM_1 1
/* IRCAL REPLY */
#define EZRADIO_CMD_REPLY_COUNT_IRCAL 0
#define EZRADIO_CMD_ID_IRCAL_MANUAL 0x1a
/* IRCAL_MANUAL ARGS */
#define EZRADIO_CMD_ARG_COUNT_IRCAL_MANUAL 3
        /* macros for entire ARG IRCAL_AMP access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_SIZE 8
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_MASK 0xff
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_MSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_INDEX 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_value (((cmd.arg.IRCAL_MANUAL.IRCAL_AMP)))
        /* macros for field IRCAL_AMP_SKIP access */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_TYPE enum
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_SIZE 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_MASK 0x80
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_BIT 0x80
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_MSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_LSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_INDEX 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_is_true (cmd.arg.IRCAL_MANUAL.IRCAL_AMP & 0x80)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_value (((cmd.arg.IRCAL_MANUAL.IRCAL_AMP & 0x80)) >> 7)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_ENUM_APPLY 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SKIP_ENUM_SKIP 1
        /* macros for field IRCAL_AMP_SIGN access */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_TYPE enum
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_SIZE 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_MASK 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_BIT 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_MSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_LSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_INDEX 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_is_true (cmd.arg.IRCAL_MANUAL.IRCAL_AMP & 0x20)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_value (((cmd.arg.IRCAL_MANUAL.IRCAL_AMP & 0x20)) >> 5)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_ENUM_POS 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_SIGN_ENUM_NEG 1
        /* macros for field IRCAL_AMP_MAG access */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_SIZE 5
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_MASK 0x1f
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_MSB 4
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_INDEX 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_AMP_IRCAL_AMP_MAG_value (((cmd.arg.IRCAL_MANUAL.IRCAL_AMP & 0x1f)))
        /* macros for entire ARG IRCAL_PH access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_SIZE 8
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_MASK 0xff
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_MSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_INDEX 2
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_value (((cmd.arg.IRCAL_MANUAL.IRCAL_PH)))
        /* macros for field IRCAL_PH_SKIP access */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_TYPE enum
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_SIZE 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_MASK 0x80
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_BIT 0x80
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_MSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_LSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_INDEX 2
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_is_true (cmd.arg.IRCAL_MANUAL.IRCAL_PH & 0x80)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_value (((cmd.arg.IRCAL_MANUAL.IRCAL_PH & 0x80)) >> 7)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_ENUM_APPLY 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SKIP_ENUM_SKIP 1
        /* macros for field IRCAL_PH_SIGN access */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_TYPE enum
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_SIZE 1
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_MASK 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_BIT 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_MSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_LSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_INDEX 2
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_is_true (cmd.arg.IRCAL_MANUAL.IRCAL_PH & 0x20)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_value (((cmd.arg.IRCAL_MANUAL.IRCAL_PH & 0x20)) >> 5)
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_ENUM_POS 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_SIGN_ENUM_NEG 1
        /* macros for field IRCAL_PH_MAG access */
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_SIZE 5
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_MASK 0x1f
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_MSB 4
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_INDEX 2
        #define EZRADIO_CMD_IRCAL_MANUAL_ARG_IRCAL_PH_IRCAL_PH_MAG_value (((cmd.arg.IRCAL_MANUAL.IRCAL_PH & 0x1f)))
/* IRCAL_MANUAL REPLY */
#define EZRADIO_CMD_REPLY_COUNT_IRCAL_MANUAL 2
        /* macros for entire REPLY IRCAL_AMP_REPLY access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_SIZE 8
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_MASK 0xff
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_MSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_INDEX 1
        /* macros for field IRCAL_AMP_SIGN access */
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_TYPE enum
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_SIZE 1
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_MASK 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_BIT 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_MSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_LSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_INDEX 1
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_ENUM_POS 0
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_SIGN_ENUM_NEG 1
        /* macros for field IRCAL_AMP_MAG access */
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_MAG_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_MAG_SIZE 5
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_MAG_MASK 0x1f
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_MAG_MSB 4
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_MAG_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_AMP_REPLY_IRCAL_AMP_MAG_INDEX 1
        /* macros for entire REPLY IRCAL_PH_REPLY access of type uint8_t */
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_SIZE 8
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_MASK 0xff
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_MSB 7
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_INDEX 2
        /* macros for field IRCAL_PH_SIGN access */
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_TYPE enum
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_SIZE 1
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_MASK 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_BIT 0x20
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_MSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_LSB 5
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_INDEX 2
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_ENUM_POS 0
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_PH_SIGN_ENUM_NEG 1
        /* macros for field IRCAL_AMP_PH access */
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_AMP_PH_TYPE uint8_t
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_AMP_PH_SIZE 5
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_AMP_PH_MASK 0x1f
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_AMP_PH_MSB 4
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_AMP_PH_LSB 0
        #define EZRADIO_CMD_IRCAL_MANUAL_REP_IRCAL_PH_REPLY_IRCAL_AMP_PH_INDEX 2
/* tx commands */

#define EZRADIO_CMD_ID_START_TX 0x31
/* START_TX ARGS */
#define EZRADIO_CMD_ARG_COUNT_START_TX 7
        /* macros for entire ARG CHANNEL access of type uint8_t */
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_INDEX 1
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_value (((cmd.arg.START_TX.CHANNEL)))
        /* macros for field CHANNEL access */
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_INDEX 1
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_MIN 0x0
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_MAX 0xff
        #define EZRADIO_CMD_START_TX_ARG_CHANNEL_CHANNEL_value (((cmd.arg.START_TX.CHANNEL & 0xff)))
        /* macros for entire ARG CONDITION access of type uint8_t */
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_INDEX 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_value (((cmd.arg.START_TX.CONDITION)))
        /* macros for field TXCOMPLETE_STATE access */
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_TYPE enum
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_SIZE 4
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_MASK 0xf0
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_LSB 4
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_INDEX 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_value (((cmd.arg.START_TX.CONDITION & 0xf0)) >> 4)
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_NOCHANGE 0
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_SLEEP 1
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_SPI_ACTIVE 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_READY 3
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_READY2 4
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_TX_TUNE 5
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_RX_TUNE 6
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_RESERVED 7
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_TXCOMPLETE_STATE_ENUM_RX 8
        /* macros for field UPDATE access */
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_TYPE enum
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_SIZE 1
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_MASK 0x8
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_BIT 0x8
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_MSB 3
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_LSB 3
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_INDEX 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_is_true (cmd.arg.START_TX.CONDITION & 0x8)
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_value (((cmd.arg.START_TX.CONDITION & 0x8)) >> 3)
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_ENUM_UPDATE 1
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_UPDATE_ENUM_USE 0
        /* macros for field RETRANSMIT access */
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_TYPE enum
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_SIZE 1
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_MASK 0x4
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_BIT 0x4
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_MSB 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_LSB 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_INDEX 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_is_true (cmd.arg.START_TX.CONDITION & 0x4)
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_value (((cmd.arg.START_TX.CONDITION & 0x4)) >> 2)
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_ENUM_ENUM_0 0
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_RETRANSMIT_ENUM_ENUM_1 1
        /* macros for field START access */
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_TYPE enum
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_SIZE 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_MASK 0x3
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_MSB 1
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_INDEX 2
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_value (((cmd.arg.START_TX.CONDITION & 0x3)))
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_ENUM_IMMEDIATE 0
        #define EZRADIO_CMD_START_TX_ARG_CONDITION_START_ENUM_WUT 1
        /* macros for entire ARG TX_LEN access of type uint16_t */
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TYPE uint16_t
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_SIZE 16
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_MASK 0xffff
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_MSB 15
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_INDEX 3
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_value (((cmd.arg.START_TX.TX_LEN)))
        /* macros for field TX_LEN access */
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_TYPE uint16_t
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_SIZE 13
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_MASK 0x1fff
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_MSB 12
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_INDEX 3
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_MIN 0x0
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_MAX 0x1fff
        #define EZRADIO_CMD_START_TX_ARG_TX_LEN_TX_LEN_value (((cmd.arg.START_TX.TX_LEN & 0x1fff)))
        /* macros for entire ARG TX_DELAY access of type uint8_t */
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_INDEX 5
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_value (((cmd.arg.START_TX.TX_DELAY)))
        /* macros for field TX_DELAY access */
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_INDEX 5
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_MIN 0x0
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_MAX 0x80
        #define EZRADIO_CMD_START_TX_ARG_TX_DELAY_TX_DELAY_value (((cmd.arg.START_TX.TX_DELAY & 0xff)))
        /* macros for entire ARG NUM_REPEAT access of type uint8_t */
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_INDEX 6
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_value (((cmd.arg.START_TX.NUM_REPEAT)))
        /* macros for field NUM_REPEAT access */
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_TYPE uint8_t
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_SIZE 8
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_MASK 0xff
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_MSB 7
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_LSB 0
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_INDEX 6
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_MIN 0x0
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_MAX 0xff
        #define EZRADIO_CMD_START_TX_ARG_NUM_REPEAT_NUM_REPEAT_value (((cmd.arg.START_TX.NUM_REPEAT & 0xff)))
/* START_TX REPLY */
#define EZRADIO_CMD_REPLY_COUNT_START_TX 0
#define EZRADIO_CMD_ID_TX_HOP 0x37
/* TX_HOP ARGS */
#define EZRADIO_CMD_ARG_COUNT_TX_HOP 1
/* TX_HOP REPLY */
#define EZRADIO_CMD_REPLY_COUNT_TX_HOP 0
#define EZRADIO_CMD_ID_WRITE_TX_FIFO 0x66
/* WRITE_TX_FIFO ARGS */
#define EZRADIO_CMD_ARG_COUNT_WRITE_TX_FIFO 3
        /* macros for entire ARG DATA access of type uint8_t */
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_TYPE uint8_t
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_SIZE 8
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_MASK 0xff
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_MSB 7
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_LSB 0
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_INDEX 1
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_ARRAY_LEN 2
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_value(i) (((cmd.arg.WRITE_TX_FIFO.DATA[(i)])))
        /* macros for field DATA access */
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_TYPE uint8_t
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_SIZE 8
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_MASK 0xff
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_MSB 7
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_LSB 0
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_INDEX 1
        #define EZRADIO_CMD_WRITE_TX_FIFO_ARG_DATA_DATA_value(i) (((cmd.arg.WRITE_TX_FIFO.DATA[(i)] & 0xff)))
/* rx commands */

#define EZRADIO_CMD_ID_PACKET_INFO 0x16
/* PACKET_INFO ARGS */
#define EZRADIO_CMD_ARG_COUNT_PACKET_INFO 6
        /* macros for entire ARG FIELD_NUMBER access of type uint8_t */
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_TYPE uint8_t
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_SIZE 8
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_MASK 0xff
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_MSB 7
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_INDEX 1
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_value (((cmd.arg.PACKET_INFO.FIELD_NUMBER)))
        /* macros for field FIELD_NUM access */
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_TYPE enum
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_SIZE 5
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_MASK 0x1f
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_MSB 4
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_INDEX 1
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_value (((cmd.arg.PACKET_INFO.FIELD_NUMBER & 0x1f)))
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_ENUM_ENUM_0 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_ENUM_ENUM_1 1
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_ENUM_ENUM_2 2
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_ENUM_ENUM_3 4
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_ENUM_ENUM_4 8
        #define EZRADIO_CMD_PACKET_INFO_ARG_FIELD_NUMBER_FIELD_NUM_ENUM_ENUM_5 16
        /* macros for entire ARG LEN access of type uint16_t */
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_TYPE uint16_t
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_SIZE 16
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_MASK 0xffff
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_MSB 15
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_INDEX 2
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_value (((cmd.arg.PACKET_INFO.LEN)))
        /* macros for field LEN access */
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_TYPE uint16_t
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_SIZE 16
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_MASK 0xffff
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_MSB 15
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_INDEX 2
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_MIN 0x1
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_MAX 0x1fff
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_LEN_value (((cmd.arg.PACKET_INFO.LEN & 0xffff)))
        /* macros for entire ARG LEN_DIFF access of type S16 */
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_TYPE S16
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_SIZE 16
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_MASK 0xffff
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_MSB 15
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_INDEX 4
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_value (((cmd.arg.PACKET_INFO.LEN_DIFF)))
        /* macros for field LEN_DIFF access */
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_TYPE S16
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_SIZE 16
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_MASK 0xffff
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_MSB 15
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_INDEX 4
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_MIN -0x8000
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_MAX 0x7fff
        #define EZRADIO_CMD_PACKET_INFO_ARG_LEN_DIFF_LEN_DIFF_value (((cmd.arg.PACKET_INFO.LEN_DIFF & 0xffff)))
/* PACKET_INFO REPLY */
#define EZRADIO_CMD_REPLY_COUNT_PACKET_INFO 2
        /* macros for entire REPLY LENGTH access of type uint16_t */
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_TYPE uint16_t
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_SIZE 16
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_MASK 0xffff
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_MSB 15
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_INDEX 1
        /* macros for field LENGTH access */
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LENGTH_TYPE uint16_t
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LENGTH_SIZE 16
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LENGTH_MASK 0xffff
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LENGTH_MSB 15
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LENGTH_LSB 0
        #define EZRADIO_CMD_PACKET_INFO_REP_LENGTH_LENGTH_INDEX 1
#define EZRADIO_CMD_ID_GET_MODEM_STATUS 0x22
/* GET_MODEM_STATUS ARGS */
#define EZRADIO_CMD_ARG_COUNT_GET_MODEM_STATUS 2
        /* macros for entire ARG MODEM_CLR_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND)))
        /* macros for field RSSI_LATCH_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_MASK 0x80
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_BIT 0x80
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_LSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x80)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_LATCH_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x80)) >> 7)
        /* macros for field POSTAMBLE_DETECT_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_MASK 0x40
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_BIT 0x40
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_MSB 6
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_LSB 6
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x40)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_POSTAMBLE_DETECT_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x40)) >> 6)
        /* macros for field INVALID_SYNC_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_MASK 0x20
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_BIT 0x20
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_MSB 5
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_LSB 5
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x20)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_SYNC_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x20)) >> 5)
        /* macros for field RSSI_JUMP_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_MASK 0x10
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_BIT 0x10
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_MSB 4
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_LSB 4
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x10)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_JUMP_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x10)) >> 4)
        /* macros for field RSSI_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_MASK 0x8
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_BIT 0x8
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_MSB 3
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_LSB 3
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x8)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_RSSI_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x8)) >> 3)
        /* macros for field INVALID_PREAMBLE_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_MASK 0x4
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_BIT 0x4
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_MSB 2
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_LSB 2
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x4)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_INVALID_PREAMBLE_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x4)) >> 2)
        /* macros for field PREAMBLE_DETECT_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_MASK 0x2
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_BIT 0x2
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_MSB 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_LSB 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x2)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_PREAMBLE_DETECT_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x2)) >> 1)
        /* macros for field SYNC_DETECT_PEND_CLR access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_MASK 0x1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_BIT 0x1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_MSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_is_true (cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x1)
        #define EZRADIO_CMD_GET_MODEM_STATUS_ARG_MODEM_CLR_PEND_SYNC_DETECT_PEND_CLR_value (((cmd.arg.GET_MODEM_STATUS.MODEM_CLR_PEND & 0x1)))
/* GET_MODEM_STATUS REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GET_MODEM_STATUS 8
        /* macros for entire REPLY MODEM_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INDEX 1
        /* macros for field RSSI_LATCH_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_MASK 0x80
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_BIT 0x80
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_LSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_LATCH_PEND_INDEX 1
        /* macros for field POSTAMBLE_DETECT_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_MASK 0x40
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_BIT 0x40
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_MSB 6
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_LSB 6
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_POSTAMBLE_DETECT_PEND_INDEX 1
        /* macros for field INVALID_SYNC_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_MASK 0x20
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_BIT 0x20
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_MSB 5
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_LSB 5
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_SYNC_PEND_INDEX 1
        /* macros for field RSSI_JUMP_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_MASK 0x10
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_BIT 0x10
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_MSB 4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_LSB 4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_JUMP_PEND_INDEX 1
        /* macros for field RSSI_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_MASK 0x8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_BIT 0x8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_MSB 3
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_LSB 3
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_RSSI_PEND_INDEX 1
        /* macros for field INVALID_PREAMBLE_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_MSB 2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_LSB 2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_INVALID_PREAMBLE_PEND_INDEX 1
        /* macros for field PREAMBLE_DETECT_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_MSB 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_LSB 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_PREAMBLE_DETECT_PEND_INDEX 1
        /* macros for field SYNC_DETECT_PEND access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_MSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_PEND_SYNC_DETECT_PEND_INDEX 1
        /* macros for entire REPLY MODEM_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INDEX 2
        /* macros for field RSSI_LATCH access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_MASK 0x80
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_BIT 0x80
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_LSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LATCH_INDEX 2
        /* macros for field POSTAMBLE_DETECT access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_MASK 0x40
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_BIT 0x40
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_MSB 6
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_LSB 6
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_POSTAMBLE_DETECT_INDEX 2
        /* macros for field INVALID_SYNC access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_MASK 0x20
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_BIT 0x20
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_MSB 5
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_LSB 5
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_SYNC_INDEX 2
        /* macros for field RSSI_JUMP access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_MASK 0x10
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_BIT 0x10
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_MSB 4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_LSB 4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_JUMP_INDEX 2
        /* macros for field RSSI access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_MASK 0x8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_BIT 0x8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_MSB 3
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_LSB 3
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_RSSI_INDEX 2
        /* macros for field INVALID_PREAMBLE access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_MASK 0x4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_BIT 0x4
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_MSB 2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_LSB 2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_INVALID_PREAMBLE_INDEX 2
        /* macros for field PREAMBLE_DETECT access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_MASK 0x2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_BIT 0x2
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_MSB 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_LSB 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_PREAMBLE_DETECT_INDEX 2
        /* macros for field SYNC_DETECT access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_TYPE bool
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_SIZE 1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_MASK 0x1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_BIT 0x1
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_MSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_MODEM_STATUS_SYNC_DETECT_INDEX 2
        /* macros for entire REPLY CURR_RSSI access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_INDEX 3
        /* macros for field CURR_RSSI access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_CURR_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_CURR_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_CURR_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_CURR_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_CURR_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_CURR_RSSI_CURR_RSSI_INDEX 3
        /* macros for entire REPLY LATCH_RSSI access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_INDEX 4
        /* macros for field LATCH_RSSI access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LATCH_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LATCH_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LATCH_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LATCH_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LATCH_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_LATCH_RSSI_LATCH_RSSI_INDEX 4
        /* macros for entire REPLY ANT1_RSSI access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_INDEX 5
        /* macros for field ANT1_RSSI access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_ANT1_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_ANT1_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_ANT1_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_ANT1_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_ANT1_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT1_RSSI_ANT1_RSSI_INDEX 5
        /* macros for entire REPLY ANT2_RSSI access of type uint8_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_INDEX 6
        /* macros for field ANT2_RSSI access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_ANT2_RSSI_TYPE uint8_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_ANT2_RSSI_SIZE 8
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_ANT2_RSSI_MASK 0xff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_ANT2_RSSI_MSB 7
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_ANT2_RSSI_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_ANT2_RSSI_ANT2_RSSI_INDEX 6
        /* macros for entire REPLY AFC_FREQ_OFFSET access of type uint16_t */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_TYPE uint16_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_SIZE 16
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_MASK 0xffff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_MSB 15
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_INDEX 7
        /* macros for field AFC_FREQ_OFFSET access */
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_AFC_FREQ_OFFSET_TYPE uint16_t
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_AFC_FREQ_OFFSET_SIZE 16
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_AFC_FREQ_OFFSET_MASK 0xffff
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_AFC_FREQ_OFFSET_MSB 15
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_AFC_FREQ_OFFSET_LSB 0
        #define EZRADIO_CMD_GET_MODEM_STATUS_REP_AFC_FREQ_OFFSET_AFC_FREQ_OFFSET_INDEX 7
#define EZRADIO_CMD_ID_START_RX 0x32
/* START_RX ARGS */
#define EZRADIO_CMD_ARG_COUNT_START_RX 8
        /* macros for entire ARG CHANNEL access of type uint8_t */
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_TYPE uint8_t
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_SIZE 8
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_MASK 0xff
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_MSB 7
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_INDEX 1
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_value (((cmd.arg.START_RX.CHANNEL)))
        /* macros for field CHANNEL access */
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_TYPE uint8_t
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_SIZE 8
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_MASK 0xff
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_MSB 7
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_INDEX 1
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_MIN 0x0
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_MAX 0xff
        #define EZRADIO_CMD_START_RX_ARG_CHANNEL_CHANNEL_value (((cmd.arg.START_RX.CHANNEL & 0xff)))
        /* macros for entire ARG CONDITION access of type uint8_t */
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_TYPE uint8_t
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_SIZE 8
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_MASK 0xff
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_MSB 7
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_INDEX 2
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_value (((cmd.arg.START_RX.CONDITION)))
        /* macros for field UPDATE access */
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_TYPE enum
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_SIZE 1
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_MASK 0x8
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_BIT 0x8
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_MSB 3
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_LSB 3
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_INDEX 2
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_is_true (cmd.arg.START_RX.CONDITION & 0x8)
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_value (((cmd.arg.START_RX.CONDITION & 0x8)) >> 3)
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_ENUM_UPDATE 1
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_UPDATE_ENUM_USE 0
        /* macros for field START access */
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_TYPE enum
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_SIZE 2
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_MASK 0x3
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_MSB 1
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_INDEX 2
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_value (((cmd.arg.START_RX.CONDITION & 0x3)))
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_ENUM_IMMEDIATE 0
        #define EZRADIO_CMD_START_RX_ARG_CONDITION_START_ENUM_WUT 1
        /* macros for entire ARG RX_LEN access of type uint16_t */
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_TYPE uint16_t
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_SIZE 16
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_MASK 0xffff
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_MSB 15
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_INDEX 3
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_value (((cmd.arg.START_RX.RX_LEN)))
        /* macros for field RX_LEN access */
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_TYPE uint16_t
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_SIZE 13
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_MASK 0x1fff
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_MSB 12
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_INDEX 3
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_MIN 0x0
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_MAX 0x1fff
        #define EZRADIO_CMD_START_RX_ARG_RX_LEN_RX_LEN_value (((cmd.arg.START_RX.RX_LEN & 0x1fff)))
        /* macros for entire ARG NEXT_STATE1 access of type uint8_t */
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_TYPE uint8_t
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_SIZE 8
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_MASK 0xff
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_MSB 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_INDEX 5
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_value (((cmd.arg.START_RX.NEXT_STATE1)))
        /* macros for field RXTIMEOUT_STATE access */
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_TYPE enum
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_SIZE 4
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_MASK 0xf
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_MSB 3
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_INDEX 5
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_value (((cmd.arg.START_RX.NEXT_STATE1 & 0xf)))
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_NOCHANGE 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_SLEEP 1
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_SPI_ACTIVE 2
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_READY 3
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_READY2 4
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_TX_TUNE 5
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_RX_TUNE 6
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_TX 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_RX 8
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE1_RXTIMEOUT_STATE_ENUM_RX_IDLE 9
        /* macros for entire ARG NEXT_STATE2 access of type uint8_t */
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_TYPE uint8_t
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_SIZE 8
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_MASK 0xff
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_MSB 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_INDEX 6
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_value (((cmd.arg.START_RX.NEXT_STATE2)))
        /* macros for field RXVALID_STATE access */
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_TYPE enum
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_SIZE 4
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_MASK 0xf
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_MSB 3
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_INDEX 6
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_value (((cmd.arg.START_RX.NEXT_STATE2 & 0xf)))
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_REMAIN 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_SLEEP 1
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_SPI_ACTIVE 2
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_READY 3
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_READY2 4
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_TX_TUNE 5
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_RX_TUNE 6
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_TX 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE2_RXVALID_STATE_ENUM_RX 8
        /* macros for entire ARG NEXT_STATE3 access of type uint8_t */
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_TYPE uint8_t
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_SIZE 8
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_MASK 0xff
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_MSB 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_INDEX 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_value (((cmd.arg.START_RX.NEXT_STATE3)))
        /* macros for field RXINVALID_STATE access */
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_TYPE enum
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_SIZE 4
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_MASK 0xf
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_MSB 3
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_LSB 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_INDEX 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_value (((cmd.arg.START_RX.NEXT_STATE3 & 0xf)))
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_REMAIN 0
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_SLEEP 1
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_SPI_ACTIVE 2
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_READY 3
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_READY2 4
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_TX_TUNE 5
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_RX_TUNE 6
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_TX 7
        #define EZRADIO_CMD_START_RX_ARG_NEXT_STATE3_RXINVALID_STATE_ENUM_RX 8
/* START_RX REPLY */
#define EZRADIO_CMD_REPLY_COUNT_START_RX 0
#define EZRADIO_CMD_ID_RX_HOP 0x36
/* RX_HOP ARGS */
#define EZRADIO_CMD_ARG_COUNT_RX_HOP 7
        /* macros for entire ARG INTE access of type uint8_t */
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_TYPE uint8_t
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_SIZE 8
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_MASK 0xff
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_MSB 7
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_LSB 0
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INDEX 1
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_value (((cmd.arg.RX_HOP.INTE)))
        /* macros for field INTE access */
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_TYPE uint8_t
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_SIZE 8
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_MASK 0xff
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_MSB 7
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_LSB 0
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_INDEX 1
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_MIN 0x0
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_MAX 0x7f
        #define EZRADIO_CMD_RX_HOP_ARG_INTE_INTE_value (((cmd.arg.RX_HOP.INTE & 0xff)))
        /* macros for entire ARG FRAC access of type uint8_t */
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_TYPE uint8_t
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_SIZE 24
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_MASK 0xffffff
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_MSB 23
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_LSB 0
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_INDEX 2
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_23_16_value (((cmd.arg.RX_HOP.FRAC[0])))
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_15_8_value (((cmd.arg.RX_HOP.FRAC[1])))
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_7_0_value (((cmd.arg.RX_HOP.FRAC[2])))
        /* macros for field FRAC access */
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_TYPE uint8_t
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_SIZE 20
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_INDEX 2
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_MIN 0x80000
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_MAX 0xfffff
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_19_16_value (((cmd.arg.RX_HOP.FRAC[0] & 0xf)))
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_15_8_value (((cmd.arg.RX_HOP.FRAC[1] & 0xff)))
        #define EZRADIO_CMD_RX_HOP_ARG_FRAC_FRAC_7_0_value (((cmd.arg.RX_HOP.FRAC[2] & 0xff)))
        /* macros for entire ARG VCO_CNT access of type uint16_t */
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_TYPE uint16_t
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_SIZE 16
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_MASK 0xffff
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_MSB 15
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_LSB 0
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_INDEX 5
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_value (((cmd.arg.RX_HOP.VCO_CNT)))
        /* macros for field VCO_CNT access */
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_TYPE uint16_t
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_SIZE 16
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_MASK 0xffff
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_MSB 15
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_LSB 0
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_INDEX 5
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_MIN 0x0
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_MAX 0xffff
        #define EZRADIO_CMD_RX_HOP_ARG_VCO_CNT_VCO_CNT_value (((cmd.arg.RX_HOP.VCO_CNT & 0xffff)))
/* RX_HOP REPLY */
#define EZRADIO_CMD_REPLY_COUNT_RX_HOP 0
#define EZRADIO_CMD_ID_READ_RX_FIFO 0x77
/* READ_RX_FIFO ARGS */
#define EZRADIO_CMD_ARG_COUNT_READ_RX_FIFO 1
/* READ_RX_FIFO REPLY */
#define EZRADIO_CMD_REPLY_COUNT_READ_RX_FIFO 2
        /* macros for entire REPLY DATA access of type uint8_t */
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_TYPE uint8_t
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_SIZE 8
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_MASK 0xff
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_MSB 7
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_LSB 0
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_INDEX 0
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_ARRAY_LEN 2
        /* macros for field DATA access */
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_DATA_TYPE uint8_t
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_DATA_SIZE 8
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_DATA_MASK 0xff
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_DATA_MSB 7
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_DATA_LSB 0
        #define EZRADIO_CMD_READ_RX_FIFO_REP_DATA_DATA_INDEX 0
/* advanced commands */

#define EZRADIO_CMD_ID_GET_ADC_READING 0x14
/* GET_ADC_READING ARGS */
#define EZRADIO_CMD_ARG_COUNT_GET_ADC_READING 3
        /* macros for entire ARG ADC_EN access of type uint8_t */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TYPE uint8_t
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_SIZE 8
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_MASK 0xff
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_MSB 7
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_INDEX 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_value (((cmd.arg.GET_ADC_READING.ADC_EN)))
        /* macros for field TEMPERATURE_EN access */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_TYPE enum
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_SIZE 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_MASK 0x10
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_BIT 0x10
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_MSB 4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_LSB 4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_INDEX 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_is_true (cmd.arg.GET_ADC_READING.ADC_EN & 0x10)
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_value (((cmd.arg.GET_ADC_READING.ADC_EN & 0x10)) >> 4)
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_TEMPERATURE_EN_ENUM_ENUM_1 1
        /* macros for field BATTERY_VOLTAGE_EN access */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_TYPE enum
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_SIZE 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_MASK 0x8
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_BIT 0x8
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_MSB 3
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_LSB 3
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_INDEX 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_is_true (cmd.arg.GET_ADC_READING.ADC_EN & 0x8)
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_value (((cmd.arg.GET_ADC_READING.ADC_EN & 0x8)) >> 3)
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_BATTERY_VOLTAGE_EN_ENUM_ENUM_1 1
        /* macros for field ADC_GPIO_EN access */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_TYPE enum
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_SIZE 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_MASK 0x4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_BIT 0x4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_MSB 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_LSB 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_INDEX 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_is_true (cmd.arg.GET_ADC_READING.ADC_EN & 0x4)
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_value (((cmd.arg.GET_ADC_READING.ADC_EN & 0x4)) >> 2)
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_EN_ENUM_ENUM_1 1
        /* macros for field ADC_GPIO_PIN access */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_TYPE enum
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_SIZE 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_MASK 0x3
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_MSB 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_INDEX 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_value (((cmd.arg.GET_ADC_READING.ADC_EN & 0x3)))
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_ENUM_ENUM_0 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_ENUM_ENUM_1 1
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_ENUM_ENUM_2 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_EN_ADC_GPIO_PIN_ENUM_ENUM_3 3
        /* macros for entire ARG ADC_CFG access of type uint8_t */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_TYPE uint8_t
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_SIZE 8
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_MASK 0xff
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_MSB 7
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_INDEX 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_value (((cmd.arg.GET_ADC_READING.ADC_CFG)))
        /* macros for field UDTIME access */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_TYPE uint8_t
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_SIZE 4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_MASK 0xf0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_MSB 7
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_LSB 4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_INDEX 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_UDTIME_value (((cmd.arg.GET_ADC_READING.ADC_CFG & 0xf0)) >> 4)
        /* macros for field GPIO_ATT access */
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_TYPE enum
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_SIZE 4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_MASK 0xf
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_MSB 3
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_INDEX 2
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_value (((cmd.arg.GET_ADC_READING.ADC_CFG & 0xf)))
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_ENUM_0P8 0
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_ENUM_1P6 4
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_ENUM_3P2 5
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_ENUM_2P4 8
        #define EZRADIO_CMD_GET_ADC_READING_ARG_ADC_CFG_GPIO_ATT_ENUM_3P6 9
/* GET_ADC_READING REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GET_ADC_READING 6
        /* macros for entire REPLY GPIO_ADC access of type uint16_t */
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_TYPE uint16_t
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_SIZE 16
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_MASK 0xffff
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_MSB 15
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_INDEX 1
        /* macros for field GPIO_ADC access */
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_GPIO_ADC_TYPE uint16_t
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_GPIO_ADC_SIZE 11
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_GPIO_ADC_MASK 0x7ff
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_GPIO_ADC_MSB 10
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_GPIO_ADC_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_REP_GPIO_ADC_GPIO_ADC_INDEX 1
        /* macros for entire REPLY BATTERY_ADC access of type uint16_t */
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_TYPE uint16_t
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_SIZE 16
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_MASK 0xffff
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_MSB 15
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_INDEX 3
        /* macros for field BATTERY_ADC access */
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_BATTERY_ADC_TYPE uint16_t
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_BATTERY_ADC_SIZE 11
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_BATTERY_ADC_MASK 0x7ff
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_BATTERY_ADC_MSB 10
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_BATTERY_ADC_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_REP_BATTERY_ADC_BATTERY_ADC_INDEX 3
        /* macros for entire REPLY TEMP_ADC access of type uint16_t */
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TYPE uint16_t
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_SIZE 16
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_MASK 0xffff
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_MSB 15
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_INDEX 5
        /* macros for field TEMP_ADC access */
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TEMP_ADC_TYPE uint16_t
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TEMP_ADC_SIZE 11
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TEMP_ADC_MASK 0x7ff
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TEMP_ADC_MSB 10
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TEMP_ADC_LSB 0
        #define EZRADIO_CMD_GET_ADC_READING_REP_TEMP_ADC_TEMP_ADC_INDEX 5
#define EZRADIO_CMD_ID_GET_PH_STATUS 0x21
/* GET_PH_STATUS ARGS */
#define EZRADIO_CMD_ARG_COUNT_GET_PH_STATUS 2
        /* macros for entire ARG PH_CLR_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_SIZE 8
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_MSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_LSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND)))
        /* macros for field FILTER_MATCH_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_MASK 0x80
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_BIT 0x80
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_MSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_LSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x80)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MATCH_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x80)) >> 7)
        /* macros for field FILTER_MISS_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_MASK 0x40
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_BIT 0x40
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_MSB 6
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_LSB 6
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x40)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_FILTER_MISS_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x40)) >> 6)
        /* macros for field PACKET_SENT_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_MASK 0x20
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_BIT 0x20
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_MSB 5
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_LSB 5
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x20)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_SENT_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x20)) >> 5)
        /* macros for field PACKET_RX_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_MASK 0x10
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_BIT 0x10
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_MSB 4
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_LSB 4
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x10)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_PACKET_RX_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x10)) >> 4)
        /* macros for field CRC_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_MASK 0x8
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_BIT 0x8
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_MSB 3
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_LSB 3
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x8)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_CRC_ERROR_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x8)) >> 3)
        /* macros for field ALT_CRC_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_MASK 0x4
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_BIT 0x4
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_MSB 2
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_LSB 2
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x4)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_ALT_CRC_ERROR_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x4)) >> 2)
        /* macros for field TX_FIFO_ALMOST_EMPTY_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_MASK 0x2
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_BIT 0x2
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_MSB 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_LSB 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x2)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_TX_FIFO_ALMOST_EMPTY_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x2)) >> 1)
        /* macros for field RX_FIFO_ALMOST_FULL_PEND_CLR access */
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_MASK 0x1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_BIT 0x1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_MSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_LSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_is_true (cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x1)
        #define EZRADIO_CMD_GET_PH_STATUS_ARG_PH_CLR_PEND_RX_FIFO_ALMOST_FULL_PEND_CLR_value (((cmd.arg.GET_PH_STATUS.PH_CLR_PEND & 0x1)))
/* GET_PH_STATUS REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GET_PH_STATUS 2
        /* macros for entire REPLY PH_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_SIZE 8
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_MSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_LSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_INDEX 1
        /* macros for field FILTER_MATCH_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_MASK 0x80
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_BIT 0x80
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_MSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_LSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MATCH_PEND_INDEX 1
        /* macros for field FILTER_MISS_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_MASK 0x40
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_BIT 0x40
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_MSB 6
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_LSB 6
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_FILTER_MISS_PEND_INDEX 1
        /* macros for field PACKET_SENT_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_MASK 0x20
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_BIT 0x20
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_MSB 5
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_LSB 5
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_SENT_PEND_INDEX 1
        /* macros for field PACKET_RX_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_MASK 0x10
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_BIT 0x10
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_MSB 4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_LSB 4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_PACKET_RX_PEND_INDEX 1
        /* macros for field CRC_ERROR_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_MASK 0x8
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_BIT 0x8
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_MSB 3
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_LSB 3
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_CRC_ERROR_PEND_INDEX 1
        /* macros for field ALT_CRC_ERROR_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_MSB 2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_LSB 2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_ALT_CRC_ERROR_PEND_INDEX 1
        /* macros for field TX_FIFO_ALMOST_EMPTY_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_MSB 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_LSB 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_TX_FIFO_ALMOST_EMPTY_PEND_INDEX 1
        /* macros for field RX_FIFO_ALMOST_FULL_PEND access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_MSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_LSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_PEND_RX_FIFO_ALMOST_FULL_PEND_INDEX 1
        /* macros for entire REPLY PH_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_MSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_LSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_INDEX 2
        /* macros for field FILTER_MATCH access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_MASK 0x80
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_BIT 0x80
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_MSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_LSB 7
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MATCH_INDEX 2
        /* macros for field FILTER_MISS access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_MASK 0x40
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_BIT 0x40
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_MSB 6
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_LSB 6
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_FILTER_MISS_INDEX 2
        /* macros for field PACKET_SENT access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_MASK 0x20
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_BIT 0x20
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_MSB 5
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_LSB 5
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_SENT_INDEX 2
        /* macros for field PACKET_RX access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_MASK 0x10
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_BIT 0x10
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_MSB 4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_LSB 4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_PACKET_RX_INDEX 2
        /* macros for field CRC_ERROR access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_MASK 0x8
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_BIT 0x8
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_MSB 3
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_LSB 3
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_CRC_ERROR_INDEX 2
        /* macros for field ALT_CRC_ERROR access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_MASK 0x4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_BIT 0x4
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_MSB 2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_LSB 2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_ALT_CRC_ERROR_INDEX 2
        /* macros for field TX_FIFO_ALMOST_EMPTY access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_MASK 0x2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_BIT 0x2
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_MSB 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_LSB 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_TX_FIFO_ALMOST_EMPTY_INDEX 2
        /* macros for field RX_FIFO_ALMOST_FULL access */
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_TYPE bool
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_SIZE 1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_MASK 0x1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_BIT 0x1
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_MSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_LSB 0
        #define EZRADIO_CMD_GET_PH_STATUS_REP_PH_STATUS_RX_FIFO_ALMOST_FULL_INDEX 2
#define EZRADIO_CMD_ID_GET_CHIP_STATUS 0x23
/* GET_CHIP_STATUS ARGS */
#define EZRADIO_CMD_ARG_COUNT_GET_CHIP_STATUS 2
        /* macros for entire ARG CHIP_CLR_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND)))
        /* macros for field CAL_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_MASK 0x40
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_BIT 0x40
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_MSB 6
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_LSB 6
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x40)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CAL_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x40)) >> 6)
        /* macros for field FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_MASK 0x20
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_BIT 0x20
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_MSB 5
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_LSB 5
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x20)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x20)) >> 5)
        /* macros for field STATE_CHANGE_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_MASK 0x10
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_BIT 0x10
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_MSB 4
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_LSB 4
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x10)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_STATE_CHANGE_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x10)) >> 4)
        /* macros for field CMD_ERROR_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_MASK 0x8
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_BIT 0x8
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_MSB 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_LSB 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x8)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CMD_ERROR_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x8)) >> 3)
        /* macros for field CHIP_READY_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_MASK 0x4
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_BIT 0x4
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_MSB 2
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_LSB 2
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x4)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_CHIP_READY_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x4)) >> 2)
        /* macros for field LOW_BATT_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_MASK 0x2
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_BIT 0x2
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_MSB 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_LSB 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x2)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_LOW_BATT_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x2)) >> 1)
        /* macros for field WUT_PEND_CLR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_MASK 0x1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_BIT 0x1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_MSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_INDEX 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_is_true (cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x1)
        #define EZRADIO_CMD_GET_CHIP_STATUS_ARG_CHIP_CLR_PEND_WUT_PEND_CLR_value (((cmd.arg.GET_CHIP_STATUS.CHIP_CLR_PEND & 0x1)))
/* GET_CHIP_STATUS REPLY */
#define EZRADIO_CMD_REPLY_COUNT_GET_CHIP_STATUS 4
        /* macros for entire REPLY CHIP_PEND access of type uint8_t */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_TYPE uint8_t
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_INDEX 1
        /* macros for field CAL_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_MASK 0x40
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_BIT 0x40
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_MSB 6
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_LSB 6
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CAL_PEND_INDEX 1
        /* macros for field FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_MASK 0x20
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_BIT 0x20
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_MSB 5
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_LSB 5
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_FIFO_UNDERFLOW_OVERFLOW_ERROR_PEND_INDEX 1
        /* macros for field STATE_CHANGE_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_MASK 0x10
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_BIT 0x10
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_MSB 4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_LSB 4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_STATE_CHANGE_PEND_INDEX 1
        /* macros for field CMD_ERROR_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_MASK 0x8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_BIT 0x8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_MSB 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_LSB 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CMD_ERROR_PEND_INDEX 1
        /* macros for field CHIP_READY_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_MASK 0x4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_BIT 0x4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_MSB 2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_LSB 2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_CHIP_READY_PEND_INDEX 1
        /* macros for field LOW_BATT_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_MASK 0x2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_BIT 0x2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_MSB 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_LSB 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_LOW_BATT_PEND_INDEX 1
        /* macros for field WUT_PEND access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_MASK 0x1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_BIT 0x1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_MSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_PEND_WUT_PEND_INDEX 1
        /* macros for entire REPLY CHIP_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_INDEX 2
        /* macros for field CAL access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_MASK 0x40
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_BIT 0x40
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_MSB 6
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_LSB 6
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CAL_INDEX 2
        /* macros for field FIFO_UNDERFLOW_OVERFLOW_ERROR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_MASK 0x20
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_BIT 0x20
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_MSB 5
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_LSB 5
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_FIFO_UNDERFLOW_OVERFLOW_ERROR_INDEX 2
        /* macros for field STATE_CHANGE access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_MASK 0x10
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_BIT 0x10
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_MSB 4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_LSB 4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_STATE_CHANGE_INDEX 2
        /* macros for field CMD_ERROR access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_MASK 0x8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_BIT 0x8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_MSB 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_LSB 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CMD_ERROR_INDEX 2
        /* macros for field CHIP_READY access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_MASK 0x4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_BIT 0x4
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_MSB 2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_LSB 2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_CHIP_READY_INDEX 2
        /* macros for field LOW_BATT access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_MASK 0x2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_BIT 0x2
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_MSB 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_LSB 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_LOW_BATT_INDEX 2
        /* macros for field WUT access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_TYPE bool
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_SIZE 1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_MASK 0x1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_BIT 0x1
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_MSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CHIP_STATUS_WUT_INDEX 2
        /* macros for entire REPLY CMD_ERR_STATUS access of type uint8_t */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_TYPE uint8_t
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_INDEX 3
        /* macros for field CMD_ERR_STATUS access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_TYPE enum
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_INDEX 3
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_NONE 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_BAD_COMMAND 16
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_BAD_ARG 17
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_COMMAND_BUSY 18
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_INVALID_STATE 19
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_BAD_BOOTMODE 49
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_STATUS_CMD_ERR_STATUS_ENUM_CMD_ERROR_BAD_PROPERTY 64
        /* macros for entire REPLY CMD_ERR_CMD_ID access of type uint8_t */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_TYPE uint8_t
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_INDEX 4
        /* macros for field CMD_ERR_CMD_ID access */
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_CMD_ERR_CMD_ID_TYPE enum
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_CMD_ERR_CMD_ID_SIZE 8
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_CMD_ERR_CMD_ID_MASK 0xff
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_CMD_ERR_CMD_ID_MSB 7
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_CMD_ERR_CMD_ID_LSB 0
        #define EZRADIO_CMD_GET_CHIP_STATUS_REP_CMD_ERR_CMD_ID_CMD_ERR_CMD_ID_INDEX 4

//! @endcond

#endif  /* _EZRADIO_CMD_H_ */
