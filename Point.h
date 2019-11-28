#pragma once
#include "Shape.h"


class Point : public Shape {
public:

	Point();
	Point(double, double);
	void print();

	double getX();
	double getY();

	void setY(double);
	void setX(double);

private:
	double x_coor;
	double y_coor;
};