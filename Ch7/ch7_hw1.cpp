/*
Filename: ch7_hw1.cpp
Description: Write a program that reads in the average monthly rainfall for a city for each month
of the year and then reads in the actual monthly rainfall for each of the previous 12 months. The program
then prints out a nicely formnatted table showing the rainfall for each of the previous 12 months as well
as how much below or above average the rainfall was for each month.
Author: Jonathan Villegas
Email: jonathan.e.villegas@gmail.com
Date: 11/5/12
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//Declares a global array and array string names of 12 months.
const string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                          "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};
void get_data(double current_data[], double previous_data[]);
//Precondition: Declares arrays for the current data file and the previous data file.
//Postcondition: Arrays are declared for current and previous data.
void output(ofstream& ofile, double current_data[], double previous_data[]);
//Precondition: Information is ready to be written to an output file.
//Postcondition: Information is written and saved to the output file.

int main()
{
    char file_name (20);//Maximum number of characters for file name.
    ofstream ofile;
    double x[12] = {0, 0, 0, 0, 0, 0, 0, 0};//Sets arrays for x and y.
    double y[12] = {0, 0, 0, 0, 0};
    get_data (x, y);
    output (ofile, x, y);
}

void get_data(double current_data[], double previous_data[])
{
    ifstream in_stream1;
    ifstream in_stream2;
    in_stream1.open("rainfall_current.dat");

    if (in_stream1.fail( ))
    {
        cout << "Opening of current rainfall data failed. Please check that the file is saved properly." << endl;
    }

    in_stream2.open("rainfall_previous.dat");

    if (in_stream2.fail( ))
    {
        cout << "Opening of previous rainfall data fails. Please check that the file is saved properly." << endl;
    }
    for (int i = 0; i < 12; i++)
    {
        in_stream1 >> current_data[i];
        in_stream2 >> previous_data[i];
    }
}

void output(ofstream& ofile, double current_data[], double previous_data[])
{
    string file_name;
    cout << "Please enter the file name to be used to record data: ";
    cin >> file_name;
    ofile.open((file_name+".txt").c_str());//Adds .txt to the file_name theuser would like to use.

    int Month;
    Month--;
    for (int i = 1; i < 12; i++)
    {
        Month = i;

        ofile << endl;
        ofile << "************************" << endl;
        ofile << "::" << month[Month] << ":: " << endl;
        ofile << "Current: " << current_data[Month] << endl;
        ofile << "Previous: " << previous_data[Month] << endl;
        ofile << "Change: " << current_data[Month] - previous_data[Month] << endl;
        ofile << "*************************" << endl;
        ofile << endl;
    }

    ofile << setw(5) << "Month";
    ofile << setw(20) << "Current Rainfall";
    ofile << setw(15) << "Previous Rainfall";
    ofile << setw(15) << "Average Rainfall";
    ofile << endl;
    ofile << left;

    for (int i = 0; i < 75; i++)
    {
        ofile << "_";
    }
    ofile << endl;
    for (int i = 0; i < 12; i++)
    {
        ofile << setw(15) << month[i];
        ofile << setw(15) << current_data[i];
        ofile << setw(15) << previous_data[i];
        ofile << setw(10) << (current_data[i] - previous_data[i]) / 2 << endl;
    }
    ofile.close();
}
