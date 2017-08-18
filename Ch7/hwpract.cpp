#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

const int n = 20; //Size of two dimension array (12x12)

int checkx(const char life_array[][n+2],int row,int col);
//function to determine how many neighbors


int main()
{

  int row;
  int col;
  char life_array[80][n+2];      //original array
  char new_array[80][n+2];       //array for next generation
  int num_neighbors=0;                //Neighbors of each square in generation

       for(row=1;row<n+2;row++)
          for(col=1;col<n+2;col++)
          {
              int random_integer=(rand()%2);
              if((random_integer)==0)
                  life_array[row][col]=' ';
              else
                  life_array[row][col]='X';

          }
  for(int num_gen=0;num_gen<8;num_gen++)      //generation loop
                                              //for 8 generations
  {
      cout<<setw(10)<<"Generation:"<<num_gen+1<<endl<<endl; //Header


      for(row=1;row<n+2;row++)        //Print Generation
      {
          cout<<endl;
          for(col=1;col<n+2;col++)
          {
              cout<<life_array[row][col]<<" ";
          }
      }
      for(row=1;row<n+2;row++)     //Loop to determine nieghbors
      {
          cout<<endl;
          for(col=1;col<n+2;col++)
          {
              if ((life_array[row][col])=='X') //If box has an X
              {
                  num_neighbors=checkx(life_array,row,col);
                  if (num_neighbors != 3)  //Conditions to determine if X lives or dies
                      new_array[row][col]=' ';
                  else
                      new_array[row][col]='X';
              }
              else         //If no 'X' in box
              {
                  num_neighbors=checkx(life_array,row,col);
                  if(num_neighbors != 2)   //Condition to determine if X is born
                      new_array[row][col]=' ';
                  else
                      new_array[row][col]='X';
              }
          }
      }


      for(row=1;row<n+2;row++)     //Copies new array to original array
          for(col=1;col<n+2;col++)
              new_array[row][col]=life_array[row][col];


  }
  return 0;
}


  int checkx(const char life_array[][n+2],int row,int col)
   //function to determine number of neighbors
  {

      int num_neighbors;

      num_neighbors=0;

      if ((life_array[row-1][col-1])=='X')
          num_neighbors++;
      if ((life_array[row-1][col])=='X')
          num_neighbors++;
      if ((life_array[row-1][col-1])=='X')
          num_neighbors++;
      if ((life_array[row][col-1])=='X')
          num_neighbors++;
      if ((life_array[row][col+1])=='X')
          num_neighbors++;
      if ((life_array[row+1][col-1])=='X')
          num_neighbors++;
      if ((life_array[row+1][col])=='X')
          num_neighbors++;
      if ((life_array[row+1][col+1])=='X')
          num_neighbors++;

      return num_neighbors;

  }
