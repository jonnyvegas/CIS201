/*
*/

#include <iostream>
using namespace std;
class Month
{
    public:
    Month(char c1, char c2, char c3);
    Month(int monthNumber);
    Month();
    void getMonthByNum(istream&);
    void getMonthByName(istream&);
    void outputMonthNum(ostream&);
    void outputMonthName(ostream&);
    Month nextMonth();
    int monthNumber();

    private:
    int mnth;
};

int main()
{
    cout << "testing constructor Month (char, char, char)" << endl;
    Month m;
    m = Month ('j', 'a', 'n');
    m.outputMonthNum( cout ); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('f', 'e', 'b');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('m', 'a', 'r');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('a', 'p', 'r');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('m', 'a', 'y');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('j', 'u', 'n');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('j', 'u', 'l');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('a', 'u', 'g');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('s', 'e', 'p');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('o', 'c', 't');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('n', 'o', 'v');
    m.outputMonthNum(cout); cout << " ";

    m.outputMonthName( cout ); cout << endl;
    m = Month ('d', 'e', 'c');
    m.outputMonthNum(cout); cout << " ";

    cout << endl << "Testing Month (int) constructor" << endl;
    int i = 1;

    cout << endl;
    cout << "Testing getMonthByNum and outputMonth" << endl;

    i = 1;

    m.getMonthByNum(cin);
    m.outputMonthNum(cout); cout << " ";
    cout << endl << "end of loops" << endl;
    cout << endl << "Testing nextMonth member" << endl;
    cout << "Current Month: ";
    m.outputMonthNum(cout); cout << endl;
    cout << "Next Month: ";
    m.nextMonth().outputMonthNum(cout); cout << " ";
    m.nextMonth().outputMonthName(cout); cout << endl;
    cout << endl << "New month Created: " << endl;
    Month mo(6);
    cout << "Current month: ";
    mo.outputMonthNum(cout); cout << endl;
    cout << "Next Month: ";
    mo.nextMonth().outputMonthNum(cout); cout << " ";
    mo.nextMonth().outputMonthName(cout); cout << endl;

    return 0;
}
