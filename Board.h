typedef struct Board
{
    char width;
    char height;
    char **board;
} Board;

void DebugDrawBoard(Board board);
void FreeBoard(Board board);
Board InitializeBoard();
