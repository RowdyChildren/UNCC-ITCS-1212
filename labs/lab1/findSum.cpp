/*	Program: findSum.cpp
	Date: 08/28/2015
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:	This program prompts the user to enter 2 integers. It reads these integers, calculates the sum and prints the sum on the screen.
*/



#include <iostream> 

using namespace std; 

int main() 
	{ 
		int number; 
		
		float total; 
		
		cout << "Today is a great day for Lab"; 
		
		cout << endl << "Let's start off by typing a number of your choice" << endl; 
			cin >> number; 
			
		total = number * 2; 
		cout << total << " is twice the number you typed" << endl; 
		
		return 0; 

	}
