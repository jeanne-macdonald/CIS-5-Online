//Jeanne MacDonald
//CIS-5 Online
//Date: 7/18/2024
//Lab 5B: 2D Arrays as Parameters - This program will read text input into a 2D array of 4x3 and display in a grid pattern.

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

//global constants
const int NUM_ROWS = 4, NUM_COLS = 3;

void fillNameArray(string name[][NUM_COLS]);
void displaySeatingChart(string name[][NUM_COLS]);

int main()
{
	string name[NUM_ROWS][NUM_COLS];

	fillNameArray(name);
	displaySeatingChart(name);

	return 0;
}

void fillNameArray(string name[][NUM_COLS])
{
	fstream nameFile;

	nameFile.open("students.txt");

	for (int i = 0; i < NUM_ROWS; i++)
	{
		for (int j = 0; j < NUM_COLS; j++)
		{
			nameFile >> name[i][j];
		}
	}
	nameFile.close();
}

void displaySeatingChart(string name[][NUM_COLS])
{
	for (int i = 0; i < NUM_ROWS; i++)
	{
		for (int j = 0; j < NUM_COLS; j++)
		{
			cout << setw(12) << name[i][j];
		}
		cout << endl;
	}
}