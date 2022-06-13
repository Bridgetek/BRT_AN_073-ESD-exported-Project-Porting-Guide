/*
This file is automatically generated
DO NOT MODIFY BY HAND
Ft_Esd_TouchScrollLogic
Header
*/

#ifndef Ft_Esd_TouchScrollLogic__H
#define Ft_Esd_TouchScrollLogic__H

#include "Esd_Base.h"
#include "Ft_Esd.h"
#include "Ft_Esd_TouchArea.h"

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

/* Touch Scroll logic for area scroll */
ESD_ACTOR(Ft_Esd_TouchScrollLogic, Include = "Ft_Esd_TouchScrollLogic.h", Callback, DisplayName = "Touch Scroll", Category = EsdUtilities, DefaultSignal = TouchScrolled, Icon = ":/icons/hand-point-090.png")
typedef struct
{
	void *Owner;
	ESD_VARIABLE(IsTouched, Type = ft_bool_t, ReadOnly)
	ft_bool_t IsTouched;
	ESD_INPUT(X, Type = int)
	int(* X)(void *context);
	ESD_VARIABLE(isTouchChanged, Type = ft_bool_t, Private)
	ft_bool_t isTouchChanged;
	ESD_INPUT(Y, Type = int)
	int(* Y)(void *context);
	ESD_INPUT(Width, Type = int)
	int(* Width)(void *context);
	ESD_INPUT(Height, Type = int)
	int(* Height)(void *context);
	ESD_INPUT(EnableXScroll, Type = ft_bool_t, Default = true)
	ft_bool_t(* EnableXScroll)(void *context);
	ESD_VARIABLE(speedXAvg, Type = double, Private)
	double speedXAvg;
	ESD_VARIABLE(speedYAvg, Type = double, Private)
	double speedYAvg;
	ESD_SIGNAL(TouchScrolled)
	void(* TouchScrolled)(void *context);
	ESD_INPUT(EnableYScroll, Type = ft_bool_t, Default = false)
	ft_bool_t(* EnableYScroll)(void *context);
	/* Offset threshold to stablize the noise in coordinate */
	ESD_INPUT(OffsetThreshold, DisplayName = "OffsetThreshold", Type = int, Min = 0, Max = 20, Default = 2)
	int(* OffsetThreshold)(void *context);
	ESD_VARIABLE(aX, Type = double, Private)
	double aX;
	ESD_VARIABLE(aY, Type = double, Private)
	double aY;
	ESD_VARIABLE(lastX, Type = double, Private)
	double lastX;
	ESD_VARIABLE(lastY, Type = double, Private)
	double lastY;
	ESD_VARIABLE(lastOffsetX, Type = double, Private)
	double lastOffsetX;
	ESD_VARIABLE(lastOffsetY, Type = double, Private)
	double lastOffsetY;
	ESD_VARIABLE(dY, Type = double, Private)
	double dY;
	ESD_VARIABLE(dX, Type = double, Private)
	double dX;
	ESD_VARIABLE(OldDy, Type = double, Private)
	double OldDy;
	ESD_INPUT(MinX, DisplayName = "X Min Value", Type = int)
	int(* MinX)(void *context);
	ESD_VARIABLE(OldDx, Type = double, Private)
	double OldDx;
	ESD_INPUT(DefaultX, DisplayName = "X Default Value", Type = int)
	int(* DefaultX)(void *context);
	ESD_VARIABLE(offsetY, Type = int, Private)
	int offsetY;
	ESD_VARIABLE(offsetX, Type = int, Private)
	int offsetX;
	ESD_INPUT(MaxX, DisplayName = "X Max Value", Type = int)
	int(* MaxX)(void *context);
	ESD_INPUT(MinY, DisplayName = "Y Min Value", Type = int)
	int(* MinY)(void *context);
	ESD_INPUT(DefaultY, DisplayName = "Y Default Value", Type = int)
	int(* DefaultY)(void *context);
	ESD_INPUT(MaxY, DisplayName = "Y Max Value", Type = int)
	int(* MaxY)(void *context);
	Ft_Esd_TouchArea Touch_Area;
} Ft_Esd_TouchScrollLogic;

void Ft_Esd_TouchScrollLogic__Initializer(Ft_Esd_TouchScrollLogic *context);

ESD_SLOT(Start)
void Ft_Esd_TouchScrollLogic_Start(Ft_Esd_TouchScrollLogic *context);

ESD_SLOT(Update)
void Ft_Esd_TouchScrollLogic_Update(Ft_Esd_TouchScrollLogic *context);

ESD_OUTPUT(DeltaY, Type = double)
double Ft_Esd_TouchScrollLogic_DeltaY(Ft_Esd_TouchScrollLogic *context);

ESD_OUTPUT(DeltaX, Type = double)
double Ft_Esd_TouchScrollLogic_DeltaX(Ft_Esd_TouchScrollLogic *context);

ESD_OUTPUT(ScrolledY, Type = int)
int Ft_Esd_TouchScrollLogic_ScrolledY(Ft_Esd_TouchScrollLogic *context);

ESD_OUTPUT(ScrolledX, Type = int)
int Ft_Esd_TouchScrollLogic_ScrolledX(Ft_Esd_TouchScrollLogic *context);

#endif /* Ft_Esd_TouchScrollLogic__H */

/* end of file */