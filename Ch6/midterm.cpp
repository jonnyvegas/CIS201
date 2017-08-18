/*
File Name: midterm.cpp
Description: Write a program that has a fibonacci number calculating function.
The function will take an integer as a parameter which is the fibonacci number
to calculate, and return the fibonacci number. Then use this function to
calculate the sum of every fibonacci number that is divisible by
3 or 5, (hint - use modulus division). Do this for all fibonacci
numbers less than 4,000,000. Make sure that you document your program.
Date Created: 10/23/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;

void intro();//Introduces the program to the user.
void getnum(int&);
//Precondition: User knows how many numbers of the Fibonacci sequence they would like added together.
//Postcondition: User enters number of the Fibonacci sequence they would like to be added up to.
void fib(int&);
//Precondition: Number of Fibonacci sequence numbers is entered by user and the program will figure out what the sum is.
//Postcondition: The sum of the number of Fibonacci numbers is written to the screen.
void outro();//Outro to user.

int main()
{
    int n;
    intro();
    getnum(n);
    fib(n);
    outro();
    return 0;
}

void intro()
{
    cout << "This program will take a specific amount of Fibonacci numbers (up to 4,000,000) " << endl;
    cout << "and add up the total that are divisible by either 3 or 5." << endl;
}
void getnum(int& n)
{
    cout << endl;
    cout << "Enter the amount of Fibonacci numbers you would like to know." << endl;
    cout << "Please enter no more than 33.: ";//33 is the maximum number of Fibonacci numbers that can be added under 4,000,000.
    cin  >> n;
}

void fib(int& n)
{
    int current = 1;
    int previous = 1;
    int ftotal = 0;
    int mtotal = 0;
    int count = 0;

    for (count = 0; count <= n; count++)
    {
        if (count == 0)
        {
        ftotal = 0;
        count++;
        }
        if ((count == 1) || (count == 2))
        {
            count = 1;
            count ++;
        }
        while ((count >=3) && (count <= n))
        {
            ftotal = current + previous;
            previous = current;
            current = ftotal;

            if ((ftotal % 3 == 0)|| (ftotal % 5 ==0))
            {
                mtotal = ftotal + mtotal;
            }
            count++;
        }
    }
    cout << endl;
    cout << "The total after adding the Fibonacci numbers" << endl;
    cout << "divisible by either 3 or 5 is: " << mtotal << endl;
}
void outro()
{
    cout << "Thank you for using the Fibonacci program. Have a nice day!" << endl;
}
