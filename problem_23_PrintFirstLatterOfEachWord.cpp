//  write a program to read a string then print 
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

void PrintFirstLetter(string S1)
{
	bool IsFirstLetter = true;

	for (short i=0;i<=S1.length();i++)
	{
		if (S1[i] != ' ' && IsFirstLetter)
		{
			cout << S1[i] << endl;
		}

		IsFirstLetter = (S1[i] == ' ' ? true : false);

	}
}

int main()
{	
	PrintFirstLetter(ReadString());

	return 0;
}

