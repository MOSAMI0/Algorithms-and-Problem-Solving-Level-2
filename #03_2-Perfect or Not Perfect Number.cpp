#include<iostream> //#03/2
#include<string>
#include<cmath>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);


	return Number;


}

bool IsPergectNumber(int Number)
{
	int Sum = 0;
	for (int Counter = 1; Counter < Number; Counter++)
	{
		if (Number % Counter == 0)
			Sum += Counter;

	}
	return Number == Sum;

}

void PrintResult(int Number)
{
	cout << endl;
	if (IsPergectNumber(Number))
		cout << Number << " Is A Perfect Number.\n";
	else
		cout << Number << " Is Not A Perfect Number.\n";


	
}

int main()
{
	PrintResult(ReadPositiveNumber("Please enter a positive number? "));

	return 0;
}