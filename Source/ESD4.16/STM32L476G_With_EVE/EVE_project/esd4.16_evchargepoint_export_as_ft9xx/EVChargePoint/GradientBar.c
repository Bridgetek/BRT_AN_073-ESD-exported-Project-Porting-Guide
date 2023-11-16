#include "Ft_Esd.h"
#include "GradientBar.h"

#include "Ft_Esd_Dl.h"

ESD_METHOD(GradientBar_Render_Signal, Context = GradientBar)
void GradientBar_Render_Signal(GradientBar *context)
{
	Ft_Esd_Rect16 scissorState = Ft_Esd_Dl_Scissor_Set(context->Widget.GlobalRect);
	Ft_Gpu_CoCmd_SendCmd(Ft_Esd_Host, CLEAR_COLOR_RGB(context->BackgroundColor >> 16, context->BackgroundColor >> 8, context->BackgroundColor));
	Ft_Gpu_CoCmd_SendCmd(Ft_Esd_Host, CLEAR(1, 0, 0));
	ft_int16_t center = (context->GlowProgress * (ft_int32_t)context->Widget.GlobalWidth) >> 16;
	Ft_Esd_Rect16 rect = {
		.X = context->Widget.GlobalRect.X + center - context->GlowWidth,
		.Y = context->Widget.GlobalRect.Y,
		.Width = context->GlowWidth,
		.Height = context->Widget.GlobalRect.Height
	};
	if (Ft_Esd_Rect16_Intersects(rect, context->Widget.GlobalRect))
	{
		Ft_Gpu_CoCmd_SendCmd(Ft_Esd_Host, VERTEX_TRANSLATE_X((rect.X) << 4));
		Ft_Esd_Dl_Scissor_Adjust(Ft_Esd_Rect16_Crop(rect, context->Widget.GlobalRect), scissorState);
		Ft_Gpu_CoCmd_Gradient(Ft_Esd_Host, 0, rect.Y, context->BackgroundColor, rect.Width, rect.Y, context->GlowColor);
	}
	rect.X += context->GlowWidth;
	if (Ft_Esd_Rect16_Intersects(rect, context->Widget.GlobalRect))
	{
		Ft_Gpu_CoCmd_SendCmd(Ft_Esd_Host, VERTEX_TRANSLATE_X((rect.X) << 4));
		Ft_Esd_Dl_Scissor_Adjust(Ft_Esd_Rect16_Crop(rect, context->Widget.GlobalRect), scissorState);
		Ft_Gpu_CoCmd_Gradient(Ft_Esd_Host, 0, rect.Y, context->GlowColor, rect.Width, rect.Y, context->BackgroundColor);
	}
	Ft_Gpu_CoCmd_SendCmd(Ft_Esd_Host, VERTEX_TRANSLATE_X(0));
	Ft_Esd_Dl_Scissor_Reset(scissorState);
}
