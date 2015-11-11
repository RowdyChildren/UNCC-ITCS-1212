/*
    Program: lab5a.cpp
	Date: 2015-10-07
	Programmers: Riley Childs <me@rileychilds.me> and Andrew
	Purpose:
	
*/

#include <iostream>

//declare namespace
using namespace std;

float calNetPay(int, float);
void calNetPay2(float&, int, float);


int main ()

{ //main ()
float netPay;
calNetPay2 (netPay, 5, 6.8);
if (calNetPay(5,6.8) == netPay)
cout << "They Match";
    
    return 0;
    
}// main ()


float calNetPay (int hoursWorked, float rate) 
{ //calNetPay ()
    
    return hoursWorked * rate;
    
    
    
} //calNetPay ()
 
void calNetPay2 (float& netPay, int hoursWorked, float rate) 

{ //calNetPay2
    
    netPay = hoursWorked * rate;
    
} //calNetPay2





