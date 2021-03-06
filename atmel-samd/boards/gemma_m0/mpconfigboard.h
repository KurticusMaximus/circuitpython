#define USB_REPL

#define MICROPY_HW_BOARD_NAME "Adafruit Gemma M0"
#define MICROPY_HW_MCU_NAME "samd21e18"

#define MICROPY_HW_APA102_MOSI   (&pin_PA00)
#define MICROPY_HW_APA102_SCK    (&pin_PA01)

// #define CIRCUITPY_BITBANG_APA102

#define MICROPY_PORT_A        (PORT_PA00 | PORT_PA01 | PORT_PA24 | PORT_PA25)
#define MICROPY_PORT_B        (0)

#define CIRCUITPY_INTERNAL_NVM_SIZE 0

#include "internal_flash.h"

#define BOARD_FLASH_SIZE (0x00040000 - 0x2000 - 0x010000)
