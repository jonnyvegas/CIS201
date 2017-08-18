//File: ch7prg7.cpp
//Purpose: to sum two large integers (up to 20 digits each).
//
//Input: digits of two integers
//It appears that a "partially filled array structure" is of
//use here.
//
//Output: the sum of the two large integers is written to the
//screen
//
//algorithm: computer version of the traditional paper and pencil
//algorithm.
//Add low order digits, record carry
//while digits remain,
// add next higher order digits and the carry, recording
// the carry
//If the sum is beyond the capacity of a 20 digit array to
//represent, the program is to report overflow.
#include <iostream>
#include <cstdlib>
#include <cctype>
const int MAX_DIGITS = 20;
struct Large_integer //Design decision: lower indices
correspond
{ //to lower order digits
int digit[MAX_DIGITS+1]; //Making room for the null terminator.
int size; //number of digits
};
//fetches a sequence of digits from the input,
//converts to integer values, records size
void input( Large_integer& number );
//displays the Large_integer's digits in correct order
//on the screen
void output( Large_integer number );
//input: two large integers
//output: a large integer that is the sum of the inputs
void add ( Large_integer first, Large_integer second,
Large_integer& sum);
int main()
{
using namespace std;
int first, second, sum;
cout << "Large integer summing program " << endl;
cout << "Please enter an integer, 20 digits or less "
<< endl;
input( first );
cout << "you entered " << endl;
output (first);
cout << endl;
cout << "Enter another integer, 20 digits or less" << endl;
input( second );
cout << "you entered " << endl;
output (second); cout << endl << endl;
cout << "The sum is: " << endl;
output(first);
cout << endl;
output(second);
cout << endl;
cout << "----------------------" << endl;
add (first, second, sum );
output( sum );
cout << endl;
}
void input( Large_integer& number )
{
using namespace std;
char ch;
int i = 0;
number.size = 0;
cin.get(ch);
while( '\n' != ch ) //This error handling is too drastic.
{ //Error handling should allow user to
//reenter the number.
if ( !isdigit(ch) )
{
cout << "non digit entered. Aborting. " << endl;
exit(1);
}
number.digit[i] = ch - '0'; //chars are automatically
number.size++; //promoted to integers.
i++;
cin.get(ch);
}
//more draconian error control!
if (number.size > 20 )
{
cout << "Input number size too large. Aborting." <<endl;
exit(1);
}
//Reverse array
for ( int k = 0; k < number.size/2; k++ )
{
int temp = number.digit[k];
number.digit[ k ] = number.digit[ number.size - 1 - k ];
number.digit[ number.size - 1 - k ] = temp;
}
}
void output( Large_integer number )
{
using namespace std;
//lead spaces to visually align the output.
for ( int i = 20; i >= number.size; i--)
cout << " ";
for ( i = number.size - 1; i >= 0; i-- )
cout << number.digit[i];
}
void add ( Large_integer first,
Large_integer second, Large_integer& sum)
{
int carry = 0;
int larger_size;
//pad the input with the smaller number of digits to the
//size of the larger with zeros.
if ( first.size > second.size )
{
for( int i = second.size; i < first.size; i++)
second.digit[i] = 0;
larger_size = first.size;
}
else
{
for( int i = first.size; i < second.size; i++)
first.digit[i] = 0;
larger_size = second.size;
}
//code to do the addition ...
for ( int i = 0; i < larger_size; i++)
{
sum.digit[i] = first.digit[i] + second.digit[i] + carry;
if (sum.digit[i] > 9 )
{
carry = 1;
sum.digit[i] = sum.digit[i] - 10;
}
else
carry = 0;
}
if ( 1 == carry )
{
if( larger_size == 20) //the carry is out of digit 20
{
cout << "An overflow has occurred. "
<< "Result is set to 0" << endl;
sum.size = 1;
sum.digit[0] = 0;
}
else //the result is legal.
{
sum.digit[larger_size] = carry;
sum.size = larger_size + 1;
}
}
else //no carry, no problem
sum.size = larger_size;
}
