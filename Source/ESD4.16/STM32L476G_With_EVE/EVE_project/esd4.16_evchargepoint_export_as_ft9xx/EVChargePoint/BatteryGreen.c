/*
This file is automatically generated
BatteryGreen
C Source
*/

#include "BatteryGreen.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "BatteryGreen__Flash.h"
#endif

Ft_Esd_BitmapInfo BatteryGreen__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 25,
	.Height = 75,
	.Format = PALETTED565,
	.Stride = 25,
	.Size = 1875,
#ifdef ESD_LITTLEFS_FLASH
	.File = "BatteryGreen_index.bin",
#else
	.FlashAddress = BatteryGreen_INDEX_BIN_FLASH_ADDRESS,
#endif
#ifdef ESD_LITTLEFS_FLASH
	.PaletteFile = "BatteryGreen_lut.raw",
#else
	.PaletteFlashAddress = BatteryGreen_LUT_RAW_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 0,
};

Ft_Esd_BitmapCell BatteryGreen(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &BatteryGreen__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell BatteryGreen_0__Get__ESD() { return BatteryGreen(0); }
#endif

/* end of file */
