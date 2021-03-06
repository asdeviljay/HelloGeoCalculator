// Hello GeoCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


static const double PI = 3.14159;

class Circle {
private :
	double m_radius;

public :
	Circle(double t_radius)
		: m_radius(t_radius)
	{
	}

	double getArea() {
		return PI * m_radius * m_radius;
	}
};

class Oval {
private :
	double m_minRadius;
	double m_maxRadius;

public :
	Oval(double t_minRadius, double t_maxRadius)
		: m_minRadius(t_minRadius), m_maxRadius(t_maxRadius)
	{
	}

	double getArea() {
		return PI * m_minRadius * m_maxRadius;
	}
};

class Triangle {
private :
	double m_base;
	double m_height;

public :
	Triangle(double t_base, double t_height) 
		: m_base(t_base), m_height(t_height)
	{
	}

	double getArea() {
		return (1.0 / 2.0) * m_base * m_height;
	}
};

class Rectangle {
private :
	double m_width;
	double m_length;

public :
	Rectangle(double t_width, double t_length)
		: m_width(t_width), m_length(t_length)
	{
	}

	double getArea() {
		return m_width * m_length;
	}
};

int main()
{
	Circle *circle = nullptr;
	Oval *oval = nullptr;
	Triangle *triangle = nullptr;
	Rectangle *rectangle = nullptr;

	while (true) {
		int type_shape;
		cout << "Geometry Area Calculator" << endl;
		cout << "Enter 1 for calculate area of circle" << endl;
		cout << "Enter 2 for calculate area of oval" << endl;
		cout << "Enter 3 for calculate area of triangle" << endl;
		cout << "Enter 4 for calculate area of rectangle" << endl;
		cout << "Enter 5 for quit the program" << endl;
		cout << "Select your option : ";
		cin >> type_shape;
		cout << endl;

		switch (type_shape) {
		default :
			cout << "Um..." << endl;
			break;

		case 1 :
			double radius;
			cout << "Enter the radius of circle : ";
			cin >> radius;
			circle = new Circle(radius);
			cout << "The area of circle is " << circle->getArea() << endl;
			break;

		case 2 :
			double minRadius, maxRadius;
			cout << "Enter the minimum radius of oval : ";
			cin >> minRadius;
			cout << "Enter the maximum radius of oval : ";
			cin >> maxRadius;
			oval = new Oval(minRadius, maxRadius);
			cout << "The area of oval is " << oval->getArea() << endl;
			break;

		case 3 :
			double base, height;
			cout << "Enter the base of triangle : ";
			cin >> base;
			cout << "Enter the height of triangle : ";
			cin >> height;
			triangle = new Triangle(base, height);
			cout << "The area of triangle is " << triangle->getArea() << endl;
			break;

		case 4 :
			double width, length;
			cout << "Enter the width of rectangle : ";
			cin >> width;
			cout << "Enter the length of rectangle : ";
			cin >> length;
			rectangle = new Rectangle(width, length);
			cout << "The area of rectangle is " << rectangle->getArea() << endl;
			break;

		case 5 :
			cout << "Quitting the program";
			return 0;
		}
		//cout << "Press Enter to use program again";
		system("pause");
		system("CLS");
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
