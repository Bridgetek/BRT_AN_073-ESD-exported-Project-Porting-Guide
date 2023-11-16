/*
This file is automatically generated
FlagRU
Header
*/

#ifndef FlagRU__H
#define FlagRU__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell FlagRU(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo FlagRU__Info;

ESD_FUNCTION(FlagRU_0, Type = Ft_Esd_BitmapCell, DisplayName = "FlagRU", Include = "FlagRU.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define FlagRU_0() ((Ft_Esd_BitmapCell){ .Info = &FlagRU__Info, .Cell = 0 })

#endif /* FlagRU__H */

/* end of file */
