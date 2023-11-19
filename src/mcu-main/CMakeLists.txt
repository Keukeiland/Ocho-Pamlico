# Add source to the binary
add_executable(mcu-main
    src/main.cpp
    img/william.cpp
)

# Generate extra binaries for debugging
pico_add_extra_outputs(mcu-main)

# Import external libraries
target_link_libraries(mcu-main
    boot_picoboot_headers
    boot_uf2_headers
    hardware_adc
    # hardware_base
    # hardware_claim
    # hardware_clocks
    # hardware_divider
    hardware_dma
    # hardware_exception
    hardware_flash
    # hardware_gpio
    hardware_i2c
    hardware_interp
    # hardware_irq
    hardware_pio
    # hardware_pll
    hardware_pwm
    # hardware_resets
    hardware_rtc
    hardware_spi
    # hardware_sync
    # hardware_timer
    # hardware_uart
    # hardware_vreg
    # hardware_watchdog
    # hardware_xosc
    # pico_bit_ops
    # pico_bootrom
    # pico_bootsel_via_double_reset
    # pico_cxx_options
    # pico_divider
    # pico_double
    # pico_float
    # pico_int64_ops
    # pico_malloc
    # pico_mem_ops
    pico_multicore
    # pico_platform
    # pico_printf
    # pico_runtime
    # pico_standard_link
    # pico_stdio
    pico_stdio_semihosting
    # pico_stdio_uart
    pico_stdio_usb
    pico_stdlib
    # pico_unique_id
)

# Enable to use UART over USB
# pico_enable_stdio_usb(mcu-main 1)

# Copy *.uf2 to this dir
add_custom_command(
        TARGET mcu-main POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
                ${CMAKE_SOURCE_DIR}/build/src/mcu-main/mcu-main.uf2
                ${CMAKE_CURRENT_LIST_DIR}/mcu-main.uf2
)
