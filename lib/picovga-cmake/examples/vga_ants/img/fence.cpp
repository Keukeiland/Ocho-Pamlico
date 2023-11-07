#include "main.h"
// format: 8-bit pixel graphics
// image width: 8 pixels
// image height: 216 lines
// image pitch: 8 bytes
const u8 FenceImg[1728] __attribute__ ((aligned(4))) = {
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xB6, 
	0xDB, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0x68, 0xC9, 0xC9, 0xC9, 0x89, 
	0x8C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x68, 0x44, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
	0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 0xED, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0x89, 
};
