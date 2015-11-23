#include <iostream> 

using namespace std; 


int main() 
{ 
    int numStudents; 
    float numHours[2] = {0,0}, total[2] = {0,0}, average[2] = {0,0}; 
    int student,day = 0; // these are the counters for the loops 
    cout << "This program will find the average number of hours a   day" 
    << " that a student spent programming over a long weekend\n\n"; 
    cout << "How many students are there ?" << endl << endl; 
    cin >> numStudents; 
    
    for(student = 1; student <= numStudents; student++) 
    { 
    
    for(day = 1; day <= 3; day++) 
    {   
      cout << "Please enter the number of hours worked on biology by student " 
      << student <<" on day " << day << "." << endl; 
      cin >> numHours[0]; 
      total[0] = total[0] + numHours[0]; 
            cout << "Please enter the number of hours worked on programming by student " 
      << student <<" on day " << day << "." << endl; 
      cin >> numHours[1]; 
      total[1] = total[1] + numHours[1]; 
       } 
    
    average[0] = total[0] / 3; 
     average[1] = total[1] / 3; 
    
    cout << endl; 
    cout << "The average number of hours per day spent programming by " 
         << "student " << student << " is " << average[1] 
         << endl << endl << endl; 
             cout << "The average number of hours per day spent biology by " 
         << "student " << student << " is " << average[0] 
         << endl << endl << endl; 
    if (average[0] > average[1])
        cout << "They spent more time on biology\n";
    else if (average[0]  < average[1])
        cout << "They spent more time on Programing\n";
    else 
        cout << "They spent equal time\n";
    
    } 
    return 0; 
}