//Jeanne MacDonald
//CIS-5 Online
//Date: 7/13/2024
//Assignment 4D: RPS Game - This program lets the user play the game of Rock, Paper, Scissors against the computer.

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

bool goAgain();
char getCompChoice();
char getUserChoice();
void displayChoice(char choice);
int findWinner(char player, char comp);
void displayResults(int t, int w, int l);
bool isValid(char c);

int main()
{
	char playerMove, compMove;
	bool done = false;
	int tie = 0, userWin = 0, compWin = 0, result;

	cout << "Hello! " << endl << "Let's play the game of Rock, Paper, Scissors!" << endl;

	while (!done)
	{
		playerMove = getUserChoice();
		cout << "Your choice is: " << endl;
		displayChoice(playerMove);

		compMove = getCompChoice();
		cout << "The computer's choice is: " << endl;
		displayChoice(compMove);

		result = findWinner(playerMove, compMove);

		if (result == 0)
		{
			tie++;
		}
		else if (result == 1)
		{
			userWin++;
		}
		else
		{
			compWin++;
		}
		done = !goAgain();
	}
	displayResults(tie, userWin, compWin);

	cout << "Thank you for playing!" << endl;

	return 0;
}

bool goAgain()
{
	char choice;

	cout << "Would you like to play again? (y/n)" << endl;
	cin >> choice;

	return choice == 'y';
}

char getCompChoice()
{
	srand(time(NULL));
	int compChoice = (rand() % 3 + 1);

	if (compChoice == 1)
	{
		return 'r';
	}
	else if (compChoice == 2)
	{
		return 'p';
	}
	else if (compChoice == 3)
	{
		return 's';
	}
	return compChoice;
}

char getUserChoice()
{
	char c;
	const string ERROR = "Invalid choice. Please choose a given option.";
	bool validChoice = false;

	while (!validChoice)
	{
		cout << endl << "Please enter your choice: " << endl;
		cout << "(r) Rock" << endl;
		cout << "(p) Paper" << endl;
		cout << "(s) Scissors" << endl;
		cin >> c;
		if (!isValid(c))
		{
			cout << ERROR << endl;
		}
		else
		{
			validChoice = true;
		}
	}
	return c;
}

void displayChoice(char choice)
{
	if (choice == 'r')
	{
		cout << "Rock" << endl;
	}
	else if (choice == 'p')
	{
		cout << "Paper" << endl;
	}
	else
	{
		cout << "Scissors" << endl;
	}
}

int findWinner(char player, char comp)
{
	if (player == 'r' && comp == 'r')
	{
		cout << "You both chose Rock. This game is a tie." << endl;
		return 0;
	}
	else if (player == 'p' && comp == 'p')
	{
		cout << "You both chose Paper. This game is a tie." << endl;
		return 0;
	}
	else if (player == 's' && comp == 's')
	{
		cout << "You both chose Scissors. This game is a tie." << endl;
		return 0;
	}
	else if (player == 'r' && comp == 's')
	{
		cout << "Rock smashes scissors. You win!" << endl;
		return 1;
	}
	else if (player == 's' && comp == 'p')
	{
		cout << "Scissors cuts paper. You win!" << endl;
		return 1;
	}
	else if (player == 'p' && comp == 'r')
	{
		cout << "Paper covers rock. You win!" << endl;
		return 1;
	}
	else if (player == 's' && comp == 'r')
	{
		cout << "Rock smashes scissors. You lose!" << endl;
		return -1;
	}
	else if (player == 'p' && comp == 's')
	{
		cout << "Scissors cuts paper. You lose!" << endl;
		return -1;
	}
	else if (player == 'r' && comp == 'p')
	{
		cout << "Paper covers rock. You lose!" << endl;
		return -1;
	}
}

void displayResults(int t, int w, int l)
{
	cout << "The total number of ties: " << t << endl;
	cout << "The total number of wins by the computer: " << l << endl;
	cout << "The total number of wins by the user: " << w << endl;
}

bool isValid(char c)
{
	if (c != 'r' && c != 'p' && c != 's')
	{
		return false;
	}
	else
	{
		return true;
	}
}