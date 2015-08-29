/*
	Program: calculateAverage.cpp
	Date: 08/28/2015
	Programmers: Riley Childs <me@rileychilds.me>
    Purpose:	This program prompts the user to enter 3 test scores. It reads in these scores, calculates the average and prints the average to the screen.

*/
#include<iostream>
#include<limits>
using namespace std;
int main()	
    {
	// Declare needed variables
	    float test1, test2, test3, average;
	// Accept test values from the user
	    cout << "Enter the first test grade:";
	     
	        while (!(cin >> test1)) {
    		// input was not an integer
    		//we need to clear the cin value
    			cin.clear();
    		//lets make sure that we don't take the wrong input!	
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			cout << "That wasn't good input!\nEnter the first test grade:";
    						}			
	    cout << "Enter the second test grade:";
	 		while (!(cin >> test2)) {
    		// input was not an integer
    		//we need to clear the cin value
    			cin.clear();
    		//lets make sure that we don't take the wrong input!	
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			cout << "That wasn't good input!\nEnter the second test grade:";
    						}
	    cout << "Enter the third test grade:";
	       	while (!(cin >> test3)) {
    		// input was not an integer
    		//we need to clear the cin value
    			cin.clear();
    		//lets make sure that we don't take the wrong input!	
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			cout << "That wasn't good input!\nEnter the while test grade:";
	       	}

	    // Calculate the Average of the 3 test 
	    //logic error: you needed to add preentacess 
	    average = (test1 + test2 + test3) / 3;
	    // Display the average on the screen
	    cout << "The average of" << test1 << " and " << test2 << " and " << test3 <<" is:" << average;
	    return 0; 
    }
