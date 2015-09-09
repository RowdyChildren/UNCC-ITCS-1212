/*
Program: question4.cpp
Date: 15-09-02
Description: Program to take a user's input and devide by 2
Programer: Riley Childs <me@rileychilds.me>
*/

//Include any libraries
#include <iostream> 

//define our namespace
using namespace std;

int main () //Error: Space needed in between main and ()

{// main () opens
    
    
    //define number as a float
    float number;  //error: number should be a float in the event the user enters a decimal
    
    //define devider as a float and set it equal to 2.0
    float divider = 2.0; //error: we needed to define the variable devider and it needs to be a float

    //ask the user for their input
    cout << endl << "Let's start off by typing a number of your choice" << endl; 
    
    //get the user input
    cin >> number;
    
    //preform the operation
    number = number /divider; 
    
    //tell the user the result
    cout << number << " is half the number you typed" << endl; //Error: you can't have a comma outside of the "" and you need << between number and the statement you are echoing
    
    //return success
    return 0;
    
}// main () closes

