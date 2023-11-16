/*
This file is automatically generated
CircleDE
C Source
*/

#include "CircleDE.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "CircleDE__Flash.h"
#endif

Ft_Esd_BitmapInfo CircleDE__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 196,
	.Height = 196,
	.Format = COMPRESSED_RGBA_ASTC_4x4_KHR,
	.Stride = 784,
	.Size = 38416,
#ifdef ESD_LITTLEFS_FLASH
	.File = "CircleDE.astc.z",
#else
	.FlashAddress = CircleDE_ASTC_Z_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell CircleDE(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &CircleDE__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell CircleDE_0__Get__ESD() { return CircleDE(0); }
#endif

/* end of file */
