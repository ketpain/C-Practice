#include <stdio.h>
#include "Board.h"
#include "Piece.h"

// Function to initialize the board to all zeros
void Board_InitializeBoard(Board *board)
{
    for (int i = 0; i < 25; i++)
    {
        board[i] = 0;
    }
}

// Function to set a specific bit in the board array
// @param index: There are 200 bits in the board array, so index should be between 0 and 199
void Board_SetBit(Board *board, int index)
{
    // Calculate which byte the bit is in and set the specific bit within that byte
    board[index / 8] |= (1 << (index % 8));
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // 1 << (index % 8): Creates a mask with a 1 at the position of the bit within the byte
    // |=: Sets the bit to 1 using bitwise OR
}

// Function to clear a specific bit in the board array
// @param index: There are 200 bits in the board array, so index should be between 0 and 199
void Board_ClearBit(Board *board, int index)
{
    // Calculate which byte the bit is in and clear the specific bit within that byte
    board[index / 8] &= ~(1 << (index % 8));
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // 1 << (index % 8): Creates a mask with a 1 at the position of the bit within the byte
    // ~: Inverts the mask to have 0 at the bit position and 1s elsewhere
    // &=: Clears the bit to 0 using bitwise AND with the inverted mask
}

// Function to toggle a specific bit in the board array
// @param index: There are 200 bits in the board array, so index should be between 0 and 199
void Board_ToggleBit(Board *board, int index)
{
    // Calculate which byte the bit is in and toggle the specific bit within that byte
    board[index / 8] ^= (1 << (index % 8));
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // 1 << (index % 8): Creates a mask with a 1 at the position of the bit within the byte
    // ^=: Toggles the bit using bitwise XOR
}

// Function to get the value of a specific bit in the board array
// @param index: There are 200 bits in the board array, so index should be between 0 and 199
int Board_GetBit(Board *board, int index)
{
    // Calculate which byte the bit is in and get the value of the specific bit within that byte
    return (board[index / 8] >> (index % 8)) & 1;
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // >> (index % 8): Shifts the byte to the right to bring the bit to the least significant position
    // & 1: Masks all bits except the least significant bit to get the value of the specific bit
}

void Board_PrintBoard(Board *board)
{
    for (int row = 0; row < 20; row++) // 20 rows
    {
        for (int col = 0; col < 10; col++) // 10 columns
        {
            int index = row * 10 + col; // Calculate the bit index
            printf("%d", Board_GetBit(board, index)); // Print the bit
        }
        printf("\n"); // Newline after each row
    }
    printf("\n"); // Extra newline at the end
}

void Board_SetPiece(Board *board, CurrentPiece piece)
{
    // Check to see if there is existing blocks in the way
    // If there is, then we lose
    // Piece starts at x = 4 and ends at x = 6 or 7
    // Piece starts at y = 0 and ends at y = 2
    // TODO: This is very unfinished
    for (char i = 4; i < 7; i++) 
    {
        for (char j = 0; j < 3; j++)
        {
            if (Board_GetBit(board, (piece.y + j) * 10 + piece.x + i))
            {
                printf("Game Over\n");
                return;
            }
        }
    }
    // Set the piece on the board
    for (char i = 4; i < 7; i++) 
    {
        for (char j = 0; j < 3; j++)
        {
            if (Piece_GetBit(piece, j * 4 + i - 4))
            {
                Board_SetBit(board, (piece.y + j) * 10 + piece.x + i);
            }
        }
    }
}