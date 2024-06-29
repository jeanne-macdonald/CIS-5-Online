//Jeanne MacDonald
//jmacdonald5@student.rccd.edu
//CIS-5 Online
//Date: 6/28/2024
//Lab 2A: Full Name - The program accepts the user's name from the keyboard and displays a message to the user.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string fullName;
	cout << "Type your full name: ";
	getline (cin, fullName);
	cout << "Welcome to C++ programming, " << fullName << ". I applaud your choice to learn to code and increase your technical skills.";
}