/*
File Name: Exercise1.cpp
Description: Using your text editor, type in the C++ program shown
in figure 1.8. Then modify it to a division sign.
Date Created: 9/4/12
Author Name: Jonathan Villegas
Author's e-mail: jonathan.e.villegas@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello.\n";
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods: ";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod: ";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    cout << "Goodbye.\n";
    return 0;
}
