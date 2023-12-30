#include <raylib.h>

#define FPS 60

int main() {
  int screenWidth = 800, screenHeight = 600;
  Color bg = BLACK;

  InitWindow(screenWidth, screenHeight, "title");
  // HideCursor();
  SetTargetFPS(FPS);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(bg);

    EndDrawing();
  }

  CloseWindow();
}
