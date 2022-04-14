#include <math.h>
#include "Point.h"

class Circle
{
	private:
		Point x;
		int radius;

	public:
		Circle()
		{
			x = Point();
			radius = 5;
		}

		Circle(int R)
		{
			x = Point();
			radius = R;
		}

		bool Check(Point A)
		{
			if (A.GetLength(A) <= radius * radius)
				return true;
			else
				return false;
		}
};

