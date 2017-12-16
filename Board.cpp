#include "Board.h"
#include "Soldier.h" 

#define SIZE 8
#define A 97
#define ZERO 48

#define EMPTY_SOLDIER '#'

#define BLACK_KING    'k'
#define BLACK_QUEEN   'q'
#define BLACK_BISHOP  'b'
#define BLACK_ROOK    'r'
#define BLACK_KNIGHT  'n'
#define BLACK_PAWN    'p'

#define WHITE_KING    'K'
#define WHITE_QUEEN   'Q'
#define WHITE_BISHOP  'B'
#define WHITE_ROOK    'R'
#define WHITE_KNIGHT  'N'
#define WHITE_PAWN    'P'

#define WHITE 0
#define BLACK 1


Board::Board(string board)
{

	int i = 0, j = 0;

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			switch (board[(i * SIZE) + j])
			{
			case BLACK_KING:
				_board[i][j] = new King(BLACK, BLACK_KING);
				break;

			case WHITE_KING:
				_board[i][j] = new King(WHITE, WHITE_KING);
				break;

			case BLACK_QUEEN:
				_board[i][j] = new Queen(BLACK, BLACK_QUEEN);
				break;

			case WHITE_QUEEN:
				_board[i][j] = new Queen(WHITE, WHITE_QUEEN);
				break;

			case BLACK_BISHOP:
				_board[i][j] = new Bishop(BLACK, BLACK_BISHOP);
				break;

			case WHITE_BISHOP:
				_board[i][j] = new Bishop(WHITE, WHITE_BISHOP);
				break;

			case BLACK_ROOK:
				_board[i][j] = new Rook(BLACK, BLACK_ROOK);
				break;

			case WHITE_ROOK:
				_board[i][j] = new Rook(WHITE, WHITE_ROOK);
				break;

			case BLACK_KNIGHT:
				_board[i][j] = new Knight(BLACK, BLACK_KNIGHT);
				break;

			case WHITE_KNIGHT:
				_board[i][j] = new Knight(WHITE, WHITE_KNIGHT);
				break;

			case BLACK_PAWN:
				_board[i][j] = new Pawn(BLACK, BLACK_PAWN);
				break;

			case WHITE_PAWN:
				_board[i][j] = new Pawn(WHITE, WHITE_PAWN);
				break;

			case EMPTY_SOLDIER:
				_board[i][j] = nullptr;
				break;
			default:
				break;
			}
		}
	}
}

Board::~Board()
{
	int i = 0, j = 0;

	for (i = 0; i != SIZE; i++)
	{
		for (j = 0; j != SIZE; j++)
		{
			if (!_board[i][j])
			{
				delete _board[i][j];
				_board[i][j] = nullptr;
			}
		}
	}
}

Soldier * Board::getLocation(string location)
{
	int col, row;
	col = (int)location[0] - A;
	row = (int)location[1] - ZERO;

	return _board[row][col];
}

Soldier * Board::operator()(int x, int y)
{
	return _board[x][y];
}
