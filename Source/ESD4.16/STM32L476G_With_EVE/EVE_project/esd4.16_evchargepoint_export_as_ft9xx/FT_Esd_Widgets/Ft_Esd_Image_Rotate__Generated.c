/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Image_Rotate
C Source
*/

/*
Comment :
Introduction:
This widget draws an image from Resources.
It is rotated once changing "RotateAngle" property.

*/

#include "Ft_Esd_Image_Rotate.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
Ft_Esd_BitmapCell Ft_Esd_Image_Rotate_BitmapCell__Default(void *context) { return (Ft_Esd_BitmapCell){ 0 }; }


static Ft_Esd_WidgetSlots s_Ft_Esd_Image_Rotate__Slots = {
	(void(*)(void *))Ft_Esd_Widget_Initialize,
	(void(*)(void *))Ft_Esd_Widget_Start,
	(void(*)(void *))Ft_Esd_Widget_Enable,
	(void(*)(void *))Ft_Esd_Widget_Update,
	(void(*)(void *))Ft_Esd_Image_Rotate_Render,
	(void(*)(void *))Ft_Esd_Widget_Idle,
	(void(*)(void *))Ft_Esd_Widget_Disable,
	(void(*)(void *))Ft_Esd_Widget_End,
};


void Ft_Esd_Image_Rotate__Initializer(Ft_Esd_Image_Rotate *context)
{
	Ft_Esd_Widget__Initializer((Ft_Esd_Widget *)context);
	context->Widget.ClassId = Ft_Esd_Image_Rotate_CLASSID;
	context->Widget.Slots = &s_Ft_Esd_Image_Rotate__Slots;
	context->Widget.LocalX = 130;
	context->Widget.LocalY = 44;
	context->Widget.LocalWidth = 400;
	context->Widget.LocalHeight = 300;
	context->Color = 0xffffffffUL;
	context->BitmapCell = Ft_Esd_Image_Rotate_BitmapCell__Default;
	context->RotateAngle = 0L;
	context->ScaleX = (1L * (1L << 16) + 0x0L);
	context->ScaleY = (1L * (1L << 16) + 0x0L);
}

void Ft_Esd_Image_Rotate_Render_Signal(Ft_Esd_Image_Rotate *context);

void Ft_Esd_Image_Rotate_Render(Ft_Esd_Image_Rotate *context)
{
	void *owner = context->Owner;
	Ft_Esd_Image_Rotate_Render_Signal(context);
	Ft_Esd_Widget_Render((Ft_Esd_Widget *)context); 
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Image_Rotate Instance;
	Ft_Esd_BitmapCell BitmapCell;
} Ft_Esd_Image_Rotate__ESD;

Ft_Esd_BitmapCell Ft_Esd_Image_Rotate__Get_BitmapCell__ESD(void *context) { return ((Ft_Esd_Image_Rotate__ESD *)context)->BitmapCell; }
void Ft_Esd_Image_Rotate__Set_BitmapCell__ESD(void *context, Ft_Esd_BitmapCell value) { ((Ft_Esd_Image_Rotate__ESD *)context)->BitmapCell = value; }

void *Ft_Esd_Image_Rotate__Create__ESD()
{
	Ft_Esd_Image_Rotate__ESD *context = (Ft_Esd_Image_Rotate__ESD *)esd_malloc(sizeof(Ft_Esd_Image_Rotate__ESD));
	if (context)
	{
		Ft_Esd_Image_Rotate__Initializer(&context->Instance);
		context->Instance.Owner = context;
		context->BitmapCell = (Ft_Esd_BitmapCell){ 0 };
		context->Instance.BitmapCell = Ft_Esd_Image_Rotate__Get_BitmapCell__ESD;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Image_Rotate__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Image_Rotate__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_Image_Rotate__Set_Color__ESD(void *context, ft_argb32_t value) { ((Ft_Esd_Image_Rotate__ESD *)context)->Instance.Color = value; }
void Ft_Esd_Image_Rotate__Set_RotateAngle__ESD(void *context, ft_int32_t value) { ((Ft_Esd_Image_Rotate__ESD *)context)->Instance.RotateAngle = value; }
void Ft_Esd_Image_Rotate__Set_ScaleX__ESD(void *context, ft_int32_f16_t value) { ((Ft_Esd_Image_Rotate__ESD *)context)->Instance.ScaleX = value; }
void Ft_Esd_Image_Rotate__Set_ScaleY__ESD(void *context, ft_int32_f16_t value) { ((Ft_Esd_Image_Rotate__ESD *)context)->Instance.ScaleY = value; }

#endif /* ESD_SIMULATION */

/* end of file */
