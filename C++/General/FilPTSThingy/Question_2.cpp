// Question_2.cpp : This file contains the 'main' function. Program execution begins and ends there.

// This code is actually so bad .-.
// if I could figure out how to make the objects accessible through a function,
// this code would be much cleaner
// 
// I still have no idea how you are supposed to do Q1 and Q2 in just 2 hours w/ paper no less

#include <iostream>
#include <string>
using namespace std;

int main()
{
	class Item {
	public:
		string name;
		int price;
		int stock;
		Item(string a, int b, int c) {
			name = a;
			price = b;
			stock = c;
		}

		string getName() {
			return name;
		}

		int getPrice() {
			return price;
		}

		int getStock() {
			return stock;
		}
	};

	Item objA("A", 200, 5);
	Item objB("B", 400, 6);
	Item objC("C", 300, 4);
	Item objD("D", 500, 6);
	Item objE("E", 300, 3);
	Item objF("F", 200, 5);
	Item objG("G", 600, 4);
	Item objH("H", 400, 6);
	Item objI("I", 500, 7);
	int totalPrice = 0;

	for (int i = 0; i < 1; i) {
		char yn;
		char selectedItem;
		int purchaseAmnt;

		cout << "\n///////////////////////////////////////////" << endl;
		cout << "Available Items: " << endl;
		cout << objA.getName() << " | Price: " << objA.getPrice() << " | Stock: " << objA.getStock() << endl;
		cout << objB.getName() << " | Price: " << objB.getPrice() << " | Stock: " << objB.getStock() << endl;
		cout << objC.getName() << " | Price: " << objC.getPrice() << " | Stock: " << objC.getStock() << endl;
		cout << objD.getName() << " | Price: " << objD.getPrice() << " | Stock: " << objD.getStock() << endl;
		cout << objE.getName() << " | Price: " << objE.getPrice() << " | Stock: " << objE.getStock() << endl;
		cout << objF.getName() << " | Price: " << objF.getPrice() << " | Stock: " << objF.getStock() << endl;
		cout << objG.getName() << " | Price: " << objG.getPrice() << " | Stock: " << objG.getStock() << endl;
		cout << objH.getName() << " | Price: " << objH.getPrice() << " | Stock: " << objH.getStock() << endl;
		cout << objI.getName() << " | Price: " << objI.getPrice() << " | Stock: " << objI.getStock() << endl;
		cout << "\n(Only A and B works cause I'm lazy)" << endl;
		cout << "///////////////////////////////////////////" << endl;

		cout << "Would you like to continue? (y/n)" << endl;
		cin >> yn;
		switch (yn) {
		case 'y':
			cout << "What would you like to buy? (case sensitive)" << endl;
			cin >> selectedItem;
			switch (selectedItem) {
			case 'A':
				cout << "How much do you want to buy?" << endl;
				cin >> purchaseAmnt;

				if (purchaseAmnt <= objA.stock) {
					if (objA.getStock() > 0) {
						cout << "Adding A to shopping cart" << endl;
						totalPrice = totalPrice + objA.getPrice() * purchaseAmnt;
						objA.stock = objA.getStock() - 1 * purchaseAmnt;
					}
					else {
						cout << "Item is sold out!" << endl;
					}
				}
				else {
					cout << "Not enough stock!" << endl;
				}
				break;
			case 'B':
				cout << "How much do you want to buy?" << endl;
				cin >> purchaseAmnt;

				if (purchaseAmnt <= objB.stock) {
					if (objB.getStock() > 0) {
						cout << "Adding B to shopping cart" << endl;
						totalPrice = totalPrice + objB.getPrice() * purchaseAmnt;
						objB.stock = objB.getStock() - 1 * purchaseAmnt;
					}
					else {
						cout << "Item is sold out!" << endl;
					}
				}
				else {
					cout << "Not enough stock!" << endl;
				}
			}
			break;
			// repeat this until you get all the items, I'm too lazy
		case 'n':
			i = 1;
			cout << "Total price: " << totalPrice;
			break;
		default:
			cout << "Unknown Error";
			i = 1;
		}
	}
}