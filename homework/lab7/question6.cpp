/*
    Program: question6.cpp
	Date: 2015-11-02
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Display multiples up to 10
	
*/


#include <iostream> 
using namespace std; 

int main( ) { 
    
    for (int outer = 1; outer < 11; ++outer)
        {
             for (int inner = 1; inner < 11; ++inner)
                {
                    cout << outer << " x " << inner << " = " << outer*inner << endl;
                }
        }
        return 0;
}