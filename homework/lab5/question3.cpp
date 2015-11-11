/*
    Program: question2.cpp
	Date: 15-10-03
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Function Demo
	
*/

//include libraries
#include <stdio.h>

//declare prototypes
void compute (int, double, double, double&, double&, double&);

int main ()

{//main
    double sales[3];
    //first test
    compute(5, 5.00, .05, sales[0], sales[1], sales [2]);
    printf("I sold 5 widgets at $5 per widget at a tax rate of .05. I got $%G in total sales, $%G in  total tax and $%G in total.\n", sales[0], sales[1], sales[2]);
    //2nd test
compute(20, 4.00, .01, sales[0], sales[1], sales [2]);
    printf("I sold 20 widgets at $4 per widget at a tax rate of .01. I got $%G in total sales, $%G in  total tax and $%G in total.\n", sales[0], sales[1], sales[2]);
    // //third test
    // printf("8 x 9 = %i\n", times_n2(8, 9));
    
}//main

void compute (int quantity, double price, double salesTax, double& totalSales, double& totalTax, double& total)
{//times_n
    totalSales = quantity * price;
    totalTax = totalSales * salesTax;
    total  = totalSales + totalTax;
    
}//times_n