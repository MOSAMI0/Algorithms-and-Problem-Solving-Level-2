#include<iostream> //#51/2
using namespace std;

float MyCbrt(float Number)
{
	return pow(Number, 0.35);
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
	cout << "My Cbrt Result : " << MyCbrt(Number) << endl;
	cout << "C++ Cbrt Result : " << cbrt(Number) << endl;

	return 0;
}