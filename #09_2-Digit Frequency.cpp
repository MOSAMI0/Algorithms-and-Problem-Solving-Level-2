#include<iostream> //#09/2
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

int CountDigitFrequency(short DigitToCheck, int Number)
{
	int Remainder = 0, Frequency = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			Frequency++;
		}

	}
	return Frequency;
}

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);

		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequency is "
				<< DigitFrequency << " Time(s).\n";
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please enter the number? ");

	PrintAllDigitsFrequency(Number);



	return 0;
}