#include <raylib.h>

// Obecne konstanty
#define SCREEN_WIDTH	940
#define SCREEN_HEIGHT	560
#define TITLE			"My Raylib Program"
#define TARGET_FPS      60
#define BG_COLOR		WHITE
#define SCREEN_CENTER_X (SCREEN_WIDTH / 2)
#define SCREEN_CENTER_Y (SCREEN_HEIGHT / 2)

// Pomocne funkce
Color random_color() {
	const unsigned char r = GetRandomValue(0, 255);
	const unsigned char g = GetRandomValue(0, 255);
	const unsigned char b = GetRandomValue(0, 255);
	return (Color){r, g, b, 255};
}

// Specificke konstanty a promenne
#define MAX_SQUARE_SIZE (SCREEN_HEIGHT * 0.95)
#define MIN_SQUARE_SIZE (SCREEN_HEIGHT * 0.45)
int square_size;
Color square_color;

// Inicializace promennych aplikace
void init_app() {
	SetRandomSeed(GetTime());
	square_size = MIN_SQUARE_SIZE;
	square_color = random_color();

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(TARGET_FPS);
}

// Update promennych aplikace
void update_app() {
	static int delta_square_size = 2.0f;
	square_size += delta_square_size;
	
	if (square_size > MAX_SQUARE_SIZE || square_size < MIN_SQUARE_SIZE) {
		if (square_size > MAX_SQUARE_SIZE) {square_size = MAX_SQUARE_SIZE;}
		else                               {square_size = MIN_SQUARE_SIZE;}
		delta_square_size *= -1;

		square_color = random_color();
	}
}

// Vykresleni na obrazovku
void draw_app() {
	BeginDrawing();
	{
		ClearBackground(BG_COLOR);
		DrawRectangle(SCREEN_CENTER_X - square_size / 2, SCREEN_CENTER_Y - square_size / 2, square_size, square_size, square_color);
	}
	EndDrawing();
}

// Uklid pred koncem aplikace
void close_app() {
    CloseWindow();
}

int main(void)
{
	init_app();
    while (!WindowShouldClose())
    {
		update_app();
		draw_app();	
    }
	close_app();
    return 0;
}
