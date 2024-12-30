#include <stdio.h>
#include "Board.h"

void Board_Print(Board board)
{
    for (int row = 0; row < 20; row++)
    {
        for (int col = 0; col < 10; col++)
        {
            printf("%d", board.board[col][row]);
        }
        printf("\n");
    }
}