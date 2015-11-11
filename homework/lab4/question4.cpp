/*
    Program: question4cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: swap 2 numbers
*/

//include libraries
#include <iostream>
//declare namespace
using namespace std;

//declare functions
void swap (float&, float&);

//start main ()
int main () {
    float numberOne, numberTwo;
    
    cout << "Enter 2 numbers\n";
    //get input
    cin >> numberOne >> numberTwo;
    //do the swap
    swap (numberOne, numberTwo);
    
    cout << numberOne << " " << numberTwo;
    
    return 0;
    
    
    
}
// start swap
void swap (float& one, float& two) {
    //declare a holdingVar to hold one for the swap
    float holdingVar = one;
    one = two;
    two = holdingVar;
    
    
}