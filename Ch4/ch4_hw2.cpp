/*
File Name: ch4_hw2.cpp
Description: Write a program that estimates the number of calories required to
maintain one's body weight based on a formula and one's favorite food.
Date Created: 10/01/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
#include <cmath>
using namespace std;

double intensity, pounds, mins, calories, servings;
//Function to calculate physical activity
double myRate (double intensity, double pounds, double mins);


int main()
{
   char input;
    do
    {
        cout << "This program estimates the number of calories " << endl;
        cout << "required to maintain one's body weight " << endl;
        cout << "based on intensity and number of minutes of " << endl;
        cout << "exercise, weight in lbs., and calories in " << endl;
        cout << "one's favorite food." << endl;

        cout << "Enter the intensity of the exercise: ";
        cin >> intensity;

        cout << "Enter your weight in lbs: ";
        cin >> pounds;

        cout << "Enter the number of minutes for the exercise: ";
        cin >> mins;

        cout << "Enter the number of calories in your favorite food: ";
        cin >> calories;

        cout << endl;
        cout << "To maintain your current body weight of " << pounds << " lbs., you " << endl;
        cout << "would have to consume " << myRate (intensity, pounds, mins) << " calories." << endl;

        servings = (((myRate (intensity, pounds, mins) * 0.1) + myRate (intensity, pounds, mins)) / calories);

        cout << "or " << servings << " servings of your favorite food." << endl;

        cout << "Would you like to run the program again? (Y or N): ";
        cin >> input;

    } while ((input == 'y') || (input == 'Y'));

    cout << "Thanks for using this program. Have a nice day!" << endl;

    return 0;
}

double myRate (double intensity, double pounds, double mins)
{
    double basal, activity, calories;

    basal = 70.0 * (pow((pounds/2.2), 0.756));

    activity = 0.0385 * intensity * pounds * mins;

    calories = basal + activity;

    return calories;
}
