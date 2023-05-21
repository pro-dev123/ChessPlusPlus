#pragma once

#include <list>
#include "Coordinate.h"
#include <iostream>


enum class Piece : char
{
	KING = 'K', QUEEN = 'Q', ROOK = 'R', BISHOP = 'B', KNIGHT = 'N', PAWN = 'P', NULLPIECE = NULL
};

enum class Color : char
{
	BLACK = 'b', WHITE = 'w'
};

class ChessPiece
{
public:
	Piece piece;

	Color color;
	Coordinate pieceCoordinate;

	std::list<Coordinate> AbleMoves();
};


std::string Mark(ChessPiece _CPiece);
