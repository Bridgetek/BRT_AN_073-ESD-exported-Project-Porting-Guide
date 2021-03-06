/*
This file is automatically generated
DO NOT MODIFY BY HAND
FirstPage
C Source
*/

#include "FirstPage.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);

static ft_uint16_t FirstPage_ESD_Clock_S__Property(void *context);
static uint8_t FirstPage_ESD_Numeric_Label_Font__Property(void *context) { return 31; }
static ft_int32_t FirstPage_ESD_Numeric_Label_Value__Property(void *context);
static ft_bool_t FirstPage_ESD_Numeric_Label_IsZeroLeading__Property(void *context) { return 1; }

static Ft_Esd_WidgetSlots s_FirstPage__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))FirstPage_End,
};


void FirstPage__Fixed_Position__Initializer(FirstPage *context)
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

void FirstPage__ESD_Clock__Initializer(FirstPage *context)
{
	Ft_Esd_Clock *object = (Ft_Esd_Clock *)&context->ESD_Clock;
	Ft_Esd_Clock__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 181;
	object->Widget.LocalY = 78;
	object->Widget.LocalWidth = 409;
	object->Widget.LocalHeight = 259;
	object->S = FirstPage_ESD_Clock_S__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void FirstPage__ESD_Numeric_Label__Initializer(FirstPage *context)
{
	Ft_Esd_NumericLabel *object = (Ft_Esd_NumericLabel *)&context->ESD_Numeric_Label;
	Ft_Esd_NumericLabel__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 322;
	object->Widget.LocalY = 364;
	object->Widget.LocalWidth = 120;
	object->Widget.LocalHeight = 36;
	object->Font = FirstPage_ESD_Numeric_Label_Font__Property;
	object->Value = FirstPage_ESD_Numeric_Label_Value__Property;
	object->IsZeroLeading = FirstPage_ESD_Numeric_Label_IsZeroLeading__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)&context->Fixed_Position);
}

void FirstPage__Initializer(FirstPage *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = FirstPage_CLASSID;
	context->Widget.Slots = &s_FirstPage__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	FirstPage__Fixed_Position__Initializer(context);
	FirstPage__ESD_Clock__Initializer(context);
	FirstPage__ESD_Numeric_Label__Initializer(context);
}

extern int myCounter;

void FirstPage_End(FirstPage *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->Fixed_Position); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Clock); 
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Numeric_Label); 
}

ft_uint16_t FirstPage_ESD_Clock_S__Property(void *c)
{
	FirstPage *context = (FirstPage *)c;
	void *owner = context->Owner;
	return myCounter;
}

ft_int32_t FirstPage_ESD_Numeric_Label_Value__Property(void *c)
{
	FirstPage *context = (FirstPage *)c;
	void *owner = context->Owner;
	return myCounter;
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	FirstPage Instance;
} FirstPage__ESD;


void *FirstPage__Create__ESD()
{
	FirstPage__ESD *context = (FirstPage__ESD *)malloc(sizeof(FirstPage__ESD));
	if (context)
	{
		FirstPage__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (FirstPage__Create__ESD)");
	}
	return context;
}

void FirstPage__Destroy__ESD(void *context)
{
	free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
