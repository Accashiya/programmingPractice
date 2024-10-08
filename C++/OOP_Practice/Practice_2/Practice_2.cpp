// Practice_2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	class Rectangle {
	private:
		int width;
		int length;
	public:
		Rectangle(int x, int y) {
			width = x;
			length = y;
		}

		int area() {
			return width * length;
		}
		int perimeter() {
			return (2 * width) + (2 * length);
		}
	};

	int width;
	int length;

	cout << "Enter a width: ";
	cin >> width;
	cout << "\nEnter a Length: ";
	cin >> length;

	Rectangle myobj(width, length);

	cout << "\nArea: " << myobj.area() << endl;
	cout << "Perimeter: " << myobj.perimeter();
}
