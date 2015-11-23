

#include <iostream>


using namespace std;


double getLength();

double getWidth();

double getArea(double, double);

void displayData(double, double, double);

int main ()

{
    //declare variables and call functions to set them
    double length = getLength();
    double width = getWidth();

    //calculate the area and display the data
    displayData(getArea(length, width), length, width);
    
    return 0;    
    
}

//function to get the length of a side from the user
double getLength()
{
    double length;
    cout << "Please enter the Length: ";
    cin >> length;
    
    return length;
    
}

//function to get the width of a side from the user
double getWidth()
{
    double width;
    cout << "Please enter the Width: ";
    cin >> width;
    
    return width;
    
}

//function to calc the area
double getArea (double length, double width)
    {
        return length * width;
    }

//dunction to display the data
void displayData(double area, double length, double width)
{
    cout << "The Length is " << length << ", The width is " << width <<
        ", The area is " << area << endl;
        
        
    
    
}