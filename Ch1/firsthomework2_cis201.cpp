/*
File Name: firsthomework2_cis201.cpp
Description: Write a C++ program that takes two integers and outputs both their sum and their product.
Date Created: 9/4/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    int x, y, z, p;
    cout << "Press return after entering a number.\n";
    cout << "Enter the first number to be multiplied:\n";
    cin >> x;
    cout << "Enter the second number to be multiplied:\n";
    cin >> y;
    z = x * y;
    cout << "If you take ";
    cout << x;
    cout << " and multiply it by ";
    cout << y;
    cout << ", then you have ";
    cout << z;
    cout << " as a product of ";
    cout << x;
    cout << " and ";
    cout << y;
    cout << ".\n";
    cout <<"Also, if you add ";
    cout << x;
    cout <<" and ";
    cout << y;
    cout << ", the sum is: ";
    p = x + y;
    cout << p;
    cout <<".";
    return 0;
}
