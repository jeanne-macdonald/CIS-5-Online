// Jeanne MacDonald
// CIS-5 Online 
// 7/4/2024
// Lab3B: Gradebook - This program determines the letter grade recieved for the student and appropriate comments for the grade receieved in the course.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	int test1, test2, test3;
	float avg;
	char grade;
	bool isActive;  // evaluates to true or false

	const float A_GRADE = 90.00;
	const float B_GRADE = 80.00;
	const float C_GRADE = 70.00;
	const float D_GRADE = 60.00;

	isActive = true;  // we will use this in future assignments

	cout << "Enter the student name: ";
	getline(cin, name);

	cout << "Enter three test scores between 0 and 100: ";
	cin >> test1 >> test2 >> test3;  // user may input integers only

	avg = static_cast<float>(test1 + test2 + test3) / 3;  // cast to a float for decimal 

	cout << fixed << showpoint << setprecision(1);
	cout << endl << endl << name << "'s average = " << avg << endl;

	if ((avg >= A_GRADE) && (isActive == true))
	{
		grade = 'A';
		cout << "Congratulations! You are awesome. \n";
		cout << endl;
		cout << name << ", you earned a grade of " << grade << " in the course. \n";
		cout << "Please see your counselor to register for next semester. \n\n\n";
	}
	else if ((avg >= B_GRADE) && (isActive == true))
	{
		grade = 'B';
		cout << "Good job. You are brilliant. \n";
		cout << endl;
		cout << name << ", you earned a grade of " << grade << " in the course. \n";
		cout << "Please see your counselor to register for next semester. \n\n\n";
	}
	else if ((avg >= C_GRADE) && (isActive == true))
	{
		grade = 'C';
		cout << "Satisfactory, but you need more practice. \n";
		cout << endl;
		cout << name << ", you earned a grade of " << grade << " in the course. \n";
		cout << "Please see your counselor to register for next semester. \n\n\n";
	}
	else if ((avg >= D_GRADE) && (isActive == true))
	{
		grade = 'D';
		cout << "Less than satistactory. Needs improvement. \n";
		cout << endl;
		cout << name << ", you earned a grade of " << grade << " in the course. \n";
		cout << "You must retake the course before registering for advanced courses. \n\n\n";
	}
	else
	{
		grade = 'F';
		cout << "Unsatisfactory. Needs improvement. \n";
		cout << endl;
		cout << name << ", you earned a grade of " << grade << " in the course. \n";
		cout << "You must retake the course before registering for advanced courses. \n\n\n";
	}
	system("pause");
	return 0;
}