#include <iostream>
#include <cmath>

void scale (int a[], int size);

double round(double number);

int main()
{
    using namespace std;
    int some_array[4], index;
    cout << "enter 4 number to scale: ";
    for (index = 0; index < 4; index++)
    cin >> some_array[index];
    scale(some_array, 4);
    cout << "Values scaled to the number of 1000s are: ";
    for (index = 0; index < 4; index ++)
    cout << some_array[index] << " ";
    cout << endl;
    return 0;
}

void scale (int a[], int size)
{
    for (int index = 0; index < size; index++)
    a[index] = round(a[index]/1000.0);
}

double round(double number)
{
    using namespace std;
    return static_cast<double>(floor(number + 0.5));
}
