#include "../raylib/include/raylib.h"

#define SCREEN_WIDTH	940
#define SCREEN_HEIGHT	560
#define TITLE			"My Raylib Program"
#define TARGET_FPS      60
#define BG_COLOR		WHITE
#define SCREEN_CENTER_X (SCREEN_WIDTH / 2)
#define SCREEN_CENTER_Y (SCREEN_HEIGHT / 2)

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(TARGET_FPS);

    while (!WindowShouldClose())
    {
		BeginDrawing();
		{
			ClearBackground(BG_COLOR);
		}
		EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
