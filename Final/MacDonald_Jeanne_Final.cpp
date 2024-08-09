//Jeanne MacDonald
//CIS-5 Online
//Date: 7/23/2024
//Final: Gymnastics Competition - This program asks which scoring method is utilized and how many competitors are in the competition. 
//Then the user inputs the scores from the judges, and calculates the average score for each contestant.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// global constant error messages (non-variable)
const string ERROR_1 = "Invalid input. Please try again.";
const string ERROR = "Invalid choice. Please choose a given option.";

bool goAgain();
char showMenu();
int getGymnasts(int max);
float getScore(int counter);
string getName();
void outputAverage(float average, string fullName);

int main()
{
	int numOfGymnasts = 0, threeJudgeScores = 3, fiveJudgeScores = 5;
	float max, min;
	char choice;
	float average, score, total;
	string fullName;
	bool done = false;

	while (!done)
	{
		choice = showMenu();

		switch (choice)
		{
		case '1': 
			numOfGymnasts = getGymnasts(20);
			
			for (int i = 0; i < numOfGymnasts; i++)
			{
				average = 0.00, score = 0.00, total = 0.00, min = 0.00, max = 0.00;

				fullName = getName();

				for (int j = 0; j < threeJudgeScores; j++)
				{
					score = getScore(j);
					total = total + score;
				}
				average = total / 3.00;

				outputAverage(average, fullName);
			}
			done = !goAgain();

			break;

		case '2':
			numOfGymnasts = getGymnasts(50);

			for (int i = 0; i < numOfGymnasts; i++)
			{
				average = 0.00, score = 0.00, total = 0.00, min = 0.00, max = 0.00;

				fullName = getName();

				for (int j = 0; j < fiveJudgeScores; j++)
				{
					score = getScore(j);
					total = total + score;

					if (min == 0 && max == 0) //min and max are only zero on the first run through
					{
						min = score;
						max = score;
					}
					else
					{
						if (max < score)
						{
							max = score;
						}
						else if (min > score)
						{
							min = score;
						}
					}
				}
				average = (total - max - min) / 3.00;

				outputAverage(average, fullName);
			}
			done = !goAgain();

			break;

		case'3':
			cout << "\nYou chose to quit the program." << endl << endl;

			done = true;

			break;

		default:
			cout << ERROR << endl;

			done = !goAgain();

			break;
		}
	}
	cout << "Thank you for using this program!" << endl;

	return 0;
}

bool goAgain()
{
	char choice;

	cout << "Would you like to go again? (y/n)" << endl;
	cin >> choice;

	return choice == 'y';
}

char showMenu() 
{
	char choice;

	cout << "Welcome to the Gymnastics Competition!" << endl;
	cout << endl << "Please enter your choice." << endl << endl;
	cout << "1. Three Judges" << endl;
	cout << "2. Five Judges" << endl;
	cout << "3. Quit" << endl;
	cin >> choice;

	return choice;
}

int getGymnasts(int max)
{
	int num;
	bool valid = false;

	while (!valid)
	{
		cout << "How many gymnasts are in the competition?" << endl;
		cin >> num;

		if (num < 0 || num >= max)
		{
			cout << ERROR_1 << endl;
		}
		else
		{
			valid = true;
		}
	}
	return num;
}

float getScore(int counter) 
{
	bool valid = false;
	float score;

	while (!valid) {
		cout << "Enter the gymnast's numbers of points scored " << counter + 1 << ": ";
		cin >> score;

		if (score < 0 || score >= 10)
		{
			cout << ERROR_1 << endl;
		}
		else
		{
			valid = true;
		}
	}
	return score;
}

string getName() 
{
	string fullName;

	cin.get();
	cout << "Enter the gymnast's name: ";
	getline(cin, fullName);
	cout << endl;

	return fullName;
}

void outputAverage(float average, string fullName) 
{
	cout << endl;
	cin.ignore();
	cout << fixed << setprecision(2) << endl;
	cout << fullName << " received an average score: " << average << endl;
}