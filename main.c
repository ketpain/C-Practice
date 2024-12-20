#include <stdio.h>
#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"
#include "Board.h"
#include "Piece.h"

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

    CloseWindow();
    PrintPiece();
    DebugDrawBoard(board);

    FreeBoard(board);
    return 0;
}
