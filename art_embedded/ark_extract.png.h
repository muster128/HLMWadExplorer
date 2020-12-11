#ifndef ARK_EXTRACT_PNG_H
#define ARK_EXTRACT_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char ark_extract_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x16, 
	0x00, 0x00, 0x00, 0x16, 0x08, 0x06, 0x00, 0x00, 0x00, 0xC4, 
	0xB4, 0x6C, 0x3B, 0x00, 0x00, 0x04, 0x55, 0x49, 0x44, 0x41, 
	0x54, 0x78, 0x5E, 0x9D, 0x94, 0x4F, 0x68, 0x54, 0x57, 0x1B, 
	0x87, 0x9F, 0x73, 0xEE, 0xBF, 0x99, 0xCC, 0x4C, 0xFE, 0x8D, 
	0xB1, 0x89, 0x35, 0x68, 0xB5, 0x9F, 0x12, 0x09, 0xA2, 0xD5, 
	0x45, 0x85, 0x08, 0xE6, 0x03, 0x69, 0xA5, 0xD2, 0x42, 0xA5, 
	0xB4, 0xD0, 0x46, 0x84, 0xB6, 0xCB, 0x2E, 0x4A, 0xDD, 0x89, 
	0x1B, 0x17, 0xED, 0x46, 0x14, 0x6D, 0x91, 0x52, 0x48, 0x05, 
	0xAD, 0x45, 0x5B, 0x30, 0xB5, 0x5D, 0xA8, 0x34, 0x51, 0x11, 
	0x94, 0x62, 0x71, 0x54, 0xB0, 0x38, 0x45, 0x6D, 0x52, 0x2C, 
	0x26, 0x66, 0x4C, 0xCC, 0x24, 0x99, 0x99, 0x7B, 0xCF, 0xB9, 
	0xF7, 0x9E, 0xCA, 0x28, 0x33, 0x18, 0xB2, 0x90, 0x3E, 0x70, 
	0x39, 0x87, 0x97, 0xCB, 0xC3, 0x8F, 0x97, 0xF7, 0x3D, 0xE2, 
	0xE8, 0x37, 0xDB, 0xF8, 0x68, 0xE8, 0x14, 0xFE, 0x71, 0x4D, 
	0x1D, 0x68, 0xDE, 0xDE, 0xC0, 0xD4, 0x91, 0x72, 0xAD, 0xD0, 
	0xDF, 0x7F, 0xFA, 0xD4, 0xFA, 0xF5, 0x5D, 0x3D, 0x3C, 0x1F, 
	0x67, 0xEC, 0x8D, 0x4B, 0x96, 0xF1, 0x7D, 0xDF, 0x0E, 0xE6, 
	0x50, 0x97, 0xD6, 0xE9, 0xE9, 0xEA, 0x5A, 0xD2, 0xCA, 0xFC, 
	0xE0, 0xBA, 0xA2, 0x76, 0xBF, 0x71, 0x63, 0xE4, 0x75, 0x39, 
	0xAD, 0x14, 0x6F, 0x2F, 0x5B, 0xC5, 0x7F, 0xC5, 0x18, 0xB0, 
	0x2C, 0xC1, 0x5C, 0x6C, 0x01, 0x44, 0xC6, 0x60, 0xF1, 0x7C, 
	0x0C, 0x0E, 0x5E, 0x65, 0x2E, 0x52, 0x0A, 0xAC, 0xA7, 0x82, 
	0xCD, 0x9B, 0xD7, 0x01, 0x60, 0x03, 0x54, 0xB4, 0x26, 0xCD, 
	0xF3, 0xB1, 0x6F, 0xEA, 0x53, 0x4E, 0x6E, 0x1D, 0xAC, 0x15, 
	0x12, 0x09, 0x17, 0xDB, 0x16, 0x48, 0x49, 0x8D, 0x9A, 0x78, 
	0x3A, 0x08, 0x88, 0x73, 0x7B, 0x68, 0x6C, 0x48, 0x72, 0xF4, 
	0xF7, 0xCB, 0xF4, 0xF5, 0x0D, 0xF0, 0xD3, 0xDE, 0xF7, 0x0F, 
	0x01, 0xEF, 0xD6, 0x0C, 0x2D, 0x1F, 0x00, 0x60, 0x62, 0xC3, 
	0x1B, 0x57, 0x36, 0xF2, 0x59, 0xE9, 0xC0, 0x13, 0xB1, 0xE7, 
	0x56, 0xA5, 0x42, 0xCC, 0x93, 0x58, 0x0A, 0x41, 0x59, 0x05, 
	0x4C, 0x97, 0xCB, 0x64, 0x27, 0x5B, 0x0F, 0x9F, 0x39, 0xF8, 
	0xE1, 0xFA, 0xD8, 0x75, 0x3A, 0x5E, 0x7D, 0x65, 0x25, 0xB7, 
	0x8A, 0xE5, 0x96, 0xFC, 0x4C, 0x45, 0xDC, 0x0A, 0x07, 0x83, 
	0x81, 0x93, 0xFB, 0x09, 0xD1, 0x78, 0xBD, 0x09, 0xBE, 0x3A, 
	0xD7, 0xC7, 0xD9, 0xFF, 0xDF, 0x01, 0xC0, 0xB2, 0x98, 0xA7, 
	0xC7, 0x42, 0x34, 0xDE, 0xCD, 0x8F, 0x1F, 0x76, 0x6C, 0x16, 
	0x69, 0x15, 0x77, 0xAC, 0x59, 0xB7, 0x2C, 0x0B, 0x22, 0x65, 
	0x0C, 0x02, 0x20, 0xD9, 0x94, 0x35, 0xAD, 0xCD, 0x49, 0x7A, 
	0x1B, 0xDB, 0xBC, 0xC4, 0x8A, 0x0D, 0xFC, 0xE3, 0x0E, 0x33, 
	0x30, 0xFD, 0x23, 0x8B, 0x16, 0x6F, 0xA0, 0xE3, 0x60, 0x96, 
	0xFE, 0x97, 0x4F, 0x63, 0x59, 0xB2, 0xDA, 0x0E, 0x21, 0xA8, 
	0x27, 0x2E, 0x8C, 0x96, 0x3E, 0x99, 0x9D, 0xAD, 0xBC, 0xB9, 
	0x70, 0x71, 0xC6, 0x6E, 0x7B, 0xA1, 0x09, 0x37, 0xED, 0xA2, 
	0xFC, 0x88, 0x28, 0x8C, 0xB0, 0x0C, 0x04, 0x72, 0x42, 0x94, 
	0x6C, 0x9F, 0x4B, 0xFA, 0x3A, 0x77, 0xFC, 0x1C, 0xB1, 0x1F, 
	0xD1, 0xF9, 0x60, 0x15, 0xC7, 0x6E, 0x7C, 0x47, 0xA3, 0x69, 
	0xA1, 0xA7, 0xA7, 0x9B, 0x44, 0x22, 0x81, 0xE7, 0x49, 0x84, 
	0xA0, 0x86, 0x9D, 0xBB, 0x99, 0xDF, 0xD9, 0xF5, 0xBF, 0x85, 
	0x76, 0xE1, 0x7E, 0x89, 0xC2, 0x68, 0x01, 0x8C, 0x21, 0xD1, 
	0x90, 0x24, 0xDB, 0xBE, 0x80, 0x05, 0x6D, 0x59, 0x32, 0x76, 
	0x0A, 0x53, 0x50, 0x3C, 0xFC, 0xBB, 0xC4, 0xDD, 0xCB, 0x0F, 
	0x69, 0x6F, 0xCA, 0x72, 0xCC, 0x79, 0x2C, 0xBD, 0xDF, 0xC2, 
	0xD7, 0x4B, 0x7F, 0xE6, 0xFC, 0xF9, 0x6B, 0x48, 0x29, 0x70, 
	0x5D, 0x17, 0xC7, 0x11, 0xF5, 0xC4, 0x09, 0xCF, 0x0B, 0x94, 
	0x8A, 0x31, 0x26, 0x02, 0x22, 0x8C, 0x31, 0x04, 0x45, 0xC5, 
	0xF4, 0xE4, 0x04, 0xB7, 0x63, 0x49, 0xA6, 0x35, 0xCB, 0xD6, 
	0xEE, 0x6E, 0x3C, 0xB7, 0x87, 0xCF, 0x5F, 0xDB, 0xCB, 0xC7, 
	0x97, 0xB6, 0xD1, 0x74, 0xBF, 0x95, 0x9B, 0x7D, 0x23, 0x08, 
	0x21, 0xB0, 0x6D, 0x89, 0x94, 0xB2, 0xDA, 0x8E, 0x64, 0xD2, 
	0x79, 0x76, 0x2A, 0xB4, 0xD1, 0xE8, 0x20, 0x7C, 0xF2, 0x83, 
	0x0D, 0xB1, 0x01, 0x2C, 0x81, 0x11, 0x11, 0x65, 0xBF, 0x4C, 
	0xA0, 0x43, 0x0C, 0x06, 0x80, 0x3F, 0x1E, 0xE4, 0xD9, 0xBF, 
	0xE8, 0x07, 0x2E, 0x5C, 0xB8, 0x56, 0x15, 0x3F, 0x16, 0x56, 
	0x4F, 0x29, 0x05, 0x8E, 0xE3, 0xB0, 0x65, 0x4B, 0x6D, 0x2A, 
	0x0C, 0x91, 0xD2, 0x4C, 0xCD, 0xFA, 0x94, 0x66, 0x23, 0x1A, 
	0x1A, 0x24, 0x8D, 0x19, 0x07, 0xCB, 0x08, 0xE2, 0x38, 0x06, 
	0xA9, 0xAA, 0x62, 0x0C, 0xD8, 0xD2, 0x26, 0xF7, 0xDE, 0xED, 
	0xA7, 0x0B, 0x61, 0x3D, 0x4D, 0x5B, 0x17, 0x4B, 0x59, 0x1F, 
	0x0F, 0x89, 0x01, 0xAD, 0x43, 0x1C, 0x3B, 0x66, 0xA2, 0x58, 
	0xE4, 0xDE, 0xD8, 0x23, 0x46, 0xC7, 0x4B, 0x04, 0x91, 0x46, 
	0xE9, 0x90, 0x50, 0x69, 0xB4, 0x1F, 0x60, 0x30, 0xCF, 0xAC, 
	0x31, 0xC0, 0xD0, 0x50, 0x8E, 0x73, 0xE7, 0x72, 0x18, 0x63, 
	0xAA, 0xB5, 0x38, 0x8E, 0xEA, 0x62, 0x03, 0xF8, 0x3A, 0x60, 
	0xE2, 0x51, 0x99, 0x38, 0x8C, 0x68, 0xCA, 0xD8, 0xCC, 0xCE, 
	0x28, 0x2A, 0xB3, 0x8A, 0x20, 0x8A, 0xD0, 0x4A, 0xE1, 0xFB, 
	0x3E, 0x26, 0xAE, 0x89, 0x6B, 0xCB, 0xB0, 0x69, 0xD3, 0x5A, 
	0x7A, 0x7B, 0xD7, 0x22, 0x84, 0xA8, 0xD5, 0xA2, 0xA8, 0xFE, 
	0x56, 0xA0, 0xB5, 0xC2, 0x91, 0x90, 0x48, 0x49, 0x88, 0x0D, 
	0x26, 0x0A, 0x99, 0xAE, 0x44, 0xA4, 0x70, 0x50, 0x96, 0xC4, 
	0x57, 0x0A, 0x69, 0x66, 0x18, 0xFA, 0xF5, 0x22, 0xF3, 0x61, 
	0x70, 0x66, 0x0C, 0x52, 0x53, 0x67, 0xD8, 0x8E, 0x63, 0x30, 
	0x26, 0x44, 0x3A, 0x06, 0x47, 0x09, 0x66, 0x66, 0x43, 0x74, 
	0xA8, 0x68, 0xB2, 0x32, 0x68, 0x15, 0x63, 0x84, 0x42, 0x85, 
	0x9A, 0x76, 0x06, 0x91, 0xC2, 0x21, 0x0A, 0x15, 0x96, 0x65, 
	0x23, 0xAD, 0xEA, 0x9D, 0x30, 0xAC, 0x30, 0x5E, 0x28, 0xBE, 
	0xB3, 0x63, 0xF7, 0xE9, 0xB3, 0xD4, 0x41, 0xFA, 0x4A, 0x57, 
	0x3C, 0x4B, 0xA2, 0x2B, 0x21, 0x8E, 0x65, 0xC8, 0x24, 0x0D, 
	0xD9, 0x8C, 0x43, 0x18, 0x06, 0xA8, 0xD0, 0x47, 0xAB, 0x10, 
	0xE9, 0x35, 0x61, 0x79, 0x8D, 0x18, 0xE1, 0x20, 0x9D, 0x14, 
	0xC6, 0xF2, 0x08, 0xB1, 0xF1, 0x03, 0x85, 0x34, 0x9A, 0xFE, 
	0x93, 0xD7, 0x25, 0x73, 0xB0, 0x0F, 0x1C, 0xBF, 0xB2, 0x67, 
	0xD7, 0xF6, 0x15, 0xDF, 0xA6, 0x93, 0x02, 0x3F, 0x04, 0x15, 
	0x47, 0x44, 0xA1, 0x21, 0x8C, 0x0C, 0x55, 0x44, 0x44, 0x1C, 
	0xC6, 0x04, 0x41, 0x80, 0x56, 0x15, 0x0C, 0x06, 0x29, 0x0C, 
	0x56, 0x54, 0xC1, 0x31, 0x3E, 0xE5, 0x92, 0x22, 0x3F, 0x32, 
	0xE9, 0x31, 0x07, 0x39, 0x36, 0x19, 0x5C, 0xFC, 0xE2, 0x48, 
	0xFE, 0xCB, 0x13, 0x67, 0x87, 0xC7, 0xFF, 0xBC, 0x33, 0x41, 
	0xA4, 0x35, 0x9E, 0x6B, 0x70, 0x6C, 0xAA, 0xE3, 0xA6, 0xC3, 
	0x88, 0x62, 0x71, 0x1C, 0xA5, 0x7D, 0x88, 0x4A, 0x18, 0xF5, 
	0x90, 0x89, 0xB1, 0x61, 0x2E, 0x5F, 0xC9, 0x73, 0xE8, 0x44, 
	0x6E, 0x74, 0xE7, 0x81, 0xDF, 0xF6, 0x3D, 0x9A, 0xD1, 0x39, 
	0xE6, 0x20, 0x00, 0x5C, 0x8B, 0x64, 0xCA, 0x13, 0xCD, 0x95, 
	0x90, 0xE5, 0xE9, 0x84, 0xB5, 0xAD, 0xB3, 0xD5, 0x79, 0x6B, 
	0xF5, 0xCA, 0xF4, 0x4B, 0x1D, 0x0B, 0x3C, 0x1A, 0x33, 0x29, 
	0x3A, 0x3B, 0xDB, 0x29, 0x8C, 0x4F, 0xF1, 0xD7, 0xBD, 0x69, 
	0x73, 0x35, 0x3F, 0x79, 0x77, 0x64, 0xAC, 0xF2, 0x4B, 0xB1, 
	0x14, 0x0E, 0x34, 0xA7, 0xAD, 0xDB, 0x85, 0x29, 0x3D, 0xA5, 
	0x42, 0xE3, 0x33, 0x1F, 0x8F, 0xA5, 0xB4, 0xA6, 0x24, 0x00, 
	0x49, 0x1B, 0xC7, 0x91, 0xA4, 0x6C, 0x8B, 0xD5, 0x99, 0x84, 
	0xD8, 0xDD, 0xBD, 0xD4, 0xBD, 0xB0, 0x76, 0x79, 0x7A, 0x28, 
	0x9D, 0x94, 0xBB, 0x6C, 0x4B, 0xAC, 0x49, 0x39, 0x22, 0x95, 
	0xF6, 0x84, 0x03, 0xF0, 0x62, 0x9B, 0x4B, 0x2A, 0x21, 0x01, 
	0x30, 0xC6, 0x3C, 0xF3, 0xFD, 0x0B, 0xDE, 0x41, 0x0E, 0x1D, 
	0x7B, 0xED, 0x79, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
	0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& ark_extract_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( ark_extract_png, sizeof( ark_extract_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //ARK_EXTRACT_PNG_H
