/*
This file is automatically generated
ExitButton
C Source
*/

#include "ExitButton.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "ExitButton__Flash.h"
#endif

Ft_Esd_BitmapInfo ExitButton__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 214, /* Padded to 216, REPEAT will not work as expected */
	.Height = 44,
	.Format = COMPRESSED_RGBA_ASTC_4x4_KHR,
	.Stride = 864,
	.Size = 9504,
#ifdef ESD_LITTLEFS_FLASH
	.File = "ExitButton.astc",
#else
	.FlashAddress = ExitButton_ASTC_FLASH_ADDRESS,
#endif
	.Cells = 1,
	.Compressed = 0,
	.Persistent = 0,
	.Flash = 1,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell ExitButton(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &ExitButton__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell ExitButton_0__Get__ESD() { return ExitButton(0); }
#endif

/* end of file */
