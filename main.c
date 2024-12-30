#include <raylib.h>
#include <stdio.h>


int screenWidth  = 1920;
int screenHeight = 1080;

int main()
{
    InitWindow(screenWidth, screenHeight, "My Program");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);

        BeginDrawing();

        DrawFPS(0, 0);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
