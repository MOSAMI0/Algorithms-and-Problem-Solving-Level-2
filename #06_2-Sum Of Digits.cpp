#include<iostream> //#06/2
#include<string>
#include<cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);


	return Number;


}

int SumOfDigits(int Number)
{
	int Sum = 0;
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum += Remainder;
		
	}

	return Sum;
}

int main()
{
	cout << "\nSum of digits = "
		<< SumOfDigits(ReadPositiveNumber("Please enter a positive number? "))
		<< '\n';
					

	return 0;
}