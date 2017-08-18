/*
File Name: ch4_hw1.cpp
Description: Write a program that calculates the gravitational force between two bodies by allowing the user
to input the mass of the two bodies and the distance.
Date Created: 9/30/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
#include <cmath>
using namespace std;

const double G = 6.673e-8; //Gravitational constant as given in book

//Function to calculate force
double total_force (double m1, double m2, double d);


int main()
{
    char input;

    do
    {
        double m1, m2, d, force;

        cout << "This program allows you to calculate the total gravitational force in dynes" << endl;
        cout << "between two bodies by inputing their weight in grams" << endl;
        cout << "and the distance between them in centimeters." << endl;

        cout << "Please enter the mass of the first body in grams: ";
        cin >> m1;
        cout << "Please enter the mass of the second body in grams: ";
        cin >> m2;
        cout << "Please enter the distance between the two bodies in centimeters: ";
        cin >> d;

        force = total_force (m1, m2, d);

        cout << "The amount of force between the two bodies is: " << force << " dynes." << endl;

        cout << "Would you like to run the program again? (Y or N): ";
        cin >> input;

        } while ((input == 'y') || (input == 'Y'));

      return 0;
    }


double  total_force (double m1, double m2, double d)
{
    return ((G * m1 * m2)/ (d*d));
}
