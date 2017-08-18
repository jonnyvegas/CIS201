#include<iostream>
#include<cmath>

using namespace std;

int promptdiameter(const char prompt[]);
double promptprice(const char prompt[]);
double unitprice(int diameter,double price);

int main()
{
    // prompt user for the smaller diameter
	double area;
	int small_diameter = promptdiameter("Enter the diameter of the smaller pizza: ");
	double small_price = promptprice("Enter the price of the smaller pizza: ");
	int large_diameter = promptdiameter("Enter the diameter of the larger pizza: ");
	double large_price = promptprice("Enter the price of the larger pizza: ");
	//cout << small_diameter << endl;
	//cout << small_price << endl;
	//cout << large_diameter << endl;
	//cout << large_price << endl;
    cout << unitprice(small_diameter,small_price) << endl;
    cout << unitprice(large_diameter,large_price) << endl;

	return 0;
}

int promptdiameter(const char prompt[]) {
	int diameter;
	cout << prompt;
	cin >> diameter;
	return diameter;
}

double promptprice(const char prompt[]) {
	double price;
	cout << prompt;
	cin >> price;
	return price;
}

double unitprice(int diameter,double price) {
    double area = M_PI * pow(diameter / 2.0,2);
	return price / area;
}
