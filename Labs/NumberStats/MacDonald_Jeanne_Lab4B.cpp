//Jeanne MacDonald
//CIS-5 Online
//Date: 7/13/2024
//Lab 4B: Number Stats - This program will read in numbers, calculate statistics, and send the output to both the console and the output file.

#include <iostream>
#include <fstream>
using namespace std;

void displayConsole(int c, double s, double a, double ma, double mi);
void displayOutput(int tot, double num, double avg, double h, double l);

int main()
{
	ifstream inFile;
	inFile.open("Random.txt");
	ofstream outFile;
	outFile.open("output.txt");

	int count = 0;
	double sum = 0;
	double average = 0;
	double number, min, max;
	
	if (!inFile)
	{
		cout << "Error opening file." << endl;
		exit(0);
	}

	inFile >> number;
	min = number;
	max = number;
	sum = sum + number;
	count++;

	while (inFile >> number)
	{
		if (number > max)
		{
			max = number;
		}
		else if (number < min)
		{
			min = number;
		}
		count++;
		sum += number;
	}
	average = sum / count;

	inFile.close();
	outFile.close();

	displayConsole(count, sum, average, max, min);
	displayOutput(count, sum, average, max, min);

	return 0;
}

void displayConsole(int c, double s, double a, double ma, double mi)
{
	cout << "The numbers in this file: " << c << endl;
	cout << "Total: " << s << endl;
	cout << "Average: " << a << endl;
	cout << "High: " << ma << endl;
	cout << "Low: " << mi << endl;
}

void displayOutput(int tot, double num, double avg, double h, double l)
{
	ofstream outFile;
	outFile.open("output.txt");

	outFile << "The numbers in this file: " << tot << endl;
	outFile << "Total: " << num << endl;
	outFile << "Average: " << avg << endl;
	outFile << "High: " << h << endl;
	outFile << "Low: " << l << endl;
}