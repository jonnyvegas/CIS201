/*
File Name: ch3_hw2.cpp
Description: Write a program that calculates a cost of a long distance call based on the user's input for
time started and length of call. This calculation will be based on what day of the week and what time the call occurred.
Date Created: 9/17/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main ()
{
    char first_letter, second_letter, input ('Y');
    int call_length, time_started;
    double cost_of_call;

    do
    {

    cout << "This program will tell you the cost of a long distance call " << endl;
    cout << "according to a specific calling plan." << endl;
    cout << "Please enter the day of the week of your call: ";

    cin >> first_letter >> second_letter;

    cout << "Please enter the time the call started in a 24-hour format: ";

    cin >> time_started;

    cout << "Please enter the length of the call in minutes: ";

    cin >> call_length;

    if (((first_letter == 'M') || (first_letter == 'm')) && ((second_letter == 'O') || (second_letter == 'o')))
    {
        if ((time_started >= 800) && (time_started <= 1600))
            {
                cost_of_call = (call_length * 0.40);
            }
        else
            {
                cost_of_call = (call_length * 0.25);
            }
    }

    if (((first_letter == 'T') || (first_letter == 't')) && ((second_letter == 'U') || (second_letter == 'u')))
    {
        if ((time_started >= 800) && (time_started <= 1600))
            {
                cost_of_call = (call_length * 0.40);
            }
        else
            {
                cost_of_call = (call_length * 0.25);
            }
    }

    if (((first_letter == 'W') || (first_letter == 'w')) && ((second_letter == 'E') || (second_letter == 'e')))
    {
        if ((time_started >= 800) && (time_started <= 1600))
            {
                cost_of_call = (call_length * 0.40);
            }
        else
            {
                cost_of_call = (call_length * 0.25);
            }
    }

    if (((first_letter == 'T') || (first_letter == 't')) && ((second_letter == 'H') || (second_letter == 'h')))
    {
        if ((time_started >= 800) && (time_started <= 1600))
            {
                cost_of_call = (call_length * 0.40);
            }
        else
            {
                cost_of_call = (call_length * 0.25);
            }
    }

    if (((first_letter == 'F') || (first_letter == 'F')) && ((second_letter == 'R') || (second_letter == 'r')))
        {
        if ((time_started >= 800) && (time_started <= 1600))
            {
                cost_of_call = (call_length * 0.40);
            }
        else
            {
                cost_of_call = (call_length * 0.25);
            }
        }

    if (((first_letter == 'S') || (first_letter == 's')) && ((second_letter == 'A') || (second_letter == 'a')))
            {
                cost_of_call = (call_length * 0.15);
            }

    if (((first_letter == 'S') || (first_letter == 's')) && ((second_letter == 'U') || (second_letter == 'u')))
            {
                cost_of_call = (call_length * 0.15);
            }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "The cost of your call is: $" << cost_of_call << endl;
    cout << "Would you like to get a cost of another call? ";
    cin >> input;

    }

    while ((input == 'y') || (input == 'Y'));
    cout << "Thanks for using this program. Have a nice day!";
    }
