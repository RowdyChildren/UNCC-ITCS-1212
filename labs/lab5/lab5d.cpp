#include <iostream> 
#include <string>    
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);
int place;
    
    int main ()
    {
        double array [4];
        array [0] = getSales ("Notheast");
        array [1] = getSales ("Southeast");
        array [2] = getSales ("Northwest");
        array [3] = getSales ("Southwest");
        findHighest(array[0],array[1], array[2],array[3] );
        return 0;
        
    }
    
    
    double getSales(string division) {
        double total;
        cout << "How much did you sell in " << division << "\n";
        cin >> total;
        return total;
        
        
    } 
    void findHighest (double one, double two, double three, double four)
    
    {
        
        float array [4] = {one, two, three, four};
        float highest = 0;
        int place;
        for(int i=0;i<4;i++)
        {
            if(array[i]>highest)
            {
                highest = array[i];
                place = i;
            }
        }
        
        if (place == 0)
                    cout << "The Northeast Wins" << place;
        else if (place == 1)
         
            cout << "The Southeast Wins";
        else if (place == 2)
        
            cout << "The Northwest Wins";
        
        else if (place == 3)
            cout << "The Southwest Wins";

        
    }