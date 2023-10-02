VIA_ENABLE = yes
LTO_ENABLE = yes

RGBLIGHT_ENABLE     = no    # Enable WS2812 RGB underlight.
RGB_MATRIX_SUPPORTED = yes
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = WS2812
RGB_MATRIX_CUSTOM_USER = yes

SRC += gmem.c jtu_custom_keycodes.c
