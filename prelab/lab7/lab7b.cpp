/*
    Program: lab7b.cpp
	Date: 2015-10-27
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: calcuate tip on a meal
	
*/


#include <iostream>

using namespace std;

double calcTip(double, double);

int main ()

{
    
    int endProgram = 1;
    double mealCost;
    double tipPercent;
    
    while (endProgram)
    
    {
        cout << "If you would like to calculate a tip please enter 1, else enter 0\n";
        cin >> endProgram;
        
  
        
        cout << "How Much did the meal cost?\n";
        cin >> mealCost;
        cout << "How much do you want to tip (5% = .05)\n";
        cin >> tipPercent;
        
        cout << "You owe $" << mealCost + calcTip(mealCost, tipPercent) << " of which $" << calcTip(mealCost, tipPercent) << " is a tip\n";
    }
    
 return 0;   
    
}


double calcTip(double cost, double tip) 
    {
        

        return cost*tip;
        
        
        
    }