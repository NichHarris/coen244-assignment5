// Name: Vejay Thanamjeyasingam
// Student ID: 40112236
// v-jayy21@hotmail.com

// Nicholas Harris - 40111093
// harris.nicholas1998@gmail.com

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Triangle.h"
#include "Circle.h"
#include <sstream>
using namespace std;

int main(){

	Point p1(4.1, 3.2);
	Point p2(9.3, 4.7);
	Point p3(5.8, 7.3);
	Point p(2.5, 8.4);

	Line line(p1, p2);

	Triangle triangle(p1, p2, p3);

	Circle circle(2.9, p);

	ofstream myFile("ShapeData.txt");

	try {
		if (!myFile.is_open())
		{
			throw "File could not be opened.";
		}

		myFile << "Object\t\t Field I\t FieldII\t Field III\t Field IV\t Field V\t Field VI\t Field VII\n";

		myFile << "p1\t\t " << "Point\t\t " << p1.getX() << " " << " \t\t " << p1.getY() << " " << endl;
		myFile << "p2\t\t " << "Point\t\t " << p2.getX() << " " << " \t\t " << p2.getY() << " " << endl;
		myFile << "line\t\t " << "Line\t\t " << line.getPoint1().getX() << " " << " \t\t " << line.getPoint1().getY() << " " << " \t\t " << line.getPoint2().getX() << " " << " \t\t " << line.getPoint2().getY() << " " << endl;
		myFile << "p3\t\t " << "Point\t\t " << p3.getX() << " " << " \t\t " << p3.getY() << " " << endl;
		myFile << "triangle\t " << "Triangle\t " << triangle.getPoint1().getX() << " " << " \t\t " << triangle.getPoint1().getY() << " " << " \t\t " << triangle.getPoint2().getX() << " " << " \t\t " << triangle.getPoint2().getY() << " " << " \t\t " << triangle.getPoint3().getX() << " " << " \t\t " << triangle.getPoint3().getY() << " " << endl;
		myFile << "p\t\t " << "Point\t\t " << p.getX() << " " << " \t\t " << p.getY() << " " << endl;
		myFile << "circle\t\t " << "Circle\t\t " << circle.getPoint().getX() << " " << " \t\t " << circle.getPoint().getY() << " " << " \t\t " << circle.getRadius() << " " << endl;
		myFile.close();
	}
	
	catch (char* str) {
		cout << "Exception: " << str << endl;
	}

	Shape* ptr[20];
	for (int i = 0; i < 20; i++) {
		ptr[i] = nullptr;
	}

	ifstream fileIn;
	fileIn.open("ShapeData.txt");

	if (!fileIn.is_open()) 
	{
		cout << "file could not be opened." << endl;
		exit(1);
	}

	string word;
	int x = 0;
	double value1 = 0;
	double value2 = 0;
	while (!fileIn.eof()) {
		fileIn >> word;
		if (word == "Point") {
			Point* p = new Point;
	        fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			p->setX(value1);
			p->setY(value2);
			ptr[x] = p;
			x++;
		}
		else if (word == "Line") {
			Line* l = new Line;
			fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			l->setPoint1(value1, value2);
			fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			l->setPoint2(value1, value2);
			ptr[x] = l;
			x++;
		}
		else if (word == "Triangle") {
			Triangle* t = new Triangle;
			fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			t->setPoint1(value1, value2);
			fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			t->setPoint2(value1, value2);
			fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			t->setPoint3(value1, value2);
			ptr[x] = t;
			x++;
		}
		else if (word == "Circle") {
			Circle* c = new Circle;
			fileIn >> word;
			value1 = stod(word);
			fileIn >> word;
			value2 = stod(word);
			c->setPoint(value1, value2);
			fileIn >> word;
			value1 = stod(word);
			c->setRadius(value1);
			ptr[x] = c;
			x++;
		}
	}

	for (int i = 0; i < 20; i++) {
		if (ptr[i] != nullptr) {
			ptr[i]->print();
			cout << endl;
		}
	}

	





}