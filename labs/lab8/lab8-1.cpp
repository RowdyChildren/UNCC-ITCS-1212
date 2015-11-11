#include <iostream>
#include "../libs/WSstockQuote/stockQuote.h"
#include <string>
using namespace std;

int main () {
    cout << getQuote("GOOG");
    
    
    return 0;
}