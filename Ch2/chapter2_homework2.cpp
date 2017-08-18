/*
File Name: chapter_2homework2.cpp
Description: Gauge the expected cost of an item in a specified number of years based on the rate of inflation.
Date Created: 9/10/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    double inflation_rate, cost_of_item, estimated_cost, interest;
    int number_of_years, count;
    count = 0;

    cout << "This program will gauge the expected cost of" << endl;
    cout << "an item in a specified number of years" << endl;
    cout << "based on an inflation rate you input." << endl;

    cout << "Please enter the current total cost of the item and press enter." << endl;
    cin >> cost_of_item;

    cout << "Please enter the number of years from now" << endl;
    cout << "you would like to estimate for. " << endl;
    cin >> number_of_years;

    cout << "Please enter the inflation rate. " << endl;
    cin >> inflation_rate;

    inflation_rate = inflation_rate / 100;

    while (count < number_of_years)
    {
        interest = cost_of_item * inflation_rate;
        cost_of_item = cost_of_item + interest;
        count++;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    inflation_rate = inflation_rate * 100;

    cout << "The estimated cost of the item is: $";
    cout << cost_of_item << " after " << number_of_years << " years" << endl;
    cout << "at an interest rate of " << inflation_rate << "%." << endl;

    return 0;
}
