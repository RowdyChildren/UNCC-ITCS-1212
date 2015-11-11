/*
    Program: question7a.cpp
	Date: 2015-11-02
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: itterate though a file one way
	
*/


#include <iostream> 
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std; 

int main( ) { 
    //load the file numbers.txt
    ifstream  fin("numbers.txt");
    string fileLine;
    int sum = 0;
    int counter = 0 ;
    int intHolder;
    
    while(getline(fin, fileLine) && counter < 10)
   {
      intHolder = atoi(fileLine.c_str());
      
      sum += intHolder;
      counter++;
   }
   
   //echo out
   cout << "The sum is: " << sum<< endl;
   //we need to cast the avg as a float
   cout << "The avg is: " << (float)sum/counter << endl;
    return 0;   
}
