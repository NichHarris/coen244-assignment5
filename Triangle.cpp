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

void Triangle::setPoint1(Point pt1) {
	p1 = pt1;
}

void Triangle::setPoint2(Point pt2) {
	p2 = pt2;
}

void Triangle::setPoint3(Point pt3) {
	p3 = pt3;
}

void Triangle::print() {
	cout << "Point 1: \n";
	this->getPoint1().print();
	cout << "Point 2: \n";
	this->getPoint2().print();
	cout << "Point 3: \n";
	this->getPoint3().print();
}