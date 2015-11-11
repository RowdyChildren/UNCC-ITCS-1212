//Program
#include <iostream> 
#include <string>
using namespace std;



int main() 
{ 
    int month = 0;
    float total = 0, rain; 
    string months[12] = {"January", "Febuary", "March", "April", "June", "July", "August", "September", "October", "November", "December"};

    
    while (rain != -1)
    {
        cout << "Enter the total rainfall for month " << months[month] << endl; 
        cout << "Enter -1 when you are finished" << endl; 
        cin >> rain;
        total += rain;
        ++month;
    }

    { 
       
        
        cout << "Enter the total rainfall in inches for month " << month << endl; 
        cout << "Enter -1 when you are finished" << endl; 
        // Fill in the code to read in the value for rain 
    } 
    if (month == 0)                                     //#####question 2b answer: Error Checking######
        cout << "No data has been entered" << endl; 
    else 
        cout << "The total rainfall for the " << month-1 
            << " months is "<< total << " inches." << endl; 
    return 0; 
}
    