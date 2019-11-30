// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

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