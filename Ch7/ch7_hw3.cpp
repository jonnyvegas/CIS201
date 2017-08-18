/*
Name: Jonathan Villegas
Filename: ch7_hw3.cpp
Description: Design a program that will add two large numbers of 20
digits or less and outputs the result to the screen.
Date: 12/3/12
e-mail address: jonathan.e.villegas@gmail.com
*/

#include <iostream>
#include <cstdlib>
using namespace std;
const int MAX = 20;//Maximum number of digits

void input(int number[], int& size);
//Postcondition: Array size will be set to the number input by the user.
void output(const int number[], int size);
void add(int first_num[], int first_size, int second_num[], int second_size,
         int total[], int& total_size);
int main()
{
    char choice = 'Y';
    do
    {
    int first_num[MAX + 1];
    int first_size;
    int second_num[MAX + 2];
    int second_size;
    int total[MAX + 1];
    int total_size;

    cout << "This program will add together two" << endl;
    cout << "large numbers of 20 digits or less and add them together." << endl;
    cout << "Please enter a large intger with 20 digits or less: ";

    input(first_num, first_size);

    cout << "You entered: " << endl;

    output(first_num, first_size); //Echo's user's 1st number input

    cout << endl;
    cout << "Please enter another large integer with 20 digits or less: " << endl;

    input(second_num, second_size);

    cout << "You entered: " << endl;

    output(second_num, second_size); //Echo's user's 2nd number input

    cout << endl;
    cout << "The sum is: " << endl;

    output(first_num, first_size);

    cout << endl;

    output (second_num, second_size);

    cout << endl;
    cout << "-------------------------" << endl;

    add(first_num, first_size, second_num, second_size, total, total_size); //adds the numbers together
    output(total, total_size);
    cout << endl;
    cout << "Would you like to run the program again? Y or N: ";
    cin >> choice;
    }while (choice == 'y' || choice == 'Y');
    return 0;
}

void input(int num[], int& size)
{
    char a;
    int i = 0;
    size = 0;
    cin.get(a);
    while( '\n' != a )
    {
    num[i] = int(a) - int('0');
    size++;
    i++;
    cin.get(a);
    }
    if ( size > 20 )
    {
        cout << "Your number is too large. This program will now end.";
        exit(1);
    }
    for (int c = 0; c < size / 2; c++)
    {
        int temp = num[c];
        num[c] = num[ size - 1 - c ];
        num[ size - 1 - c ] = temp;
    }
}

void output(const int number[], int number_size)
{
    for (int i = 20; i >= number_size; i--)
       cout << " ";
    for (int i = number_size - 1; i >= 0; i--)
       cout << number[i];
}

void add(int first_num[], int first_size, int second_num[], int second_size,
         int total[], int& total_size)
{
    int holder = 0;
    int bigger_size;

    if (first_size > second_size)
    {
        for(int i = second_size; i < first_size; i++)
        {
            second_num[i] = 0;
            bigger_size = first_size;
        }
    }
    else
    {
        for(int i = first_size; i < second_size; i++)
        {
        first_num[i] = 0;
        bigger_size - second_size;
        }
    }
    for (int i = 0; i < bigger_size; i++)
    {
        total[i] = first_num[i] + second_num[i] + holder;
        if(total[i] > 9)
        {
            holder = 1;
            total[i] = total[i] - 10;
        }
        else
           holder = 0;
    }
    if (1 == holder)
    {
        if(bigger_size == 20)
        {
        cout << "Numbers have caused an overflow. The result will be set to 0." << endl;
        total_size = 1;
        total[0] = 0;
        }
        else
        {
        total[bigger_size] = holder;
        total_size = bigger_size +1;
        }
   }
   else
   total_size = bigger_size;
}
