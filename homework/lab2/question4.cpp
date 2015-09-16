/*
    Program: question4.cpp
	Date: 15-09-11
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: calculate the profit of a toy store
*/
//include libraries
#include <iostream>
#include <iomanip>

//declare namespace
using namespace std;


//intalize main function
int main()
{// main ()

    //declare constants
    const int BOX_COST = 50;
    const int TOYS_BOX = 120;
    const float TOYS_PRICE = 1.00;
    int numSold, numBoxes;
    double amountSold, totalProfit, totalCost;
    
    //ask for users toys sold
    cout << "How many toys did you sell?\n";
    //get the input
    cin >> numSold;
    
    //perform calculations
    numBoxes = (numSold/TOYS_BOX) + numSold % TOYS_BOX;
    totalCost = numBoxes * BOX_COST;
    amountSold = numSold * TOYS_PRICE;
    totalProfit = amountSold - totalCost;
    
    //tell the user 
    cout << setprecision(2) << fixed;
    cout << "you bought" << numBoxes << " boxes at $50 each for a total cost of $" << totalCost << endl;
    cout << "You sold " << numSold << " toys for $1.00 each for a total revenue of $" << amountSold << endl;
    cout << "You made $" << setprecision(2) << totalProfit << endl;

    return 0;
}// main ()