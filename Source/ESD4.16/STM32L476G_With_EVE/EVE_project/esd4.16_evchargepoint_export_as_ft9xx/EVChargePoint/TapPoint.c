/*
This file is automatically generated
TapPoint
C Source
*/

#include "TapPoint.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "TapPoint__Flash.h"
#endif

Ft_Esd_BitmapInfo TapPoint__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 345,
	.Height = 245,
	.Format = COMPRESSED_RGBA_ASTC_5x5_KHR,
	.Stride = 1104,
	.Size = 54096,
#ifdef ESD_LITTLEFS_FLASH
	.File = "TapPoint.astc.z",
#else
	.FlashAddress = TapPoint_ASTC_Z_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell TapPoint(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &TapPoint__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell TapPoint_0__Get__ESD() { return TapPoint(0); }
#endif

/* end of file */
