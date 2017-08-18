#include <iostream>
using namespace std;
int main()
{
    int n=0;
    double guess;
    double pguess;

    cout << "Enter the number to find sqroot :";
    cin >> n;
    guess = n / 2.0;
    pguess = guess;
    double r = n / guess;
    guess = (guess + r) /2;
    while ( (pguess - guess) / 100 >0.01 )
    {
        double r = n / guess;

    }

    return 0;
}
