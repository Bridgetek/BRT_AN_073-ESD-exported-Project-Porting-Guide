/*
This file is automatically generated
NotoSansCJKscLight24
C Source
*/

#include "NotoSansCJKscLight24.h"

#include "Ft_Gpu.h"
#ifndef ESD_LITTLEFS_FLASH
#include "NotoSansCJKscLight24__Flash.h"
#endif

Esd_FontInfo NotoSansCJKscLight24__Info = {
	.Type = ESD_FONT_EXTENDED,
	.FontHeight = 24,
	.BaseLine = 28,
	.CapsHeight = 18,
	.XOffset = 0,
	.FontResource = {
#ifdef ESD_LITTLEFS_FLASH
		.File = "NotoSansCJKscLight24.xfont",
		.FlashAddress = FA_INVALID,
#else
		.FlashAddress = NotoSansCJKscLight24_XFONT_FLASH_ADDRESS,
#endif
		.GpuHandle = {
			.Id = MAX_NUM_ALLOCATIONS,
			.Seq = 0
		},
		.StorageSize = ((4374 + 3) >> 2),
		.Type = ESD_RESOURCE_FLASH,
		.Compressed = ESD_RESOURCE_RAW,
		.Persistent = false,
		.RawSize = 4374,
	},
	.GlyphResource = {
#ifdef ESD_LITTLEFS_FLASH
		.File = "NotoSansCJKscLight24.glyph",
		.FlashAddress = FA_INVALID,
#else
		.FlashAddress = NotoSansCJKscLight24_GLYPH_FLASH_ADDRESS,
#endif
		.GpuHandle = {
			.Id = MAX_NUM_ALLOCATIONS,
			.Seq = 0
		},
		.StorageSize = ((1603968 + 3) >> 2),
		.Type = ESD_RESOURCE_DIRECTFLASH,
		.Compressed = ESD_RESOURCE_RAW,
		.Persistent = false,
		.RawSize = 1603968,
 	},
};

#ifdef ESD_SIMULATION
Esd_FontInfo *NotoSansCJKscLight24__Get__ESD() { return &NotoSansCJKscLight24__Info; }
#endif

/* end of file */