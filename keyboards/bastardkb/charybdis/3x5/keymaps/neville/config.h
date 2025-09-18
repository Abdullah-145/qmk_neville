#pragma once

/* ---------------- VIA ---------------- */
#ifdef VIA_ENABLE
#    undef DYNAMIC_KEYMAP_LAYER_COUNT
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#endif

/* ---------------- Tapping ---------------- */
#ifndef TAPPING_TERM
#    define TAPPING_TERM 200
#endif

#ifndef __arm__
#    define NO_ACTION_ONESHOT
#endif

/* ---------------- Pointing Device (Cirque Trackpad) ---------------- */
#ifdef POINTING_DEVICE_ENABLE
    #define POINTING_DEVICE_SCROLL_ENABLE
    #define POINTING_DEVICE_INVERT_V

    /* Cirque Pinnacle I²C config */
    #define CIRQUE_PINNACLE_ADDR 0x2A   // Default I²C address (from datasheet)
    #define I2C1_SCL_PIN D0
    #define I2C1_SDA_PIN D1
#endif
