/*
    Program: question5.cpp
	Date: 15-09-11
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: calculate days worked
*/
//include libraries
#include <iostream>

//declare namespace
using namespace std;

//intalize main function
int main()
{// main ()
    //
    //initalize variables
    int hoursWorked;
    const int HOURS_IN_DAY = 24;
    
    //ask for users hours worked
    cout << "How many hours did you work on the project?\n";
    //get the input
    cin >> hoursWorked;
    
    cout << "You worked " << hoursWorked/HOURS_IN_DAY << " day(s) and " << hoursWorked % HOURS_IN_DAY << " hour(s)\n";
    
    //return success
    return 0;


}