#include "main.h"

// sound format: PCM mono 8-bit 22050Hz
const u8 ShufflingSnd[5620] = {
	0x81, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x7F, 
	0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 
	0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 
	0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x82, 0x80, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 
	0x80, 0x7F, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 
	0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x82, 0x82, 0x82, 0x80, 0x81, 
	0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 
	0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 
	0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 
	0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x7F, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x81, 0x80, 0x80, 0x81, 0x82, 0x81, 0x80, 0x81, 
	0x82, 0x81, 0x81, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x82, 0x83, 0x83, 
	0x83, 0x84, 0x84, 0x84, 0x84, 0x82, 0x81, 0x81, 0x81, 0x7F, 0x7D, 0x7D, 0x7C, 0x7C, 0x7B, 0x7B, 
	0x7C, 0x7C, 0x7C, 0x7D, 0x7D, 0x7F, 0x80, 0x80, 0x81, 0x82, 0x84, 0x84, 0x85, 0x83, 0x82, 0x80, 
	0x80, 0x7D, 0x7B, 0x7A, 0x7B, 0x7A, 0x7B, 0x7C, 0x80, 0x84, 0x84, 0x85, 0x86, 0x86, 0x86, 0x86, 
	0x88, 0x86, 0x84, 0x81, 0x7F, 0x7D, 0x7B, 0x7A, 0x7B, 0x79, 0x79, 0x78, 0x79, 0x7A, 0x7A, 0x7A, 
	0x7C, 0x7E, 0x80, 0x82, 0x84, 0x85, 0x87, 0x86, 0x87, 0x87, 0x86, 0x86, 0x84, 0x82, 0x81, 0x80, 
	0x7E, 0x7D, 0x7C, 0x7B, 0x7B, 0x7B, 0x7C, 0x7D, 0x7D, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x81, 0x82, 
	0x83, 0x84, 0x84, 0x82, 0x82, 0x83, 0x82, 0x82, 0x81, 0x80, 0x81, 0x7F, 0x7F, 0x7E, 0x7E, 0x7F, 
	0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x80, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 
	0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x81, 0x81, 0x81, 0x80, 0x82, 0x82, 0x81, 0x82, 0x81, 
	0x80, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x81, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x80, 0x7F, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x81, 0x82, 0x81, 
	0x82, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7E, 
	0x80, 0x81, 0x80, 0x7E, 0x80, 0x81, 0x7E, 0x7D, 0x7D, 0x78, 0x6A, 0x64, 0x70, 0x7D, 0x7E, 0x7F, 
	0x8C, 0xA0, 0xA6, 0xA1, 0x9F, 0x9F, 0x9E, 0x96, 0x8F, 0x89, 0x81, 0x78, 0x6B, 0x5C, 0x53, 0x53, 
	0x53, 0x52, 0x58, 0x60, 0x67, 0x6C, 0x73, 0x7C, 0x83, 0x88, 0x97, 0xA3, 0xA8, 0xA6, 0xA7, 0xA7, 
	0x9F, 0x93, 0x8E, 0x8F, 0x8D, 0x86, 0x79, 0x6C, 0x63, 0x60, 0x5F, 0x60, 0x60, 0x62, 0x66, 0x6C, 
	0x77, 0x7C, 0x80, 0x83, 0x86, 0x88, 0x88, 0x8E, 0x9A, 0xA3, 0xA5, 0xA9, 0xAD, 0xAD, 0xA7, 0x9F, 
	0x92, 0x84, 0x7A, 0x77, 0x6D, 0x58, 0x45, 0x42, 0x42, 0x3F, 0x39, 0x3B, 0x44, 0x51, 0x62, 0x75, 
	0x86, 0x96, 0xA8, 0xBB, 0xC9, 0xD6, 0xDE, 0xD9, 0xCD, 0xC7, 0xCB, 0xC0, 0x9D, 0x73, 0x4F, 0x32, 
	0x1C, 0x15, 0x18, 0x20, 0x2B, 0x47, 0x6A, 0x7C, 0x81, 0x90, 0xAB, 0xBD, 0xBC, 0xC2, 0xE1, 0xFF, 
	0xFF, 0xE7, 0xBF, 0x9A, 0x81, 0x76, 0x6D, 0x59, 0x39, 0x17, 0x00, 0x00, 0x13, 0x29, 0x2E, 0x2D, 
	0x46, 0x73, 0x95, 0xA9, 0xC2, 0xE3, 0xF2, 0xEE, 0xF3, 0xF8, 0xE7, 0xBF, 0x9C, 0x84, 0x65, 0x48, 
	0x41, 0x44, 0x38, 0x21, 0x14, 0x18, 0x21, 0x30, 0x4B, 0x66, 0x77, 0x88, 0xA4, 0xC0, 0xC9, 0xC8, 
	0xC9, 0xCA, 0xC8, 0xC8, 0xC7, 0xBC, 0xA5, 0x8A, 0x72, 0x60, 0x51, 0x4C, 0x4A, 0x45, 0x40, 0x45, 
	0x52, 0x60, 0x6C, 0x7A, 0x82, 0x84, 0x83, 0x89, 0x95, 0x9C, 0x9D, 0x99, 0x96, 0x94, 0x93, 0x8F, 
	0x89, 0x82, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7C, 0x7B, 0x7A, 0x7A, 0x7C, 0x7E, 0x7F, 
	0x7F, 0x81, 0x81, 0x84, 0x88, 0x88, 0x87, 0x86, 0x87, 0x86, 0x87, 0x87, 0x87, 0x86, 0x83, 0x80, 
	0x7E, 0x7D, 0x7A, 0x74, 0x6E, 0x6B, 0x6C, 0x6B, 0x6C, 0x6F, 0x76, 0x7C, 0x7D, 0x7C, 0x7E, 0x81, 
	0x85, 0x88, 0x8E, 0x93, 0x94, 0x93, 0x8F, 0x8A, 0x84, 0x81, 0x80, 0x7E, 0x79, 0x73, 0x72, 0x73, 
	0x71, 0x6F, 0x6F, 0x72, 0x78, 0x7D, 0x80, 0x81, 0x83, 0x87, 0x87, 0x86, 0x88, 0x8D, 0x8E, 0x8B, 
	0x88, 0x87, 0x88, 0x86, 0x82, 0x81, 0x81, 0x7F, 0x7E, 0x7C, 0x7B, 0x78, 0x78, 0x7A, 0x7C, 0x7E, 
	0x7E, 0x80, 0x80, 0x7F, 0x80, 0x82, 0x84, 0x86, 0x86, 0x87, 0x87, 0x87, 0x88, 0x87, 0x84, 0x81, 
	0x7D, 0x7D, 0x7C, 0x7A, 0x7A, 0x7A, 0x7A, 0x76, 0x71, 0x6F, 0x72, 0x78, 0x7D, 0x7E, 0x7F, 0x83, 
	0x84, 0x87, 0x86, 0x86, 0x86, 0x86, 0x87, 0x86, 0x86, 0x85, 0x83, 0x7F, 0x7E, 0x7C, 0x7B, 0x7A, 
	0x7B, 0x7C, 0x7B, 0x7D, 0x7F, 0x7F, 0x80, 0x82, 0x83, 0x83, 0x83, 0x83, 0x86, 0x88, 0x86, 0x85, 
	0x82, 0x81, 0x80, 0x80, 0x7E, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7D, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x81, 0x82, 0x83, 0x82, 0x81, 0x81, 0x80, 0x80, 0x7E, 0x7D, 0x7B, 0x7C, 0x7D, 0x7C, 
	0x7D, 0x7C, 0x7E, 0x7E, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 
	0x7F, 0x7F, 0x7F, 0x80, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x83, 0x83, 0x81, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 
	0x81, 0x81, 0x82, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7E, 0x7E, 0x7D, 0x7D, 0x7E, 0x7E, 0x7F, 
	0x80, 0x7F, 0x80, 0x82, 0x82, 0x82, 0x82, 0x81, 0x82, 0x81, 0x81, 0x80, 0x7F, 0x7D, 0x7D, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7C, 0x7E, 0x7F, 0x81, 0x81, 0x83, 0x85, 0x86, 0x85, 0x84, 0x85, 0x85, 0x85, 
	0x83, 0x82, 0x81, 0x7F, 0x7C, 0x7B, 0x7A, 0x79, 0x7A, 0x7A, 0x7D, 0x7F, 0x80, 0x80, 0x81, 0x83, 
	0x86, 0x88, 0x8C, 0x91, 0x90, 0x8C, 0x86, 0x82, 0x81, 0x81, 0x7C, 0x76, 0x71, 0x71, 0x72, 0x71, 
	0x70, 0x71, 0x76, 0x7B, 0x7E, 0x80, 0x82, 0x87, 0x8E, 0x91, 0x91, 0x8D, 0x89, 0x84, 0x83, 0x81, 
	0x80, 0x7E, 0x7F, 0x7D, 0x77, 0x73, 0x70, 0x6F, 0x6F, 0x72, 0x77, 0x7C, 0x7E, 0x80, 0x81, 0x84, 
	0x85, 0x87, 0x87, 0x87, 0x87, 0x88, 0x87, 0x85, 0x85, 0x84, 0x83, 0x80, 0x7F, 0x7D, 0x7D, 0x7C, 
	0x7C, 0x7C, 0x7C, 0x7D, 0x7E, 0x7E, 0x7E, 0x7F, 0x80, 0x81, 0x81, 0x82, 0x83, 0x83, 0x84, 0x83, 
	0x83, 0x83, 0x83, 0x82, 0x83, 0x82, 0x81, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x7E, 0x7B, 0x79, 0x78, 
	0x79, 0x7B, 0x81, 0x86, 0x88, 0x86, 0x83, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x83, 0x83, 
	0x81, 0x80, 0x7F, 0x7D, 0x7C, 0x7C, 0x7D, 0x7E, 0x7E, 0x7E, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 
	0x80, 0x82, 0x83, 0x85, 0x85, 0x84, 0x83, 0x82, 0x81, 0x7F, 0x7D, 0x7B, 0x7A, 0x7B, 0x7C, 0x7B, 
	0x7C, 0x7C, 0x7E, 0x80, 0x7F, 0x81, 0x82, 0x83, 0x85, 0x87, 0x86, 0x86, 0x85, 0x83, 0x81, 0x7E, 
	0x7C, 0x7D, 0x7C, 0x7B, 0x79, 0x79, 0x79, 0x79, 0x78, 0x7A, 0x7C, 0x7F, 0x81, 0x83, 0x85, 0x86, 
	0x86, 0x87, 0x87, 0x86, 0x87, 0x86, 0x85, 0x83, 0x81, 0x80, 0x7E, 0x7E, 0x7C, 0x7C, 0x7A, 0x79, 
	0x7A, 0x7B, 0x7C, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x83, 0x85, 0x85, 0x86, 0x85, 0x85, 0x84, 0x83, 
	0x81, 0x80, 0x7F, 0x7D, 0x7C, 0x7B, 0x7C, 0x7B, 0x7B, 0x7B, 0x7C, 0x7D, 0x7D, 0x7E, 0x80, 0x80, 
	0x80, 0x80, 0x81, 0x82, 0x82, 0x83, 0x83, 0x83, 0x83, 0x83, 0x82, 0x83, 0x82, 0x83, 0x83, 0x82, 
	0x81, 0x80, 0x7F, 0x7E, 0x7D, 0x7D, 0x7D, 0x7E, 0x7C, 0x7D, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 0x80, 
	0x80, 0x80, 0x81, 0x83, 0x83, 0x83, 0x83, 0x83, 0x83, 0x82, 0x81, 0x80, 0x7F, 0x7E, 0x7C, 0x7D, 
	0x7D, 0x7B, 0x7A, 0x7B, 0x7B, 0x7D, 0x7E, 0x7E, 0x80, 0x80, 0x81, 0x84, 0x84, 0x85, 0x85, 0x84, 
	0x83, 0x83, 0x83, 0x83, 0x82, 0x80, 0x7F, 0x7E, 0x7C, 0x7C, 0x7D, 0x7E, 0x7D, 0x7E, 0x80, 0x7F, 
	0x7F, 0x80, 0x81, 0x81, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 
	0x7D, 0x7E, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x82, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x7F, 0x7F, 0x80, 0x80, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x80, 
	0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x80, 0x82, 0x82, 0x81, 0x80, 0x81, 0x81, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 
	0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 
	0x7F, 0x80, 0x80, 0x81, 0x80, 0x82, 0x81, 0x82, 0x82, 0x81, 0x81, 0x80, 0x80, 0x81, 0x82, 0x80, 
	0x7F, 0x80, 0x80, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7D, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x81, 
	0x82, 0x82, 0x82, 0x82, 0x83, 0x83, 0x82, 0x83, 0x83, 0x82, 0x80, 0x81, 0x7F, 0x7F, 0x7D, 0x7E, 
	0x7C, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x80, 0x81, 0x81, 0x83, 0x83, 0x84, 0x83, 0x84, 
	0x83, 0x82, 0x81, 0x82, 0x81, 0x80, 0x7F, 0x7D, 0x7D, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7E, 0x7F, 
	0x7F, 0x81, 0x82, 0x83, 0x83, 0x84, 0x84, 0x83, 0x81, 0x81, 0x81, 0x81, 0x80, 0x7F, 0x7E, 0x7D, 
	0x7D, 0x7D, 0x7C, 0x7D, 0x7E, 0x7F, 0x80, 0x7F, 0x80, 0x81, 0x82, 0x82, 0x83, 0x82, 0x82, 0x81, 
	0x82, 0x81, 0x81, 0x80, 0x81, 0x7F, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 0x80, 
	0x7F, 0x7F, 0x7F, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 
	0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 
	0x7F, 0x80, 0x7F, 0x7F, 0x7E, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 
	0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x80, 0x81, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 
	0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x81, 0x82, 0x83, 0x82, 0x82, 0x82, 
	0x82, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 
	0x7F, 0x80, 0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7C, 0x7D, 0x7D, 0x7F, 0x80, 0x81, 0x84, 0x86, 0x87, 
	0x88, 0x88, 0x8B, 0x90, 0x91, 0x8D, 0x88, 0x86, 0x84, 0x82, 0x7F, 0x7E, 0x79, 0x71, 0x6C, 0x6C, 
	0x6D, 0x6D, 0x72, 0x78, 0x7F, 0x80, 0x7F, 0x80, 0x83, 0x8A, 0x90, 0x95, 0x96, 0x95, 0x91, 0x8B, 
	0x86, 0x81, 0x7D, 0x76, 0x6F, 0x6C, 0x6A, 0x69, 0x68, 0x69, 0x6A, 0x6F, 0x74, 0x7B, 0x7E, 0x7F, 
	0x83, 0x88, 0x8E, 0x91, 0x90, 0x8C, 0x88, 0x85, 0x84, 0x82, 0x80, 0x80, 0x7F, 0x7D, 0x7A, 0x78, 
	0x78, 0x78, 0x79, 0x7A, 0x7D, 0x7D, 0x7E, 0x80, 0x84, 0x85, 0x87, 0x86, 0x87, 0x87, 0x86, 0x86, 
	0x85, 0x84, 0x82, 0x82, 0x7F, 0x7F, 0x7E, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7E, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x82, 0x83, 0x83, 0x83, 0x82, 0x81, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7E, 0x7F, 0x7D, 
	0x7D, 0x7E, 0x7E, 0x7D, 0x7D, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 
	0x7F, 0x7F, 0x7E, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x81, 0x83, 0x83, 0x83, 0x83, 0x84, 0x83, 0x82, 
	0x82, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x81, 0x82, 0x82, 0x82, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x7F, 
	0x7F, 0x7D, 0x7E, 0x7E, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x82, 0x81, 
	0x81, 0x83, 0x81, 0x82, 0x82, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 
	0x7F, 0x7E, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 
	0x80, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 0x7D, 0x7E, 0x7E, 0x7E, 0x7D, 0x7E, 0x7F, 0x7D, 0x7E, 0x7F, 
	0x7F, 0x7F, 0x80, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 0x7C, 0x7C, 0x7D, 0x7C, 0x7B, 
	0x7B, 0x7A, 0x7B, 0x7B, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7C, 0x7B, 0x7C, 0x7D, 0x7C, 0x7D, 0x7E, 
	0x7E, 0x7D, 0x7C, 0x7E, 0x7E, 0x7C, 0x7B, 0x7C, 0x7B, 0x7A, 0x7B, 0x7C, 0x7B, 0x7A, 0x7B, 0x7C, 
	0x79, 0x7B, 0x7E, 0x7D, 0x7B, 0x7F, 0x80, 0x80, 0x91, 0xBF, 0xED, 0xFC, 0xF9, 0xFD, 0xFC, 0xCE, 
	0x72, 0x1F, 0x00, 0x01, 0x05, 0x1B, 0x3F, 0x50, 0x3C, 0x1A, 0x23, 0x68, 0xB8, 0xE6, 0xEF, 0xF0, 
	0xF0, 0xE9, 0xE0, 0xE6, 0xF6, 0xFD, 0xF4, 0xD3, 0x9A, 0x59, 0x2C, 0x26, 0x30, 0x29, 0x0C, 0x00, 
	0x04, 0x09, 0x04, 0x11, 0x42, 0x74, 0x8F, 0x9F, 0xC0, 0xE1, 0xEC, 0xE9, 0xDE, 0xC5, 0xA7, 0x9E, 
	0xAE, 0xAB, 0x8C, 0x7C, 0x87, 0x7C, 0x3F, 0x06, 0x00, 0x13, 0x1A, 0x1D, 0x33, 0x54, 0x6C, 0x7C, 
	0x91, 0xA8, 0xB7, 0xC5, 0xD1, 0xD9, 0xDB, 0xDB, 0xD5, 0xC9, 0xBA, 0xAF, 0x9F, 0x87, 0x6F, 0x56, 
	0x40, 0x32, 0x34, 0x3B, 0x3E, 0x3F, 0x4C, 0x63, 0x70, 0x6D, 0x6F, 0x7C, 0x8C, 0x9A, 0xA9, 0xBD, 
	0xC9, 0xC8, 0xC4, 0xBF, 0xB1, 0x9C, 0x8A, 0x7D, 0x6C, 0x58, 0x4A, 0x48, 0x49, 0x42, 0x37, 0x31, 
	0x33, 0x41, 0x58, 0x6E, 0x7A, 0x80, 0x8B, 0xA1, 0xB5, 0xC2, 0xC4, 0xBD, 0xB3, 0xB0, 0xB1, 0xAC, 
	0xA0, 0x90, 0x81, 0x73, 0x66, 0x5D, 0x5C, 0x5A, 0x56, 0x50, 0x50, 0x56, 0x63, 0x73, 0x7F, 0x80, 
	0x80, 0x81, 0x86, 0x8F, 0x9C, 0xAB, 0xB5, 0xB8, 0xB3, 0xAA, 0xA1, 0x9A, 0x92, 0x87, 0x78, 0x6E, 
	0x6A, 0x69, 0x6A, 0x69, 0x65, 0x5E, 0x57, 0x56, 0x5F, 0x6E, 0x7C, 0x82, 0x84, 0x86, 0x89, 0x90, 
	0x97, 0x9B, 0x99, 0x94, 0x92, 0x93, 0x8A, 0x7D, 0x78, 0x7D, 0x7F, 0x77, 0x6F, 0x6C, 0x6A, 0x6B, 
	0x70, 0x7B, 0x7E, 0x7D, 0x83, 0x8E, 0x93, 0x92, 0x96, 0xA1, 0xA4, 0x96, 0x89, 0x89, 0x90, 0x91, 
	0x8A, 0x81, 0x75, 0x6F, 0x78, 0x88, 0x88, 0x7B, 0x79, 0x7F, 0x70, 0x48, 0x30, 0x41, 0x67, 0x7D, 
	0x83, 0x84, 0x82, 0x80, 0x85, 0x94, 0x9E, 0x99, 0x91, 0x90, 0x91, 0x90, 0x90, 0x94, 0x94, 0x8B, 
	0x82, 0x7C, 0x76, 0x70, 0x6B, 0x6F, 0x76, 0x77, 0x70, 0x68, 0x6A, 0x74, 0x7D, 0x7E, 0x7E, 0x80, 
	0x85, 0x8B, 0x92, 0x9A, 0xA0, 0x9B, 0x8E, 0x82, 0x7D, 0x7D, 0x7D, 0x7D, 0x7C, 0x76, 0x6D, 0x66, 
	0x66, 0x68, 0x69, 0x6E, 0x75, 0x7B, 0x7B, 0x80, 0x93, 0xB3, 0xCC, 0xCC, 0xB1, 0x8C, 0x71, 0x68, 
	0x6C, 0x76, 0x7E, 0x75, 0x50, 0x25, 0x18, 0x35, 0x62, 0x7C, 0x7B, 0x78, 0x85, 0x99, 0x9B, 0x8A, 
	0x7D, 0x8B, 0xAA, 0xC0, 0xC6, 0xC4, 0xBC, 0xA6, 0x81, 0x5D, 0x4B, 0x53, 0x6D, 0x81, 0x80, 0x6F, 
	0x5D, 0x50, 0x4E, 0x5E, 0x83, 0xA2, 0xAD, 0xAB, 0xB0, 0xB7, 0xAF, 0x98, 0x85, 0x82, 0x88, 0x8E, 
	0x90, 0x8A, 0x83, 0x7C, 0x70, 0x61, 0x58, 0x5C, 0x60, 0x5F, 0x61, 0x70, 0x7F, 0x81, 0x7D, 0x80, 
	0x8A, 0x90, 0x91, 0x91, 0x92, 0x97, 0x9D, 0x9B, 0x8E, 0x7F, 0x7A, 0x7B, 0x7B, 0x78, 0x78, 0x7A, 
	0x77, 0x73, 0x6F, 0x6F, 0x74, 0x7B, 0x7F, 0x7F, 0x80, 0x82, 0x86, 0x88, 0x8B, 0x91, 0x91, 0x8B, 
	0x87, 0x86, 0x85, 0x83, 0x83, 0x83, 0x7F, 0x7A, 0x7B, 0x7B, 0x78, 0x7D, 0x8A, 0x8F, 0x87, 0x80, 
	0x82, 0x7D, 0x6C, 0x65, 0x73, 0x84, 0x7D, 0x66, 0x58, 0x58, 0x63, 0x74, 0x83, 0x85, 0x80, 0x80, 
	0x8B, 0x91, 0x91, 0x92, 0x96, 0x97, 0x96, 0x99, 0xA0, 0x9F, 0x96, 0x8B, 0x81, 0x7C, 0x79, 0x77, 
	0x71, 0x68, 0x61, 0x60, 0x5F, 0x5F, 0x64, 0x70, 0x7A, 0x80, 0x81, 0x84, 0x8B, 0x93, 0x96, 0x95, 
	0x93, 0x91, 0x8F, 0x8B, 0x86, 0x82, 0x81, 0x81, 0x80, 0x7D, 0x77, 0x71, 0x6F, 0x70, 0x70, 0x72, 
	0x75, 0x7A, 0x7E, 0x81, 0x83, 0x84, 0x84, 0x87, 0x87, 0x87, 0x88, 0x8F, 0x94, 0x94, 0x8D, 0x86, 
	0x83, 0x82, 0x7E, 0x7B, 0x79, 0x78, 0x79, 0x7B, 0x7B, 0x7D, 0x7E, 0x7D, 0x7E, 0x7E, 0x7F, 0x81, 
	0x82, 0x82, 0x83, 0x83, 0x82, 0x83, 0x83, 0x82, 0x81, 0x80, 0x7F, 0x7E, 0x7E, 0x7D, 0x7E, 0x7E, 
	0x7E, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x81, 0x82, 0x83, 0x83, 0x83, 0x83, 0x82, 0x82, 0x81, 0x80, 0x7F, 0x7D, 0x7D, 0x7F, 0x7F, 
	0x7E, 0x7E, 0x7D, 0x7E, 0x7D, 0x7C, 0x7C, 0x7D, 0x7E, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x85, 
	0x85, 0x84, 0x83, 0x82, 0x81, 0x82, 0x81, 0x81, 0x80, 0x7D, 0x7D, 0x7C, 0x7D, 0x7B, 0x7B, 0x7B, 
	0x7C, 0x7E, 0x80, 0x7F, 0x80, 0x80, 0x82, 0x82, 0x81, 0x82, 0x84, 0x84, 0x82, 0x82, 0x83, 0x83, 
	0x82, 0x82, 0x82, 0x81, 0x81, 0x82, 0x83, 0x82, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 0x83, 0x81, 
	0x80, 0x7E, 0x7A, 0x7A, 0x7A, 0x7A, 0x7B, 0x7B, 0x7A, 0x7B, 0x7D, 0x7E, 0x7E, 0x7E, 0x80, 0x81, 
	0x84, 0x85, 0x86, 0x84, 0x82, 0x82, 0x84, 0x85, 0x83, 0x82, 0x82, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x7D, 0x7D, 0x7D, 0x7C, 0x7C, 0x7D, 0x7E, 0x7F, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x83, 0x81, 
	0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 0x7F, 
	0x80, 0x81, 0x81, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x83, 0x82, 0x81, 0x81, 0x81, 
	0x81, 0x80, 0x7F, 0x7E, 0x7F, 0x7F, 0x7E, 0x7F, 0x80, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x81, 
	0x83, 0x82, 0x82, 0x83, 0x82, 0x82, 0x83, 0x83, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x80, 0x7E, 
	0x7C, 0x7B, 0x7A, 0x7A, 0x7C, 0x7E, 0x7F, 0x80, 0x80, 0x82, 0x81, 0x7F, 0x7F, 0x82, 0x86, 0x88, 
	0x84, 0x80, 0x7F, 0x80, 0x83, 0x84, 0x82, 0x80, 0x7E, 0x79, 0x78, 0x79, 0x7A, 0x76, 0x72, 0x71, 
	0x70, 0x70, 0x71, 0x77, 0x7C, 0x7F, 0x80, 0x80, 0x80, 0x85, 0x8D, 0x8F, 0x8B, 0x86, 0x85, 0x86, 
	0x87, 0x85, 0x83, 0x82, 0x80, 0x7C, 0x7B, 0x7B, 0x7A, 0x7A, 0x7C, 0x7E, 0x7E, 0x7D, 0x7F, 0x80, 
	0x7E, 0x7F, 0x8E, 0x9F, 0xA1, 0x90, 0x85, 0x88, 0x8F, 0x8E, 0x84, 0x74, 0x66, 0x65, 0x71, 0x7A, 
	0x76, 0x70, 0x6F, 0x6F, 0x6E, 0x71, 0x77, 0x7F, 0x8E, 0xA1, 0xA8, 0x9D, 0x90, 0x92, 0x9A, 0x95, 
	0x86, 0x7D, 0x7E, 0x7E, 0x7E, 0x7F, 0x7C, 0x72, 0x68, 0x63, 0x64, 0x6E, 0x78, 0x7D, 0x80, 0x83, 
	0x84, 0x82, 0x84, 0x8D, 0x94, 0x94, 0x8F, 0x8E, 0x8F, 0x8A, 0x86, 0x84, 0x85, 0x83, 0x7F, 0x7A, 
	0x74, 0x72, 0x76, 0x78, 0x72, 0x67, 0x65, 0x70, 0x7A, 0x7D, 0x7C, 0x7D, 0x81, 0x80, 0x7F, 0x81, 
	0x84, 0x86, 0x86, 0x86, 0x84, 0x84, 0x84, 0x84, 0x83, 0x80, 0x7C, 0x7B, 0x7B, 0x7A, 0x7A, 0x7B, 
	0x7B, 0x79, 0x7A, 0x7A, 0x7C, 0x7F, 0x81, 0x82, 0x83, 0x83, 0x85, 0x85, 0x87, 0x88, 0x88, 0x88, 
	0x87, 0x88, 0x85, 0x81, 0x80, 0x81, 0x7F, 0x7D, 0x7E, 0x7F, 0x7C, 0x7B, 0x7D, 0x7F, 0x80, 0x82, 
	0x83, 0x81, 0x7F, 0x81, 0x81, 0x81, 0x82, 0x85, 0x84, 0x82, 0x83, 0x86, 0x84, 0x81, 0x83, 0x82, 
	0x7F, 0x7E, 0x81, 0x80, 0x7D, 0x7C, 0x7F, 0x7D, 0x7A, 0x7D, 0x80, 0x7E, 0x7C, 0x7F, 0x7E, 0x7C, 
	0x7E, 0x84, 0x80, 0x7D, 0x82, 0x85, 0x7E, 0x7D, 0x84, 0x85, 0x7C, 0x7F, 0x88, 0x7E, 0x73, 0x79, 
	0x7F, 0x7A, 0x95, 0xDE, 0xF8, 0xAB, 0x4E, 0x3B, 0x41, 0x1E, 0x01, 0x34, 0x81, 0x9B, 0x8C, 0x83, 
	0x73, 0x50, 0x48, 0x6E, 0x98, 0xAB, 0xB4, 0xBE, 0xB8, 0xAD, 0xAE, 0xAA, 0x8D, 0x72, 0x7A, 0x90, 
	0x9B, 0x97, 0x8C, 0x73, 0x56, 0x4B, 0x53, 0x60, 0x6D, 0x7E, 0x86, 0x82, 0x7F, 0x82, 0x80, 0x77, 
	0x79, 0x85, 0x8E, 0x97, 0xA2, 0xA8, 0x9B, 0x8B, 0x82, 0x81, 0x7C, 0x7D, 0x83, 0x83, 0x81, 0x83, 
	0x84, 0x7F, 0x74, 0x6E, 0x6D, 0x70, 0x77, 0x7D, 0x7E, 0x7C, 0x7C, 0x7C, 0x79, 0x78, 0x7D, 0x81, 
	0x7D, 0x7D, 0x86, 0x90, 0x92, 0x8F, 0x8A, 0x84, 0x7F, 0x80, 0x84, 0x84, 0x82, 0x7F, 0x7B, 0x77, 
	0x77, 0x7B, 0x7B, 0x7A, 0x7C, 0x7D, 0x7B, 0x7B, 0x7E, 0x83, 0x84, 0x82, 0x80, 0x7E, 0x80, 0x85, 
	0x88, 0x85, 0x81, 0x7E, 0x7E, 0x7D, 0x7D, 0x82, 0x86, 0x85, 0x7B, 0x72, 0x71, 0x78, 0x7E, 0x7F, 
	0x7D, 0x7C, 0x7B, 0x7A, 0x7E, 0x81, 0x81, 0x80, 0x80, 0x82, 0x82, 0x84, 0x87, 0x88, 0x84, 0x82, 
	0x82, 0x83, 0x83, 0x83, 0x82, 0x7E, 0x7D, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7D, 0x7C, 0x7C, 
	0x7D, 0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x85, 0x85, 0x83, 0x82, 0x83, 0x83, 0x83, 
	0x82, 0x82, 0x7F, 0x7D, 0x7C, 0x7C, 0x7B, 0x7B, 0x7D, 0x7E, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 
	0x7F, 0x80, 0x84, 0x87, 0x88, 0x85, 0x84, 0x82, 0x81, 0x81, 0x81, 0x82, 0x80, 0x7E, 0x7C, 0x7B, 
	0x7B, 0x7B, 0x7B, 0x7A, 0x7B, 0x7B, 0x7D, 0x7E, 0x80, 0x82, 0x83, 0x82, 0x83, 0x85, 0x86, 0x86, 
	0x85, 0x84, 0x84, 0x84, 0x83, 0x82, 0x80, 0x7E, 0x7D, 0x7C, 0x7C, 0x7F, 0x7E, 0x7C, 0x7B, 0x7C, 
	0x7F, 0x81, 0x81, 0x82, 0x81, 0x81, 0x80, 0x81, 0x82, 0x83, 0x84, 0x84, 0x83, 0x82, 0x81, 0x80, 
	0x80, 0x80, 0x81, 0x7F, 0x7E, 0x7D, 0x7C, 0x7C, 0x7C, 0x7D, 0x7D, 0x7C, 0x7C, 0x7D, 0x7F, 0x7F, 
	0x80, 0x82, 0x81, 0x81, 0x82, 0x83, 0x85, 0x84, 0x82, 0x80, 0x80, 0x81, 0x82, 0x81, 0x81, 0x7E, 
	0x7B, 0x7A, 0x7D, 0x7E, 0x7E, 0x7D, 0x7D, 0x7E, 0x80, 0x81, 0x82, 0x81, 0x82, 0x81, 0x81, 0x81, 
	0x82, 0x84, 0x84, 0x82, 0x81, 0x80, 0x80, 0x7F, 0x7E, 0x7E, 0x7C, 0x7B, 0x7B, 0x7E, 0x7D, 0x7D, 
	0x7D, 0x7F, 0x7E, 0x7E, 0x7F, 0x7F, 0x81, 0x81, 0x82, 0x82, 0x81, 0x82, 0x81, 0x81, 0x82, 0x80, 
	0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 
	0x7F, 0x80, 0x81, 0x81, 0x81, 0x81, 0x83, 0x82, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 0x7F, 
	0x80, 0x7F, 0x7F, 0x7E, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x82, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7E, 0x7F, 0x7F, 
	0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 
	0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x81, 0x80, 0x7E, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 
	0x80, 0x81, 0x82, 0x81, 0x83, 0x82, 0x82, 0x82, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x82, 0x81, 0x81, 
	0x81, 0x81, 0x82, 0x81, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x7E, 0x7F, 0x7E, 0x7F, 0x80, 0x80, 0x7F, 
	0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x7E, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x81, 0x80, 0x7F, 0x80, 0x7F, 0x7E, 0x7D, 0x80, 0x80, 0x7F, 0x7E, 0x7D, 0x7E, 0x7F, 0x80, 0x7F, 
	0x7F, 0x80, 0x82, 0x81, 0x81, 0x80, 0x81, 0x81, 0x82, 0x82, 0x82, 0x80, 0x7F, 0x80, 0x7F, 0x7E, 
	0x7E, 0x7F, 0x7E, 0x7D, 0x7D, 0x7E, 0x7E, 0x80, 0x81, 0x81, 0x81, 0x82, 0x82, 0x80, 0x82, 0x84, 
	0x83, 0x81, 0x80, 0x80, 0x81, 0x7F, 0x7E, 0x7C, 0x79, 0x78, 0x7B, 0x7E, 0x7E, 0x7E, 0x80, 0x86, 
	0x8B, 0x8F, 0x91, 0x8D, 0x85, 0x7F, 0x7D, 0x7B, 0x79, 0x7A, 0x7A, 0x7B, 0x79, 0x7A, 0x79, 0x79, 
	0x7B, 0x7D, 0x7E, 0x7E, 0x7F, 0x7F, 0x81, 0x87, 0x8D, 0x8D, 0x88, 0x89, 0x8D, 0x8D, 0x87, 0x81, 
	0x81, 0x81, 0x7E, 0x7A, 0x77, 0x72, 0x6D, 0x6D, 0x71, 0x78, 0x7D, 0x7D, 0x7E, 0x80, 0x82, 0x83, 
	0x85, 0x8C, 0x8F, 0x90, 0x8F, 0x90, 0x8E, 0x89, 0x85, 0x82, 0x82, 0x7F, 0x7E, 0x7C, 0x77, 0x72, 
	0x6E, 0x6F, 0x70, 0x73, 0x79, 0x7C, 0x7C, 0x7C, 0x7F, 0x82, 0x83, 0x84, 0x86, 0x87, 0x86, 0x87, 
	0x86, 0x85, 0x83, 0x82, 0x82, 0x80, 0x7E, 0x7D, 0x7E, 0x7D, 0x7B, 0x7A, 0x79, 0x7A, 0x7B, 0x7C, 
	0x7D, 0x7E, 0x7F, 0x80, 0x80, 0x81, 0x84, 0x84, 0x84, 0x85, 0x85, 0x86, 0x85, 0x84, 0x81, 0x80, 
	0x80, 0x7F, 0x80, 0x7E, 0x7D, 0x7D, 0x7D, 0x7C, 0x7C, 0x7E, 0x7E, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 
	0x81, 0x81, 0x83, 0x84, 0x84, 0x83, 0x82, 0x82, 0x82, 0x81, 0x81, 0x81, 0x80, 0x7D, 0x7D, 0x7D, 
	0x7D, 0x7C, 0x7D, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x80, 0x82, 0x84, 0x83, 0x82, 0x82, 0x83, 0x83, 
	0x82, 0x83, 0x82, 0x82, 0x81, 0x81, 0x7F, 0x7E, 0x7C, 0x7C, 0x7C, 0x7C, 0x7D, 0x7E, 0x7F, 0x7D, 
	0x7E, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x83, 0x83, 0x82, 0x83, 0x85, 0x84, 0x83, 0x80, 0x7F, 0x80, 
	0x7F, 0x7E, 0x7E, 0x7D, 0x7C, 0x7B, 0x7B, 0x7C, 0x7C, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 0x80, 0x81, 
	0x82, 0x82, 0x83, 0x82, 0x83, 0x83, 0x82, 0x81, 0x82, 0x82, 0x82, 0x80, 0x7F, 0x7F, 0x7F, 0x7E, 
	0x7E, 0x7E, 0x7D, 0x7D, 0x7D, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x81, 0x82, 0x82, 
	0x82, 0x84, 0x83, 0x81, 0x82, 0x81, 0x81, 0x80, 0x80, 0x81, 0x7F, 0x7E, 0x7E, 0x7E, 0x7D, 0x7E, 
	0x7F, 0x7E, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x83, 0x83, 0x83, 0x82, 0x82, 0x82, 0x81, 
	0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 0x7E, 0x7D, 0x7C, 0x7D, 0x7E, 0x7E, 0x7F, 0x7E, 0x81, 
	0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x83, 0x83, 0x82, 0x80, 0x80, 0x81, 0x80, 0x7F, 
	0x7F, 0x7E, 0x7E, 0x7D, 0x7D, 0x7D, 0x7D, 0x7E, 0x7D, 0x7D, 0x7E, 0x7E, 0x7E, 0x80, 0x80, 0x80, 
	0x80, 0x81, 0x82, 0x82, 0x81, 0x81, 0x81, 0x82, 0x82, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x81, 
	0x81, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 
	0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x82, 0x83, 0x82, 0x81, 0x80, 0x81, 0x82, 0x81, 0x80, 0x80, 
	0x81, 0x80, 0x80, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7E, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x80, 0x81, 0x81, 0x82, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x7F, 0x7F, 0x7E, 0x7F, 
	0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x82, 0x82, 0x81, 
	0x80, 0x81, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x82, 0x82, 0x82, 0x81, 0x81, 0x80, 0x80, 
	0x7F, 0x7E, 0x7F, 0x7E, 0x7E, 0x7E, 0x7E, 0x7E, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x81, 0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7E, 0x7F, 
	0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 
	0x80, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 
	0x81, 0x82, 0x81, 0x81, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x7F, 0x7F, 0x80, 0x81, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7E, 0x7F, 0x80, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7E, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x80, 0x81, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 0x80, 0x80, 
	0x80, 0x7F, 0x81, 0x82, 0x82, 0x83, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x7F, 
	0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 
	0x7F, 0x7F, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x7F, 
	0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 
	0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x81, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 
	0x81, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 
	0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x81, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 
	0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 
	0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x7F, 0x80, 0x81, 0x80, 0x81, 0x81, 0x82, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x7E, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 
	0x82, 0x82, 0x82, 0x82, 0x82, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7F, 0x7E, 
	0x7E, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x81, 0x80, 0x80, 0x81, 0x82, 0x81, 0x81, 
	0x81, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 
	0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 
	0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x7F, 0x80, 0x7F, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x7F, 0x80, 0x7F, 0x80, 
	0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x80, 0x81, 0x82, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 
	0x80, 0x80, 0x81, 0x7F, 0x7F, 0x7F, 0x81, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 
	0x7F, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 
	0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x81, 0x80, 0x80, 
	0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 
	0x80, 0x80, 0x7F, 0x80, 0x81, 0x80, 0x7F, 0x80, 0x81, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x80, 
	0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 
	0x80, 0x80, 0x81, 0x7F, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 
	0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 
	0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 
	0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x81, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x80, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x81, 0x81, 0x80, 0x81, 0x81, 0x80, 0x80, 0x80, 0x81, 
	0x81, 0x81, 0x81, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 
	0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x80, 
	0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 
	0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x7E, 
	0x7F, 0x7E, 0x7D, 0x7C, 0x7C, 0x7C, 0x7B, 0x7D, 0x80, 0x83, 0x84, 0x88, 0x8F, 0x92, 0x92, 0x92, 
	0x93, 0x93, 0x90, 0x8A, 0x84, 0x81, 0x81, 0x7F, 0x7A, 0x74, 0x70, 0x71, 0x6F, 0x6D, 0x6D, 0x6E, 
	0x6E, 0x70, 0x77, 0x7E, 0x7F, 0x7F, 0x81, 0x85, 0x86, 0x8B, 0x91, 0x92, 0x8C, 0x87, 0x85, 0x84, 
	0x82, 0x81, 0x82, 0x81, 0x7E, 0x7C, 0x7A, 0x76, 0x73, 0x71, 0x77, 0x7B, 0x7B, 0x7D, 0x7F, 0x82, 
	0x83, 0x84, 0x86, 0x88, 0x88, 0x88, 0x87, 0x88, 0x88, 0x87, 0x85, 0x83, 0x82, 0x80, 0x7E, 0x7D, 
	0x7C, 0x7A, 0x7A, 0x78, 0x7A, 0x7B, 0x7B, 0x7B, 0x7B, 0x7C, 0x7E, 0x80, 0x80, 0x82, 0x84, 0x85, 
	0x85, 0x86, 0x86, 0x84, 0x84, 0x83, 0x81, 0x7F, 0x7F, 0x7F, 0x7E, 0x7D, 0x7D, 0x7B, 0x7C, 0x7B, 
	0x7C, 0x7B, 0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x83, 0x84, 0x84, 0x84, 0x85, 0x84, 0x84, 0x83, 
	0x82, 0x81, 0x80, 0x7F, 0x80, 0x7E, 0x7D, 0x7C, 0x7D, 0x7C, 0x7C, 0x7D, 0x7D, 0x7D, 0x7E, 0x7E, 
	0x7E, 0x7E, 0x80, 0x80, 0x81, 0x82, 0x84, 0x84, 0x83, 0x83, 0x83, 0x83, 0x82, 0x81, 0x7F, 0x7F, 
	0x7E, 0x7F, 0x7F, 0x7D, 0x7C, 0x7C, 0x7E, 0x7E, 0x7E, 0x7F, 0x7F, 0x7F, 0x7F, 0x81, 0x81, 0x82, 
	0x82, 0x83, 0x83, 0x82, 0x82, 0x81, 0x81, 0x82, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x7E, 0x7F, 0x7E, 
	0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x81, 0x81, 0x82, 0x82, 0x81, 0x81, 
	0x82, 0x81, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x7E, 0x7E, 0x7F, 0x7E, 0x7F, 0x80, 
	0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x81, 0x81, 0x81, 0x81, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 
	0x80, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x7F, 
	0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7E, 0x7F, 0x7F, 0x80, 0x80, 0x81, 
	0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 
	0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 
	0x81, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 
	0x7F, 0x80, 0x7F, 0x80, 0x81, 0x81, 0x81, 0x82, 0x82, 0x80, 0x80, 0x80, 0x82, 0x81, 0x80, 0x80, 
	0x7F, 0x80, 0x7F, 0x7F, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x80, 
	0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x81, 0x80, 0x80, 0x81, 0x81, 0x81, 0x80, 
	0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 
	0x81, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 
	0x7F, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x7F, 0x7F, 0x81, 0x80, 0x80, 0x80, 0x81, 0x80, 0x80, 
	0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7F, 0x80, 0x80, 0x80, 0x7F, 0x80, 
	0x80, 0x7F, 0x80, 0x80, 0x7F, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x81, 0x80, 
	0x80, 0x80, 0x80, 0x7F, 
};
