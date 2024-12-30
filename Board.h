#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>
#include "Piece.h"

#define BOARD_SIZE 25 // 25 bytes * 8 bits = 200 bits

typedef uint8_t Board;

void Board_InitializeBoard(Board *board);
void Board_PrintBoard     (Board *board);
void Board_SetBit         (Board *board, int index);
void Board_ClearBit       (Board *board, int index);
void Board_ToggleBit      (Board *board, int index);
int  Board_GetBit         (Board *board, int index);
void Board_SetPiece(Board *board, CurrentPiece piece);

#endif
