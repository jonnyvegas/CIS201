/*
File Name: Exercise1.cpp
Description: Using your text editor, type in the C++ program shown
in figure 1.8.
Date Created: 9/4/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    int loopCount, beta;
 loopCount = 20;
beta = 10;
while (loopCount < 51)
{
beta = beta + 5;
loopCount++;
}
cout << loopCount;
}
