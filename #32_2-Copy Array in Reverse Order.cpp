#include<iostream> //#32/2
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

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[arrLength-1-i];
}


int main()
{
	// Seeds the random number generator in C++, called onley once. 
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);
	
	int arr2[100];
	CopyArrayInReverseOrder(arr, arr2, arrLength);

	cout << "\nArray 1 Elements: ";
	PrintArray(arr, arrLength);
	cout << endl;

	cout << "\nArray 2 Elements after copying array 1 in reversed order : ";
	PrintArray(arr2, arrLength);
	cout << endl;



	return 0;
}