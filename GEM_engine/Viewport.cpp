#include "Viewport.h"
#include "Run.h"


void InitCamera(Camera3D& camera)
{
	camera.position = { 5.0f, 0.0f, 0.0f };
	camera.target = { 1.0f, 0.0f, 0.0f };
	camera.up = { 0.0f, 1.0f, 0.0f };
	camera.fovy = 70.0f;
	camera.projection = CAMERA_PERSPECTIVE;
}

void DrawFastViewport(Camera3D& camera, RenderTexture2D& view)
{
	BeginTextureMode(view);
	ClearBackground(WHITE);
	UpdateCamera(&camera, CAMERA_ORBITAL);

	BeginMode3D(camera);
	DrawCube({ 2.0f, 0.0f, 0.0f }, 1.0f, 1.0f, 1.0f, RED);
	if (IsClickedOn) DrawCube({ 2.0f, 0.0f, 0.0f }, 1.0f, 1.0f, 1.0f, BLUE);
	DrawCube({ 0.0f, 0.0f, 0.0f }, 1.0f, 1.0f, 1.0f, NewCubeColor);
	EndMode3D();

	EndTextureMode();
}
