/*
    Program: childs-riley-games.cpp 
	Date: 2015-10-16
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose: Play a dice game and a RPS game
	
*/

/*
Algorithm

1)Prompt user for game choice
2)Determine game based on user input
    2a)If RPS call rps()
        2a1)Ask user for play
        2a2)Generate Computer's choice
        2a3)Compare and determine winner
    2b) if Dice call dice()
        2b1)Ask user to choose number of dice
        2b2)Generate random numbers for dice
        2b3)Compare Random numbers and determine score
    2c)If exit
        2c1)main () returns 0


*/


//include libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

//declare namespace
using namespace std;


//declare function prototypes
int menu ();
bool rps ();
bool dice ();

int main ()
{//main ()
    
    bool runProg = true;
    
    //Switch statement to select games
    
    switch  (menu())
    {//switch(menu()
    case 1:
        //clear screen
        cout << string( 100, '\n' );
        //call function
        runProg = rps();
    break;
    case 2:
        //clear screen
        cout << string( 100, '\n' );
        //call function
        runProg = dice();
    break;
    case 3:
        //clear screen
        cout << string( 100, '\n' );
        cout << "Thanks for playing!";
        runProg = false;
    break;
    
    } //switch(menu()
       
     return 0;
}//main ()

bool rps () {//rps ()
    
    
    //declare variables
    int choice[2];
    //show rules
    cout << "Rock, Paper, Scissors game\n" << 
        "The rules are:\n" <<
            "\tRock beats scissors.\n" <<
            "\tScissors beats Paper.\n" <<
            "\tPaper beats rock.\n\n"; 
    
    //show options


    cout << "Game Choices\n" <<
        "\t1. Rock\n" << 
        "\t2. Paper\n" <<
        "\t3. Scissors\n" << 
        "\t4. Exit Program\n" << 
        "Please enter your *numeric* choice: ";
    //get user input
    cin >> choice[0];
    
        //process a request to exit
        if (choice[0] == 4 )
            {
                //exit
                exit(EXIT_SUCCESS);
            }
    //init random nums
    srand(time(NULL));
    
    //set computer choice and generate random number
    choice[1] = rand()%4;
    
    
    //determine winner
    
    if (choice[0] == choice[1]) //both choose the same
    {
        cout << "Tie!\n The computer used the same as you";
    }
    else if (choice[0] == 1 && choice[1] == 2) //rock vs paper
    {
        cout << "Computer Wins!\nThe computer used paper";
    }
    else if (choice[0] == 1 && choice[1] == 3) //rock vs Scissors
    {
        cout << "User Wins!\nThe computer used scissors";
    }
    else if (choice[0] == 2 && choice[1] == 3)  //paper vs Scissors
    {
        cout << "Computer Wins!\nThe computer used scissors";
    }
    else if (choice[0] == 2 && choice[1] == 1) //paper vs rock
    {
        cout << "User Wins!\nThe computer used rock";
    }
    else if (choice[0] == 3 && choice[1] == 1) //sicisors vs rock
    {
        cout << "Computer Wins!\nThe computer used rock";
    }
    else if (choice[0] == 3 && choice[1] == 2) //sicisors vs paper
    {
        cout << "User Wins!\nThe computer used paper";
    }
    
    //exit
    return false;
    
} //rps ()


int menu () {
    
    //declare vars
    int userInput;
    
    //show menu
    cout << "1. Play Rock/Paper/Scissors.\n" << 
        "2. Play Dice Roll.\n" <<
        "3. Exit (any other input)\n\n\n" <<
        "Enter your choice: ";
    cin >> userInput;
    
    //return the user's input
    return userInput;
    
    
}

bool dice () {
    
    int userInput, dieOne, dieTwo;
    
    //show directions
    cout << "Dice Roll Game\n" <<
        "The rules are:\n" <<
        "\tYou get 10 points if you roll two dice and get a total of 7\n" <<
        "\tYou get 5 points if you roll two dice and get identical numbers\n" <<
        "\tYou get 3 points if you roll one dice and get a 4\n\n";
        
    //show options 
    cout << "Game Choices:\n" <<
        "\t1. Roll only one die\n" <<
        "\t2. Roll two dice\n" <<
        "\t3. Quit and exit the program\n" <<
        "Please enter your choice: ";
    cin >> userInput;
    
    

    
    switch (userInput)
    
    {//userInput
        
        case 1:
            //init random nums
            srand(time(NULL));
            //gen random nums
           dieOne = rand()%7;
           if (dieOne == 4)
                {
                    cout << "You got 3 points";
                }
            
        break;
        
        case 2:
            //init random nums
            srand(time(NULL));
            dieOne = rand()%7;

            dieTwo = rand()%7;
            
            //determine score
            if (dieOne == dieTwo)
                    cout << "You got 5 points with " << dieOne << " and " << dieTwo;
            else if (dieOne + dieTwo == 7)
                    cout << "You got 10 points with " << dieOne << " and " << dieTwo;
            else 
                cout << "You got zero points with " << dieOne << " and " << dieTwo;
        break;
        default:
            //exit if invlaid option
            exit(EXIT_SUCCESS);
        break;
    
    }
    
    
    //exit
    return false;
}