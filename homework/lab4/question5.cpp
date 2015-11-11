/*
    Program: question5.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	Notes: For this one I miriored the output because I couldn't figure the directions out
	
	
*/

//includes
#include <iostream>
#include <iomanip>
using namespace std;

//declare funcitons
void prompt( int&, int&);
float winPrecentage(int, int);
float lossPrecentage(int, int);


int main ()
{
    int gamesWon, gamesLost;
    double precentage;
    
    //prompt for input using a function
    prompt(gamesWon, gamesLost);
    
    cout << "You have won " << setprecision(4) << winPrecentage(gamesWon, gamesLost)*100 << "% of your games and lost " << setprecision(4) << lossPrecentage(gamesWon, gamesLost)*100 
        << "% of your games\n";
    return 0;
    
    
}

void prompt(int& wins, int& losses)
{
    cout << "How many wins have you had?\n";
    cin >> wins;
    cout << "How many losses have you had?\n";
    cin >> losses;
}

float winPrecentage (int wins, int losses)
{
    return (((double)wins)/(wins+losses));
    
}

float lossPrecentage (int wins, int losses)
{
    return (((double)losses)/(wins+losses));
    
}
    
    
    
    
