/*
    Program: question5.cpp
	Date: 2015-11-05
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream>

using namespace std;

int numOfEmployees ();
int daysMissed (int);
double avgDaysAbsent (int, int);


int main ()

{
    int numberEmployees, totalDaysMissed;
    
    numberEmployees = numOfEmployees();
    totalDaysMissed = daysMissed(numberEmployees);
    
    cout << "Your employees miss an average of " << avgDaysAbsent(numberEmployees, totalDaysMissed) << " Days\n";
    
    return 0;
}

int numOfEmployees () {
    
    int holder;
    cout << "How many employee's do you have:";
    cin >> holder;
    return holder;
    
    
}

int daysMissed(int employeeCount) {
        
        int totalDays = 0;
        int userInput;
        for (int counter = 0; counter <employeeCount; ++counter )
            {
                cout << "How many days did employee " << counter + 1 << " miss: ";
                cin >> userInput;
                totalDays += userInput;
                
            }
            
        return totalDays;
        
    }
    
    
double avgDaysAbsent (int employeeCount, int totalDaysAbsent)
    {
        
        return (double)totalDaysAbsent/(double)employeeCount;
        
    }