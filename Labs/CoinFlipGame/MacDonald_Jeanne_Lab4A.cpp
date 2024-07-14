//Jeanne MacDonald
//CIS-5 Online
//Date: 7/13/2024
//Lab 4A: Coin Flip Game - This program allows the user to guess heads or tails and if the coin matches the guess, the bet will be doubled.

#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

char getDecision();
char getGuess();
char flipCoin();
bool winOrLose(char g, char c);
void printBankBalance(float b);

int main()
{
    float bank = 15.00;
    char guess, coin, choice;

    cout << "Welcome to the Coin Flip Game!" << endl;
    cout << "Your bank balance starts at $15.00" << endl;
    cout << "It costs $1.00 to play." << endl;
    cout << "If you guess correctly, you keep your $1 bet and earn $1.00." << endl;
    cout << "If you lose, your bet is subtracted from your balance." << endl << endl;
    cout << "Would you like to play? (y/n)" << endl;
    cin >> choice;


    while (bank > 0 && choice == 'y')
    {
        guess = getGuess();
        coin = flipCoin();
        if (winOrLose(guess, coin))
        {
            bank += 1.00;
        }
        else
        {
            bank -= 1.00;
        }
        printBankBalance(bank);
       
        choice = getDecision();
    }

    cout << "Thank you for playing. Your bank balance is: $" << bank << endl;

        return 0;
}

char getDecision() 
{
    char choice;

    cout << "Would you like to play again? (y/n)" << endl;
    cin >> choice;

    return choice;
}

char getGuess() 
{
    char guess;

    cout << "Guess Heads or Tails. (h/t)" << endl;
    cin >> guess;

    return guess;
}

char flipCoin() 
{
    srand(time(NULL));

    if (rand() % 2 == 1)
    {
        cout << "The coin landed on Heads!" << endl;
        return 'h';
    }
    else
    {
        cout << "The coin landed on Tails!" << endl;
        return 't';
    }
}

bool winOrLose(char g, char c) 
{
    if (g == c)
    {
        cout << "You guessed correctly! You win $2.00!" << endl;
        return true;
    }
    else
    {
        cout << "Aww you didn't win this time." << endl;
        return false;
    }
}

void printBankBalance(float b)
{
    cout << "\nYour bank balance is: $" << b << endl;
}