#include <stdint.h>
#include <stdio.h>

#define ROW 4
#define COL 4

typedef enum {I, J, L, O, S, T, Z} PieceType;

#define I_PIECE 0b0000000011110000
#define J_PIECE 0b0000000011101000
#define L_PIECE 0b0000000010001110
#define O_PIECE 0b0000000001100110
#define S_PIECE 0b0000000011000110
#define Z_PIECE 0b0000000001101100
#define T_PIECE 0b0000000011100100

typedef struct Piece
{
    uint16_t piece; // 16 bits to represent the 4x4 grid
} Piece;

void PrintPiece()
{
    Piece pieces[7] = {
        {I_PIECE},
        {J_PIECE},
        {L_PIECE},
        {O_PIECE},
        {S_PIECE},
        {T_PIECE},
        {Z_PIECE}
    };

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[I].piece & (1 << (i * COL + j)))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[J].piece & (1 << (i * COL + j)))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[L].piece & (1 << (i * COL + j)))
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}