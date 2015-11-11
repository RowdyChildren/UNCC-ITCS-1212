#include <iostream>
using namespace std;

void myFunc1(int var)	{
	var = 50;
	cout << var << endl;
}
void myFunc2(int &var)	{
	var = 50;
	cout << var << endl;
}

int main()	{
	int var = 100;
	myFunc1(var);
	cout << var << endl;
	myFunc2(var);
	cout << var << endl;
	
	return 0;
}