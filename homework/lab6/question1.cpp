/*
    Program: question1.cpp 
	Date: 2015-10-18
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/

#include <iostream>

using namespace std;
int main () 
{
    //init variables
    double grade[3];
    
    //for loop
    for (int x = 0; x<3; x++) 
        {
            cout << "Please enter grade " << x + 1 << ":\n";
            cin >> grade[x];
            
            
        }   
        
        //calculations and output
        cout << "Your avg is: " << (grade[0] + grade[1] + grade[2])/3.0 << "\n";
        
        //return success
        return 0;
}