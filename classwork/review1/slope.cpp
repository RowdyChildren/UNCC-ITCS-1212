#include <iostream>

using namespace std;

int main ()



{
    
    float m, x1, y1, x2, y2;
    
    cout << "Please Enter the first x,y value\n";
    cin >> x1 >> y1;

    cout << "Please Enter the second x,y value\n";
    cin >> x2 >> y2;

    
    m = (y2-y1)/(x2-x1);
    
    
     cout << "the line equation is" << " y = " << " " << m << "x" << " + " << (m * x1) + y1;
    
    return 0;
}
