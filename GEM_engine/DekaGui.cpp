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

