#include <raylib.h>
#include <time.h>

#define SCREEN_WIDTH	940
#define SCREEN_HEIGHT	560
#define TITLE			"My Raylib Program"
#define TARGET_FPS      60
#define BG_COLOR		WHITE
#define SCREEN_CENTER_X (SCREEN_WIDTH / 2)
#define SCREEN_CENTER_Y (SCREEN_HEIGHT / 2)

Color random_color() {
	Color color;
	color.r = GetRandomValue(0, 255);
	color.g = GetRandomValue(0, 255);
	color.b = GetRandomValue(0, 255);
	color.a = 255;
	return color;
}

int main(void)
{
	// init app
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(TARGET_FPS);
    SetRandomSeed(time(NULL));

	const int SIDE_MAX = SCREEN_HEIGHT * 0.95;
	const int SIDE_MIN = SCREEN_HEIGHT * 0.25;
	float delta_side = 0.8f;
	float side_length = SIDE_MIN;
	Color color = random_color();

    while (!WindowShouldClose())
    {
    	// update app
		side_length += delta_side;
		if (side_length >= SIDE_MAX || side_length <= SIDE_MIN) {
			delta_side *= -1;
			color = random_color();
		}

    	// draw app
		BeginDrawing();
		{
			ClearBackground(BG_COLOR);
			DrawRectangle(
				SCREEN_CENTER_X - side_length / 2,
				SCREEN_CENTER_Y - side_length / 2,
				side_length,
				side_length,
				color
			);
		}
		EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
