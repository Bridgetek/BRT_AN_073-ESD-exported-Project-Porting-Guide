/*
This file is automatically generated
DO NOT MODIFY BY HAND
TransactionFlow
Header
*/

#ifndef TransactionFlow__H
#define TransactionFlow__H

#include "BatteryCharge.h"
#include "BtnCharge.h"
#include "BtnChargeText.h"
#include "BtnChargeText_Chinese.h"
#include "BtnChargeText_German.h"
#include "Car.h"
#include "ChargeProgress.h"
#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "FadeInAnimation.h"
#include "FadeInOutAnimation.h"
#include "FadeOutAnimation.h"
#include "Ft_Esd.h"
#include "Ft_Esd_BitmapInfo.h"
#include "Ft_Esd_Image.h"
#include "Ft_Esd_ImageButton.h"
#include "Ft_Esd_Image_Rotate.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Fill.h"
#include "Ft_Esd_Layout_Fixed.h"
#include "Ft_Esd_Layout_Linear.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_TouchPanel.h"
#include "Ft_Esd_Widget.h"
#include "GradientBar.h"
#include "LanguageResource.h"
#include "ProgressMeter.h"
#include "RoundEnergy.h"
#include "RubikRegular20.h"
#include "RubikRegular36.h"
#include "SlideScreenAnimation.h"
#include "SlideScreenNegativeAnimation.h"
#include "TransactionReport.h"
#include "WobbleScreenAnimation.h"

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

#define TransactionFlow_CLASSID 0x0FD4610C
ESD_SYMBOL(TransactionFlow_CLASSID, Type = esd_classid_t)

ESD_WIDGET(TransactionFlow, Include = "TransactionFlow.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_VARIABLE(Alpha, Type = ft_uint8_t, Private)
	ft_uint8_t Alpha;
	ESD_VARIABLE(Variable_2, Type = ft_int32_f16_t, Private)
	ft_int32_f16_t Variable_2;
	ESD_VARIABLE(Variable_3, Type = ft_int32_f16_t, Private)
	ft_int32_f16_t Variable_3;
	ESD_VARIABLE(StartChargeImage, Type = Ft_Esd_BitmapCell, Default = BtnChargeText_0, Private)
	Ft_Esd_BitmapCell StartChargeImage;
	ESD_VARIABLE(Button_Alpha, Type = int, Default = 255, Private)
	int Button_Alpha;
	ESD_VARIABLE(Alpha_Writer, Type = ft_uint8_t, Default = 255, Private)
	ft_uint8_t Alpha_Writer;
	ESD_VARIABLE(Extimate_Alpha, Type = int, Default = 255, Private)
	int Extimate_Alpha;
	ESD_VARIABLE(Alpha_Writer_1, Type = ft_uint8_t, Private)
	ft_uint8_t Alpha_Writer_1;
	ESD_INPUT(InitialCharge, Type = ft_uint32_t, Default = 25)
	ft_uint32_t(* InitialCharge)(void *context);
	ESD_SIGNAL(ExitReported)
	void(* ExitReported)(void *context);
	ESD_VARIABLE(Alpha_Writer_2, Type = ft_uint8_t, Private)
	ft_uint8_t Alpha_Writer_2;
	ESD_INPUT(MaxCharge, Type = int, Default = 250)
	int(* MaxCharge)(void *context);
	ESD_VARIABLE(Variable, Type = ft_uint8_t, Private)
	ft_uint8_t Variable;
	ESD_VARIABLE(ChargedMs, Type = int, Private)
	int ChargedMs;
	ESD_INPUT(TotalPrice, Type = int, Default = 32)
	int(* TotalPrice)(void *context);
	FadeInAnimation FadeInAnimation_2;
	SlideScreenAnimation SlideScreenAnimation_2;
	WobbleScreenAnimation WobbleScreenAnimation;
	SlideScreenNegativeAnimation SlideScreenNegativeAnimation_2;
	SlideScreenAnimation SlideScreenAnimation;
	FadeOutAnimation Fade_Out_Button;
	FadeOutAnimation Fade_Out_Estimate;
	FadeInOutAnimation Fade_to_Charging;
	FadeInAnimation FadeInAnimation;
	FadeInOutAnimation Fade_to_Report;
	SlideScreenAnimation Slide_Car_Right;
	SlideScreenNegativeAnimation Scroll_up_Report;
	ChargeProgress ChargeProgress;
	SlideScreenAnimation Slide_Car_Right_1;
	SlideScreenAnimation Slide_Car_Right_2;
	SlideScreenAnimation Slide_Car_Right_3;
	SlideScreenNegativeAnimation SlideScreenNegativeAnimation;
	Ft_Esd_Layout_Linear Linear_Layout_3;
	Ft_Esd_Layout_Fill Fill_Layout_4;
	Ft_Esd_Label Label_Report;
	Ft_Esd_Label Label_Tap;
	Ft_Esd_Label Label_Checking;
	Ft_Esd_Layout_Fixed Fixed_Position;
	Ft_Esd_TouchPanel ESD_Touch_Panel_2;
	Ft_Esd_Image_Rotate ESD_Image_Rotate;
	GradientBar GradientBar;
	Ft_Esd_Image_Rotate Button_Rotate_BG;
	Ft_Esd_ImageButton ESD_Image_Button;
	Ft_Esd_TouchPanel ESD_Touch_Panel;
	TransactionReport TransactionReport;
	BatteryCharge BatteryCharge;
	Ft_Esd_Label Dummy_Font_Loader_1_1;
	Ft_Esd_Label Dummy_Font_Loader_1;
	Ft_Esd_Label Dummy_Font_Loader;
	Ft_Esd_Layout_Linear Linear_Layout_2;
	ProgressMeter ProgressMeter;
	ProgressMeter ProgressMeter_1;
	ProgressMeter ProgressMeter_2;
	Ft_Esd_Image Car;
} TransactionFlow;

void TransactionFlow__Initializer(TransactionFlow *context);

ESD_SLOT(End)
void TransactionFlow_End(TransactionFlow *context);

ESD_SLOT(Update)
void TransactionFlow_Update(TransactionFlow *context);

ESD_SLOT(Start)
void TransactionFlow_Start(TransactionFlow *context);

#endif /* TransactionFlow__H */

/* end of file */