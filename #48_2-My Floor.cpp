#include<iostream> //#48/2
using namespace std;

float MyFloor(float Number)
{
	if (Number > 0)
		return int(Number);
	else
		return int(Number) - 1;
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
	cout << "My Floor Result : " << MyFloor(Number) << endl;
	cout << "C++ Floor Result : " << floor(Number) << endl;

	return 0;
}