cmake_minimum_required(VERSION 3.12)

include(pico_sdk_import.cmake)

project(pico-tempsensor)

pico_sdk_init()

add_ececutable(tempsense
    tempsense.c
)

target_link_libraries(tempsense
    pico_stdlib
    hardware_adc
)

pico_enable_stdio_usb(tempsense 1)
pico_enable_std_uart(tempsense 0)

pico_add_extra_outputs(tempsense)    