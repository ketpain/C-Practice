#include <stdio.h>
#include "Board.h"

void Board_Print(Board board)
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("0%c", board.board[j][i]);
        }
        printf("\n");
    }
}