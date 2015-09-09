/* 
Program: calculateTip.cpp
Date: 15-09-09
Programmers: Riley Childs <me@rileychilds.me> and Kathrine <kcocchio@uncc.edu>
Purpose: This program asks the user for the price of a meal and the percent of tip to be left. It then calculates the tip and displays the price of the meal, the amount of the tip and the total cost      

*/ 

#include<iostream> 
using namespace std;

int main( ) {  

//this section declares all needed variables     
float mealPrice; 
float tipPercent; 
float tipAmount; 
float totalCost;  
     
//cin is used to read input from the user into a variable     
//prompt the user for values for the input variables        
cout << "Enter the price of the meal you purchased: ";     
cin >> mealPrice;  
 
cout << "Enter the tip percent you wish to leave:";      
cin >> tipPercent;      

   
    
//process - notice the use of the assignment operator- it works from right to left      
tipPercent = tipPercent/100; //move the decimal two places to left      
tipAmount = mealPrice * tipPercent; // calculate the amount of tip 
  totalCost = mealPrice + tipAmount;   
//print output to screen using cout    
cout << "The meal price you entered:" << mealPrice << endl;    
cout << "The amount of tip:" << tipAmount << endl;   
cout <<  "The total cost: $" << totalCost << endl;  
   	
return 0; 
} 
 
