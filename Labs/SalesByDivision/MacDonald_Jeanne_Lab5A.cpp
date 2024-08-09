//Jeanne MacDonald
//CIS-5 Online
//Date: 7/18/2024
//Lab 5A: Sales By Division - This program prompts the user to input sales for each division for each 
//							  quarter and provides a grand total for all sales and a total for each quarter.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int NUM_DIVS = 3;
	const int NUM_QRTS = 4;
	double sales[NUM_DIVS][NUM_QRTS];
	double divSales[NUM_DIVS];
	double totalSales = 0;

	cout << "This program will calculate the division sales and " << endl;
	cout << "total sales of all the company's divisions." << endl;
	cout << "Enter the sales information: " << endl << endl;

	for (int i = 0; i < NUM_DIVS; i++)
	{
		divSales[i] = 0;
		for (int j = 0; j < NUM_QRTS; j++)
		{
			cout << "Division " << i + 1 << ", Quarter " << j + 1 << ":  $";
			cin >> sales[i][j];

			divSales[i] += sales[i][j];
			totalSales += sales[i][j];
		}
		cout << endl;
	}

	cout << fixed << setprecision(2) << endl;
	cout << "Division 1 sales for the company are: " << "$" << divSales[0] << endl;
	cout << "Division 2 sales for the company are: " << "$" << divSales[1] << endl;
	cout << "Division 3 sales for the company are: " << "$" << divSales[2] << endl;
	cout << "The total sales for the company are:  " << "$" << totalSales << endl;

	return 0;
}