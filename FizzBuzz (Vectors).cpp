#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	int maxNumber = 100;
	int initialNumber = 1;

	vector<string> list{};

	for (int i = 0; i < 100; i++) {
		if (i % 15 == 0) {
			list.push_back("FizzBuzz");
		}
		else if (i % 3 == 0) {
			list.push_back("Fizz");
		}
		else if (i % 5 == 0) {
			list.push_back("Buzz");
		}
		else {
			list.push_back(to_string(i));
		}
	}

	for (string number : list) {
		cout << number << "\n";
	}
}