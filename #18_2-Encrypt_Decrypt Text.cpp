#include<iostream> //#18/2
#include<string>
#include<cmath>

using namespace std;

string ReadText()
{
	string Text;

	cout << "PLease enter Text? \n";
	getline(cin, Text);

	return Text;


}

string EncryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + EncryptionKey);
	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}


int main()
{
	const short EncryptionKey = 2; //this is the key.

	string Text = ReadText();
	string TextAfterEncryption = EncryptText(Text, EncryptionKey);
	string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "\nText Before Encryption : " << Text << endl;
	cout << "Text After Encryption : " << TextAfterEncryption << endl;
	cout << "Text After Decryption : " << TextAfterDecryption << endl;


	return 0;
}