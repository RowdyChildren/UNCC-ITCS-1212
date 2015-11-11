#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std; 


int main ()

{
    
    srand(time(NULL));
    for (int i = 0; i < 11; i++)
     cout << rand()%30+1 << endl;
    
    
}