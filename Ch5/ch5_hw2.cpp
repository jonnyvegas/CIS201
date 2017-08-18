/*
File Name: ch5_hw1.cpp
Description: This program takes a user's input of the current time and the amount of time that person
will wait and outputs the new time after the amount of waiting time has been added to the current time.
This program uses a 24-hour format for input and output.
Date Created: 10/17/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
void intro();//Explains the program to the user.
void current_time_input(int& hours, int& mins, int& hourswaited, int& minswaited);
//Precondition: User knows current ours and minutes.
//Postcondition: Input of user's hours and minutes as well as the hours waited and
//the minutes waited will be stored in the parameters.
void calculation(int& total_hours, int& total_mins, int hours, int mins, int hourswaited, int minswaited);
void time_waited(int total_hours, int total_mins);
//Precondition: The total hours and minutes waited will be stored.
//Postcondition: The values for the total hours and minutes waited will be written to the screen.
void outro();//Displays ending program message to user when user is done.
int main()
{
    char ans = 'Y';//User input to repeat loop as user desires.
    do
    {
        int hours, mins, hourswaited, minswaited, total_hours, total_mins;
        intro();
        current_time_input(hours, mins, hourswaited, minswaited);
        calculation (total_hours, total_mins, hours, mins, hourswaited, minswaited);
        time_waited(total_hours, total_mins);
        cout << "Would you like to run the waiting program again? (Y or N): ";
        cin >> ans;
    }while ((ans == 'y') || (ans == 'Y'));
    outro();
}
void intro()
{
    using namespace std;
    cout << "This program will tell you the time it will be after " << endl;
    cout << "you have waited a certain amount of time from the current time." << endl;
}
void current_time_input(int& hours, int& mins, int& hourswaited, int& minswaited)
{
    using namespace std;
    char colon;
    cout << endl;
    cout << "Please enter the current 24-hour time in the following format: " << endl;
    cout << "HH:MM :";
    cin >> hours >> colon >> mins;
    cout << "Please enter the amount of time you waited in the same format." << endl;
    cout << "HH:MM :";
    cin >> hourswaited >> colon >> minswaited;
}
void calculation(int& total_hours, int& total_mins, int hours, int mins, int hourswaited, int minswaited)
{
    total_hours = (hours + hourswaited) % 12;
    total_mins = (mins + minswaited);
}
void time_waited(int total_hours, int total_mins)
{
    cout << "After the time period you waited, the new time is: ";
    if (total_hours > 24)
    {
        total_hours = total_hours - 24;
    }
    if (total_mins > 59)
    {
        total_hours = total_hours + 1;
        total_mins = total_mins - 60;
    }
    cout << total_hours << ":" << total_mins;
    if (total_hours <= 12)
    {
        cout << " PM.";
    }
    else
    {
        cout << " AM.";
    }
    cout << endl;
    cout << endl;
}
void outro()
{
    cout << "Thank you for using the time waiting program. Have a nice day!";
}
