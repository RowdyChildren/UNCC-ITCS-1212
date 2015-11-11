/*
    Program: lab5b.cpp
	Date: 2015-10-07
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream>
#include <iomanip>
using namespace std;

char userChoice();

int main ()

{
    
    if (userChoice() == '1')
    {
        cout << "The high is 30 deg f";
    }
    
    else if (userChoice() == '2')
    {
        cout << "The low is 15 deg f";
    }
    else if (userChoice() == '3')
    {
       cout << "Ta Ta for now!"; 
    }
    else {
        cout << "Error, Exiting!";
        
    }
    
    
    
    return 0;
}

char userChoice() {
    
    char userChoice;
    cout << "Choose an option from the menu below\n\n";
    cout << "#######################################\n";
    cout << "# " << setw(7) <<"Option #"<< setw(10) << right <<"Action"  << setw(20) <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "# " << setw(7) << "  1" << setw(4) <<"#"<< setw(25) << left << "Viex Max Temp for 28223" <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "# " << setw(7) << "  2" << setw(4) <<"#"<< setw(25) << left << "View Min Temp for 28223"  <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "# " << setw(7) << "  3" << setw(4) <<"#"<< setw(25) << left << "Exit" <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "Your Choice: ";
    
    
    //get the user's choice
    cin >> userChoice;
    return userChoice;
    
    
    
}