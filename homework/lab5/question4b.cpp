/*
    Program: question4b.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Function Demo
	
*/

#include <iostream>
using namespace std;

void myFunc1(int var)	{
	var = 50;
	cout << var << endl;
}
void myFunc2(int &var)	{
	var = 50;
	cout << var << endl;
}
//what I added
void myFunc3(int m ,int& n)	{
	n = n + m;
}

//end what I added

int main()	{
	int var = 100;
	myFunc1(var);
	cout << var << endl;
	myFunc2(var);
	cout << var << endl;
	//What I added
	myFunc3(5, var);
	cout << var << endl; // should be 55
	//End what I added
	return 0;
}