/*
    Program: 
	Date: 
	Programmers: Riley Childs <me@rileychilds.me> and Robyn Exclusa
	Purpose:
	
*/

#include <iostream>
using namespace std;

float avgTemp (float, float, float);

int main ()

{
	float temp1, temp2, temp3;
	cout << "Input temperature for first zipcode" << endl;
	cin >> temp1;
	cout << "Input temperature for second zipcode" << endl;
	cin >> temp2;
	cout << "Input temperature for third zipcode" << endl;
	cin >> temp3;
	cout << avgTemp(temp1, temp2, temp3) << endl;
	return 0;
}

float avgTemp (float temp1, float temp2, float temp3)
{
return   (temp1 + temp2 + temp3) / 3;
}