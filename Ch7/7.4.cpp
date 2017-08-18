#include <iostream>
const int NUMBER_OF_PLANTS = 4;

void input_data(int a[], int last_plant_number);

void get_total(int& sum);

int main()
{
    using namespace std;
    int production[NUMBER_OF_PLANTS];
    char ans;

    do
    {
        input_data(production, NUMBER_OF_PLANTS);
        cout << endl
             << "Total production for each"
             << " of plants 1 through 4:" << endl;
        for (int number = 1; number <= NUMBER_OF_PLANTS; number++)
        cout << production[number - 1] << " ";

        cout << endl
             << "Test again? y or n: ";
        cin  >> ans;
    }while ((ans!='N') && (ans != 'n'));
    cout << endl;

    return 0;
}

void input_data(int a[], int last_plant_number)
{
    using namespace std;
    for (int plant_number = 1; plant_number <= last_plant_number; plant_number++)
    {
        cout << endl
        << "enter production data for plant number " << plant_number << endl;
        get_total(a[plant_number-1]);
    }
}

void get_total(int& sum)
{
    using namespace std;
    cout << "Enter the number of units produced by each dept." << endl;
    cout << "Append a negative number to the end of the list." << endl;
    sum = 0;
    int next;
    while (next >= 0)
    {
        sum += next;
        cin >> next;
    }
    cout << "Total = " << sum << endl;
}
