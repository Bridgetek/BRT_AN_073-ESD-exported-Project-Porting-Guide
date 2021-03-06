/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Gradient
Header
*/

#ifndef Ft_Esd_Gradient__H
#define Ft_Esd_Gradient__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_Widget.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

#define Ft_Esd_Gradient_CLASSID 0xDE036FCA
ESD_SYMBOL(Ft_Esd_Gradient_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_Gradient, Include = "Ft_Esd_Gradient.h", Callback, DisplayName = "Gradient Widget", Category = EsdBasicWidgets, X = 0, Y = 0, Width = 400, Height = 300)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(color1, DisplayName = "start color", Type = ft_argb32_t, Default = #fa9943)
	ft_argb32_t(* color1)(void *context);
	ESD_INPUT(color2, DisplayName = "end color", Type = ft_argb32_t, Default = #29a123)
	ft_argb32_t(* color2)(void *context);
	ESD_INPUT(direction, Type = int, Default = 78)
	int(* direction)(void *context);
} Ft_Esd_Gradient;

void Ft_Esd_Gradient__Initializer(Ft_Esd_Gradient *context);

ESD_SLOT(Render)
void Ft_Esd_Gradient_Render(Ft_Esd_Gradient *context);

#endif /* Ft_Esd_Gradient__H */

/* end of file */
