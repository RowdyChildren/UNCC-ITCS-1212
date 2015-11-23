#include <cstdlib>
#include <iostream>


using namespace std;

bool isEven(int integer);

int main () {
    int theArray[15];
    int oddCount = 0, evenCount = 0;
    
    srand (time(NULL));
    
    for (int x = 0; x < 15; ++x)
        {
        theArray[x] = rand() % 21;
        cout << theArray[x] << " ";
        }
    
    for (int x = 0; x < 15; ++x)
    {
        if (isEven(theArray[x]))
            {
              ++evenCount;  
            }
            else 
            {
                ++oddCount;
            }
    
    }
    
    cout << "\nThere are " << evenCount << " even numbers and " << oddCount << " odd numbers\n";
    return 0;
}

bool isEven( int integer )
{

  if ( integer % 2== 0 )
     return true;
  else
     return false;
}