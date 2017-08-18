/*
Name: ch3_hw4.cpp
Description: Set up a program to play rock, paper, scissors with a user and generate a random number
to compare with the user's number and output the outcome.
Date created: 9/17/12
Author: Jonathan Villegas
Author's email: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int main()
{
    int user_choice, cpu_choice;
    char input('Y');

    do
    {
    cout << "This program will play rock, paper, scissors with you." << endl;
    cout << "Please enter 1 for rock, 2 for paper, or 3 for scissors. ";
    cin >> user_choice;

    srand( time(0) );
    cpu_choice = (rand() %3) +1;

    if (user_choice == cpu_choice)
    {
        cout << "You chose the same item as the computer." << endl;
        cout << "The game is a tie. Nobody wins!" << endl;
    }

    else if (user_choice == 1 && cpu_choice == 2)
    {
        cout << "You chose rock, the computer chose paper." << endl;
        cout << "You lose, paper covers rock." << endl;
    }

    else if (user_choice == 1 && cpu_choice == 3)
    {
        cout << "You chose rock, the computer chose scissors." << endl;
        cout << "You win, rock smashes scissors." << endl;
    }

    else if (user_choice == 2 && cpu_choice == 1)
    {
        cout << "You chose paper, the computer chose rock." << endl;
        cout << "You win, paper covers rock." << endl;
    }

    else if (user_choice == 2 && cpu_choice == 3)
    {
        cout << "You chose paper, the computer chose scissors." << endl;
        cout << "You lose, scissors cut paper." << endl;
    }

    else if (user_choice == 3 && cpu_choice == 1)
    {
        cout << "You chose scissors, the computer chose rock." << endl;
        cout << "You lose, rock smashes scissors." << endl;
    }

    else if (user_choice == 3 && cpu_choice == 2)
    {
        cout << "You chose scissors, the computer chose paper." << endl;
        cout << "You win, scissors cut paper." << endl;
    }

    else
    {
        cout << "You have entered an invalid choice." << endl;

    }


    cout << "Would you like to play again? ";
    cin >> input;
    }
    while ((input == 'y')||(input == 'Y'));
    cout << "Thank you! Hope you play again sometime!" << endl;
    return 0;
}
