#include <iostream>

using namespace std;

int main ()

{
    float m1, m2, m3, m4, avg;
    const int conservation = 25;
    const int excessive = 75;
    
    cout << "How much did pay in Quarter 1?\n";
    cin >> m1;
    cout << "How much did pay in Quarter 2?\n";
    cin >> m2;
    cout << "How much did pay in Quarter 3?\n";
    cin >> m3;
    cout << "How much did pay in Quarter 4?\n";
    cin >> m4;
    
    //do some calculations!
    avg = (m1+m2+m3+m4)/4.0;
    if (avg <= conservation)
    cout << "Your average bill is $" << avg << " Great job your an eco warrior!!!!";
   else if (avg > excessive)
    cout << "Your average bill is $" << avg << " You suck, stop wasting water\n";
    else if (avg < excessive && avg > conservation)
    cout << "Your average bill is $" << avg << "...meh\n";
    else 
    cout << "how did you get here????";
    
    //return success
    return 0;
}