#include <iostream>
using namespace std;
int main ()

{
    int input;
    cout << "enter a number greater than 10" << endl;
    cout << "to break out of this loop.";
    cin >> input;

    while (input < 10)
    {
    cout << "enter a number greater than 10" << endl;
    cout << "to break out of this loop. ";
    cin >> input;
    }
    return 0;
}
