#include "Point.hpp"
#include "Fixed.hpp"

Fixed crossProduct(Point const& p1, Point const& p2, Point const& p3)
{
	return (p2.getX() - p1.getX()) * (p3.getY() - p1.getY()) - 
			(p2.getY() - p1.getY()) * (p3.getX() - p1.getX());
}

bool bsp(Point const a, Point const b, Point const c, const Point &point)
{
	Fixed cp1 = crossProduct(a, b, point);
	Fixed cp2 = crossProduct(b, c, point);
	Fixed cp3 = crossProduct(c, a, point);

	return (cp1 > 0 && cp2 > 0 && cp3 > 0) || (cp1 < 0 && cp2 < 0 && cp3 < 0);
}
