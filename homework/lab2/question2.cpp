/*
    Program: question2.cpp
	Date: 15-09-11
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: calculate Circumference and area of the circle
*/
/* 
Algorithim:
1) Declare Variables
2) Get Radius as Input from User
3) Based on Radius preform calculations for Circumference (2*pi*r)
4) Based on Radius preform calculations for Area (pi*r^2)
5) Return results to user
6) Return success
*/
//include libraries
#include <iostream>
#include <cmath>

//declare namespace
using namespace std;

//inintilize main

int main ()
{// main ()
    //set const pi
    const double PI = 3.14;
    //declare variables
    double radius, circumference, area;
    
    //ask user for radius
    cout << "What is the Radius of the circle?\n";
    
    //get user input
    cin >> radius;
    
    //calculate Circumference
    circumference = 2*PI*radius;
    
    //calculate area
    area = PI*pow(radius,2);
    
    //return values to console
    cout << "The circumference is " << circumference << " units" << " and the area is " << area << " square units.\n";
    
    //return success
    return 0;
}// main ()