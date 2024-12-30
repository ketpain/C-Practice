#ifndef BOARD_H
#define BOARD_H

typedef struct Board
{
    unsigned char board[10][20];
} Board;

void Board_Print(Board board);

#endif
