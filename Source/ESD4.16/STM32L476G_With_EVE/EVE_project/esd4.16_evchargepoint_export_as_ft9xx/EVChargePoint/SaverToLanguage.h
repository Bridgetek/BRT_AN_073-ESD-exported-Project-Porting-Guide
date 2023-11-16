/*
This file is automatically generated
DO NOT MODIFY BY HAND
SaverToLanguage
Header
*/

#ifndef SaverToLanguage__H
#define SaverToLanguage__H

#include "Esd_Base.h"
#include "Esd_Core.h"
#include "Esd_FontInfo.h"
#include "FadeInAnimation.h"
#include "FadeOutAnimation.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Layout_Fill.h"
#include "Ft_Esd_Layout_Linear.h"
#include "Ft_Esd_Layout_Stretch.h"
#include "Ft_Esd_Rectangle.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_TouchPanel.h"
#include "Ft_Esd_Widget.h"
#include "LanguageResource.h"
#include "ScreenSaver.h"
#include "SelectLanguage.h"
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

#define SaverToLanguage_CLASSID 0x13F1E748
ESD_SYMBOL(SaverToLanguage_CLASSID, Type = esd_classid_t)

ESD_WIDGET(SaverToLanguage, Include = "SaverToLanguage.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	ESD_SIGNAL(PushedEN)
	void(* PushedEN)(void *context);
	ESD_SIGNAL(PushedRU)
	void(* PushedRU)(void *context);
	ESD_SIGNAL(PushedCN)
	void(* PushedCN)(void *context);
	ESD_VARIABLE(TextAlpha, Type = ft_uint8_t, Default = 255, Private)
	ft_uint8_t TextAlpha;
	ESD_VARIABLE(Fade_Away_Alpha, Type = ft_uint8_t, Private)
	ft_uint8_t Fade_Away_Alpha;
	ESD_VARIABLE(TextAlpha2, Type = ft_uint8_t, Default = 255, Private)
	ft_uint8_t TextAlpha2;
	FadeInAnimation Fade_Away_EN;
	FadeInAnimation Fade_Away_RU;
	FadeInAnimation Fade_Away_CN;
	FadeOutAnimation FadeOutAnimation;
	WobbleScreenAnimation WobbleScreenAnimation;
	FadeInAnimation FadeInAnimation;
	Ft_Esd_Layout_Fill Fill_Layout;
	Ft_Esd_TouchPanel ESD_Touch_Panel;
	Ft_Esd_Rectangle ESD_Rectangle_Widget;
	SelectLanguage *SelectLanguage;
	Ft_Esd_Layout_Linear Linear_Layout;
	Ft_Esd_Layout_Linear Linear_Layout_3;
	Ft_Esd_Layout_Fill Fill_Layout_4;
	Ft_Esd_Label Label_Tap;
	Ft_Esd_Layout_Stretch Stretch;
	Ft_Esd_Layout_Linear Linear_Layout_2;
	Ft_Esd_Label ESD_Label;
	ScreenSaver *ScreenSaver;
} SaverToLanguage;

void SaverToLanguage__Initializer(SaverToLanguage *context);

ESD_SLOT(Update)
void SaverToLanguage_Update(SaverToLanguage *context);

ESD_SLOT(End)
void SaverToLanguage_End(SaverToLanguage *context);

ESD_SLOT(Start)
void SaverToLanguage_Start(SaverToLanguage *context);

#endif /* SaverToLanguage__H */

/* end of file */
