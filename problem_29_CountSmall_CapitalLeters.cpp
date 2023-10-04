//  write a program to read a string then
//	count small,Capital  letters in that string .
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

short CountSmallLettersInString(string S1)
{
	short SmallLettersCount = 0;

	for (short i = 0; i <= S1.length(); i++)
	{
		if (islower(S1[i]))
		{
			SmallLettersCount++;
		}
	}
	return SmallLettersCount;
}

short CountCapitalLettersInString(string S1)
{
	short CapitalLettersCount = 0;

	for (short i = 0; i <= S1.length(); i++)
	{
		if (isupper(S1[i]))
		{
			CapitalLettersCount++;
		}
	}
	return CapitalLettersCount;
}

int main()
{
	string S1 = ReadString();

	short SmallLettersCount = CountSmallLettersInString(S1);

	cout << "\n String length = " << S1.length() << endl;

	cout << "Capital letters count = " << CountCapitalLettersInString(S1);

	cout << "\nSmall letters count = " << CountSmallLettersInString(S1) << endl;

	return 0;
}

