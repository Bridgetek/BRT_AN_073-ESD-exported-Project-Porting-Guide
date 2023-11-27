/*
This file is automatically generated
DO NOT MODIFY BY HAND
FadeInAnimation
Header
*/

#ifndef FadeInAnimation__H
#define FadeInAnimation__H

#include "Esd_Base.h"
#include "Ft_Esd.h"

#ifndef ESD_LOGIC
#define ESD_LOGIC(name, ...)
#define ESD_ACTOR(name, ...)
#define ESD_WIDGET(name, ...)
#define ESD_PAGE(name, ...)
#define ESD_APPLICATION(name, ...)
#define ESD_INPUT(name, ...)
#define ESD_OUTPUT(name, ...)
#define ESD_SLOT(name, ...)
#define ESD_SIGNAL(name, ...)
#define ESD_VARIABLE(name, ...)
#define ESD_WRITER(name, ...)
#endif

ESD_ACTOR(FadeInAnimation, Include = "FadeInAnimation.h", Callback)
typedef struct
{
	void *Owner;
	ESD_VARIABLE(CurrentMs, Type = ft_uint16_t, Private)
	ft_uint16_t CurrentMs;
	ESD_VARIABLE(Running, Type = ft_bool_t, Private)
	ft_bool_t Running;
	ESD_SIGNAL(Completed)
	void(* Completed)(void *context);
	ESD_VARIABLE(DurationMs, Type = ft_uint16_t, Default = 300, Public)
	ft_uint16_t DurationMs;
	ESD_WRITER(Changed, Type = ft_uint8_t)
	void(* Changed)(void *context, ft_uint8_t value);
} FadeInAnimation;

void FadeInAnimation__Initializer(FadeInAnimation *context);

ESD_SLOT(Fire)
void FadeInAnimation_Fire(FadeInAnimation *context);

ESD_SLOT(Update)
void FadeInAnimation_Update(FadeInAnimation *context);

#endif /* FadeInAnimation__H */

/* end of file */