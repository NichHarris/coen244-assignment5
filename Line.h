#pragma once
#include "Point.h"
#include "Shape.h"


class Line: public Shape{
public:

	Line();
	Line(Point, Point);

	Point getPoint1();
	Point getPoint2();

	void setPoint1(Point);
	void setPoint2(Point);
	void print();

private:
	Point p1;
	Point p2;
};
