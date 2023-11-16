/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_CheckBox
C Source
*/

/*
Comment :
Introduction:
This widget is simply a very familiar check box.
It supports touch input.
Font type and font size can be changed.
*/

/*
Comment 2 :
ESD Label is used to show check box text.
*/

#include "Ft_Esd_CheckBox.h"

#include "Esd_Context.h"
#include "Esd_BitmapHandle.h"
#include "FT_Esd_Primitives.h"
#include "Ft_Esd_Dl.h"
#include "Ft_Esd_Elements.h"
#include "Ft_Esd_Primitives.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
Ft_Esd_Theme * Ft_Esd_CheckBox_Theme__Default(void *context) { return Ft_Esd_Theme_GetCurrent(); }
ft_uint8_t Ft_Esd_CheckBox_Alpha__Default(void *context) { return 255; }
void Ft_Esd_CheckBox_Changed__Noop(void *context, ft_bool_t value) { }
uint8_t Ft_Esd_CheckBox_Font__Default(void *context) { return 27; }
Esd_FontInfo * Ft_Esd_CheckBox_FontResource__Default(void *context) { return 0; }
char * Ft_Esd_CheckBox_Text__Default(void *context) { return "Option"; }

static Ft_Esd_Theme * Ft_Esd_CheckBox_ESD_Label_Theme__Property(void *context);
static uint8_t Ft_Esd_CheckBox_ESD_Label_Font__Property(void *context);
static Esd_FontInfo * Ft_Esd_CheckBox_ESD_Label_FontResource__Property(void *context);
static const char * Ft_Esd_CheckBox_ESD_Label_Text__Property(void *context);
static ft_uint16_t Ft_Esd_CheckBox_ESD_Label_AlignY__Property(void *context) { return OPT_ALIGN_CENTER; }

static Ft_Esd_WidgetSlots s_Ft_Esd_CheckBox__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_CheckBox_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_CheckBox_Update,
	(void(*)(void *))Ft_Esd_CheckBox_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_CheckBox_End,
};

static void Ft_Esd_CheckBox_Touch_Tag_Tap__Signal(void *context);

void Ft_Esd_CheckBox__Touch_Tag__Initializer(Ft_Esd_CheckBox *context)
{
	Ft_Esd_TouchTag *object = (Ft_Esd_TouchTag *)&context->Touch_Tag;
	Ft_Esd_TouchTag__Initializer(object);
	object->Owner = (void *)context;
	object->Tap = Ft_Esd_CheckBox_Touch_Tag_Tap__Signal;
}

void Ft_Esd_CheckBox__Fixed_Position__Initializer(Ft_Esd_CheckBox *context)
{
	Ft_Esd_Layout_Fixed *object = (Ft_Esd_Layout_Fixed *)&context->Fixed_Position;
	Ft_Esd_Layout_Fixed__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void Ft_Esd_CheckBox__ESD_Label__Initializer(Ft_Esd_CheckBox *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 120;
	object->Widget.LocalHeight = 36;
	object->Theme = Ft_Esd_CheckBox_ESD_Label_Theme__Property;
	object->Font = Ft_Esd_CheckBox_ESD_Label_Font__Property;
	object->FontResource = Ft_Esd_CheckBox_ESD_Label_FontResource__Property;
	object->Text = Ft_Esd_CheckBox_ESD_Label_Text__Property;
	object->AlignY = Ft_Esd_CheckBox_ESD_Label_AlignY__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void Ft_Esd_CheckBox__Initializer(Ft_Esd_CheckBox *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_CheckBox_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_CheckBox__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 20;
	context->Widget.LocalHeight = 20;
	context->Theme = Ft_Esd_CheckBox_Theme__Default;
	context->Alpha = Ft_Esd_CheckBox_Alpha__Default;
	context->Value = 0;
	context->Toggled = Esd_Noop;
	context->Changed = Ft_Esd_CheckBox_Changed__Noop;
	context->Font = Ft_Esd_CheckBox_Font__Default;
	context->FontResource = Ft_Esd_CheckBox_FontResource__Default;
	context->Text = Ft_Esd_CheckBox_Text__Default;
	Ft_Esd_CheckBox__Touch_Tag__Initializer(context);
	Ft_Esd_CheckBox__Fixed_Position__Initializer(context);
	Ft_Esd_CheckBox__ESD_Label__Initializer(context);
}

static ft_argb32_t Ft_Esd_CheckBox_Color_A_RGB_Combine__return(Ft_Esd_CheckBox *context);

void Ft_Esd_Elements_PanelSunken(ft_rgb32_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t);
ESD_CORE_EXPORT Esd_FontInfo *Esd_GetRomFont(uint8_t);
ESD_CORE_EXPORT uint16_t Esd_GetFontCapsHeight(Esd_FontInfo *);

void Ft_Esd_CheckBox_Start(Ft_Esd_CheckBox *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_Start((Ft_Esd_Widget *)context);
	Ft_Esd_TouchTag_Start(&context->Touch_Tag);
}

void Ft_Esd_CheckBox_Update(Ft_Esd_CheckBox *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_Update(&context->Touch_Tag);
	ft_int16_t left_1 = context->Widget.GlobalWidth;
	ft_int16_t right = context->Widget.GlobalHeight;
	int if_1 = left_1 <= right;
	int left;
	if (if_1)
	{
		left = context->Widget.GlobalWidth;
	}
	else
	{
		left = context->Widget.GlobalHeight;
	}
	ft_int16_t left_4 = context->Widget.GlobalWidth;
	ft_int16_t right_2 = context->Widget.GlobalHeight;
	int if_2 = left_4 <= right_2;
	int left_3;
	if (if_2)
	{
		left_3 = context->Widget.GlobalWidth;
	}
	else
	{
		left_3 = context->Widget.GlobalHeight;
	}
	Esd_FontInfo * if_3 = context->FontResource(owner);
	Esd_FontInfo *fontInfo;
	if (if_3)
	{
		fontInfo = context->FontResource(owner);
	}
	else
	{
		uint8_t i = context->Font(owner);
		fontInfo = Esd_GetRomFont(i);
	}
	uint16_t right_3 = Esd_GetFontCapsHeight(fontInfo);
	int left_2 = left_3 + right_3;
	int right_4 = 4L;
	int right_1 = left_2 / right_4;
	int update_variable = left + right_1;
	Ft_Esd_Widget_SetX((Ft_Esd_Widget *)&context->ESD_Label, update_variable);
	ft_int16_t update_variable_1 = context->Widget.GlobalHeight;
	Ft_Esd_Widget_SetHeight((Ft_Esd_Widget *)&context->ESD_Label, update_variable_1);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void Ft_Esd_CheckBox_End(Ft_Esd_CheckBox *context)
{
	void *owner = context->Owner;
	Ft_Esd_TouchTag_End(&context->Touch_Tag);
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Position); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label); 
}

void Ft_Esd_CheckBox_Render(Ft_Esd_CheckBox *context)
{
	void *owner = context->Owner;
	ft_uint8_t alpha = context->Alpha(owner);
	Ft_Esd_Dl_COLOR_A(alpha);
	ft_uint8_t s = Ft_Esd_TouchTag_Tag(&context->Touch_Tag);
	Ft_Esd_Dl_TAG(s);
	Ft_Esd_Theme * theme = context->Theme(owner);
	ft_argb32_t color = Ft_Esd_Theme_GetBackColor(theme);
	ft_int16_t x = context->Widget.GlobalX;
	ft_int16_t y = context->Widget.GlobalY;
	ft_int16_t left_5 = context->Widget.GlobalWidth;
	ft_int16_t right_5 = context->Widget.GlobalHeight;
	int if_4 = left_5 <= right_5;
	int width;
	if (if_4)
	{
		width = context->Widget.GlobalWidth;
	}
	else
	{
		width = context->Widget.GlobalHeight;
	}
	ft_int16_t height = context->Widget.GlobalHeight;
	ft_int16_t radius = 4;
	Ft_Esd_Elements_PanelSunken(color, x, y, width, height, radius);
	ft_bool_t left_6 = context->Value;
	ft_bool_t right_6 = Ft_Esd_TouchTag_Inside(&context->Touch_Tag);
	int if_5 = left_6 || right_6;
	if (if_5)
	{
		ft_int16_t left_8 = context->Widget.GlobalX;
		ft_int16_t left_10 = context->Widget.GlobalWidth;
		ft_int16_t right_8 = context->Widget.GlobalHeight;
		int if_6 = left_10 <= right_8;
		int left_9;
		if (if_6)
		{
			left_9 = context->Widget.GlobalWidth;
		}
		else
		{
			left_9 = context->Widget.GlobalHeight;
		}
		int right_9 = 10L;
		int right_7 = left_9 / right_9;
		int left_7 = left_8 + right_7;
		ft_int16_t left_12 = context->Widget.GlobalWidth;
		ft_int16_t right_11 = context->Widget.GlobalHeight;
		int if_7 = left_12 <= right_11;
		int left_11;
		if (if_7)
		{
			left_11 = context->Widget.GlobalWidth;
		}
		else
		{
			left_11 = context->Widget.GlobalHeight;
		}
		int right_12 = 10L;
		int right_10 = left_11 / right_12;
		int x0 = left_7 + right_10;
		ft_int16_t left_13 = context->Widget.GlobalY;
		ft_int16_t left_15 = context->Widget.GlobalWidth;
		ft_int16_t right_14 = context->Widget.GlobalHeight;
		int if_8 = left_15 <= right_14;
		int left_14;
		if (if_8)
		{
			left_14 = context->Widget.GlobalWidth;
		}
		else
		{
			left_14 = context->Widget.GlobalHeight;
		}
		int right_15 = 2L;
		int right_13 = left_14 / right_15;
		int y0 = left_13 + right_13;
		ft_int16_t left_16 = context->Widget.GlobalX;
		ft_int16_t left_18 = context->Widget.GlobalWidth;
		ft_int16_t right_17 = context->Widget.GlobalHeight;
		int if_9 = left_18 <= right_17;
		int left_17;
		if (if_9)
		{
			left_17 = context->Widget.GlobalWidth;
		}
		else
		{
			left_17 = context->Widget.GlobalHeight;
		}
		int right_18 = 3L;
		int right_16 = left_17 / right_18;
		int x1 = left_16 + right_16;
		ft_int16_t left_21 = context->Widget.GlobalY;
		ft_int16_t left_22 = context->Widget.GlobalWidth;
		ft_int16_t right_20 = context->Widget.GlobalHeight;
		int if_10 = left_22 <= right_20;
		int right_19;
		if (if_10)
		{
			right_19 = context->Widget.GlobalWidth;
		}
		else
		{
			right_19 = context->Widget.GlobalHeight;
		}
		int left_20 = left_21 + right_19;
		ft_int16_t left_24 = context->Widget.GlobalWidth;
		ft_int16_t right_22 = context->Widget.GlobalHeight;
		int if_11 = left_24 <= right_22;
		int left_23;
		if (if_11)
		{
			left_23 = context->Widget.GlobalWidth;
		}
		else
		{
			left_23 = context->Widget.GlobalHeight;
		}
		int right_23 = 10L;
		int right_21 = left_23 / right_23;
		int left_19 = left_20 - right_21;
		ft_int16_t left_26 = context->Widget.GlobalWidth;
		ft_int16_t right_25 = context->Widget.GlobalHeight;
		int if_12 = left_26 <= right_25;
		int left_25;
		if (if_12)
		{
			left_25 = context->Widget.GlobalWidth;
		}
		else
		{
			left_25 = context->Widget.GlobalHeight;
		}
		int right_26 = 10L;
		int right_24 = left_25 / right_26;
		int y1 = left_19 - right_24;
		ft_int16_t left_29 = context->Widget.GlobalWidth;
		ft_int16_t right_27 = context->Widget.GlobalHeight;
		int if_13 = left_29 <= right_27;
		int left_28;
		if (if_13)
		{
			left_28 = context->Widget.GlobalWidth;
		}
		else
		{
			left_28 = context->Widget.GlobalHeight;
		}
		int right_28 = 10L;
		int left_27 = left_28 / right_28;
		int right_29 = 2L;
		int width_1 = left_27 * right_29;
		ft_argb32_t color_1 = Ft_Esd_CheckBox_Color_A_RGB_Combine__return(context);
		Ft_Esd_Render_Line(x0, y0, x1, y1, width_1, color_1);
		ft_int16_t left_30 = context->Widget.GlobalX;
		ft_int16_t left_32 = context->Widget.GlobalWidth;
		ft_int16_t right_31 = context->Widget.GlobalHeight;
		int if_14 = left_32 <= right_31;
		int left_31;
		if (if_14)
		{
			left_31 = context->Widget.GlobalWidth;
		}
		else
		{
			left_31 = context->Widget.GlobalHeight;
		}
		int right_32 = 3L;
		int right_30 = left_31 / right_32;
		int x0_1 = left_30 + right_30;
		ft_int16_t left_35 = context->Widget.GlobalY;
		ft_int16_t left_36 = context->Widget.GlobalWidth;
		ft_int16_t right_34 = context->Widget.GlobalHeight;
		int if_15 = left_36 <= right_34;
		int right_33;
		if (if_15)
		{
			right_33 = context->Widget.GlobalWidth;
		}
		else
		{
			right_33 = context->Widget.GlobalHeight;
		}
		int left_34 = left_35 + right_33;
		ft_int16_t left_38 = context->Widget.GlobalWidth;
		ft_int16_t right_36 = context->Widget.GlobalHeight;
		int if_16 = left_38 <= right_36;
		int left_37;
		if (if_16)
		{
			left_37 = context->Widget.GlobalWidth;
		}
		else
		{
			left_37 = context->Widget.GlobalHeight;
		}
		int right_37 = 10L;
		int right_35 = left_37 / right_37;
		int left_33 = left_34 - right_35;
		ft_int16_t left_40 = context->Widget.GlobalWidth;
		ft_int16_t right_39 = context->Widget.GlobalHeight;
		int if_17 = left_40 <= right_39;
		int left_39;
		if (if_17)
		{
			left_39 = context->Widget.GlobalWidth;
		}
		else
		{
			left_39 = context->Widget.GlobalHeight;
		}
		int right_40 = 10L;
		int right_38 = left_39 / right_40;
		int y0_1 = left_33 - right_38;
		ft_int16_t left_43 = context->Widget.GlobalX;
		ft_int16_t left_44 = context->Widget.GlobalWidth;
		ft_int16_t right_42 = context->Widget.GlobalHeight;
		int if_18 = left_44 <= right_42;
		int right_41;
		if (if_18)
		{
			right_41 = context->Widget.GlobalWidth;
		}
		else
		{
			right_41 = context->Widget.GlobalHeight;
		}
		int left_42 = left_43 + right_41;
		ft_int16_t left_46 = context->Widget.GlobalWidth;
		ft_int16_t right_44 = context->Widget.GlobalHeight;
		int if_19 = left_46 <= right_44;
		int left_45;
		if (if_19)
		{
			left_45 = context->Widget.GlobalWidth;
		}
		else
		{
			left_45 = context->Widget.GlobalHeight;
		}
		int right_45 = 10L;
		int right_43 = left_45 / right_45;
		int left_41 = left_42 - right_43;
		ft_int16_t left_48 = context->Widget.GlobalWidth;
		ft_int16_t right_47 = context->Widget.GlobalHeight;
		int if_20 = left_48 <= right_47;
		int left_47;
		if (if_20)
		{
			left_47 = context->Widget.GlobalWidth;
		}
		else
		{
			left_47 = context->Widget.GlobalHeight;
		}
		int right_48 = 10L;
		int right_46 = left_47 / right_48;
		int x1_1 = left_41 - right_46;
		ft_int16_t left_50 = context->Widget.GlobalY;
		ft_int16_t left_52 = context->Widget.GlobalWidth;
		ft_int16_t right_50 = context->Widget.GlobalHeight;
		int if_21 = left_52 <= right_50;
		int left_51;
		if (if_21)
		{
			left_51 = context->Widget.GlobalWidth;
		}
		else
		{
			left_51 = context->Widget.GlobalHeight;
		}
		int right_51 = 10L;
		int right_49 = left_51 / right_51;
		int left_49 = left_50 + right_49;
		ft_int16_t left_54 = context->Widget.GlobalWidth;
		ft_int16_t right_53 = context->Widget.GlobalHeight;
		int if_22 = left_54 <= right_53;
		int left_53;
		if (if_22)
		{
			left_53 = context->Widget.GlobalWidth;
		}
		else
		{
			left_53 = context->Widget.GlobalHeight;
		}
		int right_54 = 10L;
		int right_52 = left_53 / right_54;
		int y1_1 = left_49 + right_52;
		ft_int16_t left_57 = context->Widget.GlobalWidth;
		ft_int16_t right_55 = context->Widget.GlobalHeight;
		int if_23 = left_57 <= right_55;
		int left_56;
		if (if_23)
		{
			left_56 = context->Widget.GlobalWidth;
		}
		else
		{
			left_56 = context->Widget.GlobalHeight;
		}
		int right_56 = 10L;
		int left_55 = left_56 / right_56;
		int right_57 = 2L;
		int width_2 = left_55 * right_57;
		ft_argb32_t color_2 = Ft_Esd_CheckBox_Color_A_RGB_Combine__return(context);
		Ft_Esd_Render_Line(x0_1, y0_1, x1_1, y1_1, width_2, color_2);
	}
	else
	{
	}
	ft_uint8_t s_1 = 255;
	Ft_Esd_Dl_TAG(s_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

ft_argb32_t Ft_Esd_CheckBox_Color_A_RGB_Combine__return(Ft_Esd_CheckBox *context)
{
	void *owner = context->Owner;
	ft_bool_t if_24 = Ft_Esd_TouchTag_Inside(&context->Touch_Tag);
	ft_rgb32_t rgb;
	if (if_24)
	{
		Ft_Esd_Theme * theme_1 = context->Theme(owner);
		rgb = Ft_Esd_Theme_GetTextColor(theme_1);
	}
	else
	{
		Ft_Esd_Theme * theme_2 = context->Theme(owner);
		rgb = Ft_Esd_Theme_GetPrimaryColor(theme_2);
	}
	ft_uint8_t a = context->Alpha(owner);
	return Ft_Esd_ColorARGB_Combine(rgb, a);
}

void Ft_Esd_CheckBox_Toggle(Ft_Esd_CheckBox *context)
{
	void *owner = context->Owner;
	ft_bool_t value = context->Value;
	int set_variable = !value;
	context->Value = set_variable;
	context->Changed(owner, set_variable);
	context->Toggled(owner);
}

void Ft_Esd_CheckBox_Touch_Tag_Tap__Signal(void *c)
{
	Ft_Esd_CheckBox *context = (Ft_Esd_CheckBox *)c;
	void *owner = context->Owner;
	ft_bool_t value_1 = context->Value;
	int set_variable_1 = !value_1;
	context->Value = set_variable_1;
	context->Changed(owner, set_variable_1);
	context->Toggled(owner);
}

Ft_Esd_Theme * Ft_Esd_CheckBox_ESD_Label_Theme__Property(void *c)
{
	Ft_Esd_CheckBox *context = (Ft_Esd_CheckBox *)c;
	void *owner = context->Owner;
	return context->Theme(owner);
}

uint8_t Ft_Esd_CheckBox_ESD_Label_Font__Property(void *c)
{
	Ft_Esd_CheckBox *context = (Ft_Esd_CheckBox *)c;
	void *owner = context->Owner;
	return context->Font(owner);
}

Esd_FontInfo * Ft_Esd_CheckBox_ESD_Label_FontResource__Property(void *c)
{
	Ft_Esd_CheckBox *context = (Ft_Esd_CheckBox *)c;
	void *owner = context->Owner;
	return context->FontResource(owner);
}

const char * Ft_Esd_CheckBox_ESD_Label_Text__Property(void *c)
{
	Ft_Esd_CheckBox *context = (Ft_Esd_CheckBox *)c;
	void *owner = context->Owner;
	return context->Text(owner);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_CheckBox Instance;
	Ft_Esd_Theme * Theme;
	ft_uint8_t Alpha;
	uint8_t Font;
	Esd_FontInfo * FontResource;
	char * Text;
} Ft_Esd_CheckBox__ESD;

Ft_Esd_Theme * Ft_Esd_CheckBox__Get_Theme__ESD(void *context) { return ((Ft_Esd_CheckBox__ESD *)context)->Theme; }
void Ft_Esd_CheckBox__Set_Theme__ESD(void *context, Ft_Esd_Theme * value) { ((Ft_Esd_CheckBox__ESD *)context)->Theme = value; }
ft_uint8_t Ft_Esd_CheckBox__Get_Alpha__ESD(void *context) { return ((Ft_Esd_CheckBox__ESD *)context)->Alpha; }
void Ft_Esd_CheckBox__Set_Alpha__ESD(void *context, ft_uint8_t value) { ((Ft_Esd_CheckBox__ESD *)context)->Alpha = value; }
uint8_t Ft_Esd_CheckBox__Get_Font__ESD(void *context) { return ((Ft_Esd_CheckBox__ESD *)context)->Font; }
void Ft_Esd_CheckBox__Set_Font__ESD(void *context, uint8_t value) { ((Ft_Esd_CheckBox__ESD *)context)->Font = value; }
Esd_FontInfo * Ft_Esd_CheckBox__Get_FontResource__ESD(void *context) { return ((Ft_Esd_CheckBox__ESD *)context)->FontResource; }
void Ft_Esd_CheckBox__Set_FontResource__ESD(void *context, Esd_FontInfo * value) { ((Ft_Esd_CheckBox__ESD *)context)->FontResource = value; }
char * Ft_Esd_CheckBox__Get_Text__ESD(void *context) { return ((Ft_Esd_CheckBox__ESD *)context)->Text; }
void Ft_Esd_CheckBox__Set_Text__ESD(void *context, char * value) { ((Ft_Esd_CheckBox__ESD *)context)->Text = value; }

void *Ft_Esd_CheckBox__Create__ESD()
{
	Ft_Esd_CheckBox__ESD *context = (Ft_Esd_CheckBox__ESD *)esd_malloc(sizeof(Ft_Esd_CheckBox__ESD));
	if (context)
	{
		Ft_Esd_CheckBox__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Theme = Ft_Esd_Theme_GetCurrent();
		context->Instance.Theme = Ft_Esd_CheckBox__Get_Theme__ESD;
		context->Alpha = 255;
		context->Instance.Alpha = Ft_Esd_CheckBox__Get_Alpha__ESD;
		context->Font = 27;
		context->Instance.Font = Ft_Esd_CheckBox__Get_Font__ESD;
		context->FontResource = 0;
		context->Instance.FontResource = Ft_Esd_CheckBox__Get_FontResource__ESD;
		context->Text = "Option";
		context->Instance.Text = Ft_Esd_CheckBox__Get_Text__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_CheckBox__Create__ESD)");
	}
	return context;
}

void Ft_Esd_CheckBox__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_CheckBox__Set_Value__ESD(void *context, ft_bool_t value) { ((Ft_Esd_CheckBox__ESD *)context)->Instance.Value = value; }

#endif /* ESD_SIMULATION */

/* end of file */
