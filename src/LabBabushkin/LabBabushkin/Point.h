#pragma once

#include <math.h>
class Point
{

	private:
	int x;
	int y;

	public:
	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}

	static double GetLength(Point A)
	{
		return (A.x*A.x) + (A.y*A.y);
	}
};

