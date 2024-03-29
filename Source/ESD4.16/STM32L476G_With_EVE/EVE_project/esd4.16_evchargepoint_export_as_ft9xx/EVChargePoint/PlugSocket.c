/*
This file is automatically generated
PlugSocket
C Source
*/

#include "PlugSocket.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "PlugSocket__Flash.h"
#endif

Ft_Esd_BitmapInfo PlugSocket__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 120,
	.Height = 145, /* Padded to 152, REPEAT will not work as expected */
	.Format = COMPRESSED_RGBA_ASTC_8x8_KHR,
	.Stride = 240,
	.Size = 4560,
#ifdef ESD_LITTLEFS_FLASH
	.File = "PlugSocket.astc.z",
#else
	.FlashAddress = PlugSocket_ASTC_Z_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell PlugSocket(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &PlugSocket__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell PlugSocket_0__Get__ESD() { return PlugSocket(0); }
#endif

/* end of file */
