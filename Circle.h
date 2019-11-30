// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

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
	void setPoint(double, double);
	void print();

private:
	double radius;
	Point p;
};