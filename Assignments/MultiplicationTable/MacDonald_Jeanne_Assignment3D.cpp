//Jeanne MacDonald
//CIS-5 Online
//Date: 7/5/2024
//Assignment 3D: Multiplication Table - This program will present a 10 x 10  grid of times tables as a cheat sheet for the students to learn multiplication.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j;
	
	cout << "        " << 1;

	for (i = 2; i <= 10; i++)
	{
		cout << "    " << i;
	}
	cout << endl;
	cout << "      ____";
	for (i = 2; i <= 10; i++)
	{
		cout << "_____";
	}
	cout << endl;
	for (i = 1; i <= 10; i++)
	{
		cout << setw(2) << i << "   |";
		for (j = 1; j <= 10; j++)
		{
			cout << setw(4) << j * i << "|";
		}
		cout << endl;
		cout << "     _____";
		for (j = 2; j <= 9; j++)
		{
			cout << "_____";
		}
		cout << "_____";
		cout << endl;
	}
	return 0;
}