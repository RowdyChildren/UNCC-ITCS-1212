/*
    Program: question2.cpp
	Date: 2015-11-08
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

//include libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

//declare namespace
using namespace std;

//main
int main () {
    
    //init vars
    int numberOfLines = 0;
    string line;
    float total = 0.0;
    ifstream myfile("numbers.txt");

    //while loop to loop though file
    while (getline(myfile, line))
    {
        ++numberOfLines;
        total = total + atof(line.c_str());
    }   
   
   //return data
    cout << "Number of lines in text file: " << numberOfLines << endl;
    cout << "Sum of numbers: " << total << endl;
    cout << "Avg of numbers: " << total/numberOfLines << endl;
    
    
    
    return 0;
}