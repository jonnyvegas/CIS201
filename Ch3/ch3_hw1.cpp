/*
Name: ch3_hw1.cpp
Description: Create a program that lets a user input a year and tells them
whether or not it is a leap year.
Date: 9/17/12
Author: Jonathan Villegas
Email: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    int year;
    char input;

    cout << "This program will let you input a year and" << endl;
    cout << "see if it is a leap year." << endl;

    while (input != 'n')
    {
    cout << "Please enter a year: ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }

    else if (year % 100 == 0)
    {
        cout << year << " is not a leap year." << endl;
    }

    else if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }

    else
    {
        cout << year << " is not a leap year." << endl;
    }
    cout << "Would you like to see if another year is a leap year? ";
    cin >> input;
    }

    cout << "Have a nice day!";

    return 0;
}
