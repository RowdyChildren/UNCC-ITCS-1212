/*
    Program: lab4a.cpp
	Date: 2015/09/30
	Programmers: Riley Childs <me@rileychilds.me> and Robyn Exclusa
	Purpose: Print names
	
*/

#include <iostream>
#include <string> // include string library so we can process strings
using namespace std;

// A function prototype is used to tell the compiler about the 
// existence of a function being used in the program (return type,
// name and parameters)
// Declare the function prototype here. It should match the 
// function definition.
void displayMessage(string, string);

int main()
{
	cout << "Now I will print my Name and My Lab partners name on screen through the function " << endl;
	
	// A function call is a statement that causes a function to
// execute. A function call has to match the function
// definition.
	// Make a function call to display message on the screen
		displayMessage("Robyn", "Riley" );
	
	cout << "Back to main function after printing names " << endl;

	return 0;
}


// A function definition contains the set of operations and
// statements that need to be executed to perform a task. 
// A function definition consist of return type, function name,
// parameter list and function body.

// void function will not return any value, it will simply execute 
// a bunch of statements and then terminate.
void displayMessage(string nameOne, string nameTwo)
{
    
    cout << nameOne << " and " << nameTwo << "\n";
    
    

}
