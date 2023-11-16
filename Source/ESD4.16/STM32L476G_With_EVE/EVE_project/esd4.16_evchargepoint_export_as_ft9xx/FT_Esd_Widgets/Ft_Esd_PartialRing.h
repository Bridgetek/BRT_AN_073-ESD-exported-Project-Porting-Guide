/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_PartialRing
Header
*/

#ifndef Ft_Esd_PartialRing__H
#define Ft_Esd_PartialRing__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_ArcLine.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_RenderForwarder.h"
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

#define Ft_Esd_PartialRing_CLASSID 0x44B88877
ESD_SYMBOL(Ft_Esd_PartialRing_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_PartialRing, Include = "Ft_Esd_PartialRing.h", Callback, DisplayName = "ESD Partial Ring", Category = EsdWidgets, X = 0, Y = 0, Width = 320, Height = 310)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Angle, DisplayName = "Angle", Type = ft_int16_t, Min = 0, Max = 360, SingleStep = 1, Default = 50)
	ft_int16_t(* Angle)(void *context);
	ESD_INPUT(MaxAngle, DisplayName = "Max Angle", Type = ft_int16_t, Min = 1, Max = 360, SingleStep = 1, Default = 270)
	ft_int16_t(* MaxAngle)(void *context);
	ESD_INPUT(Clockwise, Type = ft_bool_t, Default = true)
	ft_bool_t(* Clockwise)(void *context);
	ESD_INPUT(Origin, Type = int, Min = 0, Max = 360, Default = 135)
	int(* Origin)(void *context);
	ESD_INPUT(RingWidth, DisplayName = "Ring Width", Type = int, Min = 1, Max = 100, Default = 30)
	int(* RingWidth)(void *context);
	ESD_INPUT(InnerBorder, Type = int, Min = -1, Max = 100, Default = 3)
	int(* InnerBorder)(void *context);
	ESD_INPUT(OuterBorder, Type = int, Min = -1, Max = 100, Default = 3)
	int(* OuterBorder)(void *context);
	/* To show start point */
	ESD_INPUT(StartPoint, DisplayName = "Start Point", Type = ft_bool_t, Default = true)
	ft_bool_t(* StartPoint)(void *context);
	/* To show end point */
	ESD_INPUT(EndPoint, DisplayName = "End Point", Type = ft_bool_t, Default = true)
	ft_bool_t(* EndPoint)(void *context);
	ESD_INPUT(BorderColor, Type = ft_argb32_t, Default = #d0cec6)
	ft_argb32_t(* BorderColor)(void *context);
	ESD_INPUT(SelectionColor, DisplayName = "Selection Color", Type = ft_argb32_t, Default = #c55a11)
	ft_argb32_t(* SelectionColor)(void *context);
	ESD_INPUT(BackgroundColor, DisplayName = "Background Color", Type = ft_argb32_t, Default = #060504)
	ft_argb32_t(* BackgroundColor)(void *context);
	Ft_Esd_RenderForwarder Render_Forwarder;
	Ft_Esd_Layout_Fixed Fixed_Positioning;
	Ft_Esd_ArcLine ArcLine;
	Ft_Esd_ArcLine ArcLine_BG;
	Ft_Esd_ArcLine ArcLineBorder;
} Ft_Esd_PartialRing;

void Ft_Esd_PartialRing__Initializer(Ft_Esd_PartialRing *context);

ESD_SLOT(Update)
void Ft_Esd_PartialRing_Update(Ft_Esd_PartialRing *context);

ESD_SLOT(End)
void Ft_Esd_PartialRing_End(Ft_Esd_PartialRing *context);

#endif /* Ft_Esd_PartialRing__H */

/* end of file */
