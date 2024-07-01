//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 6/30/2024
//Assignment 2C: Box Office - This program will calculate a theater’s gross and net box office profit for a night.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string movie;
	double gross, netProfit, amountPaid;
	double adultTickets, childTickets;
	const double adultPrice = 10;
	const double childPrice = 6;
	const double percentProfit = 0.20;
	
	cout << "Enter the name of the movie: ";
	getline(cin,movie);
	cout << "Enter the amount of adult tickets sold: ";
	cin >> adultTickets;
	cout << "Enter the amount of child tickets sold: ";
	cin >> childTickets;

	gross = (adultTickets * adultPrice) + (childTickets * childPrice);
	netProfit = gross * percentProfit;
	amountPaid = gross - netProfit;

	cout << "Movie Name:                 " << movie << endl << endl;
	cout << "Adult Tickets Sold:         " << right << setw(10) << adultTickets << endl << endl;
	cout << "Child Tickets Sold:         " << right << setw(10) << childTickets << endl << endl;
	cout << fixed << setprecision(2);
	cout << "Gross Box Office Profit:    " << right << setw(2) << "$" << setw(9) << gross << endl << endl;
	cout << "Net Box Office Profit:      " << right << setw(2) << "$" << setw(9) << netProfit << endl << endl;
	cout << "Amount Paid to Distributor: " << right << setw(2) << "$" << setw(9) << amountPaid << endl;
	return 0;
}