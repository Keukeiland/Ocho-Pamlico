#include "main.h"

// format: 4-bit pixel graphics
// image width: 32 pixels
// image height: 32 lines
// image pitch: 16 bytes
const u8 Peter4Img[512] __attribute__ ((aligned(4))) = {
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x22, 0x22, 0x2F, 0xFF, 0xF8, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xF8, 0x22, 0x22, 0xFF, 0xFF, 0xF8, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xF8, 0x22, 0x22, 0xFF, 0xFF, 0x82, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0x88, 0x22, 0x2F, 0xFF, 0xFF, 0x82, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x28, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 0xFF, 0xF8, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x88, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x88, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0xF1, 0x1F, 0xFF, 0xF8, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x11, 0xFF, 0xFF, 0xF1, 0x1F, 0xFF, 0xF8, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0x4F, 0xFF, 0xFF, 0xFF, 0x88, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x82, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0x4F, 0xFF, 0x4F, 0xFF, 0xF8, 0x82, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xF4, 0x44, 0xFF, 0xFF, 0x88, 0x22, 0xF8, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0x88, 0x22, 0x8F, 0xFF, 0xF2, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0x11, 0x11, 0x88, 0x88, 0x88, 0x81, 0x1F, 0xFF, 0xFF, 0xF2, 0x22, 
	0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x11, 0x11, 0x1E, 0xE1, 0x11, 0x11, 0x1F, 0xFF, 0xFF, 0x82, 0x22, 
	0x22, 0x22, 0xFF, 0xFF, 0xF1, 0x11, 0x11, 0x1E, 0xE1, 0x11, 0x11, 0x1F, 0xFF, 0x88, 0x22, 0x22, 
	0x22, 0x2F, 0xFF, 0xFF, 0x81, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x82, 0x22, 0x22, 0x22, 
	0x22, 0x2F, 0xFF, 0x88, 0x11, 0x11, 0x11, 0x1E, 0xE1, 0x11, 0x11, 0x11, 0x88, 0x22, 0x22, 0x22, 
	0x22, 0x28, 0x88, 0x22, 0x11, 0x11, 0x11, 0x1E, 0xE1, 0x11, 0x11, 0x11, 0x0F, 0x82, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x0F, 0x82, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0x82, 0x2F, 0xFF, 0xFF, 0xF2, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x2F, 0xFF, 0xFF, 0xF8, 0x8F, 0xFF, 0xFF, 0xFF, 0x82, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0xFF, 0xFF, 0xFF, 0x88, 0xFF, 0xFF, 0xFF, 0xF8, 0x82, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0xF8, 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x22, 0x22, 0x22, 0x22, 0x22, 
};
