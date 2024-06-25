#include<iostream> //#24/2
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
		cout << arr[i]<< "  ";
		
	}
}

int MaxNumberInArray(int arr[100], int arrLength)
{
	int Max = 0;
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}

int main()
{
	// Seeds the random number generator in C++, called onley once. 
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << endl;
	cout << "\nMax Number is: ";
	cout << MaxNumberInArray(arr, arrLength) << endl;

	return 0;
}