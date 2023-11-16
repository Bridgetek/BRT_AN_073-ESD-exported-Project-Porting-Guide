/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_TouchPanel
Header
*/

#ifndef Ft_Esd_TouchPanel__H
#define Ft_Esd_TouchPanel__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_TouchArea.h"
#include "Ft_Esd_TouchTagRenderInterface.h"
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

#define Ft_Esd_TouchPanel_CLASSID 0xFBA2A41F
ESD_SYMBOL(Ft_Esd_TouchPanel_CLASSID, Type = esd_classid_t)

ESD_WIDGET(Ft_Esd_TouchPanel, Include = "Ft_Esd_TouchPanel.h", Callback, DisplayName = "ESD Touch Panel", Category = EsdBasicWidgets, Icon = ":/icons/hand-point-090.png", X = 14, Y = 10, Width = 276, Height = 198)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Color, Type = ft_argb32_t, Default = #181818)
	ft_argb32_t(* Color)(void *context);
	/* Corner's radius */
	ESD_INPUT(Radius, Type = int, Default = 4)
	int(* Radius)(void *context);
	ESD_INPUT(Raised, Type = ft_bool_t, Default = false)
	ft_bool_t(* Raised)(void *context);
	ESD_INPUT(ShowBorder, Type = ft_bool_t, Default = true)
	ft_bool_t(* ShowBorder)(void *context);
	ESD_SIGNAL(Up)
	void(* Up)(void *context);
	ESD_SIGNAL(Down)
	void(* Down)(void *context);
	ESD_SIGNAL(Tap)
	void(* Tap)(void *context);
	/* Include default tag 255 */
	ESD_INPUT(IncludeDefaultTag, DisplayName = "Include Default Tag", Type = ft_bool_t, Default = false)
	ft_bool_t(* IncludeDefaultTag)(void *context);
	ESD_VARIABLE(AssumedTouching, Type = ft_bool_t, Private)
	ft_bool_t AssumedTouching;
	ESD_VARIABLE(AssumedInside, Type = ft_bool_t, Private)
	ft_bool_t AssumedInside;
	Ft_Esd_TouchArea Touch_Area;
	Ft_Esd_TouchTagRenderInterface TouchTagRenderInterface;
} Ft_Esd_TouchPanel;

void Ft_Esd_TouchPanel__Initializer(Ft_Esd_TouchPanel *context);

ESD_SLOT(End)
void Ft_Esd_TouchPanel_End(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(Touching, Type = ft_bool_t)
ft_bool_t Ft_Esd_TouchPanel_Touching(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(Inside, Type = ft_bool_t)
ft_bool_t Ft_Esd_TouchPanel_Inside(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(TouchX, Type = int)
int Ft_Esd_TouchPanel_TouchX(Ft_Esd_TouchPanel *context);

ESD_SLOT(Update)
void Ft_Esd_TouchPanel_Update(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(TouchY, Type = int)
int Ft_Esd_TouchPanel_TouchY(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(TouchXDelta, Type = int)
int Ft_Esd_TouchPanel_TouchXDelta(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(TouchYDelta, Type = int)
int Ft_Esd_TouchPanel_TouchYDelta(Ft_Esd_TouchPanel *context);

ESD_OUTPUT(Tag, Type = int)
int Ft_Esd_TouchPanel_Tag(Ft_Esd_TouchPanel *context);

#endif /* Ft_Esd_TouchPanel__H */

/* end of file */
