#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"
#include "Board.h"
#include "Debug.h"

int boardWidth  = 10;
int boardHeight = 20;

Board InitializeBoard()
{
    Board board;
    board.width = boardWidth;
    board.height = boardHeight;
    board.board = calloc(board.height, sizeof(uint16_t)); // Allocate memory for each row

    return board;
}

void DebugDrawBoard(Board board)
{
    for (int i = 0; i < board.height; i++)
    {
        for (int j = 0; j < board.width; j++)
        {
            printf("%d", ((unsigned char)board.board[i] >> (board.width - 1 - j)) & 1);
        }
        printf("\n");
    }
}

void FreeBoard(Board board)
{
    free(board.board);
}
