/*
This file is automatically generated
Pay2
C Source
*/

#include "Pay2.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "Pay2__Flash.h"
#endif

Ft_Esd_BitmapInfo Pay2__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 50, /* Padded to 54, REPEAT will not work as expected */
	.Height = 39, /* Padded to 42, REPEAT will not work as expected */
	.Format = COMPRESSED_RGBA_ASTC_6x6_KHR,
	.Stride = 144,
	.Size = 1008,
#ifdef ESD_LITTLEFS_FLASH
	.File = "Pay2.astc.z",
#else
	.FlashAddress = Pay2_ASTC_Z_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell Pay2(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &Pay2__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell Pay2_0__Get__ESD() { return Pay2(0); }
#endif

/* end of file */
