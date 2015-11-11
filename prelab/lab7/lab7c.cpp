

#include <iostream>

using namespace std;
//check if num is positive
int main( )
{
    double price;
    
    do
    {
       cout <<"Enter a positive price for an item: ";
                 cin >> price;
    }while(price <= 0);     
    //when this is true, the block repeats-when the
    // user enters bad data the loop exits when the
    // user enters good data because the condition 
    // becomes false
    
    cout << "Great, you entered a positive value for price!";
    
    return 0;
}
