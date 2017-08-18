/*
File Name: ch5_hw1.cpp
Description: Write a program that converts feet and inches to meters and centimeters or
from meters and centimeters to feet and inches depending on the user's choice.
Date Created: 10/15/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
void introduction();//Describes the program to the user.
void user_input(int &input1);
//Precondition: User knows whether they want to convert from ft and in to m and cm or vice-versa.
//Postcondition: The value is stored as an integer to begin the correct branch of the program.
void user_choice1(double &feet, double &inches);
//Precondition: User is ready to enter values correctly.
//Postcondition: The values are stored as the new variables for feet and inches.
void user_choice2(double &meters, double &centimeters);
//Precondition: User is ready to enter values correctly.
//Postcondition: The values are stored as the new variables for meteres and centimeters.
void convert1(double feet, double &inches, double &meters, double &centimeters);
//Precondition: The user inputs assigned to the variables will go through the calculations to convert from feet
//and inches to meters and centimeters.
//Postcondition: The conversion has been complete and the new values have been written to
//inches, meters, and centimeters.
void convert2(double meters, double &centimeters, double &feet, double &inches);
//Precondition: The user inputs assigned to the variables will go through the calculations to convert from centimeters and meters
//to feet and inches.
//Postcondition: The conversion has been complete and the new values have been written to
//centimeters, feet, and inches.
void output1(double meters, double centimeters);
//Precondition: Meters and centimeters have values assigned to them.
//Postcondition: The values have been written to the screen.
void output2(double feet, double inches);
//Precondition: Feet and inches have values assigned to them.
//Postcondition: The values have been written to the screen.
void outro();//Displays the ending message of the program when the user decides to quit.
int main()
{
    using namespace std;
    char ans;
    do
        {
            double feet, inches, meters, centimeters;
            int input1;
            introduction();
            user_input(input1);
            if (input1 == 1)
            {
                user_choice1(feet, inches);
                convert1(feet, inches, meters, centimeters);
                output1(meters, centimeters);
            }
            else if (input1 == 2)
            {
                user_choice2(meters, centimeters);
                convert2(meters, centimeters, feet, inches);
                output2(feet, inches);
            }
            else if (input1 == 0)
            {
                outro();
            }

            cout << "Would you like to run the program again? (Y or N): ";
            cin >> ans;

        } while ((ans == 'y') || (ans == 'Y'));
    outro();
    return 0;
}
//Uses iostream:
void introduction()
{
    using namespace std;
    cout << "This program will convert from meters and centimeters to feet and inches" << endl;
    cout << "or from feet and inches to meters and centimeters." << endl;
}
//Uses iostream:
void user_input(int &input1)
{
    using namespace std;
    cout << "Enter 1 if you would like to convert from ft and in to m and cm." << endl;
    cout << "Enter 2 if you would like to convert from m and cm to ft and in." << endl;
    cout << "Please enter your selection and press enter: ";
    cin >> input1;
}
//Uses iostream:
void user_choice1(double &foot, double &inch)
{
    using namespace std;
    cout << "Please enter the length in feet: ";
    cin >> foot;
    cout << "Please enter the length in inches: ";
    cin >> inch;
}
//Uses iostream:
void user_choice2(double &meter, double &centimeter)
{
    using namespace std;
    cout << "Please enter the length in meters: ";
    cin >> meter;
    cout << "Please enter the length in centimeters: ";
    cin >> centimeter;
}
void convert1(double feet, double &inches, double &meters, double &centimeters)
{
    meters = 0.3048 * feet;
    centimeters = 2.54 * inches;
}
void convert2(double meters, double &centimeters, double &feet, double &inches)
{
    feet = meters / 3.048;
    inches = centimeters / 2.54;
}
//Uses iostream:
void output1(double feet, double inches)
{
    using namespace std;
    cout << "The length in feet and inches is: " << feet << " ft. and "
         << inches << " in." << endl;
}
//Uses iostream:
void output2(double meters, double centimeters)
{
    using namespace std;
    cout << "The length in meters and centimeters is: " << meters << " meters and "
         << centimeters << " centimeters." << endl;
}
//Uses iostream:
void outro()
{
    using namespace std;
    cout << "Thank you for using the conversion program. Enjoy your day!" << endl;
}
