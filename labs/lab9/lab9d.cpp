#include <iostream>
#include <iomanip>
//#include <array>



using namespace std;

int main () {
        
    int employeeID [10];
    double sales[10];
    double avg;
    double total;
    int index = 0;
    int highPos, lowPos;
    double holder;
    for (int x = 0; x < 10; ++x )
        {
            std::cout << "Please enter ID and sales for employee " << x+1 << ":\n";
            cin >> employeeID[x] >> sales[x];
            
        }
    
    holder = sales[0];
    for(int i = 1; i < 11; i++)
    {
        if(sales[i] < holder)
        {
            lowPos = i;
            holder = sales[i];
        }
            
    }
    
for (dsddd)
{
    total += myArray[0][i];
    total += myArray[0][i];
}
    
      holder = sales[0];
    for(int i = 1; i < 11; i++)
    {
        if(sales[i] > holder)
        {
            highPos = i;         
            holder = sales[i];
        }
    }
     for (int x = 0; x < 10; ++x )
        {
    cout << "ID: " << employeeID[x] << " Sales: $" << sales[x] << endl; 
    total += sales[x];
        }
        
    avg = total/10;
    cout << "The avg sales are $" << avg << "\n";
    cout << "Employee with ID " << employeeID[highPos] << " sold the most with $" << sales [highPos] << " in sales" << endl;;
    cout << "Employee with ID " << employeeID[lowPos] << " sold the least with $" << sales [lowPos] << " in sales";
    
    
    
    
    
    return 0; 
}