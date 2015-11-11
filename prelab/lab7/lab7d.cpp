/*
    Program: 
	Date: 
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/


#include <iostream>


using namespace std;


int main ()

{
    
    char letter;
    double valueOne, valueTwo;
    
    do
    {
        cout << "Please enter A, B, or C";
        cin >> letter;
        
    } while (letter != 'A' && letter != 'B' && letter != 'C');
    
    do 
    {
        cout << "Please enter value one\n";
        cin >> valueOne;
        
        cout << "Please enter value two\n";
        cin >> valueTwo;
    } while (!(valueOne && valueTwo > 5.0) || !(valueOne && valueTwo < 0));
    
    return 0;
}