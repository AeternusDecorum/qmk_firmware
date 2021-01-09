/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xADAD
#define PRODUCT_ID      0x0CEA
#define DEVICE_VER      0x0001
#define MANUFACTURER AeternusDecorum
#define PRODUCT Oceanographer
#define DESCRIPTION Oceanographer Keyboard

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

#define XX NO_PIN

#define DIRECT_PINS { \
  { E5,  E4,  E3, D15, C6, C7, C8, C9, A8, A9, A10, E2,  XX  }, \
  { C13, F9,  F1, C2,  A6, A5, B12, A3, A2, A1, A0,  F3,  XX  }, \
  { C14, F10, C0, C3,  A7, C4, B0, B1, E7, E9, E11, E13, E14 }, \
  { E6,  C15, F0, C1,  XX, F2, C5, B2, E8, XX, E10, E12, E15 }  \
}

#define DIODE_DIRECTION COL2ROW

#define ENCODERS_PAD_A { B10 }
#define ENCODERS_PAD_B { B11 }

#define ENCODER_RESOLUTION 2

#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN B15
#define RGBLED_NUM 3

#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1

#define I2C1_TIMINGR_PRESC  0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 1U
#define I2C1_TIMINGR_SCLH   3U
#define I2C1_TIMINGR_SCLL   9U

#define WS2812_EXTERNAL_PULLUP
#define WS2812_SPI SPID2
#define WS2812_SPI_MOSI_PAL_MODE 0

/*
TODO: Move this to a valid pin
SPEAKER D13
*/

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
