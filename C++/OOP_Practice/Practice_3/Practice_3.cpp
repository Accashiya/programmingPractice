// Practice_3.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;


int main()
{
	class Person {
	private:
		string name;
		string origin;
		int age;
	public:
		Person(string NAME, string ORIGIN, int AGE) {
			name = NAME;
			origin = ORIGIN;
			age = AGE;
		}

		string getName() {
			return name;
		}
		string getOrigin() {
			return origin;
		}
		int getAge() {
			return age;
		}
	};

	Person myObj1("Bob", "UK", 22);
	Person myObj2("Rick", "UK", 40);

	cout << "Name: " << myObj1.getName() << "\nOrigin: " << myObj1.getOrigin() << "\nAge: " << myObj1.getAge() << endl;
	cout << "Name: " << myObj2.getName() << "\nOrigin: " << myObj2.getOrigin() << "\nAge: " << myObj2.getAge() << endl;

	// Prob can make the above stuff more cleaner w/ functions but I'm too lazy
}
