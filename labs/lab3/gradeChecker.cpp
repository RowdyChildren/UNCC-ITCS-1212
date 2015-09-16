/*
    Program: gradeChecker.cpp
	Date: 2015-09-16
	Programmers: Riley Childs <me@rileychilds.me> and Kaylah Henderson <khende41@uncc.edu>
	Purpose:
	
*/

#include <iostream> 
using namespace std; 

int main() 
{ 
float average; // holds the grade average cout << "Input your average:" << endl; 

cin >> average; 

//error checking

if (average > 100) 

cout << "Invalid Data" << endl; 

else if (average >= 90) 
cout << "You got an A" << endl; 

else if (average >= 80) 
cout << "You Fail" << endl;

else if (average >= 60) 
cout << "You Pass" << endl; 

else if (average < 60) 
cout << "You Fail" << endl;

else if (average < 0) 
cout << "Invalid Data" << endl;
else 
cout << "you messed up\n";
return 0; 
}
