#include <iostream>


using namespace std;


double getLength(int);

double getWidth(int);

double getArea(double, double);

void displayData(double, double, double, int);

int main ()

{
    //nested array to get the sizes and area, the first value is length the second is width the third is area
    double data[5][3];
    
    // loop and collect data
    for (int i = 0; i < 5; ++i)
        {
            data[i][0] = getLength(i + 1);
            data[i][1] = getWidth(i + 1);
            data[i][2] = getArea(data[i][0], data[i][1] );
        }
    
    // loop and display data
    for (int i = 0; i < 5; ++i)
        {
         displayData(data[i][2], data[i][0], data[i][1], i + 1)  ; 
        }
    

    return 0;
    
    
}


//function to get the length of a side from the user
double getLength(int num)
{
    double length;
    cout << "Please enter the Length for rectagle " << num << ": ";
    cin >> length;
    
    return length;
    
}

//function to get the width of a side from the user
double getWidth(int num)
{
    double width;
    cout << "Please enter the Width for rectagle " << num << ": ";
    cin >> width;
    
    return width;
    
}

//function to calc the area
double getArea (double length, double width)
    {
        return length * width;
    }

//dunction to display the data
void displayData(double area, double length, double width, int num)
{
    cout << "For rectagle " << num  << " The Length is " << length << " units, The width is " << width <<
        " units, The area is " << area << "Units Square " << endl;
    
}