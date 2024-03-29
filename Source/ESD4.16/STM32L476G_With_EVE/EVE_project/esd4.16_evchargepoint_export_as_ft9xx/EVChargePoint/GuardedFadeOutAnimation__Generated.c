/*
This file is automatically generated
DO NOT MODIFY BY HAND
GuardedFadeOutAnimation
C Source
*/

#include "GuardedFadeOutAnimation.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
void GuardedFadeOutAnimation_Changed__Noop(void *context, ft_uint8_t value) { }



void GuardedFadeOutAnimation__Initializer(GuardedFadeOutAnimation *context)
{
	context->Owner = 0;
	context->CurrentMs = 0U;
	context->Running = 0;
	context->Completed = Esd_Noop;
	context->DurationMs = 300U;
	context->Changed = GuardedFadeOutAnimation_Changed__Noop;
}

static ft_uint32_t GuardedFadeOutAnimation_Get_Delta_Ms__return(GuardedFadeOutAnimation *context);

ft_uint32_t Ft_Esd_GetDeltaMs();

void GuardedFadeOutAnimation_Fire(GuardedFadeOutAnimation *context)
{
	void *owner = context->Owner;
	ft_uint32_t set_variable = 0UL;
	context->CurrentMs = (ft_uint32_t)set_variable;
	ft_bool_t set_variable_2 = 1;
	context->Running = set_variable_2;
}

ft_uint32_t GuardedFadeOutAnimation_Get_Delta_Ms__return(GuardedFadeOutAnimation *context)
{
	void *owner = context->Owner;
	return Ft_Esd_GetDeltaMs();
}

void GuardedFadeOutAnimation_Update(GuardedFadeOutAnimation *context)
{
	void *owner = context->Owner;
	ft_bool_t if_1 = context->Running;
	if (if_1)
	{
		ft_uint32_t left_1 = GuardedFadeOutAnimation_Get_Delta_Ms__return(context);
		ft_uint32_t right = 50UL;
		int if_2 = left_1 < right;
		ft_uint32_t left;
		if (if_2)
		{
			left = GuardedFadeOutAnimation_Get_Delta_Ms__return(context);
		}
		else
		{
			left = 16UL;
		}
		ft_uint16_t right_1 = context->CurrentMs;
		ft_uint32_t set_variable_3 = left + right_1;
		context->CurrentMs = (int)set_variable_3;
		ft_uint16_t left_2 = context->CurrentMs;
		ft_uint16_t right_2 = context->DurationMs;
		int if_3 = left_2 > right_2;
		if (if_3)
		{
			ft_uint16_t set_currentms_to_durationms = context->DurationMs;
			context->CurrentMs = (ft_uint32_t)set_currentms_to_durationms;
			ft_bool_t stop_running = 0;
			context->Running = stop_running;
			context->Completed(owner);
		}
		else
		{
		}
		ft_uint32_t left_3 = 255UL;
		ft_uint16_t left_5 = context->CurrentMs;
		ft_uint32_t right_4 = 255UL;
		ft_uint32_t left_4 = left_5 * right_4;
		ft_uint16_t right_5 = context->DurationMs;
		ft_uint32_t right_3 = left_4 / right_5;
		ft_uint32_t set_variable_4 = left_3 - right_3;
		context->Changed(owner, (ft_uint32_t)set_variable_4);
	}
	else
	{
	}
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	GuardedFadeOutAnimation Instance;
} GuardedFadeOutAnimation__ESD;


void *GuardedFadeOutAnimation__Create__ESD()
{
	GuardedFadeOutAnimation__ESD *context = (GuardedFadeOutAnimation__ESD *)esd_malloc(sizeof(GuardedFadeOutAnimation__ESD));
	if (context)
	{
		GuardedFadeOutAnimation__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (GuardedFadeOutAnimation__Create__ESD)");
	}
	return context;
}

void GuardedFadeOutAnimation__Destroy__ESD(void *context)
{
	esd_free(context);
}

void GuardedFadeOutAnimation__Set_CurrentMs__ESD(void *context, ft_uint16_t value) { ((GuardedFadeOutAnimation__ESD *)context)->Instance.CurrentMs = value; }
void GuardedFadeOutAnimation__Set_Running__ESD(void *context, ft_bool_t value) { ((GuardedFadeOutAnimation__ESD *)context)->Instance.Running = value; }
void GuardedFadeOutAnimation__Set_DurationMs__ESD(void *context, ft_uint16_t value) { ((GuardedFadeOutAnimation__ESD *)context)->Instance.DurationMs = value; }

#endif /* ESD_SIMULATION */

/* end of file */
