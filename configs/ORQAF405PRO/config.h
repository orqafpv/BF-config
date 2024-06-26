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

#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_BARO
#define USE_BARO_DPS310
#define USE_MAX7456

#define BEEPER_PIN           PA8
#define MOTOR1_PIN           PA3
#define MOTOR2_PIN           PB0
#define MOTOR3_PIN           PB1
#define MOTOR4_PIN           PA2
#define SERVO1_PIN           PA0
#define SERVO2_PIN           PA1

#define I2C1_SCL_PIN         PB6
#define I2C1_SDA_PIN         PB7

#define UART1_TX_PIN         PA9
#define UART1_RX_PIN         PA10

#define UART3_TX_PIN         PB10
#define UART3_RX_PIN         PB11

#define UART5_TX_PIN         PD2

#define UART6_TX_PIN         PC6
#define UART6_RX_PIN         PC7

#define LED0_PIN             PA15
#define LED1_PIN             PB4

#define SPI1_SCK_PIN         PA5
#define SPI1_SDI_PIN         PA6
#define SPI1_SDO_PIN         PA7

#define SPI2_SCK_PIN         PB13
#define SPI2_SDI_PIN         PB14
#define SPI2_SDO_PIN         PB15
#define MAX7456_SPI_CS_PIN   PB12

#define SPI3_SCK_PIN         PC10
#define SPI3_SDI_PIN         PC11
#define SPI3_SDO_PIN         PB5
#define FLASH_CS_PIN         PB3

#define ADC_VBAT_PIN         PC1
#define ADC_CURR_PIN         PC3

#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC5

#define ADC2_DMA_OPT        1

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PC9, 2, -1) \
    TIMER_PIN_MAP( 1, PA3, 1,  1) \
    TIMER_PIN_MAP( 2, PB0, 2,  0) \
    TIMER_PIN_MAP( 3, PB1, 2,  0) \
    TIMER_PIN_MAP( 4, PA2, 1,  0) \
    TIMER_PIN_MAP( 5, PA0, 2,  0) \
    TIMER_PIN_MAP( 6, PA1, 2,  0) \
    TIMER_PIN_MAP( 7, PA8, 1, -1) 

#define USE_PINIOBOX
#define PINIO1_PIN PB9
#define PINIO1_BOX 40
#define PINIO1_CONFIG 1

#define DEFAULT_VOLTAGE_METER_SCALE 112
#define DEFAULT_VOLTAGE_METER_DIVIDER 1
#define DEFAULT_VOLTAGE_METER_MULTIPLIER 12
#define DEFAULT_CURRENT_METER_SCALE 108
#define SERIALRX_UART SERIAL_PORT_USART1
#define USE_SERIALRX_GHST
#define GPS_UART SERIAL_PORT_USART3
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BARO_I2C_ADDRESS 119
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define USE_BEEPER
#define BEEPER_INVERTED
#define BEEPER_PWM_HZ 4000
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI2
#define FLASH_SPI_INSTANCE SPI3
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW180_DEG
