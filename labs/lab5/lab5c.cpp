/*
    Program: lab5c.cpp
	Date: 2015-10-07
	Programmers: Riley Childs <me@rileychilds.me> and Andrew
	Purpose:

*/

#include <iostream>
using namespace std;

// Function protoypes
char showMenu();
double calculateMembershipRate(char, int);
void displayMembershipRate(double);
double calculateMembershipDiscount(int);

int main()
{
	// Declare variables
	bool run = true;
	char choice;					// To hold menu choice
	int months, numMembers = 1;						// To hold the number of months
	double membershipRate = 0.0;			// To calculate the membership rates


	// Function call to display the menu and return the menu
	// choice
	while (run) {
	choice = showMenu();

	// Accept number of months and calculate membership rates if user chooses A, B or C
	if(choice != 'D')	{
		// Get the number of months
		cout << "For how many months: " << endl;
		cin >> months;

		// Make a function call to calculate the membership rates. Send choice, and months as parameters
		membershipRate =+ calculateMembershipRate(choice, months) - (calculateMembershipDiscount(numMembers)*calculateMembershipRate(choice, months));
        numMembers++;



		// Make a function call to display the final membership rate
		//sdisplayMembershipRate(membershipRate);
	}
	else {
	    displayMembershipRate(membershipRate);
		cout << "Goodbye !" << endl;
		run = false;
	}
	}
	return 0;
}

// Function definition to display the menu choice and return the choice to the user
char showMenu()
{
	char userChoice;

	// Display the menu choices to the user
	cout << "\nHealth Club Membership Menu" << endl;
	cout << "A. Standard Adult Membership " << endl;
	cout << "B. Child Membership " << endl;
	cout << "C. Senior Citizen Membership " << endl;
	cout << "D. Quit and show charges " << endl;
	cout << "Enter (A, B, C or D) as your membership choice: " << endl;
	cin >> userChoice;

	// Return the menu choice back to the user
	return userChoice;
}

// Function definition to calculate membership rate for the user based on user choice and number of months
double calculateMembershipRate(char userChoice, int numMonths)
{
		// Constants for membership rates
		const double ADULT = 40.00;
		const double CHILD = 20.00;
		const double SENIOR = 30.00;

		double rate = 0;				// Variable to hold the membership rate

		// Switch between user choice
		switch(userChoice)
		{
		case 'A':	// calculate the mebership rate for adult
			rate = numMonths * ADULT;
			break;
		case 'B':	// calculate the membership rate for child
			rate = numMonths * CHILD;
			break;
		case 'C':	// calculate the membership rate for senior
			rate = numMonths * SENIOR;
			break;
		default:	// Invalid choice
			cout << "Invalid Choice" << endl;
		}

		// Return the rate back to the main function
		return rate;
}

// Function call to display the membership rate to the user
void displayMembershipRate(double finalRate)
{
	cout << "The total charges are: $" << finalRate << endl;
}

double calculateMembershipDiscount (int numOfMembers) {
    if (numOfMembers == 1)
    {
        return 0;
    }

    else if (numOfMembers == 2 )
    {
        return .15;
    }
    else if (numOfMembers == 3 )
    {
        return .1;
    }
    else if (numOfMembers == 4 )
    {
        return .05;
    }

    else {
        return 0;
    }
}
