#include <stdint.h>

typedef struct Board{
    int width;
    int height;
    uint16_t* board; // Each row is represented by a 16-bit integer
} Board;

void DebugDrawBoard(Board board);
void FreeBoard(Board board);
Board InitializeBoard();