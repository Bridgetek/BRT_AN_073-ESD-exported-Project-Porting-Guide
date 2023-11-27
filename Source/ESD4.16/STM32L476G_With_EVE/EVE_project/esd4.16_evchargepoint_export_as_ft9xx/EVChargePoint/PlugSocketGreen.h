/*
This file is automatically generated
PlugSocketGreen
Header
*/

#ifndef PlugSocketGreen__H
#define PlugSocketGreen__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell PlugSocketGreen(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo PlugSocketGreen__Info;

ESD_FUNCTION(PlugSocketGreen_0, Type = Ft_Esd_BitmapCell, DisplayName = "PlugSocketGreen", Include = "PlugSocketGreen.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define PlugSocketGreen_0() ((Ft_Esd_BitmapCell){ .Info = &PlugSocketGreen__Info, .Cell = 0 })

#endif /* PlugSocketGreen__H */

/* end of file */