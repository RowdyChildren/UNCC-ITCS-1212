/*
example 2 
*/
#include<iostream>

using namespace std;

int main()

{
    float length, width, area;
    
    cout << "What is the length?";
    
    cin >> length;
    
    cout << "What is the width?";
    
    cin >> width;
    area =  length * width;
    
    cout << "Your Rectangle is " << area << " square units";
    
    return 0;
     
}