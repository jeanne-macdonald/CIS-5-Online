//Jeanne MacDonald
//CIS-5 Online
//Date: 7/19/2024
//Lab 5C: Soccer Scores - This program will prompt the user to input data for each player and then displays stats for each player and overall.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// Constant for the number of players
const int NUM_PLAYERS = 12;
// Declaration of the Player structure
struct Player
{
	string name; // Player's name
	int number; // Player's number
	int points; // Points scored by the player
};
// Function prototypes
void getPlayerInfo(Player&);
void showInfo(Player);
int getTotalPoints(Player[], int);
void showHighest(Player[], int);
//***********************************************
// Function main *
//***********************************************
int main()
{
	// Array of Player structures
	Player team[NUM_PLAYERS];
	// Loop counter
	int index;
	// Get each player's info.
	for (index = 0; index < NUM_PLAYERS; index++)
	{
		cout << "\nPLAYER #" << (index + 1) << "\n";
		cout << "---------\n";
		getPlayerInfo(team[index]);
		cin.get();
	}
	// Display the table headings.
	cout << setw(20) << left << "\nNAME";
	cout << setw(10) << "NUMBER";
	cout << setw(10) << "POINTS SCORED\n";
	// Display the team info.
	for (index = 0; index < NUM_PLAYERS; index++)
		showInfo(team[index]);
	// Display total points
	cout << "TOTAL POINTS: "
		<< getTotalPoints(team, NUM_PLAYERS)
		<< endl;

	// Display the player scoring the most points.
	showHighest(team, NUM_PLAYERS);
	system("pause");
	return 0;
}
//***********************************************
// Function getPlayer *
// This function accepts a reference to a Player*
// structure variable. The user is asked to *
// enter the player's name, number, and the *
// number of points scored. This data is stored *
// in the reference parameter. *
//***********************************************
void getPlayerInfo(Player& p)
{
	bool isValid = false;

	cout << "Enter the player's name: ";
	getline(cin, p.name);

	while (isValid == false)
	{
		cout << "Enter the player's number: ";
		cin >> p.number;

		if (p.number < 0 || p.number >= 100)
		{
			cout << "Input Invalid." << endl;
		}
		else
		{
			isValid = true;
		}
	}

	isValid = false;

	while (isValid == false)
	{
		cout << "Enter the player's numbers of points scored: ";
		cin >> p.points;

		if (p.points < 0 || p.points > 100)
		{
			cout << "Input Invalid." << endl;
		}
		else
		{
			isValid = true;
		}
	}
}
//***********************************************
// Function showInfo *
// This function displays the data in the Player*
// structure variable passed into the parameter.*
//***********************************************
void showInfo(Player p)
{
	cout << setw(20) << p.name << setw(10) << p.number << setw(10) << p.points << endl;
}
//***********************************************
// Function getTotalPoints *
// This function accepts an array of Player *
// structure variables as its argument. The *
// function calculates and returns the total *
// of all the players points in the array. *
//***********************************************
int getTotalPoints(Player p[], int size)
{
	int tot = 0;

	for (int i = 0; i < size; i++)
	{
		tot = tot + p[i].points;
	}
	return tot;
}
//***********************************************
// Function showHighest *
// This function accepts an array of Player *
// structure variables. It displays the name *
// of the player who scored the most points. *
//***********************************************
void showHighest(Player p[], int size)
{
	int high = 0;
	string pName;
	int pNum;
	int pPoints;

	for (int i = 0; i < size; i++)
	{
		if (p[i].points > high)
		{
			cout << setw(20) << p[i].name << setw(10) << p[i].number << setw(10) << p[i].points << endl;
			pName = p[i].name;
			pNum = p[i].number;
			high = p[i].points;
			pPoints = i + 1;
		}
	}
}