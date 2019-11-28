#pragma once
#include "Shape.h"
#include "Point.h"


class Triangle : public Shape {
public:
	Triangle();
	Triangle(Point, Point, Point);

	Point getPoint1();
	Point getPoint2();
	Point getPoint3();

	void setPoint1(Point);
	void setPoint2(Point);
	void setPoint3(Point);
	void print();

private:
	Point p1;
	Point p2;
	Point p3;
};