/*
    Program: lab6-1b.cpp
	Date: 15-10-14
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/

/* 
########################################################################################
#Answer to 1b:                                                                         #
#There is no diffrence because letter is already initialized to a in both circumstances#
#                                                                                      #
########################################################################################                                                                                      
*/

#include <iostream>
using namespace std;
int main() 
{ 
    char letter = 'a'; 
    
    do
    { 
        cout << "Please enter a letter or enter \"x\" to exit." << endl; 
        cin >> letter; 
        cout << "The letter you entered is " << letter << endl; 
    } 
    while (letter != 'x') ;
    return 0; 
}
