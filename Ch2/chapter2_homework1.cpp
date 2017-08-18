/*
File Name: chapter_2homework1.cpp
Description: Find the amount of sweetener needed to kill a human based on the amount needed to kill the mouse.
Date Created: 9/10/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    char input;
    while (input != 'n')
    {
    double sweetener2killmouse, mouse_weight, dieter_weight, mouse_death_sodas, human_death_sodas;
    const double sweetenerinsoda = 0.001;

    cout << "This program will calculate the ";
    cout << "number of sodas to kill you based on ";
    cout << "the amount of sweetener to kill a mouse." << endl;

    cout << "Input the mouse's weight:" << endl;
    cin >> mouse_weight;

    cout << "Input the amount of sweetener to kill a mouse:" << endl;
    cin >> sweetener2killmouse;

    cout << "Input the weight at which you will stop:" << endl;
    cin >> dieter_weight;

    mouse_death_sodas = sweetener2killmouse / sweetenerinsoda;
    human_death_sodas = (mouse_death_sodas / mouse_weight) * dieter_weight;

    cout << "The amount of sweetener required to kill a human at ";
    cout << dieter_weight << " lbs. is: ";
    cout << human_death_sodas << endl;

    cout << "Would you like to run the program again?" << endl;
    cin >> input;
    }
}
