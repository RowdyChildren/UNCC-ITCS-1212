/*
####################
#COMPILE WITH C++11#
####################
*/
/*
    Program: childs-riley-bank.cpp
	Date: 2015-11-23
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Bank Application
	
*/
/*
File Structure: Each user has a file that holds that user's data named <userid> the file is in the following format:
<userid>
<password>
<account balence>
*/

//Include Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

//using std
using namespace std;

//function prototypes

char mainMenu ();
char bankingMenu ();
bool createAccount(int, int);
int login(int, int);
bool withdraw(int, int, double);
bool deposit (int, int, double);
double displayBal(int);


int main () { //main
    
    //declare variables
    int userID, userPwd;
    double amt;
    char choiceMain = mainMenu();
    char choiceBank;
    
    //while the user doesn't want to quit
    while (choiceMain != 'q' && choiceMain != 'Q')
        {
            //switch the users choice
            switch (choiceMain)
            {
                //login case
                case 'l':
                case 'L':
                    //get in the user's id and password
                    cout << "Please enter your User ID: ";
                    cin >> userID;
                    cout << "Please enter your Password: ";
                    cin >> userPwd;
                    //validate users id and password
                    if (login(userID, userPwd) != -1)
                        {
                            //get their choice
                            choiceBank = bankingMenu();
                            //while the user doesn't want to quit
                            while (choiceBank != 'q' && choiceBank != 'Q')
                            {
                                //switch on the users choice
                                switch (choiceBank)
                                    {
                                        //deposit case
                                        case 'd':
                                        case 'D':
                                            //get deposit amount
                                            cout << "Please enter the amount to deposit: $";
                                            cin >> amt;
                                            //perform deposit
                                            deposit(userID, userPwd, amt);
                                        break;
                                        //witdrawl case
                                        case 'w':
                                        case 'W':
                                            //get amt
                                            cout << "Please enter the amount to witthdraw: $";
                                            cin >> amt;
                                            //validate funds and perform withdraw
                                            if (!withdraw(userID, userPwd, amt))
                                                cout << "Isufficent Funds!\n";
                                            
                                        break;
                                        //show bal case
                                        case 'r':
                                        case 'R':
                                        //display bal
                                            cout << "Your Balence is: $" << displayBal(userID) << endl;
                                        break;
                                        
                                    }
                                    //get the users choice again
                                choiceBank = bankingMenu();
                                
                            }
                        }
                            
                            //login issue
                            else
                                cout << "\n\n\nInvalid Account, try again\n\n";
                        
                break;
                //create account case
                case 'c':
                case 'C':
                    cout << "Please enter your User ID: ";
                    cin >> userID;
                    cout << "Please enter your Password: ";
                    cin >> userPwd;
                    
                    //validate if  account exists
                    if (createAccount(userID, userPwd))
                        cout << "Account Created!\n";
                    else
                        cout << "Account Exists!\n";
                
                break;
                
            }
            
            
            //get users net choice
            choiceMain = mainMenu();
            
        }
    
    
    
    //return success
    return 0;
}//main



char mainMenu() {
    
    char userChoice;
    cout << "Please Choose from the following options:\n" <<
        "l -> Login\n" <<
        "c -> Create Account\n" <<
        "q -> Quit\n" <<
        "Your Choice: ";
    
    cin >> userChoice;
    
    return userChoice;
    
    
    
}



char bankingMenu() {
    
    char userChoice;
    cout << "Please Choose from the following options:\n " <<
        "d -> Deposit Money\n" <<
        "w -> Withdraw Money\n" <<
        "r -> Request Balence\n" <<
        "q -> Quit\n" <<
        "Your Choice: ";
    
    cin >> userChoice;
    
    return userChoice;
    
    
    
}

bool createAccount(int userID, int password ) 
    {
        //check to see if the user id exists
        if (ifstream(to_string(userID)))
            return false;
        //now that we know that the user doesn't exist, create a file for them.
        ofstream outfile (to_string(userID));
        outfile << userID << endl << password << endl << "0.00" << endl;
        outfile.close();
        
        return true;
    }

int login(int userID, int password)
    {
        string line;
        int passwordFromFile;
        
        if (ifstream(to_string(userID)))
            {
                ifstream userFile (to_string(userID));
                //loop though until we get to the line with the paddword
                for(int i = 0; i < 2; ++i)
                    getline(userFile, line);
                //convert string to interger that we got from the file
                passwordFromFile = stoi(line);
                return userID;
            }
        else 
            return -1;
        
        
        
    }
    
bool withdraw(int userID, int password, double amt)
    {
        double bal;
         string line;
        if (ifstream(to_string(userID)))
            {
                ifstream userFile (to_string(userID));
                //loop though until we get to the line with the bal
                for(int i = 0; i < 3; ++i)
                    getline(userFile, line);
                //convert line from file to double
                 bal = stod(line);
                 //validate funds
                if (amt <= bal)
                    {
                        userFile.close();
                        //remove( to_string(userID));
                        ofstream outfile (to_string(userID));
                        //overwrite file
                        outfile << userID << endl << password << endl << (bal - amt) << endl;
                        outfile.close();
                        return true;
                    }
                else {
                    return false;
                }
            }
        else 
            return false;
        
        
        
    }
bool deposit(int userID, int password, double amt)
    {
        string userName = to_string(userID);
        double bal;
        string line;
        if (ifstream(to_string(userID)))
            {
                ifstream userFile (to_string(userID));
                //loop though until we get to the line with the bal
                for(int i = 0; i < 3; ++i)
                    getline(userFile, line);
                    //convert line from file to double, set equal to bal
                 bal = stod(line);
               
                        userFile.close();
                        //remove( userName);
                        ofstream outfile (to_string(userID));
                        //overwrite file
                        outfile << userID << endl << password << endl << (bal + amt) << endl;
                        outfile.close();
                        return true;
                   
            }
        else 
            return false;
        
        
        
    }

double displayBal(int userID)
 {
        double bal;
         string line;
         //check to make sure the user's record exists
        if (ifstream(to_string(userID)))
            {
                ifstream userFile (to_string(userID));
                //loop though until we get to the line with the bal
                for(int i = 0; i < 3; ++i)
                    getline(userFile, line);
                    //convert value from file to double
                 bal = stod(line);
               
                       return bal;
                   
            }
        else 
        //this user doesn't exist
            return -1;
        
        
        
    }