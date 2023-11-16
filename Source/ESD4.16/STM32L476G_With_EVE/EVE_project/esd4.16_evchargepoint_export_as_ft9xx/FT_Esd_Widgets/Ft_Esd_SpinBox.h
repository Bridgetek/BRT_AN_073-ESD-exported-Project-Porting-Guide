/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_SpinBox
Header
*/

#ifndef Ft_Esd_SpinBox__H
#define Ft_Esd_SpinBox__H

#include "EVE_Hal.h"
#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_DefaultTheme.h"
#include "Ft_Esd_Layout_Linear.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_Primitives.h"
#include "Ft_Esd_PushButton.h"
#include "Ft_Esd_RenderForwarder.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_TouchTag.h"
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

#define Ft_Esd_SpinBox_CLASSID 0xF29C1A4F
ESD_SYMBOL(Ft_Esd_SpinBox_CLASSID, Type = esd_classid_t)

/* Integer based spin box widget */
ESD_WIDGET(Ft_Esd_SpinBox, Include = "Ft_Esd_SpinBox.h", Callback, DisplayName = "ESD SpinBox", Category = EsdWidgets, Icon = ":/icons/ui-spin.png", X = 24, Y = 18, Width = 180, Height = 60)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Theme, Type = Ft_Esd_Theme *, Default = Ft_Esd_Theme_GetCurrent)
	Ft_Esd_Theme *(* Theme)(void *context);
	ESD_INPUT(Step, Type = int, Default = 1)
	int(* Step)(void *context);
	ESD_SIGNAL(Increased)
	void(* Increased)(void *context);
	ESD_INPUT(Font, Type = uint8_t, Min = 16, Max = 34, Default = 31)
	uint8_t(* Font)(void *context);
	ESD_INPUT(FontResource, DisplayName = "Font Resource", Type = Esd_FontInfo *)
	Esd_FontInfo *(* FontResource)(void *context);
	ESD_VARIABLE(Value, Type = int, Public)
	int Value;
	ESD_WRITER(Changed, Type = int)
	void(* Changed)(void *context, int value);
	ESD_SIGNAL(Decreased)
	void(* Decreased)(void *context);
	bool Watch_Variables__0;
	ESD_VARIABLE(Style, DisplayName = "Style", Type = Esd_DisplayStyle, Default = ESD_OPT_3D, Public)
	ft_uint8_t Style;
	ESD_VARIABLE(SideButtons, Type = bool, Public)
	bool SideButtons;
	Ft_Esd_TouchTag Touch_Tag;
	Ft_Esd_Layout_Linear Horizontal_Layout;
	Ft_Esd_RenderForwarder Number_Position;
	Ft_Esd_Layout_Linear Vertical_Layout;
	Ft_Esd_PushButton Push_Up;
	Ft_Esd_PushButton Push_Down;
	Ft_Esd_RenderForwarder ESD_Render_Forwarder;
} Ft_Esd_SpinBox;

void Ft_Esd_SpinBox__Initializer(Ft_Esd_SpinBox *context);

ESD_SLOT(Start)
void Ft_Esd_SpinBox_Start(Ft_Esd_SpinBox *context);

ESD_SLOT(End)
void Ft_Esd_SpinBox_End(Ft_Esd_SpinBox *context);

ESD_SLOT(Update)
void Ft_Esd_SpinBox_Update(Ft_Esd_SpinBox *context);

ESD_SLOT(Increase)
void Ft_Esd_SpinBox_Increase(Ft_Esd_SpinBox *context);

ESD_SLOT(Decrease)
void Ft_Esd_SpinBox_Decrease(Ft_Esd_SpinBox *context);

#endif /* Ft_Esd_SpinBox__H */

/* end of file */
