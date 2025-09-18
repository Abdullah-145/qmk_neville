/**
 * Configuration file for Charybdis / Neville with PMW3360 (SPI) + Cirque Pinnacle TM040040 (I2C, 3.3V)
 */
#pragma once

#ifdef VIA_ENABLE
#    undef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif // VIA_ENABLE

#ifndef TAPPING_TERM
#    define TAPPING_TERM 200   // default tapping term
#endif  // TAPPING_TERM

#ifndef __arm__
#    define NO_ACTION_ONESHOT
#endif

/*---------------- Charybdis-Specific Options ----------------*/
#ifdef POINTING_DEVICE_ENABLE
    #define POINTING_DEVICE_SCROLL_ENABLE
    //#define POINTING_DEVICE_INVERT_X   // uncomment if X movement is reversed (L/R flipped)
    #define POINTING_DEVICE_INVERT_Y     // Y-axis is inverted by default per datasheet

    // Auto pointer layer trigger
    #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
    #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 200
    #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 8
#endif // POINTING_DEVICE_ENABLE

/*---------------- Combos ----------------*/
#define COMBO_COUNT 3
#define COMBO_TERM 120

/*---------------- Layers ----------------*/
#define LAYER_STATE_8BIT

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

#define HOLD_ON_OTHER_KEY_PRESS
//#define IGNORE_MOD_TAP_INTERRUPT
//#define PERMISSIVE_HOLD

/*---------------- RGB ----------------*/
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR

//#define CHARYBDIS_DRAGSCROLL_REVERSE_X
#define CHARYBDIS_DRAGSCROLL_REVERSE_Y

/*---------------- Pointing Device Configuration ----------------*/
#ifdef POINTING_DEVICE_ENABLE
    #define POINTING_DEVICE_COMBINED   // combine both sensors

    /* --- PMW3360 (SPI) configuration --- */
    #define PMW3360_CS_PIN    B0
    #define PMW3360_SCLK_PIN  B1
    #define PMW3360_MOSI_PIN  B2
    #define PMW3360_MISO_PIN  B3

    /* --- Cirque Pinnacle TM040040 (I2C mode) --- */
    #define CIRQUE_PINNACLE_ADDR 0x2A   // default I²C address

    // No override of SCL/SDA unless needed.
    // If your board mapping differs, uncomment these and set correct pins
    // #define I2C1_SCL_PIN D0
    // #define I2C1_SDA_PIN D1

    // Ensure you supply 3.3V power to VDD
#endif // POINTING_DEVICE_ENABLE
