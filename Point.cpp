// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

#include "Point.h"
#include <iostream>
using namespace std;


Point::Point() {
	x_coor = 0;
	y_coor = 0;
};

Point::Point(double x, double y) {
	x_coor = x;
	y_coor = y;
}

double Point::getX() {
	return x_coor;
}

void Point::setX(double x) {
	x_coor = x;
}

double Point::getY() {
	return y_coor;
}

void Point::setY(double y) {
	y_coor = y;
}


void Point::print() {
	cout << "x coordinate: " << x_coor << endl;
	cout << "y coordinate: " << y_coor << endl;
}