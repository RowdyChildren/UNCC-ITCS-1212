/*
    Program: question1.cpp 
	Date: 2015-10-18
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/

#include <iostream>

using namespace std;
int main () 
{
    //init variables
    int numStudents;
    cout << "How many students?" << endl;
    cin >>  numStudents;
    double **grade = new double*[numStudents];
    
    for (int i = 0; i < numStudents; ++i) {
    grade[i] = new double[3];
        }
    //double grade[numStudents][3];
    double *avg = new double[numStudents];
    //for loop
    for (int i = 0; i<numStudents; i++)
        {
        for (int x = 0; x<3; x++) 
            {
                cout << "Please enter grade " << x + 1 << " for student "<<  i + 1 << ":\n";
                cin >> grade[i][x];
                
                
            }   
        
        //calculations and output
       avg[i] = (grade[i][0] + grade[i][1] + grade[i][2])/3.0;
        
        }
        
    for (int i = 0; i<numStudents; i++)
        {
         cout << "The avg of student " << i + 1 << " is " << avg[i] << endl;   
            
            
        }    
        //return success
        return 0;
}