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

void Line::setPoint1(Point pt1) {
	p1 = pt1;
}

void Line::setPoint2(Point pt2) {
	p2 = pt2;
}

void Line::print() {
	cout << "Point 1: \n";
	this->getPoint1().print();
	cout << "Point 2: \n";
	this->getPoint2().print();
}