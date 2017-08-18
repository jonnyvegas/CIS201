/*
Name: Jonathan Villegas
Filename: ch9_hw1.cpp
Description: Write a program that takes the user ID number and logs them into a computer lab.
The program will display what computer the user is logged into and give the option to search
login, or logoff.
Date: 12/5/12
e-mail address: jonathan.e.villegas@gmail.com
*/
#include <iostream>
#include <cstdlib>
using namespace std;

typedef int* integer_pointer;

const int NUMBER_OF_LABS = 4;

void create(integer_pointer labs[], int labsizes[]);
void freeMem(integer_pointer labs[]);
void show(integer_pointer labs[], int labsizes[]);
void login(integer_pointer labs[], int labsizes[]);
void logoff(integer_pointer labs[], int labsizes[]);
void search(integer_pointer labs[], int labsizes[]);

int main()
{
    integer_pointer labs[NUMBER_OF_LABS];
    int labsizes[NUMBER_OF_LABS];
    int choice = -1;

    labsizes[0] = 5; //Five computers are in lab 1
    labsizes[1] = 6; //Six in lab 2
    labsizes[2] = 4; //4 in lab 3
    labsizes[3] = 3; //3 computers in lab 4

    create(labs, labsizes);

    while (choice != 0)
    {
        cout << endl;
        show(labs, labsizes);
        cout << "Main Menu" << endl;
        cout << "0) Quit" << endl;
        cout << "1) Login" << endl;
        cout << "2) Logoff" << endl;
        cout << "3) Search" << endl;
        cin >> choice;
        if (choice == 1)
        {
            login(labs, labsizes);
        }
        else if (choice == 2)
        {
            logoff(labs, labsizes);
        }
        else if (choice == 3)
        {
            search(labs, labsizes);
        }
        freeMem(labs);
    }
    return 0;
}

void create(integer_pointer labs[], int labsizes[])
{
    int i, j;
    for (i = 0; i < NUMBER_OF_LABS; i++)
    {
        labs[i] = new int[labsizes[i]];
        for (j = 0; j < NUMBER_OF_LABS; j++)
        {
            labs[i][j] = -1; //unused computer
        }
    }
    return;
}

void freeMem(integer_pointer labs[])
{
    int i;
    for (i = 0; i < NUMBER_OF_LABS; i++)
    {
        delete [] labs[i];
    }
    return;
}

void show(integer_pointer labs[], int labsizes[])
{
    int i, j;
    cout << "Lab Number Computer Stations" << endl;
    for (i = 0; i < NUMBER_OF_LABS; i++)
    {
        cout << (i + 1) << " ";
        for (j = 0; j < NUMBER_OF_LABS; j++)
        {
            cout << (j + 1) << ": ";
            if (labs[i][j] == -1)
            {
                cout << "empty ";
            }
            else
            {
                cout << labs[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void login(integer_pointer labs[], int labsizes[])
{
    int ID = -1, lab = -1, num = -1;
    while ((ID < 0) || (ID > 99999))
    {
        cout << "Please enter the ID number of the user's login: " << endl;
        cin >> ID;
    }
    while ((lab < 0) || (lab > NUMBER_OF_LABS))
    {
        cout << "Please enter the lab number the user " << endl;
        cout << "is logging in from (1 - " << NUMBER_OF_LABS << "):" << endl;
        cin >> lab;
    }
    while ((num < 0) || (num > labsizes[lab-1]))
    {
        cout << "Enter computer station number the user" << endl;
        cout << "logging in to " <<"(1- " << labsizes[lab-1] << "): " << endl;
        cin >> num;
        if (labs[lab-1][num-1] != -1)
        {
            cout << "Error. User " << labs[lab-1][num-1] << "is already" << endl;
            cout << "logged onto that station number." << endl;
            return;
        }
    labs[lab-1][num-1] = ID;
    return;
    }
}

void logoff(integer_pointer labs[], int labsizes[])
{
    int i, j, ID = -1;
    while ((ID < 0) || (ID > 99999))
    {
        cout << "Enter the 5 digit ID number of the user to find: " << endl;
        cin >> ID;
    }
    for (i = 0; i < NUMBER_OF_LABS; i++)
    {
        for (j = 0; j < labsizes[i]; j++)
        {
            if (labs[i][j] == ID)
            {
                labs[i][j] = -1;
                cout << "User " << ID << " is logged off." << endl;
                return;
            }
        }
    }
    cout << "That user is not logged on." << endl;
    return;
}
void search(integer_pointer labs[], int labsizes[])
{
    int i, j, ID = -1;
    while ((ID < 0) || (ID > 99999))
    {
        cout << "Enter the ID number of the user to find: " << endl;
        cin >> ID;
    }
    for (i = 0; i < NUMBER_OF_LABS; i++)
    {
        for (j = 0; j < labsizes[i]; j++)
        {
            if(labs[i][j] == ID)
            {
                cout << "User " << ID << " is in lab " << (i + 1)
                     << " at computer number " << (j + 1) << endl;
                     return;
            }
        }
    }
    cout << "That user is not logged in." << endl;
    return;
}
