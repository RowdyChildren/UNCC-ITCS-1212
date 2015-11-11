#include <iostream> 
#include <string>    
using namespace std;

double getSales(string);
void findLowest(double, double, double, double);
int place;
    
    int main ()
    {
        double array [4];
        array [0] = getSales ("North");
        array [1] = getSales ("South");
        array [2] = getSales ("West");
        array [3] = getSales ("East");
        findLowest(array[0],array[1], array[2],array[3] );
        return 0;
        
    }
    
    
    double getSales(string division) {
        double total;
        cout << "How many acidents in " << division << "\n";
        cin >> total;
        return total;
        
        
    } 
    void findLowest (double one, double two, double three, double four)
    
    {
        
        float array [4] = {one, two, three, four};
        float smallest = 90000000000000000;
        int place;
        for (int i = 0; i < 4; i++) {
            if (array[i] < smallest) {
                smallest = array[i];
                place = i;
            }
        }
        
        if (place == 0)
                    cout << "The North Wins";
        else if (place == 1)
         
                    cout << "The South Wins";
        else if (place == 2)
        
             cout << "The West Wins";
        
        else if (place == 3)
                    cout << "The East Wins";

        
    }