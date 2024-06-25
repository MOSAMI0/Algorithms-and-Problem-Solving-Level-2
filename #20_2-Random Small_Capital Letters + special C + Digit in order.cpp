#include<iostream> //#20/2
#include<string>
#include<cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number.
	int randomNum = rand() % (To - From + 1) + From;

	return randomNum;
}

enum  enCharType { SmallLetters = 1, CapitalLetters = 2, SpecialCharacter = 3, Digits = 4 };

 char GetRandomCharacter(enCharType CharType)
{
	 switch (CharType)
	 {
	 case enCharType::SmallLetters:
		 return char(RandomNumber(97, 122));
		 break;
	 case enCharType::CapitalLetters:
		 return char(RandomNumber(65, 90));
		 break;
	 case enCharType::SpecialCharacter:
		 return char(RandomNumber(33, 47));
		 break;
	 case enCharType::Digits:
		 return char(RandomNumber(48, 57));
		 break;
	 
	 }
}

int main()
{
	// Seeds the random number generator in C++, called onley once. 
	srand((unsigned)time(NULL));
	
	cout << GetRandomCharacter(enCharType::SmallLetters) << endl;
	cout << GetRandomCharacter(enCharType::CapitalLetters) << endl;
	cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
	cout << GetRandomCharacter(enCharType::Digits) << endl;

	


	return 0;
}