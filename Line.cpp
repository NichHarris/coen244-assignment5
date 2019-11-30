// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

#include "Line.h"
#include <iostream>
using namespace std;


Line::Line() {}

Line::Line(Point pt1, Point pt2) {
	p1 = pt1;
	p2 = pt2;
}

Point Line::getPoint1() {
	return p1;
}

Point Line::getPoint2() {
	return p2;
}

void Line::setPoint1(double x, double y) {
	p1.setX(x);
	p1.setY(y);
}

void Line::setPoint2(double x, double y) {
	p2.setX(x);
	p2.setY(y);
}

void Line::print() {
	cout << "Point 1: \n";
	this->getPoint1().print();
	cout << "Point 2: \n";
	this->getPoint2().print();
}