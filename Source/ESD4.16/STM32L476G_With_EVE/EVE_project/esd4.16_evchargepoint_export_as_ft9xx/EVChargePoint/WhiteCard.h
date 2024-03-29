/*
This file is automatically generated
WhiteCard
Header
*/

#ifndef WhiteCard__H
#define WhiteCard__H

#ifndef ESD_FUNCTION
#define ESD_FUNCTION(name, ...)
#endif

#include "Ft_DataTypes.h"
#include "Ft_Esd_BitmapInfo.h"

Ft_Esd_BitmapCell WhiteCard(ft_uint16_t cell);

extern Ft_Esd_BitmapInfo WhiteCard__Info;

ESD_FUNCTION(WhiteCard_0, Type = Ft_Esd_BitmapCell, DisplayName = "WhiteCard", Include = "WhiteCard.h", Category = _GroupUserResources, Icon = ":/icons/image.png", Macro)
#define WhiteCard_0() ((Ft_Esd_BitmapCell){ .Info = &WhiteCard__Info, .Cell = 0 })

#endif /* WhiteCard__H */

/* end of file */
