/*
    Program: question7a.cpp
	Date: 2015-11-02
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: itterate though a file another way
	
*/

//include librires
//Input and outpus
#include <iostream>
//Stuff for files
#include <fstream>
//Strings 
#include <string>
//C Standard Libraries
#include <cstdlib>

//Declare namespace of std
using namespace std; 


int main( ) { 
    //open file numbers.txt and read it into the variable fin
    
    ifstream  fin("numbers.txt");
    //string to hold the value of the line before conversion
    string fileLine;
    //variable to keep track of the sum of the lines in the file
    int sum = 0;
    //counter variable to keep track of the number of lines in the file so we can abverage the sum
    int counter = 0 ;
    //variable to hold the line vlaue when it is converted to an int
    int intHolder;
    
    //while loop that pulls out the values line by line until it reaches the end or a value that = -999
    while(getline(fin, fileLine) && fileLine != "-999")
   {
       //convert the value of the file line to an int
      intHolder = atoi(fileLine.c_str());
      //add the int to the sum
      sum += intHolder;
      //increment the line counter
      counter++;
   }
   
   //display the sum
   cout << "The sum is: " << sum<< endl;
   //calc and display the avg
   cout << "The avg is: " << (float)sum/counter << endl;
    //return success
    return 0;   
}
