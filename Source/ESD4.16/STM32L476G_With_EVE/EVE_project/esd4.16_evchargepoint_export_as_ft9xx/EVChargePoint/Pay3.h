/*
This file is automatically generated
Pay3
Header
*/

#ifndef Pay3__H
#define Pay3__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell Pay3(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo Pay3__Info;

ESD_FUNCTION(Pay3_0, Type = Ft_Esd_BitmapCell, DisplayName = "Pay3", Include = "Pay3.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define Pay3_0() ((Ft_Esd_BitmapCell){ .Info = &Pay3__Info, .Cell = 0 })

#endif /* Pay3__H */

/* end of file */
