/*
This file is automatically generated
BatteryBg
Header
*/

#ifndef BatteryBg__H
#define BatteryBg__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell BatteryBg(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo BatteryBg__Info;

ESD_FUNCTION(BatteryBg_0, Type = Ft_Esd_BitmapCell, DisplayName = "BatteryBg", Include = "BatteryBg.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define BatteryBg_0() ((Ft_Esd_BitmapCell){ .Info = &BatteryBg__Info, .Cell = 0 })

#endif /* BatteryBg__H */

/* end of file */
