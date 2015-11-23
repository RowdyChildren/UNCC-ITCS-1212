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



int main ()

{
    int numberEmployees, totalDaysMissed;
    
    numberEmployees = numOfEmployees();
    totalDaysMissed = daysMissed(numberEmployees);
    
    cout << "Your " << numberEmployees << " tellers missed " << totalDaysMissed << " days over 3 years" << endl;
    
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
        for (int x = 0; x < 3; ++x)
        {
            cout << "Year " << x + 1 << endl;
        
        for (int counter = 0; counter <employeeCount; ++counter )
            {
                cout << "How many days was teller " << counter + 1 << " sick: ";
                cin >> userInput;
                totalDays += userInput;
                
            }
        }    
        return totalDays;
        
    }
    
    
