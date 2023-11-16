/*
This file is automatically generated
DO NOT MODIFY BY HAND
PlaceholderScreen
C Source
*/

#include "PlaceholderScreen.h"

#include "Esd_Context.h"
ESD_CORE_EXPORT void Esd_Noop(void *context);

static const char * PlaceholderScreen_ESD_Label_Text__Property(void *context) { return "placeholder"; }
static ft_uint16_t PlaceholderScreen_ESD_Label_AlignX__Property(void *context) { return OPT_ALIGN_CENTER; }
static ft_uint16_t PlaceholderScreen_ESD_Label_AlignY__Property(void *context) { return OPT_ALIGN_CENTER; }

static Ft_Esd_WidgetSlots s_PlaceholderScreen__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Widget_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))PlaceholderScreen_End,
};


void PlaceholderScreen__ESD_Label__Initializer(PlaceholderScreen *context)
{
	Ft_Esd_Label *object = (Ft_Esd_Label *)&context->ESD_Label;
	Ft_Esd_Label__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Active = 1;
	object->Widget.LocalX = 351;
	object->Widget.LocalY = 211;
	object->Widget.LocalWidth = 120;
	object->Widget.LocalHeight = 36;
	object->AutoResize = ESD_AUTORESIZE_NONE;
	object->Text = PlaceholderScreen_ESD_Label_Text__Property;
	object->AlignX = PlaceholderScreen_ESD_Label_AlignX__Property;
	object->AlignY = PlaceholderScreen_ESD_Label_AlignY__Property;
	Ft_Esd_Widget_InsertBottom((Ft_Esd_Widget *)object, (Ft_Esd_Widget *)context);
}

void PlaceholderScreen__Initializer(PlaceholderScreen *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = PlaceholderScreen_CLASSID;
	context->Widget.Slots = &s_PlaceholderScreen__Slots;
	context->Widget.LocalX = 0;
	context->Widget.LocalY = 0;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	PlaceholderScreen__ESD_Label__Initializer(context);
}

void PlaceholderScreen_End(PlaceholderScreen *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_End((Ft_Esd_Widget *)context);
	Ft_Esd_Widget_Detach((Ft_Esd_Widget *)&context->ESD_Label); 
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	PlaceholderScreen Instance;
} PlaceholderScreen__ESD;


void *PlaceholderScreen__Create__ESD()
{
	PlaceholderScreen__ESD *context = (PlaceholderScreen__ESD *)esd_malloc(sizeof(PlaceholderScreen__ESD));
	if (context)
	{
		PlaceholderScreen__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (PlaceholderScreen__Create__ESD)");
	}
	return context;
}

void PlaceholderScreen__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
