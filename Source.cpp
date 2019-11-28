// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

#include <iostream>
#include <fstream>
#include <iomanip>
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;

int main(){

	Point p1(4.1, 3.2);
	Point p2(9.3, 4.7);
	Point p3(5.8, 7.3);
	Point p(2.5, 8.4);
	p1.print();
	cout << endl;

	Line line(p1, p2);

	line.print();
	cout << endl;
	
	Triangle triangle(p1, p2, p3);
	triangle.print();
	cout << endl;

	Circle circle(2.9, p);
	circle.print();
	cout << endl;

	ofstream myFile("ShapeData.txt");
	myFile << "Object\t\t Field I\t FieldII\t Field III\t Field IV\t Field V\t Field VI\t Field VII\n";

	myFile << "p1\t\t " << "Point\t\t " << p1.getX() << " " << " \t\t " << p1.getY() << " " << endl;
	myFile << "p2\t\t " << "Point\t\t " << p2.getX() << " " << " \t\t " << p2.getY() << " " << endl;
	myFile << "line\t\t " << "Line\t\t " << line.getPoint1().getX() << " " << " \t\t " << line.getPoint1().getY() << " " << " \t\t " << line.getPoint2().getX() << " " << " \t\t " << line.getPoint2().getY() << " " << endl;
	myFile << "p3\t\t " << "Point\t\t " << p3.getX() << " " << " \t\t " << p3.getY() << " " << endl;
	myFile << "triangle\t " << "Triangle\t " << triangle.getPoint1().getX() << " " << " \t\t " << triangle.getPoint1().getY() << " " << " \t\t " << triangle.getPoint2().getX() << " " << " \t\t " << triangle .getPoint2().getY() << " " << " \t\t " << triangle.getPoint3().getX() << " " << " \t\t " << triangle.getPoint3().getY() << " " << endl;
	myFile << "p\t\t " << "Point\t\t " << p.getX() << " " << " \t\t " << p.getY() << " " << endl;
	myFile << "circle\t\t " << "Circle\t\t " << circle.getPoint().getX() << " " << " \t\t " << circle.getPoint().getY() << " " << " \t\t " << circle.getRadius() << " " << endl;
	myFile.close();

	Shape* ptr;
	ptr = new Shape[20];
	for (int i = 0, i < 20; i++) {
		ptr[i] = nullptr;
	}

	// use switch cases to do final part
	

}