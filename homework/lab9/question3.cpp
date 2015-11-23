#include <iostream>


using namespace std;

void getScore(double    (&scores)[4]);
double findLowest (double arr[]);
void calcAvg (double arr[]);


int main () 

{
    double score[4];
    getScore(score);
    calcAvg (score);
    return 0;
}

void getScore(double (&scores)[4]) 
{
    for (int i = 0; i < 4; ++i)
        {
            cout << "Please enter score " << i + 1 << ":";
            cin >> scores[i];
        }
}

void calcAvg (double arr[])
    {
        double lowest = findLowest(arr);
        double avg = 0, total = 0;
        for (int i = 0; i < 4; ++i)
        {
            total += arr[i];
        }
        
        total -= lowest;
        
        avg = total/3;
        
        cout << "The average is " << avg << endl;
    }
    
double findLowest (double arr[])
    {
        double low = arr[0];
        for (int i = 0; i < 4; ++i)
            {
                if (arr[i] < low )
                    {
                        low = arr[i];
                    }
            }
        
        return low;
    }