/*
    Program: question3.cpp
	Date: 15-09-11
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: calculate raise of employee
*/
//include libraries
#include <iostream>

//declare namespace
using namespace std;

//intalize main function
int main()
{// main ()
    
    //declare varaibles
    double oldSalary, newSalary, payRaise;
    float percentIncrease;
    
    
    //ask for users old salary
    cout << "What is your old salary?\n";
    //get the input
    cin >> oldSalary;
    
    //ask for the percent increase
    cout << "How much is your salary increasing (eg for 5% enter 5)?\n";
    //get the input
    cin >> percentIncrease;
    
    //calculate pay raise
    payRaise = oldSalary*(percentIncrease/100);
    
    //calculate the new salary
    newSalary = payRaise + oldSalary;
    
    //tell the user the good news!
    
    cout << "Your salary of $" << oldSalary << " has increased by $" << payRaise << " to $" << newSalary << "\n";
    
    
    //return success
    return 0;
    
    
}// main ()
