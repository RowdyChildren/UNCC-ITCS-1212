#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()

{
    int x;
    int a;
    int b;
    srand(time(NULL));
    x = rand();
    cin << a;
    cin << b;
    x= a + (rand() % (b-a + 1));
    cout << "x is " << x;
    
    
}