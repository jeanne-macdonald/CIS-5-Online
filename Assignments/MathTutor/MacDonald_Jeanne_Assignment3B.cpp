//Jeanne MacDonald
//CIS-5 Online
//Date: 7/5/2024
//Assignment 3B: Math Tutor - This program will create a simple math tutor program to help young students learn addition, subtraction, and multiplication.

#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	int num1, num2, result, answer, min, max;
	char choice;
	string fullName;
	const string ERROR = "Invalid choice. Please choose a given option.";
	const string QUIT_1 = "Thank you, ",
		QUIT_2 = ", for using this program! Please use it again if you need more practice!\n\n";

	srand(time(NULL));

	cout << "Please enter your name." << endl;
	getline(cin, fullName);
	cout << "\n\nWelcome, " << fullName << " to Math Tutor!" << endl << "I will help you test your simple addition, "
		"subtraction, or multiplication skills." << endl;

	cout << endl << "Which do you wish to practice?" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Quit" << endl;
	cin >> choice;

	switch (choice)
	{
		case '1':
			min = 100,	max = 999;
			num1 = (rand() % (max - min + 1)) + min;
			min = 10, max = 99;
			num2 = (rand() % (max - min + 1)) + min;
			result = num1 + num2;

			cout << "You have chosen Addition." << endl;
			cout << endl << "Input your answer." << endl;
			cout << setw(5) << num1 << endl;
			cout << "+  " << num2 << endl;
			cout << "______" << endl;
			cin >> answer;

			if (answer == result)
			{
				cout << "\nExcellent, " << fullName << "! You are correct. \n\n";
			}
			else if (answer != result)
			{
				cout << "\nNope. That's not correct, " << fullName << ". The correct answer is " << result << "."
					"\n Review your notes and try again." << endl << endl;
			}
			break;
		case '2':
			min = 10, max = 99;
			num1 = (rand() % (max - min + 1)) + min;
			min = 1, max = 9;
			num2 = (rand() % (max - min + 1)) + min;
			result = num1 - num2;

			cout << "You have chosen Subtraction." << endl;
			cout << endl << "Input your answer." << endl;
			cout << setw(5) << num1 << endl;
			cout << "-   " << num2 << endl;
			cout << "______" << endl;
			cin >> answer;

			if (answer == result)
			{
				cout << "\nExcellent, " << fullName << "! You are correct. \n\n";
			}
			else if (answer != result)
			{
				cout << "\nNope. That's not correct, " << fullName << ". The correct answer is " << result << "."
					"\n Review your notes and try again." << endl << endl;
			}
			break;
		case '3':
			min = 1, max = 12;
			num1 = (rand() % (max - min + 1)) + min;
			min = 1, max = 12;
			num2 = (rand() % (max - min + 1)) + min;
			result = num1 * num2;

			cout << "You have chosen Multiplication." << endl;
			cout << endl << "Input your answer." << endl;
			cout << setw(5) << num1 << endl;
			cout << "x   " << num2 << endl;
			cout << "______" << endl;
			cin >> answer;

			if (answer == result)
			{
				cout << "\nExcellent, " << fullName << "! You are correct. \n\n";
			}
			else if (answer != result)
			{
				cout << "\nNope. That's not correct, " << fullName << ". The correct answer is " << result << "."
					"\n Review your notes and try again." << endl << endl;
			}
			break;
		case '4':
			cout << "\nYou chose to quit the program." << endl << endl;
			break;
		default:
			cout << ERROR << endl;
			break;
	}
	cout << QUIT_1 << fullName << QUIT_2 << endl;
	return 0;
}