/*
    Program: question7a.cpp
	Date: 2015-11-02
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: itterate though a file another way
	
*/


#include <iostream> 
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std; 

int main( ) { 
    ifstream  fin("numbers.txt");
    string fileLine;
    int sum = 0;
    int counter = 0 ;
    int intHolder;
    
    while(getline(fin, fileLine) && fileLine != "-999")
   {
      intHolder = atoi(fileLine.c_str());
      
      sum += intHolder;
      counter++;
   }
   
   cout << "The sum is: " << sum<< endl;
   cout << "The avg is: " << (float)sum/counter << endl;
    return 0;   
}
