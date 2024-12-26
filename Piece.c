#include "Piece.h"

#define NUM_PIECES 7

typedef enum {I, J, L, O, S, Z, T} PieceType;

#define I_PIECE 0b00001111
#define J_PIECE 0b10001110
#define L_PIECE 0b00101110
#define O_PIECE 0b01100110
#define S_PIECE 0b01101100
#define Z_PIECE 0b11000110
#define T_PIECE 0b01001110

uint16_t piece[NUM_PIECES]; // 16 bits to represent the 4x4 grid

void Piece_InitializePiece()
{
    piece[I] = I_PIECE;
    piece[J] = J_PIECE;
    piece[L] = L_PIECE;
    piece[O] = O_PIECE;
    piece[S] = S_PIECE;
    piece[Z] = Z_PIECE;
    piece[T] = T_PIECE;
}

// Set the bit at the specified index in the piece
void Piece_SetPiece()
{
    
}