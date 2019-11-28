#include "Circle.h"
#include <iostream>
using namespace std;


Circle::Circle() {
	radius = 0;
}

Circle::Circle(double r, Point pt) {
	radius = r;
	p = pt;
}

double Circle::getRadius() {
	return radius;
}

Point Circle::getPoint() {
	return p;
}

void Circle::setRadius(double r) {
	radius = r;
}

void Circle::setPoint(Point pt) {
	p = pt;
}

void Circle::print() {
	cout << "Point: \n";
	this->getPoint().print();
	cout << "Radius of the circle: " << radius << endl;
}