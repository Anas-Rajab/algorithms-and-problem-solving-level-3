//  write a program to read a string then read
//	a character then count the character in that string.
//       (Match case or Not).
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

char InvertLetterCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

short CountLetterInString(string S1, char Letter, bool MatchCase = false)
{
	short Count = 0;

	// count small letters
	if (MatchCase == false)
	{
		for (short i = 0; i <= S1.length(); i++)
		{
			if (S1[i] == Letter)
			{
				Count++;
			}
		}
		return Count;
	}

	// count small and capital letters

	else
	{
		for (short i = 0; i <= S1.length(); i++)
		{
			if (S1[i] == Letter || S1[i] == InvertLetterCase(Letter))
			{
				Count++;
			}
		}

		return Count;
	}
}

int main()
{
	string S1 = ReadString();

	char Ch1 = ReadCharacter();

	cout << "Letter '" << Ch1 << "' count = "
		<< CountLetterInString(S1, Ch1) << endl;

	cout << "Letter '" << Ch1 << "' and '"<< InvertLetterCase(Ch1)
		<< "' count = " << CountLetterInString(S1, Ch1,true) << endl;

	return 0;
}



