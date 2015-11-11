/*
    Program: 
	Date: 
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream>

using namespace std;

int findSum (int, int, int);

int main () {
	int value1, value2, value3;

	// Get three values from the user
cout << "Enter three integers and I will display their sum: " << endl;
	cin >> value1 >> value2 >> value3;

// Make a function call to calculate the sum and display the // sum
	
	cout << findSum(value1, value2, value3) << "\n";

	return 0;
}

int findSum (int numOne, int numTwo, int numThree) 

{
	return 	numOne + numTwo + numThree;
}