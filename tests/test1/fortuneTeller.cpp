/*
    Program: fortuneTeller.cpp
	Date: 15-09-23
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/


#include <iostream>
#include <cmath>


using namespace std;

float calcmat(float num) 

{
	return 2*pow(num,3)+24*pow(num,2)+72*num;
	
	
}

int main () {
	
	cout << abs(calcmat(2.0)-calcmat(0.0)) + abs(calcmat(6.0)-calcmat(2.0)) + abs(calcmat(16) - calcmat(6));
	
	
}