/*
    Program: question2.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Function Demo
	
*/

//include libraries
#include <stdio.h>

//declare prototypes
int times_n2 (int, int);

int main ()

{//main

    //first test
    printf("4 x 5 = %i\n", times_n2(4, 5));
    //2nd test
    printf("6 x 20 = %i\n", times_n2(6, 20));
    //third test
    printf("8 x 9 = %i\n", times_n2(8, 9));
    
}//main

int times_n2 (int number, int N)
{//times_n

    return number*(N*2);
}//times_n