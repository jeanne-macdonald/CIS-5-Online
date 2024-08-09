//Jeanne MacDonald
//CIS-5 Online
//Date: 7/19/2024
//Assignment 5A: Gradebook EX Alpha Special Arcade Edition XL - This program will present the student's name and a letter grade using arrays and functions.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//global constants
const int NUM_STUDENTS = 3, NUM_TESTS = 5;

void getStudentInfo(string name[], int score[][NUM_TESTS]);
bool isValid(int num, int min, int max);
void assignGrade(float avg[], char grd[]);
void calcAvg(int score[][NUM_TESTS], float avg[], int hi[], int lo[]);
void getHighTestScore(int score[][NUM_TESTS], int hi[]);
void getLowTestScore(int score[][NUM_TESTS], int lo[]);
void displayResults(string name[], int score[][NUM_TESTS], float avg[], char grd[]);

int main()
{
	string fullName[NUM_STUDENTS];
	int test[NUM_STUDENTS][NUM_TESTS];
	char grade[NUM_STUDENTS];
	float average[NUM_STUDENTS];
	int high[NUM_STUDENTS], low[NUM_STUDENTS];
	
	getStudentInfo(fullName, test);

	getHighTestScore(test, high);

	getLowTestScore(test, low);

	calcAvg(test, average, high, low);

	assignGrade(average, grade);

	displayResults(fullName, test, average, grade);

	system("pause");
	return 0;
}

// -----------------------------------------------------------------------------
// getStudentInfo prompts the user for the student's full name and test scores
// -----------------------------------------------------------------------------
void getStudentInfo(string name[], int score[][NUM_TESTS])
{
	int min = 0, max = 100;

	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		cout << "Student Name: ";
		getline(cin, name[i]);
		cout << endl;

		for (int j = 0; j < NUM_TESTS; j++)
		{
			cout << "Enter a test score: " << j + 1 << endl;
			cin >> score[i][j];
			
			while (!isValid(score[i][j], min, max))
			{
				cout << "Try again. Enter a valid test score: " << endl;
				cin >> score[i][j];
			}
		}
		cout << endl;
		cin.ignore();
	}
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
// assignGrade outputs a letter grade per average score
// -----------------------------------------------------
void assignGrade(float avg[], char grd[])
{
	const float A_GRADE = 90.00;
	const float B_GRADE = 80.00;
	const float C_GRADE = 70.00;
	const float D_GRADE = 60.00;

	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		if (avg[i] >= A_GRADE)
		{
			grd[i] = 'A';
		}
		else if (avg[i] >= B_GRADE)
		{
			grd[i] = 'B';
		}
		else if (avg[i] >= C_GRADE)
		{
			grd[i] = 'C';
		}
		else if (avg[i] >= D_GRADE)
		{
			grd[i] = 'D';
		}
		else
		{
			grd[i] = 'F';
		}
	}
}

// -----------------------------------------------------
// calcAvg totals the score and calculates the average
// -----------------------------------------------------
void calcAvg(int score[][NUM_TESTS], float avg[], int hi[], int lo[])
{
	int tot, high, low;

	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		tot = 0;
		high = hi[i];
		low = lo[i];
		
		for (int j = 0; j < NUM_TESTS; j++)
		{
			tot += score[i][j];
		}
		avg[i] = static_cast<float>(tot - score[i][high] - score[i][low]) / (NUM_TESTS - 2);
	}
}

// -----------------------------------------------------
// getHighTestScore calculates the highest test scores
// -----------------------------------------------------
void getHighTestScore(int score[][NUM_TESTS], int hi[])
{
	int high = 0;

	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		for (int j = 0; j < NUM_TESTS; j++)
		{
			if (score[i][high] < score[i][j])
				high = j;
		}
		hi[i] = high;
	}
}

// -----------------------------------------------------
// getLowTestScore calculates the lowest test scores
// -----------------------------------------------------
void getLowTestScore(int score[][NUM_TESTS], int lo[])
{
	int low = 0;

	for (int i = 0; i < NUM_STUDENTS; i++)
	{
		for (int j = 0; j < NUM_TESTS; j++)
		{
			if (score[i][low] > score[i][j])
				low = j;
		}
		lo[i] = low;
	}
}

// ----------------------------------------------------------------------------
// displayResults outputs student name, test scores, average, and letter grade
// ----------------------------------------------------------------------------
void displayResults(string name[], int score[][NUM_TESTS], float avg[], char grd[]) // function header, scope
{
	cout << setw(20) << left << "\nStudent's Name";
	cout << setw(10) << "Test 1";
	cout << setw(10) << "Test 2";
	cout << setw(10) << "Test 3";
	cout << setw(10) << "Test 4";
	cout << setw(10) << "Test 5";
	cout << setw(10) << "Average";
	cout << setw(10) << "Letter Grade\n";

	for (int row = 0; row < NUM_STUDENTS; row++)
	{
		cout << setw(20) << left << name[row];
		
		for (int i = 0; i < NUM_TESTS; i++)
		{
			cout << setw(10) << score[row][i];
		}
		cout << setw(10) << avg[row];
		cout << setw(10) << grd[row];
		cout << endl;
	}
	cout << endl;
}