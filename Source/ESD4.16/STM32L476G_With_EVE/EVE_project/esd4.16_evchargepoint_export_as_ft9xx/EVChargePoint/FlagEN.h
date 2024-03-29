/*
This file is automatically generated
FlagEN
Header
*/

#ifndef FlagEN__H
#define FlagEN__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell FlagEN(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo FlagEN__Info;

ESD_FUNCTION(FlagEN_0, Type = Ft_Esd_BitmapCell, DisplayName = "FlagEN", Include = "FlagEN.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define FlagEN_0() ((Ft_Esd_BitmapCell){ .Info = &FlagEN__Info, .Cell = 0 })

#endif /* FlagEN__H */

/* end of file */
