/*
    Program: question1.cpp
	Date: 2015-11-08
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/


#include <iostream>

using namespace std;


int main () {
    
    cout << "Pattern A" << endl;
    for (int outerCounter = 1; outerCounter < 11; ++outerCounter)
    
        {
            for (int innerCounter = outerCounter; innerCounter != 0; --innerCounter)
                cout << '+';
                
            cout << endl;
        }
        
        cout << "\n\nPattern B" << endl;
        for (int outerCounter = 10; outerCounter != 0; --outerCounter)
    
        {
            for (int innerCounter = outerCounter; innerCounter != 0; --innerCounter)
                cout << '+';
                
            cout << endl;
        }
    
    
    
    return 0;
}