/*
    Program: question1f.cpp
	Date: 15-09-11
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Provide an example and rewrite the compound assignment using basic operators.
*/

#include <iostream>
using namespace std;

int main () 

{ //main ()

    //declare variables
    int x, y;
    
    //set values
    x = 1;
    y = 2;
    
    //tell us what the values are
    cout << "x is equal to " << x << " and y is equal to " << y <<"\n";
    
    //preform an operation with compound operators
    //add 1 to x
    x += 1;
    //subtract 5 from y
    y -= 5;
    
    //tell us the new values
    cout << "x is now equal to " << x << " and y is now equal to " << y <<"\n";
    
    //preform an operation using basic operators
    //add 1 more to x
    x = x + 1;
    //subtact 5 more from y
    y = y - 5;
    
     cout << "x is now equal to " << x << " and y is now equal to " << y <<"\n";
     
    return 0;
}// main ()