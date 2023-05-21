#include <iostream>
#include "Board.h"

void Board::PrintBoard()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			std::cout << Mark(board[i][j]) << " ";
		}
		std::cout << std::endl;
	}
}

void Board::Place(ChessPiece piece)
{
	board[piece.pieceCoordinate.x][piece.pieceCoordinate.y] = piece;
}