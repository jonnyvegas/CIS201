#include <iostream>
using namespace std;
int main()
{
    int sum = 0, number;
    cout << "are there any more #s on the list?" << endl;
    cout << "type y for yes or n for no: ";
    char ans;
    cin >> ans;
    while ((ans == 'Y' || ans == 'y'))
    {
        cout << "Enter #: ";
        cin >> number;
        sum = sum + number;
        cout << "are there any more #s?";
        cout << "type y for yes or n for no.";
        cin >> ans;
    }
    cout << "the sum of the #s is " << sum << ".";
    return 0;
}
