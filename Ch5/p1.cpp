#include <iostream>

void initialize_screen();
//separates current output from previous.

double celsius(double farenheit);
//function to calculate conversion of celsius to farenheit

void show_results(double f_degrees, double c_degrees);
//displays output

using namespace std;

int main()
{
    double f_temperature, c_temperature;

    initialize_screen();
    cout << "I will convert from a farenheit temperature" << endl;
    cout << "to celsius." << endl;
    cout << "Enter a temperature in farenheit: ";
    cin >> f_temperature;

    c_temperature = celsius(f_temperature);

    show_results(f_temperature, c_temperature);
    return 0;
}

void initialize_screen()
{
    cout << endl;
    return;
}

double celsius(double farenheit)
{
    return ((5.0/9.0) * (farenheit - 32));
}

void show_results(double f_degrees, double c_degrees)
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << f_degrees << "farenheit is equal to " << c_degrees << " celsius.";
    return;
}
