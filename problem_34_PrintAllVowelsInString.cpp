//  write a program to read a string then 
//	print all vowels in that string.
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
	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));
}

void PrintVowels(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
		{
			cout << "   " << S1[i];
		}
	}
}

int main()
{
	string S1 = ReadString();

	cout << "\nvowel letters : ";
	PrintVowels(S1);

	return 0;
}



