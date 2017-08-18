#include <iostream>
#include <cmath>
const int NUMBER_OF_PLANTS = 4;

void input_data(int a[], int last_plant_number);

void scale(int a[], int size);

void graph(const int asterisk_count[], int last_plant_number);

void get_total(int& sum);

double round(double number);

void print_asterisks(int n);

int main()
{
    using namespace std;
    int production[NUMBER_OF_PLANTS];

    cout << "This program displays a graph showing" << endl;
    cout << "production for each plant in the company." << endl;

    input_data(production, NUMBER_OF_PLANTS);
    scale(production, NUMBER_OF_PLANTS);
    graph(production, NUMBER_OF_PLANTS);
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

void get_total (int& sum)
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
void scale(int a[], int size)
{
    for (int index = 0; index < size; index++)
    a[index] = round(a[index]/1000.0);
}

double round(double number)
{
    using namespace std;
    return static_cast<int>(floor(number + 0.5));
}

void graph(const int asterisk_count[], int last_plant_number)
{
    using namespace std;
    cout << "\n units produced in thounsands of units:\n";
    for (int plant_number = 1; plant_number <= last_plant_number; plant_number++)
    {
        cout << "Plant #" << plant_number << " ";
        print_asterisks(asterisk_count[plant_number - 1]);
        cout << endl;
    }
}

void print_asterisks(int n)
{
    using namespace std;
    for (int count = 1; count <= n; count ++)
    cout << "*";
}
