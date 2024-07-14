//Jeanne MacDonald
//CIS-5 Online
//Date: 7/6/2024
//Assignment 3A: Restaurant Menu - This program will create a restaurant menu that allows customer's to order options with prices listed.

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	const string ITEM1 = "Grilled Cheese";
	const string ITEM2 = "French Fries";
	const string ITEM3 = "Hot Dog";
	const string ITEM4 = "Cheeseburger";
	string selection, ADD_ON_ALL, no;
	string ADD_ON1 = "Bacon";
	string ADD_ON2 = "Tomato";
	string ADD_ON3 = "Avocado";
	const double COST_ITEM1 = 16;
	const double COST_ITEM2 = 8;
	const double COST_ITEM3 = 10;
	const double COST_ITEM4 = 20;
	const double COST_ADD_ON = 4;
	const double COST_ADD_ON_ALL = 12;
	char choice;
	const string ERROR = "Invalid choice. Please choose a given option.";
	const string QUIT_1 = "Thank you for choosing Chich Eats Diner! Please come back again soon! \n\n";

	cout << "\n\n Hello! Welcome to Chic Eats Diner!" << endl << "A Taste of Home." << endl;
	cout << endl << "What would you like to have from the menu?" << endl;
	cout << "1. " << ITEM1 << endl;
	cout << "2. " << ITEM2 << endl;
	cout << "3. " << ITEM3 << endl;
	cout << "4. " << ITEM4 << endl;
	cin >> choice;

	switch (choice)
	{
	case '1':
		no = "no";
		ADD_ON_ALL = "yes";
		cout << "You have chosen a Grilled Cheese." << endl;
		cout << endl << "The cost is " << "$" << COST_ITEM1 << endl;
		cout << endl << "Would you like to add Bacon, Tomato, or Avocado?" << endl;
		cin >> selection;

		if (selection == ADD_ON_ALL)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM1 + COST_ADD_ON_ALL) << endl;
		}
		else if (selection == ADD_ON1 || selection == ADD_ON2 || selection == ADD_ON3)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM1 + COST_ADD_ON) << endl;
		}
		else if (selection == no)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour total for everything is " << setw(2) << "$" << right << setw(4) << COST_ITEM1 << endl;
 		}
		break;
	case '2':
		no = "no";
		ADD_ON_ALL = "yes";
		cout << "You have chosen French Fries." << endl;
		cout << endl << "The cost is " << "$" << COST_ITEM2 << endl;
		cout << endl << "Would you like to add Bacon, Tomato, or Avocado?" << endl;
		cin >> selection;

		if (selection == ADD_ON_ALL)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM2 + COST_ADD_ON_ALL) << endl;
		}
		else if (selection == ADD_ON1 || selection == ADD_ON2 || selection == ADD_ON3)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM2 + COST_ADD_ON) << endl;
		}
		else if (selection == no)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour total for everything is " << setw(2) << "$" << right << setw(4) << COST_ITEM2 << endl;
		}
		break;
	case '3':
		no = "no";
		ADD_ON_ALL = "yes";
		cout << "You have chosen a Hot Dog." << endl;
		cout << endl << "The cost is " << "$" << COST_ITEM3 << endl;
		cout << endl << "Would you like to add Bacon, Tomato, or Avocado?" << endl;
		cin >> selection;

		if (selection == ADD_ON_ALL)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM3 + COST_ADD_ON_ALL) << endl;
		}
		else if (selection == ADD_ON1 || selection == ADD_ON2 || selection == ADD_ON3)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM3 + COST_ADD_ON) << endl;
		}
		else if (selection == no)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour total for everything is " << setw(2) << "$" << right << setw(4) << COST_ITEM3 << endl;
		}
		break;
	case '4':
		no = "no";
		ADD_ON_ALL = "yes";
		cout << "You have chosen a Cheeseburger." << endl;
		cout << endl << "The cost is " << "$" << COST_ITEM4 << endl;
		cout << endl << "Would you like to add Bacon, Tomato, or Avocado?" << endl;
		cin >> selection;

		if (selection == ADD_ON_ALL)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM4 + COST_ADD_ON_ALL) << endl;
		}
		else if (selection == ADD_ON1 || selection == ADD_ON2 || selection == ADD_ON3)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour new total for everything is " << setw(2) << "$" << right << setw(4) << (COST_ITEM4 + COST_ADD_ON) << endl;
		}
		else if (selection == no)
		{
			cout << fixed << setprecision(2);
			cout << "\nYour total for everything is " << setw(2) << "$" << right << setw(4) << COST_ITEM4 << endl;
		}
		break;
	default:
		cout << ERROR << endl;
		break;
	}
	cout << QUIT_1 << endl;
	return 0;
}