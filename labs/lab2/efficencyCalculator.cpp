/*
    Program: efficencyCalculator.cpp
	Date: 15-09-09
	Programmers: Riley Childs <me@rileychilds.me> and Kathrine <kcocchio@uncc.edu
	Purpose: Determine the area/perimiter of the triangle
	
*/

#include <iostream>
using namespace std;

int main () 
{ //open main ()

//declare vars
float milesTraveled;
float gasUsed;


//ask user for input
cout << "Please enter the number of miles you have traveled:\n";
cin >> milesTraveled;

//ask user for gas used
cout << "Enter gallons of gas used:\n";
cin >> gasUsed;

//calculate and display mpg
cout << "The MPG is " << milesTraveled/gasUsed << "mpg\n";

//return success
return 0;





} //close main ()