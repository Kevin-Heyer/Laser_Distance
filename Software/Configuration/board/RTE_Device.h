/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * Copyright 2018-2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __RTE_DEVICE_H
#define __RTE_DEVICE_H

/***********************************************************************************************************************
 * Global functions
 **********************************************************************************************************************/
/* Pins initialization function for component USB_I2C*/
extern void LPI2C1_InitPins(void);
/* Pins deinitialization function for component USB_I2C*/
extern void LPI2C1_DeinitPins(void);

/***********************************************************************************************************************
 * Driver name mapping
 **********************************************************************************************************************/
/* Enable peripheral */
#define RTE_SPI1 1
/* Enable peripheral */
#define RTE_I2C1 1
/* Enable I2C DMA */
#define RTE_I2C1_DMA_EN 0

/***********************************************************************************************************************
 * Driver configuration
 **********************************************************************************************************************/
/* PCS to SCK delay. */
#define RTE_SPI1_PCS_TO_SCK_DELAY 0
/* SCK to PCS delay. */
#define RTE_SPI1_SCK_TO_PSC_DELAY 0
/* Between transfer delay. */
#define RTE_SPI1_BETWEEN_TRANSFER_DELAY 0
/* Peripheral chip select. */
#define RTE_SPI1_MASTER_PCS_PIN_SEL kLPSPI_MasterPcs0
/* I2C1 configuration */
/* Pins initialization function */
#define RTE_I2C1_PIN_INIT LPI2C1_InitPins
/* Pins deinitialization function */
#define RTE_I2C1_PIN_DEINIT LPI2C1_DeinitPins


#endif /* __RTE_DEVICE_H */
