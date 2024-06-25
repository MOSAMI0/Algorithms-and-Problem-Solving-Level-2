#include<iostream> //#41/2
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
	arrLength = 6;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;

}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << "  ";

	}
}

bool IsPalindromeArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] != arr[arrLength - i - 1]) // arr[arrLength - i -1] this is the last number in array.
		{
			return false;

		}
		return true;

	}
}

int main()
{
	int arr[100], arrLength = 0;
	FillArray(arr, arrLength);

	cout << "\nArray Elements: \n";
	PrintArray(arr, arrLength);

	cout << endl;
	if (IsPalindromeArray(arr, arrLength))

		cout << "\nYes , it is a Plindrome array.\n";
	else
		cout << "\nNo , it is NOT a Plindrome array.\n";

	return 0;
}