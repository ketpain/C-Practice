#include <stdint.h>
#include <stdio.h>

#define ROW 4
#define COL 4

typedef enum {I, J, L, O, S, Z, T} PieceType;

#define I_PIECE 0b0000000011110000
#define J_PIECE 0b0000000001110001
#define L_PIECE 0b0000000001110100
#define O_PIECE 0b0000000001100110
#define S_PIECE 0b0000000000110110
#define Z_PIECE 0b0000000001100011
#define T_PIECE 0b0000000001110010

typedef struct Piece
{
    uint16_t piece; // 16 bits to represent the 4x4 grid
} Piece;

void PrintPiece()
{
    Piece pieces[7] =
    {
        {I_PIECE},
        {J_PIECE},
        {L_PIECE},
        {O_PIECE},
        {S_PIECE},
        {Z_PIECE},
        {T_PIECE}
    };

    printf("I\n");
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

    printf("J\n");
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

    printf("L\n");
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

    printf("O\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[O].piece & (1 << (i * COL + j)))
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

    printf("S\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[S].piece & (1 << (i * COL + j)))
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

    printf("Z\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[Z].piece & (1 << (i * COL + j)))
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

    printf("T\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            if (pieces[T].piece & (1 << (i * COL + j)))
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