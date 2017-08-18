/*
File Name: ch3_hw3.cpp
Description: Write a program that uses the Fibonacci sequence to estimate the growth in the future
of a green crud population.
Date Created: 9/23/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    char response;
    do
    {
    int new_crud, added_crud, initial_crud, current_day, days_in_future;
    added_crud = 0;
    current_day = 0;


        cout << "This program uses the Fiboncci sequence to estimate" << endl;
        cout << "a green crud population growth " << endl;
        cout << "after a certain number of days in the future." << endl;
        cout << "Enter starting amount of crud in lbs.: ";
        cin >> initial_crud;
        cout << "Enter number of days in future for the growth of the crud: ";
        cin >> days_in_future;

        for(current_day = 0; days_in_future > current_day; current_day ++)
        {

            if (days_in_future % 5 == 0)
            {
                new_crud = initial_crud + added_crud;
                added_crud = initial_crud;
                initial_crud = new_crud;
            }

            if (days_in_future < 5)
            {
                cout << "It takes at least 5 days for crud to have growth." << endl;
                cout << "Please run the program again and enter a value greater than 5." << endl;
            }
        }

    cout << "on day " << days_in_future << " you have: " << new_crud << " lbs. ";
    cout << "of green crud." << endl;
    cout << "Would you like to run the cruddy program again? (Y or N): ";
    cin >> response;
    } while ((response == 'y' || response == 'Y'));
    return 0;
}
