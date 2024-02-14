/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        F4PRO
#define MANUFACTURER_ID   ORQA

#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6000
#define USE_BARO_SPI_BMP280
#define USE_MAX7456
#define USE_SDCARD

#define BEEPER_PIN           PA8
#define MOTOR1_PIN           PA3
#define MOTOR2_PIN           PB0
#define MOTOR3_PIN           PB1
#define MOTOR4_PIN           PA2

#define I2C1_SCL_PIN         PB6
#define I2C1_SDA_PIN         PB7

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define UART3_TX_PIN         PB10
#define UART3_RX_PIN         PB11

#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7

#define LED0_PIN             A15
#define LED1_PIN             B04

#define SPI1_SCK_PIN         A05
#define SPI1_SDI_PIN         A06
#define SPI1_SDO_PIN         PA7

#define SPI2_SCK_PIN         B13
#define SPI2_SDI_PIN         B14
#define SPI2_SDO_PIN         PB15

#define SPI3_SCK_PIN         C10
#define SPI3_SDI_PIN         C11
#define SPI3_SDO_PIN         PB05

#define ADC_VBAT_PIN         PC1
#define ADC_CURR_PIN         PC3

#define FLASH_CS_PIN         PB3
#define MAX7456_SPI_CS_PIN   PB12
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC5

#define TIMER_PIN_MAPPING \


#define SPI2_TX_DMA_OPT     0
#define ADC2_DMA_OPT        1

#define USE_BARO
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define ADC_INSTANCE ADC2
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI3
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
