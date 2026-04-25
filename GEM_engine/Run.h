#pragma once
#include "DekaGui.h"
#include "Viewport.h"

extern bool IsClickedOn;
extern Color NewCubeColor;

class Run
{
private:
    DekaGui gui;
	Camera3D camera;
    RenderTexture2D view;
public:
    Run()
    {
        SetConfigFlags(FLAG_WINDOW_RESIZABLE);
        InitWindow(800, 600, "GEM Engine");
		view = LoadRenderTexture(GetMonitorWidth(GetCurrentMonitor()) - 150, GetMonitorHeight(GetCurrentMonitor()) - 150);
        InitCamera(camera);
        SetTargetFPS(60);
    }

    void run();

    ~Run()
    {
		CloseWindow();
    }
};