// Import libraries, defines and constants
#include "include.h"

// Define UART settings
#define UART_ID uart0
#define BAUD_RATE 115200
// #define BAUD_RATE 9600
#define DATA_BITS 8
#define STOP_BITS 1
#define PARITY    UART_PARITY_NONE
#define UART_TX_PIN 12
#define UART_RX_PIN 13

// function that checks BOOTSEL state
bool __no_inline_not_in_flash_func(get_bootsel_button)() {
/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
    const uint CS_PIN_INDEX = 1;

    // Must disable interrupts, as interrupt handlers may be in flash, and we
    // are about to temporarily disable flash access!
    uint32_t flags = save_and_disable_interrupts();

    // Set chip select to Hi-Z
    hw_write_masked(&ioqspi_hw->io[CS_PIN_INDEX].ctrl,
                    GPIO_OVERRIDE_LOW << IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_LSB,
                    IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_BITS);

    // Note we can't call into any sleep functions in flash right now
    for (volatile int i = 0; i < 1000; ++i);

    // The HI GPIO registers in SIO can observe and control the 6 QSPI pins.
    // Note the button pulls the pin *low* when pressed.
    bool button_state = !(sio_hw->gpio_hi_in & (1u << CS_PIN_INDEX));

    // Need to restore the state of chip select, else we are going to have a
    // bad time when we return to code in flash!
    hw_write_masked(&ioqspi_hw->io[CS_PIN_INDEX].ctrl,
                    GPIO_OVERRIDE_NORMAL << IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_LSB,
                    IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_BITS);

    restore_interrupts(flags);

    return button_state;
}

// Sends WilliamImg over UART
void send() {
    char msg[sizeof(WilliamImg)];

    // for (int i = 0; i < sizeof(WilliamImg); i++) {
    //     msg[i] = (char) WilliamImg[i];
    //     gpio_put(LED_PIN, led);
    //     led = !led;
    // }
    uart_putc_raw(UART_ID, (char)158);
    uart_putc_raw(UART_ID, (char)1);
    uart_putc_raw(UART_ID, (char)255);
    uart_putc_raw(UART_ID, (char)255);
    uart_putc_raw(UART_ID, (char)255);
    uart_putc_raw(UART_ID, (char)255);
    uart_putc_raw(UART_ID, (char)255);
    uart_putc_raw(UART_ID, (char)65);
    uart_putc_raw(UART_ID, (char)0);
    // uart_puts(UART_ID, msg);

    for (int i = 0; i < sizeof(WilliamImg); i++) {
        if (i%8 == 0) {
            sleep_ms(25);
        }
        while (!uart_is_writable(UART_ID)) {gpio_put(LED_PIN, 1);}
        gpio_put(LED_PIN, 0);
        uart_putc_raw(UART_ID, (char)WilliamImg[i]);
    }
    uart_putc_raw(UART_ID, (char)0);
}

int main() {
    // Initialize on-board LED
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    // Initialize UART
    uart_init(UART_ID, BAUD_RATE);
	gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);
	uart_set_hw_flow(UART_ID, false, false);
	uart_set_format(UART_ID, DATA_BITS, STOP_BITS, PARITY);


	//int UART_IRQ = UART_ID == uart0 ? UART0_IRQ : UART1_IRQ;
	//irq_set_exclusive_handler(UART_IRQ, on_uart_rx);
    //irq_set_enabled(UART_IRQ, true);
	//uart_set_irq_enables(UART_ID, true, false);

    // int x = 1;
    // while (x != 0) {
    //     x += 1;
    //     if (x > 16) {
    //         x = 0;
    //     }
    //     uart_putc_raw(UART_ID, (char)(x));
    //     sleep_ms(100);
        
    // }

    while (true) {
        if (get_bootsel_button()) {
            send();
            sleep_ms(250);
        }
    }
}