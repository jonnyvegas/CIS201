#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
void merge_file(ifstream& firstlist, ifstream& secondlist, ofstream& out_stream);
int main()
{
    ifstream firstlist;
    ifstream secondlist;
    ofstream out_stream;
    char input_file1[100];
    char input_file2[100];
    char output_file[100];
    cout << "This program will merge two files together and output them" << endl;
    cout << "to a third file in descending order.";
    cout << "Please enter the first file name: ";
    cin >> input_file1;
    cout << "Please enter the second file name: ";
    cin >> input_file2;
    cout << "Please enter the output file name: ";
    cin >> output_file;
    firstlist.open(input_file1);
    if(in_stream.fail( ))
    {
          cout << "Input file opening failed.";
          exit(1);
    }
    secondlist.open(input_file2);
    if(in_stream.fail( ))
    {
          cout << "Input file opening failed.";
          exit(1);
    }
    out_stream.open(output_file);
    if(out_stream.fail( ))
    {
          cout << "Output file opening failed.";
          exit(1);
    }
    merge_file(firstlist, secondlist, out_stream);
}
void merge_file(ifstream& firstlist, ifstream& secondlist, ofstream& out_stream)
{
    int list1[100];
    int list2[100];
    int list1nums = 0;
    int list2nums = 0;

    while (firstlist.good())
    {
           firstlist >> list1[list1nums];
           list1nums++;
    }
    while (secondlist.good())
    {
           secondlist >> list2[ list2nums ];
           list2nums++;
    }

    int list3[200];
    int count1 = 0;
    int count2 = 0;

    for(int count3 = 0; count3 < list1nums + list2nums; count3++)
    {
        if(count1 == list1nums)
        {
            list3[count3] = list2[count2];
            count2++;
        }
        else if(count2 == list2nums)
        {
            list3[count3] = list1[count1];
            count1++;
        }
        else if(list1[count1] < list2[count2])
        {
            list3[count3] = list1[count1];
            count1++;
        }
        else
        {
            list3[count3] = list2[count2];
            count2++;
        }
    cout << list3[count3] << endl;
    cout << "File merging complete.";
    out_stream << list3[count3] << endl;
   }
}
