#include <iostream>

using namespace std;

int main ()

{
    const float discount5_10 = .1, discount11_20 = .15, discount21_30 = .2, discount31 =.25;
    int numShirts;
 
    
    cout << "How many tshirts did you want?\n";
    cin >> numShirts;
    
    if (numShirts >= 5 && numShirts <= 10)
    cout << "Your total is: $" << (12.0*numShirts)*discount5_10 <<"\n";
    
    else if (numShirts >= 11 && numShirts <= 20)
    cout << "Your total is: $" << (12.0*numShirts)*discount11_20 <<"\n";
    
    else if (numShirts >= 21 && numShirts <= 30)
    cout << "Your total is: $" << (12.0*numShirts)*discount21_30 <<"\n";
    
    else if (numShirts >= 31)
    cout << "Your total is: $" << (12.0*numShirts)*discount31 <<"\n";
    else
     cout << "Your total is: $" << (12.0*numShirts) << "\n";
     
    return 0;    
}