#include<iostream> //#02/2
#include<string>
#include<cmath>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;

}

void PrintPrimeNumberFrom1ToN(int Number)
{
	cout << endl;
	cout << "Prime Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i<<'\n';
		}

	}
}

int main()
{
	PrintPrimeNumberFrom1ToN(ReadPositiveNumber("Please enter a positive number? "));

	return 0;
}