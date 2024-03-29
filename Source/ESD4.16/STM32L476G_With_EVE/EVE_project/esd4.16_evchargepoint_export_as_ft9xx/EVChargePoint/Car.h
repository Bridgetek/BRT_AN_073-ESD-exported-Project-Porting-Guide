/*
This file is automatically generated
Car
Header
*/

#ifndef Car__H
#define Car__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell Car(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo Car__Info;

ESD_FUNCTION(Car_0, Type = Ft_Esd_BitmapCell, DisplayName = "Car", Include = "Car.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define Car_0() ((Ft_Esd_BitmapCell){ .Info = &Car__Info, .Cell = 0 })

#endif /* Car__H */

/* end of file */
