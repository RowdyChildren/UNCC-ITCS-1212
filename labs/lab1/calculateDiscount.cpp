/*
	Program: calculateDiscount.cpp
	Date: 08/28/2015
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:	This program prompts the user to enter the original price of the item and the percent discount. It calculates the new price and displays it on the screen. 
*/
#include<iostream>
#include<limits>
using namespace std;
int main()	
    {
	    // Declare needed variables
    	double originalPrice;
	    double percentDiscount;
    	double newPrice;
    	bool rightInteger;
	    // Accept values from the user
    	cout << "Enter the original price of the item you are buying:" << endl;
    		while (!(cin >> originalPrice)) {
    		
    		//we need to clear the cin value
    			cin.clear();
    		//lets make sure that we don't take the wrong input!	
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			cout << "That wasn't good input!\nEnter the original price of the item you are buying: (ex. 5.45):";
    						}
    	cout << "Enter discount percent:" << endl;
    	
    	//make sure their input is valid
    	while (!(cin >> percentDiscount)) {
    		
    		//we need to clear the cin value
    			cin.clear();
    		//lets make sure that we don't take the wrong input!	
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			cout << "That wasn't good input!\nEnter the Percent discount (ex. XX.X% where you enter XX.X and not the %):";
    						}
    	//their input should be above or equal to 1
    	while (!rightInteger)
	{
		if (percentDiscount >= 1)
		{
		rightInteger = true;
		}
			else
			{
			cout << "That wasn't good input!\nEnter the Percent discount (ex. XX.X% where you enter XX.X and not the %):" << endl;
				//well it wasn't greater than 1 so they have to try again.
			while (!(cin >> percentDiscount)) {
    		
    		//we need to clear the cin value
    			cin.clear();
    		//lets make sure that we don't take the wrong input!	
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
    			cout << "That wasn't good input!\nEnter the Percent discount (ex. XX.X% where you enter XX.X and not the %):";
    						}
			}
	}
	
    		
	    // Calculate the new price
	    //error was we needed to devide the discount entered by the use by 100 to generate a decimal
	    percentDiscount = percentDiscount / 100;
    	newPrice = originalPrice * percentDiscount;
		// Display the new price on the screen
    	cout << "The original price of $" << originalPrice << " has been reduced to: $" << newPrice;	
		return 0; 
    }
