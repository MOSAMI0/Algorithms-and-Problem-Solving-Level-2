#include<iostream> //#17/2
#include<string>
#include<cmath>

using namespace std;

string ReadPassword()
{
	string Password;

	cout << "PLease enter a 3-Letters Password (all capital)? \n";
	cin >> Password;

	return Password;


}

bool GuessPassword(string OriginalPassword)
{
	cout << endl;
	string word = "";
	int Counter = 0;
	for (int i = 65; i <= 90; i++)
	{

		for (int j = 65; j <= 90; j++)
		{
			
			for (int h = 65; h <= 90; h++)
			{
				Counter++;
				word += char(i);
				word += char(j);
				word += char(h);
				cout << "Trial [" << Counter << "] : " << word << endl;

				if (word == OriginalPassword)
				{
					
					cout << endl << endl;
					cout << "Password is "<<word<<"\n";
					cout << "Found after " << Counter << " Trial(s)" << endl;
					return true;
				}
				
				word = "";
			}
		}
		
	}
}

int main()
{
	GuessPassword(ReadPassword());

	return 0;
}