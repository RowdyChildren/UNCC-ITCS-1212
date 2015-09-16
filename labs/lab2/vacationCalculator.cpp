/*
    Program: vacationCalculator.cpp
	Date: 15-09-09
	Programmers: Riley Childs <me@rileychilds.me> and Kathrine <kcocchio@uncc.edu
	Purpose: Determine how much vacation you took
	
*/
#include <iostream>

using namespace std;

int main ()
{//open main ()
int vacationDaysTaken;

cout << "How many vacation days did you take?\n";
cin >> vacationDaysTaken;

cout << "You took " << vacationDaysTaken/7 << " weeks and " << vacationDaysTaken % 7 << " days of vacation!";
return 0;

}//close main ()