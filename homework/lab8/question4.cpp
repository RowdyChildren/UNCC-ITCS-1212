/*
    Program: question4.cpp
	Date: 2015-11-05
	Programmers: Riley Childs <me@rileychilds.me>
	Purpose:
	
*/

#include <iostream>
#include <algorithm> 
using namespace std;



void getJudgeData(double& score)
    {
        do {
        if (score > 10 || score < 0)
            cout << "Invalid input, please enter a number greater than 0 or less than or equal to 10";
            
        cout << "Please enter your score: ";
        cin >> score;
        } while (score > 10 || score < 0);
    }
    
double findLowest(double scores[]) 
    {
        return *min_element(scores, scores+5);
    }
    
double findHighest(double scores[]) 
    {
        return *max_element(scores, scores+5);
    }
    
void calcScore(double scores[], double lowScore, double highScore)
    {
        double total;
        
        //add all the scores
        for (int i=0; i < 5; i++)
        {
        
            total += scores[i];
        
        }
        //subtract the low and the high from the sum
        total -= (lowScore+highScore);
        
        //echo the final sco
        cout << "Final score is " << total/3;
    }   
    
  int main () {
    
    double scores[5];
    //double finalScores[3];
    double low;
    double high;
    
    //get the data from the user
    for (int i = 0; i < 5; i++)
        getJudgeData(scores[i]);
        
    //find the outliers
    low = findLowest(scores);
    high = findHighest(scores);
    
    //calc score and display data
    calcScore(scores, low, high);
    
    return 0;
}  
