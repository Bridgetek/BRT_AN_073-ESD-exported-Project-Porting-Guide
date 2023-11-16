/*
This file is automatically generated
CircleCN
Header
*/

#ifndef CircleCN__H
#define CircleCN__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell CircleCN(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo CircleCN__Info;

ESD_FUNCTION(CircleCN_0, Type = Ft_Esd_BitmapCell, DisplayName = "CircleCN", Include = "CircleCN.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define CircleCN_0() ((Ft_Esd_BitmapCell){ .Info = &CircleCN__Info, .Cell = 0 })

#endif /* CircleCN__H */

/* end of file */
