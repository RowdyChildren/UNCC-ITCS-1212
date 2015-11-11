#include <iostream>
#include <iomanip>
using namespace std;


void f2c_c (float&, float);
void c2f_c (float&, float);
char showMenu();

int main ()

{
    
    float temp;
    float converted;
    char choice;
    choice = showMenu();
    if (choice == '1')
    {
        cout << "What is the Tempature in C";
        cin >> temp;
        c2f_c(converted, temp);
        cout << "The converted temp is " << converted << "\n";
    }
    else if (choice == '2')
    {
        
        cout << "What is the Tempature in F";
        cin >> temp;
        f2c_c(converted, temp);
        cout << "The converted temp is " << converted << "\n";
    }
    
}


    char showMenu()
    {
    char userChoice;
    cout << "Choose an option from the menu below\n\n";
    cout << "#######################################\n";
    cout << "# " << setw(7) <<"Option #"<< setw(10) << right <<"Action"  << setw(20) <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "# " << setw(7) << "  1" << setw(4) <<"#"<< setw(25) << left << "Convert to F" <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "# " << setw(7) << "  2" << setw(4) <<"#"<< setw(25) << left << "Convert to C"  <<  "#\n";
    cout << left <<"#######################################\n";
    cout << "Your Choice: ";
    
    
    //get the user's choice
    cin >> userChoice;
    return userChoice;
    }

void f2c_c (float& tempConverted,float tempInital)
{
    tempConverted = (5.0/9) * (tempInital -32);
}

void c2f_c (float& tempConverted,float tempInital)
{
    tempConverted = (9.0/5) * (tempInital +32);
}