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

void tortoise(int& pos, int rand, int max);//Function to generate tortoise's position
void hare(int& pos, int rand, int max);//Function to generate hare's position

int main()
{
    vector<char> sq(70);//array of squares
    int maximum = sq.size() - 1;
    int posTortoise = 0;//position of tortoise
    int posHare = 0;//position of hare
    string winner = "TIE!";
    cout << "BANG!" << endl;
    cout << "AND THEY'RE OFF!" << endl;

    for (int i = 0; i < sq.size(); i++)//loop to repeat 70 times
    {
        int randomTortoise = rand() % 10 + 1;//Random number from 1-10 for tortoise
        int randomHare = rand() % 10 + 1;//Random number from 1-10 for hare

        cout << "Updating the race..." << endl;

        for (int x = 0; x < sq.size(); x++)
        {
            if ((posTortoise == x) && (posHare == x))
            {
                if (x == 0)
                {
                    sq.at(0) = 'S';
                }
                else
                {
                    sq.at(x) = 'X';
                    cout << "OUCH!" << endl;
                }
            }
            else if (posTortoise == x)
            {
                sq.at(x) = 'T';
            }
            else if (posHare == x)
            {
                sq.at(x) = 'H';
            }
            else
            {
                sq.at(x) = '-';
            }
       }
       for (int y = 0; y < sq.size(); y++)
       {
           cout << sq.at(y) << " ";
       }

       cout << endl;
       cout << endl;

       if (posTortoise == maximum)
       {
           winner = "TORTOISE WINS!!! YAY!";
           break;
       }
       if (posHare == maximum)
       {
           winner = "HARE WINS... YAWN...";
           break;
       }
       cout << "Tortoise: " << setw(5) << " ";
       tortoise(posTortoise, randomTortoise, maximum);
       cout << "Hare: " << setw(9) << " ";
       hare(posHare, randomHare, maximum);
    }
    cout << "WINNER: " << winner << endl;
    return 0;
}

void tortoise(int& pos, int rand, int max)//Tortoise movement function
{
    if ((rand >= 1) && (rand <= 5))
    {
        cout << "FAST PLOD!" << setw(5) << " ";
        cout << "Advance to square " ;
        pos += 3;//move 3 squares right
        if (pos > max)
        {
            pos = max;
        }
        cout << pos << endl;
    }
    else if ((rand == 6) || (rand == 7))
    {
        cout << "SLIP!" << setw(10) << " ";
        cout << "Return to square ";
        pos -= 6;//move 6 squares left
        if (pos < 0)
        {
            pos = 0;
        }
        cout << pos << endl;
    }
    else if ((rand >= 8) && (rand <= 10))
    {
        cout << "SLOW PLOD!" << setw(5) << " ";
        cout << "Return to square ";
        pos += 1;//move 1 square right
        if (pos > max)
        {
            pos = max;
        }
        cout << pos << endl;
    }
}

void hare(int& pos, int rand, int max)//hare movement function
{
    if ((rand == 1) || (rand == 2))
    {
        cout << "SLEEP!" << setw(6) << " ";
        cout << "Stay at square " << pos << endl;
    }
    else if ((rand == 3) || (rand == 4))
    {
        cout << "BIG HOP!" << setw(7) << " ";
        cout << "Advance to square ";
        pos += 9;//move 9 squares right
        if (pos > max)
        {
            pos = max;
        }
        cout << pos << endl;
    }
    else if (rand == 5)
    {
        cout << "BIG SLIP!" << setw(5) << " ";
        cout << "Return to square ";
        pos -= 12;//move 12 squares left
        if (pos < 0)
        {
            pos = 0;
        }
        cout << pos << endl;
    }
    else if(rand == 6 || rand == 7 || rand == 8)
    {
        cout << "SMALL HOP!" <<setw(5) <<" ";
        cout << "Advance to square " ;
        pos += 1;
        if(pos > max)
        {
            pos = max;
        }
        cout << pos << endl;
    }
    else if(rand == 9 || rand == 10)
    {
        cout << "SMALL SLIP!" << setw(4) <<" ";
        cout << "Return to square " ;
        pos -= 2;
        if(pos < 0)
        {
            pos = 0;
        }
        cout <<  pos << endl;
   }
}
