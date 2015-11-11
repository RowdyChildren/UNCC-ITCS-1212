/*
Program: CPP Fast Food
Author: Hunter Forbes
Date: 10/26/2015
Lab Section: 03
Purpose: This program simulates a fast food restaurant.
Algorithm: The program will state its purpose, get the order from the customer, calculate a total minus any discounts or coupons, add sales tax and print out the total.
*/
#include <iostream> // this allows the input output stream to be included

using namespace std; // this includes the standard namespace

int menu(int item); // this is a function prototype
float findSubTotal (int& item, int& quantity); // this is a function prototype
float applyDiscounts (float& subtotal); // this is a function prototype
void showReceipt(); // this is a function prototype
// I ran out of time and was not able to begin the receipt function

int main() // this is the main function
{
    /* the following is the menu of the store, it is the main function and calls several other functions */
    cout << "Welcome to the CPP restaurant! What can we get you?" << endl;
    cout << "Menu:" <<endl;
    cout << "1. Burger $3.75" << endl;
    cout << "2. Fries $1.05" << endl;
    cout << "3. Chicken $4.50" << endl;
    cout << "4. Salad $4.25" << endl;
    cout << "5. Drink $0.99" << endl;
    cout << "Which item would you like to purchase? " << endl;
    int item; // declares variable
    int quantity; // declares variable
    cin >> item; // declares variable
    menu(item); // calls the menu function
    cout << "How many would you like? " << endl;
    cin >> quantity;
    float subtotal = findSubTotal(item, quantity); // declares subtotal and calls the find sub total function
    applyDiscounts(subtotal); // calls the apply discounts function




    return 0; // tells the function main that it has ended and returns zero
}
int menu(int item) // this is the menu function
/* this function uses an if else statement to take the users input and return it */
{
    if (item > 5)
            cout << "invalid choice please try again" << endl;
    else (item < 5);
    cout << "You have chosen: " << item << endl;
    return item;
}
float findSubTotal (int& item, int& quantity) // this is the find subtotal function
/* this function uses a switch with case break statements to take the users input and gather a price for it */

{
    float price;
    switch (item){ // this is the switch
case 1:
    price = 3.75;
    break;
case 2:
    price = 1.05;
    break;
case 3:
    price = 4.50;
    break;
case 4:
    price = 4.25;
    break;
case 5:
    price = 0.99;
    break;
default:
    price = 0;
    break;
    }
float subtotal;
subtotal = price * quantity; // this uses the value from the switch and multiplies it with quantity that was passed through from the main function

return subtotal; // it returns the subtotal
}
/*
//I have used a comment block for this function because i cannot get it to compile, I have errors on the second if else statement; the one regarding coupons. I ran out of time to attempt to fix it.

float applyDiscounts(float& subtotal) // this is the function that applies the discounts to the subtotal
{
    int member; // declares a variable
    int coupons; // declares a variable
    float total1; // declares a variable
    float total2; // declares a variable
    float couponamount; // declares a variable
    // the following prompts the user for 2 inputs

    cout << "Are you a rewards member? (enter 1 for yes and 2 for no) " << endl;
    cin >> member;
    cout << "Do you have any coupons? (enger 1 for yes and 2 for no) " << endl;
    cin >> coupons;
    // the following is an if else statement for the member discount

    if (member = 1){
        total1 = (subtotal * 0.9);}
    else (member = 2);
        total1 = subtotal;
    cout << total1 << endl;
    // the following is an if else statement for the coupons

    if (coupons = 1)
        {cout << "How much is the coupon for? " << endl;
        cin >> couponamount;
        total2 = total1 - couponamount;}
    else (coupons = 2);
        total2 = total1;


    return 0;
}

*/
// i ran out of time and was unable to start the receipt function