/*
    Program: question2.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: test the menu for a weather program
	
*/

#include <iostream>
#include <iomanip>

using namespace std;

char cityMenu ();

int main ()

{
    char choice;
    
    //test the function
    choice = cityMenu ();
    
    //echo the user's choice
    cout << "Your Choice was: " << choice << "\n";
    
    return 0;
    
}

char cityMenu ()
{
    char userChoice;
    cout << "Choose an option from the menu below\n\n";
    cout << "#############################\n";
    cout << "# " << setw(7) <<"Option #"<< setw(10) << right <<"City"  << setw(10) <<  "#\n";
    cout << left <<"#############################\n";
    cout << "# " << setw(7) << "  1" << setw(4) <<"#"<< setw(15) << left << "Charlotte" <<  "#\n";
    cout << left <<"#############################\n";
    cout << "# " << setw(7) << "  2" << setw(4) <<"#"<< setw(15) << left << "Durham"  <<  "#\n";
    cout << left <<"#############################\n";
    cout << "# " << setw(7) << "  3" << setw(4) <<"#"<< setw(15) << left << "Ashville" <<  "#\n";
    cout << left <<"#############################\n";
    cout << "# " << setw(7) << "  4" << setw(4) <<"#"<< setw(15) << left <<"Kitty Hawk" <<  "#\n";
    cout << left <<"#############################\n";
    cout << "# " << setw(7) << "  5" << setw(4) <<"#"<< setw(15) << left <<"***Exit***" <<  "#\n";
    cout << left <<"#############################\n\n";
    cout << "Your Choice: ";
    
    
    //get the user's choice
    cin >> userChoice;
    return userChoice;
}