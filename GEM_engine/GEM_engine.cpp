#include "Run.h"

int main()
{
	Run run;

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(DARKGRAY);
		run.run();
		EndDrawing();
	}
	
	return 0;
}