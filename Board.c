#include <stdio.h>
#include <stdint.h>
#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"
#include "Board.h"
#include "Debug.h"

#define BOARD_SIZE 200

uint8_t board[BOARD_SIZE / 8]; // 200 bits to represent the 10x20 grid

// Function to initialize the board to all zeros
void Board_InitializeBoard(uint8_t *board)
{
    for (int i = 0; i < 25; i++)
    {
        board[i] = 0;
    }
}

// Function to set a specific bit in the board array
// @param index: There are 200 bits in the board array, so index should be between 0 and 199
void Board_SetBit(uint8_t *board, int index)
{
    // Calculate which byte the bit is in and set the specific bit within that byte
    board[index / 8] |= (1 << (index % 8));
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // 1 << (index % 8): Creates a mask with a 1 at the position of the bit within the byte
    // |=: Sets the bit to 1 using bitwise OR
}

// Function to clear a specific bit in the board array
void Board_ClearBit(uint8_t *board, int index)
{
    // Calculate which byte the bit is in and clear the specific bit within that byte
    board[index / 8] &= ~(1 << (index % 8));
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // 1 << (index % 8): Creates a mask with a 1 at the position of the bit within the byte
    // ~: Inverts the mask to have 0 at the bit position and 1s elsewhere
    // &=: Clears the bit to 0 using bitwise AND with the inverted mask
}

void Board_ToggleBit(uint8_t *board, int index)
{
    // Calculate which byte the bit is in and toggle the specific bit within that byte
    board[index / 8] ^= (1 << (index % 8));
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // 1 << (index % 8): Creates a mask with a 1 at the position of the bit within the byte
    // ^=: Toggles the bit using bitwise XOR
}

// Function to get the value of a specific bit in the board array
int Board_GetBit(uint8_t *board, int index)
{
    // Calculate which byte the bit is in and get the value of the specific bit within that byte
    return (board[index / 8] >> (index % 8)) & 1;
    // Explanation:
    // index / 8: Finds the byte in the array (since each byte is 8 bits)
    // >> (index % 8): Shifts the byte to the right to bring the bit to the least significant position
    // & 1: Masks all bits except the least significant bit to get the value of the specific bit
}

void Board_PrintBoard()
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
}