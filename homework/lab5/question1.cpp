/*
    Program: question1.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Function Demo
	
*/

//include libraries
#include <stdio.h>

//declare prototypes
int times_n (int, int);

int main ()

{//main

    //first test
    printf("4 x 5 = %i\n", times_n(4, 5));
    //2nd test
    printf("6 x 20 = %i\n", times_n(6, 20));
    //third test
    printf("8 x 9 = %i\n", times_n(8, 9));
    
}//main

int times_n (int number, int N)
{//times_n

    return number*N;
}//times_n