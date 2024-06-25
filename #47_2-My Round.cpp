#include<iostream> //#47/2
using namespace std;

float GetFractionPart(float Number)
{
	return Number - int(Number);
}

float MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);

	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart) >= .5)
	{
		if (Number > 0)
			return ++IntPart;
		else
			return --IntPart;

	}
	else
		return IntPart;

}

float ReadNumber()
{
	float number;
	cout << "Please enter a number? " << endl;
	cin >> number;
	return number;

}

int main()
{
	float Number = ReadNumber();
	cout << "My Round Result : " << MyRound(Number) << endl;
	cout << "C++ Round Result : " << round(Number) << endl;

	return 0;
}