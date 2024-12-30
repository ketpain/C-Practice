#include <stdint.h>
#include <stdio.h>
#include <raylib.h>
#include <raymath.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "GameManager.h"
#include "Board.h"
#include "Piece.h"

int screenWidth  = 1920;
int screenHeight = 1080;

int main()
{
    // Random seed
    srand(time(NULL));
    // Initialize the board and pieces
    Board board[BOARD_SIZE];
    CurrentPiece currentPiece = {0};
    Board_InitializeBoard(board);
    Piece_InitializePieces();
    // Generate a random piece and print it
    currentPiece = Piece_GeneratePiece(currentPiece);
    Piece_PrintPiece(currentPiece);
    // Print the board
    Board_PrintBoard(board);
    // Set a piece
    Board_SetPiece(board, currentPiece);
    // Print the board
    Board_PrintBoard(board);

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
