#include<iostream> //#50/2
using namespace std;

int MySqrt(float Number)
{
	return pow(Number, 0.5);
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
	cout << "My Sqrt Result : " << MySqrt(Number) << endl;
	cout << "C++ Sqrt Result : " << sqrt(Number) << endl;

	return 0;
}