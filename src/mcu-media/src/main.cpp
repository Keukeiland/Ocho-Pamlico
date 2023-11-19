// Import libraries, defines and constants
#include "include.h"

// Draw box
ALIGNED u8 Box[WIDTHBYTE*HEIGHT];

// Create graphics canvi
sCanvas	LogoCanvas;
sCanvas TmpCanvas;
cMat2Df transform;
// Create printing buffer
char printBuf;

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

// Set UART settings
#define UART_ID uart0
#define BAUD_RATE 115200
#define DATA_BITS 8
#define STOP_BITS 1
#define PARITY    UART_PARITY_NONE
#define UART_TX_PIN 12
#define UART_RX_PIN 13

// Handle incoming UART instructions
// Currently a mess, please don't touch
u8 binaryData[255];
u8 command[8];
void on_uart_rx() {
	int i = 0;
	sprintf(&printBuf, "Receiving!");
	DrawTextBg(&Canvas, &printBuf, 0, 20, 0xFF, 0x00, FontGame8x8, 8, 1, 1);

    while (true) {
        u8 ch = ((u8)uart_getc(UART_ID));
		if (ch != 0) {
			command[i++] = ch;
    	} else {
			if (i == 0) {
				continue;
			}
			break;
		}
	}
	// u8 command[10] = {1,6,9,4,3,6,7,8};

	char msgg[(sizeof(command)*sizeof(char))];
	int index = 0;
	int d = 0;

	for (d = 0; d < sizeof(command); d++) {
		index += sprintf(&msgg[index], "%d ", command[d]);
	}
	sprintf(&printBuf, "message [%u]: %s", sizeof(command), msgg);
	DrawTextBg(&Canvas, &printBuf, 0, 10, 0xFF, 0x00, FontGame8x8, 8, 1, 1);
	i = 0;

	if (command[0] == 158) {
		sprintf(&printBuf, "Image.....");
		DrawTextBg(&Canvas, &printBuf, 0, 20, 0xFF, 0x00, FontGame8x8, 8, 1, 1);
		int size = command[2]+command[3]+command[4]+command[5]+command[6]+command[7];
		u8 binaryData[command[1]][size] __attribute__ ((aligned(4))) = {};
		sprintf(&printBuf, "%d | %zu", size, sizeof(binaryData[command[1]]));
		DrawTextBg(&Canvas, &printBuf, 0, 30, 0xFF, 0x00, FontGame8x8, 8, 1, 1);

		// while (i < size)
		int tot = 0;
		for (u16 c = 0; c < 134; c++)
		{
        u8 ch = ((u8)uart_getc(UART_ID));
		binaryData[command[1]][c] = ch;
		tot += ch;
		sprintf(&printBuf, "Bit: %x  %u %d", ch, c, tot);
		DrawTextBg(&Canvas, &printBuf, 0, 40, 0xFF, 0x00, FontGame8x8, 8, 1, 1);
		}
		sprintf(&printBuf, "DONE");
		DrawTextBg(&Canvas, &printBuf, 0, 50, 0xFF, 0x00, FontGame8x8, 8, 1, 1);

		TmpCanvas.img = (u8*)binaryData[command[1]];
		TmpCanvas.w = 40;
		TmpCanvas.h = 67;
		TmpCanvas.wb = 20;
		TmpCanvas.format = CANVAS_4;

		DrawImg(&Canvas, &TmpCanvas, WIDTH/2, HEIGHT/2, 0, 0, 40, 67);
	}
}


int main() {
	// Get frame start time for performance calculation
	uint64_t frameStart;
	absolute_time_t frameStartAbs;
	const int uSFrameLimit = 167;

	// Initialize video mode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// Initialize sound output
	PWMSndInit();

	// Initialize logo canvas
	LogoCanvas.img = (u8*)LogoImg;
	LogoCanvas.w = 170;
	LogoCanvas.h = 44;
	LogoCanvas.wb = 170;
	LogoCanvas.format = CANVAS_8;

	// Enable UART
	// uart_init(UART_ID, BAUD_RATE);
	// gpio_set_function(UART_TX_PIN, GPIO_FUNC_UART);
    // gpio_set_function(UART_RX_PIN, GPIO_FUNC_UART);
	// uart_set_hw_flow(UART_ID, false, false);
	// uart_set_format(UART_ID, DATA_BITS, STOP_BITS, PARITY);
	// int UART_IRQ = UART_ID == uart0 ? UART0_IRQ : UART1_IRQ;
	// irq_set_exclusive_handler(UART_IRQ, on_uart_rx);
    // irq_set_enabled(UART_IRQ, true);
	// uart_set_irq_enables(UART_ID, true, false);

	// Define animation consts and vars
	int stage = 0;
	float phase = 0;
	int x, x2, y, a, loopDelay;
	u8 clor = 0;

	#define WAVELEN 0.03f
	#define WAVESPEED 0.09f
	#define WAVEAMP 0.05f

	// Prepare logo transform matrix
	transform.PrepDrawImg(170, 44, 170, 44, 340, 88, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);

	while (stage < 3)
	{
		WaitVSync();
		// Keep time for performance
		frameStartAbs = get_absolute_time();

		if (stage == 0) {
			for (x=340, a=0; x > 0; x--, a++) {
				y = (int)(10 + WAVEAMP*sin(phase - x*WAVELEN)*85);
				x2 = WIDTH/2-170+(a/2);
				DrawImgMat(&Canvas, &LogoCanvas, x2, y, x, 88, &transform, 4, 0x02);
			}
			stage++;
		}
		else if (stage == 1) {
			DrawText(&Canvas, "Press     to continue.", WIDTH/2-176, HEIGHT-116, 0xFF, FontGame8x8, 8, 2, 2);
			stage++;
		}
		else if (stage == 2) {
			if (get_bootsel_button()){
				stage++;
			}
			loopDelay = 100;
			DrawTextBg(&Canvas, " X ", WIDTH/2-80, HEIGHT-116, 0x00, clor, FontGame8x8, 8, 2, 2);
			switch (clor) {
				case 0x00:
				clor = 0x24;
				break;
				case 0x24:
				clor = 0x49;
				break;
				case 0x49:
				clor = 0x6E;
				break;
				case 0x6E:
				clor = 0x92;
				break;
				case 0x92:
				clor = 0xB6;
				break;
				case 0xB6:
				clor = 0xDB;
				break;
				case 0xDB:
				clor = 0xFF;
				break;
				case 0xFF:
				clor = 0x00;
				break;
			}
		}

		// Display calculated performance
		sprintf(&printBuf, "C0: %lld   ", (absolute_time_diff_us(frameStartAbs, get_absolute_time())/uSFrameLimit));
		DrawTextBg(&Canvas, &printBuf, 0, 0, 0xFF, 0x00, FontGame8x8, 8, 1, 1);

		sleep_ms(loopDelay);
	}
	// Clear screen
	DrawClear(&Canvas);

	// Play sound
	PlaySound(RiverSnd, sizeof(RiverSnd), True, 0.2f);

	// Never quit as it'll reboot
	while (true);
}
