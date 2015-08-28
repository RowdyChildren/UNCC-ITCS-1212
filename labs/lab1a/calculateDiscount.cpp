/*
	Program: calculateDiscount.cpp
	Date: 08/28/2015
	Programmers: Riley Childs <me@rileychilds.me>
Purpose:	This program prompts the user to enter the original price of the item and the percent discount. It calculates the new price and displays it on the screen. 
*/
#include<iostream>
using namespace std;
int main()	
    {
	    // Declare needed variables
    	double originalPrice;
	    double percentDiscount;
    	double newPrice;
	    // Accept values from the user
    	cout << "Enter the original price of the item you are buying:" << endl;
    	cin >> originalPrice;
    	cout << "Enter discount percent:" << endl;
    	cin >> percentDiscount;
	    // Calculate the new price
    	newPrice = originalPrice * percentDiscount;
		// Display the new price on the screen
    	cout << "The original price of $" << originalPrice << " has been reduced to: $" << newPrice;	
	return 0; 
    }
