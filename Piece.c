#include "Piece.h"
#include <stdlib.h>
#include <stdio.h>

#define NUM_PIECES 7

#define I_PIECE 0b0000111100000000
#define J_PIECE 0b1000111000000000
#define L_PIECE 0b0010111000000000
#define O_PIECE 0b0110011000000000
#define S_PIECE 0b0110110000000000
#define Z_PIECE 0b1100011000000000
#define T_PIECE 0b0100111000000000

Piece piece[NUM_PIECES]; // 16 bits to represent the 4x4 grid

void Piece_InitializePieces()
{
    piece[I] = I_PIECE;
    piece[J] = J_PIECE; 
    piece[L] = L_PIECE;
    piece[O] = O_PIECE;
    piece[S] = S_PIECE;
    piece[Z] = Z_PIECE;
    piece[T] = T_PIECE;
}

// Generates a random piece
CurrentPiece Piece_GeneratePiece(CurrentPiece currentPiece)
{
    // Randomly select a piece type
    // TODO: Implement the 7-bag system
    PieceType pieceType = rand() % NUM_PIECES;
    currentPiece.piece = piece[pieceType];
    currentPiece.x = 0;
    currentPiece.y = 0;
    return currentPiece;
}

void Piece_PrintPiece(CurrentPiece piece)
{
    printf("Current Piece:\n");
    for (int i = 15; i >= 0; i--)
    {
        if (piece.piece & (1 << i))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        if (i % 4 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

int Piece_GetBit(CurrentPiece piece, int index)
{
    return (piece.piece >> index) & 1;
}