/*
    Program: priceCalculator.cpp
	Date: 15-09-09
	Programmers: Riley Childs <me@rileychilds.me> and Kathrine <kcocchio@uncc.edu
	Purpose: Determine the final price
	
*/
#include <iostream>

using namespace std;

int main ()
{//open main ()
 const double TAXRATE = .07;
 double regPrice;
 double discountPercent;
 double discountPrice;
 double tax;
 // Ask user to orginal price
 cout << "Enter the original price\n";
 cin >> regPrice;
 
 // Ask user for discount
 cout << "Enter the sales discount\n";
 cin >> discountPercent;
 
 //calculate price after discount
 discountPrice = regPrice-(regPrice*(discountPercent/100));
 tax = discountPrice*TAXRATE;
 
 //echo info
 cout << "Cost of the item after discount: $" << discountPrice << endl 
        << "Amount of tax: $" << tax << endl 
        << "Final Price: $" <<  discountPrice + tax << endl;
 
 
    
    //return success
    return 0;
}