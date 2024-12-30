#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Board.h"
#include "Piece.h"

#define CELL_SIZE 40

int screenWidth  = 1920;
int screenHeight = 1080;


int main()
{
    srand(time(NULL));
    Board board = {0};
    Board_Print(board);
    printf("\n");
    Piece_GeneratePiece(&board);
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
