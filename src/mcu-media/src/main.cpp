// Import libraries, defines and constants
#include "include.h"

// Create video-box
ALIGNED u8 Box[WIDTHBYTE*HEIGHT];

// Create graphics canvas
sCanvas	LogoCanvas;
cMat2Df transform;

// Create printing buffer
char printBuf;


// function that checks BOOTSEL state
// Dont look at this, even I don't really understand it -fizitzfux
bool __no_inline_not_in_flash_func(get_bootsel_button)() {
/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 * 
 * NOTE: Has been simplified
 */
    const uint CS_PIN_INDEX = 1;
    uint32_t flags = save_and_disable_interrupts();
    hw_write_masked(&ioqspi_hw->io[CS_PIN_INDEX].ctrl,
                    GPIO_OVERRIDE_LOW << IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_LSB,
                    IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_BITS);
    for (volatile int i = 0; i < 1000; ++i);
    bool button_state = !(sio_hw->gpio_hi_in & (1u << CS_PIN_INDEX));
    hw_write_masked(&ioqspi_hw->io[CS_PIN_INDEX].ctrl,
                    GPIO_OVERRIDE_NORMAL << IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_LSB,
                    IO_QSPI_GPIO_QSPI_SS_CTRL_OEOVER_BITS);
    restore_interrupts(flags);
    return button_state;
}


int main() {
	// Get frame start time for performance calculation
	uint64_t frameStart;
	absolute_time_t frameStartAbs;
	const int uSFrameLimit = 167;

	// Initialize video mode
	Video(DEV_VGA, RES_EGA, FORM_8BIT, Box);

	// Initialize logo canvas
	LogoCanvas.img = (u8*)LogoImg;
	LogoCanvas.w = 170;
	LogoCanvas.h = 44;
	LogoCanvas.wb = 170;
	LogoCanvas.format = CANVAS_8;

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

	// End of program, prevent stopping as it triggers a crash
	sprintf(&printBuf, "CRITICAL ERROR: EOF HAS BEEN REACHED!");
	DrawTextBg(&Canvas, &printBuf, 0, 0, 0xFF, 0x00, FontGame8x8, 8, 1, 1);
	while (true);
}
