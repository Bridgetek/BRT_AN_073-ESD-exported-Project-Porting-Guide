/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_CircularGradient
Header
*/

#ifndef Ft_Esd_CircularGradient__H
#define Ft_Esd_CircularGradient__H

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

#define Ft_Esd_CircularGradient_CLASSID 0x1EE09189
ESD_SYMBOL(Ft_Esd_CircularGradient_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_CircularGradient, Include = "Ft_Esd_CircularGradient.h", Callback, DisplayName = "ESD Circular Gradient", Category = EsdBasicWidgets, Icon = ":/icons/gradient.png", X = 173, Y = 75, Width = 320, Height = 315)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Outer_color, DisplayName = "Outer color", Type = ft_argb32_t, Default = #1b06fa)
	ft_argb32_t(* Outer_color)(void *context);
	ESD_INPUT(Inner_color, DisplayName = "Inner color", Type = ft_argb32_t, Default = #f8ef86)
	ft_argb32_t(* Inner_color)(void *context);
	ESD_INPUT(Gradient_Type, DisplayName = "Gradient Type", Type = Esd_CircularGradientType, Default = ESD_PYTHAGOREAN)
	ft_uint8_t(* Gradient_Type)(void *context);
} Ft_Esd_CircularGradient;

void Ft_Esd_CircularGradient__Initializer(Ft_Esd_CircularGradient *context);

ESD_SLOT(Render)
void Ft_Esd_CircularGradient_Render(Ft_Esd_CircularGradient *context);

#endif /* Ft_Esd_CircularGradient__H */

/* end of file */
