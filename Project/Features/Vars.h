#pragma once

// TODO add SDK
//#include "../SDK/SDK.h"

template <class T>
class CVar {
public:
	T Value;
};

namespace Vars
{
    namespace Menu
    {
        inline Rect_t Position = {100, 100, 800, 500};
		inline const auto Title = _(L"Team Fortress 2");
		inline int TitleBarH = 25;

        inline int SpacingX = 8;
		inline int SpacingY = 4;
		inline int SpacingText = 4;

		inline int CheckBoxW = 14;
		inline int CheckBoxH = 14;
		inline int CheckBoxFillSize = 3;

		inline int ButtonW = 90;
		inline int ButtonH = 20;

		inline int ButtonWSmall = 70;
		inline int ButtonHSmall = 16;

		inline int ComboBoxW = 90;
		inline int ComboBoxH = 14;

		inline int InputBoxW = 90;
		inline int InputBoxH = 14;
		inline int InputColorBoxW = 30;

		inline bool ShowPlayerlist = false;
		inline bool ShowKeybinds = false;

		namespace Colors
		{
			inline Color_t MenuAccent = {255, 101, 101, 255};
		}
    }
}