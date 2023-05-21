#include "ChessPiece.h"
#include "Log.h"

static __int8 bishopMove[4][2] = { {-1, -1}, {-1, 1}, {1, -1}, {1, 1} };
static __int8 rookMove[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };


std::list<Coordinate> ChessPiece::AbleMoves()
{
	std::list<Coordinate> moves;

	switch (piece)
	{
	case Piece::KING:
		for (__int8 i = 0; i < 4; i++)
		{
			Coordinate newCoordinate;
			newCoordinate.Set(pieceCoordinate.Add(bishopMove[i][0], bishopMove[i][1]));

			if (newCoordinate.IsValid()) moves.push_back(newCoordinate);


			newCoordinate.Set(pieceCoordinate.Add(rookMove[i][0], rookMove[i][1]));

			if (newCoordinate.IsValid()) moves.push_back(newCoordinate);
		}
		break;

	case Piece::QUEEN:
		for (__int8 i = 0; i < 4; i++)
		{
			for (__int8 j = 1; j <= 8; j++)
			{
				Coordinate newCoordinate;
				newCoordinate.Set(pieceCoordinate.Add(j * rookMove[i][0], j * rookMove[i][1]));

				if (newCoordinate.IsValid()) moves.push_back(newCoordinate);
				else break;
			}
		}

		for (__int8 i = 0; i < 4; i++)
		{
			for (__int8 j = 1; j <= 8; j++)
			{
				Coordinate newCoordinate;
				newCoordinate.Set(pieceCoordinate.Add(j * bishopMove[i][0], j * bishopMove[i][1]));

				if (newCoordinate.IsValid()) moves.push_back(newCoordinate);
				else break;
			}
		}
		break;
	
	case Piece::ROOK:
		for (__int8 i = 0; i < 4; i++)
		{
			for (__int8 j = 1; j <= 8; j++)
			{
				Coordinate newCoordinate;
				newCoordinate.Set(pieceCoordinate.Add(j * rookMove[i][0], j * rookMove[i][1]));

				if (newCoordinate.IsValid()) moves.push_back(newCoordinate);
				else break;
			}
		}
		break;

	case Piece::BISHOP:
		for (__int8 i = 0; i < 4; i++)
		{
			for (__int8 j = 1; j <= 8; j++)
			{
				Coordinate newCoordinate;
				newCoordinate.Set(pieceCoordinate.Add(j * bishopMove[i][0], j * bishopMove[i][1]));

				if (newCoordinate.IsValid()) moves.push_back(newCoordinate);
				else break;
			}
		}
		break;

	default:
		break;
	}
	
	return moves;
}

std::string Mark(ChessPiece CPiece)
{
	return std::string(1, (char) CPiece.color) + std::string(1, (char)CPiece.piece);
}
