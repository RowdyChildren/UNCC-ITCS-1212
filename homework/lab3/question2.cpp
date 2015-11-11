/*
    Program: question2.cpp
	Date: 15-09-20
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
*/
//include libraries
#include <iostream>

using namespace std;

int main ()

{
    //declare constants
    //declare and set tax rates as constants and salaries
    const float SALARY_30 [2] = {30000, 0}, SALARY_40 [2] = {40000, .08}, SALARY_50 [2] = {50000,.1}, SALARY_60 [2] = {60000,.15}, SALARY_UP = .17;
    
    //declare variables 
    float salary;
    
    //get input from user
    cout << "What is your salary?\n";
    cin >> salary;
    
    //the many ifs...
    
    if (salary <= SALARY_30[0] )
        cout << "You are paying $" << (salary*SALARY_30[1]) << " in taxes and are netting $" << salary-(salary*SALARY_30[1]) << "\n";
    
    
    else if (salary <= SALARY_40[0] )
        cout << "You are paying $" << (salary*SALARY_40[1]) << " in taxes and are netting $" << salary-(salary*SALARY_40[1]) << "\n";
    
    else if (salary <= SALARY_50[0] )
        cout << "You are paying $" << (salary*SALARY_50[1]) << " in taxes and are netting $" << salary-(salary*SALARY_50[1]) << "\n";
        
    else if (salary <= SALARY_60[0] )
        cout << "You are paying $" << (salary*SALARY_60[1]) << " in taxes and are netting $" << salary-(salary*SALARY_60[1]) << "\n";
    
    else
        cout << "You are paying $" << (salary*SALARY_UP) << " in taxes and are netting $" << salary-(salary*SALARY_UP) << "\n";
    //return success
    return 0;
}
