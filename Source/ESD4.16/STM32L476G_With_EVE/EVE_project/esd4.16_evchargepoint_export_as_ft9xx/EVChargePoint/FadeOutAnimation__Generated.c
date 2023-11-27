/*
This file is automatically generated
DO NOT MODIFY BY HAND
FadeOutAnimation
C Source
*/

#include "FadeOutAnimation.h"

#include "Esd_Context.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);
void FadeOutAnimation_Changed__Noop(void *context, ft_uint8_t value) { }



void FadeOutAnimation__Initializer(FadeOutAnimation *context)
{
	context->Owner = 0;
	context->CurrentMs = 0U;
	context->Running = 0;
	context->Completed = Esd_Noop;
	context->DurationMs = 300U;
	context->Changed = FadeOutAnimation_Changed__Noop;
}

ft_uint32_t Ft_Esd_GetDeltaMs();

void FadeOutAnimation_Fire(FadeOutAnimation *context)
{
	void *owner = context->Owner;
	ft_uint32_t set_variable = 0UL;
	context->CurrentMs = (ft_uint32_t)set_variable;
	ft_bool_t set_variable_2 = 1;
	context->Running = set_variable_2;
}

void FadeOutAnimation_Update(FadeOutAnimation *context)
{
	void *owner = context->Owner;
	ft_bool_t if_1 = context->Running;
	if (if_1)
	{
		ft_uint32_t left = Ft_Esd_GetDeltaMs();
		ft_uint16_t right = context->CurrentMs;
		ft_uint32_t set_variable_3 = left + right;
		context->CurrentMs = (int)set_variable_3;
		ft_uint16_t left_1 = context->CurrentMs;
		ft_uint16_t right_1 = context->DurationMs;
		int if_2 = left_1 > right_1;
		if (if_2)
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
		ft_uint32_t left_2 = 255UL;
		ft_uint16_t left_4 = context->CurrentMs;
		ft_uint32_t right_3 = 255UL;
		ft_uint32_t left_3 = left_4 * right_3;
		ft_uint16_t right_4 = context->DurationMs;
		ft_uint32_t right_2 = left_3 / right_4;
		ft_uint32_t set_variable_4 = left_2 - right_2;
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
	FadeOutAnimation Instance;
} FadeOutAnimation__ESD;


void *FadeOutAnimation__Create__ESD()
{
	FadeOutAnimation__ESD *context = (FadeOutAnimation__ESD *)esd_malloc(sizeof(FadeOutAnimation__ESD));
	if (context)
	{
		FadeOutAnimation__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (FadeOutAnimation__Create__ESD)");
	}
	return context;
}

void FadeOutAnimation__Destroy__ESD(void *context)
{
	esd_free(context);
}

void FadeOutAnimation__Set_CurrentMs__ESD(void *context, ft_uint16_t value) { ((FadeOutAnimation__ESD *)context)->Instance.CurrentMs = value; }
void FadeOutAnimation__Set_Running__ESD(void *context, ft_bool_t value) { ((FadeOutAnimation__ESD *)context)->Instance.Running = value; }
void FadeOutAnimation__Set_DurationMs__ESD(void *context, ft_uint16_t value) { ((FadeOutAnimation__ESD *)context)->Instance.DurationMs = value; }

#endif /* ESD_SIMULATION */

/* end of file */