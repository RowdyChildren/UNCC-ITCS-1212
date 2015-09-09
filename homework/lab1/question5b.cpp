/*
Program: question5b.cpp
Date: 15-09-02
Description: Program to take a user's input of 2 numbers and reverse them
Programer: Riley Childs <me@rileychilds.me>
*/
//include our libraries
#include <iostream> //error: needed libraries
//define namespace
using namespace std; //error: namespace not defined

int main() 
{ //begin main ()
    
    //define variables, make them floats incase the user enters a float
    float firstNumber; 
    
    float secondNumber; 
    
    // Prompt user to enter the first number. 
    cout << "Enter the first number" << endl; //error: this was on the same line as the comment
    
    cout << "Then hit enter" << endl; 
    
    cin >> firstNumber; 
    
    // Prompt user to enter the second number. 
    cout << "Enter the second number" << endl; //error: this was on the same line as the comment
    
    cout << "Then hit enter" << endl; 
    
    //Get the users input
    cin >> secondNumber; 
    
    // Echo print the input. 
    cout << endl << "You input the numbers as " << firstNumber 
    << " and " << secondNumber << endl; 
    
    // error: simply eliminate the following code block and just change the order the values are echoed bellow
    /*
    firstNumber = secondNumber; 
    secondNumber = firstNumber; //error: we defined firstNumber in the preceding line, this will set secondNumber to the same value
    */
    
    
    // Output the values. 
    
    cout << "After swapping, the values of the two numbers are " 
    << secondNumber << " and " << firstNumber << endl; 

    //return success
    return 0; 

}// end main ()
