#include <iostream>
using namespace std;
int main()
{
    char symbol1, symbol2, symbol3;
    cout << "Enter two initials, without any periods: " << endl;
    cin >> symbol1 >> symbol2;
    cout << "The two initials are: "<< endl;
    cout << symbol1 << symbol2 << endl;
    cout << "Once more with a space: " << endl;
    symbol3 = ' ';
    cout << symbol1 << symbol3 << symbol2 << endl;
    cout << "That's all." << endl;
    return 0;
}
