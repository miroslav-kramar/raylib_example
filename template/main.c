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

// Specificke konstanty a promenne
#define MAX_SQUARE_SIZE (SCREEN_HEIGHT * 0.95)
#define MIN_SQUARE_SIZE (SCREEN_HEIGHT * 0.45)
int square_size;
Color square_color;

// Inicializace promennych aplikace
void init_app() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, TITLE);
    SetTargetFPS(TARGET_FPS);
}

// Update promennych aplikace
void update_app() {

}

// Vykresleni na obrazovku
void draw_app() {
	BeginDrawing();
	{
		ClearBackground(BG_COLOR);
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
