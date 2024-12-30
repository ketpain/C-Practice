#ifndef PIECE_H
#define PIECE_H

#include "Board.h"

typedef enum PieceType
{
    PIECE_I,
    PIECE_J,
    PIECE_L,
    PIECE_O,
    PIECE_S,
    PIECE_T,
    PIECE_Z
} PieceType;

typedef struct Piece
{
    PieceType pieceType;
    unsigned char rotation;
    unsigned char piece[4][4];
} Piece;

extern Piece I_Pieces[4];
extern Piece J_Pieces[4];
extern Piece L_Pieces[4];
extern Piece O_Pieces[1];
extern Piece S_Pieces[4];
extern Piece T_Pieces[4];
extern Piece Z_Pieces[4];

void Piece_GeneratePiece(Board *board);

#endif