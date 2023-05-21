#pragma once

#include "ChessPiece.h"

class Board
{
	ChessPiece board[8][8];
public:
	void PrintBoard();
	void Place(ChessPiece piece);
};