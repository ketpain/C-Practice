#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

#define BOARD_SIZE 25 // 25 bytes * 8 bits = 200 bits

void Board_InitializeBoard(uint8_t *board);
void Board_PrintBoard(uint8_t *board);
void Board_SetBit(uint8_t *board, int index);
void Board_ClearBit(uint8_t *board, int inedx);
void Board_ToggleBit(uint8_t *board, int index);
int  Board_GetBit(uint8_t *board, int index);

#endif
