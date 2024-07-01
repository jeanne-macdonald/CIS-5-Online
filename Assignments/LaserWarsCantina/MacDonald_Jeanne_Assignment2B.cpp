//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 6/29/2024
//Assignment 2B: Laser Wars Cantina - This program will calculate the total due for a restaurant bill.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double billTotal, tax, tip, total;
	const double taxRate = 0.08;
	const double tipRate = 0.20;

	cout << "Enter the bill total " << endl << endl;
	cin >> billTotal;
	cout << "Welcome to laser wars cantina. Home of that one song." << endl << endl;

	tax = billTotal * taxRate;
	tip = billTotal * tipRate;
	total = billTotal + tax + tip;

	cout << fixed << setprecision(2);
	cout << "Food items ................." << setw(2) << "$" << right << setw(4) << billTotal << endl;
	cout << "Tax 8% ....................." << setw(2) << "$" << right << setw(4) << tax << endl;
	cout << "Tip 20%   .................." << setw(2) << "$" << right << setw(4) << tip << endl << endl;
	cout << "Total                       " << setw(2) << "$" << right << setw(4) << total << endl;
	return 0;
}