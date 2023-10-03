//  write a program to read a string then lowercase 
//	the first letter of each word in that string.
//_____________________________________________

#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string s1;

	cout << "Enter your string : ";
	getline(cin, s1);

	return s1;
}

string lowerFirstLetterOfEachWord(string S1)
{
	bool IsFirstLetter = true;

	for (short i = 0; i <= S1.length(); i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}

		IsFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString after conversion:\n";
	S1 = lowerFirstLetterOfEachWord(S1);

	cout << S1 << endl;

	return 0;
}

