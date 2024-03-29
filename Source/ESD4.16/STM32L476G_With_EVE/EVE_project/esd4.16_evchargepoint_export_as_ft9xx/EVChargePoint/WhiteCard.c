/*
This file is automatically generated
WhiteCard
C Source
*/

#include "WhiteCard.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "WhiteCard__Flash.h"
#endif

Ft_Esd_BitmapInfo WhiteCard__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 328,
	.Height = 216,
	.Format = COMPRESSED_RGBA_ASTC_8x8_KHR,
	.Stride = 656,
	.Size = 17712,
#ifdef ESD_LITTLEFS_FLASH
	.File = "WhiteCard.astc.z",
#else
	.FlashAddress = WhiteCard_ASTC_Z_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell WhiteCard(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &WhiteCard__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell WhiteCard_0__Get__ESD() { return WhiteCard(0); }
#endif

/* end of file */
