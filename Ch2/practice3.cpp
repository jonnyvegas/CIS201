#include <iostream>
using namespace std;
int main()
{
    double balance = 50.00;
    int count = 0;
    cout << "This program tells you how long it takes" << endl;
    cout << "to accumulate a debt of $100, starting with" << endl;
    cout << "an initial balance of $50 owed." << endl;
    cout << "The interest rate is 2% per month." << endl;
    while (balance < 100.00)
    {
        balance = balance + .02 * balance;
        count++;
    }
    cout << "After " << count << "months," << endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "your balance due will be $" << balance << endl;
    return 0;
}
