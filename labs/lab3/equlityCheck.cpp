/*
    Program: equalityChecker.cpp
	Date: 2015-09-16
	Programmers: Riley Childs <me@rileychilds.me> and Kaylah Henderson <khende41@uncc.edu>
	Purpose:
	
*/

#include <iostream> 

using namespace std; 

int main( ) 
{ 
int num1, // num1 is not initialized 
num2; // num2 has been initialized to 5 

cout << "Please enter an integer" << endl; 

cin >> num1; 


cout << "Please enter an integer" << endl; 

cin >> num2; 

cout << "num1 = " << num1 << " and num2 = " << num2 << endl; 

if (num1 == num2) 
cout << "Hey, that’s a coincidence!" << endl; 

else if (num1 != num2)
cout << "The values are not the same" << endl; 

return 0; 
}
