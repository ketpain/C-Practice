#include <raylib.h>
#include <raymath.h>
#include "GameManager.h"
#include <stdlib.h>
#include <stdio.h>

int gridX = {0};
int gridY = {0};
int **grid = {0};

void InitializeBoard()
{
    gridX = 10;
    gridY = 20;
    grid = (int **)malloc(gridX * sizeof(int *));
    int usedMemoryPointers = 8*gridX;

    for (int i = 0; i < gridX; i++)
    {
        grid[i] = (int *)calloc(gridY, sizeof(int));
    }
    int usedMemoryElements = 4*gridX*gridY;

    for (int i = 0; i < gridX; i++)
    {
        for (int j = 0; j < gridY; j++)
        {
            // Print the value of the grid at the current position and the position itself
            printf("X:%d Y:%d = %d\n", i+1, j+1, grid[i][j]);
        }
    }

}