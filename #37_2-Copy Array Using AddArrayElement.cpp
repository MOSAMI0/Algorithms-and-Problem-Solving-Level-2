#include<iostream> //#37/2
#include<string>
#include<cmath>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number.
	int randomNum = rand() % (To - From + 1) + From;

	return randomNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of emlements:\n";
	cin >> arrLength;

	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);

}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << "  ";

	}
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1.
	arrLength++;
	arr[arrLength - 1] = Number;

}

void CopyArrayUsingAddElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
		
}

int main()
{
	// Seeds the random number generator in C++, called onley once. 
	srand((unsigned)time(NULL));

	int arr[100], arrLength = 0, arrLength2 = 0;

	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];
	CopyArrayUsingAddElement(arr, arr2, arrLength, arrLength2);

	cout << "\nArray 1 Elements: ";
	PrintArray(arr, arrLength);
	cout << endl;

	cout << "\nArray 2 Elements after copy : ";
	PrintArray(arr2, arrLength2);
	cout << endl;



	return 0;
}