/*
This file is automatically generated
RoundEnergy
Header
*/

#ifndef RoundEnergy__H
#define RoundEnergy__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell RoundEnergy(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo RoundEnergy__Info;

ESD_FUNCTION(RoundEnergy_0, Type = Ft_Esd_BitmapCell, DisplayName = "RoundEnergy", Include = "RoundEnergy.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define RoundEnergy_0() ((Ft_Esd_BitmapCell){ .Info = &RoundEnergy__Info, .Cell = 0 })

#endif /* RoundEnergy__H */

/* end of file */
