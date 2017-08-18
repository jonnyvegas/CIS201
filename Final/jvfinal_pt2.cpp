/*
Name: Jonathan Villegas
Filename: jvfinal_pt2.cpp
Description: The Bite-a Vite-a vitamin store needs an "expert" computer programmer to help keep track of their inventory.
The store maintains all their vitamin stock information on disk.
Date: 12/9/12
e-mail address: jonathan.e.villegas@gmail.com
*/

#include<iostream>
#include<cmath>
char vitamin;
double unit_price, number_of_jars, total;
double total_value(double unit_price, double number_of_jars);
using namespace std;

int main()
{
    cout << "This program will have you input the name of a vitamin," << endl;
    cout << "the price, and the quantity. It will then give you the total" << endl;
    cout << "inventory in a table." << endl;
	double total;
	cout << "Please enter the name of the vitamin: " << endl;

	cin >> vitamin;

	cout << "Please enter the price of the item: " << endl;
	cin >> unit_price;

	cout << "Please enter the quantity of the item: " << endl;
	cin >> number_of_jars;

    cout << "Vitamin    Price       Inventory      Total Inventory " << endl;
    cout << "-----------------------------------------------------" << endl;

   total = total_value(unit_price,number_of_jars);


   cout << vitamin << "          " << unit_price << "               "
        << number_of_jars << "               " << total;
	  return 0;
}
	double total_value(double unit_price, double number_of_jars)
	{


	return (unit_price * number_of_jars);

	}
