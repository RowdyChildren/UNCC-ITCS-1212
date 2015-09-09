/*
    Program: calculateRectangle.cpp
	Date: 15-09-09
	Programmers: Riley Childs <me@rileychilds.me> and Kathrine <kcocchio@uncc.edu
	Purpose: Determine the area/perimiter of the triangle
	
*/
#include <iostream>
using namespace std;


int main ()
{ //open main () 
// DEclare the constants
const int LENGTH = 8;
const int WIDTH = 3;

//echo statement and do some math
cout << "The area is " << LENGTH*WIDTH << " square units\n";
cout << "The perimeter is " << 2*(LENGTH+WIDTH) << " units\n";

//return success
return 0;
	
	
}  //close main ()