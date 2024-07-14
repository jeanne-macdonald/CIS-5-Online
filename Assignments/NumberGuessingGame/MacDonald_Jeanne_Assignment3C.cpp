// Jeanne MacDonald
// CIS-5 Online 
// 7/5/2024
// Assignment 3C: Number Guessing Game - This program generates a random number between 1 and 500 and asks the user to guess what the number is.

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int randNum, userNum, guesses;
  
	srand(time(NULL));

    guesses = 0;
	randNum = (rand() % 500) + 1;
	
	cout << "Guess what number I've selected, between 1 and 500." << endl;
	cin >> userNum;

	while (userNum != randNum)
	{
		if (userNum > randNum)
		{
			cout << "Too high, try again." << endl;
			cout << "Number of guesses taken: " << guesses++ << endl << endl;
		}
		else if (userNum < randNum)
		{
			cout << "Too low, try again." << endl;
			cout << "Number of guesses taken: " << guesses++ << endl << endl;
		}
        cin >> userNum;
	}
    cout << "Correct! Nice guess!" << endl;
    cout << "Number of guesses taken: " << guesses++ << endl << endl;

	return 0;
}