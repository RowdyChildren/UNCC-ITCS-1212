/*
    Program: question4.cpp
	Date: 15-09-20
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
    
    //convert float into pennies
    change = (amtTendered - cost) * 100;
    
    //devide by 100 to get the total "whole" dollars
    dollars = change/100 ;
    
    //take the mod to find out what change is left
    change = change % 100;
    
    //wash, rinse repeat!
    quarters = change / 25;
    
    change = change % 25;
    
    dimes = change / 10;
    
    change = change % 10;
    
    nickles = change / 5;
    
    change = change % 5;
    
    pennies = change;
    
    
    
    //return data to user
    cout << "\n" << "Change Due: $" << (amtTendered - cost) << "\n" << "This is " << dollars << " dollars, "
    <<  quarters << " quarters, " << dimes << " dimes, " << nickles << " nickles, and " << pennies << " pennies\n";
    

   
    
return 0; 
}

