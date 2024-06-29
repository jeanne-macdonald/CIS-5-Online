//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 6/28/2024
//Lab 2B: Area of a Cookie - The program asks the customer to input four items and displays a message along with the area of the cookie to the user.

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	string fullName;
	int ID;
	string cookie;
	int size;
	const double PI = 3.14159;
	double area, radius;

	cout << "Type your full name: ";
	getline(cin, fullName);
	cout << "Enter your student ID: ";
	cin >> ID;
	cout << "Enter a type of cookie: ";
	cin >> cookie;
	cout << "Enter the size of cookie: ";
	cin >> size;
	
	radius = size / 2;
	area = PI * pow(radius, 2);

	cout << "Student Name: " << fullName << endl;
	cout << "Student ID: " << ID << endl;
	cout << "Cookie Type: " << cookie << endl;
	cout << "Cookie Size: " << size << endl;
	cout << "Area of Cookie: " << setprecision(4) << area << endl;
	return 0;
}