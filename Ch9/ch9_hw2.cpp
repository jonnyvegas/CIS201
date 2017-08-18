/*
Name: Jonathan Villegas
Filename: ch9_hw2.cpp
Description: Write a program that creates a dynamic array of five strings.
Date: 12/12/12
e-mail address: jonathan.e.villegas@gmail.com
*/

#include <iostream>
#include <string>
using namespace std;

string *addEntry(string *dArray, int &size, string newEntry);
string *deleteEntry(string *dArray, int &size, string toDelete);

void print(string *dArray, int size);

int main()
{
    int size = 5;
    string *names = new string[size];
    names[0] = "Bob";
    names[1] = "Bill";
    names[2] = "Susan";
    names[3] = "Bess";
    names[4] = "Tom";

    cout << "Initial List: ";
    print(names,size);

    names = addEntry(names, size, "Steve");
    names = addEntry(names, size, "Kate");

    cout << "After the insert: " << endl;
    print(names, size);

    names = deleteEntry(names,size,"Tom");

    cout << "After the delete: " << endl;
    print(names,size);
    delete []names;
}

string *addEntry(string *dArray, int &size, string newEntry)
{
    string *newArray = new string[size + 1];
    for(int i = 0; i < size; i++)
    {
        newArray[i] = dArray[i];
    }
    newArray[size] = newEntry;
    size++;
    delete[] dArray;
    return newArray;
}

string *deleteEntry(string *dArray, int &size, string toDelete)
{
    string *result = dArray;
    int index = -1;
    for(int i = 0; i < size; i++)
    {
        if(dArray[i] == toDelete)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        return result;
    }
    else
    {
        result = new string[size - 1];
        int index = 0;
        for(int i = 0; i < size; i++)
        {
            if(i != index)
            {
                result[index] = dArray[i];
                index++;
            }
        }
        size--;
        delete[] dArray;
        return result;
    }
}

void print (string *dArray, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << *(dArray + i) << endl;
    }
}
