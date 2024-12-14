#include <stdio.h>
#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"

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

    InitializeBoard();

    return 0;
}
