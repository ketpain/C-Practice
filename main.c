#include <stdio.h>
#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"
#include "Board.h"

int screenWidth  = 1920;
int screenHeight = 1080;

int main()
{
    InitWindow(screenWidth, screenHeight, "My Program");
    SetTargetFPS(60);
    Board board = InitializeBoard();

    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);

        BeginDrawing();

        DrawFPS(0, 0);

        EndDrawing();
    }

    FreeBoard(board);
    CloseWindow();

    return 0;
}
