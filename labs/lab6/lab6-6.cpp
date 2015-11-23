#include <iostream>      
#include <cstdlib>
#include <time.h>       
using namespace std;
int main ()
{
  //declare secrete and guess variables here
    int guess, secret;
    bool loopComplete = false;
  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10 using rand() function: */
  secret = rand()%11;
    
  do {
    /* ask the user to guess the secrete number between 1 to 10 and write the logic for displaying appropriate messages */
    if (loopComplete)
        cout << "Invalid guess\n";
        
    cout << "Guess the number: ";
    cin >> guess;
      loopComplete = true;
      
      
  } while (guess != secret);

  cout<<"Congratulations!, You guessed the correct secrete number";
  return 0;
}