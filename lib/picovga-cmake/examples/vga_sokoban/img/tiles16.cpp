#include "main.h"

// format: 8-bit pixel graphics
// image width: 368 pixels
// image height: 16 lines
// image pitch: 368 bytes
const u8 Tiles16Img[5888] __attribute__ ((aligned(4))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 
	0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 0x8C, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x60, 0x8C, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x60, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xB6, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xB6, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xB6, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xB6, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x8C, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x40, 0x40, 0x40, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 
	0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xFF, 0xB6, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xFF, 0xB6, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xFF, 0xB6, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xB6, 0xFF, 0xFF, 0xFF, 0xB6, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 
	0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x72, 0x72, 0x72, 0x49, 0x40, 0x60, 0x80, 0x80, 0x80, 0x80, 0x80, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 0x0C, 0x0C, 0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 0xE0, 0xE0, 0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xE0, 0xE0, 0xE0, 0x80, 0x8C, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 0x8C, 0xE0, 0xE0, 0xE0, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x60, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x80, 0x60, 0x8C, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x60, 0x8C, 0xE0, 0x80, 0x80, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xE0, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x60, 0x60, 0x60, 0x8C, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x8C, 0x60, 0x60, 0x60, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x49, 0x49, 0x49, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xE0, 0x49, 0x49, 0x49, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0x0C, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0x0C, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xE0, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0xE0, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 
	0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x72, 0x72, 0x72, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xE0, 0x72, 0x72, 0x72, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0x0C, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x0C, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xE0, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0xE0, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 0x8C, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0xFF, 0xFF, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x60, 0x8C, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x60, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xE0, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0x00, 0xEC, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFC, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFC, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFC, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFC, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0xB6, 0xFF, 0xFF, 0xFF, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x8C, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0xE0, 0xE0, 0xE0, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 0x0C, 0x0C, 0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 0xE0, 0xE0, 0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0xB6, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xB6, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x41, 
	0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xFF, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xB6, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0xB6, 0xFF, 0xB6, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0x03, 0xB6, 0xFF, 0xB6, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xB6, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xB6, 0xFF, 0xFF, 0x41, 0x41, 
	0x41, 0x41, 0xFF, 0xFF, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xB6, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 0x8C, 
	0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 0x72, 0x72, 0x72, 0x49, 
	0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 
	0x00, 0x00, 0xEC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xEC, 0x00, 0x00, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0x03, 0xB6, 0xB6, 0x03, 0x03, 0xFC, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0x03, 0xB6, 0x03, 0x03, 0x03, 0xFC, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0x03, 0xB6, 0xB6, 0x03, 0x03, 0xFC, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0xB6, 0xFF, 0x03, 0x03, 0xB6, 0x03, 0x03, 0xFC, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xB6, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x41, 0xB6, 0xB6, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xB6, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x41, 0xB6, 0xB6, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0xFF, 0xFF, 0x03, 0x03, 0x03, 0x03, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0xFC, 0x03, 0x03, 0xB6, 0xB6, 0x03, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0xFC, 0x03, 0x03, 0xB6, 0x03, 0x03, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0xFC, 0x03, 0x03, 0xB6, 0xB6, 0x03, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0xFC, 0x03, 0x03, 0x03, 0xB6, 0x03, 0xFF, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xB6, 0x41, 0x03, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0x03, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0xB6, 0x41, 0x03, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0x03, 0xFF, 0xB6, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0x03, 0xFF, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x03, 0x03, 0x03, 0xFC, 0x03, 0x03, 0x03, 0x03, 0xFF, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xE0, 0xE0, 0xE0, 0x80, 0x8C, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x80, 0x8C, 0xE0, 0xE0, 0xE0, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0xB6, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0xB6, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0xB6, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0xB6, 0xB6, 0x01, 0x01, 0x01, 0x01, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB6, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x80, 0x80, 0x80, 0x60, 0x8C, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x60, 0x8C, 0xE0, 0x80, 0x80, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 0x72, 0x4D, 0x4D, 0x49, 
	0x00, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x00, 0xFC, 0xFC, 0x00, 
	0x00, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0xEC, 0x00, 0xEC, 0xEC, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0x6D, 0xB6, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0x6D, 0x6D, 0xFF, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xB6, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x6D, 0x6D, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xB6, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0x6D, 0x6D, 0x41, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0x6D, 0x6D, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0xFF, 0xB6, 0x6D, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x6D, 0x6D, 0x6D, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x6D, 0x6D, 0x6D, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0xFF, 0xFF, 0xFF, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x60, 0x60, 0x60, 0x8C, 0x80, 0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x8C, 0x80, 0x60, 0x60, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 0x49, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xFF, 0xFF, 0xFF, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 0x41, 
	0x41, 0x41, 0x41, 0x41, 0xB6, 0xB6, 0xB6, 0x41, 0x41, 0xB6, 0xB6, 0x41, 0x41, 0x41, 0x41, 0x41, 
};
