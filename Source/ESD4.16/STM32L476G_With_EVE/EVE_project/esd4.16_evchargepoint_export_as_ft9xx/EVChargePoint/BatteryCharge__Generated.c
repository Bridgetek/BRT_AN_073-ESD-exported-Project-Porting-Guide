/*
This file is automatically generated
DO NOT MODIFY BY HAND
BatteryCharge
C Source
*/

#include "BatteryCharge.h"

#include "Esd_Context.h"
ESD_CORE_EXPORT void Esd_Noop(void *context);
int BatteryCharge_Value__Default(void *context) { return 20L; }

static Ft_Esd_BitmapCell BatteryCharge_ESD_Image_BitmapCell__Property(void *context) { return BatteryBg_0(); }
static uint8_t BatteryCharge_ESD_Numeric_Label_Font__Property(void *context) { return 29; }
static Esd_FontInfo * BatteryCharge_ESD_Numeric_Label_FontResource__Property(void *context) { return RubikMedium24(); }
static ft_uint16_t BatteryCharge_ESD_Numeric_Label_AlignX__Property(void *context) { return OPT_ALIGN_RIGHT; }
static ft_int32_t BatteryCharge_ESD_Numeric_Label_Value__Property(void *context);
static Esd_FontInfo * BatteryCharge_ESD_Label_FontResource__Property(void *context) { return RubikRegular24(); }
static const char * BatteryCharge_ESD_Label_Text__Property(void *context) { return "%"; }
static ft_uint16_t BatteryCharge_ESD_Label_AlignY__Property(void *context) { return OPT_ALIGN_CENTER; }
static ft_argb32_t BatteryCharge_Green_3_Color__Property(void *context) { return 0xff68a716UL; }
static ft_argb32_t BatteryCharge_Green_2_Color__Property(void *context) { return 0xff68a716UL; }
static ft_argb32_t BatteryCharge_Green_1_Color__Property(void *context) { return 0xff68a716UL; }
static ft_argb32_t BatteryCharge_Green_4_Color__Property(void *context) { return 0xff68a716UL; }
static ft_argb32_t BatteryCharge_Green_5_Color__Property(void *context) { return 0xff68a716UL; }
static ft_argb32_t BatteryCharge_Red_1_Color__Property(void *context) { return 0xffde1838UL; }

static Ft_Esd_WidgetSlots s_BatteryCharge__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))BatteryCharge_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))BatteryCharge_End,
};


void BatteryCharge__Linear_Layout__Initializer(BatteryCharge *context)
{
	Ft_Esd_Layout_Linear *object = (Ft_Esd_Layout_Linear *)&context->Linear_Layout;
	Ft_Esd_Layout_Linear__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 349;
	object->Widget.LocalY = 66;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->Align = ESD_ALIGN_CENTERCENTER;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void BatteryCharge__ESD_Image__Initializer(BatteryCharge *context)
{
	Ft_Esd_Image *object = (Ft_Esd_Image *)&context->ESD_Image;
	Ft_Esd_Image__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 200;
	object->Widget.LocalHeight = 104;
	object->BitmapCell = BatteryCharge_ESD_Image_BitmapCell__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout);
}

void BatteryCharge__Linear_Layout_3__Initializer(BatteryCharge *context)
{
	Ft_Esd_Layout_Linear *object = (Ft_Esd_Layout_Linear *)&context->Linear_Layout_3;
	Ft_Esd_Layout_Linear__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 81;
	object->Widget.LocalY = 27;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	object->Align = ESD_ALIGN_CENTERFILL;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->ESD_Image);
}

void BatteryCharge__Linear_Layout_2__Initializer(BatteryCharge *context)
{
	Ft_Esd_Layout_Linear *object = (Ft_Esd_Layout_Linear *)&context->Linear_Layout_2;
	Ft_Esd_Layout_Linear__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 101;
	object->Widget.LocalY = 25;
	object->Widget.LocalWidth = 81;
	object->Widget.LocalHeight = 37;
	object->Spacing = 6;
	object->Orientation = ESD_ORIENTATION_HORIZONTAL;
	object->Align = ESD_ALIGN_CENTERCENTER;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_3);
}

void BatteryCharge__ESD_Numeric_Label__Initializer(BatteryCharge *context)
{
	Ft_Esd_NumericLabel *object = (Ft_Esd_NumericLabel *)&context->ESD_Numeric_Label;
	Ft_Esd_NumericLabel__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 176;
	object->Widget.LocalY = 58;
	object->Widget.LocalWidth = 46;
	object->Widget.LocalHeight = 28;
	object->Font = BatteryCharge_ESD_Numeric_Label_Font__Property;
	object->FontResource = BatteryCharge_ESD_Numeric_Label_FontResource__Property;
	object->AlignX = BatteryCharge_ESD_Numeric_Label_AlignX__Property;
	object->Value = BatteryCharge_ESD_Numeric_Label_Value__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_2);
}

void BatteryCharge__ESD_Label__Initializer(BatteryCharge *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 89;
	object->Widget.LocalY = 36;
	object->Widget.LocalWidth = 23;
	object->Widget.LocalHeight = 41;
	object->FontResource = BatteryCharge_ESD_Label_FontResource__Property;
	object->Text = BatteryCharge_ESD_Label_Text__Property;
	object->AlignY = BatteryCharge_ESD_Label_AlignY__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Linear_Layout_2);
}

void BatteryCharge__Fixed_Positioning__Initializer(BatteryCharge *context)
{
	Ft_Esd_Layout_Fixed *object = (Ft_Esd_Layout_Fixed *)&context->Fixed_Positioning;
	Ft_Esd_Layout_Fixed__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 127;
	object->Widget.LocalY = 45;
	object->Widget.LocalWidth = 50;
	object->Widget.LocalHeight = 50;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->ESD_Image);
}

void BatteryCharge__Green_3__Initializer(BatteryCharge *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Green_3;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 93;
	object->Widget.LocalY = 13;
	object->Widget.LocalWidth = 25;
	object->Widget.LocalHeight = 75;
	object->Color = BatteryCharge_Green_3_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void BatteryCharge__Green_2__Initializer(BatteryCharge *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Green_2;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 127;
	object->Widget.LocalY = 13;
	object->Widget.LocalWidth = 25;
	object->Widget.LocalHeight = 75;
	object->Color = BatteryCharge_Green_2_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void BatteryCharge__Green_1__Initializer(BatteryCharge *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Green_1;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 160;
	object->Widget.LocalY = 13;
	object->Widget.LocalWidth = 25;
	object->Widget.LocalHeight = 75;
	object->Color = BatteryCharge_Green_1_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void BatteryCharge__Green_4__Initializer(BatteryCharge *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Green_4;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 60;
	object->Widget.LocalY = 13;
	object->Widget.LocalWidth = 25;
	object->Widget.LocalHeight = 75;
	object->Color = BatteryCharge_Green_4_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void BatteryCharge__Green_5__Initializer(BatteryCharge *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Green_5;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 26;
	object->Widget.LocalY = 13;
	object->Widget.LocalWidth = 25;
	object->Widget.LocalHeight = 75;
	object->Color = BatteryCharge_Green_5_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void BatteryCharge__Red_1__Initializer(BatteryCharge *context)
{
	Ft_Esd_Rectangle *object = (Ft_Esd_Rectangle *)&context->Red_1;
	Ft_Esd_Rectangle__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 160;
	object->Widget.LocalY = 13;
	object->Widget.LocalWidth = 25;
	object->Widget.LocalHeight = 75;
	object->Color = BatteryCharge_Red_1_Color__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Positioning);
}

void BatteryCharge__Initializer(BatteryCharge *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = BatteryCharge_CLASSID;
	context->Widget.Slots = &s_BatteryCharge__Slots;
	context->Widget.LocalX = 163;
	context->Widget.LocalY = 95;
	context->Widget.LocalWidth = 373;
	context->Widget.LocalHeight = 234;
	context->Value = BatteryCharge_Value__Default;
	BatteryCharge__Linear_Layout__Initializer(context);
	BatteryCharge__ESD_Image__Initializer(context);
	BatteryCharge__Linear_Layout_3__Initializer(context);
	BatteryCharge__Linear_Layout_2__Initializer(context);
	BatteryCharge__ESD_Numeric_Label__Initializer(context);
	BatteryCharge__ESD_Label__Initializer(context);
	BatteryCharge__Fixed_Positioning__Initializer(context);
	BatteryCharge__Green_3__Initializer(context);
	BatteryCharge__Green_2__Initializer(context);
	BatteryCharge__Green_1__Initializer(context);
	BatteryCharge__Green_4__Initializer(context);
	BatteryCharge__Green_5__Initializer(context);
	BatteryCharge__Red_1__Initializer(context);
}

void BatteryCharge_Update(BatteryCharge *context)
{
	void *owner = context->Owner;
	int left = context->Value(owner);
	int right = 50L;
	int update_variable = left > right;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Green_3, update_variable);
	int left_1 = context->Value(owner);
	int right_1 = 30L;
	int update_variable_1 = left_1 > right_1;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Green_2, update_variable_1);
	int left_2 = context->Value(owner);
	int right_2 = 10L;
	int update_variable_2 = left_2 > right_2;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Green_1, update_variable_2);
	int left_3 = context->Value(owner);
	int right_3 = 70L;
	int update_variable_3 = left_3 > right_3;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Green_4, update_variable_3);
	int left_4 = context->Value(owner);
	int right_4 = 90L;
	int update_variable_4 = left_4 > right_4;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Green_5, update_variable_4);
	int left_5 = context->Value(owner);
	int right_5 = 0L;
	int update_variable_5 = left_5 > right_5;
	Ft_Esd_Widget_SetActive((Ft_Esd_Widget *)&context->Red_1, update_variable_5);
	Ft_Esd_Widget_Update((Ft_Esd_Widget *)context);
}

void BatteryCharge_End(BatteryCharge *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Linear_Layout); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Image); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Linear_Layout_3); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Linear_Layout_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Numeric_Label); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Positioning); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Green_3); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Green_2); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Green_1); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Green_4); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Green_5); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Red_1); 
}

ft_int32_t BatteryCharge_ESD_Numeric_Label_Value__Property(void *c)
{
	BatteryCharge *context = (BatteryCharge *)c;
	void *owner = context->Owner;
	return context->Value(owner);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	BatteryCharge Instance;
	int Value;
} BatteryCharge__ESD;

int BatteryCharge__Get_Value__ESD(void *context) { return ((BatteryCharge__ESD *)context)->Value; }
void BatteryCharge__Set_Value__ESD(void *context, int value) { ((BatteryCharge__ESD *)context)->Value = value; }

void *BatteryCharge__Create__ESD()
{
	BatteryCharge__ESD *context = (BatteryCharge__ESD *)esd_malloc(sizeof(BatteryCharge__ESD));
	if (context)
	{
		BatteryCharge__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->Value = 20L;
		context->Instance.Value = BatteryCharge__Get_Value__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (BatteryCharge__Create__ESD)");
	}
	return context;
}

void BatteryCharge__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
