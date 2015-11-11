/*
    Program: scope.cpp
	Date: 
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/


#include <stdio.h>


using namespace std;

int myGlobalVariable = 10;
int x = 1;

int add(int, int);


int main ()

{
    int y = 2; 
    printf("value = %d", add(x,y));
    return 0;
    
}


int add(int x, int y)

{
 return x + y;   
}
