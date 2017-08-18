/*
File: Rainfall.cpp (Version 3)
Description: Write a program that reads in the average monthly rainfall for a city for each month
of the year and then reads in the actual monthly rainfall for each of the previous 12 months. The program
then prints out a nicely formnatted table showing the rainfall for each of the previous 12 months as well
as how much below or above average the rainfall was for each month. The average monthly rainfall is given
for months January-December in order. To obtain the actual rainfall for the previous 12 months, the program first
asks what the current month is and then asks for the rainfall figures for the previous 12 months.

After you have completed this program, produce an enhanced version that also outputs a graph showing the
acerage rainfall and the actual rainfall for each of the previous 12 months. Your program should also ask the
user whether they want to see the table or the graph. Include a loop that allows the user tos eee either format as
many times as they wish until they end the program.

For a more elaborate version, also allow the user to request the table be output to a file of which the name is
entered by the user. This program does everything that version 1 does.

This version is like version 1 except that input is taken from a file and the output is sent to a file. There is no user to interact
with, so there should be no loops to loop the program.

*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

// Gives the array strings for each of the 12 months. Sets a constant array.
const string month[12]= {"January", "February", "March",
                         "April", "May", "June",
                        "July", "August", "September",
                        "October", "November", "December"};


// Precondition: Declares the arrays for the current and previous data.
void read_data ( double current_data [], double previous_data [] );

void output( ofstream& ofile, double current_data [], double previous_data [] );

int main ()
{
    // Sets the max character.
    char file_name (20);
    ofstream ofile;
    // Sets the arrays fr the outputs of x and y.
    double x[12] = {0,0,0,0,0,0,0,0};
    double y[12] = {0,0,0,0,0};

    read_data(x, y);

    output (ofile, x, y );
}

// Functions
void read_data ( double current_data [], double previous_data [] )
{
    // Calls to open the files of both the previous and rainfall.dat.
    ifstream instream_1;
    ifstream instream_2;

// Opens rainfall current.
    instream_1.open ( "rainfall_current.dat" );

    // If the file fails to open it will close the program and output the statement.
    if ( instream_1.fail( ) )
    {
        cout << "Please check if the file is saved properly. It could not open." << endl;
    }

// Opens previous rainfall.
    instream_2.open ( "rainfall_previous.dat" );

    // If the file fails to open it will close the program and output the statement.
    if ( instream_2.fail( ) )
    {
        cout << "Please check if the file is saved properly. It could not open." << endl;
    }

    // Loops the program until all of the elements in the array are filled.
    for( int i =0; i < 12; i++ )
    {
        // Will fill the array as long as there are < 12 numbers. After it will not fill them anymore.
        instream_1 >> current_data[i];
        instream_2 >> previous_data[i];
    }
}

// Will input info to a file and writes the info to the file and saves it.
void output( ofstream& ofile, double current_data [], double previous_data [] )
{
    // Strings are better for file names
    string file_name;

    cout << "What would you like to call your file? ";
    cin >> file_name;
    // User inputted name
    ofile.open((file_name+".txt").c_str());

        int Month;

        Month--;   // adjust the month number to match the array indices

        for ( int i = 1; i < 12; i++) // Fills the data
        {
            Month = i;

            ofile << "*************************" << endl;
            ofile << "::" <<  month[Month]   << ":: " << endl;
            ofile << "Current: " << current_data[Month] << endl;
            ofile << "Previous: " << previous_data[Month] << endl;
            ofile << "Change: " << current_data[Month] - previous_data[Month] << endl;
            ofile << "*************************" << endl;
            ofile << endl;
        }

        // Sets up the bar graph/spacing for the bar graph.
        ofile << setw(5) << "Month";
        ofile << setw(20) << "Current RF";
        ofile << setw(15) << "Previous RF";
        ofile << setw(15) << "Average RF";
        ofile << endl;
        ofile << left;

    // Loops the output of _ until it is met. It sets up a boarder for the programs bar graph.
        for(int i=0; i<75; i++)
        {
        ofile << "_";
        }
    // Additional spacing.
    ofile << endl;

    // Sets up the spacing and outputs of the averages/data for the program below the boarder.
    for ( int i = 0; i < 12; i++ )
    {
        ofile << setw(15) << month[i];
        ofile << setw(15) << current_data[i];
        ofile << setw(15) << previous_data[i];
        ofile << setw(10) <<(current_data[i] + previous_data[i] ) / 2 << endl;
    }
    // Closes the file
    ofile.close();
}
