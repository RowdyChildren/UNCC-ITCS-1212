#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() 
{ 


    int number;
    float cost;
    char beverage = 'e';
    bool validBeverage; 
    
    
    cout << fixed << showpoint << setprecision(2); 
    do 
        { 
        cout << endl << endl; 
        cout << "Hot Beverage Menu" << endl << endl; cout << "A: Coffee $1.00" << endl; cout << "B: Tea $ .75" << endl; cout << "C: Hot Chocolate $1.25" << endl; 
        cout << "D: Cappuccino $2.50" << endl << endl << endl; 
        cout << "Enter the beverage A,B,C, or D you desire" << endl; 
        cout << "Enter E to exit the program" << endl << endl; 
        cin >> beverage;
        
        switch(beverage) 
        { 
            case 'a': 
            case 'A': 
            case 'b': 
            case 'B': 
            case 'c': 
            case 'C': 
            case 'd': 
            case 'D': validBeverage = true; 
            break; 
            default: validBeverage = false; 
        } 
        if (validBeverage) //#####B: There is no diffrence
        { 
            cout << "How many cups would you like?" << endl; 
            cin >> number;
         } 
        
        switch (beverage)
        
        { 
            //coffee
            case 'a': 
            case 'A': cost = number * 1.0; 
            cout << "The total cost is $ " << cost << endl; 
            break; 
            //tea
            case 'b':
            case 'B':cost = number * .75; 
            cout << "The total cost is $ " << cost << endl;  
            break;
            //hc
            case 'c':
            case 'C':cost = number * 1.25; 
            cout << "The total cost is $ " << cost << endl;  
            break;
            //cappichino
            case 'd':
            case 'D':cost = number * 2.5; 
            cout << "The total cost is $ " << cost << endl;  
            break;
            //exit
            case 'e': 
            case 'E': cout << " Please come again" << endl; 
            break; 
            default:cout << "Invalid Choice, "; 
                            cout << " Try again please" << endl; 
        } 
    } while ((beverage != 'e' && beverage != 'E'));  
    
   return 0;
}
