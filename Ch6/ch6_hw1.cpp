/*
File Name: ch6_hw1.cpp
Description: Write a program that takes numbers from one input file, adds them up,
and averages them. The average is then written to an output data file.
Date Created: 10/22/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

void add_file_nums(ifstream& in_stream, ofstream& out_stream);
//Precondition: The numbers are in the data files and are ready to be read by the program.
//Postcondition: The numbers are written to the output file and averaged
//together, with the average being written to the output file.
int main()
{
    ifstream in_stream;
    ofstream out_stream;

    char input_file[30];
    char output_file[40];

    cout << "This program will take numbers as input from a file" << endl;
    cout << "and average them, then output them to an output file." << endl;
    cout << "Please enter the name of the file to open: ";
    cin  >> input_file;
    cout << "Please enter the name of the file for output: ";
    cin  >> output_file;

    in_stream.open(input_file);
    if(in_stream.fail( ))
      {
          cout << "Input file opening failed.";
          exit(1) ;
      }

    out_stream.open(output_file);
    if(out_stream.fail( ))
      {
          cout << "Output file opening failed.";
          exit(1) ;
      }
    add_file_nums(in_stream, out_stream);
    in_stream.close();
    out_stream.close();
}
void add_file_nums(ifstream& in_stream, ofstream& out_stream)
{
        double next, sum = 0;
 		int count = 0;
 		cout << "Files being written...";
 		ifstream dataFile("input1.dat");
 		while(in_stream >> next)
  	    {
  	        cout << next;
  	        if (next == '\n')
  	        {
  	            count++;

  	        }
			sum += next;
 			count++;
 		}
            double average = sum / count;
            out_stream << "The average number is: " << average;
    }
