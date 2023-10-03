//  write a program to read a string then invert
//	all it`s letters case and print it.
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

char InvertLetterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

string InvertAllStringLettersCase(string S1)
{
	for (short i = 0; i <= S1.length(); i++)
	{
		S1[i] = InvertLetterCase(S1[i]);
	}
	return S1;
}
int main()
{
	string S1 = ReadString();

	cout << "\nString after inverting : \n";

	cout << InvertAllStringLettersCase(S1) << endl;

	return 0;
}

