// Practice_1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159265358979323846;

	class Circle {
	private:
		double radius;

	public:
		Circle(double rad) : radius(rad) {}

		double area() {
			return PI * radius * radius;
		}
		double circumference() {
			return 2 * PI * radius;
		}
	};

	double radius;

	cout << "Enter a radius: ";
	cin >> radius;

	Circle myobj(radius);

	cout << "Area: " << myobj.area() << endl;
	cout << "Circumference: " << myobj.circumference() << endl;
}
