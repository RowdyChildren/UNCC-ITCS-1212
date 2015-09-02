/*
example 2 
*/
//pull in the iostream library
#include<iostream>
//declare our namespace
using namespace std;


int main()

{//main () starts

    //Declare our Variables
    float length, width, area;
    
    //Ask the user for the length
    cout << "What is the length?";
    
    //Get the input from the command line
    cin >> length;
    
    //Ask the user for the width
    cout << "What is the width?";
    
    //Get the input from the command line
    cin >> width;
    
    //Calculate the area
    //formula is l x w
    area =  length * width;
    
    //Echo the area to the command line, makin it pretty...
    cout << "Your Rectangle is " << area << " square units";
    
    return 0;
     
} //main () ends