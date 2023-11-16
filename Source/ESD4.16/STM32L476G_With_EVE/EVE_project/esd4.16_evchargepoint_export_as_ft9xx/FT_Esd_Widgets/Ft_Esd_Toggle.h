/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Toggle
Header
*/

#ifndef Ft_Esd_Toggle__H
#define Ft_Esd_Toggle__H

#include "EVE_Hal.h"
#include "Esd_Base.h"
#include "Esd_FontInfo.h"
#include "Ft_DataTypes.h"
#include "Ft_Esd.h"
#include "Ft_Esd_DefaultTheme.h"
#include "Ft_Esd_Math.h"
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

#define Ft_Esd_Toggle_CLASSID 0x32C3926E
ESD_SYMBOL(Ft_Esd_Toggle_CLASSID, Type = esd_classid_t)

/* EVE builtin toggle button */
ESD_WIDGET(Ft_Esd_Toggle, Include = "Ft_Esd_Toggle.h", Callback, DisplayName = "ESD Toggle", Category = EsdWidgets, Icon = ":/icons/ui-button-toggle.png", X = 0, Y = 0, Width = 80, Height = 36)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Theme, Type = Ft_Esd_Theme *, Default = Ft_Esd_Theme_GetCurrent)
	Ft_Esd_Theme *(* Theme)(void *context);
	ESD_INPUT(Text, Type = const char *, Default = "Toggle")
	const char *(* Text)(void *context);
	ESD_SIGNAL(Toggled)
	void(* Toggled)(void *context);
	ESD_VARIABLE(State, Type = ft_bool_t, Public)
	ft_bool_t State;
	ESD_WRITER(Changed, Type = ft_bool_t)
	void(* Changed)(void *context, ft_bool_t value);
	ESD_INPUT(Font, Type = uint8_t, Min = 16, Max = 34, Default = 27)
	uint8_t(* Font)(void *context);
	ESD_INPUT(FontResource, DisplayName = "Font Resource", Type = Esd_FontInfo *)
	Esd_FontInfo *(* FontResource)(void *context);
	ESD_VARIABLE(Style, DisplayName = "Style", Type = Esd_DisplayStyle, Default = ESD_OPT_3D, Public)
	ft_uint8_t Style;
	/* Automatic resize for height */
	ESD_VARIABLE(AutoResize, DisplayName = "Auto Resize", Type = Esd_AutoResize, Default = ESD_AUTORESIZE_HEIGHT, Public)
	ft_uint8_t AutoResize;
	Ft_Esd_TouchTag Touch_Tag;
} Ft_Esd_Toggle;

void Ft_Esd_Toggle__Initializer(Ft_Esd_Toggle *context);

ESD_SLOT(Start)
void Ft_Esd_Toggle_Start(Ft_Esd_Toggle *context);

ESD_SLOT(End)
void Ft_Esd_Toggle_End(Ft_Esd_Toggle *context);

ESD_SLOT(Render)
void Ft_Esd_Toggle_Render(Ft_Esd_Toggle *context);

ESD_SLOT(Toggle)
void Ft_Esd_Toggle_Toggle(Ft_Esd_Toggle *context);

ESD_SLOT(Update)
void Ft_Esd_Toggle_Update(Ft_Esd_Toggle *context);

#endif /* Ft_Esd_Toggle__H */

/* end of file */
