#pragma once
#include "Shape.h"
#include "Point.h"

class Circle : public Shape {
public:

	Circle();
	Circle(double, Point);
	
	double getRadius();
	Point getPoint();

	void setRadius(double);
	void setPoint(Point);
	void print();

private:
	double radius;
	Point p;
};