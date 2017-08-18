/*
Name: Jonathan Villegas
Filename: ch10_hw1.cpp
Description: Define a class for a type called CounterType.
Date: 12/12/12
e-mail address: jonathan.e.villegas@gmail.com
*/
#include <iostream>
#include <cmath>
using namespace std;

class CounterType
{
    public:
    void set(int start, int count);
    void input(int start, int count);
    void update_pos();
    void update_neg();

    int input_count();
    int counts_remaining();

    void output(ostream& outs);

    private:

    int start;
    int counts;

};

int main()
{
    CounterType counter;
    int input_count;
    int counts_remaining;
    char ans;

    cout << "If you would like to add a number of counts that is negative," << endl;
    cout << "set count to negative." << endl;

    counter.set(0,0);

    cout << "Commence the count. Count is set to 0." << endl;

    counter.output(cout);

    cout << endl;
    cout << "Enter the starting number for the counter and press Enter." << endl;
    cout << "Then, enter the number of counts and press Enter." << endl;

    cin >> input_count >> counts_remaining;

    cout << "Count up or down? Enter U for up and D for down." << endl;

    cin >> ans;

    if((ans == 'U') || (ans == 'u'))
    {
        counter.update_pos();
    }

    else if((ans == 'D') || (ans == 'd'))
    {
        counter.update_neg();
        int start_number;
        int counter;
        if(start_number <= 0)
        {
            cout << "ERROR!";
            counter = 0;
        }
    }

    cout << "After the update, your count is: ";
    counter.output(cout);
    return 0;
}

void CounterType::input(int start, int count)
{
    if (start < 0)
    {
        cout << "Improper numbers!!" << endl;
        exit(1);
    }
    start = count;
    counts = count;
}

void CounterType::set(int start, int count)
{
    if (start < 0)
    {
        cout << "Improper numbers!" << endl;
        exit(1);
    }
    start = count;
    counts = count;
}

void CounterType::update_pos()
{
    start = start + 1;
    start = start + counts;
    counts = 0;
}

void CounterType::update_neg()
{
    start = start - 1;
    start = start + counts;
    counts = 0;
}

int CounterType::input_count()
{
    return start;
}

int CounterType::counts_remaining()
{
    return counts;
}

void CounterType::output(ostream& outs)
{
    outs.setf(ios::fixed);
    outs.setf(ios::showpoint);
    outs.precision(0);
    outs << "Number after count so far is: " << start << endl;
    outs << "Number of counts remaining: " << counts << endl;
}
