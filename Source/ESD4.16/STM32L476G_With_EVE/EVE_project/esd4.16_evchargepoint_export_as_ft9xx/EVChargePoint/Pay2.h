/*
This file is automatically generated
Pay2
Header
*/

#ifndef Pay2__H
#define Pay2__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell Pay2(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo Pay2__Info;

ESD_FUNCTION(Pay2_0, Type = Ft_Esd_BitmapCell, DisplayName = "Pay2", Include = "Pay2.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define Pay2_0() ((Ft_Esd_BitmapCell){ .Info = &Pay2__Info, .Cell = 0 })

#endif /* Pay2__H */

/* end of file */
