#include <raylib.h>
#include <stdio.h>
#include "Board.h"

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 20
#define CELL_SIZE 40

int screenWidth  = 1920;
int screenHeight = 1080;

int main()
{
    Board board = {0};
    Board_Print(board);

    /*
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
    */
}
