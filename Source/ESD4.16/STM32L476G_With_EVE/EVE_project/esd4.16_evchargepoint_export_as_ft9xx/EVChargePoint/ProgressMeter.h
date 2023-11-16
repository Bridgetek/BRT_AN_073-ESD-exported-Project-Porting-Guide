/*
This file is automatically generated
DO NOT MODIFY BY HAND
ProgressMeter
Header
*/

#ifndef ProgressMeter__H
#define ProgressMeter__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Linear.h"
#include "Ft_Esd_Math.h"
#include "Ft_Esd_NumericLabel.h"
#include "Ft_Esd_Rectangle.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_Widget.h"
#include "LanguageResource.h"
#include "RubikRegular20.h"
#include "RubikRegular36.h"

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

#define ProgressMeter_CLASSID 0x5D2A7D3C
ESD_SYMBOL(ProgressMeter_CLASSID, Type = esd_classid_t)

ESD_WIDGET(ProgressMeter, Include = "ProgressMeter.h", Callback, X = 315, Y = 207, Width = 211, Height = 147)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_INPUT(Value, Type = int)
	int(* Value)(void *context);
	ESD_INPUT(Range, Type = int, Default = 250)
	int(* Range)(void *context);
	ESD_INPUT(NameText, Type = const ft_char8_t *, Default = "Weight")
	const ft_char8_t *(* NameText)(void *context);
	ESD_INPUT(UnitText, Type = const ft_char8_t *, Default = "kg")
	const ft_char8_t *(* UnitText)(void *context);
	ESD_VARIABLE(Color, Type = ft_argb32_t, Default = #68a716, Public)
	ft_argb32_t Color;
	Ft_Esd_Layout_Linear Linear_Layout;
	Ft_Esd_Layout_Linear Linear_Layout_4;
	Ft_Esd_NumericLabel Left_Number;
	Ft_Esd_NumericLabel ESD_Numeric_Label_2;
	Ft_Esd_Rectangle ESD_Rectangle_Widget;
	Ft_Esd_Layout_Linear Linear_Layout_2;
	Ft_Esd_Rectangle ESD_Rectangle_Widget_2;
	Ft_Esd_Layout_Linear Linear_Layout_3;
	Ft_Esd_Label ESD_Label_3;
	Ft_Esd_Label ESD_Label_4;
} ProgressMeter;

void ProgressMeter__Initializer(ProgressMeter *context);

ESD_SLOT(Update)
void ProgressMeter_Update(ProgressMeter *context);

ESD_SLOT(End)
void ProgressMeter_End(ProgressMeter *context);

#endif /* ProgressMeter__H */

/* end of file */
