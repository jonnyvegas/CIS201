/*
Name: Jonathan Villegas
Filename: jvfinal.cpp
Description: In this problem you will re-create the classic race of the tortoise and the hare.
You will use random-number generation to develop a simulation of this memorable event.
Date: 12/9/12
e-mail address: jonathan.e.villegas@gmail.com
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iomanip>
using namespace std;

void tortoise(int& ptr, int rand, int max);
void hare(int& ptr, int rand, int max);

int main()
{
    string winner = "NONE!";
    vector<char> square(70);//array of squares

    int maximum = square.size() - 1;
    int pointerTortoise = 0;
    int pointerHare = 0;

    for (int i = 0; i < square.size(); i++)//loop to repeat 70 times
    {
        int randomTortoise = rand() % 10 + 1;
        int randomHare = rand() % 10 + 1;

        cout << "Updating the race..." << endl;

        for (int x = 0; x < square.size(); x++)
        {
            if ((pointerTortoise == x) && (pointerHare == x))
            {
                if (x == 0)
                {
                    square.at(0) = 'S';
                }
                else
                {
                    square.at(x) = 'X';
                }
            }
            else if (pointerTortoise == x)
            {
                square.at(x) = 'T';
            }
            else if (pointerHare == x)
            {
                square.at(x) = 'H';
            }
            else
            {
                square.at(x) = '-';
            }
       }
       for (int y = 0; y < square.size(); y++)
       {
           cout << square.at(y) << " ";
       }

       cout << endl;
       cout << endl;

       if (pointerTortoise == maximum)
       {
           winner = "TORTOISE!";
           break;
       }
       if (pointerHare == maximum)
       {
           winner = "HARE!";
           break;
       }
       cout << "Tortoise: " << setw(5) << " ";
       tortoise(pointerTortoise, randomTortoise, maximum);
       cout << "Hare: " << setw(9) << " ";
       hare(pointerHare, randomHare, maximum);
    }
    cout << "And the winner is..." << winner << endl;
    return 0;
}

void tortoise(int& ptr, int rand, int max)//Tortoise movement function
{
    if ((rand >= 1) && (rand <= 5))
    {
        cout << "FAST PLOD!" << setw(5) << " ";
        cout << "Advance to square " ;
        ptr += 3;//move 3 squares right
        if (ptr > max)
        {
            ptr = max;
        }
        cout << ptr << endl;
    }
    else if ((rand == 6) || (rand == 7))
    {
        cout << "SLIP!" << setw(10) << " ";
        cout << "Return to square ";
        ptr -= 6;//move 6 squares left
        if (ptr < 0)
        {
            ptr = 0;
        }
        cout << ptr << endl;
    }
    else if ((rand >= 8) && (rand <= 10))
    {
        cout << "SLOW PLOD!" << setw(5) << " ";
        cout << "Return to square ";
        ptr += 1;//move 1 square right
        if (ptr > max)
        {
            ptr = max;
        }
        cout << ptr << endl;
    }
}

void hare(int& ptr, int rand, int max)//hare movement function
{
    if ((rand == 1) || (rand == 2))
    {
        cout << "SLEEP!" << setw(6) << " ";
        cout << "Stay at square " << ptr << endl;
    }
    else if ((rand == 3) || (rand == 4))
    {
        cout << "BIG HOP!" << setw(7) << " ";
        cout << "Advance to square ";
        ptr += 9;//move 9 squares right
        if (ptr > max)
        {
            ptr = max;
        }
        cout << ptr << endl;
    }
    else if (rand == 5)
    {
        cout << "BIG SLIP!" << setw(5) << " ";
        cout << "Return to square ";
        ptr -= 12;//move 12 squares left
        if (ptr < 0)
        {
            ptr = 0;
        }
        cout << ptr << endl;
    }
    else if(rand == 6 || rand == 7 || rand == 8)
    {
        cout << "SMALL HOP!" <<setw(5) <<" ";
        cout << "Advance to square " ;
        ptr += 1;
        if(ptr > max)
        {
            ptr = max;
        }
        cout << ptr << endl;
    }
    else if(rand == 9 || rand == 10)
    {
        cout << "SMALL SLIP!" << setw(4) <<" ";
        cout << "Return to square " ;
        ptr -= 2;
        if(ptr < 0)
        {
            ptr = 0;
        }
        cout <<  ptr << endl;
   }
}
