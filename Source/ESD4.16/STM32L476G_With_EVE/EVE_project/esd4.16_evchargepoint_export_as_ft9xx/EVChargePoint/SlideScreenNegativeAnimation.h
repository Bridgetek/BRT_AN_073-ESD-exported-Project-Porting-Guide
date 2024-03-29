/*
This file is automatically generated
DO NOT MODIFY BY HAND
SlideScreenNegativeAnimation
Header
*/

#ifndef SlideScreenNegativeAnimation__H
#define SlideScreenNegativeAnimation__H

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

ESD_ACTOR(SlideScreenNegativeAnimation, Include = "SlideScreenNegativeAnimation.h", Callback)
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
	ESD_VARIABLE(Offset, Type = ft_int16_t, Public)
	ft_int16_t Offset;
	ESD_VARIABLE(Distance, Type = ft_int16_t, Default = 800, Public)
	ft_int16_t Distance;
	ESD_WRITER(Changed, Type = ft_int16_t)
	void(* Changed)(void *context, ft_int16_t value);
} SlideScreenNegativeAnimation;

void SlideScreenNegativeAnimation__Initializer(SlideScreenNegativeAnimation *context);

ESD_SLOT(Fire)
void SlideScreenNegativeAnimation_Fire(SlideScreenNegativeAnimation *context);

ESD_SLOT(Halt)
void SlideScreenNegativeAnimation_Halt(SlideScreenNegativeAnimation *context);

ESD_SLOT(Update)
void SlideScreenNegativeAnimation_Update(SlideScreenNegativeAnimation *context);

#endif /* SlideScreenNegativeAnimation__H */

/* end of file */
