//Jeanne MacDonald
//CIS-5 Online
//Date: 7/12/2024
//Assignment 4C: Verify Login - This program will verify a username and password provided by the user.

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void login();
bool checkCredentials(string username, string password);

int main()
{
	cout << "Login: " << endl;
	login();

	return 0;
}

void login()
{
	string username;
	string password;
	int attempts = 3;

	for (int i = 0; i > attempts; i++)
	{
		attempts = -1;
	}

	do
	{
		attempts = attempts - 1;

		cout << "\nUsername: ";
		cin >> username;
		cout << "\nPassword: ";
		cin >> password;

		if (checkCredentials(username, password) == true)
		{
			cout << "Login successful!" << endl;
		}
		else
		{
			if (attempts > 0)
			{
				cout << "\nInvalid username or password. ";
				cout << "You have " << attempts << " remaining." << endl;
			}
			else
			{
				cout << "\nAttempts exceeded." << endl;
			}
		}
	} while (attempts > 0 && checkCredentials(username, password) != true);
}

bool checkCredentials(string username, string password)
{
	string user;
	string pass;
	bool status = false;

	ifstream myFile;
	myFile.open("correctData.txt");

	if (myFile)
	{
		while (!myFile.eof())
		{
			myFile >> user >> pass;
			if (username == user && password == pass)
			{
				status = true;
			}
			else
			{
				status = false;
			}
		}
	}
	myFile.close();
	return status;
}