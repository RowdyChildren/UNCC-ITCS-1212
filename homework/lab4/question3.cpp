/*
    Program: question3.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:Determines the value of a stock portfolio
	
	
*/
//include libraries
#include <iostream>
#include <string>

//declare namespace
using namespace std;

//declare global variables
double stockValue[3];
//declare functions
double getStocks ( string);
double calculateTotalPortfolioValue ();


int main ()

{
    double stockAmt;
    //Input and output
    cout << "How much INTL stock do you own?\n";
    cin >> stockAmt;
    
    stockValue[0] = getStocks("INTL") * stockAmt;
    cout << "How much GOOG stock do you own\n";
    cin >> stockAmt;
    
    stockValue[1] = getStocks("GOOG") * stockAmt;
    cout << "How much IBM stock do you own?\n";
    cin >> stockAmt;
    
    stockValue[2] = getStocks("IBM") * stockAmt;
    cout << "How much MSFT stock do you own?\n";
    cin >> stockAmt;
    
    stockValue[3] = getStocks("MSFT") * stockAmt;
    
    cout << "Your total portfolio value is: $" << calculateTotalPortfolioValue() << "\n";
    return 0;
}

double getStocks (string s) {
    //TODO: this function does nothing and seems like a constant would be better
    return 100.0;   
    
}

double calculateTotalPortfolioValue ()

{
    double value;
    //loop though all the values of stockValue to get the total value of the portfolio
    for (int i=0; i<4; i++) {
        value += stockValue[i];
        
    }
    return value;
}
    





