/*
    Program: question3.cpp
	Date: 15-09-20
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
    
    //declare variables and array
    float grades [5];
    float avg;
    
    //get data from user
    cout << "What did you get on your first quiz?\n";
    cin >> grades[0];
    
    cout << "What did you get on your second quiz?\n";
    cin >> grades[1];
    
    cout << "What did you get on your first mid-term?\n";
    cin >> grades[2];
    
    cout << "What did you get on your second mid-term?\n";
    cin >> grades[3];
    
    cout << "What did you get on your final?\n";
    cin >> grades[4];
    
    //get the avg
    
    
    //quizzes are worth 10%, calc and add to avg
    avg += (grades[0] * .1);
    avg += (grades[1] * .1);
    
    //midterms are worth 25% , calc and add to avg
    avg += (grades[2] * .25);
    avg += (grades[3] * .25);
    
    //the final is worth 30%, calc and add to avg
    avg += (grades[4] * .3);
    
    
    
    //Determine user's grade
    
    if (avg >= 90) 
        cout << "You got a A (" << avg << ")" << endl; 
    
    else if (avg >= 80) 
        cout << "You got a B (" << avg << ")" << endl;
    
    else if (avg >= 70) 
        cout << "You got a C (" << avg << ")" << endl; 
    
    else if (avg >= 60) 
        cout << "You got a D (" << avg << ")" << endl;
    
    else
        cout << "You got a F (" << avg << ")" << endl;
    

    
    return 0; 
}
