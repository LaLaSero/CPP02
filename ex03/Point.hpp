#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point;

bool bsp(Point const a, Point const b, Point const c, const Point &point);

class Point
{
	public:
		Point();
		Point(const Point &point);
		Point(float const x, float const y);
		~Point();
	

		Fixed getX(void) const;
		Fixed getY(void) const;

	private:
		Fixed const _x;
		Fixed const _y;
};

#endif