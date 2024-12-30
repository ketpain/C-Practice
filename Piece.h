#ifndef PIECE_H
#define PIECE_H

#include <stdint.h>

typedef uint16_t Piece;

typedef enum {I, J, L, O, S, Z, T} PieceType;

typedef struct CurrentPiece
{
    uint8_t x;
    uint8_t y;
    uint8_t rotation;
    Piece piece;
} CurrentPiece;

void  Piece_PrintPiece(CurrentPiece piece);
void  Piece_InitializePieces();
CurrentPiece Piece_GeneratePiece(CurrentPiece currentPiece);
int Piece_GetBit(CurrentPiece piece, int index);
#endif
