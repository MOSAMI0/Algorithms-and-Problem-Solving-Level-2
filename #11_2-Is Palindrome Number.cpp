#include<iostream> //#11/2
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

int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;


	}
	return Number2;
}

bool IsPalindromeNumber(int Number)
{
	return  Number == ReverseNumber(Number);
}

int main()
{
	if (IsPalindromeNumber(ReadPositiveNumber("Please enter a positive number? ")))

		cout <<"\nYes , it is a Plindrome number.\n";
	else
		cout << "\nNo , it is NOT a Plindrome number.\n";

	return 0;
}