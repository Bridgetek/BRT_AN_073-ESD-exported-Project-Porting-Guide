/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Panel_Raised
C Source
*/

#include "Ft_Esd_Panel_Raised.h"

#include "Esd_Context.h"
#include "Ft_Esd_Elements.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
int Ft_Esd_Panel_Raised_radius__Default(void *context) { return 36L; }
ft_argb32_t Ft_Esd_Panel_Raised_color__Default(void *context) { return 0xfffafafaUL; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Panel_Raised__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Panel_Raised_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Panel_Raised__Initializer(Ft_Esd_Panel_Raised *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Panel_Raised_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Panel_Raised__Slots;
	context->Widget.LocalX = 107;
	context->Widget.LocalY = 64;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->radius = Ft_Esd_Panel_Raised_radius__Default;
	context->color = Ft_Esd_Panel_Raised_color__Default;
}

void Ft_Esd_Elements_PanelRaised(ft_rgb32_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t, ft_int16_t);

void Ft_Esd_Panel_Raised_Render(Ft_Esd_Panel_Raised *context)
{
	void *owner = context->Owner;
	ft_argb32_t color_1 = context->color(owner);
	ft_int16_t x = context->Widget.GlobalX;
	ft_int16_t y = context->Widget.GlobalY;
	ft_int16_t width = context->Widget.GlobalWidth;
	ft_int16_t height = context->Widget.GlobalHeight;
	int radius_1 = context->radius(owner);
	Ft_Esd_Elements_PanelRaised(color_1, x, y, width, height, radius_1);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context);
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Panel_Raised Instance;
	int radius;
	ft_argb32_t color;
} Ft_Esd_Panel_Raised__ESD;

int Ft_Esd_Panel_Raised__Get_radius__ESD(void *context) { return ((Ft_Esd_Panel_Raised__ESD *)context)->radius; }
void Ft_Esd_Panel_Raised__Set_radius__ESD(void *context, int value) { ((Ft_Esd_Panel_Raised__ESD *)context)->radius = value; }
ft_argb32_t Ft_Esd_Panel_Raised__Get_color__ESD(void *context) { return ((Ft_Esd_Panel_Raised__ESD *)context)->color; }
void Ft_Esd_Panel_Raised__Set_color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Panel_Raised__ESD *)context)->color = value; }

void *Ft_Esd_Panel_Raised__Create__ESD()
{
	Ft_Esd_Panel_Raised__ESD *context = (Ft_Esd_Panel_Raised__ESD *)esd_malloc(sizeof(Ft_Esd_Panel_Raised__ESD));
	if (context)
	{
		Ft_Esd_Panel_Raised__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->radius = 36L;
		context->Instance.radius = Ft_Esd_Panel_Raised__Get_radius__ESD;
		context->color = 0xfffafafaUL;
		context->Instance.color = Ft_Esd_Panel_Raised__Get_color__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Panel_Raised__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Panel_Raised__Destroy__ESD(void *context)
{
	esd_free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */
