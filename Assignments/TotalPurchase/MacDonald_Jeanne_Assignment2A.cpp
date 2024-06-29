//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 6/28/2024
//Assignment 2A: Total Purchase - This program accepts input for the prices of five items and displays each item's price, the subtotal of the sale, the amount of sales tax, and total.

#include <iostream>
using namespace std;

int main()
{
	double price1, price2, price3, price4, price5;
	double subtotal;
	double tax;
	double total;
	const double taxRate = 0.07;

	cout << "Enter Price of Item 1: ";
	cin >> price1;
	cout << "Enter Price of Item 2: ";
	cin >> price2;
	cout << "Enter Price of Item 3: ";
	cin >> price3;
	cout << "Enter Price of Item 4: ";
	cin >> price4;
	cout << "Enter Price of Item 5: ";
	cin >> price5;
	
	subtotal = price1 + price2 + price3 + price4 + price5;
	tax = subtotal * taxRate;
	total = subtotal + tax;

	cout << "Price of Item 1: " << price1 << endl;
	cout << "Price of Item 2: " << price2 << endl;
	cout << "Price of Item 3: " << price3 << endl;
	cout << "Price of Item 4: " << price4 << endl;
	cout << "Price of Item 5: " << price5 << endl;
	cout << "Subtotal of Sale: " << subtotal << endl;
	cout << "Amount of Sales Tax: " << tax << endl;
	cout << "Total: " << total << endl;
	return 0;
}