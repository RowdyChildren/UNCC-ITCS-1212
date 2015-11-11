#include<iostream> 
using namespace std; 

int main( ) { 
    double testScore; 
    double total; 
    double average; 
    int countStudents;
    int countTests;
    cout << "How many students would you like to run this for??\n";
    cin >> countStudents;
    
    
    total = 0; 
    for(int x = 0; x < countStudents; x++)
    
    {
        total = 0; 
        cout << "How many tests would you like to average for student "<< x+1 << "?\n";
        cin >> countTests;
        for(int x = 0; x < countTests; x++)
        
        {
            cout << "Enter the score for test " << x + 1 << ":\n"; 
            cin >> testScore;
            total = total + testScore; 
           
        }
        average = total/countTests; 
        cout << "The average for the " << countTests << " tests is: " << average << endl; 
    }
  
    

    
    return 0; 
}