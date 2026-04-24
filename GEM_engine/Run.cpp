#include "Run.h"
#include "Viewport.h"

// Define the global flag declared as extern in Run.h
bool IsClickedOn = false;

static bool IsActive = false;

void Run::run()
{
	DekaGui gui;
	DrawFastViewport(camera, view);
	DrawTextureRec(view.texture, { 0.0f, 0.0f, (float)view.texture.width, -(float)view.texture.height }, { 0.0f, 0.0f }, WHITE);
	if (gui.DrawButton({ "Test", {100.0f, 50.0f}, {1250.0f, 10.0f}, 20, LIGHTGRAY }, SKYBLUE)) IsClickedOn = !IsClickedOn;
}