// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

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

void Circle::setPoint(double x, double y) {
	p.setX(x);
	p.setY(y);
}

void Circle::print() {
	cout << "Point: \n";
	this->getPoint().print();
	cout << "Radius of the circle: " << radius << endl;
}