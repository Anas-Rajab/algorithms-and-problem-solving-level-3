//  write a program to read a string then 
//	count all vowels in that string.
//      (vowels letter = a e i u o)
//_____________________________________________


#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string s1;

	cout << "Pleas enter your string : " << endl;
	getline(cin, s1);

	return s1;
}

bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') || (Ch1 == 'e')|| (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

short CountVowelLetter(string S1)
{
	short Count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			Count++;
		}
	}
	return Count;
}

int main()
{
	string S1 = ReadString();

	cout << "\nNumber of vowels is : " << CountVowelLetter(S1) << endl;

	return 0;
}



