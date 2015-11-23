/*
    Program: question2.cpp 
	Date: 2015-10-18
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: 
	
*/

#include<iostream>

using namespace std;

int main()

{
    
    
    int num,factorial=1;

    cout<< "Enter a number: "";

    cin>>num;

    for(int a=1;a<=num;a++)

    {

        factorial=factorial*a;

    }

cout<<"Factorial  ="<<factorial<<endl;

    return 0;

}