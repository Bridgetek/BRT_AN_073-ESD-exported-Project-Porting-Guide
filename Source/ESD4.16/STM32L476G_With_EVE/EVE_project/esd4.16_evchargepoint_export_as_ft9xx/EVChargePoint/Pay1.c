/*
This file is automatically generated
Pay1
C Source
*/

#include "Pay1.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "Pay1__Flash.h"
#endif

Ft_Esd_BitmapInfo Pay1__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 97, /* Padded to 102, REPEAT will not work as expected */
	.Height = 30,
	.Format = COMPRESSED_RGBA_ASTC_6x6_KHR,
	.Stride = 272,
	.Size = 1360,
#ifdef ESD_LITTLEFS_FLASH
	.File = "Pay1.astc.z",
#else
	.FlashAddress = Pay1_ASTC_Z_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell Pay1(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &Pay1__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell Pay1_0__Get__ESD() { return Pay1(0); }
#endif

/* end of file */