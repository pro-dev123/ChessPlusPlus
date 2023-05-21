#pragma once

#ifndef _COORDINATE_H
#define _COORDINATE_H

#define NullCoordinate Coordinate { }

class Coordinate
{
public:
	__int8 x, y;


	Coordinate Set(__int8 _x, __int8 _y);
	Coordinate Set(Coordinate _coordinate);

	void LogBoardName();
	Coordinate Add(__int8 _addX, __int8 _addY);
	bool IsValid();
};

Coordinate CreateCoordinate(__int8 _x, __int8 _y);
Coordinate NotationToCoordinate(const char* _notation);

#endif // !_COORDINATE_H