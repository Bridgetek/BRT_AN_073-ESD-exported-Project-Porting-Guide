/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_Timer
C Source
*/

#include "Ft_Esd_Timer.h"

#include "Esd_Context.h"
#include "Esd_Core.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);



void Ft_Esd_Timer__Initializer(Ft_Esd_Timer *context)
{
	context->Owner = 0;
	context->Fired = Esd_Noop;
	context->TimeoutMs = 1000L;
	context->Repeat = 0;
	context->RemainingMs = 0L;
}

void Ft_Esd_Timer_Process(Ft_Esd_Timer *context);

void Ft_Esd_Timer_Run(Ft_Esd_Timer *context)
{
	void *owner = context->Owner;
	int start_or_restart_timer = context->TimeoutMs;
	context->RemainingMs = start_or_restart_timer;
}

void Ft_Esd_Timer_Halt(Ft_Esd_Timer *context)
{
	void *owner = context->Owner;
	int stop_timer = 0L;
	context->RemainingMs = stop_timer;
}

void Ft_Esd_Timer_Update(Ft_Esd_Timer *context)
{
	void *owner = context->Owner;
	int left = context->RemainingMs;
	int right = 0L;
	int if_1 = left > right;
	if (if_1)
	{
		int left_1 = context->RemainingMs;
		uint32_t right_1 = Esd_GetDeltaMs();
		int reduce_by_delta_ms = left_1 - right_1;
		context->RemainingMs = reduce_by_delta_ms;
		Ft_Esd_Timer_Process(context);
	}
	else
	{
	}
}

void Ft_Esd_Timer_End(Ft_Esd_Timer *context)
{
	void *owner = context->Owner;
	int stop_timer_1 = 0L;
	context->RemainingMs = stop_timer_1;
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	Ft_Esd_Timer Instance;
} Ft_Esd_Timer__ESD;


void *Ft_Esd_Timer__Create__ESD()
{
	Ft_Esd_Timer__ESD *context = (Ft_Esd_Timer__ESD *)esd_malloc(sizeof(Ft_Esd_Timer__ESD));
	if (context)
	{
		Ft_Esd_Timer__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (Ft_Esd_Timer__Create__ESD)");
	}
	return context;
}

void Ft_Esd_Timer__Destroy__ESD(void *context)
{
	esd_free(context);
}

void Ft_Esd_Timer__Set_TimeoutMs__ESD(void *context, int value) { ((Ft_Esd_Timer__ESD *)context)->Instance.TimeoutMs = value; }
void Ft_Esd_Timer__Set_Repeat__ESD(void *context, bool value) { ((Ft_Esd_Timer__ESD *)context)->Instance.Repeat = value; }
void Ft_Esd_Timer__Set_RemainingMs__ESD(void *context, int value) { ((Ft_Esd_Timer__ESD *)context)->Instance.RemainingMs = value; }

#endif /* ESD_SIMULATION */

/* end of file */
