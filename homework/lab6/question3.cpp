/*
    Program: question3.cpp 
	Date: 2015-10-18
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main ()
    
    {
        int beverageTotals[4] = {0,0,0,0};
        int favorite;
        do {
                cout << "1. Coffee\n2. Tea\n3. Coke\n4. Orange Juice\n";
                cout << "Enter your favorite beverage from the list above or -1 to quit: ";
                cin >> favorite;
                if (favorite != -1)
                beverageTotals[favorite-1]++;
                
            } while (favorite != -1);
        
        cout << "Coffee Total: "<< beverageTotals[0] << endl;
        cout << "Tea Total: " << beverageTotals[1] << endl;
        cout << "Coke Total: " <<  beverageTotals[2] << endl;
        cout << "Orange Juice Total: " <<  beverageTotals[3] << endl;
        return 0;
    }