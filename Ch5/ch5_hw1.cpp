/*
File Name: ch5_hw1.cpp
Description: Write a program that converts feet and inches to meters and centimeters.
Date Created: 10/15/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
void introduction();
void input(double &feet, double &inches);
//Precondition: User is ready to enter values correctly.
//Postcondition: The values are stored as the new variables for feet and inches.
void convert(double feet, double &inches, double &meters, double &centimeters);
//Precondition: The user inputs assigned to the variables will go through the calculations to convert from feet
//and inches to meters and centimeters.
//Postcondition: The conversion has been complete and the new values have been written to
//inches, meters, and centimeters.
void output(double meters, double centimeters);
//Precondition: Meters and centimeters have values assigned to them.
//Postcondition: The values have been written to the screen.
void outro();
int main()
{
    char ans;
       do
        {
            double meters;
            double feet, inches, centimeters;
            introduction();
            input(feet, inches);
            convert(feet, inches, meters, centimeters);
            output (meters, centimeters);
            cout << "Would you like to run the program again? (Y or N): ";
            cin >> ans;
        } while ((ans == 'y') || (ans == 'Y'));
        outro();
        return 0;
}
void introduction()
{
    using namespace std;
    cout << "This program will convert from feet and inches to meters and centimeters." << endl;
}
//Uses iostream:
void input(double &feet, double &inches)
{
    using namespace std;
    cout << "Enter the length to be converted (ft.): ";
    cin >> feet;
    cout << "Enter the length to be converted (in.): ";
    cin >> inches;
}
void convert(double feet, double &inches, double &meters, double &centimeters)
{
    meters = 0.3048 * feet;
    centimeters = 2.54 * inches;
}
//Uses iostream:
void output(double meters, double centimeters)
{
    using namespace std;
    cout << "The length in meters and centimeters is: " << meters << " m and "
         << centimeters << " centimeters.";
}
void outro()
{
    using namespace std;
    cout << "Thank you for using the conversion program. Enjoy your day!" << endl;
}
