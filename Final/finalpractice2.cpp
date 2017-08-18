#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;

const int RACE_END = 70;

/* Write prototype for Tortoise here */
void Tortoise (int *);
/* Write prototype for Hare here */
void Hare(int *);
/* Write prototype for positions here */
void positions( int *,int *);

int main()
{
   int T = 1;
   int H = 1;
   int timer = 0;

   srand( time( 0 ) );

   cout << "ON YOUR MARK, GET SET\nGO!!!!\n";

   // controls race
   while ( T != RACE_END && H != RACE_END ) {
      /* call for Tortoise*/
	   Tortoise(&T);
      /* call for Hare */
	   Hare(&H);
      /* call for positions*/
	   positions(&T,&H);
      ++timer;

   } // end while

   // determine winner
   if(T>H){
      cout << "\nTortoise Wins!\n";
   }
   else if(T<H){
	   cout << "\n Hare Wins!\n";
   }
   else if(T=H){
      cout << "It's a tie!\n";
   }
      return 0;


} // end main

// move tortoise
/* Write function definition header for Tortoise here */
void Tortoise(int *turtlePtr)
{
   int x = 1 + rand() % 10;



   // determine which move to make
   if ( x >= 1 && x <= 5 )        // fast plod
      *turtlePtr += 3;

   else if ( x == 6 || x == 7 )   // slip
      *turtlePtr -= 6;

   else                           // slow plod
      ++( *turtlePtr );
   if ( *turtlePtr < 1 )
      *turtlePtr = 1;

   else if ( *turtlePtr > RACE_END )
      *turtlePtr = RACE_END;

} // end function Tortoise

// move hare
/* Write function definition for Hare here */
void Hare(int *harePtr)
{
   int y = 1 + rand() % 10;

   /* Write statements that move hare */


   // determine which move to make
   if ( y >= 1 && y <= 5 )        // fast plod
      *harePtr += 3;

   else if ( y == 6 || y == 7 )   // slip
      *harePtr -= 6;

   else                           // slow plod
      ++( *harePtr );


   /* Write statements that test if hare is before
      the starting point or has finished the race */
   if ( *harePtr < 1 )
      *harePtr = 1;

   else if ( *harePtr > RACE_END )
      *harePtr = RACE_END;
} // end function Hare


void positions(int *bunnyPtr,int *snapperPtr)
{
   if ( *bunnyPtr == *snapperPtr )
      cout << setw( *bunnyPtr ) << "X!!!";

   else if ( *bunnyPtr < *snapperPtr )
      cout << setw( *bunnyPtr ) << "H"
           << setw( *snapperPtr - *bunnyPtr ) << "T";

   else
      cout << setw( *snapperPtr ) << "T"
           << setw( *bunnyPtr - *snapperPtr ) << "H";

   cout << "\n";

} // end function positions
