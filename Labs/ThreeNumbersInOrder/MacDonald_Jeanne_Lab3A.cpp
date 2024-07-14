//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 7/4/2024
//Lab 3A: Three Numbers in Order - This program will prompt the user to input three integers between 1 and 500, and outputs the numbers smallest to largest.

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;

	cout << "Input three integers between 1 and 500: " << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 < 1 || num1 > 500 || num2 < 1 || num2 > 500 || num3 < 1 || num3 > 500)
	{

		cout << "Invalid input." << endl;
	}
	else
	{
		cout << "Your integers ordered smallest to largest: " << endl;

		if (num1 < num2 && num1 < num3)
		{
			cout << "Low = " << num1 << endl;
			if (num2 < num3)
			{
				cout << "Middle = " << num2 << endl;
				cout << "High = " << num3 << endl;
			}
			else
			{
				cout << "Middle = " << num3 << endl;
				cout << "High = " << num2 << endl;
			}
		}
		else if (num2 < num1 && num2 < num3)
		{
			cout << "Low = " << num2 << endl;
			if (num1 < num3)
			{
				cout << "Middle = " << num1 << endl;
				cout << "High = " << num3 << endl;
			}
			else
			{
				cout << "Middle = " << num3 << endl;
				cout << "High = " << num1 << endl;
			}

		}
		else if (num3 < num1 && num3 < num2)
		{
			cout << "Low = " << num3 << endl;
			if (num1 < num2)
			{
				cout << "Middle = " << num1 << endl;
				cout << "High = " << num2 << endl;
			}
			else
			{
				cout << "Middle = " << num2 << endl;
				cout << "High = " << num1 << endl;
			}
		}
	}
	return 0;
}