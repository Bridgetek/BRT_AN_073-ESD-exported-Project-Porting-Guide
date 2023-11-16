#include "Ft_Esd.h"
#include "AppScreen.h"

#include "Ft_Esd_Dl.h"
#include "Ft_Esd_GpuAlloc.h"

void Esd_ShowLogo();

ESD_METHOD(AppScreen_ShowLogo, Context = AppScreen)
void AppScreen_ShowLogo(AppScreen *context)
{
	Esd_ShowLogo();
}

ESD_METHOD(AppScreen_Start_Signal, Context = AppScreen)
void AppScreen_Start_Signal(AppScreen *context)
{
#if defined(EVE_SUPPORT_HSF)
	/* Reconfigure without HSF after loading */
	EVE_HalContext *phost = Esd_GetHost();
	uint64_t hsfWidth = EVE_Hal_rd16(phost, REG_HSF_HSIZE);
	if (hsfWidth)
	{
		EVE_ConfigParameters config;
		EVE_Util_configDefaults(phost, &config, EVE_DISPLAY_DEFAULT);
		if (config.HsfWidth)
		{
			config.Width = config.HsfWidth;
			config.HsfWidth = 0;
		}
		EVE_Util_config(phost, &config);
		context->Widget.GlobalWidth = Esd_GetHost()->Width;
	}
#endif
}
