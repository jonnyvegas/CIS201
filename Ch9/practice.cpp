
#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;

void input(int *number, int& size);
void output(int *number, int& size);
void add(int *first, int first_size, int *second, int second_size,
          int *total, int& total_size);

int main()
{
    int *first = new int[20];
    int first_size;
    int *second = new int[20];
    int second_size;
    int *total = new int[20];
    int total_size;
    cout << "This program will add together two large integers." << endl;
    cout << "Please input an integer, 20 digits or less: ";
    input(first, first_size);
    cout << "You entered: " << endl;
    output (first, first_size);
    cout << endl;
    cout << "Please enter another integer, 20 digits or less: ";
    input(second, second_size);
    cout << "You entered: " << endl;
    output (second, second_size);
    cout << endl;
    cout << endl;
    cout << "The sum of the two numbers is: " << endl;
    output(first, first_size);
    cout << endl;
    output(second, second_size);
    cout << endl;
    cout << "-------------------------" << endl;
    add(first, first_size, second, second_size, total, total_size);
    output (total, total_size);
    cout << endl;
    return 0;
}

void input(int *number, int& number_size)
{
    char ch;
    int i = 0;
    number_size = 0;
    cin.get(ch);
    while ('\n' != ch)
    {
        *(number + i) - int(ch) - int('0');
        number_size++;
        i++;
        cin.get(ch);
    }
    for(int k = 0; k < (number_size / 2); k++)
    {
        int temp = *(number + k);
        *(number + k) = *(number + (number_size - 1 - k));
        *(number + (number_size - 1 - k)) = temp;
    }
}

void output(int *number, int& number_size)
{
    for (int k = 20; k >= number_size; k--)
    {
        cout << " ";
    }
    for (int i = number_size - 1; i >= 0; i--)
    {
        cout << *(number + i);
    }
}

void add(int *first, int first_size, int *second, int second_size, int *total, int& total_size)
{
    int carry = 0;
    int larger_size;
    if (first_size > second_size)
    {
        for (int i = second_size; i < first_size; i++)
        *(second + i) = 0;
        larger_size = first_size;
    }
    else
    {
        for (int i = first_size; i < second_size; i++)
        *(first + i) = 0;
        larger_size = second_size;
    }

    for (int i = 0; i < larger_size; i++)
    {
        *(total + i) = *(first + i) + *(second + i) + carry;
        if (*(total + i) > 9)
        {
            carry = 1;
            *(total + i) - *(total + i) - 10;
        }
        else
        {
            carry = 0;
        }
    }
    if (carry == 1)
    {
        if (larger_size == 20)
        {
        cout << "OVERFLOW!" << endl;
        cout << "Result set to 0." << endl;
        total_size = 1;
        *(total + 0) = 0;
        }
        else
        {
            *(total + larger_size) = carry;
            total_size = larger_size + 1;
        }
    }
    else
    {
        total_size = larger_size;
    }
}
