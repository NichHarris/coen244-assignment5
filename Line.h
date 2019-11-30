// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

#pragma once
#include "Point.h"
#include "Shape.h"


class Line: public Shape{
public:

	Line();
	Line(Point, Point);

	Point getPoint1();
	Point getPoint2();

	void setPoint1(double, double);
	void setPoint2(double, double);
	void print();

private:
	Point p1;
	Point p2;
};
