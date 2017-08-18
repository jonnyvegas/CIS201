#include <iostream>
#include <stdexcept>
#include <string>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

//Functions: moveHare, moveTortoise
void moveHare(int &, int, int); //prototype
void moveTortoise(int &, int, int ); //prototype

int main()
{
string winner = "NONE";
vector<char> Square(30); //creating an array of 70 squares
int limit = Square.size() - 1;
int harePtr = 0; //pointer to the position of hare in the race
int tortoisePtr = 0; //pointer to the position of tortoise in the race
//Loop 70 times
for (int i=0; i<Square.size(); i++){
//generate random number between 1 and 10
int hRand = rand() % 10 + 1; //random integer for hare
int tRand = rand() %  10 + 1; //random integer for tortoise

cout << "RACE UPDATE..." << endl;

//update position of each opponent
for(int y=0; y<Square.size(); y++){

if(tortoisePtr == y && harePtr == y) {//print OUCH, tortoise and hare elbow to elbow
if( y == 0){
//cout << “S” ;
Square.at(0) = 'S';
}
else{
//cout << ” X!”;
Square.at(y) = 'X';
}
}
else if(y == tortoisePtr) {//print T
//cout << ” T” ;
Square.at(y) = 'T';
}
else if(y == harePtr) {//print H
//cout << ” H” ;
Square.at(y) = 'H';
}
else {//print -
//cout << ” -” ;
Square.at(y) = '-';

}

}

//print position of each oponent
for(int x=0; x<Square.size(); x++){
cout << Square.at(x) << " " ;
}

cout <<endl;

cout << endl;
//check if any has passed square 70; if yes end the game
if(tortoisePtr == limit) {//print Tortoise win! //end game
winner = "TORTOISE";
break;
}
else if(harePtr == limit) {//print Hare win! //end game
winner = "HARE";
break;
}

//move oponents
cout << "TORTOISE:" << setw(5) << " ";
moveTortoise(tortoisePtr, tRand, limit);
cout <<"HARE:"<< setw(9) << " ";
moveHare(harePtr, hRand, limit);

}

//end of game
cout << "The WINNER is " << winner << endl;
}//end main

//****************************************************************************
//Function that determines the movement of the hare
//****************************************************************************
void moveHare(int &ptr, int rNum, int limit){
if(rNum == 2 || rNum == 1) {//print sleep and no move
cout << "SLEEPING!" << setw(6) <<" ";
cout << "Stay at square " << ptr << endl;
}
else if(rNum == 3 || rNum == 4) {//print big hop and move 9 squares to the right
cout << "BIG HOP!" << setw(7)<< " ";
cout <<" Advance to square "  ;

ptr += 9;
if(ptr > limit){
ptr = limit;
}
cout << ptr << endl;
}
else if( rNum == 5) {//print big slip and move 12 squares to the left
cout << "BIG SLIP!" <<setw(5)<<" ";
cout <<"Return to square " ;

ptr -= 12;
if(ptr < 0){
ptr = 0;
}
cout << ptr << endl;
}
else if(rNum == 6 || rNum == 7 || rNum == 8) {//print small hop and move 1 square to the right
cout << "SMALL HOP!" <<setw(5) <<" ";
cout << "Advance to square " ;

ptr += 1;
if(ptr > limit){
ptr = limit;

}
cout << ptr << endl;
}
else if(rNum == 9 || rNum == 10) {//print small slip and move 2 squares to the left
cout << "SMALL SLIP!" << setw(4) <<" ";
cout << "Return to square " ;

ptr -= 2;
if(ptr < 0){
ptr = 0;
}
cout <<  ptr << endl;
}

}

//*****************************************************************************
//Function that determines the movement of the tortoise
//*****************************************************************************
void moveTortoise(int &ptr, int rNum, int limit){
if(rNum <= 5){//print fast plod and move 3 square to the right
cout << "FAST PLOD!" <<setw(5) <<" ";
cout << "Advance to square " ;
ptr += 3;
if(ptr > limit){
ptr = limit;
}
cout << ptr << endl;
}
else if(rNum == 6 || rNum == 7) {//print slip and move 6 squares to the left
cout << "SLIP! " <<setw(10) <<" ";
cout << "Return to square " ;

ptr -= 6;
if(ptr < 0){
ptr = 0;
}
cout << ptr << endl;
}
else if(rNum == 8 || rNum == 9 || rNum <=10) {//print slow plod and move 1 square to the right
cout << "SLOW PLOD!" <<setw(5) <<" ";
cout << "Return to square " ;

ptr += 1;
if(ptr > limit){
ptr = limit;
}
cout << ptr << endl;
}

}
