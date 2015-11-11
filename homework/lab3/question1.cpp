/*
    Program: question1.cpp
	Date: 15-09-20
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
*/
//include libraries
#include <iostream>

//set namespace
using namespace std;

//open main function
int main( ) 

{//main ()
    //declare variables    
     float income;
     
     //echo string
    cout << "Enter your monthly income: ";
    //get input
    cin >> income;
    
    //start if value is less than 0 echo a statement
    if (income < 0.0)
    cout << "You are going farther into debt every month." << endl;
     //start if value is less than 1200 echo a statement
    else if (income < 1200.00)
    cout << "You are living below the poverty line." << endl;
     //start if value is less than 2500 echo a statement
    else if (income < 2500.00)
    cout << "You are living in moderate comfort." << endl;
     //start if value is greater than or equal to 2500 echo a statement
    else
    cout << "You are well off." << endl;

    
    
    //return success
    return 0;   

    
}//main ()