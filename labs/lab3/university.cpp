#include <iostream>

using namespace std;

int main ()

    {
    char location, room;
    const int inStateTuition = 3000, outOfStateTuition = 4500, inStateRB = 2500, outOfStateRB = 3500;
    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state:\n";
    cin >> location;
    
    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not:\n ";
    cin >> room;
    
    if (location == 'I')
        {
        if (room == 'Y')
        cout << "Your Semester Bill is $" << inStateTuition + inStateRB << "\n";
        else
        cout << "Your Semester Bill is $" << inStateTuition << "\n";
        }
    else if (location == 'O')
        {
        if (room == 'Y')
        cout << "Your Semester Bill is $" << outOfStateTuition + outOfStateRB << "\n";
        else
        cout << "Your Semester Bill is $" << outOfStateTuition << "\n";
        }
    else
    cout << "Invalid Data";
        
        
        return 0;
    }