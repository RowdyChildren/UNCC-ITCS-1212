/*
    Program: lab9b.cpp
	Date: 
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/


#include <iostream>

using namespace std;



int main () {
	int y = 0;
	int array1[10], array2[10];
	for (int x = 1; x < 11; ++x)
		{
			cout << "Please enter value " << x << ": ";
			cin >> array1[x-1];
		}
		
	for (int x = 9; x != -1; --x)
		{
			
			array2[x] = array1[y];
			y = y + 1;
			
		}
	
		for (int x = 0; x < 10; ++x)
		{
			cout << array1[x] << " ";
		}
		
		cout << endl;
		
			for (int x = 0; x < 10; ++x)
		{
			
			cout << array2[x] << " ";
		
			
		}
		
		
	return 0;
}