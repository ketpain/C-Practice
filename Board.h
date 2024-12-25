#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

void Board_InitializeBoard(uint8_t *board);
void Board_PrintBoard();
void Board_SetBit(uint8_t *board, int index);
void Board_ClearBit(uint8_t *board, int index);
void Board_ToggleBit(uint8_t *board, int index);
int  Board_GetBit(uint8_t *board, int index);

#endif
