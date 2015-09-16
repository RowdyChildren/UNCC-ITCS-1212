/*
    Program: question6.cpp
	Date: 15-09-11
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: calculate calories
*/
//include libraries
#include <iostream>dri

//declare namespace
using namespace std;

//intalize main function
int main()
{// main ()
    
    //initalize constants
    const int CALORIES_PER_COOKIE = 40; //200/(60/12)=40
    //initalize variables
    int cookiesEaten, totalCalories;
    
    //ask for user for cookies eaten
    cout << "How many cookies did you eat?\n";
    //get the input
    cin >> cookiesEaten;
    
    //calculate calories consumed
    totalCalories = cookiesEaten*CALORIES_PER_COOKIE;
    
    //tell user what they ate
    cout << "You consumed " << totalCalories << " calories\n";
    
    //return success
    return 0;
    
} //main ()