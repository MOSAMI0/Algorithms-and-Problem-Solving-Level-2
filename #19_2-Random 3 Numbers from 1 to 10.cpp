#include<iostream> //#19/2
#include<string>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number.
	int randomNum = rand() % (To - From + 1) + From;

	return randomNum;
}

int main()
{
	// Seeds the random number generator in C++, called onley once. You've to call this line of code or It will give you the same numbers. 
	srand((unsigned)time(NULL));
	
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;



	return 0;
}