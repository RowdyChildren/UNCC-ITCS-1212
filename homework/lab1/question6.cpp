/*
Program: question6.cpp
Date: 15-09-02
Description: Program to convert kilometers to miles
Programer: Riley Childs <me@rileychilds.me>
*/
//include our libraries
#include <iostream> 
//define namespace
using namespace std;

int main() 
{ //begin main ()

    //define our converstion factor as a constant float
    const float conversionFactor = 0.621;

    //define our kilometers variable as a float
    float kilometers;
    
    //prompt the user for input
    cout << "Let's convert kilometers to miles\nEnter kilometers below, please enter only a number\n";
    
    //get the users input and store in kilometers variable
    cin >> kilometers;
    
    //lets preform the conversion and echo the results, we are only using the result once so we are just going to do it inline with the cout
    
    cout << "\n\nYou entered " << kilometers << "km, this is the same as " << kilometers * conversionFactor << "miles.";
    
} //end main ()