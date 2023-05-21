#include <iostream>

#include "ChessPiece.h"
#include "Coordinate.h"
#include "Log.h"

int main()
{
	ChessPiece my_piece;
	my_piece.piece = Piece::QUEEN;
	my_piece.pieceCoordinate = NotationToCoordinate("d4");

	LOG("QUEEN: ");
	my_piece.pieceCoordinate.LogBoardName();

	LOG("");

	LOG("QUEEN: ");

	for (Coordinate var : my_piece.AbleMoves())
	{
		var.LogBoardName();
	}

	std::cin.get();

	return 0;
}