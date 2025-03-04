#ifndef __rebootex__
#define __rebootex__

static unsigned int size_rebootex = 2285;
static unsigned char rebootex[] __attribute__((aligned(16))) = {
	0xff, 0x0f, 0x02, 0x3c, 0xfc, 0x88, 0x09, 0x3c, 0xfc, 0xff, 0x42, 0x34, 0xbc, 0x02, 0x29, 0x25, 
	0x24, 0x48, 0x22, 0x01, 0xfc, 0x88, 0x02, 0x3c, 0xff, 0x03, 0x03, 0x3c, 0xfc, 0x88, 0x0a, 0x3c, 
	0xfc, 0x88, 0x08, 0x3c, 0x70, 0x03, 0x42, 0x24, 0xff, 0xff, 0x63, 0x34, 0x08, 0x02, 0x4a, 0x25, 
	0x08, 0x07, 0x08, 0x25, 0x82, 0x10, 0x02, 0x00, 0x00, 0x0c, 0x0b, 0x3c, 0x24, 0x10, 0x43, 0x00, 
	0x82, 0x50, 0x0a, 0x00, 0x82, 0x40, 0x08, 0x00, 0x24, 0x50, 0x43, 0x01, 0x24, 0x40, 0x03, 0x01, 
	0x25, 0x68, 0x4b, 0x00, 0x00, 0x08, 0x03, 0x3c, 0x5f, 0x88, 0x02, 0x3c, 0x82, 0x48, 0x09, 0x00, 
	0xe8, 0xff, 0xbd, 0x27, 0x25, 0x48, 0x23, 0x01, 0xf8, 0xff, 0x43, 0x34, 0x04, 0x24, 0x02, 0x3c, 
	0x14, 0x00, 0xbf, 0xaf, 0x04, 0x00, 0x5f, 0x34, 0x40, 0x04, 0x02, 0x3c, 0x22, 0x00, 0x59, 0x34, 
	0xff, 0xf3, 0x02, 0x3c, 0xff, 0xff, 0x58, 0x34, 0x40, 0x02, 0x02, 0x3c, 0x60, 0x00, 0x0c, 0x3c, 
	0x21, 0x20, 0x4e, 0x34, 0x60, 0x88, 0x02, 0x3c, 0x10, 0x00, 0xb3, 0xaf, 0x0c, 0x00, 0xb2, 0xaf, 
	0x08, 0x00, 0xb1, 0xaf, 0x04, 0x00, 0xb0, 0xaf, 0x21, 0x88, 0xa0, 0x00, 0x21, 0x90, 0xc0, 0x00, 
	0x21, 0x98, 0xe0, 0x00, 0x25, 0x50, 0x4b, 0x01, 0x25, 0x40, 0x0b, 0x01, 0x21, 0x20, 0x8f, 0x35, 
	0x21, 0x80, 0x80, 0x00, 0xf8, 0x3f, 0x4b, 0x34, 0x08, 0x00, 0x8c, 0x35, 0xbf, 0xaf, 0x07, 0x3c, 
	0xfc, 0x88, 0x06, 0x3c, 0x00, 0x80, 0x05, 0x3c, 0x08, 0x00, 0x62, 0x8c, 0x05, 0x00, 0x5f, 0x14, 
	0x08, 0x00, 0x64, 0x24, 0x08, 0x00, 0x6e, 0xac, 0x6c, 0x00, 0x6a, 0xac, 0x57, 0x00, 0x3f, 0x0a, 
	0x04, 0x00, 0x63, 0x24, 0x08, 0x00, 0x62, 0x8c, 0x05, 0x00, 0x4c, 0x14, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x6f, 0xac, 0x00, 0x00, 0x89, 0xac, 0x57, 0x00, 0x3f, 0x0a, 0x04, 0x00, 0x63, 0x24, 
	0x00, 0x00, 0x82, 0x8c, 0x04, 0x00, 0x59, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0xac, 
	0x57, 0x00, 0x3f, 0x0a, 0x04, 0x00, 0x63, 0x24, 0x00, 0x00, 0x82, 0x8c, 0x0b, 0x00, 0x47, 0x54, 
	0x04, 0x00, 0x63, 0x24, 0x10, 0x00, 0x62, 0x8c, 0x08, 0x00, 0x40, 0x54, 0x04, 0x00, 0x63, 0x24, 
	0x0c, 0x00, 0x62, 0x8c, 0x0c, 0x00, 0x6d, 0xac, 0x24, 0x10, 0x58, 0x00, 0x80, 0x10, 0x02, 0x00, 
	0x25, 0x10, 0x45, 0x00, 0xf4, 0x08, 0xc2, 0xac, 0x04, 0x00, 0x63, 0x24, 0xde, 0xff, 0x6b, 0x14, 
	0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x3f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x88, 0x02, 0x3c, 
	0x4c, 0x08, 0x59, 0x8c, 0x21, 0x20, 0x00, 0x02, 0x21, 0x28, 0x20, 0x02, 0x21, 0x30, 0x40, 0x02, 
	0x21, 0x38, 0x60, 0x02, 0x14, 0x00, 0xbf, 0x8f, 0x10, 0x00, 0xb3, 0x8f, 0x0c, 0x00, 0xb2, 0x8f, 
	0x08, 0x00, 0xb1, 0x8f, 0x04, 0x00, 0xb0, 0x8f, 0x08, 0x00, 0x20, 0x03, 0x18, 0x00, 0xbd, 0x27, 
	0xfc, 0x88, 0x02, 0x3c, 0x50, 0x08, 0x42, 0x8c, 0xf8, 0xff, 0xbd, 0x27, 0x04, 0x00, 0xbf, 0xaf, 
	0x09, 0xf8, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x88, 0x02, 0x3c, 0x54, 0x08, 0x59, 0x8c, 
	0x04, 0x00, 0xbf, 0x8f, 0x08, 0x00, 0x20, 0x03, 0x08, 0x00, 0xbd, 0x27, 0xfc, 0x88, 0x02, 0x3c, 
	0xf8, 0x08, 0x42, 0x8c, 0xf8, 0xff, 0xbd, 0x27, 0x04, 0x00, 0xbf, 0xaf, 0x00, 0x00, 0xb0, 0xaf, 
	0x09, 0xf8, 0x40, 0x00, 0x21, 0x80, 0xa0, 0x00, 0x04, 0x00, 0xbf, 0x8f, 0x40, 0x01, 0x02, 0x3c, 
	0x50, 0x00, 0x02, 0xae, 0x00, 0x8a, 0x02, 0x3c, 0x4c, 0x00, 0x02, 0xae, 0x00, 0x00, 0xb0, 0x8f, 
	0x08, 0x00, 0xe0, 0x03, 0x08, 0x00, 0xbd, 0x27, 0xfc, 0x88, 0x02, 0x3c, 0xfc, 0x88, 0x03, 0x3c, 
	0xcc, 0x01, 0x63, 0x24, 0xf8, 0x08, 0x46, 0x8c, 0xff, 0x03, 0x02, 0x3c, 0xff, 0xff, 0x42, 0x34, 
	0x82, 0x18, 0x03, 0x00, 0x24, 0x18, 0x62, 0x00, 0x00, 0x0c, 0x02, 0x3c, 0x25, 0x18, 0x62, 0x00, 
	0x60, 0x14, 0x02, 0x3c, 0x03, 0x00, 0x49, 0x34, 0xff, 0xf3, 0x02, 0x3c, 0xf0, 0xff, 0xbd, 0x27, 
	0xff, 0xff, 0x48, 0x34, 0x01, 0x88, 0x02, 0x3c, 0x08, 0x00, 0xb1, 0xaf, 0x04, 0x00, 0xb0, 0xaf, 
	0x28, 0x00, 0x91, 0x8c, 0x21, 0x80, 0xa0, 0x00, 0x0c, 0x00, 0xbf, 0xaf, 0x00, 0x40, 0x47, 0x34, 
	0x00, 0x88, 0x04, 0x3c, 0x00, 0x80, 0x05, 0x3c, 0x00, 0x00, 0x82, 0x8c, 0x07, 0x00, 0x49, 0x54, 
	0x04, 0x00, 0x84, 0x24, 0xe4, 0xff, 0x82, 0x8c, 0xe4, 0xff, 0x83, 0xac, 0x24, 0x10, 0x48, 0x00, 
	0x80, 0x10, 0x02, 0x00, 0x25, 0x30, 0x45, 0x00, 0x04, 0x00, 0x84, 0x24, 0xf6, 0xff, 0x87, 0x14, 
	0xfc, 0x88, 0x02, 0x3c, 0x68, 0x00, 0x3f, 0x0e, 0xf8, 0x08, 0x46, 0xac, 0x21, 0x28, 0x00, 0x02, 
	0x21, 0xc8, 0x20, 0x02, 0x0c, 0x00, 0xbf, 0x8f, 0x08, 0x00, 0xb1, 0x8f, 0x04, 0x00, 0xb0, 0x8f, 
	0x04, 0x00, 0x04, 0x24, 0x08, 0x00, 0x20, 0x03, 0x10, 0x00, 0xbd, 0x27, 0xf0, 0xff, 0xbd, 0x27, 
	0x04, 0x00, 0xb0, 0xaf, 0x2d, 0xae, 0x02, 0x3c, 0x21, 0x80, 0x80, 0x00, 0x08, 0x00, 0xb1, 0xaf, 
	0x0c, 0x00, 0xbf, 0xaf, 0x21, 0x88, 0xa0, 0x00, 0x48, 0x00, 0x44, 0x34, 0x08, 0xf5, 0x05, 0x26, 
	0x08, 0x75, 0x03, 0x26, 0x00, 0x00, 0xa2, 0x8c, 0x15, 0x00, 0x44, 0x54, 0x04, 0x00, 0xa5, 0x24, 
	0x08, 0x00, 0xa4, 0x8c, 0xff, 0xf3, 0x02, 0x3c, 0xff, 0xff, 0x42, 0x34, 0xfc, 0x88, 0x03, 0x3c, 
	0x24, 0x20, 0x82, 0x00, 0xb4, 0x04, 0x63, 0x24, 0xff, 0x03, 0x02, 0x3c, 0xff, 0xff, 0x42, 0x34, 
	0x82, 0x18, 0x03, 0x00, 0x24, 0x18, 0x62, 0x00, 0x80, 0x20, 0x04, 0x00, 0x00, 0x80, 0x02, 0x3c, 
	0x25, 0x20, 0x82, 0x00, 0x00, 0x0c, 0x02, 0x3c, 0x25, 0x18, 0x62, 0x00, 0xfc, 0x88, 0x02, 0x3c, 
	0xf0, 0x08, 0x44, 0xac, 0x08, 0x00, 0xa3, 0xac, 0xd2, 0x00, 0x3f, 0x0a, 0x00, 0x00, 0x00, 0x00, 
	0xe8, 0xff, 0xa3, 0x14, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x3f, 0x0e, 0x00, 0x00, 0x00, 0x00, 
	0x21, 0x28, 0x20, 0x02, 0x21, 0xc8, 0x00, 0x02, 0x0c, 0x00, 0xbf, 0x8f, 0x08, 0x00, 0xb1, 0x8f, 
	0x04, 0x00, 0xb0, 0x8f, 0x08, 0x00, 0x04, 0x24, 0x08, 0x00, 0x20, 0x03, 0x10, 0x00, 0xbd, 0x27, 
	0xe8, 0xff, 0xbd, 0x27, 0x00, 0x00, 0xb0, 0xaf, 0x21, 0x80, 0x80, 0x00, 0x00, 0x00, 0x84, 0x8c, 
	0x10, 0x00, 0xb4, 0xaf, 0x21, 0xa0, 0xa0, 0x00, 0xfc, 0x88, 0x05, 0x3c, 0x70, 0x08, 0xa5, 0x24, 
	0x0c, 0x00, 0xb3, 0xaf, 0x08, 0x00, 0xb2, 0xaf, 0x04, 0x00, 0xb1, 0xaf, 0x14, 0x00, 0xbf, 0xaf, 
	0x21, 0x88, 0xc0, 0x00, 0x21, 0x90, 0xe0, 0x00, 0xd9, 0x01, 0x3f, 0x0e, 0x21, 0x98, 0x00, 0x01, 
	0x1b, 0x00, 0x40, 0x14, 0xfc, 0x88, 0x02, 0x3c, 0x58, 0x08, 0x45, 0x8c, 0x00, 0x00, 0xa4, 0x8c, 
	0x05, 0x00, 0x82, 0x2c, 0x14, 0x00, 0x40, 0x10, 0x21, 0x18, 0x00, 0x00, 0xfc, 0x88, 0x03, 0x3c, 
	0x80, 0x10, 0x04, 0x00, 0x5c, 0x08, 0x63, 0x24, 0x21, 0x18, 0x62, 0x00, 0x00, 0x00, 0x62, 0x8c, 
	0x08, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x88, 0x02, 0x3c, 0x06, 0x01, 0x3f, 0x0a, 
	0x80, 0x08, 0x43, 0x24, 0xfc, 0x88, 0x02, 0x3c, 0x00, 0x00, 0xa0, 0xac, 0x06, 0x01, 0x3f, 0x0a, 
	0x94, 0x08, 0x43, 0x24, 0xfc, 0x88, 0x02, 0x3c, 0x06, 0x01, 0x3f, 0x0a, 0xa8, 0x08, 0x43, 0x24, 
	0xfc, 0x88, 0x02, 0x3c, 0xbc, 0x08, 0x43, 0x24, 0x19, 0x01, 0x3f, 0x0a, 0x00, 0x00, 0x03, 0xae, 
	0x00, 0x00, 0x04, 0x8e, 0xfc, 0x88, 0x05, 0x3c, 0xd9, 0x01, 0x3f, 0x0e, 0xd0, 0x08, 0xa5, 0x24, 
	0x0d, 0x00, 0x40, 0x14, 0xfc, 0x88, 0x02, 0x3c, 0xfc, 0x88, 0x02, 0x3c, 0x58, 0x08, 0x43, 0x8c, 
	0x00, 0x89, 0x02, 0x3c, 0x04, 0x00, 0x02, 0xae, 0x0c, 0x00, 0x66, 0x8c, 0x08, 0x00, 0x65, 0x8c, 
	0x00, 0x89, 0x04, 0x3c, 0xe6, 0x01, 0x3f, 0x0e, 0x08, 0x00, 0x06, 0xae, 0x22, 0x01, 0x3f, 0x0a, 
	0x14, 0x00, 0xbf, 0x8f, 0xfc, 0x88, 0x02, 0x3c, 0xf4, 0x08, 0x42, 0x8c, 0x21, 0x20, 0x00, 0x02, 
	0x21, 0x28, 0x80, 0x02, 0x21, 0x30, 0x20, 0x02, 0x21, 0x38, 0x40, 0x02, 0x09, 0xf8, 0x40, 0x00, 
	0x21, 0x40, 0x60, 0x02, 0x14, 0x00, 0xbf, 0x8f, 0x21, 0x10, 0x00, 0x00, 0x10, 0x00, 0xb4, 0x8f, 
	0x0c, 0x00, 0xb3, 0x8f, 0x08, 0x00, 0xb2, 0x8f, 0x04, 0x00, 0xb1, 0x8f, 0x00, 0x00, 0xb0, 0x8f, 
	0x08, 0x00, 0xe0, 0x03, 0x18, 0x00, 0xbd, 0x27, 0xfc, 0x88, 0x02, 0x3c, 0x06, 0x01, 0x3f, 0x0a, 
	0xdc, 0x08, 0x43, 0x24, 0x50, 0x01, 0x83, 0x94, 0xf8, 0xff, 0xbd, 0x27, 0x1f, 0x8b, 0x02, 0x34, 
	0x04, 0x00, 0xbf, 0xaf, 0x09, 0x00, 0x62, 0x14, 0x21, 0x40, 0xc0, 0x00, 0xb0, 0x00, 0x86, 0x8c, 
	0x50, 0x01, 0x85, 0x24, 0xe6, 0x01, 0x3f, 0x0e, 0x00, 0x00, 0x06, 0xad, 0x04, 0x00, 0xbf, 0x8f, 
	0x21, 0x10, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 0x08, 0x00, 0xbd, 0x27, 0xfc, 0x88, 0x02, 0x3c, 
	0xf0, 0x08, 0x59, 0x8c, 0x04, 0x00, 0xbf, 0x8f, 0x08, 0x00, 0x20, 0x03, 0x08, 0x00, 0xbd, 0x27, 
	0xd0, 0xff, 0xbd, 0x27, 0x28, 0x00, 0xbe, 0xaf, 0x24, 0x00, 0xb7, 0xaf, 0x20, 0x00, 0xb6, 0xaf, 
	0x1c, 0x00, 0xb5, 0xaf, 0x14, 0x00, 0xb3, 0xaf, 0x10, 0x00, 0xb2, 0xaf, 0x2c, 0x00, 0xbf, 0xaf, 
	0x18, 0x00, 0xb4, 0xaf, 0x0c, 0x00, 0xb1, 0xaf, 0x08, 0x00, 0xb0, 0xaf, 0x23, 0x00, 0x82, 0x88, 
	0x13, 0x00, 0x83, 0x88, 0x21, 0x98, 0x80, 0x00, 0x03, 0x00, 0x68, 0x8a, 0x33, 0x00, 0x84, 0x88, 
	0x20, 0x00, 0x62, 0x9a, 0x10, 0x00, 0x63, 0x9a, 0x30, 0x00, 0x64, 0x9a, 0x37, 0x00, 0x71, 0x8a, 
	0x00, 0x00, 0x68, 0x9a, 0x21, 0x18, 0x63, 0x02, 0x21, 0xa8, 0x62, 0x02, 0x80, 0x0f, 0x02, 0x3c, 
	0x00, 0x00, 0xa3, 0xaf, 0x01, 0x30, 0x42, 0x34, 0x21, 0xb8, 0xa0, 0x00, 0x21, 0x90, 0xc0, 0x00, 
	0x21, 0xf0, 0xe0, 0x00, 0x21, 0xb0, 0x64, 0x02, 0x34, 0x00, 0x71, 0x9a, 0x55, 0x00, 0x02, 0x15, 
	0xff, 0xff, 0x03, 0x24, 0x21, 0x80, 0xa0, 0x02, 0x6c, 0x01, 0x3f, 0x0a, 0x21, 0xa0, 0x00, 0x00, 
	0x03, 0x00, 0x04, 0x8a, 0x00, 0x00, 0x04, 0x9a, 0x20, 0x00, 0x10, 0x26, 0xd9, 0x01, 0x3f, 0x0e, 
	0x21, 0x20, 0xc4, 0x02, 0x08, 0x00, 0x40, 0x50, 0x27, 0x00, 0x62, 0x8a, 0x01, 0x00, 0x94, 0x26, 
	0x27, 0x00, 0x62, 0x8a, 0x24, 0x00, 0x62, 0x9a, 0x2a, 0x10, 0x82, 0x02, 0xf4, 0xff, 0x40, 0x14, 
	0x21, 0x28, 0x40, 0x02, 0x27, 0x00, 0x62, 0x8a, 0x24, 0x00, 0x62, 0x9a, 0x41, 0x00, 0x82, 0x12, 
	0xfe, 0xff, 0x03, 0x24, 0xd1, 0x01, 0x3f, 0x0e, 0x21, 0x20, 0xe0, 0x02, 0x01, 0x00, 0x52, 0x24, 
	0x21, 0x88, 0x71, 0x02, 0x21, 0x20, 0x20, 0x02, 0x21, 0x28, 0xe0, 0x02, 0xe6, 0x01, 0x3f, 0x0e, 
	0x21, 0x30, 0x40, 0x02, 0x27, 0x00, 0x66, 0x8a, 0x40, 0x81, 0x14, 0x00, 0x01, 0x00, 0x84, 0x26, 
	0x24, 0x00, 0x66, 0x9a, 0x21, 0x80, 0xb0, 0x02, 0x40, 0x21, 0x04, 0x00, 0x23, 0x30, 0xd4, 0x00, 
	0x40, 0x31, 0x06, 0x00, 0x21, 0x30, 0x46, 0x02, 0x21, 0x30, 0x26, 0x02, 0x21, 0x20, 0xa4, 0x02, 
	0x23, 0x30, 0xd6, 0x00, 0xfa, 0x01, 0x3f, 0x0e, 0x21, 0x28, 0x00, 0x02, 0x23, 0x88, 0x36, 0x02, 
	0xff, 0xff, 0xc3, 0x33, 0x03, 0x00, 0x11, 0xaa, 0x02, 0x12, 0x03, 0x00, 0x00, 0x00, 0x11, 0xba, 
	0x09, 0x00, 0x02, 0xa2, 0x08, 0x00, 0x03, 0xa2, 0x27, 0x00, 0x62, 0x8a, 0x00, 0x00, 0xa5, 0x8f, 
	0x21, 0x30, 0x00, 0x00, 0x24, 0x00, 0x62, 0x9a, 0x01, 0x00, 0x42, 0x24, 0x27, 0x00, 0x62, 0xaa, 
	0x24, 0x00, 0x62, 0xba, 0x33, 0x00, 0x62, 0x8a, 0x30, 0x00, 0x62, 0x9a, 0x20, 0x00, 0x42, 0x24, 
	0x33, 0x00, 0x62, 0xaa, 0x30, 0x00, 0x62, 0xba, 0x37, 0x00, 0x62, 0x8a, 0x34, 0x00, 0x62, 0x9a, 
	0x20, 0x00, 0x42, 0x24, 0x21, 0x10, 0x52, 0x00, 0x37, 0x00, 0x62, 0xaa, 0x34, 0x00, 0x62, 0xba, 
	0x17, 0x00, 0x64, 0x8a, 0xb1, 0x01, 0x3f, 0x0a, 0x14, 0x00, 0x64, 0x9a, 0x01, 0x00, 0xa2, 0x90, 
	0x00, 0x00, 0xa3, 0x90, 0x00, 0x12, 0x02, 0x00, 0x25, 0x10, 0x43, 0x00, 0x01, 0x00, 0x42, 0x24, 
	0xff, 0xff, 0x42, 0x30, 0x02, 0x1a, 0x02, 0x00, 0x01, 0x00, 0xa3, 0xa0, 0x00, 0x00, 0xa2, 0xa0, 
	0x20, 0x00, 0xa5, 0x24, 0x2a, 0x10, 0xc4, 0x00, 0xf4, 0xff, 0x40, 0x14, 0x01, 0x00, 0xc6, 0x24, 
	0x21, 0x18, 0x00, 0x00, 0x2c, 0x00, 0xbf, 0x8f, 0x21, 0x10, 0x60, 0x00, 0x28, 0x00, 0xbe, 0x8f, 
	0x24, 0x00, 0xb7, 0x8f, 0x20, 0x00, 0xb6, 0x8f, 0x1c, 0x00, 0xb5, 0x8f, 0x18, 0x00, 0xb4, 0x8f, 
	0x14, 0x00, 0xb3, 0x8f, 0x10, 0x00, 0xb2, 0x8f, 0x0c, 0x00, 0xb1, 0x8f, 0x08, 0x00, 0xb0, 0x8f, 
	0x08, 0x00, 0xe0, 0x03, 0x30, 0x00, 0xbd, 0x27, 0xfc, 0x88, 0x02, 0x3c, 0x58, 0x08, 0x42, 0x8c, 
	0xf8, 0xff, 0xbd, 0x27, 0x04, 0x00, 0xbf, 0xaf, 0x04, 0x00, 0x46, 0x8c, 0x06, 0x00, 0xc0, 0x10, 
	0x04, 0x00, 0xbf, 0x8f, 0x10, 0x00, 0x47, 0x8c, 0xfc, 0x88, 0x05, 0x3c, 0x40, 0x01, 0x3f, 0x0e, 
	0xd0, 0x08, 0xa5, 0x24, 0x04, 0x00, 0xbf, 0x8f, 0x21, 0x10, 0x00, 0x00, 0x08, 0x00, 0xe0, 0x03, 
	0x08, 0x00, 0xbd, 0x27, 0xd4, 0x01, 0x3f, 0x0a, 0x21, 0x18, 0x00, 0x00, 0x01, 0x00, 0x63, 0x24, 
	0x00, 0x00, 0x82, 0x80, 0xfd, 0xff, 0x40, 0x14, 0x01, 0x00, 0x84, 0x24, 0x08, 0x00, 0xe0, 0x03, 
	0x21, 0x10, 0x60, 0x00, 0x21, 0x30, 0x00, 0x00, 0x21, 0x10, 0x86, 0x00, 0x21, 0x18, 0xa6, 0x00, 
	0x00, 0x00, 0x42, 0x90, 0x00, 0x00, 0x63, 0x90, 0x03, 0x00, 0x43, 0x10, 0x01, 0x00, 0xc6, 0x24, 
	0x08, 0x00, 0xe0, 0x03, 0x23, 0x10, 0x43, 0x00, 0xf8, 0xff, 0x40, 0x54, 0x21, 0x10, 0x86, 0x00, 
	0x08, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0xeb, 0x01, 0x3f, 0x0a, 0x21, 0x18, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x90, 0xff, 0xff, 0xc6, 0x24, 0x00, 0x00, 0xe2, 0xa0, 0x21, 0x10, 0xa3, 0x00, 
	0x21, 0x38, 0x83, 0x00, 0xfa, 0xff, 0xc0, 0x1c, 0x01, 0x00, 0x63, 0x24, 0x08, 0x00, 0xe0, 0x03, 
	0x21, 0x10, 0x80, 0x00, 0x21, 0x10, 0x80, 0x00, 0xf6, 0x01, 0x3f, 0x0a, 0x21, 0x18, 0x80, 0x00, 
	0xff, 0xff, 0xc6, 0x24, 0x01, 0x00, 0x63, 0x24, 0xfd, 0xff, 0xc0, 0x54, 0x00, 0x00, 0x65, 0xa0, 
	0x08, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x10, 0x85, 0x00, 0x06, 0x00, 0x40, 0x14, 
	0x21, 0x18, 0x00, 0x00, 0x08, 0x02, 0x3f, 0x0a, 0x21, 0x28, 0xa6, 0x00, 0x00, 0x00, 0x42, 0x90, 
	0xff, 0xff, 0xc6, 0x24, 0x00, 0x00, 0xe2, 0xa0, 0x21, 0x10, 0xa3, 0x00, 0x21, 0x38, 0x83, 0x00, 
	0xfa, 0xff, 0xc0, 0x14, 0x01, 0x00, 0x63, 0x24, 0x08, 0x00, 0xe0, 0x03, 0x21, 0x10, 0x80, 0x00, 
	0x0d, 0x02, 0x3f, 0x0a, 0x21, 0x18, 0x86, 0x00, 0x00, 0x00, 0xa2, 0x90, 0xff, 0xff, 0xc6, 0x24, 
	0x00, 0x00, 0x62, 0xa0, 0xff, 0xff, 0xa5, 0x24, 0xfb, 0xff, 0xc0, 0x14, 0xff, 0xff, 0x63, 0x24, 
	0x21, 0x10, 0x80, 0x00, 0x08, 0x00, 0xe0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x88, 
	0xac, 0x18, 0x60, 0x88, 0x40, 0x1e, 0x60, 0x88, 0x00, 0x00, 0xfb, 0x88, 0xa8, 0x04, 0xfc, 0x88, 
	0xe8, 0x03, 0xfc, 0x88, 0x04, 0x04, 0xfc, 0x88, 0x10, 0x04, 0xfc, 0x88, 0xf4, 0x03, 0xfc, 0x88, 
	0x70, 0x73, 0x70, 0x62, 0x74, 0x63, 0x6e, 0x66, 0x2e, 0x62, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 
	0x2f, 0x6b, 0x64, 0x2f, 0x70, 0x73, 0x70, 0x62, 0x74, 0x6b, 0x6e, 0x66, 0x2e, 0x62, 0x69, 0x6e, 
	0x00, 0x00, 0x00, 0x00, 0x2f, 0x6b, 0x64, 0x2f, 0x70, 0x73, 0x70, 0x62, 0x74, 0x72, 0x6e, 0x66, 
	0x2e, 0x62, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x6b, 0x64, 0x2f, 0x70, 0x73, 0x70, 0x62, 
	0x74, 0x6c, 0x6e, 0x66, 0x2e, 0x62, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x6b, 0x64, 0x2f, 
	0x70, 0x73, 0x70, 0x62, 0x74, 0x6d, 0x6e, 0x66, 0x2e, 0x62, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 
	0x2f, 0x72, 0x74, 0x6d, 0x2e, 0x70, 0x72, 0x78, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x6b, 0x64, 0x2f, 
	0x70, 0x73, 0x70, 0x62, 0x74, 0x6a, 0x6e, 0x66, 0x2e, 0x62, 0x69, 0x6e, 0x00, 
};

#endif
