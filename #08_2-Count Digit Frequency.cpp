#include<iostream> //#08/2
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

int CountDigitFrequency(short DigitToCheck,int Number)
{
	int Remainder = 0,Frequency =0;
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

int main()
{
	int Number = ReadPositiveNumber("Please enter the main number? ");
	short DigitToCheck = ReadPositiveNumber("Please enter one digit to check?");

	cout << "\nDigit " << DigitToCheck << " Frequency is "
		<< CountDigitFrequency(DigitToCheck, Number) << " Time(s).\n";
		
					

	return 0;
}