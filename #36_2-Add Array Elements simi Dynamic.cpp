#include<iostream> //#36/2
#include<string>
#include<cmath>

using namespace std;

int ReadNumber()
{
	int Number = 0;
	
	cout <<"\n\nPlease enter a number? ";
	cin >> Number;

	return Number;
}

void AddArrayElements(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1.
	arrLength++;
	arr[arrLength - 1] = Number;

}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
	bool AddMore = true;

	do
	{
		AddArrayElements(ReadNumber(), arr, arrLength);

		cout << "\nDo you want to add more numbers? [0]:No, [1]:Yes? ";
		cin >> AddMore;

	} while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << "  ";

	cout << '\n';
	
}

int main()
{
	int arr[100], arrLenght = 0;
	InputUserNumbersInArray(arr, arrLenght);

	cout << "\nArray Lenght: " << arrLenght << endl;
	cout << "Array Elements: ";
	PrintArray(arr, arrLenght);
	
	return 0;
}