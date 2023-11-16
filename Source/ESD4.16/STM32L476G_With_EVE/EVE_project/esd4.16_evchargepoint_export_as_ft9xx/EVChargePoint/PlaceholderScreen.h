/*
This file is automatically generated
DO NOT MODIFY BY HAND
PlaceholderScreen
Header
*/

#ifndef PlaceholderScreen__H
#define PlaceholderScreen__H

#include "Esd_Base.h"
#include "Esd_FontInfo.h"
#include "Ft_Esd.h"
#include "Ft_Esd_Label.h"
#include "Ft_Esd_Theme.h"
#include "Ft_Esd_Widget.h"

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

#define PlaceholderScreen_CLASSID 0xA3EC4F9F
ESD_SYMBOL(PlaceholderScreen_CLASSID, Type = esd_classid_t)

ESD_WIDGET(PlaceholderScreen, Include = "PlaceholderScreen.h", Callback, X = 0, Y = 0, Width = 400, Height = 300, Page)
typedef struct
{
	union
	{
		void *Owner;
		Ft_Esd_Widget Widget;
	};
	Ft_Esd_Label ESD_Label;
} PlaceholderScreen;

void PlaceholderScreen__Initializer(PlaceholderScreen *context);

ESD_SLOT(End)
void PlaceholderScreen_End(PlaceholderScreen *context);

#endif /* PlaceholderScreen__H */

/* end of file */
