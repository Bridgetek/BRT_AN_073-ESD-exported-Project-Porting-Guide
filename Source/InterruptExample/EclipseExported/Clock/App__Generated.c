/*
This file is automatically generated
DO NOT MODIFY BY HAND
App
C Source
*/

#include "App.h"

#include "DefaultTheme.h"
#include "Ft_Esd_Theme.h"
#include "stdlib.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
ESD_CORE_EXPORT void Esd_CoWidget_PopupSpinner();



void App__App_Screen__Initializer(App *context)
{
	AppScreen *object = (AppScreen *)&context->App_Screen;
	AppScreen__Initializer(object);
	object->Owner = (void *)context;
	object->Widget.Root = 1;
	object->Widget.Active = 0;
	object->Widget.GlobalX = 0;
	object->Widget.GlobalY = 0;
	object->Widget.GlobalWidth = Esd_GetHost()->Width;
	object->Widget.GlobalHeight = Esd_GetHost()->Height;
	object->Widget.LocalX = 0;
	object->Widget.LocalY = 0;
	object->Widget.LocalWidth = 400;
	object->Widget.LocalHeight = 300;
}

void App__Initializer(App *context)
{
	context->Owner = 0;
	App__App_Screen__Initializer(context);
	App_Initialize(context);
}

void Ft_Esd_Theme_SetCurrent(Ft_Esd_Theme *);

void App_Initialize(App *context)
{
	void *owner = context->Owner;
}

void App_Start__Builtin(App *context)
{
	void *owner = context->Owner;
	((Ft_Esd_Widget *)&context->App_Screen)->Slots->Start(&context->App_Screen);
	Ft_Esd_Widget_SetActive(&context->App_Screen, 1);
}

void App_Update__Builtin(App *context)
{
	void *owner = context->Owner;
	if (((Ft_Esd_Widget *)&context->App_Screen)->Active)
	{
		((Ft_Esd_Widget *)&context->App_Screen)->Slots->Update(&context->App_Screen);
	}
}

void App_Render__Builtin(App *context)
{
	void *owner = context->Owner;
	if (((Ft_Esd_Widget *)&context->App_Screen)->Active)
	{
		((Ft_Esd_Widget *)&context->App_Screen)->Slots->Render(&context->App_Screen);
	}
}

void App_Idle__Builtin(App *context)
{
	void *owner = context->Owner;
	if (((Ft_Esd_Widget *)&context->App_Screen)->Active)
	{
		((Ft_Esd_Widget *)&context->App_Screen)->Slots->Idle(&context->App_Screen);
	}
}

void App_End__Builtin(App *context)
{
	void *owner = context->Owner;
	Ft_Esd_Widget_SetActive(&context->App_Screen, 0);
	((Ft_Esd_Widget *)&context->App_Screen)->Slots->End(&context->App_Screen);
}

void App_Start(App *context)
{
	void *owner = context->Owner;
	App_Start__Builtin(context);
	Ft_Esd_Theme * theme = DefaultTheme();
	Ft_Esd_Theme_SetCurrent(theme);
}

void App_Update(App *context)
{
	void *owner = context->Owner;
	App_Update__Builtin(context);
}

void App_Render(App *context)
{
	void *owner = context->Owner;
	Ft_Esd_Theme * theme_1 = DefaultTheme();
	Ft_Esd_Theme_SetCurrent(theme_1);
	App_Render__Builtin(context);
}

void App_Idle(App *context)
{
	void *owner = context->Owner;
	App_Idle__Builtin(context);
}

void App_End(App *context)
{
	void *owner = context->Owner;
	App_End__Builtin(context);
}

static App application;
static Esd_Context s_Esd;

void App__Start(App *context)
{
	App__Initializer(context);
	App_Start(context);
}

int ESD_Start()
{
	Esd_Initialize();
	
	{
		Esd_Parameters ep;
		Esd_Defaults(&ep);
		ep.UserContext = &application;
		ep.Start = (Esd_Callback)App__Start;
		ep.Update = (Esd_Callback)App_Update;
		ep.Render = (Esd_Callback)App_Render;
		ep.Idle = (Esd_Callback)App_Idle;
		ep.End = (Esd_Callback)App_End;
		if (!Esd_Open(&s_Esd, &ep))
			return EXIT_FAILURE;
	}
	Esd_Loop(&s_Esd);
	Esd_Close(&s_Esd);
	
	Esd_Release();
	return EXIT_SUCCESS;
}
#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	App Instance;
} App__ESD;


void *App__Create__ESD()
{
	App__ESD *context = (App__ESD *)malloc(sizeof(App__ESD));
	if (context)
	{
		App__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (App__Create__ESD)");
	}
	return context;
}

void App__Destroy__ESD(void *context)
{
	free(context);
}


#endif /* ESD_SIMULATION */

/* end of file */