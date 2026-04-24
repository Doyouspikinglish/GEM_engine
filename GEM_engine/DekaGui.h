#pragma once
#include <raylib.h>

struct Button2D
{
	const char* text;
	Vector2 size;
	Vector2 position;
	int FontSize = 20;
	Color color;
};

class DekaGui
{
	public:
		bool DrawButton(Button2D button, Color HoverColor);
		Color DrawColorPicker(Color color, Vector2 position, Vector2 size);
};