/*
This file is automatically generated
DO NOT MODIFY BY HAND
BooleanVariable
C Source
*/

#include "BooleanVariable.h"

ESD_CORE_EXPORT void Esd_Noop(void *context);



void BooleanVariable__Initializer(BooleanVariable *context)
{
	context->Owner = 0;
	context->Boolean = 0;
}

void BooleanVariable_Set_True(BooleanVariable *context)
{
	void *owner = context->Owner;
	ft_bool_t set_variable = 1;
	context->Boolean = set_variable;
}

void BooleanVariable_Set_False(BooleanVariable *context)
{
	void *owner = context->Owner;
	ft_bool_t set_variable_1 = 0;
	context->Boolean = set_variable_1;
}

#ifdef ESD_SIMULATION
#include <stdlib.h>

typedef struct
{
	BooleanVariable Instance;
} BooleanVariable__ESD;


void *BooleanVariable__Create__ESD()
{
	BooleanVariable__ESD *context = (BooleanVariable__ESD *)esd_malloc(sizeof(BooleanVariable__ESD));
	if (context)
	{
		BooleanVariable__Initializer(&context->Instance);
		context->Instance.Owner = context;
	}
	else
	{
		eve_printf_debug("Out of memory (BooleanVariable__Create__ESD)");
	}
	return context;
}

void BooleanVariable__Destroy__ESD(void *context)
{
	esd_free(context);
}

void BooleanVariable__Set_Boolean__ESD(void *context, ft_bool_t value) { ((BooleanVariable__ESD *)context)->Instance.Boolean = value; }

#endif /* ESD_SIMULATION */

/* end of file */
