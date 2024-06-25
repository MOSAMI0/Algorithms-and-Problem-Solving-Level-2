#include<iostream> //#35/2
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

int ReadNumber()
{
	int Number = 0;
	
	cout <<"\n\nPlease enter a number to search for?" << endl;
	cin >> Number;

	return Number;
}

short FindNumberPositionInArray(short Number, int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
			return i; //this will break the function and return the index.
	}
	// if u reached here, this means the number is not found.
	return -1;
}

bool IsNumberInArray(short Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

int main()
{
	// Seeds the random number generator in C++, called onley once. 
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: \n";
	PrintArray(arr, arrLength);

	int Number = ReadNumber();
	cout << "\nNumber you are looking for is: ? " << Number << endl;

	short NumberPosition = FindNumberPositionInArray(Number, arr, arrLength);
	
	if (!IsNumberInArray(Number, arr, arrLength))
		cout << "No, The number is not found :-(\n";
	else
	{
		cout << "Yes, it is found :-)\n";

	}

	return 0;
}