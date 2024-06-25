#include<iostream> //#04/2
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

void PrintPerfectNumbersFrom1ToN(int Number)
{
	cout << endl;
	cout << "Perfect Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (IsPergectNumber(i))
		{
			cout << i << '\n';
		}

	}

}

int main()
{
	PrintPerfectNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number? "));

	return 0;
}