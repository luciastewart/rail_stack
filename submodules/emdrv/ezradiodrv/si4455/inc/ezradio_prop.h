/***************************************************************************//**
 * @file si4455/inc/ezradio_prop.h
 * @brief EZRadio Property Header
 *
 * THIS FILE IS AUTOMATICALLY GENERATED. DO NOT EDIT!
 *
 * Generated from API Version:
 * Interface Version: 1.0
 * Document Version: 2.0.3
 *
 * Relevant to parts:
 * Si4455_revC2A
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


#ifndef EZRADIO_PROP_H
#define EZRADIO_PROP_H

//! @cond Doxygen_Suppress

// Property group ID defines.
#define EZRADIO_PROP_GRP_ID_INT_CTL 1
#define EZRADIO_PROP_GRP_ID_FRR_CTL 2
#define EZRADIO_PROP_GRP_ID_SYNC 17
#define EZRADIO_PROP_GRP_ID_PA 34
#define EZRADIO_PROP_GRP_ID_EZCONFIG 36
#define EZRADIO_PROP_GRP_ID_FREQ_CONTROL 64

// Property group length defines.
#define EZRADIO_PROP_GRP_LEN_INT_CTL 4
#define EZRADIO_PROP_GRP_LEN_FRR_CTL 4
#define EZRADIO_PROP_GRP_LEN_SYNC 5
#define EZRADIO_PROP_GRP_LEN_PA 1
#define EZRADIO_PROP_GRP_LEN_EZCONFIG 2
#define EZRADIO_PROP_GRP_LEN_FREQ_CONTROL 6

// Property index within a group defines.
#define EZRADIO_PROP_GRP_INDEX_INT_CTL_ENABLE 0
#define EZRADIO_PROP_GRP_INDEX_INT_CTL_PH_ENABLE 1
#define EZRADIO_PROP_GRP_INDEX_INT_CTL_MODEM_ENABLE 2
#define EZRADIO_PROP_GRP_INDEX_INT_CTL_CHIP_ENABLE 3
#define EZRADIO_PROP_GRP_INDEX_FRR_CTL_A_MODE 0
#define EZRADIO_PROP_GRP_INDEX_FRR_CTL_B_MODE 1
#define EZRADIO_PROP_GRP_INDEX_FRR_CTL_C_MODE 2
#define EZRADIO_PROP_GRP_INDEX_FRR_CTL_D_MODE 3
#define EZRADIO_PROP_GRP_INDEX_SYNC_CONFIG 0
#define EZRADIO_PROP_GRP_INDEX_SYNC_BITS 1
#define EZRADIO_PROP_GRP_INDEX_PA_PWR_LVL 1
#define EZRADIO_PROP_GRP_INDEX_EZCONFIG_MODULATION 0
#define EZRADIO_PROP_GRP_INDEX_EZCONFIG_XO_TUNE 3
#define EZRADIO_PROP_GRP_INDEX_FREQ_CONTROL_INTE 0
#define EZRADIO_PROP_GRP_INDEX_FREQ_CONTROL_FRAC 1
#define EZRADIO_PROP_GRP_INDEX_FREQ_CONTROL_CHANNEL_STEP_SIZE 4

// Defines for fields within the properties.
#define EZRADIO_PROP_INT_CTL_ENABLE_DEFAULT 0x4

#define EZRADIO_PROP_INT_CTL_ENABLE_MASK 0xff
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_LSB 2
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_MSB 2
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_MASK 0x4
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_BIT 0x4
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_TRUE_BIT 0x4
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_ENUM_DISABLED 0
#define EZRADIO_PROP_INT_CTL_ENABLE_CHIP_INT_STATUS_EN_ENUM_ENABLED 1
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_LSB 1
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_MSB 1
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_MASK 0x2
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_BIT 0x2
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_TRUE_BIT 0x2
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_ENUM_DISABLED 0
#define EZRADIO_PROP_INT_CTL_ENABLE_MODEM_INT_STATUS_EN_ENUM_ENABLED 1
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_LSB 0
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_MSB 0
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_MASK 0x1
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_BIT 0x1
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_TRUE_BIT 0x1
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_ENUM_DISABLED 0
#define EZRADIO_PROP_INT_CTL_ENABLE_PH_INT_STATUS_EN_ENUM_ENABLED 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_DEFAULT 0x0

#define EZRADIO_PROP_INT_CTL_PH_ENABLE_MASK 0xff
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_LSB 7
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_MSB 7
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_MASK 0x80
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_BIT 0x80
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_TRUE_BIT 0x80
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MATCH_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_LSB 6
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_MSB 6
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_MASK 0x40
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_BIT 0x40
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_TRUE_BIT 0x40
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_FILTER_MISS_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_LSB 5
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_MSB 5
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_MASK 0x20
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_BIT 0x20
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_TRUE_BIT 0x20
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_SENT_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_LSB 4
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_MSB 4
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_MASK 0x10
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_BIT 0x10
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_TRUE_BIT 0x10
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_PACKET_RX_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_LSB 3
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_MSB 3
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_MASK 0x8
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_BIT 0x8
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_TRUE_BIT 0x8
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_CRC_ERROR_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_LSB 2
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_MSB 2
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_MASK 0x4
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_BIT 0x4
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_TRUE_BIT 0x4
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_ALT_CRC_ERROR_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_LSB 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_MSB 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_MASK 0x2
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_BIT 0x2
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_TRUE_BIT 0x2
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_TX_FIFO_ALMOST_EMPTY_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_LSB 0
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_MSB 0
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_MASK 0x1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_BIT 0x1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_TRUE_BIT 0x1
#define EZRADIO_PROP_INT_CTL_PH_ENABLE_RX_FIFO_ALMOST_FULL_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_DEFAULT 0x0

#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_MASK 0xff
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_LSB 7
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_MSB 7
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_MASK 0x80
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_BIT 0x80
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_TRUE_BIT 0x80
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_LATCH_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_LSB 6
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_MSB 6
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_MASK 0x40
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_BIT 0x40
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_TRUE_BIT 0x40
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_POSTAMBLE_DETECT_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_LSB 5
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_MSB 5
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_MASK 0x20
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_BIT 0x20
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_TRUE_BIT 0x20
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_SYNC_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_LSB 4
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_MSB 4
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_MASK 0x10
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_BIT 0x10
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_TRUE_BIT 0x10
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_JUMP_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_LSB 3
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_MSB 3
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_MASK 0x8
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_BIT 0x8
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_TRUE_BIT 0x8
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_RSSI_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_LSB 2
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_MSB 2
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_MASK 0x4
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_BIT 0x4
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_TRUE_BIT 0x4
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_INVALID_PREAMBLE_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_LSB 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_MSB 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_MASK 0x2
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_BIT 0x2
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_TRUE_BIT 0x2
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_PREAMBLE_DETECT_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_LSB 0
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_MSB 0
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_MASK 0x1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_BIT 0x1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_TRUE_BIT 0x1
#define EZRADIO_PROP_INT_CTL_MODEM_ENABLE_SYNC_DETECT_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_DEFAULT 0x4

#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_MASK 0xff
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_LSB 6
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_MSB 6
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_MASK 0x40
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_BIT 0x40
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_TRUE_BIT 0x40
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CAL_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_LSB 5
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_MSB 5
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_MASK 0x20
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_BIT 0x20
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_TRUE_BIT 0x20
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_FIFO_UNDERFLOW_OVERFLOW_ERROR_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_LSB 4
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_MSB 4
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_MASK 0x10
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_BIT 0x10
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_TRUE_BIT 0x10
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_STATE_CHANGE_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_LSB 3
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_MSB 3
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_MASK 0x8
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_BIT 0x8
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_TRUE_BIT 0x8
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CMD_ERROR_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_LSB 2
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_MSB 2
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_MASK 0x4
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_BIT 0x4
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_TRUE_BIT 0x4
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_CHIP_READY_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_LSB 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_MSB 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_MASK 0x2
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_BIT 0x2
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_TRUE_BIT 0x2
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_LOW_BATT_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_SIZE 1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_LSB 0
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_MSB 0
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_MASK 0x1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_BIT 0x1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_TRUE_BIT 0x1
#define EZRADIO_PROP_INT_CTL_CHIP_ENABLE_WUT_EN_FALSE_BIT 0x00
#define EZRADIO_PROP_FRR_CTL_A_MODE_DEFAULT 0x1

#define EZRADIO_PROP_FRR_CTL_A_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_SIZE 8
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_LSB 0
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_MSB 7
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_MIN 0
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_MAX 0
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_DISABLED 0
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_STATUS 1
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_PEND 2
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_PH_STATUS 3
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_PH_PEND 4
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_MODEM_STATUS 5
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_MODEM_PEND 6
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_CHIP_STATUS 7
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_INT_CHIP_PEND 8
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_CURRENT_STATE 9
#define EZRADIO_PROP_FRR_CTL_A_MODE_FRR_A_MODE_ENUM_LATCHED_RSSI 10
#define EZRADIO_PROP_FRR_CTL_B_MODE_DEFAULT 0x2

#define EZRADIO_PROP_FRR_CTL_B_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_SIZE 8
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_LSB 0
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_MSB 7
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_MIN 0
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_MAX 0
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_DISABLED 0
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_STATUS 1
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_PEND 2
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_PH_STATUS 3
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_PH_PEND 4
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_MODEM_STATUS 5
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_MODEM_PEND 6
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_CHIP_STATUS 7
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_INT_CHIP_PEND 8
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_CURRENT_STATE 9
#define EZRADIO_PROP_FRR_CTL_B_MODE_FRR_B_MODE_ENUM_LATCHED_RSSI 10
#define EZRADIO_PROP_FRR_CTL_C_MODE_DEFAULT 0x9

#define EZRADIO_PROP_FRR_CTL_C_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_SIZE 8
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_LSB 0
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_MSB 7
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_MIN 0
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_MAX 0
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_DISABLED 0
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_STATUS 1
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_PEND 2
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_PH_STATUS 3
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_PH_PEND 4
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_MODEM_STATUS 5
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_MODEM_PEND 6
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_CHIP_STATUS 7
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_INT_CHIP_PEND 8
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_CURRENT_STATE 9
#define EZRADIO_PROP_FRR_CTL_C_MODE_FRR_C_MODE_ENUM_LATCHED_RSSI 10
#define EZRADIO_PROP_FRR_CTL_D_MODE_DEFAULT 0x0

#define EZRADIO_PROP_FRR_CTL_D_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_SIZE 8
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_LSB 0
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_MSB 7
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_MIN 0
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_MAX 0
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_MASK 0xff
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_DISABLED 0
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_STATUS 1
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_PEND 2
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_PH_STATUS 3
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_PH_PEND 4
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_MODEM_STATUS 5
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_MODEM_PEND 6
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_CHIP_STATUS 7
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_INT_CHIP_PEND 8
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_CURRENT_STATE 9
#define EZRADIO_PROP_FRR_CTL_D_MODE_FRR_D_MODE_ENUM_LATCHED_RSSI 10

#define EZRADIO_PROP_SYNC_CONFIG_DEFAULT 0x1

#define EZRADIO_PROP_SYNC_CONFIG_MASK 0xff
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_SIZE 1
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_LSB 7
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_MSB 7
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_MASK 0x80
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_BIT 0x80
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_TRUE_BIT 0x80
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_FALSE_BIT 0x00
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_ENUM_SYNC_XMIT 0
#define EZRADIO_PROP_SYNC_CONFIG_SKIP_TX_ENUM_NO_SYNC_XMIT 1
#define EZRADIO_PROP_SYNC_CONFIG_RX_ERRORS_SIZE 3
#define EZRADIO_PROP_SYNC_CONFIG_RX_ERRORS_LSB 4
#define EZRADIO_PROP_SYNC_CONFIG_RX_ERRORS_MSB 6
#define EZRADIO_PROP_SYNC_CONFIG_RX_ERRORS_MIN 0
#define EZRADIO_PROP_SYNC_CONFIG_RX_ERRORS_MAX 7
#define EZRADIO_PROP_SYNC_CONFIG_RX_ERRORS_MASK 0x70
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_SIZE 1
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_LSB 3
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_MSB 3
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_MASK 0x8
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_BIT 0x8
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_TRUE_BIT 0x8
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_FALSE_BIT 0x00
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_ENUM_ENUM_0 0
#define EZRADIO_PROP_SYNC_CONFIG_4FSK_ENUM_ENUM_1 1
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_SIZE 1
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_LSB 2
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_MSB 2
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_MASK 0x4
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_BIT 0x4
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_TRUE_BIT 0x4
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_FALSE_BIT 0x00
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_ENUM_DISABLED 0
#define EZRADIO_PROP_SYNC_CONFIG_MANCH_ENUM_ENABLED 1
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_SIZE 2
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_LSB 0
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_MSB 1
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_MIN 0
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_MAX 0
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_MASK 0x3
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_ENUM_LEN_1_BYTES 0
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_ENUM_LEN_2_BYTES 1
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_ENUM_LEN_3_BYTES 2
#define EZRADIO_PROP_SYNC_CONFIG_LENGTH_ENUM_LEN_4_BYTES 3
#define EZRADIO_PROP_SYNC_BITS_DEFAULT ([ 0x2d, 0xd4, 0x2d, 0xd4 ])

#define EZRADIO_PROP_SYNC_BITS_BITS_SIZE 32
#define EZRADIO_PROP_SYNC_BITS_BITS_MSB 31
#define EZRADIO_PROP_SYNC_BITS_BITS_LSB 0
#define EZRADIO_PROP_SYNC_BITS_BITS_MIN 0
#define EZRADIO_PROP_SYNC_BITS_BITS_MAX 4294967295
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_INDEX 1
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_MASK 0xff
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_DEFAULT 0x2d
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_SIZE 8
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_LSB 0
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_MSB 7
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_MIN 0
#define EZRADIO_PROP_SYNC_BITS_BITS_31_24_MAX 255
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_INDEX 2
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_MASK 0xff
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_DEFAULT 0xd4
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_SIZE 8
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_LSB 0
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_MSB 7
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_MIN 0
#define EZRADIO_PROP_SYNC_BITS_BITS_23_16_MAX 255
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_INDEX 3
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_MASK 0xff
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_DEFAULT 0x2d
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_SIZE 8
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_LSB 0
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_MSB 7
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_MIN 0
#define EZRADIO_PROP_SYNC_BITS_BITS_15_8_MAX 255
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_INDEX 4
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_MASK 0xff
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_DEFAULT 0xd4
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_SIZE 8
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_LSB 0
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_MSB 7
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_MIN 0
#define EZRADIO_PROP_SYNC_BITS_BITS_7_0_MAX 255

#define EZRADIO_PROP_PA_PWR_LVL_DEFAULT 0x7f

#define EZRADIO_PROP_PA_PWR_LVL_MASK 0xff
#define EZRADIO_PROP_PA_PWR_LVL_DDAC_SIZE 7
#define EZRADIO_PROP_PA_PWR_LVL_DDAC_LSB 0
#define EZRADIO_PROP_PA_PWR_LVL_DDAC_MSB 6
#define EZRADIO_PROP_PA_PWR_LVL_DDAC_MIN 0
#define EZRADIO_PROP_PA_PWR_LVL_DDAC_MAX 127
#define EZRADIO_PROP_PA_PWR_LVL_DDAC_MASK 0x7f

#define EZRADIO_PROP_EZCONFIG_MODULATION_DEFAULT 0x2
#define EZRADIO_PROP_EZCONFIG_MODULATION_MASK 0xff
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_SIZE 1
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_LSB 7
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_MSB 7
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_MASK 0x80
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_BIT 0x80
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_TRUE_BIT 0x80
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_FALSE_BIT 0x00
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_ENUM_SYNC 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_TYPE_ENUM_ASYNC 1
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_SIZE 2
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_LSB 5
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_MSB 6
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_MIN 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_MAX 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_MASK 0x60
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_ENUM_GPIO0 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_ENUM_GPIO1 1
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_ENUM_GPIO2 2
#define EZRADIO_PROP_EZCONFIG_MODULATION_TX_DIRECT_MODE_GPIO_ENUM_GPIO3 3
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_SIZE 2
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_LSB 3
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_MSB 4
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_MIN 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_MAX 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_MASK 0x18
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_ENUM_PACKET 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_ENUM_DIRECT 1
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_SOURCE_ENUM_PSEUDO 2
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_SIZE 2
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_LSB 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_MSB 1
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_MIN 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_MAX 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_MASK 0x3
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_ENUM_CW 0
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_ENUM_OOK 1
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_ENUM_2FSK 2
#define EZRADIO_PROP_EZCONFIG_MODULATION_MOD_TYPE_ENUM_2GFSK 3

#define EZRADIO_PROP_EZCONFIG_XO_TUNE_DEFAULT 0x40
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_MASK 0xff
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_SIZE 7
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_LSB 0
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_MSB 6
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_MIN 0
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_MAX 0
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_MASK 0x7f
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_ENUM_FASTEST_FREQUENCY 0
#define EZRADIO_PROP_EZCONFIG_XO_TUNE_TUNE_VALUE_ENUM_SLOWEST_FREQUENCY 127

#define EZRADIO_PROP_FREQ_CONTROL_INTE_DEFAULT 0x3c

#define EZRADIO_PROP_FREQ_CONTROL_INTE_MASK 0xff
#define EZRADIO_PROP_FREQ_CONTROL_INTE_INTE_SIZE 7
#define EZRADIO_PROP_FREQ_CONTROL_INTE_INTE_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_INTE_INTE_MSB 6
#define EZRADIO_PROP_FREQ_CONTROL_INTE_INTE_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_INTE_INTE_MAX 127
#define EZRADIO_PROP_FREQ_CONTROL_INTE_INTE_MASK 0x7f
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_DEFAULT ([ 0x8, 0x0, 0x0 ])

#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_SIZE 20
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_MSB 19
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_MAX 1048575
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_INDEX 1
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_MASK 0xf
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_DEFAULT 0x8
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_SIZE 4
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_MSB 3
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_19_16_MAX 15
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_INDEX 2
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_MASK 0xff
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_DEFAULT 0x0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_SIZE 8
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_MSB 7
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_15_8_MAX 255
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_INDEX 3
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_MASK 0xff
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_DEFAULT 0x0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_SIZE 8
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_MSB 7
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_FRAC_FRAC_7_0_MAX 255

#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_DEFAULT ([ 0x0, 0x0 ])

#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_SIZE 16
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_MSB 15
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_MAX 65535
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_INDEX 4
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_MASK 0xff
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_DEFAULT 0x0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_SIZE 8
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_MSB 7
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_15_8_MAX 255
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_INDEX 5
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_MASK 0xff
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_DEFAULT 0x0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_SIZE 8
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_LSB 0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_MSB 7
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_MIN 0
#define EZRADIO_PROP_FREQ_CONTROL_CHANNEL_STEP_SIZE_CHANNEL_STEP_SIZE_7_0_MAX 255

//! @endcond
 
#endif  /* _EZRADIO_PROP_H_ */
