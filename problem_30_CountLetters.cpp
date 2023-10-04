//  write a program to read a string then read
//	a character then count the character in that string .
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

char ReadCharacter()
{
	char Ch1;

	cout << "\nPleas enter your Charcter : ";
	cin >> Ch1;

	return Ch1;
}

short CountLetterInString(string S1, char Letter)
{
	short Count = 0;

	for (short i = 0; i <= S1.length(); i++)
	{
		if (S1[i] == Letter)
		{
			Count++;
		}
	}
	return Count;
}

int main()
{
	string S1 = ReadString();

	char Ch1 = ReadCharacter();

	cout << "Letter '" << Ch1 << "' count = "
		<< CountLetterInString(S1, Ch1) << endl;

	return 0;
}

