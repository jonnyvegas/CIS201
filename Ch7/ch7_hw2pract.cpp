// Ch7Prob4.cpp
//
// Define a function that takes a partially filled array of doubles
// as one of two arguments (the other is the size), and returns the
// standard deviation of the numbers in the partially filled array.
// Embed in a program and test.
#include <iostream>
#include <cmath>
using namespace std;
const int MAX_SIZE = 10;
// Pre: size <= declared size of the array argument
// Post: return the standard deviation first size array elements
// Note: The divisor is the size, not size - 1 as some
// formuals call for.
double stdDev(double s[], int size);
// Pre: size <= declared size of the array argument
// Post: return the mean of the first size array elements
double average(double s[], int size);
int main()
{
double s[MAX_SIZE];
double stdDeviation, avg;
char ans;
do
{
cout << "Enter " << MAX_SIZE << " values, separated by\n"
<< " white space, Terminated each with <cr>. \n"
<< "I will compute the standard deviation.\n";
for(int i = 0; i < MAX_SIZE; i++)
cin >> s[i];
stdDeviation = stdDev(s, MAX_SIZE);
cout << "The Standard Deviation is: "
<< stdDeviation << endl;
cout << "Y/y continues, any other quits.\n";
cin >> ans;
} while(ans == 'y' || ans == 'Y');
return 0;
}
double stdDev(double s[], int size)
{
double sumSquares = 0;
double avg = average(s, size);
for(int i = 0; i < size; i++)
sumSquares += (s[i] - avg) * (s[i] - avg);
return sqrt(sumSquares / size);
}
double average(double s[], int size)
{
double sum = 0;
for(int i = 0; i < size; i++)
sum += s[i];
return sum / size;
}
