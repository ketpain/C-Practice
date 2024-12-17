#include <stdlib.h>
#include <stdio.h>
#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"
#include "Board.h"
#include "Debug.h"

Board InitializeBoard()
{
    Board board;
    board.width = 10;
    board.height = 20;
    board.board = calloc(board.height * sizeof(int*), sizeof(int*));
    for (int i = 0; i < board.height; i++)
    {
        board.board[i] = calloc(board.width * sizeof(int), sizeof(int));
    }

    #if DEBUG == true
    DebugDrawBoard(board);
    #endif

    return board;
}

void DebugDrawBoard(Board board)
{
    for (int i = 0; i < board.height; i++)
    {
        for (int j = 0; j < board.width; j++)
        {
            printf("%d", board.board[i][j]);
        }
        printf("\n");
    }
}

void FreeBoard(Board board)
{

    for (int i = 0; i < board.height; i++)
    {
        free(board.board[i]);
    }
    free(board.board);
    printf("Board freed\n");
}
