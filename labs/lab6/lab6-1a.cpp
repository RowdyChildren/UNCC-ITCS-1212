/*
    Program: lab6-1a.cpp
	Date: 15-10-14
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/


/* 
########################################################################################
#Answer to 1a:                                                                         #
#This program is not user friendly because it doesn't explain how to end the program   #
#                                                                                      #
########################################################################################                                                                                      
*/
#include <iostream>
using namespace std;
int main() 
{ 
    char letter = 'a'; 
    
    while (letter != 'x') 
    { 
        cout << "Please enter a letter" << endl; 
        cin >> letter; 
        cout << "The letter you entered is " << letter << endl; 
    } 
    return 0; 
}
