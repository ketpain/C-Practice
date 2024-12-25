#include <stdint.h>

#define ROW 4
#define COL 4
#define NUM_PIECES 7

typedef enum {I, J, L, O, S, Z, T} PieceType;

#define I_PIECE 0b0000111100000000
#define J_PIECE 0b1000111000000000
#define L_PIECE 0b0010111000000000
#define O_PIECE 0b0110011000000000
#define S_PIECE 0b0110110000000000
#define Z_PIECE 0b1100011000000000
#define T_PIECE 0b0100111000000000

uint16_t piece[NUM_PIECES]; // 16 bits to represent the 4x4 grid

void Piece_PrintPiece()
{
    
}

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