//Jeanne MacDonald
//CIS-5 Online
//Date: 7/10/2024
//Assignment 4B: Gradebook Extended - This program will present the student's name and a letter grade using functions.

#include <iostream>
#include <string>
using namespace std;

void displayResults(string name, float avg, char grd);
int getTestScore();
float calcAvg(int t1, int t2, int t3);
bool isValid(int num, int min, int max);
string getName();
char assignGrade(int avg);
bool goAgain();

int main()
{
	bool done = false;
	string fullName;
	int test1, test2, test3;
	float average;
	char grade;
	
	while (!done)
	{
		fullName = getName();

		test1 = getTestScore();   // function call to a value returning function
		test2 = getTestScore();
		test3 = getTestScore();

		average = calcAvg(test1, test2, test3);

		grade = assignGrade(average);

		displayResults(fullName, average, grade);  // function call for a void function

		done = !goAgain();
	}

	system("pause");
	return 0;
}

// -------------------------------------------------------------------
// displayResults outputs headings and the results of the calculations
// -------------------------------------------------------------------
void displayResults(string name, float avg, char grd) // function header, scope
{
	cout << "-------------------------------------------------\n";
	cout << "Norce College \n";
	cout << "CIS-5: Intro to Programming with C++ \n";
	cout << "Student Averages \n";
	cout << "-------------------------------------------------\n";

	cout << name << ": " << avg << "    " << grd << endl;
}

// -----------------------------------------------------------
// getTestScore prompts the use and gets a single test score
// -----------------------------------------------------------
int getTestScore()
{
	int score; // scope of operator
	int min = 0, max = 100;

	cout << "Enter a test score:    ";
	cin >> score;

	while (!isValid(score, min, max))
	{
		cout << "Try again. Enter a valid test score:    ";
		cin >> score;
	}
	return score;
}

// -----------------------------------------------------
// calcAvg totals the score and calculates the average
// -----------------------------------------------------
float calcAvg(int t1, int t2, int t3)
{
	float avg;

	avg = (t1 + t2 + t3) / 3.0;

	return avg;
}

// -------------------------------------------------------
// isValid tests for valid input and returns true or false
// -------------------------------------------------------
bool isValid(int num, int min, int max)
{
	if (num < min || num > max) // invalid data
		return false;
	else						// valid data
		return true;
}

// -----------------------------------------------------
// getName prompts the user for the student's full name
// -----------------------------------------------------
string getName()
{
	string name;

	cout << "Student Name: ";
	cin.ignore(); // Had trouble with getLine being skipped. Found this on StackOverflow.
	getline(cin, name);
	cout << endl;
	
	return name;
}

// -----------------------------------------------------
// assignGrade outputs a letter grade per average score
// -----------------------------------------------------
char assignGrade(int avg)
{
	const float A_GRADE = 90.00;
	const float B_GRADE = 80.00;
	const float C_GRADE = 70.00;
	const float D_GRADE = 60.00;
	float gr;

	if (avg >= A_GRADE)
	{
		gr = 'A';
	}
	else if (avg >= B_GRADE)
	{
		gr = 'B';
	}
	else if (avg >= C_GRADE)
	{
		gr = 'C';
	}
	else if (avg >= D_GRADE)
	{
		gr = 'D';
	}
	else
	{
		gr = 'F';
	}
	return gr;
}

// -----------------------------------------------------------------------
// goAgain repeats the program to allow the user to input another student
// -----------------------------------------------------------------------
bool goAgain()
{
	char choice;

	cout << "Would you like to repeat for another student? (y/n)";
	cin >> choice;
	
	return choice == 'y';
}