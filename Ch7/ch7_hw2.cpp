/*
Name: Jonathan Villegas
Filename: ch7_hw3.cpp
Description: Design a program that will deal with the standard deviation of n number of numbers.
Date: 12/3/12
e-mail address: jonathan.e.villegas@gmail.com
*/

#include <iostream>
#include <cmath>
using namespace std;

double std_deviation(double s[], int n);

int main()
{
    double s[100];
    double mean, deviation;
    int i, n;

    cout << "Enter the value for n (the number of values to find): ";
    cin >> n;
    cout << "Enter the values: " << endl;
    for (i = 0; i < n; i++)
        cin >> s[i];
    deviation = std_deviation(s, n);
    cout << "Standard deviation: " << deviation << endl;
    return 0;
}

double std_deviation(double s[], int n)
{
    double sd = 0;
    double mean = 0;
    for(int i = 0; i < n; i++)
    {
        mean = mean + s[i];
        mean = mean / n;
    }
    for(int i = 0; i < n; i++)
        {
        sd = (sd + pow((s[i] - mean),2));
        sd = (sd / n);
        sd = sqrt(sd);
        return sd;
        }
}
