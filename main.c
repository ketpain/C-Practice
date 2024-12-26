#include <stdint.h>
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
    uint8_t board[BOARD_SIZE];
    Board_InitializeBoard(board);
    

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
    */
    return 0;
}
