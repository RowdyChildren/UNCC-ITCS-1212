/*
    Program: question5.cpp
	Date: 2015-09-16
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream> 
#include <string>
using namespace std; 



int main() 
{
    int currentDay, weekdayNum;
    string days [7] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wedsenday", "Thursday", "Friday"};
    
    cout << "Enter the day number of the month (for March 12th it would be \" 12 \"):\n";
    cin >> currentDay;
    
    //do some math to find the current day!
    
    weekdayNum = (currentDay % 7 ) - 1; //we need to subtract 1 to make the array work easier!
    
    cout << "It is currently " << days[weekdayNum] << ".\n";
    
    
    
    return 0;
    
    
}