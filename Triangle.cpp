// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

#include "Triangle.h"
#include <iostream>
using namespace std;



Triangle::Triangle(){}

Triangle::Triangle(Point pt1, Point pt2, Point pt3) {
	p1 = pt1;
	p2 = pt2;
	p3 = pt3;
}

Point Triangle::getPoint1() {
	return p1;
}

Point Triangle::getPoint2() {
	return p2;
}

Point Triangle::getPoint3() {
	return p3;
}

void Triangle::setPoint1(double x, double y) {
	p1.setX(x);
	p1.setY(y);
}

void Triangle::setPoint2(double x, double y) {
	p2.setX(x);
	p2.setY(y);
}

void Triangle::setPoint3(double x, double y) {
	p3.setX(x);
	p3.setY(y);
}

void Triangle::print() {
	cout << "Point 1: \n";
	this->getPoint1().print();
	cout << "Point 2: \n";
	this->getPoint2().print();
	cout << "Point 3: \n";
	this->getPoint3().print();
}