/*
    Program: question4.cpp
	Date: 2015-09-16
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream> 
using namespace std; 



int main() 
{ 
    
    //declare some variables
    float amtTendered = 0.0 , cost = 0.0;
    int change, pennies, nickles, dimes, quarters, dollars;
    //ask user for input
    cout << "Please enter the price of the item bought\n";
    cin >> cost;
    
    cout << "Please enter the amount tendered\n";
    cin >> amtTendered;
    
    
    change = (amtTendered - cost) * 100;
    
    dollars = change/100 ;
    
    change = change % 100;
    
    quarters = change / 25;
    
    change = change % 25;
    
    dimes = change / 10;
    
    change = change % 10;
    
    nickles = change / 5;
    
    change = change % 5;
    
    pennies = change;
    
    
    
    
    cout << "\n" << "Change Due: $" << (amtTendered - cost) << "\n" << "This is " << dollars << " dollars, "
    <<  quarters << " quarters, " << dimes << " dimes, " << nickles << " nickles, and " << pennies << " pennies\n";
    
    //do the math
   
    
return 0; 
}

