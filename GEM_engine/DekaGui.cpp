#include "DekaGui.h"

bool DekaGui::DrawButton(Button2D button, Color HoverColor)
{
	DrawRectangleV(button.position, button.size, button.color);
	if (CheckCollisionPointRec(GetMousePosition(), {button.position.x, button.position.y, button.size.x, button.size.y}))
	{
		DrawRectangleV(button.position, button.size, HoverColor);
		if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			return true;
		}
	}

	DrawRectangleLines(button.position.x, button.position.y, button.size.x, button.size.y, BLACK);
	DrawText(button.text, button.position.x + 10, button.position.y + 10, 20, BLACK);
	return false;
}

Color DekaGui::DrawColorPicker(Color color, Vector2 position, Vector2 size)
{
	DrawRectangleV(position, size, color);
	if (CheckCollisionPointRec(GetMousePosition(), {position.x, position.y, size.x, size.y}))
	{
		DrawRectangleV(position, size, LIGHTGRAY);
		if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
		{
			return GetColor(255);
		}
	}
	DrawRectangleLines(position.x, position.y, size.x, size.y, BLACK);
	return color;
}