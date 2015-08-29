/*
	Program: calculateAverage.cpp
	Date: 08/28/2015
	Programmers: Riley Childs <me@rileychilds.me>
    Purpose:	This program prompts the user to enter 3 test scores. It reads in these scores, calculates the average and prints the average to the screen.

*/
#include<iostream>
using namespace std;
int main()	
    {
	// Declare needed variables
	    float test1, test2, test3, average;
	// Accept test values from the user
	    cout << "Enter the first test grade:";
	        cin >> test1;
	    cout << "Enter the second test grade:";
	        cin >> test2;
	    cout << "Enter the third test grade:";
	        cin >> test3;

	    // Calculate the Average of the 3 test 
	    //logic error: you needed to add preentacess 
	    average = (test1 + test2 + test3) / 3;
	    // Display the average on the screen
	    cout << "The average of" << test1 << " and" << test2 << " and " << test3 <<" is:" << average;
	    return 0; 
    }
