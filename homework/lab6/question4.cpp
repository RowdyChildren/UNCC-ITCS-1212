/*
    Program: question3.cpp 
	Date: 2015-10-18
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    const double GRAVITY = 9.8;
    int timeFalling;
    double height;
    
    cout << "Please enter the time falling in seconds: ";
    cin >> timeFalling;
    
    cout << "Please enter the height in meters: ";
    cin >> height;
    
    cout << "Time Falling (Seconds)" << setw(20) << "Distance Fallen" << endl;
    cout << "*********************************************************\n";
    for (int i = 0; i <= timeFalling; ++i)
        {
            cout << i << setw(30) << 0.5*GRAVITY*(2*i) << endl;
        }
    
    return 0;
}