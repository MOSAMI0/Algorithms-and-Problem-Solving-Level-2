#include<iostream> //#46/2
using namespace std;

float MyABS(float number)
{

	if (number > 0)
		return number;
	else
		return number * -1;

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
	cout << "My abs Result : " << MyABS(Number) << endl;
	cout << "C++ abs Result : " << abs(Number) << endl;

	return 0;
}