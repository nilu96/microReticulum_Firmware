/*
  T096 variant for the Adafruit nRF52 Arduino core.
  Pin definitions follow the Heltec Mesh Node T096 mapping used by RNode.
*/

#ifndef _VARIANT_HELTEC_T096_LOCAL_
#define _VARIANT_HELTEC_T096_LOCAL_

#define VARIANT_MCK (64000000ul)
#define USE_LFXO

#include "WVariant.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HARD_VERSION_ADDR (0xED000 + 7 * 4096 - 16 - 1)
#define HT_LICENSE_ADDR (0xED000 + 7 * 4096 - 16)
#define HT_LICENSE_ADDR_BASE (0xED000 + 6 * 4096)

#define PINS_COUNT           (48)
#define NUM_DIGITAL_PINS     (48)
#define NUM_ANALOG_INPUTS    (6) // Valid nRF52 ADC-capable pins exposed on this board
#define NUM_ANALOG_OUTPUTS   (0)

// ------------------------------------------------------------------
// LED
// ------------------------------------------------------------------
#define PIN_LED1             (28)
#define LED_BUILTIN          PIN_LED1
#define LED_GREEN            PIN_LED1
#define LED_BLUE             PIN_LED1
#define LED_STATE_ON         1

// ------------------------------------------------------------------
// Buttons
// ------------------------------------------------------------------
#define PIN_BUTTON1          (42)

// ------------------------------------------------------------------
// Analog Pins (Hardwired to nRF52 ADC channels)
// ------------------------------------------------------------------
#define PIN_A0               (2)  // ADC0
#define PIN_A1               (3)  // ADC_IN
#define PIN_A2               (4)  // ADC2
#define PIN_A3               (29) // ADC6
#define PIN_A4               (31) // ADC7
#define PIN_A5               (28) // ADC4, shared with White_LED

static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;
#define ADC_RESOLUTION       14

// ------------------------------------------------------------------
// UART Interface
// ------------------------------------------------------------------
#define PIN_SERIAL1_RX       (9)
#define PIN_SERIAL1_TX       (10)

// ------------------------------------------------------------------
// SPI Interfaces
// ------------------------------------------------------------------
#define SPI_INTERFACES_COUNT 2
#define SPI_32MHZ_INTERFACE  1

// SPI 0: LoRa (SX1262)
#define PIN_SPI_MOSI         (11)
#define PIN_SPI_MISO         (14)
#define PIN_SPI_SCK          (40)
#define PIN_SPI_CS           (5)
#define LORA_DIO1            (21)
#define LORA_BUSY            (19)
#define LORA_RESET           (16)
static const uint8_t SS   = PIN_SPI_CS;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

// SPI 1: TFT Display
#define PIN_SPI1_MOSI        (17)
#define PIN_SPI1_SCK         (20)
#define PIN_SPI1_MISO        (43) // Display is write-only; must still be a valid pin for SPIClass.
static const uint8_t MOSI1 = PIN_SPI1_MOSI;
static const uint8_t SCK1  = PIN_SPI1_SCK;

// ------------------------------------------------------------------
// TFT Display Control Pins
// ------------------------------------------------------------------
#define PIN_TFT_CS           (22)
#define PIN_TFT_RST          (13)
#define PIN_TFT_DC           (15)
#define PIN_TFT_VDD_CTL      (26)
#define PIN_TFT_LEDA_CTL     (44)

// ------------------------------------------------------------------
// LoRa Front-End Control
// ------------------------------------------------------------------
#define PIN_LORA_FEM_CTRL    (30)
#define PIN_LORA_PA_PWR_EN   PIN_LORA_FEM_CTRL
#define PIN_LORA_PA_CPS      (-1)
#define PIN_LORA_PA_CSD      (12)
#define PIN_LORA_PA_CTX      (41)

// ------------------------------------------------------------------
// I2C Interface (Wire)
// Required for Adafruit_BusIO / GFX compilation
// ------------------------------------------------------------------
#define WIRE_INTERFACES_COUNT 1
#define PIN_WIRE_SDA         (13)
#define PIN_WIRE_SCL         (16)

// ------------------------------------------------------------------
// QSPI External Flash Storage - Wired to P2 Header (Pins 13-18)
// ------------------------------------------------------------------
#define EXTERNAL_FLASH_DEVICES W25Q128JV_SQ
#define EXTERNAL_FLASH_USE_QSPI

#define PIN_QSPI_CS          (35) // P2 Pin 13 (P1.03)
#define PIN_QSPI_SCK         (37) // P2 Pin 14 (P1.05)
#define PIN_QSPI_IO0         (39) // P2 Pin 15 (P1.07)
#define PIN_QSPI_IO1         (38) // P2 Pin 16 (P1.06)
#define PIN_QSPI_IO2         (34) // P2 Pin 17 (P1.02)
#define PIN_QSPI_IO3         (36) // P2 Pin 18 (P1.04)

#ifdef __cplusplus
}
#endif

#endif
