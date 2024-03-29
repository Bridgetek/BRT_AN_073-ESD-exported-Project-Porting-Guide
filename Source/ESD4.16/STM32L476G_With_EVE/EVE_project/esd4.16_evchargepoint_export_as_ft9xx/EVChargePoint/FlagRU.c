/*
This file is automatically generated
FlagRU
C Source
*/

#include "FlagRU.h"

#include "Ft_Gpu.h"

Ft_Esd_BitmapInfo FlagRU__Info = {
	ESD_BITMAP_DEFAULTS,
	.Width = 199, /* Padded to 200, REPEAT will not work as expected */
	.Height = 171, /* Padded to 176, REPEAT will not work as expected */
	.Format = COMPRESSED_RGBA_ASTC_8x8_KHR,
	.Stride = 400,
	.Size = 8800,
	.File = "FlagRU.astc.z",
	.Cells = 1,
	.Compressed = 1,
	.Persistent = 0,
	.Flash = 0,
	.PreferRam = 1,
};

Ft_Esd_BitmapCell FlagRU(ft_uint16_t cell)
{
	return (Ft_Esd_BitmapCell){ 
		.Info = &FlagRU__Info, 
		.Cell = cell 
	};
}

#ifdef ESD_SIMULATION
Ft_Esd_BitmapCell FlagRU_0__Get__ESD() { return FlagRU(0); }
#endif

/* end of file */
