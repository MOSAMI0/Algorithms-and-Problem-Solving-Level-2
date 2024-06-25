#include<iostream> //#16/2
#include<string>
#include<cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);


	return Number;


}

void PrintWordsFromAAAtoZZZ()
{
	cout << endl;

	for (int i = 65; i <= 90; i++)
	{

		for (int j = 65; j <= 90; j++)
		{
			for (int h = 65; h <= 90; h++)
			{
				cout << char(i) << char(j) << char(h) << endl;
			}
		}
		cout << "\n -------------------------------------\n";
	}
}

int main()
{
	PrintWordsFromAAAtoZZZ();

	return 0;
}