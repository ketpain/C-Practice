#include "Piece.h"
#include "Board.h"
#include <stdio.h>
#include <stdlib.h>

Piece I_Pieces[4] = {
    {
        .pieceType = PIECE_I,
        .rotation = 0,
        .piece = {
            {0, 0, 0, 0},
            {1, 1, 1, 1},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_I,
        .rotation = 1,
        .piece = {
            {0, 0, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 1, 0}
        }
    },
    {
        .pieceType = PIECE_I,
        .rotation = 2,
        .piece = {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {1, 1, 1, 1},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_I,
        .rotation = 3,
        .piece = {
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0}
        }
    }
};

Piece J_Pieces[4] = {
    {
        .pieceType = PIECE_J,
        .rotation = 0,
        .piece = {
            {1, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_J,
        .rotation = 1,
        .piece = {
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_J,
        .rotation = 2,
        .piece = {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_J,
        .rotation = 3,
        .piece = {
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {0, 0, 0, 0}
        }
    }
};

Piece L_Pieces[4] = {
    {
        .pieceType = PIECE_L,
        .rotation = 0,
        .piece = {
            {0, 0, 1, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_L,
        .rotation = 1,
        .piece = {
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_L,
        .rotation = 2,
        .piece = {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_L,
        .rotation = 3,
        .piece = {
            {1, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    }
};

Piece O_Pieces[1] = {
    {
        .pieceType = PIECE_O,
        .rotation = 0,
        .piece = {
            {0, 1, 1, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    }
};

Piece S_Pieces[4] = {
    {
        .pieceType = PIECE_S,
        .rotation = 0,
        .piece = {
            {0, 1, 1, 0},
            {1, 1, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_S,
        .rotation = 1,
        .piece = {
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 1, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_S,
        .rotation = 2,
        .piece = {
            {0, 0, 0, 0},
            {0, 1, 1, 0},
            {1, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_S,
        .rotation = 3,
        .piece = {
            {1, 0, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    }

};

Piece T_Pieces[4] = {
    {
        .pieceType = PIECE_T,
        .rotation = 0,
        .piece = {
            {0, 1, 0, 0},
            {1, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_T,
        .rotation = 1,
        .piece = {
            {0, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_T,
        .rotation = 2,
        .piece = {
            {0, 0, 0, 0},
            {1, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_T,
        .rotation = 3,
        .piece = {
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    }
};

Piece Z_Pieces[4] = {
    {
        .pieceType = PIECE_Z,
        .rotation = 0,
        .piece = {
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_Z,
        .rotation = 1,
        .piece = {
            {0, 0, 1, 0},
            {0, 1, 1, 0},
            {0, 1, 0, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_Z,
        .rotation = 2,
        .piece = {
            {0, 0, 0, 0},
            {1, 1, 0, 0},
            {0, 1, 1, 0},
            {0, 0, 0, 0}
        }
    },
    {
        .pieceType = PIECE_Z,
        .rotation = 3,
        .piece = {
            {0, 1, 0, 0},
            {1, 1, 0, 0},
            {1, 0, 0, 0},
            {0, 0, 0, 0}
        }
    }
};

void Piece_GeneratePiece(Board *board)
{
    // Generate a random piece
    int randomPiece = rand() % 7;
    Piece piece;
    
    // Select the piece based on the random number and assign it to the piece variable
    // Note: that the piece is assigned to the first rotation of the piece
    switch (randomPiece)
    {
    case 0:
        piece = I_Pieces[0];
        break;
    case 1:
        piece = J_Pieces[0];
        break;
    case 2:
        piece = L_Pieces[0];
        break;
    case 3:
        piece = O_Pieces[0];
        break;
    case 4:
        piece = S_Pieces[0];
        break;
    case 5:
        piece = T_Pieces[0];
        break;
    case 6:
        piece = Z_Pieces[0];
        break;
    default:
        break;
    }

    // Iterate over the board and lay the pieces down
    for (int row = 0; row < 4; row++) 
    {
        for (int col = 0; col < 4; col++) 
        {
            // Check if a piece is already there
            if (board->board[col][row] == 1) 
            {
                printf("Game Over");
                return;
            }
            board->board[col][row] = piece.piece[row][col];  // Note the switched indices
        }
    }
}