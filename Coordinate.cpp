#include <iostream>
#include "Coordinate.h"
#include "Log.h"

Coordinate NotationToCoordinate(const char* _notation)
{
	if (strlen(_notation) == 2)
	{
		__int8 _x = _notation[0] - 96;
		__int8 _y = _notation[1] - 48;

		if (0 < _x && _x <= 8 && 0 < _y && _y <= 8)
		{
			return CreateCoordinate(_x, _y);
		}
	}

	ERROR("Invalid Notation");
	return NullCoordinate;
}

Coordinate CreateCoordinate(__int8 _x, __int8 _y)
{
	return Coordinate().Set(_x, _y);
}

Coordinate Coordinate::Set(__int8 _x, __int8 _y)
{
	x = _x;
	y = _y;
	return *this;
}

Coordinate Coordinate::Set(Coordinate _coordinate)
{
	return Set(_coordinate.x, _coordinate.y);
}

void Coordinate::LogBoardName()
{
	LOG((char)(x + 96) << (char)(y + 48));
}

Coordinate Coordinate::Add(__int8 _addX, __int8 _addY)
{
	Coordinate newCoordinate;
	newCoordinate.Set(this->x, this->y);

	newCoordinate.x += _addX;
	newCoordinate.y += _addY;

	return newCoordinate;
}

bool Coordinate::IsValid()
{
	return (0 < (this->x)) && ((this->x) <= 8) && (0 < (this->y)) && ((this->y) <= 8);
}