#include <iostream>
using namespace std;

int Tax(int grossSalary, double taxRate) {
	 return grossSalary * taxRate;
}

int NetSalary(int grossSalary, int tax, int installment, int insurance) {
	return grossSalary - tax - installment - insurance;
}

string Format() {

}

int main()
{

	struct
	{
		string name;
		int grossSalary;
	} Employee;

	const double TAXRATE = 0.2;
	const int INSTALLMENT = 200000;
	const int INSURANCE = 150000;
	int TAX;
	int finalSalary;

	cout << "Enter a Name: ";
	cin >> Employee.name;
	cout << "Enter a Salary: ";
	cin >> Employee.grossSalary;

	TAX = Tax(Employee.grossSalary, TAXRATE);
	finalSalary = NetSalary(Employee.grossSalary, TAX, INSTALLMENT, INSURANCE);
	
	cout << "Payslip for employee\n";
	cout << "--------------------\n";
	cout << "Name: " << Employee.name;
	cout << "\nGross Salary: Rp" << Employee.grossSalary;
	cout << "\nTax (20%): Rp" << TAX;
	cout << "\nInstallment: Rp" << INSTALLMENT;
	cout << "\nInsurance: Rp" << INSURANCE;
	cout << "\nNet Salary: Rp" << finalSalary;
}
