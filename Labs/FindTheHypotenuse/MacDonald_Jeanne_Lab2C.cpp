//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 6/28/2024
//Lab 2C: Find the Hypotenuuse - The program translates the Pythagorean formula into an expression to find the hypotenuse given the two sides, a and b.

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	string fullName;
	string day;
	string time;
	double a;
	double b;
	double c;

	cout << "Type your full name: ";
	getline(cin, fullName);
	cout << "Enter the day your class meets: ";
	cin >> day;
	cout << "Enter the time your class meets: ";
	cin >> time;
	cout << "Enter a value for side a: ";
	cin >> a;
	cout << "Enter a value for side b: ";
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	cout << "Student Name: " << fullName << endl;
	cout << "Day Class Meets: " << day << endl;
	cout << "Time Class Meets: " << time << endl;
	cout << "Values for the Triangle: " << setw(8) << fixed << setprecision(2) << showpoint << a << setw(8) << fixed << setprecision(2) << showpoint << b << setw(8) 
		<< fixed << setprecision(2) << c << endl;
	return 0;
}